#include<stdio.h>

int main(){
  int i, base, numero, a, c;
  
  printf("%5s%10s%6s%5s\n", "N", "Bin", "Oct", "Hex");
  
  for  (c = 0; c < 256; c++){
    //intero

    printf("%5d  ", c);
    
    //binari
    
    numero = c;

    base = 128;
 
    for (i = 0; i < 8; i++){
      if(numero - base >= 0){
          numero-=base;
          printf("1");
        }
        else{
          printf("0"); 
        }
        base/=2;
      }

    printf("   ");
  
    //ottale

    numero = c;

    base = 64;

    for (i = 0; i < 3; i++){
      a = numero / base;
      numero %= base;
      printf ("%d", a);
      base /= 8;
    }

    //esadecimale

    numero = c;

    printf("   ");

    base = 16;

    for (i = 0; i < 2; i++){
    a = numero / base;
    numero %= base;
    if (a >= 0 && a <= 9) printf("%d", a);
    switch (a)
      {
      case 10:
        printf("A");
        break;

      case 11:
        printf("B");
        break;

      case 12:
         printf("C");
         break;

      case 13:
         printf("D");
         break;

      case 14:
         printf("E");
         break;

      case 15:
         printf("F");
         break;
    }
    base /= 16;
    }
    printf("\n");
  }

  return 0;
}
