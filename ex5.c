#include <stdio.h>

int main(void) {
  int array[10],i;
  int maximo = array[0];
  printf("insira os elementos : \n");
  for(i=0;i<10;i++){
    scanf("%d",&array[i]);  
    if(i<9){
      printf("proximo: \n");
    }
  } 
  for(i=0;i<10;i++){
    if(maximo <= array[i]){
      maximo = array[i]; 
    }    
  }
  printf("maximo : %d",maximo);
  return 0;
}