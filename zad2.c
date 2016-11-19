#include <stdio.h>

int even(int k) {
  return k % 2 == 0;

}


void print_line(int p, int len){

  const char *pattern = even(p) ? "* " : " *";
  for (int y = 0; y < len; y++)

  printf("%s" , pattern);
    printf("|\n");
  }



int main() {

  for (int x = 0; x < 8; x++)
    print_line(x, 16);
}
