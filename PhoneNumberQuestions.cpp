#include <iostream>

using namespace std;

string NumberString(string str){
    int length = str.length();
    string numberstr;

    for(int i = 0; i < length; i++){
        if(isdigit(str[i]))
            numberstr += str[i];
    }
    return numberstr;
}

bool isNumberValid(string& str){
    if(str.length() == 11)
        str = str.substr(1);

    if(str.length() == 10){
        if(str[0] == '3'){
            if(str[1] <= '5'){
                return true;
            }
        }
    }
    return false;
}

void FormatString(string str){
    string str1 = str.substr(0,3), str2 = str.substr(3,3), str3 = str.substr(6);
    str = "+92 " + str1 + ' ' + str2 + ' ' + str3;
    cout << str << endl;

    return;
}

int main() {
    string str, numberstr;
    bool isValid;
    cout << "Enter a number: ";
    getline(cin, str);

    numberstr = NumberString(str);

    isValid = isNumberValid(numberstr);
    if(isValid){
        FormatString(numberstr);
    }
    else{
        cout << "Number is not valid to format!!\n";
    }

    return 0;
}