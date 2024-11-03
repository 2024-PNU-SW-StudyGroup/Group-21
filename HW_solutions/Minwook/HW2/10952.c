#include <stdio.h>

int main() {
	int a,b;
	while(a+b!=0){
		scanf("%d %d",&a,&b);
		printf("%d\n",a+b);
	}
    return 0;
}

/*
로직이 꽤 잘못됨.
초기 a, b값이 선언이 되지 않아 첫 while 루프 조건이 만족될지 불확실함.
그리고 a = 0, b = 0 을 입력 받더라도 0을 출력하고 프로그램이 종료되기에
예제 출력을 만족하지 않음
주의합시당
*/