#include<iostream>
using namespace std;
int SoddR(int a,int b)//function to print odd numbers in the range
{
 if(a<=b) //condition to ascertain that the number is not greater than the upper limit
 {
  if(a%2==1) //checking whether the number is odd
  return a+SoddR(a+2,b); //adding current a with retrun value of the function with argument next odd number and upper limit
  else
  {
	 SoddR(a+1,b); //if the given number is not odd the next number is given as the argument(this will be a odd number)
	}
 }
 else
 return 0;
}
/*for the above function case 1: if the first number in the range is odd then first 2nd if is excecuted and the only odd numbers will come as arguments int first position the 2nd if is excecuted always
 case 2:if the first number is even then the else if excecuted this will give the next odd number then the just like in the first case only odd number come as first argument in the function and the 2nd if exceuted always till the end */
int SevenR(int a,int b)//function to print even numbers in the range
{
 if(a<=b) //condition to ascertain that the number is not greater than the upper limit
 {
  if(a%2==0)//checking whether the number is even
  return a+SevenR(a+2,b); // adding current a with value of function with argument thenext odd number and upper limit
  else
  {
	 SevenR(a+1,b); //if the given number is even the first argument is incremented by 1(this will be a even number)
	}
 }
 else
 return 0;
 
}
int main()
{
 int x,y,c;//declaring the variables
 cout<<"\nEnter the range(lower limit first then upper limit) ";//instruction to the user
 cin>>x>>y; //receving the variables
 cout<<"\nIf you want to print sum of odd numbers in the range press 1 \nIf you want to print sum of evens in the range press 2\n:";/*asking the user what to print even or odd*/
 cin>>c; //receving the variable to ascertain what to print
 cout<<endl;//
 if(c==1) //checking whether to print sum of odd numbers
 cout<<"\nThe sum of all odd numbers in the range is:"<<SoddR(x,y); /*calling the function and printing the sum of odd numbers*/
 else if(c==2) //checking whether to print sum of  evennumbers
 cout<<"\nThe sum of all even numbers in the range is:"<<SevenR(x,y);/*calling the function and  printing the sum of even numbers*/
 else
 cout<<"\nplease enter either 1 or 2";
 return 0;
}
