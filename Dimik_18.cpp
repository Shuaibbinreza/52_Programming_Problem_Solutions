#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    char ch;

    for (int i = 0; i < t; i++)
    {
        string str;

        getline(cin, str);

        int cnt = 0;

        string vol = "";
        string cons = "";

        for (int j = 0; j < str.size(); j++)
        {
            if(str[j] == 'a' || str[j] == 'i' ||str[j] == 'e' ||str[j] == 'o' ||str[j] == 'u' ||
            str[j] == 'A' ||str[j] == 'E' ||str[j] == 'I' ||str[j] == 'O' || str[j] == 'U'){
                //cout << str[j];
                vol += str[j];
            }
            else{
                if(str[j] != ' ')   cons += str[j];
            }    
        }
        //cout << "Number of vowels = "<< cnt;
        cout << vol << endl;
        cout << cons << endl;
    }

    return 0;
}
