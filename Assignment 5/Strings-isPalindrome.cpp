#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cin >> str;

    int n = str.length();
    bool flag = true;
    for (int i = 0; i < n / 2; i++)
    {
        if (str[i] == str[n - 1 - i])
            flag = true;
        else
        {
            flag = false;
            break;
        }
    }
    if (flag)
        cout << "true";
    else
        cout << "false";

    return 0;
}