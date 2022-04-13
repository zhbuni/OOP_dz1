#include<iostream>
#include<fstream>
#include<vector>
#include "Complex.h"


int main(){
    std::vector<Complex> v;
    std::ifstream file("../text.txt");
    if (file.is_open()) {
        double a, b;
        while (file >> a >> b) {std::cout << a << ' ' << b << '\n';
            Complex c{a, b};
            v.push_back(c);}
    }
    else std::cout << "NOOO";
    file.close();

    double max_module = 0;
    Complex c;
    for(int i = 0;i < v.size();++i) {
        if(max_module < v[i].module()){
            max_module = v[i].module();
            c = v[i];
        }
    }
    std::cout << c.module() << " " << max_module;
}
