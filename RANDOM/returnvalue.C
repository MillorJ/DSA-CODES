#include <stdio.h>


int getsum(int x, int y);

int main(){
    //naming variables
    int x,y;
    //getting input
    printf("Enter first number: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d",&y);
    
    
    int sum = getsum(x,y);

    printf("The sum of the two numbers is %d", sum);

    return 0;
}
int getsum(int x, int y){

    int sum = x + y;
    return sum;
}
