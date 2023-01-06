#include <iostream>
#include <cstdlib>
#include<ctime>
using namespace std;

void randomgrade(){
    srand(time(0));
    int k = rand()%9 +1;
    switch(k){
        case 1 :
        cout << "You will get A in this 261102."; 
        break;
        case 2 :
        cout << "You will get B+ in this 261102.";
        break;
        case 3 :
        cout << "You will get B in this 261102.";
        break;
        case 4 :
        cout << "You will get C+ in this 261102.";
        break;
        case 5 :
        cout << "You will get C in this 261102.";
        break;
        case 6 :
        cout << "You will get D+ in this 261102.";
        break;
        case 7 :
        cout << "You will get D in this 261102.";
        break;
         case 8 :
        cout << "You will get F in this 261102.";
        break;
        case 9 :
        cout << "You will get W in this 261102.";
        break;
    }
}

int main(){
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    randomgrade();

 return 0;
}