#include <stdio.h>

int main(void) {
	// your code goes here
	int t,x,y;
	scanf("%d ",&t);
	for(int i=1;i<=t;i++)
	{
	    scanf("%d %d ",&x,&y);
	    if(y<=(x+200) && y>x)
	    printf("Yes \n");
	    else
	    printf("No \n");
	}
	return 0;
}

