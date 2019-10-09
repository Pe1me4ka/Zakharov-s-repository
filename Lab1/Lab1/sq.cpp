#include <iostream>
#include <cmath>

static void TriangleSpace1(double a, double b, double c, double S) {
	S = (a + b + c) / 2;
	S = sqrt(S * (S - a) * (S - b) * (S - c));
}

static void TriangleSpace2(double* a, double* b, double* c, double* S) {
	*S = (*a + *b + *c) / 2;
	*S = sqrt(*S * (*S - *a) * (*S - *b) * (*S - *c));
}

static void TriangleSpace3(double& a, double& b, double& c, double& S) {
	S = (a + b + c) / 2;
	S = sqrt(S * (S - a) * (S - b) * (S - c));
}

static void TriangleSpace4(const double a, const double b, const double c, double S) {
	S = (a + b + c) / 2;
	S = sqrt(S * (S - a) * (S - b) * (S - c));
}

static void TriangleSpace5(const double* a, const double* b, const double* c, double* S) {
	*S = (*a + *b + *c) / 2;
	*S = sqrt(*S * (*S - *a) * (*S - *b) * (*S - *c));
}

static void TriangleSpace6(const double& a, const double& b, const double& c, double& S) {
	S = (a + b + c) / 2;
	S = sqrt(S * (S - a) * (S - b) * (S - c));
}