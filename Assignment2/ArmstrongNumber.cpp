#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main()
{
    int n, len = 0, sum = 0;
    cin >> n;
    int temp = n;
    while (n != 0)
    {
        len++;
        n /= 10;
    }
    n = temp;
    while (n != 0)
    {
        sum += pow((n % 10), len);
        n /= 10;
    }
    if (sum == temp)
        cout << "true";
    else
        cout << "false";
    return 0;
}