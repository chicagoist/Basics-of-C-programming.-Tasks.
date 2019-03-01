/*
Измените программу, написанную на прошлом шаге таким образом, чтобы каждое число выводилось столько раз, каково его значение. Например, число 5 должно выводиться 5

раз.

Входные данные:
Два натуральных числа A,B,
таких, что B>A.

Выходные данные:
A
чисел A , A+1 чисел A+1 и т.д. Каждое число занимает поле шириной в 4 символа. 

 Sample Input:

2 5

Sample Output:

2   2   3   3   3   4   4   4   4   5   5   5   5   5

*/


#include <stdio.h>

  int A, B, c = 0; 

int main() {
  
  scanf("%d%d", &A, &B);

  for (int a = A; a <= B; a++){
    for(c=0; c < a; c++){
  
  printf("%4d", a);

  }
  }



  return 0;
}

/*better code

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%4d", i);
        }
    }
}

*/