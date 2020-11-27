#include <cstdio>
 
using namespace std;
typedef long long LL;
 
LL s[40+7];
int main()
{
    s[1] = 3;
    s[2] = 8;
    for(int i=3; i<41; i++)
    {
        s[i] = s[i-1] * 2 + s[i-2] * 2;
    }
    int n;
    while(scanf("%d", &n) != EOF)
    {
        printf("%lld\n", s[n]);
    }
 
 
    return 0;
}
