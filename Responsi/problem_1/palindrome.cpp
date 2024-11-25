#include <iostream>
using namespace std;

int main() {
    cout<<"Palindrome Check"<<endl;
    cout<<"================"<<endl;
    
    int numbers;
    int original; 
    int temp = 0;
    original=numbers;
    
    cout<<"Enter the numbers to check : ";
    cin>>numbers;
    
    while(numbers>0){
        temp = (temp*10) + (numbers%10);
        numbers = numbers/10;
    }
    cout<<"The palindrome result : "<<temp;
    cout<<endl;
    
    if(temp == original){
        cout<<"Yes! It's palindrome";
    }else{
        cout<<"No, It's not palindrome";
    }
    cout<<endl;
    return 0;
}
