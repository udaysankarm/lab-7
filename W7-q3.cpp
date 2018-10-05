#include<iostream>
using namespace std;
void oddR(int a,int b)//function to print odd numbers in the range
{
 if(a<=b) //condition to ascertain that the number we print is not greater than the upper limit
 {
	 if(a%2==1) //condition to check whether the number is odd
   {
	  cout<<a<<"\t"; //printing the number and leaving a space left
   }
   oddR(a+1,b); //calling our function again 
 }
}
void evenR(int a,int b)//function to print even numbers in the range
{
 if(a<=b)//condition to ascertain that the number we print is not greater than the upper limit
 {
	 if(a%2==0)//condition to check whether the number is even
   {
	  cout<<a<<"\t";//printing the number and leaving a space left
   }
   evenR(a+1,b);//calling our function again
 }
}
int main()
{
 int x,y,c;//declaring the variables
 cout<<"\nEnter the range(lower limit first then upper limit) ";//instruction to the user
 cin>>x>>y; //receving the variables
 cout<<"\nIf you want to print odd numbers in the range press 1 \nIf you want to print even in the range press 2:";/*asking the user what to print even or odd*/
 cin>>c; //receving the variable to ascertain what to print
 cout<<endl;//
 if(c==1) //checking whether to print odd
 oddR(x,y); //calling the function to print odd numbers
 else if(c==2) //checking whether to print even
 evenR(x,y);//calling the function to print even numbers
 else
 cout<<"\nplease enter either 1 or 2";
 return 0;
}
