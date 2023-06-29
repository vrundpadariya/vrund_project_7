#include<stdio.h>

void add(){
	int a,b;
	int add; 
printf("Enter your first number: ");
scanf("%d",&a);	

printf("Enter your second number: ");
scanf("%d",&b);
	add=a+b;
	printf("Addition of A and B is : %d",add);
}

void sub(){
	int a,b;
	int sub; 
printf("Enter your first number: ");
scanf("%d",&a);	

printf("Enter your second number: ");
scanf("%d",&b);
	sub=a-b;
	printf("subtraction of A and B is : %d",sub);
}

void mul(){
	int a,b;
	int mul; 
printf("Enter your first number: ");
scanf("%d",&a);	

printf("Enter your second number: ");
scanf("%d",&b);
	mul=a*b;
	printf("multiplication of A and B is : %d",mul);
}

void div(){
	int a,b;
	int div; 
printf("Enter your first number: ");
scanf("%d",&a);	

printf("Enter your second number: ");
scanf("%d",&b);
	div=a/b;
	printf("divison of A and B is : %d",div);
}

void mod(){
	int a,b;
	int mod; 
printf("Enter your first number: ");
scanf("%d",&a);	

printf("Enter your second number: ");
scanf("%d",&b);
	mod=a%b;
	printf("modular of A and B is : %d",mod);
}


void main(){
	
int a,n;

printf("Press 1 for +\n");
printf("Press 2 for -\n");
printf("Press 3 for *\n");
printf("Press 4 for /\n");
printf("Press 5 for %\n");
printf("Press 0 for exit\n");
printf("Enter your choice\n");
scanf("%d",&a);

do{


switch(a){
	


case 1:
	add();
break;

case 2:
	sub();
break;

case 3:
	mul();
break;

case 4:
	div();
break;

case 5:
	mod();
break;

default:
	printf("you are exited ");
	break;
	
}
}while(a != 0);
}
