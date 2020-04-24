#include <iostream>
#include "Averager.h"

using namespace std;

int main()
{
	Averager averageTemperature;
	int i;
	for (i = 0; i < 120; i++) {
		averageTemperature.addReading(i);
		float average = averageTemperature.getAverage();
		std::cout << "Average is " << average << endl;
	}
}