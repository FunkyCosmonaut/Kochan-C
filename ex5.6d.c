#include <stdio.h>

int main(void){

	int fullnumber;
	int nextnumber;
	int usednumber;
	int placevalue;
	int state = 1;
	int reconstruction;
	int tempnumber;

//PLACEVALUE SYSTEM WORKS FINE


	do{
	//Initializing/re-initializing program, resetting states, awaits input, splits input
		scanf("%i", &fullnumber);
		usednumber = fullnumber;
		nextnumber = fullnumber;
		placevalue = 1;
		reconstruction = 0;



		//End of set/reset^^^^^
	
		while(reconstruction != fullnumber){


		//vvvvv Isolates the next digit and determines place value
	
			while(usednumber > 9){
				usednumber = usednumber / 10;
				placevalue = placevalue * 10;
			}
		//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
		reconstruction = reconstruction + (usednumber * placevalue);
		nextnumber = nextnumber - reconstruction;
		usednumber = nextnumber;
		printf("%i\n", reconstruction);
		}
	












	}
	while(state != 0);
}
