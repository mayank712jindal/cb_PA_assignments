#include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    char ch;

    while (true)
    {
        cin >> ch;

        switch (ch)
        {
        case '+':
            cin >> n1 >> n2;
            cout << (n1 + n2) << endl;
            break;
        case '-':
            cin >> n1 >> n2;
            cout << (n1 - n2) << endl;
            break;
        case '*':
            cin >> n1 >> n2;
            cout << (n1 * n2) << endl;
            break;
        case '/':
            cin >> n1 >> n2;
            cout << (n1 / n2) << endl;
            break;
        case '%':
            cin >> n1 >> n2;
            cout << (n1 % n2) << endl;
            break;
        case 'X':
            ch = 'X';
            break;
        case 'x':
            ch = 'x';
            break;
        default:
            cout << "Invalid operation. Try again." << endl;
            break;
        }
        if (ch == 'x' || ch == 'X')
            break;
    }

    return 0;
}