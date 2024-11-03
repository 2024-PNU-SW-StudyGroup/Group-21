#include <stdio.h>
int main() {
    int A,B,C ;
    int x1,x2,x3,x4;
    scanf("%d %d %d",&A,&B,&C);
    x1 =(A+B)%C;
    x2 =((A%C)+(B%C))%C;
    x3 =(A*B)%C;
    x4 =(A%C)*(B%C)%C;
    printf("%d\n",x1);
    printf("%d\n",x2);
    printf("%d\n",x3);
    printf("%d\n",x4);
    return 0 ;
}