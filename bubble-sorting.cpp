#include "stdafx.h"

void swap(int xp, int yp) {
 int temp = *xp;
 xp = yp;
 *yp = temp;
}

void bubbleSortingUp(int a[], int size) {
 int x, j;
 for (int i = 0; i < size - 1; i++)
  for (j = 0; j < size - 1 - i; j++)
   if ((a[j] < a[j + 1])) {
    swap(&a[j], &a[j + 1]);
   }
}

void bubbleSortingDown(int a[], int size) {
 int x, j;
 for (int i = 0; i < size - 1; i++)
  for (j = 0; j < size - 1 - i; j++)
   if ((a[j] > a[j + 1])) {
    swap(&a[j], &a[j + 1]);
   }
}