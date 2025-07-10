#include <stdio.h>
//pitfall, piège, lorsque j'ai mit simplement 4/3 le resultat n'etait pas correcte
#define FRACTION (4.0f)/(3.0f)
#define PI 3.14159

int main(void){
 int radius;
 float volume;
 printf("ce program calcul le rayon d'une sphere\n");
 printf("Entrez la valeur du rayon: ");
 
 // le symbole & est utile car sans ça lors de l'entrée utilisateur le programme cesse de fonctionner d'une maniere innatendu.

 scanf("%i",&radius);
 volume = FRACTION * PI * radius * radius * radius;
  printf("le volume de la sphere de %d m de rayon est: %.2f",radius,volume);
  return 0;
}