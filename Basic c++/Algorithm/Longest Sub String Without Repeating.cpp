#include<bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;
    int start = 0, end = 0;
    vector < int > lastIndex(256, -1);

    int sizee = str.size();

    int result = 0;
    while(end < sizee) {
        start = max(start, lastIndex[str[end]]+1);
        result = max(result, end - start + 1);
        lastIndex[str[end]] = end;
        end++;
    }

    cout << "Longset substring without repeating : " << result << endl;
    return 0;
}
