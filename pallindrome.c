#include<stdio.h>							// header file
int main(){
	int m,sum=0,c,a;						// c belongs to last variable
	printf("enter value of m\n");
	scanf("%d",&m);
	a=m;                                    // temporary variable
	while(m>0){
		c= m%10;
		sum= (sum*10)+c;
		m/=10;
		
	}
	if(a==sum)								// condition
	printf("pallindrome");
	else
	printf("not a pallindrome");
	return 0;

}
