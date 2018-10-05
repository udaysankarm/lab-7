#include<iostream>
using namespace std;
int fun(int p,int q)//declaring the function with 2 variables the function
{
 if(q==0) //condition to check till when do we need to multiply
 return 1; //retruning the int 1
 else 
 return p*fun(p,q-1);/*necessary operation to find the power we will multipply the number x which here is p with itself till q decreases till 0*/

}
int main()//main function
{
 int x,y,A; //declarinfg the variables
 cout<<"\ninput the number whose some power is needed";/*instruction to the user to input the numbers*/
 cin>>x; //receving the variables
 cout<<"\nenter the number to be which the above given number is to be raised"; /*getting the inputs*/
 cin>>y;//receving the variable
 A=fun(x,y); //calling the function
 cout<<"\n the Answer ="<<A<<endl; //printing the result
 return 0;
}
