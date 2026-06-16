#include<iostream>
using namespace std ;
//recursion 
/* if factorial(4)=4*factorial(3)
                  =4*3*factorial(2)
                  =4*3*2*factorial(1)
                  =4*3*2*1*
                  =24
                  */
/*  long long factorial(int n){
    if(n<=1){
       
       return 1;
  }
 
         return n*factorial(n-1);
  }
  */
  int fib(int n);
  
  int main(){
  int a;
    cout << "Enter the value!!!" << endl;
   
  cin >> a;
  cout << "your given value is "<<a <<" and nth term is "<<fib(a)<<endl;
  /* if(a < 0)
{
    cout << "Factorial of negative number not possible!" << endl;
    return -1;
} 
    else{
    cout << "The factorial of " <<a<<" is "<<factorial(a) <<endl; 
    
}*/
return 0;
}
//fibonacci sequence 
int fib(int n){
if(n<=1){
      
      return n;
}
      return fib(n-2)+fib(n-1);
}
