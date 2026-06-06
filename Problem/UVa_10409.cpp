#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    while (cin >> n && n != 0) {
        int top = 1, bottom = 6;
        int north = 2, south = 5;
        int west = 3, east = 4;
        
        string command;
        for (int i = 0; i < n; i++) {
            cin >> command;
            
            int temp = top; 
            
            if (command == "north") {
                top = south;
                south = bottom;
                bottom = north;
                north = temp;
            } 
            else if (command == "south") {
                top = north;
                north = bottom;
                bottom = south;
                south = temp;
            } 
            else if (command == "east") {
                top = west;
                west = bottom;
                bottom = east;
                east = temp;
            } 
            else if (command == "west") {
                top = east;
                east = bottom;
                bottom = west;
                west = temp;
            }
        }  
        cout << top << endl;
    }
    return 0;
}