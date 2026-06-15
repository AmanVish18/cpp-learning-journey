#include<iostream>
using namespace std;

int main()
{
cout << "Welcome in my calculator 🤌🏻❤️" << endl;
    cout << endl;
    
  double a,b;
  cin >>a;
  char op;
  cin>>op;
  cin >>b;
switch (op){
      case('+'):{
      cout <<a+b<< endl;
      break;
  }

      case('-'):{
      cout <<a-b<< endl;
      break;
  }

      case('*'):{
       cout <<a*b<< endl;
       break;
  }

      case('/'):{
      if(b==0)
      cout <<"Error:division by zero!!"<< endl;
     else 
       cout <<a/b<< endl;
       break;
  }
  default:
  {   cout << " Invalid Operator" << endl;
  }}
    
    return 0;
}
Added calculator project using switch case