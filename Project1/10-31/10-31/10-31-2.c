#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ADD(a,b) (a+b)
#define getrandom(min, max) \
		(rand()%(int)(((max+1)- (min)))+(min))
#define stringer(x) printf_s( #x "\n")
#define NAME_VALUE(target) printf("%s : %d\n", #target, target)
#define paster(n) printf_s("token" #n" = %d", token##n)
#define XN(n) x ## n
#define test "T"
#ifndef test
# define final "final"
#endif
#define max(x,y,z) \
//	for (int i = 0; i < 3; i++){
//	if ((a[i] > max) max = a[i]) 
//	}
//				
//void main() {
//	int a = 0, b = 0, c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	printf("%d", max(a, b, c);
//}



//#define __c
//#if !defined(_CRT_SECURE_NO_WARNINGS__)
//#error _CRT_SECURE_NO_WARNINGS
//#endif
enum Days { MON, TUE, WEN, THU, FRI, SAT, SUN };
int add(int a, int b);
int token9 = 99;
int input = 0, value = 0;
//void main() {
//	printf("1. ADD(1,2): %d\n", ADD(1, 2));
//	printf("2. add(1,2): %d\n", add(1, 2));
//
//	printf("3. ADD(1,2): %d\n", ADD(1, 2)*2);
//	printf("4. add(1,2): %d\n", add(1, 2)*2);
//}
int add(int a, int b) {
	return a + b;
}
//void main() {
//	srand((unsigned int)time(NULL));
//	for (int i = 0; i < 5; i++) {
//		printf("%d\n", getrandom(100, 150));
//	}
//}
//void main() {
//	stringer(hello);
//	stringer("hello");
//	printf_s("\"hell0\"""\n");
//	stringer("he\"llo");
//}
//						# target, target
//void main() {
//	NAME_VALUE(WEN);
//}
								//token##n
//void main() {
//	paster(9);
//}
								//�����Ҵ�ó�� ��� ���� 
//void main(void) {
//	int XN(1) = 10;
//	int XN(2) = 20;
//	printf("��� ���ڸ� �Է��Ͻðڽ��ϱ�?\n");
//	scanf("%d", &value);
//	for (int i= 0; i < input; i++) {
//		int XN(i) = value;
//		NAME_VALUE(value);
//	}
//	printf("x1�� ����� ���� %d�Դϴ�.\n", x1);
//	printf("x2�� ����� ���� %d�Դϴ�.\n", x2);
//}
								/*line ��ó����*/
/*void main(void) {
	printf("This code is on line %d, in file %s\n", __LINE__, __FILE__);
#line 10
	printf("This code is on line %d, in file %s\n", __LINE__, __FILE__);
#line 20 "hello.c"
	printf("This code is on line %d, in file %s\n", __LINE__, __FILE__);
	printf("This code is on line %d, in file %s function %s\n", __LINE__, __FILE__, __FUNCTION__);
}
		*/						

