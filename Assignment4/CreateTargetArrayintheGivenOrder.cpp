#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int value[n], index[n], target[n];

    for (int i = 0; i < n; i++)
    {
        cin >> value[i];
        target[i] = -1;
    }

    for (int i = 0; i < n; i++)
    {
        cin >> index[i];

        if (target[index[i]] == -1)
            target[index[i]] = value[i];
        else
        {
            for (int j = i; j > index[i]; j--)
            {
                target[j] = target[j - 1];
            }
            target[index[i]] = value[i];
        }
    }

    for (int i = 0; i < n; i++)
        cout << target[i] << " ";
}
