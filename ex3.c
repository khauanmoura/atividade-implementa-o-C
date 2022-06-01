 #include <stdio.h>
  #include <assert.h>

int main()
{
  int a,b,c;
  printf("digite o primeiro lado do triangulo \n");
  scanf("%d",&a);
  printf("digite o segundo lado do triangulo \n");
  scanf("%d",&b);
  printf("digite o terceiro lado do triangulo \n");
  scanf("%d",&c);

  if(a == b && a==c && b ==c){
    printf("seu triangulo é equilátero \n");
  }else if(a==b && b !=c || a==c && c != b || c==b && c!=a){
    printf("seu triangulo é Isóceles \n");
  }else if(a !=b && b!=c && a!=c) {
    printf("seu triangulo é Escaleno \n");
  }

    return 0;
}