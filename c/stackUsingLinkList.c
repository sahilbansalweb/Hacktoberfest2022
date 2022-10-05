#include<stdio.h>
#include<stdlib.h>

void display();
void pop();
void push();

struct stack
{
	int data;
	struct stack *next;
};
struct stack *head = NULL;
int main()
{
	int choice;
	while (1)
	{
		printf("     Menu\n 1. Display\n 2. Pop\n 3. Push\n 4. EXIT\n");
		printf("enter your choice: ");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			display();
			break;

		case 2:
			pop();
			break;

		case 3:
			push();
			break;

		case 4:
			exit(0);

		default:
			printf("wrong choice entered");
		}
	}
}

void display()
{
	struct stack *temp;
	if (head == NULL)
	{
		printf("list is empty!!");

	}
	else
	{
		temp = head;
		while (temp != NULL)
		{
			printf("%d", temp->data);
			temp = temp->next;
		}
	}
}

void pop()
{
	struct stack *temp;
	if (head == NULL)
	{
		printf("the list is empty\n");
	}

	else
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

void push()
{
	struct stack *temp;
	temp = (struct stack *)malloc(sizeof(struct stack));
	if (temp == NULL)
	{
		printf("out of memory");
		return;
	}
	printf("enter the data: ");
	scanf("%d", &temp->data);
	temp->next = NULL;
	if (head == NULL)
	{
		head = temp;
	}
	else
	{
		temp->next = head;
		head = temp;
	}


}