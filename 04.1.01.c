/*4.1 Арифметика в Си


Гилл Байтс на одном из уроков математики узнал, что если знать диаметр окружности и её длину, то можно вычислить приблизительное значение числа π. Найдя дома небольшую тарелку, Гилл аккуратно измерил диаметр и длину окружности в её верхней части в миллиметрах. После чего он составил программу на языке Си, которая должна была вычислить приблизительное значение числа π

. 

Но, видимо, в программу закралась ошибка, потому что она утверждала, что число π=3

. 

Помогите Гиллу исправить его программу.

#include <stdio.h>
int main(void){
  int diametr=113, dlina=355;
  float pi=0;
  pi = dlina/diametr;
  printf("pi = %.5f\n",pi);

  return 0;
}


Sample Input:


Sample Output:

pi = 3.14159

*/

#include <stdio.h>
int main(void){
  int diametr=113, dlina=355;
  float pi=0;
  pi = (float)dlina/diametr;
  printf("pi = %.5f\n",pi);

  return 0;
}

/*better code

#include <stdio.h>
int main(void){
  int diametr=113, dlina=355;
  float pi=0;
  pi = (float)dlina/diametr;
  printf("pi = %.5f\n",pi);

  return 0;
}


*/

