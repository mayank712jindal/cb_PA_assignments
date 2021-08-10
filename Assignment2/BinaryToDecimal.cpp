#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main()
{

    int num, i = 0, sum = 0;
    cin >> num;
    i = 0;
    sum = 0;
    while (num != 0)
    {
        sum += (num % 10) * pow(2, i);
        i++;
        num /= 10;
    }
    cout << sum << endl;

    return 0;
}