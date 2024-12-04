/*
#include <stdio.h>

main()
{

	int a = 55;
	int* ptr1;
	ptr1 = &a;

	printf("%d\n", *ptr1); //само значение переменной a
	printf("%d\n", ptr1); // адрес переменной а
}
*/
#include <stdio.h>
#include <locale.h>


int main() {
    setlocale(LC_ALL, "RUS");

    int* pi;      
    char* pc;     
    double* pd;   

    // Выводим размеры указателей
    printf("Объем памяти, выделяемой под указатель на переменную типа int %lu\n", sizeof(pi));     
    printf("Объем памяти, выделяемой под указатель на переменную типа char: %lu\n", sizeof(pc));    
    printf("Объем памяти, выделяемой под указатель на переменную типа double %lu\n", sizeof(pd));  
   

    return 0;
}