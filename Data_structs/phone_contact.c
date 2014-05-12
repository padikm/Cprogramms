#include<stdio.h>

struct node {
	char *data;
	int contact;
	struct node *llink;
	struct node *rlink;
};

typedef struct node * NODE;
NODE Insert_contact(NODE ,char *, int);
NODE Delete_contact(NODE,int);
void Display_contact(NODE);


int main() {

	NODE head=NULL;	
	char ch[10];
	int contact_number,choice;
	while(1) {
		printf("Enter the Choices 1 to Insert Contact 2 to Delete the contact 3 to Display 4: Exit\n");
		switch(choice) {
			case 1:
				printf("Enter the Name to be inserted\n");
				gets(ch);
				printf("Enter the Contact Number\n");
				scanf("%d",&contact_number);
				head = Insert_contact(head,ch,key);
				break;
			case 2:
				printf("Enter the name of conatct to be deleted\n");
				gets(ch);
				head = Delete_contact(head,ch);
				break;
			case 3:
				Display_contact(head);
				break;
			case 4:
				exit(0);
			default:
				puts("Enter the valid choice\n");
		}
	}
}

NODE Insert_contact(NODE head,char *c,int contact_num) {
	
	NODE temp=head,new,prev,cur;
	int i,j,pos;
	new = (NODE)malloc(sizeof(struct node));
	node->data = (char *)malloc(sizeof(20));
	node->data = c;
	node->contact = contact_num;
	node->llink = NULL;
	node->rlink = NULL;

	if(head==NULL)
		return new;

	cur=tmp;
	while(tmp!=NULL) {
			
		pos = 0;
		if(tmp->llink!=NULL && tmp->rlink !=NULL) {


			prev=cur;
			cur=tmp;
			pos++
		for(i=0;c[i] && c[i];i++) {
			
			//prev=cur;
			//cur=tmp;
			
			if(tmp->data[i]>c[i])
				flag=1
			else {
				flag = 0;
				break;
			}
			if(flag==0)

		
		
		}
			if(flag) {

				new->llink=
		}
		
		
		}


		
			
	
	}

}	
