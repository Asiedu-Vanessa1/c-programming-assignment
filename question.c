#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float battery;
	printf("enter battery percentage");
	scanf("%f" , &battery);
	
	if(battery< 20){
		printf("LOW");
	}
	
	else if (battery < 40){
		printf("NORMAL");
	}
	
	else{
		printf("FULL\n");
	}
	
	
	
	return 0;
}
