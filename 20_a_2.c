#include<stdio.h>


struct book{
	
	char book_title[1];
	
	char author[1];

	char publication[1]; 

	int price;

};

void main(){

	struct book b[3];

	int i;

	for(i=0; i<3; i++){

		printf("Enter book title : ");
		scanf("%[^\n]%*c", b[i].book_title);

		printf("Enter name of book author : ");
		scanf("%[^\n]%*c", b[i].author);

		printf("Enter publication : ");
		scanf("%[^\n]%*c", b[i].publication);

		printf("Enter price : ");
		scanf("%d", b[i].price);

	}

	for(i=0; i<3; i++){

		printf("Enter book title : %s\n",  b[i].book_title);

		printf("Enter name of book author : %s\n", b[i].author);

		printf("Enter publication : %s\n", b[i].publication);

		printf("Enter price : %d", b[i].price);

	}

}