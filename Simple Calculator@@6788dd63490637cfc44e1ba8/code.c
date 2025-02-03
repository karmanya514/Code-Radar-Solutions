#include <stdio.h>



int main() {
    char choice;
    float c;
    int a,b;
    scanf("%d %d %c",&a,&b,&choice);
    switch(choice)
    {
        case '+':
            c=a+b;
            printf("%f",c);
            break;
        case '-':
            c=a-b;
            printf("%f",c);
            break;
        case '*':
            c=a*b;
            printf("%f",c);
            break;
        case '/':
            c=a/b;
            printf("%f",c);
            break;
        


    }
    return 0;
}