# -
зодание по трпо 
Привет, петухи, вы должны сделать тестовые репозитории, учитесь, ребят.
(сделано)
код пузырька:
#include "stdafx.h"
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int X, j, i, n;
	cout << "Vvedite kol-vo elementov: ";
	cin >> n;
	int A[50];
	cout << "Vvedite elementi:" << endl;
	for (i = 0; i<n; i++) {
		cout << "A[" << i << "]=";
		cin >> A[i];
	}
	cout << "Zadanniy poryadok: ";
	for (i = 0; i<n; i++)
		cout << A[i] << " ";
	cout << endl;
	cout << "Otsortirovanniy poryadok: ";
	for (i = 0; i<6 - 1; i++)
		for (j = 0; j<n - 1 - i; j++)
			if (A[j]>A[j + 1]) {
				X = A[j];
				A[j] = A[j + 1];
				A[j + 1] = X;
			}
	for (i = 0; i<n; i++)
		cout << A[i] << " ";
	cout << endl;

	system("pause");
	return 0;
}
