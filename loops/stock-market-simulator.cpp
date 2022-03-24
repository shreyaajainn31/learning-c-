#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    float interest;
    float principle = 10000;
    float rate = 0.01;
    int days = 7;
    
    for(int day = 1; day <= days; day++){
        interest = (principle * pow(1+rate, day));
        cout<<"Interest at day "<<day<<" is "<< interest<<endl;
    }
    
    return 0;
}
