//I seek refused with Allah,from the accursed devil
//In the name of Allah the Entirely Merciful the Especially Merciful
#include<bits/stdc++.h>
using namespace std;

int main()
{
    char *str2 = new char[100];
    // str2 = new char[100];
    const int n = 10;//for better practice
    // cin.getline(str2,n);//including space input in a string
    cin.getline(str2,10);
    // cin >> str2;
    // size_of_string = sizeof(str2);//this method doesnt work when I allocate memory for string 
    int tol = 0;
    for(int i = 0; str2[i] != '\0'; ++i)tol++;
    cout << "String is : " << str2 << endl;
    cout << "Size of string is : " << tol << endl;
    delete []str2;
    return 0;
}
