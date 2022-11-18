#include "Interfaz.h"


int main() {
	int op, op1, op2, op3, op4, op5;
    string nombreH;
    cout << "Ingrese el nombre del hospital: ";
    cin >> nombreH;
    system("cls");
    Hospital* HO = new Hospital(nombreH);
	do {
		op = Interfaz::menuPrincipal();
		system("cls");
		switch (op) {
        case 1: {
                //citas
            do {
                op1 = Interfaz::subMenuCitas();
                system("cls");
                switch (op1) {
                case 1: {
                    //Incluir citas
                    HO->crearCita();
                }break;
                case 2: {
                    //Buscar citas

                }break;
                case 3: {
                    //Cancelar citas
                }break;
                case 4: {
                    //Historial de citas(especifico)
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
        }break;

        case 2: {
               //mantenimiento
            do {
                op2 = Interfaz::subMenuMantenimiento();
                system("cls");
                switch (op2) {
                case 1: {
                    //Ingresar paciente
                    do {
                        op5 = Interfaz::subsubMenuPacientes();
                        system("cls");
                        switch (op5) {
                        case 1: {
                            //propiedad
                            HO->ingresarProfP();
                        }break;
                        case 2: {
                            //interino
                            HO->ingresarProfI();
                        }break;
                        case 3: {
                            //nacional
                            HO->ingresarEstudianteN();
                        }break;
                        case 4: {
                            //internacional
                            HO->ingresarEstudianteIN();
                        }break;
                        case 5: {

                        }break;
                        case 6: {

                        }break;
                        case 7: {

                        }break;
                        case 8: {

                        }break;
                        case 9: {

                        }break;
                        case 10: {

                        }break;
                        case 11: {

                        }break;
                        case 12: {

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
                }break;
                case 2: {
                    //Ingresar medico
                    HO->ingresarMed();
                }break;
                case 3: {
                    //ingresar ambulancia
                    HO->ingresarAmb();
                }break;
                case 4: {
                    //ingreasr taxi
                    HO->ingresarTax();
                }break;
                case 5: {

                }break;
                case 6: {
                    HO->editarAmb();
                }break;
                case 7: {

                }break;
                case 8: {

                }break;
                case 9: {

                }break;
                case 10: {

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
        }break;

        case 3: {
                //busquedas
            do {
                op3 = Interfaz::subMenuBusquedas();
                system("cls");
                switch (op3) {
                case 1: {
                    //pacientes
                }break;
                case 2: {
                    //medicos
                }break;
                case 3: {
                    //transporte
                }break;
                case 4: {
                    //especifica placa, ced, pasp
                }break;
                case 5: {
                    //reportes
                    do {
                        op4 = Interfaz::subsubMenuBusquedasReportes();
                        system("cls");
                        switch (op4) {
                        case 1: {
                            //datos empresa
                            cout << HO->toString() << endl;
                            system("pause");
                        }break;
                        case 2: {
                            //total pago taxis

                        }break;
                        case 3: {
                            //perosna con mas citas en el hospi

                        }break;
                        case 4: {
                            //fecha con mayor numero de asistencias de pacientes

                        }break;
                        case 5: {
                            //transporte mas usado por pacinetes
                        }break;
                        case 6: {
                            //reporte de ambulancias mas usadas
                        }break;
                        case 7: {
                            //reporte profesores interinos con mejor calificacion 
                        }break;
                        case 8: {
                            //reporte estudiantesinternacionales (exiliados)
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
        }break;

        case 4: {
        cout << "--------------SALIENDO---------------" << endl;
        cout << "Gracias por utilizar nuestro programa" << endl;
        cout << "-------------------------------------" << endl;
        system("pause");
        }break;
        default: cout << "ERROR: Esa opcion no existe." << endl;
        };
        system("cls");
    } while (op != 4);


	system("pause");
	return 0;
}
