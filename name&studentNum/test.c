#include <stdio.h>

int main() {
    char name[100];
    char studentNumber[100];

    printf("�̸��� �Է��ϼ���: ");
    fgets(name, sizeof(name), stdin);

    printf("�й��� �Է��ϼ���: ");
    fgets(studentNumber, sizeof(studentNumber), stdin);

    printf("\n<���>\n"); 
    printf("�̸�: %s", name);
    printf("�й�: %s", studentNumber);

    return 0;
}
