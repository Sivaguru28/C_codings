#include <stdio.h>

int main(void) {
	// your code goes here
	int t,a,b,c;
	scanf("%d ",&t);
	for(int i=1;i<=t;i++)
	{
	    scanf("%d %d %d",&a,&b,&c);
	    int d=(a*5)+(b*10);
	    printf("%d \n",(d/c));
	}
	return 0;
}

