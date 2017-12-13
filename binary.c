#include <stdio.h>
#include <stdlib.h>
struct Tree {
	int val;
	struct Tree *left;
	struct Tree *right;
};
struct Tree* CreateNode(int value) {
	struct Tree* root = (struct Tree*) malloc (sizeof(struct Tree));
	root->val = value;
	root->left = NULL;
	root->right = NULL;
	return root;
}

void BST(struct Tree *root, int value) {
	if(value < root->val)
		BST(root->left, value);
	else if(value > root->val)
		BST(root->right, value);
}
void Inorder(struct Tree *root) {
	if(root != NULL) {
		Inorder(root->left);
		printf("%d==>", root->val);
		Inorder(root->right);
	}
}
int main() {
	int i, n, type, num, value;
	printf("Enter type 1 or 2: Type1 is Binary Tree, Type 2 is Binary Search Tree\n");
	scanf("%d", &type);
	struct Tree *root = NULL;
	struct Tree *temp;
	if(type == 1) {
		/*scanf("%d", &n);
		printf("Enter Elements\n");
		for(i = 0; i < n; i++) {
			scanf("%d", &value);
			//BinaryTree(root, value);
		}*/
		//Inorder(root);
	}	
 	else if(type == 2) {
		//int value[] = (int)malloc(sizeof(int));
		scanf("%d", &n);
		printf("Enter Elements\n");
		//scanf("%d", &value[0]);		
//		int a = value[0];
	//	root = CreateNode(num);
		//temp = root;
		for(i = 0; i < n; i++) {
			scanf("%d", &value);
			//num = value[i];
			root = CreateNode(value);
			BST(root, value);
			
		}
		Inorder(root);
	}	
}

