#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <errno.h>
//#defind LOG_FILE "221102_err_log.txt"
								/*���� - ���ڿ�*/
void exe1_1() {
	char season[30];
	do {
		printf("������ �Է��ϼ���\n");
		scanf("%s", &season);
		if (strcmp(season, "��") == 0)  printf("���� ��ǥ���� ���� �������Դϴ�.");
		else if (strcmp(season, "����") == 0) printf("������ ��ǥ���� ���� ����Դϴ�.");
		else if (strcmp(season, "����") == 0) printf("������ ��ǥ���� ���� �ڽ����Դϴ�.");
		else if (strcmp(season, "�ܿ�") == 0) printf("�ܿ��� ��ǥ���� ���� ��ȭ�Դϴ�.");
		else printf("������ �߸� �Է��Ͽ����ϴ�. �ٽ� �Է��ϼ���");
	} while (strcmp(season, "end") != 0);
}
void exe1_2() {
	char lName[30];
	char fName[30];
	printf("���� �Է��ϼ���\n->");
	scanf("%s", &lName);
	printf("�̸��� �Է��ϼ���\n->");
	scanf("%s", &fName);
	strcat(lName, fName);
	printf("%s", lName);
}
void exe1_3(char* data1, char* data2) {
	char temp[10] = {'0',};
	strcpy(temp, data1);
	strcpy(data1, data2);
	strcpy(data2, temp);
	printf("%s %s\n", data1, data2);
	strcat(data1, data2);
	printf("%s", data1);
}
//void main() {
//	char value1[30] = "Hello";
//	char value2[30] = "world";
//	exe1_3(value1, value2);
//
//}
//void exe1_4() {
//		FILE* fp;
//		fp = fopen("LOG_FILE", "at");
//		time_t timer;
//		struct tm* t;
//		timer = time(NULL);
//		t = lacaltime(&timer);
//		if (fp == NULL) {
//			printf("ERR(%d) : %04d/%02d/%02d %02d:%02d:%02d ->%s\n", errno, 
//			t->tm_year +1900, t->tm_mon +1, t->tm_mday, t->tm_hour, 
//			t->tm_min, t->tm_sec, strerror(errno));
//			return 0;
//		}
//		fclose(fp);
//}
//void main() {
//	FILE* fp = fopen("NotExists.txt", "rt");
//	if (NULL != fp) {
//		fclose(fp);
//		}
//	else {
//		exe1_4();
//	}
//}
							/*����Լ�*/
void fn_recursive(int num) {
	if (num <= 0) return;					//Ż������ 0�� �Ǳ� ������ ����Ʈ
	printf(" ����Լ� num %d\n", num);
	fn_recursive(--num);					// �ڱ� �ڽ� �ٸ鼭 ȣ�� 
}
//void main() {
//	fn_recursive(10);
//}
void fn_r(int num) {
	if (num > 10) return;				
	printf("%d\n", num);
	fn_r(++num);
	
}
//void main() {
//	fn_r(5);
//}
							/*���ϴ� ����Լ�*/
int sum(int n) {
	if (n < 1) return 0;		//3 < 1 ������
	return n + sum(n - 1);		// 3+ (sum(2))
							// 3 + 2 +(sum(1))
							// 3 + 2 + 1 + (sum0)) -> sum0 ��������
}
//void main() {
//	printf("%d", sum(3));
//}
void fn(int n) {
	if (n <=1) return;
	fn(--n);
	printf("%d\n", n);
}
//void main() {
//	int num = 0;
//	printf("���ڸ� �Է����ּ���\n");
//	scanf("%d", &num);
//	fn(num);
//}
int fac(int n) {
	if (n == 0) return 1;
	return (n* fac(n - 1));
}
//void main() {
//	int input = 0;
//	printf("���ڸ� �Է����ּ���\n->");
//	scanf("%d", &input);
//	printf("%d", fac(input));
//}
void print(int n) {
	int N = 0;
	printf("%d\n", n);
	if (n != 1)
	print(n-1);
	print(n);

}
int main() {
	int n = 0;
	scanf("%d", &n);
	print(1);
	return 0;
}