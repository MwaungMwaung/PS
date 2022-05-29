#include <bits/stdc++.h>
using namespace std;

int check[100001];
vector <int> num;

int main()
{
    int i, j, k, sw, st, ed, cnt = 0;
    scanf("%d%d", &st, &ed);

    for(i=2;i<=ed;i++)
        if(check[i] == 0){
            for(j=2;i*j<=st*ed;j++)
                check[i*j] = 1;
        }

    while(st<=ed){
        sw = 0;

        for(j=st;j>0;j=j/10)
            num.push_back(j%10);

        for(j=0;j<num.size();j++){
            for(k=j+1;k<num.size();k++){
                 if(check[num[j]*10 + num[k]] == 0){
                    cnt++;
                    sw = 1;
                    break;
                 }
            }
            if(sw == 1) break;
        }
        st++;
        num.clear();
    }
    printf("%d", cnt);
    return 0;
}
