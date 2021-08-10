#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;

    int c = 1;
    unsigned long long int temp, power;
    int count = 0;
    temp = n;
    while (temp != 0)
    {
        count++;
        temp /= 10;
    }
    while (count > 0)
    {
        power = pow(10, c);
        temp = n % power;

        while (temp > 10)
            temp /= 10;

        if (count == 1 && temp == 9)
        {
            break;
        }

        if ((9 - temp) < temp)
        {
            n -= (temp * (pow(10, c - 1)));
            n += ((9 - temp) * (pow(10, c - 1)));
        }

        c++;
        count--;
    }

    cout << n;
    return 0;
}