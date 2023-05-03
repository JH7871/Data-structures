#include <stdio.h>
#include <stdlib.h>
struct node
 {
    int data;
    struct node *next;
};
struct node *head = NULL;
void insertAtBeginning(int value) {
    struct node *newNode = (struct node*) malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}
void insertAtEnd(int value) {
    struct node *newNode = (struct node*) malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = NULL;
    if (head == NULL) {
        head = newNode;
        return;
    }
    struct node *currentNode = head;
    while (currentNode->next != NULL) {
        currentNode = currentNode->next;
    }
    currentNode->next = newNode;
}
void deleteFromBeginning()
 {
    if (head == NULL)
	 {
        printf("List is empty.\n");
        return;
    }5
    struct node *temp = head;
    head = head->next;
    free(temp);
}
void deleteFromEnd()
 {
    if (head == NULL)
	 {
        printf("List is empty.\n");
        return;
    }
    if (head->next == NULL) 
	{
        free(head);
        head = NULL;
        return;
    }
    struct node *currentNode = head;
    while (currentNode->next->next != NULL)
	 {
        currentNode = currentNode->next;
    }
    free(currentNode->next);
    currentNode->next = NULL;
}
void printList() 
{
    if (head == NULL)
	 {
        printf("List is empty.\n");
        return;
    }
    struct node *currentNode = head;
    while (currentNode != NULL) 
	{
        printf("%d ", currentNode->data);
        currentNode = currentNode->next;
    }
    printf("\n");
}
int main()
 {
    insertAtBeginning(25);
    insertAtBeginning(10);
    insertAtEnd(5);
    insertAtEnd(20);
    printList();
    deleteFromBeginning();
    deleteFromEnd();
    printList();
    return 0;
}
