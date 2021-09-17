#include <stdio.h>
#include <stdlib.h>

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

int main()
{
    int n,i;
    int number;
    int number_list[100002] = {0,};
    int sum = 0;
    int count = 0;
    int sum1 = 0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&number_list[i]);
    }
    quickSort(number_list, 0, n - 1);
    for(i=0;i<(n/3)*2;i+=2){ //6
        sum = sum + number_list[i];//0 //2//4
        sum = sum + number_list[i+1];//1//3//5
        count += 1;
    }
    if(n<3){
        sum1 += number_list[0];
        sum1 += number_list[1];
    }
    if(n==3){
        printf("%d\n",sum);
    }
    else if(n % 3==1){
        sum += number_list[i];
        printf("%d\n",sum);
    }
    else if(n%3==2){//5
        sum += number_list[i];
        sum += number_list[i+1];
        printf("%d\n",sum);
    }
    else{
        printf("%d\n",sum);
    }
    return 0;

}
