#include <iostream>

using namespace std;

int main() {

do {
    int opcion = 0;
   float  saldo=1000;
   float dinero;  
        cout << "Cajero Automatico"<<endl;
        cout << "1. Depositar Dinero"<<endl;
        cout << "2. Reritrar Dinero"<<endl;
        cout << "3. Consultar Saldo"<<endl;
      cout << "Elige una opcion: ";
        cin >> opcion;
    

        switch (opcion) {

      case 1 :
            cout<<"Su saldo inicias es:"<<saldo<<endl;
        
            break;


            case 2 : 

              cout<<"Ingrese cantidad de deposito:";
              cin>>dinero;  
               if (dinero > 0 ) {
                    saldo = saldo + dinero;
                    cout << "Cantidad de deposito"<< endl;
                    cout << "Su  Saldo es " <<saldo<< endl;
                } else {
                    cout << "error"<<endl;
                    
                }

       case 3 : 

              cout<<"Ingrese dinero que retira";
              cin>>dinero;   
              if (dinero > 0 && dinero <= saldo) {
                    saldo = saldo - dinero;
                    cout << "Retiro realizado"<< endl;
                    cout << "Su Saldo" <<saldo<< endl;
                } else {
                    cout << "error"<<endl;
                }
              

              break;
        
               case 4 : 
               cout << "Salir"<< endl;

               break;

               default:
                cout << "Opcion invalida. Intenta de nuevo." << endl;


        }

       while (opcion!=4); 



        }

    return 0;
}
