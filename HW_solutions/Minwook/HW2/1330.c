#include <stdio.h>
int main()
{
    int i, j ;
    scanf("%d %d",&i,&j);
    if (i>j)
        printf(">");
    if (i==j)
        printf("==");
    if (i<j) 
        printf("<");
    return 0 ;
}