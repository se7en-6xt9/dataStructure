#include<stdlib.h>
#include<stdio.h>
struct node{
struct node *link;
int data;
};
  int main(){
    struct node *head = (struct node*)malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;
    struct node *current = (struct node*)malloc(sizeof(struct node));
    current->data = 98;
    current->link = NULL;
    head->link = current;
    printf("head->data : %d\n",head->data);  //45   
    printf("head->link->data : %d\n",head->link->data);  //98
    printf("head : %p\n",head);
    printf("head->link : %p\n",head->link);
    printf("head->link->link : %p\n",head->link->link);
    return 0;
  }
