#include <iostream>

using namespace std;

int main()
{
    int x = 0;
    
    int sum = 0;
    int number;
    cout<<"Enter five numbers to get sum of:"<<endl;
    while(x < 5){
        cin>>number;
        sum+=number;
        x++;
    }
    
    cout<<"The sum of these numbers is: "<<sum;

    return 0;
}
