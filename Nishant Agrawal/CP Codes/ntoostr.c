#include <stdio.h>
 
int main()
{
    int c;
 
    while ( (c=getchar()) != EOF ){
        if (c >= 65 & c <= 90)
            c += 32;
        else if (c >= 97 &c <= 122)
            c -= 32;
        
        putchar(c);
    }
        
    return 0;
}

