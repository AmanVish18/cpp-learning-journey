#include<iostream>
using namespace std ;
//default argument 
float forsure(float money,float factor=1.08){
   return money*factor ;
}
int main(){
cout << "Enter your investing price!!" << endl;
float a;
cin >>a;
      cout << "if you invest: $" <<a<<", you will get return rate: " <<forsure(a)<<endl;

      cout << "but for VIP : $" <<a<<", they will get return rate: " <<forsure(a,1.20)<<endl;
return 0 ;
}
