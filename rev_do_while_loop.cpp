#include<iostream>
using namespace std;
int main(){
    int num  = 906,rem;
    do
    {
        if (num == 0)
        {
            break;
        }
        else{
        rem = num%10;
        cout<<rem;
        num /= 10;   
        }
    }while(num!=0);
    return 0;
}