#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    getchar();
    while(t--)
    {
        cout << "For char \n";
        char c;
        here:
        scanf("%c",&c);
        int a = 1, b = 2;
        getchar();
        switch(c)
        {
            case '+' :
                printf("%d + %d = %d\n",a,b,a+b);
                break;
            case '-' :
                printf("%d - %d = %d\n",a,b,a-b);
                break;
            case '*' :
                printf("%d * %d = %d\n",a,b,a*b);
                break;
            case '/' :
                printf("%d / %d = %d\n",a,b,a/b);
                break;
            default:
                printf("wrong input .. \n");
                goto here;
        }

        cout << "For integer \n";
        int c1;
        here2:
        cin >> c1;
        switch(c1)
        {
            case 1 :
                cout << "hello taib\n";
                break;
            case 2 :
                cout << "hola taib\n";
                break;
            default:
                cout << "wrong\n";
                goto here2;
        }

        //switch case doesn't support string elements
    }
    return 0;
}