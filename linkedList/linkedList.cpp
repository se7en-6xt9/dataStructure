#include<stdio.h>
#include<stdlib.h>
//using namespace std;
struct node {
  int value;
  struct node *link;
}*head = NULL,*clown,*printer; 
  void addBegan(){
    struct node *began = (struct node *)(malloc(sizeof(struct node)));
    printf("Enter begun value : ");
    scanf("%d",&began->value);
    began->link=head;
    head=began;
  }
  void desiredLoc(){
    int n;
    printf("Enter the location : ");
    scanf("%d",&n);
    if(n<=1){
      addBegan();
      return;
    }
    struct node *desLoc = (struct node *)(malloc(sizeof(struct node)));
    printf("Enter value : ");
    scanf("%d",&desLoc->value);
    clown = head;
    for(int i=2; i<n; i++){
      clown=clown->link;
    }
    desLoc->link=clown->link;
    clown->link=desLoc;
  }
  void addEnd(){
    struct node *end=(struct node *)(malloc(sizeof(struct node)));
    printf("Enter end value : ");
    scanf("%d",&end->value);
    printer = head;
    while(printer->link!=NULL){
      printer=printer->link;
    }
    end->link=NULL;
    printer->link=end;
  }
void print(){
  int i=1;
    printf("Printing after operating node ..\n");
    printer = head;
    printf("Printing Values ...\n");
    do{
      printf("[%d] %d\n",i++,printer->value);
      printer=printer->link;
    } while((printer->link)!=NULL);
    printf("[%d] %d",i,printer->value);
  }
  int main(){
    int n;
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
    printf(" %d\n",printer->value);
    //addBegan();
    //addEnd();
    desiredLoc();
    print();
    return 0;
  }

