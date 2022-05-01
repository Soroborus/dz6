#include "func.h"
void sort(double *a,int n) {
	double max = a[0];
	int nmax = 0;
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n- i - 1; j++) {
			if (a[j] > a[j + 1]) {
				
				max = a[j];
				a[j] = a[j + 1];
				a[j + 1] = max;
			}
		}
	}

	cout << endl;

	for (int i = 0; i < n; i++) {
		cout << a[i] << endl;
	}
}

void sort(int *a,int n) {

	int max = a[0];
	int nmax = 0;
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (a[j] > a[j + 1]) {

				max = a[j];
				a[j] = a[j + 1];
				a[j + 1] = max;
			}
		}
	}

	cout << endl;

	for (int i = 0; i < n; i++) {
		cout << a[i] << endl;
	}
}