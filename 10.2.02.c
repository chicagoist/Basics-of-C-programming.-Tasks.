/*
10.2 Указатели
 


В программе имеется символьная переменные ch и inp. Объявите  указатель с именем p_ch, который ссылается на переменную ch, и присвойте ей значение переменной inp.

P.S. Полный исходный код задачи доступен на форуме для решивших задачу.

Sample Input:

a

Sample Output:

a

*/

// выше объявлены символьные переменные ch и inp
// создайте указатель p_ch, ссылающийся на переменную ch

// используя операцию разыменования указателя p_ch, присвойте переменнй ch значение переменной inp
char * p_ch = &ch;
*p_ch = inp;

/*
 * better code
 *
char *p_ch = &ch;
*p_ch = inp;

*/
