#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int a[3], al = 0, bob = 0, i; 
    scanf("%d %d %d",&a[0],&a[1],&a[2]);
    int b[3];
    scanf("%d %d %d",&b[0],&b[1],&b[2]);
    
    for (i = 0; i < 3; i++)
    {
        if (a[i] > b[i])
            al++;
        else if (b[i] > a[i])
            bob++;
            
    }
    printf ("%d %d\n", al, bob);
    
    return 0;
}
