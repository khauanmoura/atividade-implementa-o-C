#include <stdio.h>

int fatorial(int x) {
    int res = 1; 
    while (x > 1) res *= x--; 
  
    return res;  
}
int main(void) {
    int x; 
    printf("Digite o numero a ser fatorado:\n"); 
  
    scanf("%d", &x);
    printf("%d", fatorial(x));
  }