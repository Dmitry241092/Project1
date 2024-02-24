#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>

using namespace std;

#define S 10
#define Z 7

int main()
{
	int A[S][Z];
	for (int i = 0; i < S; i++)
	{
		for (int j = 0; j < Z; j++)
		{
			A[i][j] = i + j;
			cout << A[i][j] << ' ';
		}
		cout << endl;
	}
	cout << endl;

	int sum = 0; 
	time_t t;
	time(&t);
	int day = localtime(&t)->tm_mday; 

	for (int x = 0; x < Z; x++)
	{
		sum += A[day % Z][x];
	}
	cout << sum << endl;

	return 0;
}