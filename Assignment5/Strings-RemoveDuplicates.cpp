#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str, str2 = "";
    cin >> str;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == str[i - 1])
            continue;

        str2 += str[i];
    }
    cout << str2;
    return 0;
}