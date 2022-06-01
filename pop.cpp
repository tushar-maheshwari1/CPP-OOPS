#include<iostream>

using namespace std;

int main(){

    int animalType;
    int animalAge;
    string animalColor;
    string animalSound;

    //Q1 Type of animal

    cout<<"What is the type of animal?"<<endl;
    cout<<"1) Dog\n2) Fish\n3) Bird\n4) Cat\n"<<endl;
    cout<<"Enter Your Choice\n";
    cin>>animalType;

    //Q2 Color of animal

    if(animalType==1){
        string colorList[] = {"Black","White","Brown","Grey"};
        int colorChoice;
        cout<< "What is the color of animal?\n";
        cout<<"1) Black\n2) White\n3) Brown\n4) Grey\n";
        cout<<"Enter Your Choice\n";
        cin>>colorChoice;
        animalColor = colorList[colorChoice-1];
       
        }
    
    else if(animalType == 2){
        string colorList[] = {"Black","White","Golden"};
        int colorChoice;
        cout<< "What is the color of animal?\n";
        cout<<"1) Black\n2) White\n3) Golden\n";
        cout<<"Enter Your Choice\n";
        cin>>colorChoice;
        animalColor = colorList[colorChoice-1];
       
        }
    else if(animalType==3){
        string colorList[] = {"Black","White","Red","Blue"};
        int colorChoice;
        cout<< "What is the color of animal?\n";
        cout<<"1) Black\n2) White\n3) Red\n4) Blue\n";
        cout<<"Enter Your Choice\n";
        cin>>colorChoice;
        animalColor = colorList[colorChoice-1];
       
    }
    else if(animalType==4){
        string colorList[] = {"Black","White","Brown"};
        int colorChoice;
        cout<< "What is the color of animal?\n";
        cout<<"1) Black\n2) White\n3) Brown\n";
        cout<<"Enter Your Choice\n";
        cin>>colorChoice;
        animalColor = colorList[colorChoice-1];
        
    }
    else{
        cout<<"Invalid input\n";
    }
    
    
    
    //Q3 Age of animal

    cout<<"What is age of animal\n";
    cin>>animalAge;

    //Printing Data
    cout<<"Animal Type: ";
    cout<<animalType<<endl;
    
    cout<<"Animal Color: ";
    cout<<animalColor<<endl;
    
    cout<<"Animal Age: ";
    cout<<animalAge<<endl;


    return 0;
}

