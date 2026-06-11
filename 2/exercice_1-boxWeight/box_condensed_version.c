#include <stdio.h>
#define INCHES_PER_POUND 166

//version condensé du programme box.c
//question 3, chapitre 2 du livre c programming a modern approach

int main(void){
  int width = 8, length = 8, volume, heigth = 8;

  printf("\nVeuillez entrer la hauteur de la boite(lives): ");
  scanf("%i",&heigth);
  printf("Veuillez entrez la longueur de la boite(livres): ");
  scanf("%i",&length);
  printf("Veuillez entrez la la largeur de la boite(livres): ");
  scanf("%i",&width);
  volume = heigth * width * length;
  
  printf("Dimensions: %dx%dx%d\n",length,width,heigth);
  printf("Volume(pouces cube): %d\n",volume);
  printf("Poid dimensionnel(livres): %d\n",(volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND);
  return 0;
}