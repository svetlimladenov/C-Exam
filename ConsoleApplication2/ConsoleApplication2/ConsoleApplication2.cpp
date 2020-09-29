// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Prog.cpp"

using namespace std;

int main()
{
	Prog prog(1, 2, 5);
	int sum = prog();
	cout << sum;
}
