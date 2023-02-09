#include <iostream>

using namespace std;

int pairs(char letter, int num){
    if( num < 0){
        cout << endl;
        return 0;
    }

    for (int i = 0; i < num ; i++){
        cout << letter;
    }
    cout << endl;
    return 0;

}

int main(){

    int num;
    char letter;

    cout << " input a letter then a number:"<< endl;
    cin >> letter >> num;

    pairs(letter,num);

    return 0;
}