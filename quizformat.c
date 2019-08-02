#include <stdio.h>
#include <string.h>

int main() {
	// Declaration
	char language[1000] = { 0, };
	char question[5000] = { 0, };
	char explan[5000] = { 0, };
	char image[2000] = { 0, };
	int answer = 0, point = 0, i;

	// Prompt
	printf("언어입력> ");
	scanf("%s", language);
	printf("질문 내용입력> ");
	getchar();
	scanf("%[^\n]", question);
	printf("답 입력 (1은 true, 0는 false)> ");
	getchar();
	scanf("%d", &answer);
	printf("해설 내용입력> ");
	getchar();
	getchar();
	scanf("%[^\n]", explan);
	printf("사진이 있다면 주소입력 (없으면 엔터 두번)> ");
	getchar();
	getchar();
	scanf("%[^\n]", image);
	printf("점수 입력 (1~5)> ");
	scanf("%d", &point);

	// Print & Calculate
	printf("\n변환된 JSON코드:");
	printf("\n\n\n");
	printf("  },\n  {\n");
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
	switch (answer) {
		case 1:
			printf("    \"awnser\": \"true\",\n");
			break;
		
		default:
			printf("    \"awnser\": \"false\",\n");
			break;
	}
	printf("    \"explanation\": \"");
	for (i = 0; i < strlen(explan); i++) {
		if (explan[i] == 10) {
			printf("\\n");
		}
		else
			printf("%c", explan[i]);
	}
	printf("\",\n");
	if(image[0]){
        printf("    \"image\": \"%s\",\n", image);
	}
	printf("    \"point\": \"%d\"\n", point);
	printf("  }\n\nCopyright (C) 2019. Seoa Development Team. GPL Licensed.");
	return 0;
}
