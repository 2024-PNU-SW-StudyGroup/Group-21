#include <stdio.h> 
int main(void)
{
    int dice[3]={0,},temp=0;
    scanf("%d %d %d",&dice[0],&dice[1],&dice[2]);

    for (int i=0; i<3;i++){
        for (int j=0; j < 2-i; j++){
            if (dice[j] > dice[j + 1]){
            temp = dice[j];
            dice[j] = dice[j+1];
            dice[j+1] = temp;
            }
        }
    }//정렬 끗

    if (dice[0]==dice[2])printf("%d", 10000+dice[0]*1000);

    else if (dice[0]==dice[1]||dice[1]==dice[2]) printf("%d",1000+dice[1]*100);

    else printf("%d\n",100*dice[2]);
    
    return 0;
}
    