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

int p6(){

  int squaresums = 0;  int sumsquares = 0;
  int i = 0;
  while(i < 101){
    sumsquares += (i * i);
    squaresums += i; 
   i++;  
  }
  squaresums = squaresums * squaresums;
  return squaresums - sumsquares;

}

int main(){
  printf("Problem 1 %d \n", p1());
  printf("Problem 6 %d \n", p6());
}
