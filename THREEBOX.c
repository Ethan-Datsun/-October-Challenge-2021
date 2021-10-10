#include <stdio.h>


int main() 
{
    // your code goes here
    int test;
    scanf("%d",&test);
    
    while (test--)
    {
        int a, b, c, d;
        scanf("%d %d %d %d",&a,&b,&c,&d);
        if (a + b + c <= d){
            printf("1\n");
        }
        else if (a + b <= d){
            printf("2\n");
        }
        else{
            printf("3\n");
        }
    }
    return 0;
}