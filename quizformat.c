#include <stdio.h>
#include <string.h>
int main() {
	char language[1000] = { 0, };
	char question[5000] = { 0, };
	char answer[5000] = { 0, };
	char image[2000] = {0,};
	int res = 0, point = 0, i;
	printf("언어입력");
	scanf("%s", language);
	printf("질문내용입력(끝날떄 ` 입력)");
	getchar();
	scanf("%[^`]", question);
	printf("답변내용입력(끝날떄 ` 입력)");
	getchar();
	getchar();
	scanf("%[^`]", answer);
	printf("사진이 있다면 주소입력(없으면 그냥 엔터)");
	getchar();
	getchar();
	scanf("%[^\n]", image);
	printf("답 입력(1은 true,2는 false)");
	getchar();
	scanf("%d", &res);
	printf("포인트 입력");
	scanf("%d", &point);
	printf("이하를 복붙해서 코드밑에 넣으면 됨");
	printf("\n\n\n");
	printf(",\n  {\n");
	printf("    \"language\": \"%s\",\n", language);
	printf("    \"question\": \"");
	for (i = 0; i < strlen(question); i++) {
		if (question[i] == 10) {
			printf("\\n");
		}
		else
			printf("%c", question[i]);
	}
	printf("\",\n");
	if (res == 1) {
		printf("    \"awnser\": \"true\",\n");
	}
	else if (res == 2) {
		printf("    \"awnser\": \"false\",\n");
	}
	printf("    \"explanation\": \"");
	for (i = 0; i < strlen(answer); i++) {
		if (answer[i] == 10) {
			printf("\\n");
		}
		else
			printf("%c", answer[i]);
	}
	printf("\",\n");
	if(image[0]){
        printf("    \"image\": \"%s\",\n", image);
	}
	printf("    \"point\": \"%d\",\n", point);
	printf("  }");
	return 0;
}
