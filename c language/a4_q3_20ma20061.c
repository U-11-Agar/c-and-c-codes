#include<stdio.h>


int main()
{
    int n, countWays;
    scanf("%d",&n);
    countWays =  numberofWays(n);
    printf("countWays(n)");
    return 0;
}
int numberofWays(int n)
{
    int DP[n + 1];
 
    
    DP[1]=1;
    DP[2]=2;
    DP[3] = 4;
 
    
    for (int i = 4; i <= n; i++)
        DP[i] = DP[i - 1] + DP[i - 2] + DP[i - 3];
     
    return DP[n];
}