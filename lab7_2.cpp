#include <iostream>
#include<string>
using namespace std;

int main() {
    int s,sc;
    string name,movie,time,word;
    
    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
    getline(cin,name);
    cout <<"?????: ";
    cout << "Fahsai: Wow!!! " << name << " is a really cool name.\n";
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
    cout << name << ": ";
    cin >> s;
    sc = (s/10000000)-12;
    cin.ignore();
    cout << "Fahsai: I think you may be GEAR " << sc << ". I have a free movie ticket for you.\n";
    cout << "Fahsai: Let's go to the cinema together!!!\n";
    cout << "Fahsai: What movie do you want to watch?\n"<< name;
    getline(cin,movie);
    cout << ": Fahsai: So....which day are you free to go with me?\n"<< name;
    getline(cin,time);
    cout << ": Fahsai: "<< time <<"....that is OK!!! I'm looking forward to watching "<< movie <<" with you.\n"<< name;
    getline(cin,word);
    cout << ": Fahsai: 555+ see you " << time << ". Bye Bye \\(^ ^)/";
    return 0;
}
