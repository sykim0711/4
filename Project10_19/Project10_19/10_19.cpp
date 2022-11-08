#include <stdio.h>
#include <string.h> //전역변수 - 전처리기 밑 선언, 프로그램 내 모든 함수 사용 가능 
static int globalNum = 100;
#define _CRT_SECURE_NO_WARNINGS

void exe3() {
	int test = 0;
	int a = 0;
}

										//문제풀이

void exe6_8() { 
	int a = 5;
	for (int i = 1; i <= a; i++) {
		for (int j = 1; j < (a * 2); j++) {
			if (j > a - i && j < a + i) printf("*");
			else printf(" ");
		}
		
	printf("\n");
	}
}
void exe6_9() {
	int a = 9;
	for (int i = 0; i <= a; i++) {
		for (int j = 1; j <= a; j++) {
			if (j==i+1 || j==(a - i)) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
}
							//지역변수
void print() {
	int val1 = 30, val2 = 40;
	printf("%d %d \n", val1, val2);
}
//void main(void) {
//	int val1 = 10, val2 = 20;
//	printf("%d %d \n", val1, val2);
//	print();
//}
							//전역변수 
void sub() {
	int subInt = 0;
	printf("sub : %d \n", globalNum);
}
							//정적 지역변수 
void increaseNumber(void) {
	static int number = 0;
	printf("%d \n", number++);
}
//void main(void) {
//	
//	increaseNumber();
//	increaseNumber();
//	increaseNumber();
//}
//예제 1 
//int returnNum() {
//	int num = 5; 
//	return num;
//	}
//void main(int) {
//	
//	int num = 0; 
//	returnNum();
//	printf("%d", num);
//}
								//배열
void arr1() {
	int valArray[5] = { 5,7,10,32,1 };

	printf("%d, %d, %d, %d, %d\n", valArray[0], valArray[1], valArray[2], valArray[3], valArray[4]);
	for (int i = 0; i < 5; i++) {
		printf("%d\t", valArray[i]);
	}
}
								//문자열
//void main() {
//	char data1[6] = { 'H', 'e', 'l' ,'l', 'o', 0 }; 
//	char data2[6] = { 'H', 'e', 'l' ,'l', 'o', '\0'};
//	char data3[6] = { 'H', 'e', 'l' ,'l', 'o', (char) NULL};
//	char data4[6] = "Hello";
//	char data5[] = "Hello";
//	printf("%s\n", data1);
//	printf("%s\n", data2);
//	printf("%s\n", data3);
//	printf("%s\n", data4);
//	printf("%s\n", data5);
//	printf("---------------------------------------------------\n");
//	int count = 0;
//	while (data1[count] != 0) count++;
//	printf("%d\n", count);
//	printf("배열의 길이 구하기 방법 1 \n");
//	int size1 = 0, size2 = 0;
//	size1 = sizeof(data1);
//	printf("%d\n", size1); 
//	printf("배열의 길이 구하기 방법 2\n");
//	int intArr[5] = { 1, 2, 3, 4, 5 };
//	printf("%d\n", sizeof(intArr));
//	printf("배열의 길이 구하기 방법 3\n");
//	printf("%d\n", sizeof(intArr) / sizeof(int));
//	printf("배열의 길이 구하기 방법 4 \n");
//	printf("%d\n", sizeof(intArr) / sizeof(intArr[0]));
//	printf("문자열 길이 구하기 \n");
//	char data[10] = "Hello";
	//printf("%d\n", strlen(data));
	//printf("문자열 붙이기 \n");
	//printf("%s", strcat(data, "!!"));
	//printf("문자열 n글자만 붙이기 \n");
	//printf("%s", strncat(data, "!!"));
//}
							/*예제 2 -1 */
						//void main(){
						//	char hi[] = "hi";
						//	char hi1[3] = "hi";
						//	char hi2[] = { 'h', 'i', '\0' };
						//	char hi3[3] = { 'h', 'i', '\0' };
						//	char hi4[3] = { 'h', 'i', (char) NULL };
						//
						//	}
							/*예제 2 -2 */
//void main() {
//	int test[] = { 3, 29, 36, 12, 57, 74, 40, 85, 61 };
//	int i = 0, index = 0;
// 
//	int max = test[0];
//		for (i = 0; i < 10; i++) {
//			if (test[i] > max) max = test[i];
//			index = i;
//		}
//	printf("최댓값 : %d\n", max);
//	printf("위치 : %d", index);
//
//}
//void main() {
//	int value[] = { 3, 29, 36, 12, 57, 74, 40, 85, 61 };
//	int valSize = sizeof(value) / sizeof(int);
//	int maxVal = 0, maxIndex = 0;
//	for (int i = 0; i < valSize; i++) {
//		if (maxVal < value[i]) {
//			maxVal = value[i];
//			maxIndex = i;
//		}
//	}
//	printf("최대값 : %d, 위치 %d번째", maxVal, maxIndex + 1);
//}
						/*예제 2 -3 */
						//void main() {
						//	char kak[] = "kakao";
						//	char tal[] = "talk";
						//	printf("%s", strcat(kak, tal));
						//}

//포인터
//void main(void) {
//	short birthday = 1018;
//	short* ptr = &birthday;
//	printf("birthday : %hi \n", birthday);
//	printf("ptr : %hi \n", *ptr);
//	printf("&ptr : %p \n", &ptr);
//	printf("ptr : %p \n", ptr);
//	printf("&birthday : %p \n", &birthday);
//	*ptr = 1011;
//	printf("*ptr로 birthday 수정 : %hi", birthday);
//}
				/*매개 변수로 다른 함수의 변수 주소 받기 */
				/*		void Test(short *ptr) {
							*ptr = 3;
						}
						void main(void) {
							short tips = 5;
							Test(&tips); 
							printf("%hi", tips);
						}*/
//void Test(short *ptr) {
//	printf("%d\n", ptr);
//}
//void main(void) {
//	short birthday = 1018;
//	printf("%p\n", &birthday);
//	Test(&birthday);
//}
			/*const를 사용해서 매개변수 변환안되게 하기 */
//void const Test(const* ptr) {
//	*ptr = 1001;
//	
//}
//void main(void) {
//	short birthday = 1018;
//	Test(&birthday);
//	printf("%hi", birthday);
//}

void Test( short * ptr) {
	
	*ptr = 5;
	//const short * ptr = &tips;

}
void main(void) {
	short tips = 0;
	Test(&tips);
	printf("%d", tips);
}