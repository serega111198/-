#include "stdafx.h"
#include <iostream>
#include "bubble-sorting.h"

using namespace std;

int main() {
 setlocale(LC_ALL, "Rus");
 int X, j, i, n;
 int mode;
 mode = 0;
 while (mode != 1 && mode != 2) {
  cout << "В каком порядке будем сортировать?\n 1)В порядке убывания\n 2)В порядке возрастания" << endl;
  cin >> mode;

  if (mode != 1 && mode != 2) {
   cout << "Вы ввели неверный режим работы программы" << endl;
  }
 }

 cout << "Введите количество элементов: ";
 cin >> n;
 int arr[50];

 cout << "Введите элементы:" << endl;
 for (i = 0; i<n; i++) {
  cout << "A[" << i << "]=";
  cin >> arr[i];
 }

 cout << "Заданный порядок: ";
 for (i = 0; i<n; i++)
  cout << arr[i] << " ";
 cout << endl;
 cout << "Отсортированный порядок: ";

 if (mode == 1) {
  bubbleSortingUp(arr, n);
 }
 else if (mode == 2) {
  bubbleSortingDown(arr, n);
 }
 else {
  return 0;
 }

 for (i = 0; i<n; i++)
  cout << arr[i] << " ";

 cout << endl;

 system("pause");
 return 0;
}