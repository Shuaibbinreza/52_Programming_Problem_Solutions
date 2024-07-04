#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int arr[101];
        int n;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        cout << arr[0];
        if(n > 1){
            for (int i = 2; i < n; i = i + 2)
            {
                cout << " " << arr[i];
            }
        }
        
        cout << endl;
    }
    

    return 0;
}
