#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string str[n], str2 = "[";
    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
        str2 += str[i];
        if (i != n - 1)
            str2 += ", ";
    }
    str2 += "]";
    cout << str2;
    return 0;
}