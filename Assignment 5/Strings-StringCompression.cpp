#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str, str2 = "";
    cin >> str;
    int count = 1;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == str[i + 1])
            count++;
        else
        {
            str2 += str[i];
            if (count > 1)
                str2 += to_string(count);
            count = 1;
        }
    }
    cout << str2;
    return 0;
}