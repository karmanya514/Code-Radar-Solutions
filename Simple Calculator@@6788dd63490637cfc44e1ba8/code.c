#include <stdio.h>



int main() {
    char choice;
    int a,b,c;
    scanf("%d %d %c",&a,&b,&choice);
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
        


    }
    return 0;
}