#include <stdio.h>
#define NAJWIEKSZA(x,y,z) \
((x>=y)&&(x>=z))?(printf("%d",x)):(((y>=z)&&(y>=x))?printf("%d",y):(printf("%d",z))
int main(void){
  NAJWIEKSZA(1,2,3));
  return 0;}
