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
            if (a>=0 && b>=0)
            {
            c=a/b;
            printf("%d",c);
            }
            else
                printf("error");
            break;
       
        


    }
    return 0;
}