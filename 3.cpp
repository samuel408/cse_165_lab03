#include <iostream>
#include <vector>

using namespace std;

int calculate(vector<int>arr){
    int sum = 0;
    for(int i = 0;i < arr.size();i++){
        sum += arr[i];
    }
    return sum;
}



int main (){

    int num = 1;
    vector<int>arr;
    cout << "type in numbers,type in 0 to stop" << endl;

    while ( num != 0 ){
        cin >> num;
        if ( num < 0){
            num = num * (-1); // gets absolute value 
            for( int i = 0; i < arr.size(); i++){
                if(arr[i] == num ){
                    arr.erase(arr.begin() + i);
                }
            }
        }
        else if(num > 0){
            arr.push_back(num);

        }
  
    }

    int finalNum = calculate(arr);
    int entryCount = arr.size();

    cout << entryCount << " " << finalNum << endl;
    


    return 0;
}