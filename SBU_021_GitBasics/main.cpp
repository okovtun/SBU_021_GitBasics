#include"Functions.h"

void main()
{
	setlocale(LC_ALL, "");

	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	cout << "����� ��������� �������: " << Sum(arr, n) << endl;
	cout << "������� �������������� : " << Avg(arr, n) << endl;
	cout << "����������� �������� � �������: " << minValueIn(arr, n) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(arr, n) << endl;
	cout << "��������������� ������:\n";
	Sort(arr, n);
	Print(arr, n);
	cout << "\n-----------------------------------------------------------------\n";

	double brr[n];
	FillRand(brr, n);
	Print(brr, n);
	cout << "����� ��������� �������: " << Sum(brr, n) << endl;
	cout << "������� �������������� : " << Avg(brr, n) << endl;
	cout << "����������� �������� � �������: " << minValueIn(brr, n) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(brr, n) << endl;
	cout << "��������������� ������:\n";
	Sort(brr, n);
	Print(brr, n);
	cout << "\n-----------------------------------------------------------------\n";

	int arr2[ROWS][COLS];
	FillRand(arr2, ROWS, COLS);
	Print(arr2, ROWS, COLS);
	cout << "����� ��������� �������: " << Sum(arr2, ROWS, COLS) << endl;
	cout << "������� �������������� : " << Avg(arr2, ROWS, COLS) << endl;
	cout << "����������� �������� � �������: " << minValueIn(arr2, ROWS, COLS) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(arr2, ROWS, COLS) << endl;
	cout << "��������������� ������:\n";
	Sort(arr2, ROWS, COLS);
	Print(arr2, ROWS, COLS);
	cout << "\n-----------------------------------------------------------------\n";

	double brr2[ROWS][COLS];
	FillRand(brr2, ROWS, COLS);
	Print(brr2, ROWS, COLS);
	cout << "����� ��������� �������: " << Sum(brr2, ROWS, COLS) << endl;
	cout << "������� �������������� : " << Avg(brr2, ROWS, COLS) << endl;
	cout << "����������� �������� � �������: " << minValueIn(brr2, ROWS, COLS) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(brr2, ROWS, COLS) << endl;

	cout << "\n-----------------------------------------------------------------\n";

	char crr[n];
	FillRand(crr, n);
	Print(crr, n);

	cout << "\n-----------------------------------------------------------------\n";

	char crr2[ROWS][COLS];
	FillRand(crr2, ROWS, COLS);
	Print(crr2, ROWS, COLS);
}

