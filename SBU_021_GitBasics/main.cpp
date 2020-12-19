#include"Functions.h"

void main()
{
	setlocale(LC_ALL, "");

	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое : " << Avg(arr, n) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(arr, n) << endl;
	cout << "Отсортированный массив:\n";
	Sort(arr, n);
	Print(arr, n);
	cout << "\n-----------------------------------------------------------------\n";

	double brr[n];
	FillRand(brr, n);
	Print(brr, n);
	cout << "Сумма элементов массива: " << Sum(brr, n) << endl;
	cout << "Среднее арифметическое : " << Avg(brr, n) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(brr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(brr, n) << endl;
	cout << "Отсортированный массив:\n";
	Sort(brr, n);
	Print(brr, n);
	cout << "\n-----------------------------------------------------------------\n";

	int arr2[ROWS][COLS];
	FillRand(arr2, ROWS, COLS);
	Print(arr2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(arr2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое : " << Avg(arr2, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(arr2, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(arr2, ROWS, COLS) << endl;
	cout << "Отсортированный массив:\n";
	Sort(arr2, ROWS, COLS);
	Print(arr2, ROWS, COLS);
	cout << "\n-----------------------------------------------------------------\n";

	double brr2[ROWS][COLS];
	FillRand(brr2, ROWS, COLS);
	Print(brr2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(brr2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое : " << Avg(brr2, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(brr2, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(brr2, ROWS, COLS) << endl;

	cout << "\n-----------------------------------------------------------------\n";

	char crr[n];
	FillRand(crr, n);
	Print(crr, n);

	cout << "\n-----------------------------------------------------------------\n";

	char crr2[ROWS][COLS];
	FillRand(crr2, ROWS, COLS);
	Print(crr2, ROWS, COLS);
}

