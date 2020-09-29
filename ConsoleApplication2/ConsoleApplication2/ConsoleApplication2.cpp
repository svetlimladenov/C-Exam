// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <iomanip>  
#include "Prog.cpp"
#include "TemplateProg.cpp"

using namespace std;

void TestThirdProblem();
void TestTemplateProg();
void TestProg();

int main()
{
	TestThirdProblem();
	//TestProg();
	//TestTemplateProg();
}

void TestThirdProblem()
{
	TemplateProg<float> progs[5] = {
	   TemplateProg<float>(1.5, 20, 3),
	   TemplateProg<float>(2.2, 20, 2),
	   TemplateProg<float>(2.1, 15, 3),
	   TemplateProg<float>(1.2, 6, 100),
	   TemplateProg<float>(1.3, 7, 15),
	};

	ofstream myfile("prog.txt");
	if (myfile.is_open())
	{
		for (int i = 0; i < 5; i++)
		{
			myfile <<" Sum = " << progs[i]() << endl;
		}
		myfile.close();
	}
}

void TestTemplateProg()
{
	TemplateProg<float> prog(2, 14, 3);
	float sum = prog();
	cout << sum << endl;

	TemplateProg<double> prog2(2, 14, 2);
	double sum2 = prog2();
	cout << sum2 << endl;
}


void TestProg()
{
	Prog prog(2, 14, 2);
	int sum = prog();
	cout << sum << endl;
}
