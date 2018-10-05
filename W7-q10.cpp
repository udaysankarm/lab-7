#include<iostream>
using namespace std;
void fibo(int x,int y,int c)//declaring the function 
{ if(c!=2) //condition to check the number of terms
 {
  cout<<x+y<<endl;//printing each term
  fibo(y,x+y,c-1); //calling the function to print the next term
 }
 else
 cout<<"finished\n";//ending of the sequence
}
int main()
{
 int i;//variable to store the number of terms
 cout<<"Enter number of terms do you need for the fibonacci";//instruction to user
 cin>>i;//receving the number of terms
 cout<<0<<endl<<1<<endl;//printing the first 2 terms sice this has to be fixed
 fibo(0,1,i);//calling the function
 return 0;
}
