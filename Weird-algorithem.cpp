#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    
    long long n;
    
    cin >> n;
    vector<long long> ns = {n};
    
    while(n > 1) {

        if(n % 2 == 0) {
            n /= 2;   
        } else {
            n = (n*3)+1;
        }
        ns.push_back(n);
    }
    
    
    for (int i = 0; i < ns.size(); i++)
    {
        cout << ns[i] << " ";
    }
    
}