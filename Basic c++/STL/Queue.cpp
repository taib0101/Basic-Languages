#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue < int > que;
    que.push(1);
    que.push(2);
    que.push(3);
    cout << "front = " << que.front() << endl;
    // que.rear() fucked up;
    cout << "size = " << que.size() << endl;
    while(!que.empty())
    {
        cout << que.front() << endl;
        que.pop();
    }
    return 0;
}
