#include <stdio.h>

void main() {
  
  for (int count = 0; count <= 100; count++) {
      if (count % 2 == 0) continue;
      printf(" %d ", count); 
  }	  
  printf("\n\n");
}
