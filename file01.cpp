#include<bits/stdc++.h>
using namespace std;

void tower(int n,char src,char dest,char help)
{
    if(n==0)
    return;

    tower(n-1,src,help,dest);
    cout<<"move "<<n<<" from "<<src<<" to "<<dest<<endl;
    tower(n-1,help,dest,src);
}
int main()
{
    int n;
    cin>>n;
    tower(n,'A','C','B');
}