#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    double arr[16];
    double sum2 = 0;
    long long int sum = 1;
    for(int i = 1; i <= 15; i++){
        sum = sum * i;
        sum2 += (double)i / (double)sum;
        arr[i] = sum2;
    }

    while(t--){
        int in;
        cin >> in;
        printf("%0.4lf\n", arr[in]);
    }

    return 0;
}
