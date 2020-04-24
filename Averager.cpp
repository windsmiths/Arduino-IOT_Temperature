#include "math.h"
#include "Averager.h"

Averager::Averager() {
	initialise(defReadingsToAverage);
};

Averager::Averager(int readingsToAverage) {
	initialise(readingsToAverage);
};

void Averager::initialise(int readingsToAverage) {
	this->readingsToAverage = readingsToAverage;
	this->readings = new float[readingsToAverage];
};


void Averager::addReading(float reading) {
	if (noOfReadings < readingsToAverage) {
		noOfReadings ++;
	}
	else {
		sumOfReadings -= readings[index];
	}
	readings[index] = reading;
	sumOfReadings += reading;
	index ++;
	if (index >= readingsToAverage) {
		index = 0;
	}
};

float Averager::getAverage() {
	if (noOfReadings > 0) {
		return sumOfReadings / noOfReadings;
	}
	else {
		return NAN;
	}
};
