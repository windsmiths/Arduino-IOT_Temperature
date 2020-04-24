class Averager {
	int readingsToAverage;
	int index = 0;
	int noOfReadings = 0;
	float *readings;
	float sumOfReadings = 0;
	const int defReadingsToAverage = 60;
	void initialise(int readingsToAverage);
public:
	Averager();
	Averager(int readingsToAverage);
	void addReading(float reading);
	float getAverage();
};