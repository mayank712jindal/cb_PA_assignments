#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cin >> str;

    int count = 0, max = -1;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            count++;
        else
            count = 0;

        if (count > max)
            max = count;
    }
    cout << max;
    return 0;
}