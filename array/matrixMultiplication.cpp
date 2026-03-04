#include<iostream>
using namespace std;
int main(){
  int arr1[3][3]={
    {1,2,3},
    {4,5,6},
    {7,8,9}
  };
int arr2[3][3]={
  {11,12,13},
  {14,15,16},
  {17,18,19}
};
int result[3][3]={0};
for(int i=0; i<3; i++){
  for(int j=0; j<3; j++){
    for(int k=0; k<3; k++){
      result[i][j]=result[i][j]+arr1[i][k]+arr2[j][k];
    }
  }
}
for(int i=0; i<3; i++){
  for(int k=0; k<3; k++){
    printf("%d ",result[i][k]);
  }
  printf("\n");
}
  return 0;
}
