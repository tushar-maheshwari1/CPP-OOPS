#include<iostream>
#include<string.h>
//#include<stdlib.h>

using namespace std;

class Person
{
    private:
    int pid;
    protected:
    string pname;
    char gen;
    public:
    int ppoints;
    Person(int id,string name,char gender){
        pid = id;
        pname = name;
        gen = gender;
    }
    Person(int id,string name){                     //Constructor overloading
        pid = id;
        pname = name;
    }
    Person(int points){
        ppoints = points;
    }

    void yourPoints(){
        cout<<"Your Points : "<<ppoints<<endl;
    }

    void operator+=(int hype){                      //Operator Overloading
        //ppoints = ppoints + hype;
        ppoints += hype;
    }

    void display()  
    {  
        cout<<pid<<"  "<<pname<<"  "<<gen<<endl;  
    }  
    
   
    void getName(string name){
        cout<<name<<endl;
    }
    
    void getName(string salutation,string name){        //Method Overloading
        cout<<salutation<<" "<<name<<endl;
    }
 
};


int main(){

    cout<<"\nConstructor Overloading...\n";
    Person objPerson1(1,"Tushar",'M'); 
    Person objPerson2(2,"Ram");
    objPerson1.display();
    objPerson2.display();

    cout<<"\n\n\nMethod Overloading...\n";
    objPerson1.getName("Tushar");
    objPerson1.getName("Mr.","Ram");

    cout<<"\n\n\nOperator Overloading...\n";
    Person objPerson3(1);
    objPerson3.yourPoints();
    objPerson3 += 1;
    objPerson3.yourPoints();

    return 0;
}
