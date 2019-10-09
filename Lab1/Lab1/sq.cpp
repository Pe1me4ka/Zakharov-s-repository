#include <iostream>
#include <cmath>

static double TriangleSpace1(double a, double b, double c) {
	double S;
	S = (a + b + c) / 2;
	S = sqrt(S * (S - a) * (S - b) * (S - c));
	return S;
}

static double TriangleSpace2(double *a, double *b, double *c) {
	double S;
	S = (*a + *b + *c) / 2;
	S = sqrt(S * (S - *a) * (S - *b) * (S - *c));
	return S;
}

static double TriangleSpace3(double &a, double &b, double &c) {
	double S;
	S = (a + b + c) / 2;
	S = sqrt(S * (S - a) * (S - b) * (S - c));
	return S;
}