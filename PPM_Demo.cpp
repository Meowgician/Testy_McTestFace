#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;


int main() {
    ofstream pic;
    pic.open("pic.ppm");
    pic << "P3\n200 100 255\n";

    for (int i = 0; i < 100*200*3; i++) {
        pic << rand() % 256 << " ";
    }
    pic.close();
    return 0;
}
