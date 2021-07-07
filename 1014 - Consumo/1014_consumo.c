#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 
int main() {
    float y;
    int x;
    
    scanf("%d%f",&x,&y);
    
	printf("%.3f km/l\n",x/y);
	return 0;
}
