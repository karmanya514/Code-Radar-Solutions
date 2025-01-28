#include <stdio.h>
int main(){
    float x,y,z,w;
    scanf("%f %f %f",&x,&y,&z);
    w=(x+y+z)/3;
    printf("Average: %.2f",w);
    return 0;
}