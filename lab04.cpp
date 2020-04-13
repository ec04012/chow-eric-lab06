#include <iostream>
#include <string>
#include <array>
#include <vector>
using namespace std;

void f(int x, int &y);

int main(){
    char s1[] = "zoey";
    char s2[] = "zoey";
    if(s1 == s2) cout << "2. s1 == s2 is true" << endl;
    else cout << "2. s1 == s2 is false" << endl;

    string s3 = s1;
    string s4 = s2;
    if(s3 == s4) cout << "3. s3 == s4 is true" << endl;
    else cout << "3. s3 == s4 is false" << endl;    

    int q[5];
    int * p2 = q;
    cout << "Initial values:" << endl;    

    // Sets value of arrays to multiples of 5
    for(int i = 1; i < 6; i++) {        
        *(p2 + i - 1) = i * 5;              
    }     
    for(int i = 1; i < 6; i++) {        
        f(*(q + 1), *(q + 2));          
    }     
    cout << q << endl;
    return 0;
}

void f(int x, int & y){
    x = -1;
    y = -2;
}
