#include <stdio.h>

// 함수 선언
void convertCase(char *input, char *output);

int main() {
    char input[25565]; // 최대 입력 길이
    char output[25565]; // 최대 출력 길이

    printf("알파벳 소문자와 대문자를 변환할 문자열을 입력하세요: ");
    gets(input);

    convertCase(input, output);

    printf("변환된 문자열: %s\n", output);

    return 0;
}

// 알파벳 소문자를 대문자로, 대문자를 소문자로 변환하는 함수
void convertCase(char *input, char *output) {
    int i = 0;

    while (input[i] != '\0') {
        if (input[i] >= 'a' && input[i] <= 'z') {
            // 소문자인 경우 대문자로 변환
            output[i] = input[i] - ('a' - 'A');
        } else if (input[i] >= 'A' && input[i] <= 'Z') {
            // 대문자인 경우 소문자로 변환
            output[i] = input[i] + ('a' - 'A');
        } else {
            // 알파벳이 아닌 경우 그대로 복사
            output[i] = input[i];
        }

        i++;
    }

    output[i] = '\0'; // 문자열 끝 표시
}
