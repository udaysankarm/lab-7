#include<iostream>
using namespace std;
int fact(int x)//declaring the function
{
 if(x==1)/*we need to prevent the fuction from going on and on we stoop the recursion when x becomes 1 in the function*/
 return 1;//returning 1 not alter the multiplication
 else 
 return x*fact(x-1); //multiplying our number with sereies of numbers before it
}
int main()
{
 int a;//declaring the variable
 cout<<"\nInput number whose factorial you need to find";//instruction to the user
 cin>>a;//receving the number
 cout<<"\nthe factorial of the number is:"<<fact(a);//result calling the function and printing the return value of the function
 return 0;
}
