#include<bits/stdc++.h>
using namespace std;
#define maxx 10
int main(void)
{
    int n, m;
    bool bb = 0;
    while(scanf("%d %d",&n,&m) == 2 && n && m) // we can write like this while(cin >> n >> m && n && m)
    {
        char str[maxx];
        getchar();
        char *str2 = (char *) malloc(sizeof(char) * (n+2));
        for(int i = 0; i < n; ++i)
            scanf("%c",&str[i]);
        for(int i = 0; i < n; ++i)
            printf("%c",str[i]);
        cout << endl;
        /*  
            gets(str3);//gets is a dangarous function ...for security ..
            it used on old c compiler but updated commpiller doesnt support this
        */
       /*
            //scanf("%[^\n]%*c",str3);
            //fgets(str,maxx,stdin);
            //doesnt take this input
            //in new c compiler
       */
    }
    return 0;
}