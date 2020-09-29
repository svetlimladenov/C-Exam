// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Prog.cpp"
#include "TemplateProg.cpp"

using namespace std;

int main()
{
	TemplateProg<float> prog (2, 14, 3);
	float sum = prog();
	cout << sum << endl;

	TemplateProg<double> prog2(2, 14, 2);
	double sum2 = prog2();
	cout << sum2 << endl;
}
