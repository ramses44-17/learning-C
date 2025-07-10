#include <stdio.h>
#define TAXE_PERCENT (5.0f)/100

int main(void){
  printf("ce program affiche votre montant apres ajout de la  taxe.\n");
  float amount, amountAfterTaxe;
  printf("Entrez votre montant(en $): ");
  scanf("%f",&amount);
  amountAfterTaxe = TAXE_PERCENT * amount + amount;
  printf("voici votre montant apres ajout de la taxe: $%.2f",amountAfterTaxe);
  return 0;
}