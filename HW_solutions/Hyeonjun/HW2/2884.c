#include <stdio.h> 
#include <stdlib.h> // << 지금은 쓸 필요 없엉..
int main(void)
{
    int hour = 0,minute = 0;
    scanf("%d %d",&hour, &minute);
    if ((minute-45)<0)
    {
        if (hour==0) hour+=23;
        else hour--;
        minute=60-abs(minute-45);
    }
    else
    {
        minute-=45;
    }
    printf("%d %d\n",hour,minute);

    return 0;
}
