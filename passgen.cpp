#include<iostream>
#include<algorithm>
#include<string>
#include<cstdlib>
#include<ctime>
#include<random>
using namespace std;

const string RESET = "\033[0m";
const string GREEN = "\033[32m";
const string BLUE = "\033[34m";
const string RED = "\033[31m";
const string YELLOW = "\033[33m";

void help(){
    cout<<"\nBASIC AND SIMPLE CLI BASED PASSWORD GENERATOR BY PRATIK!!!\nusage:\nbasic input: passgen -l <length> -m <mode>\nOPTIONAL ARGUMENTS:\n-l  OR  -length   length of password\n-m  OR  -mode   mode of password (0=only letters,1=random,2=alphanumeric)\nexample input: -l 10 -m 1";
}
void version(){
    cout<<"Program version:1.1\nGithub: https://github.com/ProgrammerPratik/passgen";
}
string password(int len, int mode){
    random_device rd;
    mt19937 gen(rd());
    string alph = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string chr = "!@#$%^&*()-_=+[]{}|;:'\",.<>?/`~\\";
    string num = "1234567890";
    string pass;
    while (len--) {
        switch (mode) {
            case 0: // Only letters
                pass += alph[gen() % alph.length()];
                break;
            case 1: // Random mode
                switch (gen() % 3) {
                    case 0:
                        pass += alph[gen() % alph.length()];
                        break;
                    case 1:
                        pass += chr[gen() % chr.length()];
                        break;
                    case 2:
                        pass += num[gen() % num.length()];
                        break;
                }
                break;
            case 2: // Letters and numbers
                switch (gen() % 2) {
                    case 0:
                        pass += alph[gen() % alph.length()];
                        break;
                    case 1:
                        pass += num[gen() % num.length()];
                        break;
                }
                break;
        }

    } return pass;
}


int main(int argc, char* argv[])
{
    cout<<"  _ __   __ _ ___ ___  __ _  ___ _ __  \n";
    cout<<" | '_ \\ / _` / __/ __|/ _` |/ _ \\ '_ \\ \n";
    cout<<" | |_) | (_| \\__ \\__ \\ (_| |  __/ | | |\n";
    cout<<" | .__/ \\__,_|___/___/\\__, |\\___|_| |_|\n";
    cout<<" |_|                  |___/            \n";
    if (argc == 1) {
        cout<<"-h for help\n";
        return 0;
    }
    for (int i = 1; i < argc; i++) {
        string arg = argv[i];
        
        if (arg == "-h" || arg == "-help") {
            help();
            return 0;
        }
        
        if (arg == "-v" || arg == "-version") {
            version();
            return 0;
        }
    }
    int length=0,mode=1;
    for (int i = 1; i < argc; i++) {
        string arg = argv[i];
        
        if ((arg == "-l" || arg == "-length") && i+1 < argc) {
            length = stoi(argv[i+1]);
        }
        
        if ((arg == "-m" || arg == "-mode") && i+1 < argc) {
            mode = stoi(argv[i+1]);
        }
    };
    if (length <= 0) {
        cout << RED << "Error: Invalid length. Please specify a positive length.\n"<<RESET;
        help();
        return 1;
    }
        if (mode < 0 || mode > 2) {
        cout << RED <<"Error: Invalid mode. Use 0, 1, or 2.\n"<<RESET;
        help();
        return 1;
    }

    cout << GREEN <<"generated password: "<<password(length, mode) << RESET << endl;
    return 0;
}
