#include<stdio.h>
#include<math.h>
int main(){
	float u,a,s,v;									// u is initial velocity, a is acceleration, s is distance, v is final velocity
	printf("enter the value of u\t,a\t and s\n");
	scanf("%f" "%f" "%f",&u,&a,&s);
	v = sqrt(pow(u,2)+(2*a*s));
	printf("final velocity is: %f",v);
	return 0;
	
}
