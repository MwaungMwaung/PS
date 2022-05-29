#include <stdio.h>

int main()
{
    int n,i,j,sw;
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        sw=0;
        for(j=i;j>0;j=j/10) //3  300 / 10 = 30
            if(j%10==3 || j%10==6 || j%10==9){
               printf("* ");
               sw=1;
               break;
            }
        if(sw==0)
           printf("%d ",i);
    }

    return 0;
}
