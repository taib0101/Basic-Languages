#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char **str = new char *[n];
    // str2 = new char *[n];
    for(int i = 0; i <= n; ++i)
        *(str+i) = new char[n];//str[i] = (char *) malloc(sizeof(char))
    
    for(int i = 0; i <= n; ++i)
        cin.getline(*(str+i),100);//cin.getline(str[i],100);
    cout << endl;
    for(int i = 1; i <= n; ++i)
        cout << str[i] << endl;
    delete []str;
    return 0;
}