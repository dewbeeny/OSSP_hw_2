#include <stdio.h>

int main() {
    char name[100];
    char studentNumber[100];
    char team_name[100];

    printf("�̸��� �Է��ϼ���: ");
    fgets(name, sizeof(name), stdin);

    printf("�й��� �Է��ϼ���: ");
    fgets(studentNumber, sizeof(studentNumber), stdin);

    printf("������ �Է��ϼ���: ");
    fgets(team_name, sizeof(team_name), stdin);

    printf("\n<���>\n"); 
    printf("�̸�: %s", name);
    printf("�й�: %s", studentNumber);
    printf("����: %s", team_name);

    return 0;
}
