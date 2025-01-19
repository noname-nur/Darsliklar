#include <stdio.h>

int a;

int main(){
    printf("Okam nechi yozasz:");
    scanf("%d", &a);
    if(a % 2 == 0) {
        printf("Bu juft son:\n");
    }
    else{
        printf("Bu toq son:\n");
    }
return 0;
}