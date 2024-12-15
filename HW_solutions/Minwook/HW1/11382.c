// attempt 1
/*
#include <stdio.h>

int main() {
    int a, b, c; // 자료형 선택 오류
    scanf("%d %d %d",&a,&b,&c);
    printf("%d\n", a+b+c);
    return 0 ;
}
*/

// attempt 2
/*
#include <stdio.h>

int main(){

	int a,b,c; // same
	scanf("%d %d %d",&a,&b,&c);
	printf("%d",a+b+c);

	return 0;
}
*/

// attempt 3
#include <stdio.h>

int main(){

	long long a,b,c;
	scanf("%lld %lld %lld",&a,&b,&c);
	printf("%lld",a+b+c);

	return 0;
}

