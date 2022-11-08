/*#include<stdio.h>
//메인함수, 프로글매 실행시 처음에 읽는다. 

void main(void)
{
	//결과라는 값에 ()안 숫자 더한 값을 넣음
	unsigned short num = -5;
	unsigned short num2 = 10; 
	printf("자료형 확인 : %d + %d = %d",num, num2, num + num2); //출력

}
*/
/****************************************************************************************************************************
예제 자료형
1. 10진수 8을 2진수로 바꿔보세요 1000
2. 음수도 표현하는 자료형 앞에 붙는 단어는 무엇인가요? signed 
3. 다음 표의 빈 곳을 채워주세요.
	1 = 8
	2 - 128 ~ 127
	3. 65536
	5. 32 
4. 1바이트의 자료형에서 5의 음수를 2진수로 표현하세요.
	1111/1011
5. 실수의 표현방법은 무엇인가요 부동소수점
6.double이 오차 범위가 적다
********************************************************************************************************************/
/*******************************************************************************************************************
예제 2 - 1 
#include<stdio.h>
void main(void)
{
	printf("오늘부터 본격 c 프로그래밍 수업\n");
	printf("오늘부터 본격 c 프로그래밍 수업");
}
예제 2 - 2
/*void main(void)
{
	printf("당신의 나이는?");
	int value = 0;
	scanf("%d", &value);
	printf("당신의 나이는 %d이군요", value);
	}
예제 2-3
void main(void)
{
	printf("\\     /\\\n");
	printf(" )   ( \')\n");
	printf("(    /  )\n");
	printf(" \\  (__)|");

}

******************************************************************************************************************/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*void main(void)
{
	printf("줄바꿈\n\t\?줄");
	printf("\n숫자를 입력하세요");
	int value1 = 0, value2 = 0;
	int success = 0;
		success = scanf("%d,%d", &value1, &value2);
	printf("입력받은 숫자 : %d, %d", value1, value2);
	
}
*/

//								예제 3-1 
// void main(void)
//{
//	printf("더하고 싶은 숫자를 차례대로 입력하세요.\n");
//	int value1 = 0, value2 = 0;
//	scanf("%d, %d", &value1, &value2);
//	int sum;
//	sum = value1 + value2;
//	printf("%d,와 %d의 합은 %d입니다.", value1, value2, sum);
//}
//								예제 3-2
// void main(void)
//{
//	int value1 = 0, value2 = 0;
//	scanf("%d, %d", &value1, &value2);
//	int sum;
//	sum = value1 + value2;
//	printf("%d\n", sum);
//	int min;
//	min = value1 - value2;
//	printf("%d\n", min);
//	int mul;
//	mul = value1 * value2;
//	printf("%d\n", mul);
//	int div;
//	div = value1 / value2;
//	printf("%d\n", div);
//	int rem;
//	rem = value1 % value2;
//	printf("%d", rem);
//}
//							조건문 if =  단일 if 조건문
//void main(void)
//{
//	int value = 3;
//	printf("명령문 1 입니다.\n");
//	if(value == 3) printf("3입니다.\n");
//	if (value == 5) printf("5d입니다.\n");
//	printf("출력을 완료했습니다.");
//
//						 조건문 if - 복합 문장 수행 if 조건문 
// void main(void)
//{
//	int value = 3;
//	printf("출력을 시작합니다.\n");
//	if (value == 3);
//	{
//		printf("3입니다.\n");
//		printf("3333333\n");
//	}
//	printf("출력을 완료했습니다.");
//}
//
//						조건문 if ~ else  - 단일 if ~ else 조건문 
// void main(void)
//{
//	int value = 3;
//	printf("명령문을 시작합니다.\n");
//	if (value == 3) printf("3입니다.\n");
//	else printf("3이 아닙니다.\n");
//	printf("명력문을 종료합니다.");
//}
//							if else 복합문장 수행 if 조건문 
// void main(void)
//{
//	int value = 3;
//	printf("명령문을 시작합니다.\n");
//	if (value == 3) {
//		printf("3이지롱\n");
//		printf("3이라고~\n");
//		}
//	else {
//		printf("3이 아닌가봐\n");
//	}
//	printf("명령문을 종료합니다.");
//}
//++앞에 있으면 
// void main(void)
//{
//	int num = 0;
//	printf("%d\n", num++);
//	printf("%d", num);
//}
//
//							조건 수식 연산자 (조건 연산자)
// void main(void)
//{
//	int shipping_fee = 5000;
//	int amount = 55000;
//	if (amount >= 50000) shipping_fee = 0;
//	else shipping_fee = 3000;
//	printf("배송비는 %d 입니다.", shipping_fee);
//}
//							조건 수식 연산자 (삼항연산자)
// void main(void)
//{
//	int shipping_fee = 5000;
//	int amount = 55000;
//	shipping_fee = (amount >= 50000) ? 0 : 3000;
//	printf("배송료는 %d입니다.", shipping_fee);
//}
//                                      case 문 
// int main(){
//	int score = 90;
//switch(score > 90)
//{
//
//		case 1:
//			printf("A입니다.");
//			break;
//		case 2:
//			printf("B입니다.");
//			break;
//		default:
//			printf("C입니다.");
//			break;
//}
//}
//									예제 5-1 
// int main(void)
// {	 char operator;
//	 int val1 = 0, val2 = 0;
//	 int result = 0;
//	printf("연산에 사용할 수 있는 정수와 연산자를 순서대로 입력하세요\n");
//	printf(">>");
//	scanf("%d, %d, %c", &val1, &val2, &operator);
//	switch(operator) {
//				case '+':
//				result = val1 + val2;
//				break;
//				case '-':
//				result = val1 - val2;
//				break;
//				case '*':
//				result = val1 * val2;
//				break;
//				case '/':
//				result = val1 / val2;
//				break;
//				case '%':
//				result = val1 % val2;
//				break;
//	}
//	printf("%d, %d, %c = %d입니다.\n", val1, val2, operator, result);
//	return 0;
//}
//							예제 5-2
void exe1(void)
{
	int x = 0, y = 0, z = 0, a = 0, b = 0;
	int avg = 0, result1 = 0;
	printf("정수 다섯 개를 입력하세요\n>>");
	scanf("%d %d %d %d %d", &x, &y, &z, &a, &b);
	avg = (x + y + z + a + b) / 5;
	printf("평균 점수는 %d이고, 평균미만의 점수는", avg);
	if (x < avg) printf("%d ", x);
	if (y < avg) printf("%d ", y);
	if (z < avg) printf("%d ", z);
	if (a < avg) printf("%d ", a);
	if (b < avg) printf("%d ", b);
 	printf("입니다.");
	
}
void exe2() {
	int val1 = 0, val2 = 0, val3 = 0, val4 = 0, val5 = 0;
	int valAvg = 0;
	printf("정수 다섯개를 입력하세요.\n");
	scanf("%d %d %d %d %d", &val1, &val2, &val3, &val4, &val5);
	printf("%d %d %d %d %d\n", val1, val2, val3, val4, val5);
	valAvg = (val1 + val2 + val3 + val4 + val5) / 5;
	printf("valAvg : %d \n", valAvg);

	printf("평균점수는 %d이고, 평균점수 미만은", valAvg);
	if (val1 < valAvg) printf("%d ", val1);
	if (val2 < valAvg) printf("%d ", val2);
	if (val3 < valAvg) printf("%d ", val3);
	if (val4 < valAvg) printf("%d ", val4);
	if (val5 < valAvg) printf("%d ", val5);
	printf("입니다.");
}

//int sum(int value1, int value2) {
//	int result = value1 + value2;
//	return result;
//}
//void main (void)
//{
//	char val1 = 5, val2 = 10, sum = 0;
//	sum = 10 + 5;
//	if (sum < 5{
//				printf("불합격:);
//	}
//  else if (sum < 10) {
//				printf("나머지공부");
//	}
//	else {
//	printf("합격")
// }
//	int sum_return = sum("val1", "val2");
//	printf("%d", sum_return);
//}
//									예제 5-3
void exe3()
{
	int score = 0;
	printf("점수를 입력하세요\n");
	scanf("%d", &score);
	char grade;
	switch (score / 10) {
		case 10:
		case 9: 
			grade = 'A';
			break;
		case 8:
			grade = 'B';
			break;
		case 7:
			grade = 'C';
				break;
		default:
			grade = 'F';
			break;
	}
	printf("입력받은 점수는 %c 학점입니다.", grade);
}
//for 반복문 
void exeFor1(int value)
{
	int a = 0;
	scanf("%d", &a);
	for (int num = 1;num <= 9; num++)
	{
		printf("%d*%d=%d\n", num, a, a * num);
	}
}


//while 조건문 
void wexe1()
{
	int a = 1;

	while (a <= 10)
	{
		printf("%d\n", a++);

	}
}
//for 내부 반복문
void fexe2()
{
	for (int iOut = 2; iOut < 10; iOut++) {
		if (iOut == 5) break;
		printf("--------------------------------\n");
		for (int iInner = 1; iInner < 10; iInner++) {
			if (iInner == 5) continue;
			if (iInner == 5) return;
			printf("%d*%d=%d\n", iOut, iInner, iOut * iInner);
			
			}
	}
	
}
									//예제 1 - 1 
void exeA() {
	for (int num = 1; num < 11; num++)
	printf("%d\n", num);
}
void exeAA() {
	int a = 1;
		while (a <= 10) {
			printf("%d\n", a++);
		}
}
void exeB() {
	for (int a = 10; a >= 1; a--)
		printf("%d", a);
}
void exeC() {
	int sum = 0;
	for (int a = 1; a <= 10; a++)
	{
		sum += a;
	}
		printf("%d\n", sum);
}
void exeD() {
	int a = 0, b = 0;
	scanf("%d", &a);
	for (int b = 1; b < 10; b++)
	printf("%d %d = %d\n", a, b, a * b);
}
void exeE() {
	int n = 0;
	scanf("%d", &n);
	for (int a = 1; a <= n; a++)
	{
		for (int b = 1; b <= n; b++) {
			if(a>=b) printf("*");
			
	
		}
		printf("\n");
	}
}
void exeF() {
	int n = 0;
	scanf("%d", &n);
	for (int a = 1; a <= n; a++)
	{
		for (int b = 1; b <= (n-a+1); b++) {
			 printf("*");
		}
		printf("\n");
	}
}
void exeG() {
	int n = 0, sum = 0;
	do {
		scanf("%d", &n);
		sum += n;
	} while (sum < 100);

	printf("%d", sum);
}
void exeH_1() {
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= 5; j = j++) {
			if (i == j) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
}
void exeH_2() {
	for (int i = 1; i <= 5; i++) {
		for (int j = i; j <= 5; j++) {
			if (j == (5 - i + 1)) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
}
void exeI() {
	int a = 5;
	for (int i = 1; i <= a; i++) {
		for (int j = 1; j < (a * 2); j++) {
			if (j > a - i && j < a + i) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
}
void main(void)
{
	exeI();
}

