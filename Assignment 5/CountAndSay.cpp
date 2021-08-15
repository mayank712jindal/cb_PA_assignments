#include <iostream>
#include <string>
using namespace std;
string countAndSay(int n, string str)
{
    string temp = "";
    int count = 1;
    char ch;

    for (int i = 0; i < str.length(); i++)
    {
        ch = str[i];
        if (ch == str[i + 1])
        {
            count++;
        }
        else
        {
            temp += to_string(count) + ch;
            count = 1;
        }
    }

    if (n - 2 == 0)
        return temp;
    else if (n - 2 < 0)
        return "1";
    else
    {
        return countAndSay(n - 1, temp);
    }
}
int main()
{
    int n;
    cin >> n;
    string str;
    str = countAndSay(n, "1");
    cout << str;
    return 0;
}