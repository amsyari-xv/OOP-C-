#include <iostream>
using namespace std;

void drawBox(int w);
void drawFullLine(int w);
void drawEmptyLine(int w);


int main(){

    int width;;
    cout << "\n Enter the side of the square box 1 - 20: ";
    cin >> width;
    drawBox(width);
    
} 