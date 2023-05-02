///EDWIN CAMPOS DRAGUSIN
///LICENCIATURA EN CIENCIAS COMPUTACIONALES
///ESTRUCTURA DE DATOS

#include <iostream>
#include <locale>
#include <stdlib.h>

using namespace std;

struct etapas{
    int horas;
    int minutos;
    int segundos;
}et[100];

struct empleado{
    string nombre;
    string rfc;
    int salario;
};
int main()
{

    setlocale(LC_CTYPE,"Spanish");
    system("TITLE EJERCICIO DEL VIDEO PLANTEADO EN LA PLATAFORMA GARZA");

    cout<<"\t\t\t"<<"*************** TIEMPO TOTAL AL COMPLETAR ETAPAS **************"<<endl<<endl;

    int n_etapas,horasT=0,minutosT=0,segundosT=0;

    cout<<"DIGITE EL NUMERO DE ETAPAS "; cin>>n_etapas;
    for(int i=0;i<n_etapas;i++){
            ///PIDIENDO LOS DATOS AL USUARIO
        cout<<"Horas: ";cin>>et[i].horas;
        cout<<"Minutos: ";cin>>et[i].minutos;
        cout<<"Segundos: ";cin>>et[i].segundos;

        horasT+=et[i].horas;
        minutosT+=et[i].minutos;
        if (minutosT>=60){
            minutosT-=60;
            horasT++;
        }
        segundosT+=et[i].segundos;
        if (segundosT>=60){
            segundosT-=60;
            minutosT++;
        }
        cout<<endl;

    }

    cout<<"\t"<<"TIEMPO TOTAL EMPLEADO:"<<endl<<endl;
    cout<<"Horas: "<<horasT<<endl;
    cout<<"Minutos: "<<minutosT<<endl;
    cout<<"Segundos: "<<segundosT<<endl<<endl;

    cout<<endl<<endl;
    system("pause");
    system("cls");
    system("color 0a");
    system("title EJERCICIO PLANTEADO EN LA PLATAFORMA GARZA");

    empleado x[5];

    cout<<"\t\t\t"<<"***************** REGISTRANDO LOS DATOS DE LOS EMPLEADOS *****************"<<endl<<endl;
    for (int i=0;i<5;i++){
        cout<<"\t\t"<<"INGRESE LOS DATOS DEL EMPLEADO "<<i+1<<": "<<endl<<endl;
        cout<<"\t"<<"NOMBRE DEL EMPLEADO: ";cin>>x[i].nombre;
        cout<<"\t"<<"RFC: ";cin>>x[i].rfc;
        do{
        cout<<"\t"<<"SALARIO (MXN): ";cin>>x[i].salario;
        }
        while(x[i].salario <=0);
        cout<<endl;
    }

    system("pause");
    system("cls");
    system("color 0b");

    cout<<"\t\t\t"<<"***************** IMPRIMIENDO LOS DATOS DE LOS EMPLEADOS *****************"<<endl<<endl;
    for(int i=0;i<5;i++){
        cout<<"\t\t"<<"DATOS DEL EMPLEADO "<<i+1<<endl<<endl;
        cout<<"\t"<<"NOMBRE: "<<x[i].nombre<<endl;
        cout<<"\t"<<"RFC: "<<x[i].rfc<<endl;
        cout<<"\t"<<"SALARIO: "<<x[i].salario<<endl;
    }


    return 0;
}
