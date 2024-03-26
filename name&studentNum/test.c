#include <stdio.h>

int main() {
    char name[100];
    char studentNumber[100];
    char team_name[100];

    printf("이름을 입력하세요: ");
    fgets(name, sizeof(name), stdin);

    printf("학번을 입력하세요: ");
    fgets(studentNumber, sizeof(studentNumber), stdin);

    printf("팀명을 입력하세요: ");
    fgets(team_name, sizeof(team_name), stdin);

    printf("\n<출력>\n"); 
    printf("이름: %s", name);
    printf("학번: %s", studentNumber);
    printf("팀명: %s", team_name);

    return 0;
}
