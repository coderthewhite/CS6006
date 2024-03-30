#include <stdio.h>
#include <stdlib.h>

struct Node {
//user-defined data type
   int data;
   struct Node *next;
};

void push_back(struct Node* ptr, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    
    while (ptr->next != NULL) {
            ptr = ptr->next;
    }

    ptr->next = newNode;
}

void traverse(struct Node* ptr) {

    while (ptr != NULL) {
        printf("%d -->", ptr->data);
            ptr = ptr->next;
    }
    printf("NULL\n");
}
int main(void) {
  struct Node* ptr = (struct Node* )malloc(1 * sizeof(struct Node));
  ptr->data = 20;

  push_back(ptr, 200);
  traverse(ptr);
  return 0;
}