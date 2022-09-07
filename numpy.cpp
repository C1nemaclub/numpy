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
    int maximo();
    int minimo();
    
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

int numpy::maximo(){
    cout << "El numero maximo es: " ; 
     int max;
    if (num1 > num2 && num1 > num3){
		max = num1;
	}
	if (num2 > num1 && num2 > num3){
		max = num2;
	}
	if (num3 > num1 && num3 > num2){
		max = num3;
	}
	return max;
	}

int numpy::minimo(){
    cout << "El numero minimo es: " ; 
    int min;
    if (num1 < num2 && num1 < num3){
		min = num1;
	}
	if (num2 < num1 && num2 < num3){
		min = num2;
	}
	if (num3 < num1 && num3 < num2){
		min = num3;
	}
	return min;
	}


int main() {
    
    numpy operacion = numpy(1,2,3);
    cout << operacion.suma();
    cout << endl;
    cout << operacion.resta();
    cout << endl;
    cout << operacion.multiplicacion();
    cout << endl;
    cout << operacion.maximo();
    cout << endl;
    cout << operacion.minimo();
    cout << endl;
    


    return 0;
}
