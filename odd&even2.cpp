#include<stdio.h>  
  
#define N 10  
  
int main()  
{  
    int a[N], i, even = 0, odd = 0;  
  
    printf("Enter %d integer numbers\n", N);  
    for(i = 0; i < N; i++)  
        scanf("%d", &a[i]);  
  
    printf("\n\nEven numbers in the array are ...\n");  
    for(i = 0; i < N; i++)  
    {  
        if(a[i] % 2 == 0)  
        {  
            printf("%d\n", a[i]);  
            even++;  
        }  
    }  
  
    printf("\nOdd numbers in the array are ...\n");  
    for(i = 0; i < N; i++)  
    {  
        if(a[i] % 2 != 0)  
        {  
            printf("%d\n", a[i]);  
            odd++;  
        }  
    }  
  
    printf("\n\nTotal Even numbers: %d", even);  
    printf("\nTotal Odd numbers: %d\n", odd);  
  
    printf("\n");  
  
    return 0;  
}  