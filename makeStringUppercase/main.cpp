#include <iostream>

using namespace std;

string makeStrUppercase(const string &str){
    string temp {str};
    for(size_t i{0}; i<temp.length(); ++i)
        if(temp[i] >= 'a' && temp[i] <= 'z')
            temp[i] -= 32;
    return temp;
}
void printMakeStrUppercase(const string str){
    string result{makeStrUppercase(str)};
    cout << result << endl;
}
int main()
{
    string str {"i love c++ programing language"};
    printMakeStrUppercase(str);
    return 0;
}
