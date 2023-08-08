#include <stdio.h>

int main(void) {
	// your code goes here
	int a,b,c,n;
	scanf("%d ",&n);
	for(int i=1;i<=n;i++)
	{
	    scanf("%d %d %d",&a,&b,&c);
	    printf("%d \n",(b-c)*a);
	}
	return 0;
}

