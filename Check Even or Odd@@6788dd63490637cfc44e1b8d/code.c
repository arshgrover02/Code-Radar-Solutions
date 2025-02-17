#include<stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    if(a&1){
        printf("Even\n");

    } else{
        printf("Odd\n");
    }
    return 0;
}