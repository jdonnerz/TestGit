/// variables ///

// variable types:
// character: char, char16_t, char32_t, wchar_t.
// integer: short int, int, long int, long long int.
// unsigned integer: as above but non-negative.
// floating point: float, double, long double.
// boolean: bool
// void: void

// variable sizes:
// these variable types all have a minimum size (maximum is determined by the compiler).
// eg. an unsigned int is = 16 bits.
// what this means it can represent 2^16 distinct values.
// however, this also occupies more space in memory.

// note: for floats, the size effects their precision. (e.g. more decimal places)

// declaring a variable:
int x;
unsigned long long y, z;

// using operators: +, -, *, /
int a = 1;
a = a + 1;
a += 1;
a *= 1;

// can even define variables with same name but different type
char x;
bool x;

// variables above are all uninitialised. (i.e. they have no value)
int xx = 1;
float yy = 1.1;
int zz = 1.1;

// input and output
// we can use a function from the C++ STL
#include <iostream>

cout << "This will output a message to console." << endl;
int a;
cout << "Line below asks to input and assigns to a." << endl;
cin >> a;
// if we were to put in a type char, e.g. 'a', the program will crash.
