/** ���� �ܰ�� �Ѿ �� A�� B��, B�� AB�� �ٲ�ϱ�
	�� �ܰ��� B������ŭ ���� �ܰ��� A�� �����ǰ�
	�� �ܰ��� A���� + B���� ��ŭ ���� �ܰ��� B�� ������*/
#include<stdio.h>
#define MAX 45
int main(){
	int num;
	int numA[MAX],numB[MAX];
	scanf("%d",&num);
	numA[0] = 1,numB[0] = 0;
	for(int i=0;i<num;i++){
		int temp = numA[i]; //1 0
		numA[i+1] = numB[i]; // 0 1
		numB[i+1] = temp+numB[i];//1 1
	}
	printf("%d %d",numA[num],numB[num]);
}
