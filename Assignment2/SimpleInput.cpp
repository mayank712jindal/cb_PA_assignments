#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;

    while (true)
    {
        cin >> n;
        sum += n;
        if (sum >= 0)
            cout << n << endl;
        else
            break;
    }
    return 0;
}