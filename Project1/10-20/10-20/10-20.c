#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
void test(short * pbirthday) {
	*pbirthday = 1225;
}
//void main() {
//	
//	short arr[5] = { 1,2,3,4,5 };
//	short* pArr = &arr;
//	for (short i = 0; i < 5; i++) {
//		printf("pArr+%d: %d\tarr[%d]:%p\n", i, *(pArr +i), i,&arr[i]);
//		printf("arr[%d] = %d\n", i, arr[i]);
//	}
//}
//void main() {
//	int num[10];
//	int * Num = &num;
//	num++;
//	printf("%d", *num) == num[1];
//
//}
//void main(void){
//	int myArr[10] = { 0,2,4,6,8,10,12,14,16,18 };
//	int* pArr = &myArr[0]; //pArr는 0의 주소값
//	int i = 0;
//	printf("%zdbyte\n", sizeof(int)); //int byte 값은 4야
//	for (i = 0; i < 10; i++) { //첫번째 위치부터 9번째까지 순서대로 찍으세요
//		printf("%p \n", &myArr[i]); //1번 위치의 주소찍으세요
//	}
//	printf("%ld\n", sizeof(myArr) / sizeof(myArr[0])); // 어레이의 크기 
//	printf("%d = %d != %d", myArr[1], *(pArr + 1), (*pArr + 1));
//					//인덱스 1인 값, 주소의 1 더함, 값에 1더함 
//}

							/*2치원 배열 */
//void main() {
//	//int arr1[2][3] = { 10, 20, 30, 40, 50, 60 };
//int arr2[2][3] = {
//	{10, 20, 30},
//	{40, 50, 60}
//
//for (int row = 0; row < 3; row++) {
//	for (int cul = 0; cul < 4; cul++) {
//		printf("&arr2[i][j]\t값:%d\t주소:%p", row, cul, *Arr2[row][cul], &arr2[row][cul]);
//	}
//}
//}
// 
// 
// 
//	/*int arr3[3][4] = {
//			{10, 20},
//			{30,40,50,60},
//			{0,0,70,80}
//	};
//	//	//};
//	//	for (int col = 0; col < 4; col++); {
//	//		printf("%d, ", arr3[row][col]);
//
//}
// 
//void main(void) {
//	int arr04[4][3] = {
//		{1,2,3},
//		{4,5,6},
//		{7,8,9},
//		{10,11,12}
//	};
//	printf("sizeof(arr04) :%zd \n", sizeof(arr04));
//	printf("sizeof(arr04[0] : %zd\n", sizeof(arr04[0]));
//	printf("sizeof(arr04[0][0] : %zd\n", sizeof(arr04[0][0]));
// }
								/*예제*/
//void exe_1() {
//	short data[9] = { 4, 6, 9, 8, 7, 2, 5, 1 ,3 };
//	int sum = 0;
//	for (int i = 0; i < 9; i++) {
//		if (i % 2 == 1) {
//			sum += data[i];
//		}
//	}
//	printf("%d", sum);
//}
//void exe_2() {
//	short data[9] = { 4, 6, 9, 8, 7, 2, 5, 1, 3 };
//	int i = 0, j = 0, x = 0;
//	for (i = 0; i < 9; i++) {
//		for (j = 0; j < 9; j++) {
//			if (data[j] > data[j + 1]) {
//				x = data[j];
//				data[j] = data[j + 1];
//			}
//		}
//	}
//	
//}


//void exe_3() {
	//short data[3][3] = {
	//	{3, 6, 9},
	//	{8, 7, 2},
	//	{5, 1, 3}
	//};
//	short data[9] = { 4, 6, 9, 8, 7, 2, 5, 1, 3 };
//	short data[3][3] = { 0, };
//	int index = 0, row5 = 0, col5 = 0;
//	for (int row = 0; row < 3; row++) {
//		for (int col = 0; col < 3; col++) {
//			data[row][col] = data[index++];
//			if (data[row][col] == 5) {
//				row5 = row;
//				col5 = col;
//			}
//		}
//	}
//	printf("%d, %d", row5, col5);
//}
//void exe_4() {
//	char data[3][4] = {
//		{0,0,0,0},
//		{0,1,0,0},
//		{0,0,3,0}
//	};
//}
//void exe_5(){
//	data_1 = 0 
//	for ( int value1 = 1; value1 <= 16; value1++)
//		date[4][4] += [value1] 
//}
void exe_6() {
	int arr[4][4] = {0, };
	int rowSize = sizeof(arr) / sizeof(arr[0]);
	int colSize = sizeof(arr[0]) / sizeof(int);
	int value = 0;
	for (int row = 0; row < rowSize; row++) {
		for (int col = 0; col < colSize; col++) {
			arr[row][col] = ++value;
			printf("%d", arr[row][col]);
		}
		printf("\n");
	}
}
void fn_arr1() {
	int value = 1025;
	char* pVal = (char*)&value;
	for (int i = 0; i < sizeof(int); i++) {
		printf("%d\n", *pVal);
		pVal++;
	}
}int GetData(void* p_data, char type) {
	int result = 0;
	if (type == 1) result = *(char*)p_data;
	else if (type == 2) result = *(short*)p_data;
	else if (type == 4) result = *(int*)p_data;
	return result;
}

void main() {
	int data = 0x12345678;
	int size = 0;

	printf("%X\n", GetData(&data,4));
	}