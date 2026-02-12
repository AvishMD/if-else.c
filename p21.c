#include <stdio.h>

int main(){
    printf("Enter the two numbers\n");
    printf("enter the operators\n");
    int a,b;
    char operators;
        scanf("%d  %c %d",&a,  &operators,&b);
    switch(operators){
        case '+':
            printf("Result is %d",a+b);
            break;
        case '-':
            printf("Result is %d",a-b);
            break;
        case '*':
            printf("Result is %d",a*b);
            break;
        case '/':
            if(b==0)
                printf("Not Divide By Zero");
            else
                printf("Result is %.2f",(float)a/b);
            break;
    }
    return 0;        

}
