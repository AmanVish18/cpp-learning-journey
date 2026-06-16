#include<iostream>
using namespace std ;
//use of inline
inline int mod(int a,int b){
if(b == 0)
{
   cout << "Modulus by zero error!" << endl;
        return -2;
}

if(a < b)
 {
   cout << "Take bigger value of a!!" << endl;
        return -1;
}

    return a % b;
}
int main(){
int a,b;

cout <<"enter the value of a: "<< endl;
cin >> a;
cout << "enter the value of b: " << endl;
cin >> b;
int ans=mod(a,b);
if(ans==-1){
return 0;}
else if(b==0){
return 0;
}
else{
cout <<"your answer: "<<ans<< endl;
cout <<"your answer: "<<(ans+1)<< endl;
cout <<"your answer: "<<(ans+2)<< endl;
cout <<"your answer: "<<(ans+3)<< endl;
}
return 0 ;
}
