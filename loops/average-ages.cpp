#include <iostream>

using namespace std;

int main()
{
    int numberOfPeople;
    int sumOfAges = 0;
    int age;
    
    cout<<"Enter total number of people:"<<endl;
    cin>>numberOfPeople;
    
    cout<<"Enter their ages:"<<endl;
    
    for(int i = 0; i<numberOfPeople; i++){
        cin>>age;    
        sumOfAges += age;
    }
    
    cout<<"Their average age is: "<< sumOfAges/numberOfPeople;
    
    

    return 0;
}
