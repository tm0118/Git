#include<stdio.h>
int main(){
    int line;
    int i,j;
    int num = 1;
    int count = 1;
    printf("���� ���� �Է��Ͻÿ�:");
    scanf("%d",&line);
    int k = line;
    for(i=1;i<=line;i++){
        for(j=k-1;j>0;j--){
            printf(" ");
        }
        for(j=0;j<i*2-1;j++){
                if(num>9){
                    num = 0;
                }
            if(j%2==0){
            printf("%d",num);
            num++;
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
        k--;
    }
}
