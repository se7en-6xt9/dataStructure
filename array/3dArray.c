#include<stdio.h>
int main(){
  int arr[2][3][3] ={
    {
      {10,11,12},
      {13,14,15},
      {16,17,18},
    },{
      {22,23,24},
      {24,25,26},
      {27,28,30},
    }
  };
  for(int i=0; i<2; i++){
    for(int j=0; j<3; j++){
      for(int k=0; k<3; k++){
        printf("%d ",arr[i][j][k]);
      }
      printf("\n");
    }
    printf("\n");
  }
  return 0;
}
