#include <iostream>
#include <cstdlib>
#include <ctime>

int N;

using namespace std;

void func(double**, double**, double**);
void funcPrint(double**);

int main() {
	srand(time(0));

	cout << "Number N of rows and columns: ";
	cin >> N;
	cout << endl;
	
	double** A = new double* [N];
	for (int i = 0; i < N; i++) {
		A[i] = new double[N];
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			A[i][j] = 1 + rand() % 5;
		}
	}

	double** B = new double* [N];
	for (int i = 0; i < N; i++) {
		B[i] = new double[N];
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			B[i][j] = 1 + rand() % 5;
		}
	}

	double** C = new double* [N];
	for (int i = 0; i < N; i++) {
		C[i] = new double[N];
	}

	func(A, B, C);
	funcPrint(A);
	funcPrint(B);
	funcPrint(C);

	for (int i = 0; i < N; i++) {
		delete[] A[i];
	}
	for (int i = 0; i < N; i++) {
		delete[] B[i];
	}
	for (int i = 0; i < N; i++) {
		delete[] C[i];
	}
	delete[] A;
	delete[] B;
	delete[] C;
	return 0;
}

void func(double** A, double** B, double** C) {
	int S = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			for (int o = 0; o < N; o++) {
				S += A[i][o] * B[o][j];
			}
			C[i][j] = S;
			S = 0;
		}
	}
}

void funcPrint(double** X) {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << X[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}