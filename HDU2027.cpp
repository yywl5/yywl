#include<stdio.h>
#include<string.h>
int main(){
	int i,a,b,c,d,e;
	int n,len;
	char list[110];
	scanf("%d",&n); 
	getchar();
	while(n--){
		a=b=c=d=e=0;
		gets(list);
		len=strlen(list);
		for(i=0;i<=len;i++){
			if(list[i]=='a'){
				a++;
			}else if(list[i]=='e'){
				b++;
			}else if(list[i]=='i'){
				c++;
			}else if(list[i]=='o'){
				d++;
			}else if(list[i]=='u'){
				e++;
			}
		}
		if(n==0){
		printf("a:%d\n",a);
		printf("e:%d\n",b);
		printf("i:%d\n",c);
		printf("o:%d\n",d);
		printf("u:%d\n",e);
		}else{
		printf("a:%d\n",a);
		printf("e:%d\n",b);
		printf("i:%d\n",c);
		printf("o:%d\n",d);
		printf("u:%d\n",e);
		printf("\n");
    }
	}
}
