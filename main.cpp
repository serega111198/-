#include "stdafx.h"
#include <iostream>
#include "bubble-sorting.h"

using namespace std;

int arrayInput(int n, int *arr)
{
	int a;
	int result = -1;
	if (n > 0)
	{
		cout << "Введите элементы:" << endl;
		for (int i = 0; i < n; i++) {

			cout << "A[" << i << "]=";

			while (!(cin >> a) || (cin.peek() != '\n'))
			{
				cin.clear();
				while (cin.get() != '\n');
				cout << "Ошибка ввода! Введите заново" << endl;
				cout << "A[" << i << "]=";
				result = 1;
			}
			arr[i] = a;

		}
	}
	else {
		result = 2;
	}
	return result;
}

int main()
{
	setlocale(LC_ALL, "Rus");
	int i, n;
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
	int resultInput = arrayInput(n, arr);
	cout << endl;
	if (resultInput == 2)
		cout << "Вы ввели неверное количество элементов массива!" << endl;
	else
	{


		cout << "Заданный порядок: ";
		for (i = 0; i < n; i++)
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
		for (i = 0; i < n; i++)
			cout << arr[i] << " ";

		cout << endl;
	}
	system("pause");
	return 0;
}