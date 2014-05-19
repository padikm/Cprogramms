#include<stdio.h>
#include<malloc.h>
#include<string.h>
#include<stdlib.h>
struct node {
	char *data;
	int contact;
	struct node *llink;
	struct node *rlink;
};

typedef struct node * NODE;
NODE Insert_contact(NODE ,char *, int);
NODE Delete_contact(NODE ,char *);
void Display_contact(NODE);


void mytolower(char *c) {
        while(*c) {
                if(*c>='A' && *c<='Z')
                        *c = *c + 'a'-'A';
                c++;
        }
}


int main() {

	NODE head=NULL;	
	char ch[10];
	int contact_number,choice;
	while(1) {
		printf("Enter the Choices 1 to Insert Contact 2 to Delete the contact 3 to Display 4: Exit\n");
		scanf("%d",&choice);
		switch(choice) {
			case 1:
				printf("Enter the Name to be inserted\n");
				scanf("%s",ch);	
				printf("Enter the Contact Number\n");
				scanf("%d",&contact_number);
				head = Insert_contact(head,ch,contact_number);
				break;
			case 2:
				printf("Enter the name of conatct to be deleted\n");
				scanf("%s",ch);
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
	
	NODE tmp=head,node,prev,cur;
	//int i,j;
	mytolower(c);
	node = (NODE)malloc(sizeof(struct node));
	node->data = (char *)malloc(sizeof(20));
	strcpy(node->data,c);
	node->contact = contact_num;
	node->llink = NULL;
	node->rlink = NULL;

	if(head==NULL)
		return node;
	if(strcmp(node->data,tmp->data)<0)
	{
		node->rlink=tmp;
		tmp->llink=node;
		node->llink= NULL;
		return node;
	
	}
	if(tmp->llink == NULL && tmp->rlink == NULL && strcmp(node->data,tmp->data)>0)
	{
	
		tmp->rlink = node;
		tmp->llink = NULL;
		node->llink = tmp;
		return head;

	
	
	}

	cur=tmp;
	while(tmp!=NULL)
	{
		prev = cur;
		cur = tmp;
		if(strcmp(node->data,tmp->data)<0)
		{
		
			break;
		}
		
		tmp = tmp->rlink;
			
	}
	if(tmp!=NULL)
	{
        	node->rlink = prev->rlink;
		node->llink = prev;
		prev->rlink = node;
		cur->llink = node;
	}
	else 
	{
		cur->rlink = node;
		node->llink = cur;
	
	}
	
	return head;

}


NODE Delete_contact(NODE head ,char *c)
{
	NODE tmp=head,swap;
//	int flag = 0;
	if(!strcmp(tmp->data,c) && tmp->llink == NULL && tmp->rlink == NULL)
	{
		free(head);
		return NULL;
	
	
	}
	//cur=tmp;
	while(tmp!=NULL)
	{
		if(!strcmp(tmp->data,c))
		{	
			break;	
		
		}
		tmp = tmp->rlink;
	
	
	
	}

	if(tmp==NULL) 
	{
	
		puts("Element not found");
		return head;
	
	}
	else if(tmp->rlink==NULL)
	{
		tmp->llink->rlink=NULL;
		free(tmp);
		return head;
	
	
	}
	else if(tmp->llink == NULL)
	{
		swap = tmp;
		tmp = tmp->rlink;
		tmp->llink = NULL;
		free(swap);
		return tmp;
	
	}
	else 
	{
		swap = tmp->llink;
		swap->rlink = tmp->rlink;
		tmp->rlink->llink = swap;
		free(tmp);
		return head;

	
	}

/*	if(flag)
	{
	return head;
	}
	else
	{ 
		puts("Element not found");
		return head;
	}*/

}

void Display_contact(NODE head)
{
	NODE tmp=head;

	while(tmp!=NULL)
	{
		printf("Contact %s\t",tmp->data);
		printf("Phone number %d\n",tmp->contact);
		tmp = tmp->rlink;
	
	
	}



}

