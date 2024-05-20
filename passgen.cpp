#include<bits/stdc++.h> 
using namespace std;
void help(){
    cout<<"\nBASIC AND SIMPLE CLI BASED PASSWORD GENERATOR BY PRATIK!!!\nusage:\nbasic input: -l <length> -m\nOPTIONAL ARGUMENTS:\n-l  OR  -length   length of password\n-m  OR  -mode   mode of password (0=only letters,1=random,2=alphanumeric)\nexample input: -l 10 -m 1";
}
void version(){
    cout<<"Program version:1.0\nGithub: https://github.com/ProgrammerPratik/passgen";
}
string password(int len, int mode){
    string alph = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string chr = "!@#$%^&*()-_=+[]{}|;:'\",.<>?/`~\\";
    string num = "1234567890";
    string pass;
    while (len--) {
        switch (mode) {
            case 0: // Only letters
                pass += alph[rand() % alph.length()];
                break;
            case 1: // Random mode
                switch (rand() % 3) {
                    case 0:
                        pass += alph[rand() % alph.length()];
                        break;
                    case 1:
                        pass += chr[rand() % chr.length()];
                        break;
                    case 2:
                        pass += num[rand() % num.length()];
                        break;
                }
                break;
            case 2: // Letters and numbers
                switch (rand() % 2) {
                    case 0:
                        pass += alph[rand() % alph.length()];
                        break;
                    case 1:
                        pass += num[rand() % num.length()];
                        break;
                }
                break;
        }

    } return pass;
}


int main()
{
    string input1,input2;
    int l,m;
    cin>>input1;
    if(input1=="-h"||input1=="-help") {
        help();
        return 0;
        }
    if(input1=="-v"||input1=="-version"){
        version();
        return 0;
    }
    cin>>l;
    cin>>input2;
    cin>>m;
    transform(input1.begin(), input1.end(), input1.begin(), ::tolower); 
    transform(input2.begin(), input2.end(), input2.begin(), ::tolower); 
    if(input1=="-l"||input1=="-length") {
        if(input2=="-m"||input2=="-mode"){
            cout<<password(l,m);
        }else{
            cout<<"Wrong Input!!\nsyntax: -l <length> -m <mode>\n or try -help for more info\n-v to check version";
        }
    }else{
        cout<<"Wrong Input!!\nsyntax: -l <length> -m <mode>\n or try -help for more info\n-v to check version";
    }
    return 0;
}
