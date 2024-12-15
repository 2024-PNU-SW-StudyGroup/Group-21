#include <stdio.h>

int main(void)
{
    int array[10], count=0, org=0, comp=0;
    for(int i=0; i<10;i++){
        scanf("%d",&array[i]);
        array[i]%=42;
    }
    for(int j = 0;j<10;j++)
    {
        org=array[j];
        if (org!=-1)
        {
            count++;
            for (int k=j;k<10;k++){
                comp=array[k];
                if(org==comp) array[k]=-1;
            }
        }
    }
    printf("%d\n",count);


    return 0;
}
