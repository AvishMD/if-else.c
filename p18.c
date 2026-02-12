#include <stdio.h>

int main(){
    int a,b;
    scanf("%d", &a);
    if(a>=0 && a<=100){
        b=a*3;
        printf("Bill amount = Rs. %d",b);
    }
    else if(a>=101 && a<=500){
        b=a*5;
        printf("Bill amount = Rs.%d",b);
        
    }
    return 0;        

}
