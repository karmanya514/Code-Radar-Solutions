#include <stdio.h>


int main() {
    int x,y,z;
    scanf("%d %d %d",x,y,z);
    if(x*x==y*y+z*z){
        printf("Valid");
    }
    return 0;
}