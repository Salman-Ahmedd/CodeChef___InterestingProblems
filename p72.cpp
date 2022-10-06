///Equal Distinct,EQDIS

#include<iostream>
#include<vector>
#include<set>

using namespace std;

int main()
{
    int T;

    cin >> T;

    while(T--)
    {
        int i, n;

        cin >> n;

        vector<int>vec;
        set<int>se;

        for (i = 0; i < n; i++)
        {
            int value;

            cin >> value;

            vec.push_back(value);
            se.insert(value);
        }

        int len1 = vec.size();
        int len2 = se.size();



        if(len1 % 2 == 0)
        {
            cout << "YES";
            cout << endl;
        }
        else if(len2 % 2 == 0)
        {
            cout << "YES";
            cout << endl;
        }
        else if(len1 % 2 == 1 && len2 % 2 == 1 && len1-len2 != 0)
        {
            cout << "YES";
            cout << endl;
        }
        else
        {
            cout << "NO";
            cout << endl;
        }
    }

    return 0;
}
