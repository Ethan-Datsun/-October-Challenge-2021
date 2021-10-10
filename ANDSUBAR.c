#include <stdio.h>
#include <math.h>


int bit(int n){
    int ans = 0;
    while (n > 0){
        ans++;
        n = n >> 1;
    }
    return ans;
}
int max(int num1, int num2)
{
    return (num1 > num2 ) ? num1 : num2;
}
int main() {
    // your code goes here
    int test;
    scanf("%d",&test);
    
    while (test--)
    {
        int N;
        scanf("%d",&N);
        
        int n = bit(N);
        int ans1 = N - pow(2, n - 1) + 1;
        int ans2 = pow(2, n - 1) - pow(2, n - 2);
        printf("%d\n",max(ans1, ans2));
    }
    return 0;
}