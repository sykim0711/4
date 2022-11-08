#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//typedef unsigned short int US;

//void main() {
//	unsigned short int data = 150;
//	char temp;
//	temp = data;
//	printf("temp = %d\n", temp);
//}
void exe_1() {
	short data[9] = { 4,6,9,8,7,2,5,1,3 };
	int size = sizeof(data)/sizeof(short);
	int sum = 0;
	for (int num = 0; num < size; num++) {
		if (num % 2 == 1) sum += data[num];
	}
	printf("%d", sum);
}
void exe_2() {
	short data[9] = { 4,6,9,8,7,2,5,1,3 };
	int size = sizeof(data) / sizeof(short);
	int temp = 0;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < (size - 1) - i; j++) {
			if (data[i] > data[j + 1]) {
				temp = data[j];
				data[j] = data[j + 1];
				data[j + 1] = temp;
			}
		}

	}
	for (int y = 0; y < size; y++) {
		printf("%d", data[y]);
	}
}
void exe_3() {
	short data[9] = { 4,6,9,8,7,2,5,1,3 };
	short data1[3][3] = { 0, };
	int index = 0, row5 = 0, col5 = 0;
	for (int row = 0; row < 3; row++) {
		for (int col = 0; col < 3; col++) {
			data1[row][col] = data[index++];
			if (data1[row][col] == 5) {
				row5 = row;
				col5 = col;
			}
		}
	}
	printf("%d, %d ", row5, col5);
}

void exe_4() {
	
	char data1[12] = { 0, };
	char data2[3][4] = { 0, };
	int index = 0;
	int sRow = sizeof(data2) / sizeof(data2[0]);
	int sCol = sizeof(data2[0]) / sizeof(data2[0][0]);
	data1[5] = 1;
	data1[11] = 2;
	for (int row = 0; row < sRow; row++) {
		for (int col = 0; col < sCol; col++) {
			data2[row][col] = data1[index++];
			printf("%d", data2[row][col]);
		}
		
	}	

}
void exe_5() {
	char data[4][4] = { 0, };
	int value = 0;
	for (int row = 0; row < 4; row++) {
		for (int col = 0; col < 4; col++) {
			data[row][col] = ++value;
			printf("%-5d", data[row][col]);
		} 
		printf("\n");
	}
}

void exe_6() {
	char data[4][4] = { 0, };
	int value = 0;
	for (int col = 0; col < 4; col++) {
		for (int row = 0; row < 4; row++) {
			data[row][row] = ++value;
			printf("%-5d", data[row][col]);
		}
		printf("\n");
	}

}
//void exe2_2() {
//	int data = 0x12345678;
//	short* pdata = &data;
//	*pdata = 0x0412;
//	printf("%x", data);
//}
//void main() {
//	exe2_2();
//}
//3333333333333333333333333333333333333333333333333333333
// void swap(int *a, int *b) {
//	int temp;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//
//}
//void main(void) {
//	int a = 100, b = 200;
//	swap(&a, &b);
//	printf("%d %d \n", a,b); 
//}
void exe2_5() {
	char a = 0x12, b = 0x34;
	short c = 0x5678;
	int t = 0;
	short* pT = &t;
	*pT = c;
	char* pCT = &t;
	*(pCT + 2) = b;
	*(pCT + 3) = a;
	printf("%x", t);
}
void arr_pointer_1() {
	char data[5] = { 1,2,3,4,5 };
	int i, sum = 0, select = 2;
	char* p = data + select;
	printf("%p\n", &data[2]);
	printf("%p\n", p);
}
void arr_pointer_2() {
	char data[5] = { 1,2,3,4,5 };
	int i, sum = 0, select = 2;
	char* p = data;
	for (int i = 0; i < 5; i++) {
		sum += p[i];
	}
	printf("%d", sum);
}
void exe3_1() {
	int arr[3][4] = {
			{1,2,3,4},
			{5,6,7,8},
			{9,10,11,12}
	};
	int* pArr = &arr;
	int sRow = sizeof(arr) / sizeof(arr[0]);
	int sCol = sizeof(arr[0]) / sizeof(arr[0][0]);
	for (int row = 0; row < sRow; row++) {
		for (int col = 0; col < sCol; col++) {
			printf("%5d", *pArr++);
		}
		printf("\n");
	}
	
}
void exe3_2() {
	int arr[3][4] = { 
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};
	int* pArr = &arr[2];
	printf("%d", *(pArr+1));
}

//void exe3_3(int * salary, int * bonus,int count) {
//	for (int i = 0; i < count; i++) {
//		printf("%d사원의 급여의 합계는 %d \n",i, * (salary + i) + *(bonus + i));
//	}
//}
//void main(void) {
//	int salary[2][5] = {
//	{200,300,400,500,600},
//	{30,60,90,120,150} 
//	};
//	 sum(salary[0], salary[1], 5);
//}

//void exe3_4() {
//	int val[100] = {0,);
//	do {
//		scanf("%d", &val);
//	} 
//	while (val-1 != -1);
//	
//	printf(val);
//}
									/*구조체*/
//void book_1() 
//	typedef struct book {
//		char title[30];
//		char author[30];
//		int price;
//	} text_book;
//
//void main(void) {
//	text_book mybook = {
//	.title = "Do it! C언어 입문,"
//	.author = "김성엽",
//	.price = 25000
//	};
//	printf("%s\n", mybook.title);
//	text_book* pBook = mybook;
//	printf("%s", pBook->title);
//
//}

//typedef struct student {
//	char name[20];
//	char subject[20];
//	int score;
//} t_student;
//
//
//void main(void) {
//	t_student school;
//
//	scanf("%s,%s, %d", &school.name, school.subject, school.score);
//	printf("%s, %s, %d", school.name, school.subject, school.score);
//}
//typedef struct book {
//	char title[20];
//	char author[20];
//	int price;
//}text_book;
//void main (void){
//	text_book mybook[3] = {
//		{"bookA","John",25000},
//		{"bookB","tom",18000},
//		{"bookc","kim",20000}
//	};
//	for (int i = 0; i < 3; i++) {
//
//	}
//	printf("myBook[%d]:책이름 %-10s, 저자 %-10s, 가격 %-5d\n",
//		i, mybook[0].title, mybook[0].author, mybook[0].price);
//}
//예제 1-1 (구조체)
//typedef struct {
//	char name[20];
//	char school[20];
//	int grade;
//}test_1;
//void main (void) {
//	test_1 test;
//	scanf( "%s %s %d", &test.name, &test.school, &test.grade);
//	printf("Name : %s\nSchool : %s\nGrade : %d", test.name, test.school, test.grade);
//	
//}
//예제 1-2 (구조체)
typedef struct {
	char subjectName[20];
	int m.score;
	int f.score;
}data1;
void main(void) {
	data1 data[3][3]{

	}

}