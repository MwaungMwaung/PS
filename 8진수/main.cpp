#include <bits/stdc++.h>
using namespace std;

int main()
{
    int g=1,h=0,h2=0,i;
    string n,m;
    cin>>n;

    for(i=n.size()-1;i>=0;i--){
        h=h+(n[i]-'0')*g;
        g=g*2;
    }
    cout<<h<<endl;

    for(i=h;i>0;i=i/8){
        m.push_back(i%8+48);
    }

    for(i=m.size()-1;i>=0;i--)
        cout<<m[i];

  return 0;
}
