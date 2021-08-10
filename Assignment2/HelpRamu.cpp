#include <iostream>
using namespace std;
#include <algorithm>
int main()
{
    int n;
    int c1, c2, c3, c4, rick, cab;
    int costRick = 0, costCab = 0;
    cin >> n;
    while (n != 0)
    {
        cin >> c1 >> c2 >> c3 >> c4 >> rick >> cab;
        //
        int costRick = 0, costCab = 0, temp;

        for (int i = 0; i < rick; i++)
        {
            cin >> temp;
            costRick += min(temp * c1, c2);
        }
        for (int i = 0; i < cab; i++)
        {
            cin >> temp;
            costCab += min(temp * c1, c2);
        }

        int finalCost = min(min(costCab, c3) + min(costRick, c3), c4);
        cout << finalCost << endl;
        n--;
    }
    return 0;
}