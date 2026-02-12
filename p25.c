#include <stdio.h>

int main() {
    printf("Enter the two numbers\n");
    int a,b,c;
    scanf("%d %d",&a,&b);
    printf("Enter the operators in number\n");
    printf("+ -> 1\n");
    printf("- -> 2\n");
    printf("* -> 3\n");
    printf("/ -> 4\n");
    scanf("%d", &c);
    switch(c){
        case 1:
            printf("%d",a+b);
            break;
        case 2:
            printf("%d", a-b);
            break;
        case 3:
            printf("%d", a*b);
            break;
        case 4:
            if(a==0 || b==0)
                printf("Not divided by zero");
            else
                printf("%.2f", (float)a/b);
            break;
        default:
            printf("Invaild Input");
    }
    
    return 0;
}
