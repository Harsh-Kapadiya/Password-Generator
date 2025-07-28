#include<iostream>
#include<ctime>
#include<cstdlib>
#include<string>
using namespace std;
int main(){
    string password = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!@#$%&*()/*";
    cout << "Your new protected password is: ";
    srand(time(0));
    for (int i=0; i < 16; i++){
        cout << password[rand() % password.length()];
    }
    cout << endl;
    return 0;
}
