#include<iostream>
using namespace std;
void HCF(int a,int b,int k) /*function to find hcf. first 2 variables are used to transport the 
 numbers(whose hcf has to be found). On every excecution
 the third variable is ckecked whether it is a common factor */
{
	if((a%k==0)&&(b%k==0))//here the reminder on division by k is checked if it is equal to zero the k is printed
	cout<<k; //printing the hcf
	else
	HCF(a,b,k-1);//function is again called with the variable k decremented by 1
	/*the value for k goes on decreasing from the smallest number among the given two numbers thus when the first time the number becomes a factor both the
	 numbers it is printed this will hcf sice k starts from the higest possible value for an hcf */
}
int main()
{
	int x,y,p; /*first 2 variables are used to denote the  numbers whose hcf has to be found the third number is the control variable
	 it is used to given the smallest of two numbers to the function */
 	cout<<"\n enter two numbers whose HCF is needed"; //instruction to the user
	cin>>x>>y;//receving the numbers
	if(x>y) /*the smallest number is ascertained and given to p */
	p=y;
	else
	p=x; /*if y is not smaller number then x is either the smaller of both are equal
	(both these cases are equal for us since this difference doesn't interfere with our program)*/
	HCF(x,y,p);//fuction call
	return 0;
	/*in the fuction each timek is checked whether it is a factor or not p is used to give k its initial value
	(which is the smaller number of the given 2 numbers since HCF will always be less than or equal to the smallest number )*/
}
