#include<stdio.h>

void main(){

	int n, c=0, check, i;

	printf("Enter size of array : ");
	scanf("%d", &n);

	int a[n];

	for(i=0 ; i<n; i++){
		printf("Enter element for a[%d] : ", i);
		scanf("%d", &a[i]);
	}

	check=a[0];

	if(n%3==0){

		for(i=c; i<c+3; i++){

			if(check<=a[i]){
				check=a[i];
			}
			else{
				break;
			}
			c=c+3;
		}
	}
	if(i==n-1){
		printf("yes");
	}
	else{
		printf("no");
	}

}