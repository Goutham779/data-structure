#include <stdio.h>

int main(){
	int a[10],n,key,i;
	printf("enter number of elements:");
	scanf("%d",&n);
	
	printf("enter elements:\n");
	for(i = 0;i < n;i++)
		scanf("%d",&a[i]);
	printf("enter element to search:");
	scanf("%d", &key);
	for(i = 0;i < n;i++){
	if(a[i] == key){
	printf("element found at position %d,(index %d)",i + 1,i);
		return 0;
		}
	}
	printf("element not found");
	return 0;