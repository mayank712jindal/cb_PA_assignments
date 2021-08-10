#include <iostream>
using namespace std;
#include <cstdlib>
int main()
{
    int n, num, c1 = 0, c2 = 0;
    cin >> n;
    cin >> num;
    int temp = num;
    n--;
    while (n != 0)
    {
        cin >> num;
        if (temp > num)
        {
            c1++;
            temp = num;
        }
        else
        {
            c2++;
            temp = num;
            n--;
            break;
        }
        n--;
    }
    if (n == 0)
        cout << "true";
    else
    {
        while (n != 0)
        {
            cin >> num;
            if (temp < num)
            {
                c2++;
                temp = num;
            }
            else
                break;
            n--;
        }
        if (n == 0)
            cout << "true";
        else
            cout << "false";
    }
    return 0;
}