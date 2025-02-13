#include<stdio.h>
int main(){
    char name[100] , hobby[100];
    int age;
    scanf("%c", name);
    scanf("%d" ,age);
    scanf("%[^\n]%*c", hobby);
    printf("%s\n", name);
    printf("%d\n", age);
    printf("%s\n", hobby);    


}