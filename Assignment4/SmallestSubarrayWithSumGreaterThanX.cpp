#include <iostream>
using namespace std;
int main()
{
    int n, temp, sum, count = 0, result;
    cin >> n >> sum;
    int arr[n];
    result = n + 1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        count = 0;
        temp = 0;
        for (int j = i; j >= 0; j--)
        {
            temp += arr[j];
            count++;
            if (temp > sum)
            {
                if (count < result)
                    result = count;

                break;
            }
        }
    }
    cout << result;
    return 0;
}
