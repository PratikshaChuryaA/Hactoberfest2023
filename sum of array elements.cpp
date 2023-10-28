#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

void CreateRandomArray(int* b, const int size, const int Low, const int High, int i)
{
	b[i] = Low + rand() % (High - Low + 1);
	if (i < size - 1)
		CreateRandomArray(b, size, Low, High, i + 1);

}
int Sum(int* b, const int size, int i, int sum)
{
	sum += b[i];
	if (i < size - 1)
		return Sum(b, size, i + 1, sum);
	else
		return sum;
}
void Print(int* b, const int size, int i)
{
	cout << setw(4) << b[i]<<",";
	if (i < size - 1)
		Print(b, size, i + 1);
	else
		cout << endl;
}
int main()
{
	srand((unsigned)time(NULL));
	cout << "enter the number of array elements" << endl;
	int n;
	cin >> n;

	int* arr = new int[n];
	cout << "If you want to fill the array yourself, enter 1\nIf you want to fill the array with random values, enter 0" << endl;
	int sel;
	cin >> sel;
	if (sel == 1)
	{
		cout << "Enter " << n << " elements of array:" << endl;;
		for (int i = 0; i < n; i++)
		{
			cout << "Element " << i + 1 << ": ";
			cin >> arr[i];
		}
	}
	else 
	{
		int Low;
		cout << "enter the lower range of values" << endl;
		cin >> Low;
		int High;
		cout << "enter the upper range of values" << endl;
		cin >> High;
		CreateRandomArray(arr, n, Low, High, 0);
	}
	cout << "You array" << endl;

	Print(arr, n, 0);

	
	cout <<"the sum of the elements of your array = "<< Sum(arr, n, 0, 0) << endl;
	return 0;
}
