#include<bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;

    while(t--){
        int a, b, c;
        cin >> a >> b >> c;

        int sum = a + b + c;
        double s = (double)sum / 2.0;

        double area = sqrt(s * (s-a) * (s-b) * (s-c));

        printf("Area = %0.3lf\n", area);
    }

    return 0;
}