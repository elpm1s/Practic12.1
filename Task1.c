/*
#include <stdio.h>

main()
{

	int a = 55;
	int* ptr1;
	ptr1 = &a;

	printf("%d\n", *ptr1); //���� �������� ���������� a
	printf("%d\n", ptr1); // ����� ���������� �
}
*/
#include <stdio.h>
#include <locale.h>


int main() {
    setlocale(LC_ALL, "RUS");

    int* pi;      
    char* pc;     
    double* pd;   

    // ������� ������� ����������
    printf("����� ������, ���������� ��� ��������� �� ���������� ���� int %lu\n", sizeof(pi));     
    printf("����� ������, ���������� ��� ��������� �� ���������� ���� char: %lu\n", sizeof(pc));    
    printf("����� ������, ���������� ��� ��������� �� ���������� ���� double %lu\n", sizeof(pd));  
   

    return 0;
}