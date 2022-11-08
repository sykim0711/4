#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <malloc.h>
typedef struct node {						//이진 탐색 트리의 정의
	int data;
	struct node* leftChild;
	struct node* rightChild;
}NODE;

//이진 탐색 트리의 삽입
NODE* insertNode(NODE* root, int data) {
	if (root == NULL) {
		root = (NODE*)malloc(sizeof(NODE));
		root->leftChild = root->rightChild = NULL;
		root->data = data;
		return root;
	}
	else {
		if (root->data > data) {
			root->leftChild = insertNode(root->leftChild, data);
		}
		else {
			root->rightChild = insertNode(root->rightChild, data);
		}
	}
	return root;
}

//탐색
NODE* searchNode(NODE* root, int data) {
	if (root == NULL) return NULL;
	if (root->data == data) return root;
	else if (root->data > data) return searchNode(root->leftChild, data);
	else return searchNode(root->rightChild, data);
}

//순회
void preorder(NODE* root) {
	if (root == NULL) return;
	printf("%d ", root->data);		//루트 노드 먼저 뽑음 
	preorder(root->leftChild);		//왼쪽
	preorder(root->rightChild);		//오른쪽 // 전위순회
}
//가장 작은 원소 찾기
NODE* findMinNode(NODE* root) {
	NODE* node = root;
	while (node->leftChild != NULL) {
		node = node->leftChild;
	}
	return node;
}

//삭제
NODE* deleteNode(NODE* root, int data) {
	NODE* node = NULL;
	if (root == NULL) return NULL;
	//삭제할 노드 탐색 - 왼쪽(작으면)
	if (root->data > data) root->leftChild = deleteNode(root->leftChild, data);
	// 삭제할 노드 탐색 - 오른쪽(크면)
	else if (root->data < data) root->rightChild == deleteNode(root->rightChild, data);
	else {
		//삭제할 노드 전달
		if (root->leftChild != NULL && root->rightChild != NULL) { //자식이 왼쪽 오른쪽 다있음
			node = findMinNode(root->rightChild);		//오른쪽에서 작은걸 찾음
			root->data = node->data;				//루트에 자식중 제일 작은 값 대입
			root->rightChild = deleteNode(root->rightChild, node->data);		//오른쪽 자식에 자식있으면 삭제하는 루틴
		}
		else {
			node = (root->leftChild != NULL) ? root->leftChild : root->rightChild;
			free(root);
			return node;
		}
	}
	return root;
}


//void main(void) {
//	NODE* root = NULL;
//	root = insertNode(root, 30);
//	root = insertNode(root, 17);
//	root = insertNode(root, 48);
//	root = insertNode(root, 5);
//	root = insertNode(root, 23);
//	root = insertNode(root, 37);
//	root = insertNode(root, 50);
//	//root = insertNode(root, 51);
//
//	preorder(root);
//	NODE* findNode = searchNode(root, 50);
//	printf("\n%d\n", findNode->data);
//	//root = deleteNode(root, 17);
//
//
//}
void main() {
	int step, i;
	for (step = 1; step <= 5; step++) {
		for (i = 1; i <= (5 * 2) - 1; i++) {
			if (i >= (5 - step + 1) && i <= (5 + step - 1)) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
}