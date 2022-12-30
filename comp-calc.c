#include <stdio.h>

int main(void) {
  int n, i, op;
  float x, y, s;

  printf("1 - (Item A) Mostrar resultado do calculo para n = 100000 e x = 0.1\n");
  printf("2 - (Item B) Mostrar resultado do calculo para n = 80000 e x = 0.125\n");
  scanf("%d", &op);

  switch(op) {
    case 1 :
            n = 100000;
            x = 0.1;
            y = 0;

            for(i=0;i<n;i++){
              y = y + x;
            }

            s = 10000 - y;

            printf("Resultado Item A = %f\n", s);
            break;

    case 2 :
            n = 80000;
            x = 0.125;
            y = 0;

            for(i=0;i<n;i++){
              y = y + x;
            }

            s = 10000 - y;

            printf("Resultado Item B = %f\n", s);
            break;

    default :
            printf("Entrada invalida.\n");
            break;
  }



  return 0;
}
