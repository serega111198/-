#include "stdafx.h"


int  swap(int *xp, int *yp) {
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

int bubbleSortingUp(int a[], int size) {
	int x, j;
	for (int i = 0; i < size - 1; i++)
	{
		if (a[i] < -1500000000 || a[i]>1500000000)
			return 1;
		for (j = 0; j < size - 1 - i; j++)
			if ((a[j] < a[j + 1]))
				swap(&a[j], &a[j + 1]);
	}
	return 0;
}

int bubbleSortingDown(int a[], int size) {
	int x, j;
	for (int i = 0; i < size - 1; i++)
	{
		if (a[i] < -1500000000 || a[i]>1500000000)
			return 1;
		for (j = 0; j < size - 1 - i; j++)
			if ((a[j] > a[j + 1]))
				swap(&a[j], &a[j + 1]);
	}
	return 0;
}