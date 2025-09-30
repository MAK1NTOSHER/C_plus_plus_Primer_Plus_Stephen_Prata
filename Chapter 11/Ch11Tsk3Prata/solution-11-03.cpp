#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include "vect.h"

int main()
{
	using namespace std;
	using VECTOR::Vector;
	srand(time(0));
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;
	unsigned long trials = 0;
	unsigned long highest = 0;
	unsigned long lowest = LLONG_MAX;
	unsigned long sum = 0;
	cout << "Enter target distance (q to quit): ";
	while (cin >> target)
	{
		cout << "Enter step lenght: ";
		if (!(cin >> dstep))
			break;
		cout << "Enter the number of trials: ";
		if (!(cin >> trials))
			break;
		for (unsigned long i = 0; i < trials; i++)
		{
			while (result.magval() < target)
			{
				direction = rand() % 360;
				step.reset(dstep, direction, Vector::POL);
				result = result + step;
				steps++;
			}
			sum += steps;
			if (steps > highest)
				highest = steps;
			else if (steps < lowest)
				lowest = steps;
			steps = 0;
			result.reset(0.0, 0.0);
		}
		cout << "After " << trials << " trials "
			 "number of steps to cover distance " << target << " in steps " << dstep << ":\n";
		cout << "Highest: " << highest << endl;
		cout << "Lowest: " << lowest << endl;
		cout << "Average: " << sum / trials << endl;
		cout << "Theoretical Average: " << pow((target / dstep), 2) << endl;
		cout << "Enter target distance (q to quit): ";
	}
	cout << "Bye!\n";
	cin.clear();
	while (cin.get() != '\n')
		continue;
	return 0;
}