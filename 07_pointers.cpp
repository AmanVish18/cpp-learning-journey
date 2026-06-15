#include<iostream>
using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    cout<<endl;
   // pointer
  int x=2;
  int* y=&x;
  cout << "the adress of x is: " <<y<< endl;
  cout << "the adress of y is: " <<&x<< endl;
  cout << "the valse at adress y: " <<*y<< endl;
  //pointer to pointer
  int** c=&y;
  
  cout << "the adress of y is: " <<&y<< endl;
 cout << "the adress of y is: " <<c<< endl;
cout << "the value at adress  of y is: " <<*c<< endl;
cout << "the valse at (adress of (y)) is: " <<**c<< endl;
  
  
    return 0;
}
Added pointers and pointer-to-pointer practice