#include <stdio.h>

int main(void) {
	// your code goes here
	int a,b,c,d,n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
	    scanf("%d %d %d %d",&a,&b,&c,&d);
	    int x=a+b;
	    int y=c+d;
	    if(x>=y)
	    printf("%d \n",y);
	    else
	    printf("%d \n",x);
	}
	return 0;
}

