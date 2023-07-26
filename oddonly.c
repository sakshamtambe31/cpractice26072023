#include<stdio.h>
int main(){
	int i,n;
	printf("Enter the last value: ");
	scanf("%d\n",&n);
	for(i=0;i<=n;i++){
		if(i%2 == 1){
			printf("%d\n",i);
		}
		else
			continue;
		
		printf("\n");
	}	
}
