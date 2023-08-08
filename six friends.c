#include <stdio.h>

int main(void) {
	// your code goes here
	int t,a,b;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
	{
	    scanf("%d %d",&a,&b);
	    if((a*3)>=(b*2))
	    printf("%d \n",(b*2));
	    else
	    printf("%d \n",(a*3));
	}
	return 0;
}

