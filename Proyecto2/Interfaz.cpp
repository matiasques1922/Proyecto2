#include "Interfaz.h"
SALUDUNI* HO = new SALUDUNI();

void Interfaz::creaHospital() {
    string ced, dir, num;
    cout << "HOSPITAL-UNIVERSITARIO" << endl;
    cout << "Ingrese la cedula juridica del hospital: ";
    cin >> ced;
    cout << "Ingrese la direccion del hospital: ";
    cin >> dir;
    cout << "Ingrese el numero telefonico del hospital: ";
    cin >> num;
    system("cls");
    HO = new SALUDUNI(ced, num, dir);
}

int Interfaz::menuPrincipal() {
    int op;
    cout << "---------HOSPITAL-------" << endl;
    cout << "-----------MENU---------" << endl;
    cout << "     1- Citas  " << endl;
    cout << "     2- Mantenimiento   " << endl;
    cout << "     3- Busquedas   " << endl;
    cout << "     4- Salir.          " << endl;
    cout << "------------------------" << endl;
    cout << "     Digite la opcion: ";
    cin >> op;
    return op;
}

int Interfaz::subMenuCitas() {
    int op;
    cout << "              CITAS          " << endl;
    cout << "     --------SUB-MENU--------" << endl;
    cout << "          1- Incluir citas           " << endl;
    cout << "          2- Buscar citas        " << endl;
    cout << "          3- Cancelar citas          " << endl;
    cout << "          4- Historial de citas" << endl;
    cout << "          5- Salir           " << endl;
    cout << "     ------------------------" << endl;
    cout << "          Digite la opcion: ";
    cin >> op;
    return op;
}

int Interfaz::subMenuMantenimiento() {
    int op;
    cout << "           MANTENIMIENTO      " << endl;
    cout << "     --------SUB-MENU--------" << endl;
    cout << "          1- Pacientes           " << endl;
    cout << "          2- Ingresar medico        " << endl;
    cout << "          3- Ingresar ambulancia          " << endl;
    cout << "          4- Ingresar taxi           " << endl << endl;
    cout << "          5- Editar medico        " << endl;
    cout << "          6- Editar ambulancia          " << endl;
    cout << "          7- Editar taxi           " << endl << endl;
    cout << "          8- Eliminar medico        " << endl;
    cout << "          9- Eliminar ambulancia          " << endl;
    cout << "          10- Eliminar taxi           " << endl << endl;
    cout << "          11- Salir           " << endl;
    cout << "     ------------------------" << endl;
    cout << "          Digite la opcion: ";
    cin >> op;
    return op;
}

int Interfaz::subsubMenuPacientes() {
    int op;
    cout << "--------PACIENTES-------" << endl;
    cout << "------SUB-SUB-MENU------" << endl;
    cout << "1- Ingresar profesor en propiedad" << endl;
    cout << "2- Ingresar profesor interino   " << endl;
    cout << "3- Ingresar estudiante nacional    " << endl;
    cout << "4- Ingresar estudiante internacional    " << endl << endl;
    cout << "5- Editar profesor en propiedad" << endl;
    cout << "6- Editar profesor interino   " << endl;
    cout << "7- Editar estudiante nacional    " << endl;
    cout << "8- Editar estudiante internacional    " << endl << endl;
    cout << "9- Eliminar profesor en propiedad" << endl;
    cout << "10- Eliminar profesor interino   " << endl;
    cout << "11- Eliminar estudiante nacional    " << endl;
    cout << "12- Eliminar estudiante internacional    " << endl << endl;
    cout << "13- Salir.          " << endl;
    cout << "------------------------" << endl;
    cout << "Digite la opcion: ";
    cin >> op;
    return op;
}

int Interfaz::subMenuBusquedas() {
    int op;
    cout << "             BUSQUEDAS      " << endl;
    cout << "     --------SUB-MENU--------" << endl;
    cout << "          1- Pacientes           " << endl;
    cout << "          2- Medicos        " << endl;
    cout << "          3- Transporte          " << endl;
    cout << "          4- Busqueda especifica           " << endl;
    cout << "          5- Reportes          " << endl;
    cout << "          6- Salir           " << endl;
    cout << "     ------------------------" << endl;
    cout << "          Digite la opcion: ";
    cin >> op;
    return op;
}

int Interfaz::subsubMenuBusquedasReportes() {
    int op;
    cout << "             ---------REPORTES------" << endl;
    cout << "             -------SUB-SUB-MENU----" << endl;
    cout << "               1- Reporte de datos de la empresa  " << endl;
    cout << "               2- Reporte monto total a pagar por taxis  " << endl;
    cout << "               3- Reporte persona con mas citas en el hospital   " << endl;
    cout << "               4- Reporte fecha con mayor numero de asistencias de pacientes    " << endl;
    cout << "               5- Reporte transporte mas usado por pacientes    " << endl;
    cout << "               6- Reporte ambulancias ocupadas    " << endl;
    cout << "               7- Reporte profesores interinos con mejor calificacion    " << endl;
    cout << "               8- Reporte estudiantes internacionales (exiliados)    " << endl;
    cout << "               9- Salir             " << endl;
    cout << "             -----------------------" << endl;
    cout << "               Digite opcion: ";
    cin >> op;
    return op;
}

void Interfaz::crearCita() {
    HO->crearCita();
}
void Interfaz::todasCitas() {
    cout << HO->todasCitas() << endl;
    system("pause");
}
void Interfaz::eliminarCita() {
    HO->eliminarCita();
 }
void Interfaz::historialCitas() {
    HO->historialCitas();
 }

void Interfaz::ingresarProfP() {
    HO->ingresarProfP();
 }
void Interfaz::ingresarProfI() {
    HO->ingresarProfI();
 }
void Interfaz::ingresarEstudianteN() {
    HO->ingresarEstudianteN();
 }
void Interfaz::ingresarEstudianteIN() {
    HO->ingresarEstudianteIN();
 }
void Interfaz::editarProfP() {
    HO->editarProfP();
 }
void Interfaz::editarProfI() {
    HO->editarProfI();
 }
void Interfaz::editarEstudianteN() {
    HO->editarEstudianteN();
 }
void Interfaz::editarEstudianteIN() {
    HO->editarEstudianteIN();
 }
void Interfaz::eliminarProfP() {
    HO->eliminarProfP();
 }
void Interfaz::eliminarProfI() {
    HO->eliminarProfI();
 }
void Interfaz::eliminarEstudianteN() {
    HO->eliminarEstudianteN();
 }
void Interfaz::eliminarEstudianteIN() {
    HO->eliminarEstudianteIN();
 }

void Interfaz::ingresarMed() {
    HO->ingresarMed();
 }
void Interfaz::ingresarAmbu() {
    HO->ingresarAmb();
 }
void Interfaz::ingresarTax() {
    HO->ingresarTax();
 }
void Interfaz::editarMed() {
    HO->editarMed();
 }
void Interfaz::editarAmbu() {
    HO->editarAmb();
 }
void Interfaz::editarTax() {
    HO->editarTax();
 }
void Interfaz::eliminarMed() {
    HO->eliminarMed();
 }
void Interfaz::eliminarAmbu() {
    HO->eliminarAmb();
 }
void Interfaz::eliminarTax() {
    HO->eliminarTax();
 }

void Interfaz::pacientes() {
    cout << HO->pacientes() << endl;
    system("pause");
 }
void Interfaz::medicos() {
    cout << HO->medicos() << endl;
    system("pause");
 }
void Interfaz::transporte() {
    cout << HO->transporte() << endl;
    system("pause");
 }
void Interfaz::busqueda() {
    HO->busquedaEspecifica();
 }
 void Interfaz::todo() {
     cout << HO->toString() << endl;
     system("pause");
 }
 void Interfaz::total() {
     HO->reporteTotal();
 }
 void Interfaz::masCitas() {
     HO->reporteMasCitas();
 }
 void Interfaz::mayorFecha() {
     HO->reporteFecha();
 }
 void Interfaz::tipoMas() {
     HO->reporteTipoMas();
 }
 void Interfaz::ocupadas() {
     HO->reporteAmbuOcupadas();
 }
 void Interfaz::mejores() {
     HO->reporteInterinosMejorC();
 }
 void Interfaz::exiliados() {
     HO->reporteEstExiliados();
 }

 void Interfaz::despedida() {
     cout << "--------------SALIENDO---------------" << endl;
     cout << "Gracias por utilizar nuestro programa" << endl;
     cout << "-------------------------------------" << endl;
     system("pause");
 }
