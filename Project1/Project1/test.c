/*#include<stdio.h>
//�����Լ�, ���α۸� ����� ó���� �д´�. 

void main(void)
{
	//������ ���� ()�� ���� ���� ���� ����
	unsigned short num = -5;
	unsigned short num2 = 10; 
	printf("�ڷ��� Ȯ�� : %d + %d = %d",num, num2, num + num2); //���

}
*/
/****************************************************************************************************************************
���� �ڷ���
1. 10���� 8�� 2������ �ٲ㺸���� 1000
2. ������ ǥ���ϴ� �ڷ��� �տ� �ٴ� �ܾ�� �����ΰ���? signed 
3. ���� ǥ�� �� ���� ä���ּ���.
	1 = 8
	2 - 128 ~ 127
	3. 65536
	5. 32 
4. 1����Ʈ�� �ڷ������� 5�� ������ 2������ ǥ���ϼ���.
	1111/1011
5. �Ǽ��� ǥ������� �����ΰ��� �ε��Ҽ���
6.double�� ���� ������ ����
********************************************************************************************************************/
/*******************************************************************************************************************
���� 2 - 1 
#include<stdio.h>
void main(void)
{
	printf("���ú��� ���� c ���α׷��� ����\n");
	printf("���ú��� ���� c ���α׷��� ����");
}
���� 2 - 2
/*void main(void)
{
	printf("����� ���̴�?");
	int value = 0;
	scanf("%d", &value);
	printf("����� ���̴� %d�̱���", value);
	}
���� 2-3
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
	printf("�ٹٲ�\n\t\?��");
	printf("\n���ڸ� �Է��ϼ���");
	int value1 = 0, value2 = 0;
	int success = 0;
		success = scanf("%d,%d", &value1, &value2);
	printf("�Է¹��� ���� : %d, %d", value1, value2);
	
}
*/

//								���� 3-1 
// void main(void)
//{
//	printf("���ϰ� ���� ���ڸ� ���ʴ�� �Է��ϼ���.\n");
//	int value1 = 0, value2 = 0;
//	scanf("%d, %d", &value1, &value2);
//	int sum;
//	sum = value1 + value2;
//	printf("%d,�� %d�� ���� %d�Դϴ�.", value1, value2, sum);
//}
//								���� 3-2
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
//							���ǹ� if =  ���� if ���ǹ�
//void main(void)
//{
//	int value = 3;
//	printf("��ɹ� 1 �Դϴ�.\n");
//	if(value == 3) printf("3�Դϴ�.\n");
//	if (value == 5) printf("5d�Դϴ�.\n");
//	printf("����� �Ϸ��߽��ϴ�.");
//
//						 ���ǹ� if - ���� ���� ���� if ���ǹ� 
// void main(void)
//{
//	int value = 3;
//	printf("����� �����մϴ�.\n");
//	if (value == 3);
//	{
//		printf("3�Դϴ�.\n");
//		printf("3333333\n");
//	}
//	printf("����� �Ϸ��߽��ϴ�.");
//}
//
//						���ǹ� if ~ else  - ���� if ~ else ���ǹ� 
// void main(void)
//{
//	int value = 3;
//	printf("��ɹ��� �����մϴ�.\n");
//	if (value == 3) printf("3�Դϴ�.\n");
//	else printf("3�� �ƴմϴ�.\n");
//	printf("��¹��� �����մϴ�.");
//}
//							if else ���չ��� ���� if ���ǹ� 
// void main(void)
//{
//	int value = 3;
//	printf("��ɹ��� �����մϴ�.\n");
//	if (value == 3) {
//		printf("3������\n");
//		printf("3�̶��~\n");
//		}
//	else {
//		printf("3�� �ƴѰ���\n");
//	}
//	printf("��ɹ��� �����մϴ�.");
//}
//++�տ� ������ 
// void main(void)
//{
//	int num = 0;
//	printf("%d\n", num++);
//	printf("%d", num);
//}
//
//							���� ���� ������ (���� ������)
// void main(void)
//{
//	int shipping_fee = 5000;
//	int amount = 55000;
//	if (amount >= 50000) shipping_fee = 0;
//	else shipping_fee = 3000;
//	printf("��ۺ�� %d �Դϴ�.", shipping_fee);
//}
//							���� ���� ������ (���׿�����)
// void main(void)
//{
//	int shipping_fee = 5000;
//	int amount = 55000;
//	shipping_fee = (amount >= 50000) ? 0 : 3000;
//	printf("��۷�� %d�Դϴ�.", shipping_fee);
//}
//                                      case �� 
// int main(){
//	int score = 90;
//switch(score > 90)
//{
//
//		case 1:
//			printf("A�Դϴ�.");
//			break;
//		case 2:
//			printf("B�Դϴ�.");
//			break;
//		default:
//			printf("C�Դϴ�.");
//			break;
//}
//}
//									���� 5-1 
// int main(void)
// {	 char operator;
//	 int val1 = 0, val2 = 0;
//	 int result = 0;
//	printf("���꿡 ����� �� �ִ� ������ �����ڸ� ������� �Է��ϼ���\n");
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
//	printf("%d, %d, %c = %d�Դϴ�.\n", val1, val2, operator, result);
//	return 0;
//}
//							���� 5-2
void exe1(void)
{
	int x = 0, y = 0, z = 0, a = 0, b = 0;
	int avg = 0, result1 = 0;
	printf("���� �ټ� ���� �Է��ϼ���\n>>");
	scanf("%d %d %d %d %d", &x, &y, &z, &a, &b);
	avg = (x + y + z + a + b) / 5;
	printf("��� ������ %d�̰�, ��չ̸��� ������", avg);
	if (x < avg) printf("%d ", x);
	if (y < avg) printf("%d ", y);
	if (z < avg) printf("%d ", z);
	if (a < avg) printf("%d ", a);
	if (b < avg) printf("%d ", b);
 	printf("�Դϴ�.");
	
}
void exe2() {
	int val1 = 0, val2 = 0, val3 = 0, val4 = 0, val5 = 0;
	int valAvg = 0;
	printf("���� �ټ����� �Է��ϼ���.\n");
	scanf("%d %d %d %d %d", &val1, &val2, &val3, &val4, &val5);
	printf("%d %d %d %d %d\n", val1, val2, val3, val4, val5);
	valAvg = (val1 + val2 + val3 + val4 + val5) / 5;
	printf("valAvg : %d \n", valAvg);

	printf("��������� %d�̰�, ������� �̸���", valAvg);
	if (val1 < valAvg) printf("%d ", val1);
	if (val2 < valAvg) printf("%d ", val2);
	if (val3 < valAvg) printf("%d ", val3);
	if (val4 < valAvg) printf("%d ", val4);
	if (val5 < valAvg) printf("%d ", val5);
	printf("�Դϴ�.");
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
//				printf("���հ�:);
//	}
//  else if (sum < 10) {
//				printf("����������");
//	}
//	else {
//	printf("�հ�")
// }
//	int sum_return = sum("val1", "val2");
//	printf("%d", sum_return);
//}
//									���� 5-3
void exe3()
{
	int score = 0;
	printf("������ �Է��ϼ���\n");
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
	printf("�Է¹��� ������ %c �����Դϴ�.", grade);
}
//for �ݺ��� 
void exeFor1(int value)
{
	int a = 0;
	scanf("%d", &a);
	for (int num = 1;num <= 9; num++)
	{
		printf("%d*%d=%d\n", num, a, a * num);
	}
}


//while ���ǹ� 
void wexe1()
{
	int a = 1;

	while (a <= 10)
	{
		printf("%d\n", a++);

	}
}
//for ���� �ݺ���
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
									//���� 1 - 1 
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

