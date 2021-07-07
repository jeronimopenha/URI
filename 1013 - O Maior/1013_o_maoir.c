#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 
int main() {
    int a,b,c,temp;
    
    scanf("%d%d%d",&a,&b,&c);
    temp=((a+b+abs(a-b))/2);
    
    printf("%d eh o maior\n",((temp+c+abs(temp-c))/2));
	return 0;
}
