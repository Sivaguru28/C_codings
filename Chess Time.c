#include <stdio.h>

int main(void) {
	// your code goes here
	int t,m;
	scanf("%d ",&t);
	for(int i=1;i<=t;i++)
	{
	    scanf("%d",&m);
	    printf("%d \n",(m*60)/20);
	}
	return 0;
}

