#include <stdio.h>

int main(void) {
	// your code goes here
	int t,a,b,c;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
	{
	    scanf("%d %d %d",&a,&b,&c);
	    int d=2*a+2*b;
	    printf("%d \n",(c*d));
	}
	return 0;
}

