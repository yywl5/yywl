/* HDU2057 A + B Again */
 
#include <stdio.h>
 
int main(void)
{
    long long a, b, result;
 
    while(scanf("%llx %llx", &a, &b) != EOF) {
        result = a + b;
 
        if (result >= 0)
            printf("%llX\n", result);
        else
            printf("-%llX\n", -result);
    }
 
    return 0;
}
