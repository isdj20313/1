#include <stdio.h>

int main() {//프로그램 시작 
    int dan = 5; //정수형 변수 dan 선언 후 5로 초기화 
    int i;//정수형 변수i 선언  

    for (i = 1; i <= 9; i++) {//i가 0부터 시작해서 9까지 1씩 증가하며 반복 
        printf("%d * %d = %d\n", dan, i, dan * i);//%d 자리에 5와 i를 대입해 (dan*i)의 계산 결과를 출력
    }

    return 0;//프로그램 종료 
}
