#include<stdio.h>
void quickSort(int* data, int pos_start, int pos_end)
{
    if (pos_start >= pos_end) { // ���� �ϰ��� �ϴ� ������ ���Ұ� 1���� ���
        return;
    }

    int key = pos_start; // Ű�� ù��° ����
    int i = pos_start + 1;
    int j = pos_end;
    int temp;

    while (i <= j) { // ������ ������ �ݺ�
        while (data[i] >= data[key]) { // Ű ������ ū ���� ���� ������ ���������� �̵�
            i++;
        }
        while (data[j] <= data[key] && j > pos_start) { // Ű ������ ���� ���� ���� ������ �������� �̵�
            j--;
        }
        if (i > j) { // ���� ������ ���¸� Ű ���� ��ü
            temp = data[j];
            data[j] = data[key];
            data[key] = temp;
        } else {
            temp = data[j];
            data[j] = data[i];
            data[i] = temp;
        }
    }
    quickSort(data, pos_start, j - 1);
    quickSort(data, j + 1, pos_end);
}
int main(){
    int n;
    int number;
    scanf("%d",&n);
    int temp = 0;
    int c = 2;
    int big = 0;
    int num_list[100000]={0,};
    for(int i=0;i<n;i++){
        scanf("%d",&number);
        num_list[i] = number;
    }
    quickSort(num_list, 0, n - 1);
    for(int i=0;i<n;i++){
       if(big<num_list[i]+c){
        big = num_list[i]+c;
       }
       c++;

    }
    printf("%d",big);

}
