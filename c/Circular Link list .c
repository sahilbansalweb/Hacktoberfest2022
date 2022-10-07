#include<stdio.h>
#include<stdlib.h>

void create();
void display();
void insert_begin();

void delete_end();

struct node
{
	int data;
	struct node *next;
};

struct node *head = NULL;

int main()
{
	int choice;
	while (1)
	{
		printf("\n       Menu\n 1. Create\n 2. Display\n 3. insert in begin\n 4. insert end\n 5. delete from end\n 6. Exit\n");
		printf("enter your choice: ");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			create();
			break;

		case 2:
			display();
			break;

		case 3:
			insert_begin();
			break;

		case 4:
			create();
			break;

		case 5:
			delete_end();
			break;

		case 6:
			exit(0);

		default:
			printf("wrong choice entered\n");
		}
	}
}

void create()
{
	struct node *temp, *ptr;
	temp = (struct node *)malloc(sizeof(struct node));
	if (temp == NULL)
	{
		printf("out of memory\n");
		return;
	}
	printf("enter the data: ");
	scanf("%d", &temp->data);

	if (head == NULL)
	{
		head = temp;
		temp->next = head;
	}
	else
	{
		ptr = head;
		while (ptr->next != head)
		{
			ptr = ptr->next;
		}
		ptr->next = temp;
		temp->next = head;
	}
}


void display()
{
	struct node *temp;
	if (head == NULL)
	{
		printf("list is empty\n");
	}
	else
	{
		temp = head;
		while (temp->next != head)
		{
			printf("%d--->", temp->data);
			temp = temp->next;
		}
		printf("%d--->%d", temp->data, head->data);
	}
}

void insert_begin()
{
	struct node *temp, *ptr;
	temp = (struct node *)malloc(sizeof(struct node));
	if (temp == NULL)
	{
		printf("out of memory\n");
	}
	printf("enter the data: ");
	scanf("%d", &temp->data);

	if (head == NULL)
	{
		head = temp;
		temp->next = head;
	}
	else
	{

		ptr = head;
		while (ptr->next != head)
		{
			ptr = ptr->next;
		}

		temp->next = head;
		head = temp;
		ptr->next = head;

	}
}

void delete_end()
{
	struct node *temp, *ptr;
	if (head == NULL)
	{
		printf("list is empty(underflow)");
	}
	else
	{
		temp = ptr = head;
		while (ptr->next != head)
		{
			temp = ptr;
			ptr = ptr->next;
		}
		temp->next = head;
		free(ptr);
	}
}



