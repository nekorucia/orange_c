#include <stdio.h>

int main(void)
{
    int temp;
    int sum=0;

    while (temp!=0)
    {
        printf("���� �Է�  : ");
        scanf("%d",&temp);
        sum+=temp;
    }

    printf("�� : %d",sum);
    return 0;
}