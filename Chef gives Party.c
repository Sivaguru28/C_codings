#include <stdio.h>

int main(void) {
	int x,y,z,n,c;
    scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
	    scanf("%d %d %d",&x,&y,&z);
	    if((x*y)<=z)
	    printf("Yes \n");
	    else
	    printf("No \n");
	}
	return 0;
}

