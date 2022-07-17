#include <iostream>

using namespace std;

int main()
{
/*Question no 1:(Comparing Integers) Write a program that asks the user to enter two integers, obtains the
numbers from the user, then prints the larger number followed by the words “is larger.” If the numbers are equal,
print the message “These numbers are equal.” Use only the single-selection form of the if statement you learned in
this chapter.*/
int num1 ,num2;
cout<<"enter the numbers "<<endl;
cin>>num1;
cin>>num2;
if(num1>num2){
    cout<<num1<<" is greater than "<<num2<<endl;
}
else {cout<<num1<<" is not greater than "<<num2<<endl;
}

    if(num1==num2){
    cout<<num1<<" is equal to "<<num2<<endl;

}
else{
        cout<<num1<<"is not equal to "<<num2<<endl;
}

/*(Arithmetic, Largest Value and Smallest Value) Write a program that inputs three different
integers from the keyboard, then prints the sum, the average, the product, the smallest and the largest of these
numbers. Use only the single-selection form of the if statement you learned in this chapter. The screen dialogue
should appear as follows:*/
float num1,num2,num3;//declare three integers
float average,sum,product;//declare sum,product,average
cout<<"enter the numbers"<<endl;//cout statement of entering numbers
cin>>num1;//input number 1
cin>>num2;//input number 2
cin>>num3;//input number 3
sum=num1+num2+num3;//expression for sum of numbers
average=(num1+num2+num3)/3;//expression for average of numbers
product=num1*num2*num3;//expression for product of numbers
cout<<" Sum = "<<sum<<endl;//print the sum
cout<<"Average = "<<average<<endl;//print the average
cout<<"Product = "<<product<<endl;//print the product
if(num1<=num2&&num1<=num3){//apply condition num1 is smallest when it is less than num2,num3
    cout<<num1<<" is the smallest number"<<endl;//print the condition
}
if (num1>=num2&&num1>=num3){
    cout<<num1<<"is largest number"<<endl;
}
if(num2<=num1&&num2<=num3){
    cout<<num2<<" is the smallest number"<<endl;
}
 if(num2>=num1&&num2>=num3) {
    cout<<num2<<" is the largest number"<<endl;
}
if(num3<=num1&&num3<=num2){
    cout<<num3<<" is the smallest number"<<endl;
}
if (num3>=num1&&num3>=num2) {
    cout<<num3<<" is the largest number"<<endl;
}


/*(Odd or Even) Write a program that reads an integer and determines and prints whether it’s odd
or even. [Hint: Use the remainder operator. An even number is a multiple of two. Any multiple of two leaves a
remainder of zero when divided by 2.]
int num;*/
cout<<"enter the number "<<endl;
cin>>num;
if(num%2==0)
{
    cout<<num<<" is an even number "<<endl;

}
else {
    cout<<num<<" is an odd number "<<endl;
}
/*Question 4: (positive or Negative) Write a program that reads an integer and determines and prints whether
it’s positive or negative.*/
int num;
cout<<"enter the number "<<endl;
cin>>num;
if(num<0){
    cout<<num<<" is negative number "<<endl;

}
else{
    cout<<num<<" is positive number "<<endl;
}


 return 0;
}
