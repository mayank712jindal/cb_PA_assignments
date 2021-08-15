#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cin >> str;

    int max = -1, count = 1;
    char ch;

    for (int i = 0; i < str.length(); i++)
    {
        ch = str[i];
        if (ch == str[i - 1])
        {
            count++;
        }
        else
        {
            count = 1;
        }
        if (count > max)
            max = count;
    }
    cout << max;
    return 0;
}