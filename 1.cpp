#include <iostream>
#include <vector>

using namespace std;
void findWords(vector<string> arr,string word){
    string current;
    for(int i = 0; i < arr.size() - 1;i++){
       current = arr[i];
       if(current[0] == word[0] ){
           cout << current << endl;
       }

    }

}

int main (){
    string word = "lol";
    vector<string> arr;
    int size = word.length();
    cout << "type in words,  when done simply type in 1 letter " << endl;
    while ( size != 1){

        cin >> word;
        arr.push_back(word);
        size = word.length();

    }

    findWords(arr, word);

    
    

    return 0;
}