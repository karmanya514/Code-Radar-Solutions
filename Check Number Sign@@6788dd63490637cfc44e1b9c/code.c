#include <stdio.h>



int main() {
    int x;
    scanf("%x",&x);
    if(x>0){
        printf("Positive");

    }
    if(x<0){
        printf("Negative");

    }
    if(x==0){
        printf("Zero");
    }
    return 0;
}