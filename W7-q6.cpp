#include<iostream>
using namespace std;
void rev(int x,int y)
{
 int d;//variable to store the digits
 if(x==0) //checking whether the number has reached zero
 cout<<y/10<<endl; //printing the reverse 
 else
 {
 d=x%10; //assinging a digit to d
 y=y+d; //y is now multiplied by 10 so when the new digit is added it will appear in reverse order
 rev(x/10,y*10); //calling the function again
 }
}
int main()
{
 int a;//declaring variable to store the number
 cout<<"Enter the number whose revese you need";//printing the instruction
 cin>>a;//receving the number
 rev(a,0);//calling the function
 return 0;
}
