#include<stdio.h>

int main(){
    int num=0;
    printf("Digite a tabuada que deseja consultar ");
    scanf("%d",&num);
    for (int x = 1; x < 11; x++)
    {
        printf("%dx%d = %d\n", x, num, x * num);
    }
    

}
