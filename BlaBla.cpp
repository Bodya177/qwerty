#include <iostream>
#include <iomanip>
using namespace std;

//0:60
int main()
{
	int i;
	const int n = 5;
	int A[n];
	srand(time(NULL));
	for (i = 0; i < n; i++)
	{
		A[i] = rand() % (61) - 0;
		cout << setw(5) << "A[" << i + 1 << "]=" << A[i];
	}


	int sum = 0;
	double count = 0;

	for (int i = 0; i < n; i++)
	{
		sum += A[i];
		count += i;
	}
	cout << "\nAvg=" << sum / count;


	int t = A[0];
	for (i = 1; i < n; i++)
	{
		if (A[i] < t) {
			t = A[i];
		}


	}
	cout << "\nmin = " << t << endl;

	int ind = 0;
	for (i = 1; i < n; i++)
	{
		if (A[i] < A[ind]) ind = i;

	}
	cout << "\nind = " << ind << endl;


}
