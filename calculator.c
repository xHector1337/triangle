#include <stdio.h>

int h = 10;
int b = 8;
float area;

int main(){
  area = (float) (h*b)/2;
  printf("Area of the triangle is: %.2f",area);
  return 0;
}
