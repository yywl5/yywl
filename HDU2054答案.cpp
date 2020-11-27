#include <cstdio>
#include <cstring>
using namespace std;
 
char str1[100000+7];
char str2[100000+7];
 
int main()
{
    while(scanf("%s%s", str1, str2) != EOF)
    {
        int len1 = strlen(str1);
        int len2 = strlen(str2);
        int index1 = 0;
        int index2 = 0;
        bool flag1 = 0;
        bool flag2 = 0;
 
        for(int i=0; i<len1; i++)   // 寻找小数点，并记录位置
        {
            if(str1[i] == '.')
            {
                flag1 = 1;
                break;
            }       
            index1 ++;
        }
        for(int i=0; i<len2; i++)   
        {
            if(str2[i] == '.')
            {
                flag2 = 1;
                break;
            }
            index2 ++;
        }
 
        if(flag1)   // 如果是一个浮点数，则去掉后缀0，如果是1.000这样的还要去掉小数点
        {
            int i;
            for(i=len1-1; str1[i] == '0'; i--)
            {
                str1[i] = '\0';
            }
            // printf("%d\n", i);
            if(str1[i] == '.')
                str1[i] = '\0';
        }
        if(flag2)
        {
            int i;
            for(i=len2-1; str2[i] == '0'; i--)
            {
                str2[i] = '\0';
            }
            if(str2[i] == '.')
                str2[i] = '\0';
        }
        // printf("%s %s\n", str1, str2);
        if(strcmp(str1, str2) == 0)
            printf("YES\n");
        else
        {
                printf("NO\n");
        }
        
    }
 
 
    return 0;
}
