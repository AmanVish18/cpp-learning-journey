#include<iostream>
using namespace std;
//arrays in class
class shop {

    int itemID[1000];
    int itemprice[1000];
    int counter;
public:
    void initcounter(void) {
        counter=0;
    }
    void setprice(void);
    void displayprice(void);
};
void shop:: setprice(void) {
    cout << "Enter Id of item no:" <<counter+1<< endl;
    cin >> itemID[counter];
    cout << "Enter price of item no :" <<counter+1<< endl;
    cin >> itemprice[counter];
    counter++;
}
void shop:: displayprice(void) {
    for(int i=0; i<counter; i=i+1)
    {
        cout << "The price of the itemID "<<itemID[i]<<" is :" <<endl;
        cout<<"₹"<<itemprice[i]<< endl;
    }

}

int main() {
    shop tapri;
    tapri.initcounter();
    int n;
    cout << "How many items do you want to enter? ";
    cin >> n;
    if(n>1000) {
        cout << "sorry maximum you can set the price of 1000 items.!!" << endl;
    }
    else {
        for(int a=0; a<n; a++) {
            cout << "Item no: " << a+1 << endl;
            tapri.setprice();
        }
    }

    tapri.displayprice();

    return 0;
}
Created a shop inventory system using arrays and classes in C++