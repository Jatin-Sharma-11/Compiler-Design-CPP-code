#include <bits/stdc++.h>
using namespace std;

string arr[] = { "void", "using", "namespace", "int", "include", "iostream", "std", "main",
"cin", "cout", "return", "float", "double", "string" };

bool isKeyword (string a){
for (int i = 0; i < 14; i++){
if (arr[i] == a){
return true;
}}return false;}

bool isDelimiter(char ch){
    if (ch == ' ' || ch == '+' || ch == '-' || ch == '*' ||
        ch == '/' || ch == ',' || ch == ';' || ch == '>' ||
        ch == '<' || ch == '=' || ch == '(' || ch == ')' ||
        ch == '[' || ch == ']' || ch == '{' || ch == '}')
        return (true);
    return (false);}
bool validIdentifier(char* str){
    if (str[0] == '0' || str[0] == '1' || str[0] == '2' ||
        str[0] == '3' || str[0] == '4' || str[0] == '5' ||
        str[0] == '6' || str[0] == '7' || str[0] == '8' ||
        str[0] == '9' || isDelimiter(str[0]) == true || isKeyword (str) == true )
        return (false);
    return (true);}
int main(){
    char str[100];
    cout<<"Enter Identifier : ";
    cin>>str;
    if (validIdentifier(str) == true)
                cout<<str<<" IS A VALID IDENTIFIER\n";
 
    else if (validIdentifier(str) == false)
                cout<<str<<" IS NOT A VALID IDENTIFIER\n";
    return 0;
}