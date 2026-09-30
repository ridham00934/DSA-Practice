// QUES2 : TO FIND THE LARGEST NUMBER IN AN ARRAY

#include <iostream>
#include <climits>
using namespace std;

int main() {
    int num[] = {45,23,-52,87,102};
    int size = 5;
    
    int largest = INT_MIN;

    for(int i = 0 ; i < size; i++){
        largest = max(num[i], largest);
    }
    cout<< "largest number=" << largest<< endl;
    return 0 ;
}