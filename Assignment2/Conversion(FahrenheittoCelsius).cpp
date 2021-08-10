#include <iostream>
using namespace std;
int main()
{
    int min, max, step;

    cin >> min >> max >> step;

    while (min <= max)
    {
        cout << min << " " << ((min - 32) * 5 / 9) << endl;
        min += step;
    }
    return 0;
}