// attempt 1
/*
#include <stdio.h>

int main(void)
{
    int A=0,B=0,C=0; // 자료형 선택 오류
    scanf("%d %d %d", &A,&B,&C);
    printf("%d\n",A+B+C);
    return 0;
}
*/

// attempt 2
/*
#include <stdio.h>

int main(void)
{
    int A=0,B=0,C=0; // same
    scanf("%d %d %d", &A,&B,&C);
    printf("%d",A+B+C);
    return 0;
}
*/

// attempt 3
/*
#include <stdio.h>

int main(void)
{
    int A=0,B=0,C=0, sum=0; // same
    scanf("%d %d %d", &A,&B,&C);
    sum=A+B+C;
    printf("%d\n",sum);
    return 0;
}
*/

// attempt 4
#include <stdio.h>

int main(void)
{
    long A=0,B=0,C=0; // 가급적 long long 사용 권장
    scanf("%ld %ld %ld", &A,&B,&C);
    printf("%ld\n",A+B+C);
    return 0;
}