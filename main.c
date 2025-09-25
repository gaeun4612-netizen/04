#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int t;
	
	printf("input the second : ");
	scanf("%d", &t);
	
	printf("the Time is %d : %d\n", t/60, t%60);
	
	return 0;
}
