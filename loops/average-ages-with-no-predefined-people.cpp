#include <iostream>

using namespace std;

int main()
{
    int numberOfPeople=0;
    int sumOfAges = 0;
    int age;
    
    cout<<"Enter the age or -1 to quit:"<<endl;
    
    cin>>age;
    
    while(age != -1){
        
        sumOfAges += age;
        numberOfPeople++;
        cout<<"Enter the age or -1 to quit:"<<endl;
        cin>>age;
    }
    
    int average = 0;
    if(numberOfPeople != 0){
        cout<<"Average age is: "<< sumOfAges/numberOfPeople;
    }
    else{
        cout<<"Number of people were 0.";
    }
    
    return 0;
}
