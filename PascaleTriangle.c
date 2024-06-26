#include<stdio.h>
int n = 10;

void printArray ( int *a )
{
    for( int i = 0; i < n; i++ )
    {
        if ( a[i] )
            printf("%d ", a[i]);
        else 
            printf(" ");
    }        
}

void pascal ( )
{
    int u = n;
    
    n *= 2;
    
    int a[n];
    
    for (int i = 0; i <= n; i++)
        a[i] = 0;
        
    a[n/2] = 1;
    while ( u-- )
    {
        printArray ( a );
        
        for ( int i = 0; i < n; i++ )
            a[i] += a[i+1];
        
        printf("\n");
    }
        
}

int main()
{
    pascal();
    return 0;
}