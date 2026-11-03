#include <stdio.h>

int main() {

int a[10],start,end,mid,num,i,n,e;

printf("enter the no of elements:");
scanf("%d",&e);
printf("enter the numbers:");
scanf("%d",&n);
for(i=1;i<e;i++)
scanf("%d",&a[i]);
printf("enter the element to search");
scanf("%d",&num);


start=0;
end=e-1;

while(start<=end)
{
	mid=(start+end)/2;
	if (a[mid]==num)
	{
		printf("element is found at position %d",mid+1);
		break;
	
	}
		else if (a[mid]>num)
		end=mid-1;
		else 
		start=mid+1;
	}

if (start>end)
printf("element not found in the list");

}