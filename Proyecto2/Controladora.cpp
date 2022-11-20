#include "Controladora.h"

void Controladora::control0() {
    int op = 0;
    control2();
    do {
        op = control1();
        controlS6(op);
        system("cls");
  
} while (op != 4);
}
int Controladora::control1() {
    return Interfaz::menuPrincipal();
}

void Controladora::control2() {
    Interfaz::creaHospital();
}

void Controladora::controlS1(int op1) {
    system("cls");
    do {
        op1 = Interfaz::subMenuCitas();
        system("cls");
        switch (op1) {
        case 1: {
            control3();
        }break;
        case 2: {
            control4();
        }break;
        case 3: {
            control5();
        }break;
        case 4: {
            control6();
        }break;
        case 5: {

        }break;
        default: {
            cout << "ERROR: Esa opcion no existe." << endl;
            system("pause");
        }
        };
        system("cls");
    } while (op1 != 5);
}
void Controladora::controlS2(int op5) {
    system("cls");
    do {
        op5 = Interfaz::subsubMenuPacientes();
        system("cls");
        switch (op5) {
        case 1: {
            control7();
        }break;
        case 2: {
            control8();
        }break;
        case 3: {
            control9();
        }break;
        case 4: {
            control10();
        }break;
        case 5: {
            control11();
        }break;
        case 6: {
            control12();
        }break;
        case 7: {
            control13();
        }break;
        case 8: {
            control14();
        }break;
        case 9: {
            control15();
        }break;
        case 10: {
            control16();
        }break;
        case 11: {
            control17();
        }break;
        case 12: {
            control18();
        }break;
        case 13: {

        }break;
        default: {
            cout << "ERROR: Esa opcion no existe." << endl;
            system("pause");
        }
        };
        system("cls");
    } while (op5 != 13);
}
void Controladora::controlS3(int op2) {
    system("cls");
    do {
        op2 = Interfaz::subMenuMantenimiento();
        system("cls");
        switch (op2) {
        case 1: {
            int op5 = 0;
            controlS2(op5);
        }break;
        case 2: {
            control19();
        }break;
        case 3: {
            control20();
        }break;
        case 4: {
            control21();
        }break;
        case 5: {
            control22();
        }break;
        case 6: {
            control23();
        }break;
        case 7: {
            control24();
        }break;
        case 8: {
            control25();
        }break;
        case 9: {
            control26();
        }break;
        case 10: {
            control27();
        }break;
        case 11: {

        }break;
        default: {
            cout << "ERROR: Esa opcion no existe." << endl;
            system("pause");
        }
        };
        system("cls");
    } while (op2 != 11);
}
void Controladora::controlS4(int op4) {
    system("cls");
    do {
        op4 = Interfaz::subsubMenuBusquedasReportes();
        system("cls");
        switch (op4) {
        case 1: {
            control28();
        }break;
        case 2: {
            control29();
        }break;
        case 3: {
            control30();
        }break;
        case 4: {
            control31();
        }break;
        case 5: {
            control32();
        }break;
        case 6: {
            control33();
        }break;
        case 7: {
            control34();
        }break;
        case 8: {
            control35();
        }break;
        case 9: {

        }break;
        default: {
            cout << "ERROR: Esa opcion no existe." << endl;
            system("pause");
        }
        };
        system("cls");
    } while (op4 != 9);
}
void Controladora::controlS5(int op3) {
    system("cls");
    do {
        op3 = Interfaz::subMenuBusquedas();
        system("cls");
        switch (op3) {
        case 1: {
            control36();
        }break;
        case 2: {
            control37();
        }break;
        case 3: {
            control38();
        }break;
        case 4: {
            control39();
        }break;
        case 5: {
            control40();
        }break;
        case 6: {

        }break;
        default: {
            cout << "ERROR: Esa opcion no existe." << endl;
            system("pause");
        }
        };
        system("cls");
    } while (op3 != 6);
}

void Controladora::controlS6(int op) {
    system("cls");
        switch (op) {
        case 1: {
            int op1 = 0;
            controlS1(op1);
        }break;

        case 2: {
            int op4 = 0;
            controlS3(op4);
        }break;

        case 3: {
            int op3 = 0;
            controlS5(op3);
        }break;

        case 4: {
            control41();
        }break;
        default: cout << "ERROR: Esa opcion no existe." << endl;
        };
        system("cls");
        
}



void Controladora::control3() {
    system("cls");
	Interfaz::crearCita();
}
void Controladora::control4(){
    system("cls");
	Interfaz::todasCitas();
}
void Controladora::control5() {
    system("cls");
	Interfaz::eliminarCita();
}
void Controladora::control6() {
    system("cls");
	Interfaz::historialCitas();
}
void Controladora::control7() {
    system("cls");
    Interfaz::ingresarProfP();
}
void Controladora::control8() {
    system("cls");
    Interfaz::ingresarProfI();
}
void Controladora::control9() {
    system("cls");
    Interfaz::ingresarEstudianteN();
}
void Controladora::control10() {
    system("cls");
    Interfaz::ingresarEstudianteIN();
}
void Controladora::control11() {
    system("cls");
    Interfaz::editarProfP();
}
void Controladora::control12() {
    system("cls");
    Interfaz::editarProfI();
}
void Controladora::control13() {
    system("cls");
    Interfaz::editarEstudianteN();
}
void Controladora::control14() {
    system("cls");
    Interfaz::editarEstudianteIN();
}
void Controladora::control15() {
    system("cls");
    Interfaz::eliminarProfP();
}
void Controladora::control16() {
    system("cls");
    Interfaz::eliminarProfI();
}
void Controladora::control17() {
    system("cls");
    Interfaz::eliminarEstudianteN();
}
void Controladora::control18() {
    system("cls");
    Interfaz::eliminarEstudianteIN();
}
void Controladora::control19() {
    system("cls");
    Interfaz::ingresarMed();
}
void Controladora::control20() {
    system("cls");
    Interfaz::ingresarAmbu();
}
void Controladora::control21() {
    system("cls");
    Interfaz::ingresarTax();
}
void Controladora::control22() {
    system("cls");
    Interfaz::editarMed();
}
void Controladora::control23() {
    system("cls");
    Interfaz::editarAmbu();
}
void Controladora::control24() {
    system("cls");
    Interfaz::editarTax();
}
void Controladora::control25() {
    system("cls");
    Interfaz::eliminarMed();
}
void Controladora::control26() {
    system("cls");
    Interfaz::eliminarAmbu();
}
void Controladora::control27() {
    system("cls");
    Interfaz::eliminarTax();
}
void Controladora::control28() {
    system("cls");
    Interfaz::todo();
}
void Controladora::control29() {
    system("cls");
    Interfaz::total();
}
void Controladora::control30() {
    system("cls");
    Interfaz::masCitas();
}
void Controladora::control31() {
    system("cls");
    Interfaz::mayorFecha();
}
void Controladora::control32() {
    system("cls");
    Interfaz::tipoMas();
}
void Controladora::control33() {
    system("cls");
    Interfaz::ocupadas();
}
void Controladora::control34() {
    system("cls");
    Interfaz::mejores();
}
void Controladora::control35() {
    system("cls");
    Interfaz::exiliados();
}
void Controladora::control36() {
    system("cls");
    Interfaz::pacientes();
}
void Controladora::control37() {
    system("cls");
    Interfaz::medicos();
}
void Controladora::control38() {
    system("cls");
    Interfaz::transporte();
}
void Controladora::control39() {
    system("cls");
    Interfaz::busqueda();
}
void Controladora::control40() {
    system("cls");
    int op4 = 0;
    controlS4(op4);
}
void Controladora::control41() {
    Interfaz::despedida();
}
void Controladora::control42() {

}
void Controladora::control43() {

}
void Controladora::control44() {

}