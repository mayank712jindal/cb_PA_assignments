#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, candy, friends, result;
    cin >> t;
    while (t > 0)
    {
        cin >> candy >> friends;
        result = (candy % friends) <= (friends - (candy % friends)) ? (candy % friends) : (friends - (candy % friends));
        cout << result << endl;
        t--;
    }

    return 0;
}