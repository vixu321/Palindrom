#include <iostream>
#include <string>

using namespace std;

string text;

int main()
{
    cout << "Prosze wpisac tekst aby sprawdzic czy jest on palindromem: "<<endl;
    cin >>text;
    int length = text.length();
    bool jestPalindromem = true;

        for(int i=0;i<length;i++)
        {
            if(text.at(i)!=text.at(length-i-1)){
                jestPalindromem = false;
            }
        }

        if(jestPalindromem==false){
            cout<<"Ten tekst nie jest palindromem"<<endl;
        }else{
        cout<<"Ten tekst jest palindromem";

        }


    return 0;
}
