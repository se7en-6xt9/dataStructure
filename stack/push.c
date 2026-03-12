#include<stdio.h>
int stack_arr[5];
int size=5;
int top=-1;
int count=0;
void push(){
int item;
printf("Enter value to be Pushed [%d] : ",top+1);
scanf("%d",&item);
if(top>=size-1){
  printf("Stack OverFlow \nValue not pushed...\n");
  count++;
} else{
top++;
stack_arr[top]=item;
printf("value pushed : %d \n",item);
}
}
void pop(){
  if(top==-1) {
    printf("\n stackUnder flow \n Stack is empyt \n");
    return;
  }
top--;
return;
}
void display(){
  printf("\n");
  if(top==-1) {
  printf("\n stack underflow \nStack is empty\n");
  return;
  }
  for(int i=0; i<=top; i++){
    printf(" %d ",stack_arr[i]);
  }
  printf("\n");
}
int main(){
  int opt=0;
  //printf("----  Enter option  ----\n");
  //printf("[1] push single value \n[2] push all value \n[3] pop \n[4] display \n[5]exit\n");
  while(opt!=5){
  printf("----  Enter option  ----\n");
  printf("[1] push single value \n[2] push all value \n[3] pop \n[4] display \n[5]exit\n");

    printf("\n\nEnter option : ");
    scanf("%d",&opt);
  switch (opt) {
    case 2:
    while(count<1){
      push();
    }
    break;
    case 1:
    push();
    break;
    case 3:
    pop(); //No break use,So directly call display 
    case 4: 
    display();
    break;
    case 5:
    printf("Out of Code \nBYE...\n");
    return 0;
    default:
    printf("wrong option \n");
    break;
  }
  }
  return 0;
}


