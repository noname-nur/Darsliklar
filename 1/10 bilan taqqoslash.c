#include <stdio.h>

int a;

int main(){
    printf("Soni kiriting:\n");
    scanf("%d", &a);
    if(a > 10 ){
        printf("%d", a+3);
    } 
    else if (a < 10)
    {
        printf("%d", a * 2);
    }
    else{
        printf("22");
    }
    
return 0;
}