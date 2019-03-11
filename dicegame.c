#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int zarAt(){
	int zar1=0;
	int zar2=0;
	int toplam=0;
	zar1=(rand()%6);
	zar2=(rand()%6);
	if (zar1==0){
		zar1=1;
	}
	if (zar2==0){
		zar2=1;
	}
	toplam=zar1+zar2;
	return toplam;
}
void main(){
	printf("The Game Created By @ahmetbrkka\n");
	srand(time(NULL));
	int random=zarAt();
	if(random>6){
		printf("congrats you won!");
	}
	else{
		printf("what a shame, try again!");
	}
	printf("\nyour dice is %d\n",random);
}