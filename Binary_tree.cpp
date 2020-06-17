#include <stdio.h>
#include <stdlib.h>


struct binarytree{
	int data;
	struct binarytree *left;
	struct binarytree *right;	
};

int searchtree(binarytree* root, int key){
	int n=0;
	if(root == NULL) return -1;
	binarytree *temp = root;
	while(temp != NULL){
		n++;
		if(temp->data >key){
			temp = temp->left;
		} 
		else if (temp->data == key) return n;
		else temp = temp->right;
	}
	return -1;
}

void addNode(binarytree *root, int value){
	if(root == NULL){
		root = (binarytree *)malloc(sizeof(binarytree));
		root->data = value;
		root->left = NULL;
		root ->right = NULL;
	}
	else {
		binarytree *newtree = (binarytree *)malloc(sizeof(binarytree));
		newtree->data = value;
		newtree->left = NULL;
		newtree ->right = NULL;
		
		binarytree *temp = root;
		while(temp != NULL){
			if(temp->data > value){
				if(temp->left != NULL){
					temp = temp->left;
				} else {
					temp->left = newtree;
					break;
				}				
			}else{
				if(temp->right != NULL){
					temp = temp->right;
				} else {
					temp->right = newtree;
					break;
				}
			}			
		}				
	}
}

int main(){
	binarytree *root = NULL;
	int value = 0;
	while(value >= 0){
		printf("Please give val (-1 to leave): ");  
        scanf("%d", &value);  
        if(value>=0)  
            addNode(root, value);
	}
	printf("Please give search key: ");  
    scanf("%d", &value);  
    int n = searchtree(root, value);  
    if(n>0) {  
        printf("Found in %d times!\n", n);  
    } else {  
        printf("Not found!");  
    }  
    free(root);  
}  
	
	
	
	

