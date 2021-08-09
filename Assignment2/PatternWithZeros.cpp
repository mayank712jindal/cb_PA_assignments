#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (j == 0 || j == i - 1)
                cout << i << "\t";
            else
                cout << "0\t";
        }
        cout << endl;
    }
    return 0;
}