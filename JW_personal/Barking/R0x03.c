/*
    # 배열 : 메모리 상에 원소를 연속하게 배치한 자료구조

C - 고정 크기 vs 일반적인 자료구조 - 가변 길이

추가적으로 소모되는 메모리량 X
Cache hit rate 가 높음
메모리상 연속된 구간을 잡아야 해서 할당에 제약이 걸림

인덱싱 + 마지막 원소를 추가/제거 -> O(1)
임의의 위치에 원소를 삽입.제거 -> O(n)     * 메소드의 시간 복잡도를 유의하자!!

배열의 초기화
memset(비추천) // for(추천) // fill function(가장 추천 but,,,,)
---------------------------------
    # vector (가변저항배열 + 여러 메소드) ## 나중에 다시봐,,,


*/

#include <stdio.h>

void insert(int idx, int num, int arr[], int* len);
void erase(int idx, int arr[], int* len);
void printArr(int arr[], int len);
void insert_test();
void erase_test();
int func2(int arr[], int n);


int main() {
    int tc[] = {4,13,63,87};
    int n = 4;
    printf("%d\n",func2(tc, n));
    // insert_test();
    // erase_test();
    return 0;
}


void insert(int idx, int num, int arr[], int* len) {
    for(int i = *len; i > idx; i--) 
        arr[i] = arr[i-1];
    arr[idx] = num;
    (*len)++;
} // for 인덱스로 0~max 이외의 범위가 나오지 않도록 유의

void erase(int idx, int arr[], int* len) {
    (*len)--;
    for(int i = idx; i < *len; i++) 
        arr[i] = arr[i+1];
}

void printArr(int arr[], int len) {
    for(int i = 0; i < len; i++) 
        printf("%d ", arr[i]);
    printf("\n");
}

void insert_test() {
  printf("***** insert_test *****\n");
  int arr[10] = {10, 20, 30};
  int len = 3;
  insert(3, 40, arr, &len); // 10 20 30 40
  printArr(arr, len);
  insert(1, 50, arr, &len); // 10 50 20 30 40
  printArr(arr, len);
  insert(0, 15, arr, &len); // 15 10 50 20 30 40
  printArr(arr, len);
}

void erase_test() {
  printf("***** erase_test *****\n");
  int arr[10] = {10, 50, 40, 30, 70, 20};
  int len = 6;
  erase(4, arr, &len); // 10 50 40 30 20
  printArr(arr, len);
  erase(1, arr, &len); // 10 40 30 20
  printArr(arr, len);
  erase(3, arr, &len); // 10 40 30
  printArr(arr, len);
}


// int func2(int arr[], int n) {
//     int nums[101] = {0,};
//     for(int i = 0; i < n; i++) {
//         nums[arr[i]]++;
//     }
//     if (nums[50] == 1) nums[50]--;
//     for(int i = 0; i < n; i++) {
//         if(nums[arr[i]] + nums[100-arr[i]] >= 2) return 1;
//     }
//     // for(int i = 0; i < 50; i++) {
//     //     if (nums[i]&&nums[100-i]) return 1;
//     // }
//     return 0;
// }
// --------------- ans
int func2(int arr[], int n) {
    int nums[101] = {0,};
    for(int i = 0; i < n; i++) {
        if (nums[100 - arr[i]]) 
            return 1;
        nums[arr[i]]++;
    }
    return 0;
} // 배열로 메모리제이션! -> 공간을 좀만 더 써서 시간을 줄이자
// 배열의 특징(인덱싱의 시간복잡도)을 잘 이용하면 
// O(n)의 동작을 O(1)으로 바꿀 수 있다!