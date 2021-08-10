#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main()
{
    int num, i = 0;
    cin >> num;
    int result = 0;
    while (true)
    {
        if (num < 8)
        {
            result = result + pow(10, i) * num;
            break;
        }
        else
        {
            result = result + pow(10, i) * (num % 8);
            num /= 8;
            i++;
        }
    }

    cout << result;
    return 0;
}