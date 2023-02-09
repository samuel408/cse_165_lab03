#include <iostream>
#include <vector>
using namespace std;
int length = 0;
void point(vector<string> V, vector<string> words){
    

}

int main (){
vector<string> V(10);
vector<string> words;
string word;
    while (word != "quit"){
        cout << "enter the input: ";
        cin >> word;
        if (word != "quit" && word.length() < 10){
            int count = 0;
            for(int i = 0; i < words.size(); i++){
                if(words[i] == word){
                    count = 1;
                }
            }
            if(count == 0){
           words.push_back(word);

             }
            
        }

    }
    //cout << words.size()<< endl;

for(int i = 0; i < words.size(); i++){
        length = words[i].size() - 1;
        V[length] = V[length] + " " + words[i];
    }  
    
    for(int i = 0; i < V.size(); i++){
    
        cout << V[i]<< endl;

    }
    

    return 0;
}