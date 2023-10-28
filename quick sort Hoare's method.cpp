#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int* a, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}
void Print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
	cout << endl;
}
void QuickSort(int* arr, int first, int last)
{
	int l = first, r = last, p = arr[(first + last) / 2];
	do {
		while (arr[l] < p) l++;
		while (arr[r] > p) r--;
		if (l <= r) {
			if (arr[l] > arr[r]) swap(arr[l], arr[r]);
			l++;
			r--;
		}
	} while (l <= r);
	if (l < last)
		QuickSort(arr, l, last);
	if (first < r)
		QuickSort(arr, first, r);
}
int main()
{
	srand((unsigned)time(NULL));
	const int n = 10;
	int a[n];
	int Low = -10;
	int High = 10;
	Create(a, n, Low, High);
	Print(a, n);
	QuickSort(a, 0, n - 1);
	Print(a, n);
	return 0;
}
