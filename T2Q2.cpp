#include <iostream>
using namespace std;

void drawBox(int w){

    for (int h = 0; h < w; h++){
        
            cout << "# ";
        }

        cout << endl;
    }


void drawEmptyLine(int w){

    for (int i = 0; i < w - 2; i++) {

        cout << "# "; 

        for (int j = 0; j < w - 2; j++) {

            cout << "  ";
        }
        cout << "#" << endl;
    }
}

void drawFullLine(int w) {
    if (w < 2) return;
    
    drawBox(w);
    drawEmptyLine(w);
    drawBox(w);
}



int main(){

    int width;;
    cout << "\n Enter the side of the square box 1 - 20: ";
    cin >> width;
    

    if (width >= 2) {
        drawFullLine(width);
    } else {
        cout << "Side length must be at least 2." << endl;
    }
    return 0;
} 
