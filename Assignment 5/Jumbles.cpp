#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str1, str2;

    cin >> str1 >> str2;
    bool flag = false;
    for (int i = 0; i < str1.length(); i++)
    {
        flag = false;
        for (int j = 0; j < str2.length(); j++)
        {
            if (str1[i] == str2[j])
            {
                str2[j] = '.';
                flag = true;
                break;
            }
        }
        if (!flag)
            break;
    }
    if (flag)
        cout << "True";
    else
        cout << "False";
    return 0;
}