/*
6.1 Оператор switch
12 из 12 шагов пройдено
11 из 11 баллов  получено

Гилл Байт с прошлого раза чуть-чуть поднаторел в программировании. Поверив в себя, он решил написать эмулятор сказки о богатыре. Но, конечно, он был слишком самонадеян, плохо изучил теоретические основы урока, а потому всё напутал. Помогите ему исправить код, который он написал.

Входные данные:
Либо один из трёх символов f, l, r, либо любой другой символ

Выходные данные:
Одна из строк в зависимости от входных данных:

l -- коня потеряешь, себя спасёшь!
f -- и себя и коня потеряешь!
r -- себя потеряешь, коня спасёшь!

Если поступает любой другой символ, то ничего выводить не требуется.

Sample Input:

l

Sample Output:

коня потеряешь, себя спасёшь!

*/

#include <stdio.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "");
  char s;
  scanf("%c",&s);

  switch (s) {

    case 'l' : printf("коня потеряешь, себя спасёшь!\n"); break;
    case 'f' : printf("и себя и коня потеряешь!\n"); break;
    case 'r' : printf("себя потеряешь, коня спасёшь!\n"); break;
  }

  return 0;
}

/*better code

#include <stdio.h>
#include <locale.h>
int main(void) {
  setlocale(LC_ALL, "");
  char s;
  scanf("%s",&s);
  switch (s) {
    case 'l' : printf("коня потеряешь, себя спасёшь!\n"); break;
    case 'f' : printf("и себя и коня потеряешь!\n"); break;
    case 'r' : printf("себя потеряешь, коня спасёшь!\n"); break;
  }

  return 0;
}

*/
