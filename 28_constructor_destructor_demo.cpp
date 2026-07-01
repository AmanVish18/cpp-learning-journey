#include<iostream>
using namespace std ;

class num {
static int count;
public :
num() {
count++;
cout << "the time when contructor used " << count<<endl;
}
~num() {
cout << "the time when distructor used " <<count<< endl;
count--;
}
};
int num::count=0;
int main() {
cout << "entering in the main function" << endl;
num n1;
{   cout << "starting the block " << endl;
num n2,n3;
cout << "exiting the block " << endl;
}
cout << "back to the main function" << endl;
return 0;
}