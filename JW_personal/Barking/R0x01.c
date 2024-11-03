#include <stdio.h>
// 시간복잡도와 공간복잡도 and 기초적인 자료형과 메모리

int func1(int n) {
    int res = 0; // 1
    for(int i=1; i<=n; i++) { // 1+ n * (2+2) + 1
        if (i%3 == 0) {
            res += i;
            continue;
        }
        if (i%5 == 0) {
            res += i;
        }
    }
    return res;
} // O(n)

int func2(int arr[], int n) {
    int i, j; // 2
    for (i=0; i<n; i++) { 
        for (j=i+1; j<n; j++) { // (n-1) + (n-2) + (n-3) + .... + 1 -> use sigma. 
            if (arr[i] + arr[j] == 100) {
                return 1;
            }
        }
    }
    return 0;
} // O(n^2)

int func3(int n) {
    int cnt = 1;
    while (cnt*cnt < n) {
        cnt++;
    }
    if (cnt*cnt == n) return 1;
    else return 0;
} // O(n^1/2)

unsigned long long func4(unsigned long long n) {
    unsigned long long res = 1;
    while (res <= n) res *= 2;
    return res/2;
} // O(lg(n))


int main() {
    int t;
    int nums[] = {4,13,63,87};
    scanf("%d", &t);
    // printf("%d\n", func1(t));
    // printf("%d\n", func2(nums, 4));
    // printf("%d\n", func3(t));
    printf("%llu\n", func4(t));
}

/*
시간복잡도 / 공간복잡도 를 항상 먼저 의식하고 풀이법을 고안하자.

컴퓨터는 1초에 약 "3~5억" 번 연산함 
-> 빅오표기법의 시간 복잡도로 대략적인 시간 계산 가능

512MB = 약 1.2억개의 int 사용 가능
(512,000,000 byte)
------------------------------------------------------------------
char(1) < short(2) < int = long(4) < long long(8) *byte
int => 약 21억 (ㅋㅋ), 표현 범위는 좁지만 연산 성능이나 메모리 모두 우수
Overflow and Underflow 를 의식해두자

** 실수(float)!
1. 실수의 저장/연산 과정에서는 반드시 오차가 발생할 수 밖에 없다. 
오차가 반드시 발생하지만, 그 범위는 알 수 있다 -> 일단 float 대신 double을 쓰자.
2. double 에 long long 값을 함부로 넣으면 안된다.
3. 실수를 비교할땐 등호를 사용하면 안된다.

+(IEEE 754 소수 표기법을 어느정도 익혀놓자....)
*/