#include <iostream>
int a[101], n; // ����ȫ�ֱ�����������������Ҫ���Ӻ�����ʹ��

void quicksort(int left, int right) {
	int i, j, t, temp;
	if (left>right) {
		return;
	}
	temp = a[left]; // temp�д�ľ��ǻ�׼��
	i =left;
	j = right;
	while (i != j) {
		// ˳�����Ҫ��Ҫ�ȴ���������
		while (a[j] >temp && i < j) {
			j--;
		}
		while (a[i] <= temp && i < j) {
			i++;
		} 
		// �����������������е�λ��
		if (i < j) { //��i��jû������ʱ 
			t = a[i];
			a[i] = a[j];
			a[j] = t;
		} 
	}
	
	//���ս���׼����λ
	a[left] = a[i];
	a[i] = temp;
	
	quicksort(left, i -1); // ����������ߵģ�������һ���ݹ�Ĺ��� 
	quicksort(i + 1, right); //���������ұߵģ�������һ���ݹ�Ĺ��� 
	return;
} 


int main() {
	int i, j;
	// ��������
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	} 
	quicksort(1,n); // �����������
	
	// ��������Ľ��
	for (i = 1; i <= n; i++) {
		printf("%d", a[i]);
	} 
	getchar();getchar();
	return 0;
}
