///Easy Pronunciation.Problem Code:EZSPEAK

#include<bits/stdc++.h>
#include<iostream>
#include<string>

using namespace std;

int main()
{
    int T;
    cin >> T;

    while(T--)
    {
        int i;
        int N;
        cin >> N;

        string s;
        cin >> s;

        int count = 0;

        for(i = 0; i < N; i++)
        {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
                count = 0;
            }
            else
            {
                count++;
            }
            if(count >= 4)
            {
                cout << "NO";
                cout << endl;
                break;
            }
        }

        if(count < 4)
        {
            cout << "YES";
            cout << endl;
        }

    }



    return 0;
}


