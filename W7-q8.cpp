#include<iostream>
using namespace std;
int Dsum(int x,int y)//declaring the function here x stores the number and y stores the sum
{ 
 int d;//variable to store each digit
 
 if(x==0) //condition to check whether the number has at least one digit
 cout<<y; //printing the sum of digits 
 else
 {
  d=x%10; //getting each digit
  y=d+y; //adding the digit to sum
  Dsum(x/10,y); //calling the function to find the other digits
 }
}
int main()
{
 int a;//declaring the variable
 cout<<"Enter the number whose sum digits you need to find";//instruction to the user
 cin>>a;//receving the variable
 Dsum(a,0);//calling the function
 return 0;
}
