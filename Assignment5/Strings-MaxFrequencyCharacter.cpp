#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cin >> str;

    int count = 0, max = -1;
    char ch, temp;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '.')
            continue;
        temp = str[i];
        count = 1;
        for (int j = 0; j < str.length(); j++)
        {
            if (temp == str[j])
            {
                count++;
                str[j] = '.';
            }
        }
        if (count > max)
        {
            max = count;
            ch = temp;
        }
    }
    cout << ch;
    return 0;
}