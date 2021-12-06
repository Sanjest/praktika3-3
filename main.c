#include <stdio.h>
#define A 1
#define B 9
int main(){
	int x = 4;
	if((x>=A)&&(x<=B)){
		printf("YES\n");
		printf("%d in [%d;%d]",x,A,B);
	}
	else{
		printf("NO\n");
	}
	return 0;
}
