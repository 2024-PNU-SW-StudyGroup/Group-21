// attempt 1
/*
#include <stdio.h>
int main(void)
{
    int one = 0, two = 0;
    scanf("%d",&one);
    scanf("%d",&two);
    printf("%d\n",(two%10)*one);
    two/=10;
    printf("%d\n",(two%10)*one);
    two/=10;
    printf("%d\n",(two%10)*one);
    return 0;
}
*/

// attempt 2
#include <stdio.h>
int main(void)
{
    int one = 0, two = 0, sum=0; // sum 변수 할당 good
    scanf("%d",&one);
    scanf("%d",&two);
    printf("%d\n",(two%10)*one);
    sum+=(two%10)*one;
    two/=10;
    printf("%d\n",(two%10)*one);
    sum+=(two%10)*one*10;
    two/=10;
    printf("%d\n",(two%10)*one);
    sum+=(two%10)*one*100;
    printf("%d\n",sum);
    return 0;
}