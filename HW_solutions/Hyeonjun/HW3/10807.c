#include <stdio.h> 


int main(void) {
    int N = 0,li[100]={0,},find = 0, count=0;
    scanf("%d",&N);
    for (int i = 0; i<N;i++) scanf("%d",&li[i]);
    scanf("%d",&find);
    
    for (int i =0; i<N; i++){
        if (li[i]==find) count++; 
    }
    printf("%d\n",count);
	return 0;
}