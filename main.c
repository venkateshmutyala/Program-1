#include "tools.hpp"
#include<cctype>
using namespace std;
int comp(char a, string list_of_characters){
    for(int i=0;i<26;i++){
        if(list_of_characters[i]==a) // comparing array values with input character
            return 1;
    }
    return 0;
}
    
int main()
{ 
    char c;  // initilizing variables
  long int i=0;  // initilizing variables
    std::string list_of_characters;
    cout << "Program 1 (C++): A List Of Letters Used" << endl;
    // Print your name or names on the second line of the output and leave a blank line after that.
    string name = "Venkatesh Mutyala"; 
    cout << name << endl << endl;
    while(c!='#') // continue loop until # occurs
    {
        cin>>c; // asking user to input character
       if(isalpha(c)==0) // checking whether char is alphabetic or not
            continue;
        if(isalpha(c)==1)
            c=(char)tolower(c); // change the character case to lower case 
        if(comp(tolower(c),list_of_characters)==1) // compare character with array values
            continue;
        list_of_characters += tolower(c); 
        
    }
    for(int j=0;j<list_of_characters.length();j++)
        cout<<list_of_characters[j]<<' ';// printing new array values*/
    cout<<endl;
    return 0;
}
