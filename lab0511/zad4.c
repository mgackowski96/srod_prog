
#include <stdio.h>

int silnia(int k) {
 int s = 1;
 for (int n = 1; n <= k; n++) {

   s = s * n;
 }

  return s;
}



int main() {

  printf("silnia(4) = %d\n", silnia(4));
  printf("silnia(0) = %d\n", silnia(0));
  printf("silnia(1) = %d\n", silnia(1));
  printf("silnia(-4) = %d\n", silnia(-4));



}
