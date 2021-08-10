#include <iostream>
using namespace std;
int main()
{
    int num, n;
    cin >> num >> n;
    int count = 0;

    while (num != 0)
    {
        if (n == (num % 10))
            count++;
        num /= 10;
    }

    cout << count;
    return 0;
}