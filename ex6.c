 #include <stdio.h>

int main(void) {
  int array[10],i,c,temp;
  printf("Insira os números: \n");
  for(i=0;i<10;i++){
    scanf("%d",&array[i]);
    printf("Insira o próximo número : \n");
  }
  for(i=0;i<10;i++){
    for(c=i +1;c<10;c++){
      if(array[i]> array[c]){
        temp = array[i];
        array[i] = array[c];
        array[c] = temp;
      }
    }
  }
  printf("elementos organizados : ");
  for(i = 0;i<10;i++){
    printf("%d ",array[i]);
  }
  return 0;
}