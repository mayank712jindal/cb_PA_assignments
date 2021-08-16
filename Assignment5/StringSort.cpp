#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string arr[n], temp;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        for (int j = i; j > 0; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                if (arr[j - 1].find(arr[j]) == 0)
                    continue;
                else
                {
                    temp = arr[j - 1];
                    arr[j - 1] = arr[j];
                    arr[j] = temp;
                }
            }
            else if (arr[j].find(arr[j - 1]) == 0)
            {
                temp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << endl;
    return 0;
}