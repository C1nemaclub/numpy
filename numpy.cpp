// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class numpy {       // The class
    
    private:
        int num1 = 0;
        int num2 = 0;
        int num3 = 0;


  public:        
    numpy(int x, int y, int z) {
      num1 = x;
      num2 = y;
      num3 = z;
    }
    int suma();
    int resta();
    int multiplicacion();
};

int numpy::suma(){
    cout << "Ejecutando Suma: " ; 
    return num1+num2+num3;
}
int numpy::resta(){
    cout << "Ejecutando Resta: " ; 
    return num1-num2-num3;
}
int numpy::multiplicacion(){
    cout << "Ejecutando Multiplicacion: " ; 
    return num1*num2*num3;
}


int main() {
    
    numpy operacion = numpy(1,2,3);
    cout << operacion.suma();
    cout << endl;
    cout << operacion.resta();
    cout << endl;
    cout << operacion.multiplicacion();
    cout << endl;
    


    return 0;
}
