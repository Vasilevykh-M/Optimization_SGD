#include "VectorsOperation.h"
#include <algorithm>

std::vector<double> SubtractionVector(std::vector<double> a, std::vector<double> b)
{
	std::vector<double> res;
	for (int i = 0; i < a.size(); ++i)
		res.push_back(a[i] - b[i]);

	return res;
}

double FirstVectorNorm(std::vector<double> a)
{
	return *std::max_element(a.begin(), a.end());
}

double SecondVectorNorm(std::vector<double> a)
{
	double sum = 0;

	for (int i = 0; i < a.size(); ++i)
		sum += a[i];

	return sum;
}

double ScalarMult(std::vector<double> a, std::vector<double> b)
{
	double sum = 0;

	for (int i = 0; i < a.size(); ++i)
		sum += a[i] * b[i];

	return sum;
}

double ThirdVectorNorm(std::vector<double> a)
{
	return ScalarMult(a, a);
}
