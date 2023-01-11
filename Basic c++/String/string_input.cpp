#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string str;
    getline(cin,str);
    while(t--)
    {
        getline(cin,str);//taking input with space
        //getting output using loop
        int n = str.size(); 
        for(int i = 0; i < n; ++i)
            cout << str[i];
        cout << endl;
        cout << "Output without using loop " << str << endl;
        string str2;
        cin >> str2;//taking input without space
        cout << "str2 = " << str2 << endl;

        reverse(str2.begin(),str2.end());
        //cout << "Reversed str2 = " << str2 << endl;
        //string :: iterator it;
        auto it = find(str.begin(),str.end(),'a');
        str.erase(it);
        getline(cin,str2);//we need to take getline ,because after taking new 'space input' ..it takes white space
        cout << "after earsing 'a' , str = " << str << endl; 
    }
    return 0;
}