#include<iostream>// including the library
using namespace std; 
//declaring the function
int Nsum(int x)
{
 if(x==0) //condition to terminate the function 
 { 
	return 0 ;//returing zero 
 }
 else
 return x+Nsum(x-1); /*adding the current x with the return value of the same function with argument x-1 */

}
int main()//main function 
{ 
 int a;//declaring the variable
 cout<<"ente a number (the sum all numbers from 1 to the given number will be displayed):";//insrtuction to the user to input the number
 cin>>a;//receving the number
 cout<<Nsum(a);//calling the function and printing it
 return 0;
}
