#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(void)
{
    char string1[60] = "Welcome";
    char string2[60];
    int len;

    strcpy_s(string2, sizeof(string2), string1); // �ϥ� strcpy_s �Ө��N strcpy
    printf("string2=%s\n", string2);

    len = strlen(string2);
    printf("�r����׬�%d\n", len);

    system("pause");
    return 0;
}
