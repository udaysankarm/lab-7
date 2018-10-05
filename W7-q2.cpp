#include<iostream>
using namespace std;
void nat(int n)//here nat is the function to print all the numbers from 1 to a
{

if(n>0) //condition to ascertain that the number has not reached zero
 {
  cout<<n<<endl; //printing the number 
  nat(n-1); //calling the same function with argument one less that the current number
 }

}
int main()
{
 int a; //declaring the variable which store the number 
 cout<<"\nenter the number all the numbers from 1 to that number will be displayed"; /*instruction to the user to input the number */
 cin>>a;//receving the number
 cout<<endl;
 nat(a);//calling the function to print the natutal numbers
 return 0;
}
