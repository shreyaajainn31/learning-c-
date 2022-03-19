#include <iostream>

using namespace std;

class myClass{
  
  public:
    
    myClass(string x){
        setName(x);
    }
    
    void setName(string name){
        this->name= name;
    }
    
    string getName(){
        return name;
    }
  
  private:
    string name;
    
};

int main()
{
    
    myClass obj("Shreya");
    
    //obj.setName("Shreya");
    cout<<obj.getName();
    return 0;
}
