//question 4 du chapitre 2
#include <stdio.h>

int main(void){
 int a,b,c;
 float x,y,z,p;

 printf("a: %d\n b: %d\n c: %d\n",a,b,c);
 printf("x: %f\n y: %f\n z: %f\n p: %f\n",x,y,z,p);
  return 0;
}

//aucun pattern entre le nombre affiché dans ce programme
//à chaque execution, les nombre renvoyé sont un petit peu aléatoire.
//les chances qu'une variable aie la meme valeur entre deux éxecution sont néanmoins presente, sourtout si la variable affiche zero dès la premiere éxecution, le chance pour qu'elle affiche zero lors de la seconde éxecution sont grande.