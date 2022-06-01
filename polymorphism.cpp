#include<iostream>
#include<string.h>
using namespace std;

class Animal{
    protected:
        string animalType;
        string animalSound;
        string animalColor;
        int animalAge;
    
    public:

        void property(){
            cout<<"Its an animal by nature\n";
        }
        void getAgeFromUser(){
            cout<<"What is age of animal\n";
            cin>>animalAge;
        }
        void showDetails(){
            cout<<"Animal Type: ";
            cout<<animalType<<endl;
            
            cout<<"Animal Color: ";
            cout<<animalColor<<endl;
            
            cout<<"Animal Age: ";
            cout<<animalAge<<endl;

            cout<<"Animal Sound: ";
            cout<<animalSound<<endl;
        }

        virtual void getColorFromUser(){}                   //Virtual Function
};

class Dog: public Animal{
    private:
        string colorList[4] = {"Black","White","Brown","Grey"};

    public:
        Dog(){
            animalType = "Dog";
            animalSound = "Bhow Bhow";
        }
        
        void property(){
            cout<<"Dog is a loyal pet.\n";
        }

        void getColorFromUser(){
            int colorChoice;
            cout<< "What is the color of animal?\n";
            cout<<"1) Black\n2) White\n3) Brown\n4) Grey\n";
            cout<<"Enter Your Choice\n";
            cin>>colorChoice;
            animalColor = colorList[colorChoice-1];
        }       
};
class Cat: public Animal{
    private:
        string colorList[3] = {"Black","White","Brown"};
    public:
        Cat(){
            animalType = "Cat";
            animalSound = "Meow Meow";
        }
        void property(){
            cout<<"Cat is a intelligent pet.\n";
        }
        void getColorFromUser(){
            int colorChoice;
            cout<< "What is the color of animal?\n";
            cout<<"1) Black\n2) White\n3) Brown\n";
            cout<<"Enter Your Choice\n";
            cin>>colorChoice;
            animalColor = colorList[colorChoice-1];
        }

};
class Bird: public Animal{
    private:
        string colorList[4] = {"Black","White","Red","Blue"};

    public:
        Bird(){
            animalType = "Bird";
            animalSound = "Chirp Chirp ";
        }
        void property(){
            cout<<"Bird is a Beautyful pet.\n";
        }
        void getColorFromUser(){
            int colorChoice;
            cout<< "What is the color of animal?\n";
            cout<<"1) Black\n2) White\n3) Red\n4) Blue\n";
            cout<<"Enter Your Choice\n";
            cin>>colorChoice;
            animalColor = colorList[colorChoice-1];
        }

};
class Fish: public Animal{
    private:
        string colorList[3] = {"Black","White","Golden"};
    public:
        Fish(){
            animalType = "Fish";
            animalSound = "Purrs Purrs";
        }
        void property(){
            cout<<"Fish is a cute pet.\n";
        }
        void getColorFromUser(){
            int colorChoice;
            cout<< "What is the color of animal?\n";
            cout<<"1) Black\n2) White\n3) Golden\n";
            cout<<"Enter Your Choice\n";
            cin>>colorChoice;
            animalColor = colorList[colorChoice-1];
        }
};
int main(){
    int animalType;
    cout<<"What is the type of animal?"<<endl;
    cout<<"1) Dog\n2) Cat\n3) Bird\n4) Fish\n"<<endl;
    cout<<"Enter Your Choice\n";
    cin>>animalType;

    Animal *objpointer[4];
    
    if(animalType == 1){
    Dog objDog;
    objpointer[0]=&objDog;
    objDog.property();
    //objDog.getColorFromUser();
    objpointer[0]->getColorFromUser();
    objDog.getAgeFromUser();
    objDog.showDetails();
    }
    else if(animalType == 2){
    Cat objCat;
    objpointer[1]=&objCat;
    objCat.property();
    //objCat.getColorFromUser();
    objpointer[1]->getColorFromUser();
    objCat.getAgeFromUser();
    objCat.showDetails();
    }
    else if(animalType == 3){
    Bird objBird;
    objpointer[2]=&objBird;
    objBird.property(); 
    //objBird.getColorFromUser();
    objpointer[2]->getColorFromUser();
    objBird.getAgeFromUser();
    objBird.showDetails();
    }
    else if(animalType == 4){
    Fish objFish;
    objpointer[3]=&objFish;
    objFish.property();
    //objFish.getColorFromUser();
    objpointer[3]->getColorFromUser();
    objFish.getAgeFromUser();
    objFish.showDetails();
    }
    else{
        cout<<"Invalid Input";
    }
    Animal objAnimal;
    objAnimal.property();
    return 0;
}