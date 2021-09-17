#include <iostream>

using namespace std;


int main()
{
	int Max = 0;
	cin >> Max;

	for (int i = 1; i <= Max; i++)
	{
		for (int j = 1; j <= Max - i; j++)
		{
			cout << " ";
		}

		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;

	}





	/*a[0] = 1;
	a[1] = 2;
	a[2] = 3;
	a[3] = 4;
	a[4] = 5;
	a[5] = 6;
	a[6] = 7;
	a[7] = 8;
	a[8] = 9;
	a[9] = 10;

	cout << a[0] << endl;
	cout << a[1] << endl;
	cout << a[2] << endl;
	cout << a[3] << endl;
	cout << a[4] << endl;
	cout << a[5] << endl;
	cout << a[6] << endl;
	cout << a[7] << endl;
	cout << a[8] << endl;
	cout << a[9] << endl;*/

	return 0;
}

