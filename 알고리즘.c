#define _CRT_SECURE_NO_WARNINGS
#define DATACOUNT 5000001

#include <stdio.h>
#include <time.h>

int main(void) {
	clock_t start, stop = 0;
	double result = 0;
	start = clock();

	FILE* fp = fopen("1.in", "r");
	if (fp == NULL) {
		printf("프로그램 종료");
		return -1;
	}
	for (int i = 0; i < DATACOUNT; i++) {
		int temp;
		fscanf_s(fp, "%d", &temp);
		if (temp == 2839004)
			break;
	}
	stop = clock();
	result = (double)(stop - start);
	printf("걸린 시간은 %f초 입니다.", result);
	return 0;
}
