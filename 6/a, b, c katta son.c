#include <stdio.h>

int a, b, c;

int main(){
    printf("3 ta son kritsen jgar:\n");
    scanf("%d %d %d", &a, &b, &c);
    if(a<b && b<c){
        printf("%d washe kattasi shu\n", c);
    }
    else if(a>b && b>c){
        printf("%d washe kattasi shu\n", a);
    }
    else{
        printf("%d washe kattasi shu\n", b);
    }
return 0;
}