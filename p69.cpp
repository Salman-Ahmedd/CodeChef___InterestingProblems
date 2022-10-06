///REMOVEBAD

#include<iostream>
#include<unordered_map>

using namespace std;

int main()
{
    int T;

    cin >> T;

    while(T--)
    {
        int i, N;
        int count = 0;

        cin >> N;
        int array[N];

        for(i = 0; i < N; i++)
        {
            cin >> array[i];
        }

        unordered_map<int, int>UOmap;

        for(i = 0; i < N; i++)
        {
            UOmap[array[i]]++;
            count = max(count, UOmap[array[i]]);
        }

        cout << N - count;
        cout << endl;

    }


    return 0;
}
