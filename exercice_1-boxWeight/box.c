#include <stdio.h>
//pour l'instant on s'est focalisé sur int et float
//afficher une valeur avec printf
//afficher une variable avec %d pour int, %f pour float ex printf("Volume(pouces cube): %d\n",volume);
//lire l'entrée utilisateur avec scanf et la stocké dans une variable scanf("%i",&heigth); pour la stocké dans une variable heigth de type int par exemple
//définir des constante avec la macro
#define INCHES_PER_POUND 166 //livre par pouces en français

int main(void){
  int width, length, volume, heigth, weigth;

  printf("\nVeuillez entrer la hauteur de la boite(lives): ");
  scanf("%i",&heigth);
  printf("Veuillez entrez la longueur de la boite(livres): ");
  scanf("%i",&length);
  printf("Veuillez entrez la la largeur de la boite(livres): ");
  scanf("%i",&width);
  volume = heigth * width * length;
  weigth = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND;
  printf("Dimensions: %dx%dx%d\n",length,width,heigth);
  printf("Volume(pouces cube): %d\n",volume);
  printf("Poid dimensionnel(livres): %d\n",weigth);
  return 0;
}