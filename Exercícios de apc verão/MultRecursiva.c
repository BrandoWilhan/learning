#include <stdio.h>

/* Retorna a multiplicação
 * de a, b vezes. Assume
 * que b > 0. */
int mult(int a, int b) {
  if(b == 0)
    return 0;
  return a + mult(a, b-1);
}

int main() {
  int a = 5, b = 8;

  
    
      printf("mult(%d, %d) = %d\n", a, b, mult(a, b));

  return 0;
}