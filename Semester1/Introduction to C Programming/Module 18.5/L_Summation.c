#include<stdio.h>

long long sum ( long long a[], int n, int i)
{
    if( i == n ) return 0;
     if (n>=1 && n <=1000)
     {
          long long s =  sum(a, n, i+1);
   // printf("%lld %lld\n", s, s+ a[i]);
          return s + a[i];
     }
 
}
int main()
{
    
    int n;
    scanf("%d", &n);
    long long a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }
  
  long long s =  sum(a , n, 0); 
  printf("%lld ", s);
    return 0;
}

