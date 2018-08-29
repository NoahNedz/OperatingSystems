//Author: Noah Niedzwiecki
//ID : 903731609
//Project 1
#include <stdio.h>
#include <math.h>

int main(void){
  double numbers[10] = {10.0, 20.0, 30.0, 40.0, 50.0, 60.0, 70.0,
                        80.0, 90.0, 100.0};
  double average = 0;
  int i = 0;
  int b = 0;


  while ( i < 10 ){
    numbers[i] = sqrt(numbers[i]);
    i++;
  }

  while ( b < 10 ){
    average += (numbers[b]);
    b++;
  }
  printf("%lf \n", average/10);
  return 0;
}
