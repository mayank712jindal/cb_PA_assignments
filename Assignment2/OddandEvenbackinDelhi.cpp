#include <iostream>
using namespace std;

bool checkEven(int);
bool checkOdd(int);
int main()
{
    int n, num;
    cin >> n;

    while (n > 0)
    {
        cin >> num;
        if (checkOdd(num) || checkEven(num))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
        n--;
    }
    return 0;
}
bool checkEven(int n)
{
    int sum = 0;
    while (n != 0)
    {
        if ((n % 10) % 2 == 0)
            sum += (n % 10);

        n /= 10;
    }
    if (sum % 4 == 0)
        return true;
    else
        return false;
}

bool checkOdd(int n)
{
    int sum = 0;
    while (n != 0)
    {
        if ((n % 10) % 2 != 0)
            sum += (n % 10);

        n /= 10;
    }
    if (sum % 3 == 0)
        return true;
    else
        return false;
}