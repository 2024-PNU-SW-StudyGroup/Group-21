#include <stdio.h>
#include <stdlib.h>
int main(void){
    int count=0;
    scanf("%d",&count);
    for(int i = 0; i<count;i++){
    char fst[1001]={0},scnd[1001]={0};
    scanf("%s %s",fst,scnd);
    for(int i = 0;i<1000;i++){
        if (fst[i]==0 && scnd[i]==0) break;
        for(int j = i+1;j<1001;j++){
            char tmp1,tmp2;
            if(fst[i]>fst[j]){
                tmp1=fst[i];
                fst[i]=fst[j];
                fst[j]=tmp1;
            }
            if(scnd[i]>scnd[j]){
                tmp2=scnd[i];
                scnd[i]=scnd[j];
                scnd[j]=tmp2;
            }
        }
    }
    char rst=1;
    for(int i = 0;i<1001;i++){
        if(fst[i]!=scnd[i]) {
            printf("Impossible\n");
            rst=0;
            break;
            }
    }
    if (rst==1) printf("Possible\n");
   }
    return 0;
}