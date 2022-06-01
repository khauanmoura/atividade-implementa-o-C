#include <stdio.h>
#include <assert.h>

int mdc(int num1, int num2) {

    int sobra;

    do {sobra = num1 % num2;

        num1 = num2;
        num2 = sobra;

    } while (sobra != 0);

    return num1;
}

int main(){
  int x, y;
  printf("insira o número: \n");
  scanf("%d", &x);
  printf("insira o número: \n");
  scanf("%d", &y);

printf (" \n\n");
printf ("MDC = %d\n", mdc(x,y));
  
 
}