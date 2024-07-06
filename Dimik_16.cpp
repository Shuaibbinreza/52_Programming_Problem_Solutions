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
        string word = "";

        getline(cin, str);

        for (int j = 0; j < str.size(); j++)
        {
            if(str[j] == ' '){
                reverse(word.begin(), word.end());
                cout << word << " ";
                word = "";
                //continue;
            }
            else{
                word += str[j];
                //cout << str[j];
            }
            
        }
        reverse(word.begin(), word.end());
        cout << word;
        cout << endl;
    }

    return 0;
}
