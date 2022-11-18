#include "Interfaz.h"


int main() {
	int op, op1, op2, op3, op4, op5;
    Hospital* HO;
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
                    //Historial de citas
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
               /*     HO->ingresaPaciente();*/

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
                default: {
                    cout << "ERROR: Esa opcion no existe." << endl;
                    system("pause");
                }
                };
                system("cls");
            } while (op2 != 5);
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
        }break;
        default: cout << "ERROR: Esa opcion no existe." << endl;
        };
        system("cls");
    } while (op1 != 4);


	system("pause");
	return 0;
}
