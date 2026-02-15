#include<stdio.h>
#include<stdlib.h>
//using namespace std;
struct node {
  int value;
  struct node *link;
}*head = NULL;
  int main(){
    int n;
    struct node *clown;
    struct node *printer;
    printf("Enter the number of nodes : ");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
      struct node *temp= (struct node *)malloc(sizeof(struct node));
      if(temp==0) {
        printf("No, memory allocated exiting...");
        exit(0);
      }
      printf("Enter value of node %d : ",i+1);
      scanf("%d",&temp->value);
      if(head==NULL) {
        head=temp;
        clown = temp;
        temp->link=NULL;
      } else {
        clown->link=temp;
        temp->link=NULL;
        clown=temp;
      }
    }
    printer = head;
    printf("Printing Values ...\n");
    do{
      printf(" %d\n",printer->value);
      printer=printer->link;
    } while((printer->link)!=NULL);
    printf(" %d",printer->value);
    return 0;
  }
