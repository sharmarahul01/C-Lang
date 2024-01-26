#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
int main(){
  struct node*head = (struct node*)malloc(sizeof(struct node));
  head->data = 10;
  head->next = NULL;
  struct node*tail = (struct node*)malloc(sizeof(struct node));
  tail->data = 20;
  tail->next = NULL;
  head-> next->next = tail;
  printf("Data of linked list: ");
  while(head!= NULL){
    printf("%d", head->data);
    head = head->next;
  }  
    return 0;
}