#include <stdio.h>
// ð������ 

// ���ﴴ����һ���ṹ�������洢�����ͷ��� 
struct student {
	char name[21];
	int score;
}; 
int main() {
	struct student a[100], t;
	int i, j, n;
	printf("������¼���ѧ������");
	scanf("%d", &n); // ����һ����n
	for (i = 1; i <= n; i++) {
		scanf("%s %d", a[i].name, &a[i].score);
	} 
	// �������Ӹߵ��ͽ�������
	for (i = 1; i <= n-1; i++) {
		for (j = 1; j <= n-i; j++) {
			if (a[j].score < a[j+1].score) { // �Է������бȽ� 
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t; 
			}
		}
	} 
	for (i = 1; i <= n; i++) { //�������� 
		printf("%s\n", a[i].name); 
	}
	getchar();getchar(); 
	return 0;
}
