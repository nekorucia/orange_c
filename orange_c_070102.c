#include <stdio.h>

int main(void)
{
    int temp;
    int sum;

    while (temp!=0)
    {
        printf("���� �Է�  : \n");
        scanf("%d",&temp);
        sum+=temp;
    }

    printf("�� : %d",sum);
    return 0;
}