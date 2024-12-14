#include<stdio.h>

int main(void){
    int rst[100][100]={0};
    int n,m;
    scanf("%d %d",&n,&m);
    for (int i = 0; i<n;i++){
        for(int j = 0;j < m; j++){
            int tmp=0;
            scanf("%d",&tmp);
            rst[i][j]+=tmp;
        }
    }
    for (int i = 0; i<n;i++){
        for(int j = 0;j < m; j++){
            int tmp=0;
            scanf("%d",&tmp);
            rst[i][j]+=tmp;
        }
    }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) 
                printf("%d ", rst[i][j]);
            printf("\n");
    }
    return 0;
}