#include<bits/stdc++.h>
using namespace std;

int arr[100001];

void primes(){
    memset(arr, 0, sizeof(arr));
    arr[0] = 1;
    arr[1] = 1;
    for (int i = 2; i*i <= 100000; i++)
    {
        if(arr[i] == 0){
            for (int j = i*i; j <= 100000; j = j + i)
            {
                arr[j] = 1;
            }
        }
    }
    
}

int main()
{
    int a, b, t;
    primes();
    cin >> t;

    while (t--)
    {
        cin >> a >> b;
        int cnt = 0;
        for (int i = a; i <= b; i++)
        {
            if(arr[i] == 0)    cnt++;
        }
        cout << cnt << endl;
    }
    // for (int i = 0; i < 100; i++)
    // {
    //     cout << "i = " << i << "   " << arr[i] << endl;
    // }
    
    

    return 0;
}
