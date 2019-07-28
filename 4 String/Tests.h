#include <iostream>
#include "String.h"
using namespace std;

typedef enum
{
	OK,
	FAIL
}Test;

typedef struct
{
	String input1;
	String input2;
	char* expectedString;
	int expectedSize;
}TestCase;