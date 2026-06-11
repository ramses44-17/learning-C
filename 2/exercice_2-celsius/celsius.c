#include <stdio.h>
#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void){
  float fahreineit, celcius;

  printf("Entrez la temperature enn fahreineit: ");
  scanf("%f",fahreineit);

  celcius = (fahreineit - FREEZING_PT)*SCALE_FACTOR;

  printf("Temperature en celcius: %.1f\n",celcius);
  return 0;
}