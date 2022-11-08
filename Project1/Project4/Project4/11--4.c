#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <malloc.h>
typedef struct node {						//���� Ž�� Ʈ���� ����
	int data;
	struct node* leftChild;
	struct node* rightChild;
}NODE;

//���� Ž�� Ʈ���� ����
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

//Ž��
NODE* searchNode(NODE* root, int data) {
	if (root == NULL) return NULL;
	if (root->data == data) return root;
	else if (root->data > data) return searchNode(root->leftChild, data);
	else return searchNode(root->rightChild, data);
}

//��ȸ
void preorder(NODE* root) {
	if (root == NULL) return;
	printf("%d ", root->data);		//��Ʈ ��� ���� ���� 
	preorder(root->leftChild);		//����
	preorder(root->rightChild);		//������ // ������ȸ
}
//���� ���� ���� ã��
NODE* findMinNode(NODE* root) {
	NODE* node = root;
	while (node->leftChild != NULL) {
		node = node->leftChild;
	}
	return node;
}

//����
NODE* deleteNode(NODE* root, int data) {
	NODE* node = NULL;
	if (root == NULL) return NULL;
	//������ ��� Ž�� - ����(������)
	if (root->data > data) root->leftChild = deleteNode(root->leftChild, data);
	// ������ ��� Ž�� - ������(ũ��)
	else if (root->data < data) root->rightChild == deleteNode(root->rightChild, data);
	else {
		//������ ��� ����
		if (root->leftChild != NULL && root->rightChild != NULL) { //�ڽ��� ���� ������ ������
			node = findMinNode(root->rightChild);		//�����ʿ��� ������ ã��
			root->data = node->data;				//��Ʈ�� �ڽ��� ���� ���� �� ����
			root->rightChild = deleteNode(root->rightChild, node->data);		//������ �ڽĿ� �ڽ������� �����ϴ� ��ƾ
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