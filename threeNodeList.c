#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *link;
};
int main(){
 struct node *head = (struct node *)malloc(sizeof(struct node));
 head->data = 45;
 head->link = NULL;
 struct node *current = (struct node *)malloc(sizeof(struct node));
 current->data = 46;
 head->link = current;
 struct node *current2 =(struct node *)malloc(sizeof(struct node));
 current2->data = 47;
 current->link = current2;
 current2->link = NULL;
 printf("%d\n",head->data);
 printf("%d\n",head->link->data);
 printf("%d\n",head->link->link->data);
 printf("%p\n",head->link);
 printf("%p\n",head);
 return 0;
}
