#include <stdio.h>

int main(void){

    int n;
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        int sum=i,tmp=i;
        while (tmp>0){
            sum+=tmp%10;
            tmp/=10;
        }
        if (sum==n) {
            printf("%d",i);
            break;
        }
        if (i==n) printf("0");
    }
    return 0;
    
}