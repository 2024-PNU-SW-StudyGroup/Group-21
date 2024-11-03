#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int max; // 스택 총 크기
    int cnt; // 현재 요소 위치 -> 즉 현재 상태 스택 크기이다.
    int *stk; // 스택 배열
} IntStack;

int Stack_init(IntStack *s, int max);
int Stack_push(IntStack *s, int x);
int Stack_pop(IntStack *s, int *x);
int Stack_peek(IntStack *s, int *x);
int Stack_clear(IntStack *s);
void Stack_print(IntStack *s);


int main() 
{

}

int Stack_init(IntStack *s, int max) {
    s->cnt = 0; // 현재 위치 초기화
    if ((s->stk = calloc(max, sizeof(int))) == NULL) { 
        s->max = 0; // max 크기의 정수 배열 생성과 s->stk 에 할당
        return -1; // 실패시 NULL로 확인
    }
    s->max = max; // 최대 크기 저장
    return 0;
}

int Stack_push(IntStack *s, int x) {
    if (s->cnt >= s->max) { return -1; } // 스택이 가득 찼을때
    s->stk[s->cnt++] = x; // 현재 위치의 값을 x로 갱신 후 위칫값 1 증가
    return 0;
}

int Stack_pop(IntStack *s, int *x) {
    if (s->cnt <= 0) { return -1; } // 스택이 비어있을때
    *x = s->stk[--s->cnt]; // 위칫값 1 감소후 현재 위치값 받아오기
    return 0;
}

int Stack_peek(IntStack *s, int *x) {
    if (s->cnt <= 0) { return -1; }
    *x = s->stk[s->cnt-1];
    return 0;
}

int Stack_clear(IntStack *s) {
    s->cnt = 0;
}

void Stack_print(IntStack *s) {
    for(int i=0; i<s->cnt; i++) {
        printf("%d ", s->stk[i]);
    }
    printf("\n");
}

