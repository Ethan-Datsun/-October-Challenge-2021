#include<stdio.h>

int main() {
    // your code goes here
    int test;
    scanf("%d",&test);
    
    while (test--){
        int a, b;
        scanf("%d %d",&a,&b);
        if (a == 0)
        {
            printf("Liquid\n");
        }
        else if (b == 0)
        {
            printf("Solid\n");
        }
        else
        {
            printf("Solution\n");
        }
    }
    
    return 0;
}