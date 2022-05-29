#include <stdio.h>

int main()
{
    int st,ed,i,j;
    scanf("%d%d",&st,&ed);

    for(i=st;i<=ed;i++)
        for(j=i;j>0;j=j/10)
            if(j%10==1){
               printf("%d ",i);
               break;
            }

    return 0;
}
