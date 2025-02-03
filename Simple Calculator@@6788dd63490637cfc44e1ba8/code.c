#include <stdio.h>



int main() {
    char choice;
    float a,b;
    int c;
    scanf("%f %f %c",&a,&b,&choice);
    switch(choice)
    {
        case '+':
            c=a+b;
            printf("%d",c);
            break;
        case '-':
            c=a-b;
            printf("%d",c);
            break;
        case '*':
            c=a*b;
            printf("%d",c);
            break;
        case '/':
            c=a/b;
            printf("%d",c);
            break;
        default
            printf("error");
        


    }
    return 0;
}