#include <iostream>
#include <vector>
using namespace std;

void print(vector<string>words ,string word){
    string current;
    for(int i = 0; i < words.size();i++){
        current = words[i];
        if (current[0] == word[0] && current[1] == word[1] && current[2] == word[2] ){
            cout<<current<<endl;
        }
    }

}
int main (){
vector<string> words;
string word;
    while (word != "quit"){
        cout << "enter the input: ";
        cin >> word;
        if (word != "quit" && word.length() > 3){
           
           words.push_back(word);
        }
        else{
            print(words,word);
        }

        
    }

   
    

   

    return 0;
}