#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *llink;
	struct node *rlink;

};

typedef struct node* NODE;
NODE ins(NODE,int);
void preorder(NODE);
void postorder(NODE);
NODE search(NODE,int);
void inorder(NODE);
int min(NODE);
int max(NODE);
int height(NODE);
NODE delete(NODE,int);


int main() {

	NODE root=NULL,tmp;
	int choice,key;
	while(1) {
		printf("Enter the choice: 1: Ins 2: Preorder 3: Postorder 4:Search 5: Inorder 6: Min 7: Max 8: Height 9: Delete 10: Exit\n");
		scanf("%d",&choice);
		switch(choice) {
			case 1: printf("Entet the key\n");
				scanf("%d",&key);
				root=ins(root,key);
				break;
			case 2: preorder(root);
				break;
			case 3: postorder(root);
				break;
			case 4: printf("Enter the search key\n");
				scanf("%d",&key);
				tmp = search(root,key);
				if(tmp!=NULL)
					printf("Successful %d\n",tmp->data);
				break;
			case 5: inorder(root);
				break;
			case 6: key = min(root);
				if(key!=0) {
					printf("Min = %d\n",key);
				}
				break;
			case 7:key = max(root);
			       if(key!=0) {
					printf("Max = %d\n",key);
			       }
			       break;
			case 8:key = height(root);
			       printf("Height = %d\n",key);
			       break;
			case 9:printf("Enter the key to be deleted\n");
			       scanf("%d",&key);
			       root = delete(root,key);
			       break;

			case 10: exit(0);
			default: printf("enter the valid option\n");
				 break;

		
		}
		
		
	
	
	
	
	}
	


}

NODE ins(NODE root,int key) {


	if(root==NULL) {
		root = (NODE) malloc(sizeof(struct node));
		root->data = key;
		root->llink=NULL;
		root->rlink=NULL;
	
	
	}

	else if(key<root->data)
		root->llink=ins(root->llink,key);
	else if(key>root->data)
		root->rlink=ins(root->rlink,key);
	else
		printf("duplicate key\n");
	return root;
}



void preorder(NODE root) {
	if(root==NULL)
		return;
	printf("%d\n",root->data);
	preorder(root->llink);
	preorder(root->rlink);
	

}
void postorder(NODE root) {
	if(root==NULL)
		return;
	postorder(root->llink);
	postorder(root->rlink);
	printf("%d\n",root->data);

}
void inorder(NODE root) {
	if(root==NULL)
		return;
	inorder(root->llink);
	printf("%d\n",root->data);
	inorder(root->rlink);

}
NODE search(NODE root,int key) {
	if(root==NULL) {
		printf("Not found\n");
		return NULL;
	
	}
	if(key<root->data)
		return search(root->llink,key);
	else if(key>root->data)
		return search(root->rlink,key);
	else 
		return root;

}	

int min(NODE root) {
	if(root== NULL) {
		printf("Tree is empty\n");
		return 0;
	}
	if(root->llink==NULL)
		return root->data;
	return min(root->llink);


}
int max(NODE root) {
	       
       	if(root== NULL) {
		printf("Tree is empty\n");
 		return 0;
	}		     
	if(root->rlink==NULL)
		return root->data;
	return max(root->rlink);


}
int height(NODE root) {

	static int hl=0,hr=0;
	if(root==NULL)
		return 0;

	hl = height(root->rlink);
	hr =  height(root->llink);
	if(hr>hl)
		return hr+1;
	else 
		return hl+1;

}
NODE delete(NODE root,int key) {
	NODE tmp,tmp1;
	if(root==NULL) {
		printf("No elements to delete\n");
		return NULL;
	}
	if(key<root->data)
		root->llink=delete(root->llink,key);
	else if(key>root->data)
		root->rlink = delete(root->rlink,key);
	else {
		if(root->llink != NULL && root->rlink != NULL) {
			tmp = root->rlink;
			while(tmp->llink!=NULL) {
				tmp=tmp->llink;
			}
			root->data=tmp->data;
			root->rlink = delete(root->rlink,tmp->data);
		}
		else {
			tmp1 = root;
			if(root->llink!=NULL)
				root=root->llink;
			else if(root->rlink !=NULL)
				root=root->rlink;
			else 
				free(tmp1);
		}
	}
	return root;
}



