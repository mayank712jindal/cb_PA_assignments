#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cin >> str;

    for (int i = 0; i < str.length(); i++)
    {
        if (int(str[i]) >= 65 && int(str[i]) <= 90 && i != 0)
            cout << endl;

        cout << str[i];
    }
    return 0;
}