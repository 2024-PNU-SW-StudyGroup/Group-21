// too many attempt and fail....

#include <stdio.h>
int main() {
    int a,i ;
    int b[3] ,x[4];
    scanf("%d",&a);
    //scanf("%s",b);//왜 &b가 아닌거임? -> b는 배열이기 때문. 추후에 설명 
    scanf("%d%d%d",&b[0],&b[1],&b[2]);
    for (i=0; i<3;i=i+1)
        x[i] = b[i]*a;
    x[3]=x[2]+x[1]*10+x[0]*100 ;
//b[0]에는 백의자리, b[1]에는 십의자리 -> logic은 굳... but 구현에서 막히네

    for (i=0; i<4; i=i+1)
        printf("%d\n",x[3-i]);
    //x1 = a*b[0] ;
    //x2 = a*b[1] ;
    //x3 = a*b[2] ;
    //x4 = x1+x2*10+x3*100 ;
    //printf("%d\n",x1);
    //printf("%d\n",x2);
    //printf("%d\n",x3);
    //printf("%d\n",x4);


    return 0 ;
}