#include <stdio.h>

int main(void) {
	int i,t,j,n,arr[200000],x,y,m,a;
	scanf("%d",&t);
	while(t>0)
	{
	    a=0;
	    scanf("%d%d",&n,&i);
	    for(j=0;j<n;j++)
	    scanf("%d",&arr[j]);
	    x=1;y=arr[i-1]-x;
	    while(y>=1)
	    {
	        arr[n-1]=x;
	        arr[n]=y;
	        y=arr[n]-x;
	        n++;
	    }
	    for(j=0;j<n;j++)
	    {
	        for(m=0;m<j;m++)
	        {
	            a+=arr[j]*arr[m];
	        }
	        for(m=j+1;m<n;m++)
	        {
	            a+=arr[j]*arr[m];
	        }
	    }
	    printf("%d\n",a);
	    t--;
	}
	return 0;
}

