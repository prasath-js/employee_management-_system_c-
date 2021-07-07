#include<iostream>
#include<string>
#include<cctype>



using namespace std;
bool isstrong(std::string s);
int main(){
    string password{};
    cout<<"enter passward\n--should be in upper case\n--should contain special charactar\n--should contain 8 latters\n--should contain number"<<endl;
    cout<<endl;
    getline(cin,password);
    if(isstrong(password)){
        cout<<"strong password"<<endl;
    }else{
        cout<<"weak password";
    }
    return 0;
}
//function

bool isstrong(string s){
    bool contain_upper=false,contain_spcl=false,cointain_number=false;
for(auto c:s){
if(isupper(c))
    contain_upper=true;

if(ispunct(c))
contain_spcl=true;

if(isdigit(c))
cointain_number=true;
}
if(contain_upper && cointain_number && contain_spcl && s.size()>=8)
    return true;
return false;    
}
