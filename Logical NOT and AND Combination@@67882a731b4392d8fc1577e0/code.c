#include<stdio.h>
int main(){
    int a , b;
    scanf("%d",&a);
    scanf("%d",&b);
    if(!(a<0 && b<0)){
        printf("True\n");

    } else{
        printf("False\n");
    }
    return 0;

}