#include <iostream>
using namespace std;

int main() {

    string input;
    long prev = 1, last = 1; 


    cin >> input;

    for (long i = 0; i < input.length(); i++)
    {
        if(i+1 < input.length()) {

            if(input[i] == input[i+1]) {
                last++;
            } 
            else {
                if(last > prev) {
                    prev = last;
                }
                last = 1;
            }

        }


        
    }

    if(prev < last) {
        prev = last;
    } 
    cout << prev << endl;


}