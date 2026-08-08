#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    ofstream A_out("this.txt");
    string st;
    cout << "Enter your name: " << endl;
    getline(cin,st);
    A_out<<st;
    A_out.close();
    ifstream A_in("this.txt");
    string content ;
    getline(A_in,content);

    cout << "Solar energy is clean and renewable power captured from sunlight using "
         "photovoltaic cells or solar thermal systems.\n"
         "India ranks among the top global leaders in solar capacity growth,\n"
         "driving massive expansions through national programs and local installations."
         << endl;
    cout << "-" <<content<< endl;
    A_in.close();
    return 0;
}