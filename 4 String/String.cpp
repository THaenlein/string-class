#include <iostream>
#include "String.h"
using namespace std;

String::String()
{
	size = 0;
	str = new char[1];
	str[0] = '\0';
}


String::String(char c)
{
	size = 1;
	str = new char[2];
	str[0] = c;
	str[1] = '\0';
}

String::String(const char *s)
{
	size = sizeofChar((char*)s);
	str = new char[size+1];

	copy(str, (char*)s);

	*str = '\0';
	str -= (size);
}

String::String(const String& s)
{
	 str = new char [s.size+1];
	 copy(str, s.str);
	 size = s.size;
	 
	 *str = '\0';
	 str -= size;
}

String::~String() 
{ 
	delete[] str; 
}

char& String::operator[](int index)
{
	if (index > size)
	{
		return str[size];
	}
	return str[index];
	
}

String& String::operator=(String& s) 
{
	if (this != &s)
	{
		delete[] str;
	}
	str = new char[s.size+1];
	size = s.size;

	copy(str, s.str);

	*str = '\0';
	str -= size;

	return *this;
}

String& String::operator+=(String& s) 
{
	char* temp = str;

	str = new char [size + s.size+1];
	size += s.size;

	copy(str, temp);
	copy(str, s.str);

	*str = '\0';
	str -= size;

	delete[] temp;
	return *this;
}

ostream& operator<< (ostream &out, String &s) 
{
	for (int i = 0; i<s.size; i++) {
		out << s.str[i];
	}

	return out;
}

void String::copy(char* &copyTo, char* copyFrom)
{
	while (*copyFrom != '\0')
	{
		*copyTo = *copyFrom;
		copyTo++;
		copyFrom++;
	}
}

int String::sizeofChar(char* c)
{
	int counter=0;
	while (*c != '\0')
	{
		c++;
		counter++;
	}
	c -= counter;
	return counter;
}