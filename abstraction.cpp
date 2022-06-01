#include<iostream>
#include<string.h>
using namespace std;

class Dog{
    private:
        string animalType = "Dog";
        string animalSound = "Bhow Bhow";
        int animalAge;
        string animalColor;

        string colorList[4] = {"Black","White","Brown","Grey"};
    public:
        void getColorFromUser(){
            int colorChoice;
            cout<< "What is the color of animal?\n";
            cout<<"1) Black\n2) White\n3) Brown\n4) Grey\n";
            cout<<"Enter Your Choice\n";
            cin>>colorChoice;
            animalColor = colorList[colorChoice-1];
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
};
class Cat{
    public:
        string animalType = "Cat";
        string animalSound = "Meow Meow";
        int animalAge;
        string animalColor;

        string colorList[3] = {"Black","White","Brown"};

        void getColorFromUser(){
            int colorChoice;
            cout<< "What is the color of animal?\n";
            cout<<"1) Black\n2) White\n3) Brown\n";
            cout<<"Enter Your Choice\n";
            cin>>colorChoice;
            animalColor = colorList[colorChoice-1];
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
};
class Bird{
    public:
        string animalType = "Bird";
        string animalSound = "Chirp Chirp ";
        int animalAge;
        string animalColor;

        string colorList[4] = {"Black","White","Red","Blue"};

        void getColorFromUser(){
            int colorChoice;
            cout<< "What is the color of animal?\n";
            cout<<"1) Black\n2) White\n3) Red\n4) Blue\n";
            cout<<"Enter Your Choice\n";
            cin>>colorChoice;
            animalColor = colorList[colorChoice-1];
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
};
class Fish{
    public:
        string animalType = "Fish";
        string animalSound = "Purrs Purrs";
        int animalAge;
        string animalColor;

        string colorList[3] = {"Black","White","Golden"};

        void getColorFromUser(){
            int colorChoice;
            cout<< "What is the color of animal?\n";
            cout<<"1) Black\n2) White\n3) Golden\n";
            cout<<"Enter Your Choice\n";
            cin>>colorChoice;
            animalColor = colorList[colorChoice-1];
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
};
int main(){
    int animalType;
    cout<<"What is the type of animal?"<<endl;
    cout<<"1) Dog\n2) Cat\n3) Bird\n4) Fish\n"<<endl;
    cout<<"Enter Your Choice\n";
    cin>>animalType;

    if(animalType == 1){
    Dog objDog;
    objDog.getColorFromUser();
    objDog.getAgeFromUser();
    objDog.showDetails();
    }
    else if(animalType == 2){
    Cat objCat;
    objCat.getColorFromUser();
    objCat.getAgeFromUser();
    objCat.showDetails();
    }
    else if(animalType == 3){
    Bird objBird;
    objBird.getColorFromUser();
    objBird.getAgeFromUser();
    objBird.showDetails();
    }
    else if(animalType == 4){
    Fish objFish;
    objFish.getColorFromUser();
    objFish.getAgeFromUser();
    objFish.showDetails();
    }
    else{
        cout<<"Invalid Input";
    }
    return 0;
}