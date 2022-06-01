#include <stdio.h>
#include <stdlib.h>

int main()
{
   double b, B, h, a;

   printf("Introduza o comprimento da base menor do trapezio: ");
   scanf("%lf", &b);
   while (b<=0)
   {
      printf("O valor que introduziu (%lf) nao e valido!\nIntroduza o valor da base menor novamente: ", b);
      scanf("%lf", b);
   }

   printf("Introduza o comprimento da base maior do trapezio: ");
   scanf("%lf", &B);
   while (B<=0)
   {
          printf("O valor que introduziu (%lf) nao e valido!\nIntroduza o valor da base maior novamente: ", B);
          scanf("%lf", B);

          while (b>B)
          {
                printf("A base menor (%lf) nao pode ser maior que a base maior (%lf)\nIntroduza o valor da base menor novamente: ");
                scanf("%lf", b);
                printf("Introduza o valor da base maior novamente: ");
                scanf("%lf", B);
          }
   }

   printf("Introduza a altura do trapezio: ");
   scanf("%lf", &h);
   while (h<=0)
   {
           printf("O valor que introduziu (%lf) nao e valido!\nIntroduza o valor novamente:", h);
           scanf("&lf", h);
   }

   a = ((b + B) * h) / 2;
               printf("A area do trapezio e: %lf\n", a);             

   system("PAUSE");	
   return 0;
}