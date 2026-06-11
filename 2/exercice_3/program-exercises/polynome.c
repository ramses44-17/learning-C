#include <stdio.h>

int main(void){
  printf("ce programme affiche la valeur numérique du polynome 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 pour n'importe quelle valeur entiere de x\n");
  int x, numericValue;
  printf("Entrez la valeur de x: ");
  scanf("%i",&x);
  numericValue = 3*x*x*x*x*x + 2*x*x*x*x - 5*x*x*x - x*x + 7*x - 6;
  printf("La valeur numéric de ce polynome pour x=%d vaut %d",x,numericValue);
  return 0;
}