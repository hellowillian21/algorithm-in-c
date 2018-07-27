#include <stdio.h>
// 冒泡排序 

// 这里创建了一个结构体用来存储姓名和分数 
struct student {
	char name[21];
	int score;
}; 
int main() {
	struct student a[100], t;
	int i, j, n;
	printf("请输入录入的学生总数");
	scanf("%d", &n); // 输入一个数n
	for (i = 1; i <= n; i++) {
		scanf("%s %d", a[i].name, &a[i].score);
	} 
	// 按分数从高到低进行排序
	for (i = 1; i <= n-1; i++) {
		for (j = 1; j <= n-i; j++) {
			if (a[j].score < a[j+1].score) { // 对分数进行比较 
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t; 
			}
		}
	} 
	for (i = 1; i <= n; i++) { //输入人名 
		printf("%s\n", a[i].name); 
	}
	getchar();getchar(); 
	return 0;
}
