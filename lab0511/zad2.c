#include <stdio.h>

int main() {
  int tabela[] = {1, 2, 4, 6, 12};

     for (int i = 4; i >= 0; i = i - 1) {
      printf("%u\n", i );
       printf("%d\n", tabela[i] );
     }
     return 0;

}
