#include<iostream>
#include<string.h>
#include<fstream>
#include<stdlib.h>

using namespace std;
void loginFun();
void registrationFun();
void forgetFun();

int main(){
    int choice;

    cout<<"Press 1 for Login\n";
    cout<<"Press 2 for Registration\n";
    cout<<"Press 3 for Forget Password\n";
    cout<<"Press 4 for Exit\n";
    
    cout<<"Please enter your choice\n";
    cin>>choice;
    cout<<"\n";

    switch (choice)
    {
    case 1:
        loginFun();
        break;
    
    case 2:
        registrationFun();
        break;
    
    case 3:
        forgetFun();
        break;
    
    case 4:
        cout<<"Thanks..\n";
        break;
    
    default:
        cout<<"Wrong Choice, Select from the given options.\n";
        main();
    }
    return 0;
}
void loginFun(){
    int count=0;
    string username,password,valid_username,valid_password;

    cout<<"Enter your username and password\n";
    cout<<"\nUsername: ";
    cin>>username;
    cout<<"\nPassword: ";
    cin>>password;
    ifstream input("database.txt");

    while (input>>valid_username>>valid_password)
    {
        if (valid_username == username && valid_password == password)
        {
            count = 1;
        
        }
    }
    input.close();
    
    if (count == 1)
    {
        cout<<username<<" your login process is successfull\n";
        main();
    }
    else{
        cout<<"Wrong Credentials, Please check!\n";
        main();
    }
}

void registrationFun(){
    string rid,rpassword;
    cout<<"Enter username and password\n";
    cout<<"\nUsername: ";
    cin>> rid;
    cout<<"\nPassword: ";
    cin>> rpassword;
    ofstream f1("database.txt", ios::app);
    f1<<rid<<' '<<rpassword<<endl;
    cout<<"\nRegistration is successfull\n";
    main();

}

void forgetFun(){
    int option;
    string recoverusername, existingusername, existingpassword;
    int count = 0;
    cout<<"You can recover the password by press 1 \n";
    cout<<"For back to main menu press 2\n";
    cout<<"Enter you choice\n";
    cin>>option;
    ifstream f2("database.txt");
    switch (option)
    {
    case 1:
        
        cout << "Enter your username : \n";
        cin>>recoverusername;

        while (f2>>existingusername>>existingpassword)
        {
            if(existingusername == recoverusername){
                count=1;
            }
        }
        f2.close();
        if(count==1){
            cout<<"Congrates!! Your Account is found\n";
            cout<<"Your password is: "<<existingpassword<<endl;
            main();
        }
        else{
            cout<<"Wrong Username or Username is not exist in database\n";
            main();
        }
        break;
    case 2:
        {
            main();
        }
    default:
        cout<<"Wrong choice, Please select accordingly\n";
    }
}