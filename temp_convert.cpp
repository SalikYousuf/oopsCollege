#include<iostream>
using namespace std;



void celcius(float temp){
    float c = (temp - 32) * 5/9;
    cout<<c;
}
void fah(float temp){
    float f = temp * (9/5) + 32;
    cout<<f;
}



int main(){
    int input;
    float temp;

    cout<<"Enter\n1. Celcius\n2. Fahrenheit"<<endl;
    cin>>input;

    switch (input)
    {
    case 1:
        cout<<"Enter temp in fahrenheit: ";
        cin>>temp;
        celcius(temp);
        
        break;
    case 2:
        cout<<"Enter temp in celcius: ";
        cin>>temp;
        fah(temp);
        
        break;

    default:
        cout<<"Wrong input";
        break;
    }
}
