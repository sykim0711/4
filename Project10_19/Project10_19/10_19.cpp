#include <stdio.h>
#include <string.h> //�������� - ��ó���� �� ����, ���α׷� �� ��� �Լ� ��� ���� 
static int globalNum = 100;
#define _CRT_SECURE_NO_WARNINGS

void exe3() {
	int test = 0;
	int a = 0;
}

										//����Ǯ��

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
							//��������
void print() {
	int val1 = 30, val2 = 40;
	printf("%d %d \n", val1, val2);
}
//void main(void) {
//	int val1 = 10, val2 = 20;
//	printf("%d %d \n", val1, val2);
//	print();
//}
							//�������� 
void sub() {
	int subInt = 0;
	printf("sub : %d \n", globalNum);
}
							//���� �������� 
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
//���� 1 
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
								//�迭
void arr1() {
	int valArray[5] = { 5,7,10,32,1 };

	printf("%d, %d, %d, %d, %d\n", valArray[0], valArray[1], valArray[2], valArray[3], valArray[4]);
	for (int i = 0; i < 5; i++) {
		printf("%d\t", valArray[i]);
	}
}
								//���ڿ�
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
//	printf("�迭�� ���� ���ϱ� ��� 1 \n");
//	int size1 = 0, size2 = 0;
//	size1 = sizeof(data1);
//	printf("%d\n", size1); 
//	printf("�迭�� ���� ���ϱ� ��� 2\n");
//	int intArr[5] = { 1, 2, 3, 4, 5 };
//	printf("%d\n", sizeof(intArr));
//	printf("�迭�� ���� ���ϱ� ��� 3\n");
//	printf("%d\n", sizeof(intArr) / sizeof(int));
//	printf("�迭�� ���� ���ϱ� ��� 4 \n");
//	printf("%d\n", sizeof(intArr) / sizeof(intArr[0]));
//	printf("���ڿ� ���� ���ϱ� \n");
//	char data[10] = "Hello";
	//printf("%d\n", strlen(data));
	//printf("���ڿ� ���̱� \n");
	//printf("%s", strcat(data, "!!"));
	//printf("���ڿ� n���ڸ� ���̱� \n");
	//printf("%s", strncat(data, "!!"));
//}
							/*���� 2 -1 */
						//void main(){
						//	char hi[] = "hi";
						//	char hi1[3] = "hi";
						//	char hi2[] = { 'h', 'i', '\0' };
						//	char hi3[3] = { 'h', 'i', '\0' };
						//	char hi4[3] = { 'h', 'i', (char) NULL };
						//
						//	}
							/*���� 2 -2 */
//void main() {
//	int test[] = { 3, 29, 36, 12, 57, 74, 40, 85, 61 };
//	int i = 0, index = 0;
// 
//	int max = test[0];
//		for (i = 0; i < 10; i++) {
//			if (test[i] > max) max = test[i];
//			index = i;
//		}
//	printf("�ִ� : %d\n", max);
//	printf("��ġ : %d", index);
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
//	printf("�ִ밪 : %d, ��ġ %d��°", maxVal, maxIndex + 1);
//}
						/*���� 2 -3 */
						//void main() {
						//	char kak[] = "kakao";
						//	char tal[] = "talk";
						//	printf("%s", strcat(kak, tal));
						//}

//������
//void main(void) {
//	short birthday = 1018;
//	short* ptr = &birthday;
//	printf("birthday : %hi \n", birthday);
//	printf("ptr : %hi \n", *ptr);
//	printf("&ptr : %p \n", &ptr);
//	printf("ptr : %p \n", ptr);
//	printf("&birthday : %p \n", &birthday);
//	*ptr = 1011;
//	printf("*ptr�� birthday ���� : %hi", birthday);
//}
				/*�Ű� ������ �ٸ� �Լ��� ���� �ּ� �ޱ� */
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
			/*const�� ����ؼ� �Ű����� ��ȯ�ȵǰ� �ϱ� */
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