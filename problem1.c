#include <stdio.h>
  int p1(){
    int i;
  int sum = 0;
  for(i=0;i < 1000; i++){
    if(i%3 == 0 || i%5 == 0){
      sum += i;
    }
  }
  return sum;
  }

int p4(){
  int i = 1000;
  int j = 1000;
  int max = 0;
  while(i < 10000){
    while(j < 10000){
      if(i * j > max){
	max = i * j;
      }
      j++;
    }
    j = 1000;
    i++;
  }
  return max;
}
    



int main(){
  printf("Problem 1 %d \n", p1());
printf("Problem 2 %d \n", p2());
}
