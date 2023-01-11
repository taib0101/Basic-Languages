//10062 UVA
#include<bits/stdc++.h>
using namespace std;
struct strt{
    int a,b;
}st[1000];

bool cmp(strt x, strt y){
    if(x.a!=y.a){
        return x.a<y.a;
    }
    return x.b>y.b;
}
int main(){
    int i,j,m,n;
//    str st[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d %d",&st[i].a,&st[i].b);
    sort(st,st+n,cmp);
    printf("\n");
    for(i=0;i<n;i++) printf("%d %d\n",st[i].a,st[i].b);
    return 0;
}
