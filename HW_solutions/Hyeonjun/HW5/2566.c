#include <stdio.h>
#include <string.h>

int main() {
    int arr[9][9]={0},max=0,garo=0,sero=0; // 3x50 크기의 2차원 문자 배열

    for(int i = 0; i < 9; i++){
        for (int  j = 0; j < 9; j++){
            scanf("%d",&arr[i][j]);
            if (arr[i][j]>max){
                max=arr[i][j];
                garo=i;
                sero=j;
            }
        }
    }
    printf("%d\n%d %d",max,garo+1,sero+1);
    return 0;
}
