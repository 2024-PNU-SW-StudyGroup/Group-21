#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int r,c;
    scanf("%d%d",&r,&c);
    int *a=(int*)malloc(r*c*sizeof(int));
    int *b=(int*)malloc(r*c*sizeof(int));
    for(int i=0;i<r*c;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<r*c;i++){
        scanf("%d",&b[i]);
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",a[j+i*c]+b[j+i*c]);
        }
        printf("\n");
    }
    free(a);
    free(b);
}