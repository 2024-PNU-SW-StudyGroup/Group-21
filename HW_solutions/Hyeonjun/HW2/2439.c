#include <stdio.h> 
int main(void)
{
    int a=0;
    scanf("%d",&a);
    for (int i = 0; i <a; i++){
        for(int j=a-i;j>1;j--) printf(" ");
        for(int k=0;k<=i;k++) printf("*");
        printf("\n");
    }

    return 0;
}
