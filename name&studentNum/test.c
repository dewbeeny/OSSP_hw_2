#include <stdio.h>

int main() {
    char name[100];
    char studentNumber[100];

    printf("이름을 입력하세요: ");
    fgets(name, sizeof(name), stdin);

    printf("학번을 입력하세요: ");
    fgets(studentNumber, sizeof(studentNumber), stdin);

    printf("\n<출력>\n"); 
    printf("이름: %s", name);
    printf("학번: %s", studentNumber);

    return 0;
}
