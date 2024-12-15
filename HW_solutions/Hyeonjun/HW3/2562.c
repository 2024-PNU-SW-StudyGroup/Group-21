#include <stdio.h> 


int main(void) {
    int f = 0,n=0, count=0, where=0;
    for (int i = 0; i<9;i++){
        count++;
        scanf("%d",&n);
        if(n>f) {
            f=n;
            where=count;
        }


    }
    printf("%d \n%d",f,where);
	return 0;
}