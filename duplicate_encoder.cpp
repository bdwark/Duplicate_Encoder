#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator> 
using namespace std;

std::string duplicate_encoder(const std::string& word){
    vector<char> unique_letters_vec;
    sort(unique_letters_vec.begin(), unique_letters_vec.end());
    vector<int>::iterator it;
    //it = unique(unique_letters_vec.begin(), unique_letters_vec.end());  
    //unique_letters_vec.resize(distance(unique_letters_vec.begin(),it));  

    return "";
}


int main(){
    cout << duplicate_encoder("din") << std::endl;
    if(duplicate_encoder("din") == "((("){
        cout << "Success" << endl;
    } else {
        cout << "Fail" << endl;
    }
    return 0;
}