#include <bits/stdc++.h>
using namespace std;

int result;

int f(int m,int g)
{
    int p=0;

    if(m > 0){
        f(m/10,g*9);
        if(m%10 >= 3) p = 1;
        result = result + (m % 10 - p) * g;
    }
}

int main()
{
    int n;
    cin>>n; //10

    cout<<f(n,1);

  return 0;
}
