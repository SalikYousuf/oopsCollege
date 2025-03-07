#include<iostream>
using namespace std;

int main(){

    int input,ans;
    cout<<"Enter number: "<<endl;
    cin>>input;
    for (int i = 1; i <= 30; i++)
    {
        ans = input*i;
        if (ans<10)
        {
            cout<<"    ";
        }
        else if (ans<100)
        {
            cout<<"   ";
        }
        else if (ans<1000)
        {
            cout<<"  ";
        }
        else cout<<" ";
        
        cout<<ans;
        if (i%10==0)
        {
            cout<<"\n";
        }
        
    }
    
    return 0;
}

