#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        double xc, yc, x, y, r;
        cin >> xc >> yc;
        cin >> r;
        cin >> x >> y;

        double dis = sqrt((pow((x - xc), 2)) + (pow((y - yc), 2)));
        //cout << dis << endl;

        if(dis <= r)    cout << "The point is inside the circle" << endl;
        else    cout << "The point is not inside the circle" << endl;
    }

    return 0;
}
