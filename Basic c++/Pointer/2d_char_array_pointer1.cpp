#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char **str = (char **) malloc (sizeof(char)*(n+5));
    // str = (char **) malloc (sizeof(char)*(n+5));
    for(int i = 0; i <= n; ++i)
        *(str+i) = (char *) malloc(sizeof(char));//str[i] = (char *) malloc(sizeof(char))
    
    for(int i = 0; i <= n; ++i)
        cin.getline(*(str+i),100);//cin.getline(str[i],100);
    cout << endl;    
    for(int i = 1; i <= n; ++i)
        cout << str[i] << endl;
    free(str);
    return 0;
}