/*
1 2 3 4 5
2 1 3 4 5
2 1 4 3 5
3 4 1 2 5
1 2 3 4 5 6 7 8 
*/
#include <stdio.h>


int main(void){
    int n,m,i,j;
    scanf("%d %d",&n,&m);
    int bucket[100]={0,};
    for (int k = 1; k<=n;k++) bucket[k]=k;
    for (int k = 0; k<m;k++){
        scanf("%d %d",&i,&j);
        int temp=0,end=j;
        
        for (int start = i; start<=(i+j)/2;start++){
            temp=bucket[start];
            bucket[start]=bucket[end];
            bucket[end]=temp;
            end--;
            
        }


    }
    for(int h=1;h<=n;h++) printf("%d ",bucket[h]);
    return 0;
}