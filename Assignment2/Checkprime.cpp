#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int flag = 1;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
        cout << "Prime";
    else
        cout << "Not Prime";
    return 0;
}