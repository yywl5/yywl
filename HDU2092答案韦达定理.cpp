/* HDU2092 ÕûÊý½â */

#include <stdio.h>
#include <math.h>

int main(void)
{
    int n, m, delta, flag;
    while(scanf("%d%d", &n, &m) != EOF && (n || m)) {
        delta = n * n - 4 * m;
        if(delta < 0)
            flag = 0;
        else {
            int ac = sqrt(delta);
            if( ac * ac != delta)
                flag = 0;
            else {
                int f1 = n + ac;
                int f2 = n - ac;
                flag = f1 % 2 == 0 && f2 % 2 == 0;
            }
        }

        printf("%s\n", flag ? "Yes" : "No");
    }

    return 0;
}

