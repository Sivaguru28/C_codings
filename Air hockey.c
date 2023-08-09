#include <stdio.h>

int main(void) {
	// your code goes here
	int t,a,b;
	scanf("%d ",&t);
	for(int i=1;i<=t;i++)
	{
	    scanf("%d %d",&a,&b);
	    if((7-a)<=(7-b))
	    printf("%d \n",(7-a));
	    else
	    printf("%d \n",(7-b));
	}
	return 0;
}

