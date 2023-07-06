#include<bits/stdc++.h>
using namespace std;

int main()
{
    float *ptr = (float *) malloc(sizeof(float));
    // ptr = (float *) malloc(sizeof(float));
    // *ptr = 10;
    scanf("%f",ptr);
    cin >> *ptr;
    cout << *ptr << endl;
    free(ptr);
    return 0;
}