//types of classes in c++ - private , public , protected.
// private members can only be accessed by member functions of the same class
//public class members- public members can be accessed from outside the class
// protected class members- protected members can be accessed by member functions of the same class and by derived classes
#include "bits/stdc++.h"
using namespace std;
class Bike {
    public:
    bool kick;
    
        bool isKickStart() {
            return kick;
        }
        void gear_count(int level) {
            greaseLevel = level;
        }
    //constructor
    Bike() {
        kick = true;
        greaseLevel = 5;
        cout << "Bike created with kickstart: " << kick << " and grease level: " << greaseLevel << endl;
    }
    
    
    private:
    int greaseLevel;

};
int main() {
    Bike myBike;
    
    return 0;
}