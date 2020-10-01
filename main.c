#include <stdio.h>
#include <string.h>


void swap(char *x, char *y)
{
    char tmp = *x;
    *x = *y;
    *y = tmp;
}

void permute(char *a, int l, int r) 
{ 
    int i; 
    if (l == r) {
    printf("%s\n", a);
    return;
    }

    for (i = l; i <= r; i++) 
    { 
        swap((a+l), (a+i)); 
        permute(a, l+1, r); 
        swap((a+l), (a+i)); //backtrack 
    }
} 


int main() 
{ 
    char str[] = "ABC"; 
    int n = strlen(str); 
    permute(str, 0, n-1); 
    return 0; 
} 