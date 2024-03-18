#include <stdio.h>
 
 int main()
 {
 	int n1,n2,n3,n4,min;
 	
 	printf("Please enter four numbers : \n");
 	scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
 	
 //	min = (n1<n2)?(n1<n3):(n1<n4)?(n2<n3):(n2<n4)?(n3<n4):n4;
 	min = n1<n2&&n1<n3&&n1<n4?n1:n2<n3&&n2<n4?n2:n3<n4?n3:n4;
 	
 	printf("Minimum number is : %d",min);
 	
 }
