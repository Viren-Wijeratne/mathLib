#include <stdio.h>
#include <math.h>
#define PI 3.141592

double findSin(char RadOrDeg);
double findCos(char RadOrDeg);
double findTan(char RadOrDeg);

int main(){
	printf("*****This is math program to get sin/cos/tan values out of radians or in degress *****\n");

	printf("Do you want to work with radians/degrees (r/d)? : ");
	char RadOrDeg;
	scanf("%c", &RadOrDeg);

	printf("What do you want to calculate sin/cos/tan (s/c/t)? : ");
	char operation;
	scanf(" %c", &operation); 	//The space " %c" is essential to negate any extra charaters coming from the above scanf()


	if(RadOrDeg == 'r'){
		switch(operation){
			case 's':
				printf("sin value: %lf\n", findSin(RadOrDeg));
				break;

			case 'c':
				printf("cos value: %lf\n", findCos(RadOrDeg));
				break;

			case 't':
				printf("tan value: %lf\n", findTan(RadOrDeg));
				break;

			default :
				break;
		}

}


	else if(RadOrDeg == 'd'){
		switch(operation){
			case 's':
				printf("sin value: %lf\n", findSin(RadOrDeg));
				break;

			case 'c':
				printf("cos value: %lf\n", findCos(RadOrDeg));
				break;

			case 't':
				printf("tan value: %lf\n", findTan(RadOrDeg));
				break;

			default :
				break;
		}
}


	else {printf("User Error. Try Again!");
		return 1;
	}


return 0;
}



double findSin(char RadOrDeg){

//Gets the sin value store in num, check if "RadOrDeg == r/d" ==> if 'r' direct use of sin() ==> if 'd' first convert to radians then use sin() ==> both outputs answer in radians

	printf("Enter a number to find its sin value: ");
	double num;
	scanf("%lf", &num);

	if(RadOrDeg == 'd'){
		//radians = degrees * (PI/180)
		double numRad = num * (PI / 180);
		double sinRad = sin(numRad);
		//double sinDeg = sinRad * (180 / PI);
		return sinRad;
	}
	else if(RadOrDeg == 'r'){
		double sinVal = sin(num);
		return sinVal;
	}
}

double findCos(char RadOrDeg){

//Gets the cos value store in num, check if "RadOrDeg == r/d" ==> if 'r' direct use of cos() ==> if 'd' first convert to radians then use cos()

	printf("Enter a number to find its cos value: ");
	double num;
	scanf("%lf", &num);

	if(RadOrDeg == 'd'){
		//radians = degrees * (PI/180)

		double numRad = num * (PI / 180);
		double cosRad = cos(numRad);
		//double cosDeg = cosRad * (180 / PI); //If needed the answer in degrees
		return cosRad;
	}
	else if(RadOrDeg == 'r'){
		double cosVal = cos(num);
		return cosVal;
	}
}

double findTan(char RadOrDeg){

//Gets the tan value store in num, check if "RadOrDeg == r/d" ==> if 'r' direct use of tan() ==> if 'd' first convert to radians then use tan()

	printf("Enter a number to find its tan value: ");
	double num;
	scanf("%lf", &num);

	if(RadOrDeg == 'd'){
		//radians = degrees * (PI/180)

		double numRad = num * (PI / 180);
		double tanRad = tan(numRad);
		//double tanDeg = tanRad * (180 / PI); //If needed the answer in degrees
		return tanRad;
	}
	else if(RadOrDeg == 'r'){
		double tanVal = tan(num);
		return tanVal;
	}
}




