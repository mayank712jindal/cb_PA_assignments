#include <iostream>
using namespace std;
#include <cmath>
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int d = (b * b) - (4 * a * c);

    if (d > 0)
    {
        cout << "Real and Distinct" << endl;
        cout << ((-1 * b) - sqrt(d)) / (2 * a) << " " << ((-1 * b) + sqrt(d)) / (2 * a);
    }
    else if (d == 0)
    {
        cout << "Real and Equal" << endl;
        cout << ((-1 * b) + sqrt(d)) / (2 * a) << " " << ((-1 * b) + sqrt(d)) / (2 * a);
    }
    else
        cout << "Imaginary";
    return 0;
}