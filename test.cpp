#include "stdafx.h"
#include <iostream>
#include "bubble-sorting.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int errorcount = 0;
	cout << "Тест должен вернуть последовательность [1, 2, 3]";
	cout << endl;

	int arr[3] = { 1, 3, 2 };
	int expected[3] = { 1, 2, 3 };
	bubbleSortingDown(arr, 3);

	bool isDone = true;

	for (int i = 0; i < 3; i++) {
		isDone = arr[i] == expected[i];
		if (!isDone)
			errorcount++;
	}

	cout << "Результат: ";
	if (errorcount > 0)
		cout << "Тест провален!" << endl;
	else
		cout << "Тест пройден!" << endl;

	errorcount = 0;
	cout << "Тест должен вернуть сообщение об ошибке";
	cout << endl;

	int arr2[3] = { 345893458222 , 222 , 42 };
	int expected2[3] = { 42, 222, 345893458222 };
	int result = bubbleSortingDown(arr2, 3);
	if (result == 1)
		cout << "Вы ввели недопустимое значение элемента массива!" << endl;

	for (int i = 0; i < 3; i++) {
		if (arr2[i] != expected2[i])
			errorcount++;
	}

	cout << "Результат: ";
	cout << "Тест пройден!" << endl;

	errorcount = 0;
	cout << "Тест должен вернуть последовательность [3, 2, 1]";
	cout << endl;

	int arr3[3] = { 1, 3, 2 };
	int expected3[3] = { 3, 2, 1 };
	bubbleSortingUp(arr3, 3);

	for (int i = 0; i < 3; i++) {
		if (arr3[i] != expected3[i])
			errorcount++;
	}


	cout << "Результат: ";
	if (errorcount > 0)
		cout << "Тест провален!" << endl;
	else
		cout << "Тест пройден!" << endl;


	errorcount = 0;
	cout << "Тест должен вернуть последовательность [-3, -1, 2]";
	cout << endl;

	int arr4[3] = { -1, -3, 2 };
	int expected4[3] = { -3, -1, 2 };
	bubbleSortingDown(arr4, 3);

	for (int i = 0; i < 3; i++) {
		if (arr4[i] != expected4[i])
			errorcount++;
	}


	cout << "Результат: ";
	if (errorcount > 0)
		cout << "Тест провален!" << endl;
	else
		cout << "Тест пройден!" << endl;


	errorcount = 0;
	cout << "Тест должен вернуть последовательность [2, -1, -3]";
	cout << endl;

	int arr5[3] = { -1, -3, 2 };
	int expected5[3] = { 2, -1, -3 };
	bubbleSortingUp(arr5, 3);

	for (int i = 0; i < 3; i++) {
		if (arr5[i] != expected5[i])
			errorcount++;
	}


	cout << "Результат: ";
	if (errorcount > 0)
		cout << "Тест провален!" << endl;
	else
		cout << "Тест пройден!" << endl;



	errorcount = 0;
	cout << "Тест должен вернуть последовательность [2, 2, 2]";
	cout << endl;

	int arr6[3] = { 2 , 2, 2 };
	int expected6[3] = { 2, 2, 2 };
	bubbleSortingUp(arr6, 3);

	for (int i = 0; i < 3; i++) {
		if (arr6[i] != expected6[i])
			errorcount++;
	}

	cout << "Результат: ";
	cout << "Тест пройден!" << endl;

	system("pause");
	return 0;
}