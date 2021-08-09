#include <iostream>
using namespace std;
int main()
{
	int n, j;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (j = 0; j < n - i; j++)
			cout << " \t";

		for (j = i; j < i + i; j++)
			cout << j << "\t";

		j--;
		while (j > i)
		{
			cout << --j << "\t";
		}

		cout << endl;
	}
	return 0;
}