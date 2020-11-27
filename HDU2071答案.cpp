#include <stdio.h>
 
int main()
{
    int ncase;
    int n;
    float height, max_he;
    scanf("%d",&ncase);
    while(ncase--)
    {
        max_he = 0;
        scanf("%d",&n);
        while(n--)
        {
            scanf("%f",&height);
            if(height > max_he)
                max_he = height;
        }
        printf("%.2f\n",max_he);
 
    }
    return 0;
}
