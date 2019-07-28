#include "String.h"

int main() 
{
	String s1('C');
	String s2('H');
	String s3("HUD");
	String s4("MCU");
	String s5(s4);

	cout << "Test 1" << '\t' << "Input 1: " << s1 << '\t' << "Operator: =" << '\t' << "Input 2: "  << s2 << '\t';
	s1 = s2;
	cout << "Output: " << s1 << endl;

	cout << "Test 2" << '\t' << "Input 1: " << s1 << '\t' << "Operator: +=" << '\t' << "Input 2: "  << s2 << '\t';
	s1 += s2;
	cout << "Output: " << s1 << endl;

	cout << "Test 3" << '\t' << "Input 1: " << s3 << '\t' << "Operator: =" << '\t' << "Input 2: "  << s4 << '\t';
	s3 = s4;
	cout << "Output: " << s3 << endl;

	cout << "Test 4" << '\t' << "Input 1: " << s2 << '\t' << "Operator: +=" << '\t' << "Input 2: " << s4 << '\t';
	s2 += s4;
	cout << "Output: " << s2 << endl;

	cout << "Test 5" << '\t' << "Input 1: " << s2 << '\t' << "Operator: =" << '\t' << "Input 2: " << s4 << '\t';
	s2 = s4;
	cout << "Output: " << s2 << endl;

	cout << "Test 6" << '\t' << "Input 1: " << s2 << '\t' << "Operator: [2]" << '\t';
	cout << "Output: " << s2[2] << endl;

	cout << "Test 7" << '\t' << "Input 1: " << s2 << '\t' << "Operator: [2]" << '\t' << "Input 2: " << '0' << '\t';
	s2[2] = '0';
	cout << "Output: " << s2 << endl;

	cout << "Test 8" << '\t' << "Input 1: " << s2 << '\t' << "Operator: [4]" << '\t';
	cout << "Output: " << s2[4] << endl;

	while (1);
}