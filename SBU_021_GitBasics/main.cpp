#include<iostream>
using namespace std;

const int ROWS = 8;
const int COLS = 5;

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(char arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int m, const int n);
void FillRand(double arr[ROWS][COLS], const int m, const int n);
void FillRand(char arr[ROWS][COLS], const int m, const int n);

void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(char arr[], const int n);
void Print(int arr[ROWS][COLS], const int m, const int n);
void Print(double arr[ROWS][COLS], const int m, const int n);
void Print(char arr[ROWS][COLS], const int m, const int n);

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);
void Sort(int arr[ROWS][COLS], const int m, const int n);

int Sum(int arr[], const int n);
double Sum(double arr[], const int n);
int Sum(int arr[ROWS][COLS], const int m, const int n);
double Sum(double arr[ROWS][COLS], const int m, const int n);

double Avg(int arr[], const int n);
double Avg(double arr[], const int n);
double Avg(int arr[ROWS][COLS], const int m, const int n);
double Avg(double arr[ROWS][COLS], const int m, const int n);

int minValueIn(int arr[], const int n);
int maxValueIn(int arr[], const int n);
double minValueIn(double arr[], const int n);
double maxValueIn(double arr[], const int n);

int minValueIn(int arr[ROWS][COLS], const int m, const int n);
int maxValueIn(int arr[ROWS][COLS], const int m, const int n);
double minValueIn(double arr[ROWS][COLS], const int m, const int n);
double maxValueIn(double arr[ROWS][COLS], const int m, const int n);

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

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000;
		arr[i] /= 100;
	}
}
void FillRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();
	}
}
void FillRand(int arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
void FillRand(double arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = rand() % 10000;
			arr[i][j] /= 100;
		}
	}
}
void FillRand(char arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = rand();
		}
	}
}


void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(int arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
void Print(double arr[ROWS][COLS], const int m, const int n)
{
	int var;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
void Print(char arr[ROWS][COLS], const int m, const int n)
{
	int var;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(int arr[ROWS][COLS], const int m, const int n)
{
	int iterations = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = i; k < m; k++)
			{
				int l;
				if (k == i)l = j + 1;
				else l = 0;
				//		condition ? if_true : if_false;
				for (/*int l = k == i ? j + 1 : 0*/; l < n; l++)
				{
					if (arr[k][l] < arr[i][j])
					{
						int buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
					iterations++;
				}
			}
		}
	}
	cout << "���������� ��������: " << iterations << endl;
}
int Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Sum(double arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
int Sum(int arr[ROWS][COLS], const int m, const int n)
{
	int sum = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
double Sum(double arr[ROWS][COLS], const int m, const int n)
{
	double sum = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}

double Avg(int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
double Avg(double arr[], const int n)
{
	return Sum(arr, n) / n;
}
double Avg(int arr[ROWS][COLS], const int m, const int n)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}
double Avg(double arr[ROWS][COLS], const int m, const int n)
{
	return (double)Sum(arr, ROWS, COLS) / ROWS / COLS;
}

int minValueIn(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
int maxValueIn(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
double minValueIn(double arr[], const int n)
{
	double min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
double maxValueIn(double arr[], const int n)
{
	double max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}

int minValueIn(int arr[ROWS][COLS], const int m, const int n)
{
	int min = arr[0][0];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] < min)min = arr[i][j];
		}
	}
	return min;
}
double minValueIn(double arr[ROWS][COLS], const int m, const int n)
{
	double min = arr[0][0];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] < min)min = arr[i][j];
		}
	}
	return min;
}
int maxValueIn(int arr[ROWS][COLS], const int m, const int n)
{
	int max = arr[0][0];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] > max)max = arr[i][j];
		}
	}
	return max;
}
double maxValueIn(double arr[ROWS][COLS], const int m, const int n)
{
	double max = arr[0][0];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] > max)max = arr[i][j];
		}
	}
	return max;
}
