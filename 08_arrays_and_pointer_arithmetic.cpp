#include<iostream>
using namespace std;

int main()
{
    cout << "yahhh boyyy!!!!" << endl;
    cout << endl;
    //Exapple of arrays 
int marks[8]={98,56,87,59,89,99,87,78};
  
/*cout << "Marks of our students." << endl; 
cout  << endl;
   cout << "Roshan: " <<marks[0]<< endl;
   cout << "Roshani: " <<marks[1]<< endl;
   //you can also change the value of certain one
   marks[2]=97;
   cout << "Roshanlal: " <<marks[2]<< endl;
   cout << "Roshandas: " <<marks[3]<< endl;
cout  << endl;
cout << "Roshan🥇 and Roshanlal🥈 are our toppes :🏆" << endl;
 
 for(int i=0;i<8;i=i+1){
 cout << "The marks of students number " <<i+1<<":"<<endl;   
 cout <<marks[i]<<"."<< endl;}*/
 //pointer Arithmetic and arrays 
 int* p=marks;
 int i=1;
 while(i<9){
 cout << "the adress of marks["<<i++<<"] : "<<*(p++)<< endl;
 }
return 0;
}
Added arrays and pointer arithmetic practice