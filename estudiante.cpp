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

        string get_nombre(){
            return nombre;
        }
        
        string get_genero(){
        
            return genero;
        }
        
        void set_genero(string nuevo_genero){
                genero = nuevo_genero;
            }
            
    private:
        string nombre, id_estudiante, grado; //miembros de datos
        string genero;
        int num_clases;
};

int main(){

    Estudiante est1("Ronaldo","123-456-789"); //Objeto: "Una variable"
    Estudiante est2("Estefani","233-413");
    Estudiante est3("Carlo","42312-121312");

    //if(Estudiante tiene el id == "123-456-789")

    cout<<"El id de "<<est1.get_nombre()<<" es: "<<est1.get_id()<<endl;
    cout<<"otro id: "<<est3.get_id()<<endl;
    
    est1.set_genero("Masculino");
    
    cout<<"El genero de "<<est1.get_nombre()<<" es: "<<est1.get_genero()<<endl;
    cout<<"El genero de "<<est2.get_nombre()<<" es: "<<est2.get_genero();
    
    

    return 0;
}


