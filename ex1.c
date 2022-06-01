#include <stdio.h>
#include <assert.h>



int mmc(int num1, int num2) {

    int mmc, aux, i;

    for (i = 2; i <= num2; i++) {
        aux = num1 * i;
        if ((aux % num2) == 0) {
            mmc = aux;
            i = num2 + 1;
        }
    }
  printf("O MMC é: %d" ,mmc);  
  return mmc;
}

int main() {
    mmc(10, 20);
    return 0;
