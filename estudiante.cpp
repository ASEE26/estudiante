#include <iostream>
using std::endl;
using std::cin;
using std::cout;

#include<string>
using std::string;

class Estudiante{

    public:
        Estudiante(string mi_nombre, string mi_id_estudiante){ // constructor
            nombre = mi_nombre;
            id_estudiante = mi_id_estudiante;
        }

        //funciones miembros
        string get_id(){ 
            return id_estudiante;
        }


    private:
        string nombre, id_estudiante, grado; //miembros de datos
        string generro;
        int num_clases;
};

int main(){

    Estudiante est1("Ronaldo","123-456-789"); //Objeto: "Una variable"
    Estudiante est2("Estefani","233-413");
    Estudiante est3("Carlo","42312-121312");

    int variable =5;

    variable = 6;
    cout<<"Nuevo valor de la variable: "<<variable<<endl;

    //if(Estudiante tiene el id == "123-456-789")

    cout<<"El id del estuniante 1 es: "<<est1.get_id()<<endl;
    cout<<"otro id: "<<est3.get_id()<<endl;

    return 0;
}


