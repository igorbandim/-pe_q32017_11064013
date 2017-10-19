#include <stdio.h>

void mover(char orig, char dest);
void hanoi(int n, char orig, char meio, char dest);

int main() {
  int n;
  scanf("%d", &n);
  hanoi(n, 'A', 'B', 'C');
  printf("\n");
}
void mover(char orig, char dest) {
  printf("%c-%c, ", orig, dest);
}
void hanoi(int n, char orig, char meio, char dest) {
  if(n>0) {
    hanoi(n-1, orig, dest, meio);
    mover(orig, dest);
    hanoi(n-1, meio, orig, dest);
  }
}