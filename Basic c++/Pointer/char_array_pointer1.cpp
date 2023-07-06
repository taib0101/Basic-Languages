#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[] = "Taib";
    cin >> str;
    int size_of_string = sizeof(str)/sizeof(str[0]);
    cout << "Size of string is : " << size_of_string << endl;

    //---------------------------------------------------------------

    char *str2 = (char *) malloc(sizeof(char));
    // str2 = (char *) malloc(10*sizeof(char));
    const int n = 5;//for better practice
    cin.getline(str2,n);//including space input in a string
    cin.getline(str2,5);
    // cin >> str2;
    // size_of_string = sizeof(str2);//this method doesnt work when I allocate memory for string 
    int tol = 0;
    for(int i = 0; str2[i] != '\0'; ++i)tol++;
    cout << "String is : " << str2 << endl;
    cout << "Size of string is : " << tol << endl;
    free(str2);
    return 0;
}