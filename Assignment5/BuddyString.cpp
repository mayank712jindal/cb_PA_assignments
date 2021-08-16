#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str1, str2;
    cin >> str1 >> str2;

    int i1, i2, count = 0;
    for (int i = 0; i < str1.length(); i++)
    {
        if (str1[i] == str2[i])
            continue;
        else
        {
            count++;
            if (count == 1)
                i1 = i;
            if (count == 2)
                i2 = i;
            if (count > 2)
                break;
        }
    }
    if (count == 0)
        cout << "true";
    else if (count == 2)
    {
        if (str1[i1] == str2[i2] && str1[i2] == str2[i1])
        {
            cout << "true";
        }
        else
            cout << "false";
    }
    else
        cout << "false";
    return 0;
}