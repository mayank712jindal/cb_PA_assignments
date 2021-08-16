#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str, str2 = "";
    cin >> str;
    int n;
    for (int i = 0; i < str.length() - 1; i++)
    {
        str2 += str[i];
        n = int(str[i + 1]) - int(str[i]);
        str2 += to_string(n);
    }
    str2 += str[str.length() - 1];
    cout << str2;
    return 0;
}