#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    bool flag = false;
    int count = 0;
    string str1, str2;
    while (t > 0)
    {

        cin >> str1 >> str2;
        count = 0;

        for (int i = 0; i < str1.length(); i++)
        {
            flag = false;
            for (int j = 0; j < str2.length(); j++)
            {
                if (str1[i] == str2[j])
                {
                    flag = true;
                    str2.erase(str2.begin() + j);
                    break;
                }
            }
            if (!flag)
                count++;
        }

        cout << count + str2.length() << endl;

        t--;
    }
    return 0;
}