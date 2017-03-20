#include "lab1.h"       //includ "lab1.h"
lab1::lab1(int n){      //use class lab1 in lab1.h
	a =n;           //set input parameter n to be variable a
}
int lab1::compute(){    //use method compute in class lab1
	
	if(a == 1)      /*if a is 1, the program must stop, so set a to be 0 to jump out of the loop.*/
		{
			a = 0;
		}
	else if(a%2 == 1)   /*algorithm of the lab1*/
		{	
		a = 3*a + 1;
		}
	else
		{
		a = a / 2;
		}
		return a; //after the algorithm return value of a
	
}

int main()
{
	int b;
	std::cin >>b;  //input variable
	lab1 s(b);
	
	std::cout<<b<<" "; //print out the initial value
		do{   //loops until b to be 1
		
		std::cout<<s.compute()<<" "; 
		b = s.a;
	}while(b !=1);
	
	return 0;
	
 } 
