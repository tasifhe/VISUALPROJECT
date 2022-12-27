#ifndef MAIN_H
	#define MAIN_H

	#include <iostream>
	#include <cmath>
	#include <inttypes.h>
	
	using namespace std;

	void 	parseAddition();
	void 	parseSubtraction();
	void 	parseDivision();
	void 	parseMultiplication();
	void 	parseExponentiation();
	void 	parseSquareRoot();
	void 	parseSine();
	void 	parseCosine();
	void 	parseTangent();
	void 	help();
	void 	error();

	float 	degree2Radian(float degree);
	float 	implementationPower(float base, int power);
	int64_t implementationFactorial(int number);
	float 	implementationSine(float degree);
	float 	implementationCosine(float degree);

#endif
