#include <stdio.h>
#include <string.h>
int main() {
	char language[1000] = { 0, };
	char question[5000] = { 0, };
	char answer[5000] = { 0, };
	char image[2000] = {0,};
	int res = 0, point = 0, i;
	printf("����Է�");
	scanf("%s", language);
	printf("���������Է�(������ ` �Է�)");
	getchar();
	scanf("%[^`]", question);
	printf("�亯�����Է�(������ ` �Է�)");
	getchar();
	getchar();
	scanf("%[^`]", answer);
	printf("������ �ִٸ� �ּ��Է�(������ �׳� ����)");
	getchar();
	getchar();
	scanf("%[^\n]", image);
	printf("�� �Է�(1�� true,2�� false)");
	getchar();
	scanf("%d", &res);
	printf("����Ʈ �Է�");
	scanf("%d", &point);
	printf("���ϸ� �����ؼ� �ڵ�ؿ� ������ ��");
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
