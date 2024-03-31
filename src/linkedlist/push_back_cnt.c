#include <stdio.h>
#include <stdlib.h>

struct Node {
//user-defined data type
   int data;
   struct Node *next;
};

void push_back(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL) {
        //empty linkedlist
        *head = newNode;
        return;
    }
    struct Node* current = *head;
    while (current->next != NULL) {
        current = current->next;
    }

    current->next = newNode;
}

void traverse(struct Node* ptr) {

    while (ptr != NULL) {
        printf("%d -->", ptr->data);
            ptr = ptr->next;
    }
    printf("NULL\n");
}

int main(void) {
  struct Node* head = NULL;
  push_back(&head, 200);
  push_back(&head, 100);
  push_back(&head, 300);
   push_back(&head, 400);
push_back(&head, 500);
  traverse(head);
  return 0;
}