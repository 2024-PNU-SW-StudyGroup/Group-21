#include <stdio.h> 


int main(void) {
    int a, b, c, sum, fst=0, li[10]={0,};
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    sum=a*b*c;
    
    for (int i = 0; i<10;i++){
        if (sum<1) break;
        fst=sum%10;
        li[fst]++;
        sum/=10;
    
    }
    for(int i = 0; i<10;i++) printf("%d\n",li[i]) ;
	return 0;
}