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
            do {
                op1 = Interfaz::subMenuCitas();
                system("cls");
                switch (op1) {
                case 1: {
                    HO->crearCita();
                }break;
                case 2: {
                    cout << HO->todasCitas() << endl;
                    system("pause");
                }break;
                case 3: {
                    HO->eliminarCita();
                }break;
                case 4: {
                    HO->historialCitas();
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
            do {
                op2 = Interfaz::subMenuMantenimiento();
                system("cls");
                switch (op2) {
                case 1: {
                    do {
                        op5 = Interfaz::subsubMenuPacientes();
                        system("cls");
                        switch (op5) {
                        case 1: {
                            HO->ingresarProfP();
                        }break;
                        case 2: {
                            HO->ingresarProfI();
                        }break;
                        case 3: {
                            HO->ingresarEstudianteN();
                        }break;
                        case 4: {
                            HO->ingresarEstudianteIN();
                        }break;
                        case 5: {
                            HO->editarProfP();
                        }break;
                        case 6: {
                            HO->editarProfI();
                        }break;
                        case 7: {
                            HO->editarEstudianteN();
                        }break;
                        case 8: {
                            HO->editarEstudianteIN();
                        }break;
                        case 9: {
                            HO->eliminarProfP();
                        }break;
                        case 10: {
                            HO->eliminarProfI();
                        }break;
                        case 11: {
                            HO->eliminarEstudianteN();
                        }break;
                        case 12: {
                            HO->eliminarEstudianteIN();
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
                    HO->ingresarMed();
                }break;
                case 3: {
                    HO->ingresarAmb();
                }break;
                case 4: {
                    HO->ingresarTax();
                }break;
                case 5: {
                    HO->editarMed();
                }break;
                case 6: {
                    HO->editarAmb();
                }break;
                case 7: {
                    HO->editarTax();
                }break;
                case 8: {
                    HO->eliminarMed();
                }break;
                case 9: {
                    HO->eliminarAmb();
                }break;
                case 10: {
                    HO->eliminarTax();
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
