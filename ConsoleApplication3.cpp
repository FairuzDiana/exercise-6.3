#include "pch.h"
#include <iostream>

using namespace std;

void swap(int a, int b);

int main()
{
	int a, b;
	cout << "please enter 2 integer: " << endl;
	cin >> a >> b;
	swap(a,b);
	
	cout << "a in main is : " << a << endl;
	cout << "b in main is : " << b << endl;
	
	return 0;
}

void swap(int a, int b)
{
	int c, d;
	cout << "you entered a is " << a << endl;
	cout << "you entered b is " << b << endl;

	c = b;
	d = a;

	cout << "after swap the value a now is " << c << endl;
	cout << "after swap the value b now is " << a << endl;

}
