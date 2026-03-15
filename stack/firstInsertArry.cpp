#include<stdio.h>
#include<stdlib.h>
#define Max 5
int stack_arr[Max];
int first=-1;
int check=0;
void push(){ //This to push item in stack of array
  if(first>=Max-1) {
    printf("Over flow\n");
    check=1;
    return;
  }
  int data;
  printf("Enter value : ");
  scanf("%d",&data);
  first++;
  for(int i=first; i>0; i--) stack_arr[i]=stack_arr[i-1];
  stack_arr[0]=data;
  printf("\n");
  return;
}
void del(){
  if(first<0) {
    printf("stack underflow...\n");
    return;
  }
  for(int i=0; i<first; i++){
   stack_arr[i]=stack_arr[i+1]; 
  }
  first--;
  printf("\n");
  return;
}
void display(){
  if(first<0){
    printf("Stack underflow...\n");
    return;
  }
  for(int i=0; i<=first; i++){
    printf(" [%d] ",stack_arr[i]);
  }
  printf("\n");
  return;
}
int isEmpty(){
  if(first<0) return 1;
  else return 0;
}
int peak(){
  if(isEmpty) return 0;
  else return stack_arr[0];
}

int main(){
  while(check==0){
  push();
  }
  //display();
  //del();
  //display();
  return 0;
}

