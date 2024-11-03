#include <stdio.h> 
int main(void)
{
    int all = 0, num = 0, a[100]={0,},b[100]={0,},sum=0;
    scanf("%d",&all);
    scanf("%d",&num);
    for(int i =0 ; i<num;i++)
    {
        scanf("%d %d",&a[i],&b[i]);
    }
    for (int j = 0; j < num;j++) sum+=a[j]*b[j];

    if (sum == all) printf("Yes\n");

    else printf("No\n");
    return 0;
}
