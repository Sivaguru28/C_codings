#include <stdio.h>

int main(void) {
	// your code goes here
	int x,y,t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
	{
	    scanf("%d %d",&x,&y);
	    if(y>x)
	    printf("YES \n");
	    else
	    printf("NO \n");
	}
	return 0;
}

