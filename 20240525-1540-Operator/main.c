#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char str[] = "monster";
	char str2[] = "is World!";
	char str3[40];
	char str4[] = "monster is World!";

	// 1. strlen ���ڿ��� ���ڰ����� ���� �Լ�
	int count = strlen(str);
	printf("str. %s�� ���ڰ�����: %d\n", str, count);

	// 2. strcpy ���ڿ��� �����ϴ� �Լ�
	strcpy(str3, str);
	printf("str3: %s\n", str3);

	// 3. strcat ���ڿ� �����ϴ� �Լ�
	strcpy(str3, str2);
	printf("str3: %s\n", str3);

	// 4. strcmp ���ڿ� ���ϴ� �Լ�
	// ���ڿ��� ������ 0�� ����
	// ���ڿ��� �ٸ��� ������ ������ ���� -1, 1�� ����
	int ret = strcmp(str3, str4);

	if (ret == 0) {
		printf("str3: %s�� str4: %s ���ڿ��� �����ϴ�", str3, str4);
	}
	else {
		printf("str3: %s�� str4: %s ���ڿ��� �ٸ��ϴ�", str3, str4);
	}

	return 0;
}