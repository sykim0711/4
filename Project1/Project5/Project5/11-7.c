#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <malloc.h>
#define SWAP(a,b) {int t; t=a; a=b; b=t;}
void ViewArr(int*, int);
int count = 0;
int* origin;
int on;
/// //////////////////////////////////////////////////////////////////1���� n������ ����ϱ�///////////////////////////////////////////////////////////
//void fn3(int num) {
//
//	if (num >1) {
//		fn3(num - 1);
//	}
//	printf("%d\n", num);
//
//}
////void main() {
////	int input;
////	printf("���ڸ� �Է��ϼ���.\n->");
////	scanf("%d", &input);
////	fn3(input);
////}
///// //////////////////////////////////////////////////////////////////���丮�� ���ϱ� ///////////////////////////////////////////////////////////
////int fn4(int num) {
////	if (num == 0) {
////		return 1;
////	}
////	else if (num == 1) printf("%d", num);
////	return num * fn(num - 1);
////}
////void main() {
////	int input;
////	printf("���ڸ� �Է��ϼ���.\n->");
////	scanf("%d", &input);
////	printf("%d!= %d", input, fn(input));
////}
//int fibo(int num) {
//	if (num == 0) 0;
//	else if (num == 1) return 1;
//	else return fibo(num - 1) + fibo(num - 2);
//}
////void main() {
////	int input;
////	printf("���ڸ� �Է��ϼ���\n->");
////	scanf("%d", &input);
////	for (int i = 0; i < input; i++) {
////		printf("%d", fibo(i));
////	}
////}
///////////////////////////////////////////////////////////////���� ����//////////////////////////////////////////////////////////////////////////////
////void SequenceShort(int* base, int n) {
////	int i, j;
////	ViewArr(base, n);
////	for (i = 0; i < n; i++) {
////		for (j = 0; j < n; j++) {
////			if (base[i] > base[j]) {
////				SWAP(base[i], base[j]);
////				ViewArr(base, n);
////			}
////		}
////	}
////}
////void main(void) {
////	int arr[10] = { 9,4,3,10,5,8,7,6,2,1 };
////	SequenceShort(arr, 10);
////}
///////////////////////////////////////////////////////////////��������//////////////////////////////////////////////////////////////////////////////
//count = 0;
//void BubblShort(int* base, int n) {
//	int i, j;
//	ViewArr(base, n);
//	for (i = n; i > 1; i--) {
//		for (j = 1; j < i; j++) {
//			if (base[j - 1] > base[j]){
//				SWAP(base[j - 1], base[j]);
//			ViewArr(base, n);
//			}
//		}
//	}
//}
//
////void main(void) {
////	int arr[10] = { 9,4,3,10,5,8,7,6,2,1 };
////	BubblShort(arr, 10);
////}
///////////////////////////////////////////////////////////////////���� ����//////////////////////////////////////////////////////////////////////////////
//void SelectionSort(int* base, int n)
//{
//	int i, j;
//	int maxi;
//	ViewArr(base, n);
//	for (i = n; i > 1; i--); {
//		maxi = 0;
//		for (j = 1; j < i; j++) {
//			count++;
//			if (base[maxi] < base[j]) {
//				maxi = j;
//			}
//		}
//		SWAP(base[maxi], base[i - 1]);
//		ViewArr(base, n);
//	}
//}
//
////void main(void) {
////	int arr[10] = { 9,4,3,10,5,8,7,6,2,1 };
////	SelectionSort(arr, 10);
////}
///////////////////////////////////////////////////////////////////���� ����//////////////////////////////////////////////////////////////////////////////
//void InsertionSort(int* base, int n)
//{
//	int i, j;
//	ViewArr(base, n);
//	for (i = 1; i < n; i++)
//	{	
//		for (j = 0; j > 0; j--) {
//			count++;
//			if (base[j - 1] > base[j])
//			{
//				SWAP(base[j - 1], base[j]);
//				ViewArr(base, n);
//			}
//			else
//			{
//				break;
//			}
//		}
//	}
//}
//void ViewArr(int* arr, int n) {
//	int i = 0;
//	for (i = 0; i < n; i++) {
//		printf("%3d", arr[i]);
//	}
//	printf("\n");
//}
//void main(void) {
//	int arr[10] = { 9,4,3,10,5,8,7,6,2,1 };
//	InsertionSort(arr, 10);
//}
///////////////////////////////////////////////////////////////////���� ����//////////////////////////////////////////////////////////////////////////////
//���� ����
void printSpace(int n) {
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("   ");
	}
}
void QuickSort(int* base, int n) 
{
	int pivot = 0;								//�ǹ��� ��ġ ����ϴ� ����
	int left = 0, right = 0;						//�ǹ����� ū ���� ���� ���� ��ġ�� ã�� ���� ����
	if (n <= 1)
	{
		return;
	}
	left = 0;
	right = n;
	while (1)
	{	//���� �ǹ�(�ε��� 0�� �ִ� ����)���� ū ���� ���� ������ left�� �̵�
		//for�� �� ���� left�� 1�����ϸ鼭 ����ϴ� ������ ������ ���� ���� ��ġ���� �����ϱ� ���ؼ�
		for (left++; (left < n) && base[0] >= base[left]; left++);
		//���ʿ� �ǹ�(�ε��� 0�� �ִ� ����)���� ���� ���� ���� ������ right�� �̵�
		for (right--; (right > 0) && (base[0] < base[right]); right--);
		//���� left�� right���� ������ �ǹ��� ���� ���� ���� ū ������ �ڿ� ������ ��ȯ
		if (left < right)
		{
			SWAP(base[left], base[right]);
			printSpace(base - origin);
			ViewArr(base, n);
		}
		//�׷��� �ʴ�� �ǹ��� �߽����� ���� ����� ū ������ �и� �۾��� ���� ���̴�.
		else {
			break;
		}
	}
	//�ǹ��� ���� ����� ū ���� ���̷� ���� 
	SWAP(base[0], base[right]);
	printSpace(base - origin);
	ViewArr(base, n);
	QuickSort(base, right); // �ǹ����� ���� ������ �ִ� ������ ��� ȣ��� ����
	QuickSort(base + left, n - left); // �ǹ����� ū ������ �ִ� ������ ��� ȣ��� ���� 
}
void ViewArr(int* arr, int n) {
	int i = 0;
	for (i = 0; i < n; i++) {
		printf("%3d", arr[i]);
	}
	printf("\n");
}
void main(void) {
	int arr[10] = { 9,4,3,10,5,8,7,6,2,1 };
	origin = arr;
	on = 10;
	ViewArr(arr, 10);
	QuickSort(arr, 10);
	ViewArr(arr, 10);
	return 0;
}