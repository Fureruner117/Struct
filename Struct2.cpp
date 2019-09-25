# include <iostream>
# include <conio.h.>
# include <string.h>
menu vacio ();
estructura  inscripcion {
char nombre [ 20 ];
int tiempo;
char revista [ 20 ];
};



int  main ( int argc, char ** argv) {
menu ();
getch ();
devuelve  0 ;

}

 menu vacio () {

	estructura  inscripcion P [ 10 ];
	struct  inscripcion * apuntador;
	apuntador = P;
	int opcion, C;
	bool opcion2 = falso ;
	char eliminar [ 20 ];
    hacer {
        sistema ( " cls " );
        cin. claro ();
        cout << " menú " << endl;
        cout << " \ t 1 .- Alta de usuario " << endl;
        cout << " \ t 2 .- borrar usuario " << endl;
        cout << " \ t 3 .- Checar usuarios " << endl;
        cout << " \ t 4 .- Salir " << endl;
        cout << " Elije una opcion: " ;
        cin >> opcion;
        para ( int i = 0 ; i < 10 ; i ++) {
        	Pi]. nombre [ 0 ] == ' n ' ;
		}

		interruptor (opcion)
		{
			caso  1 :
				para ( int i = 0 ; i < 10 ; i ++) {
                if (P [i]. nombre [ 0 ]! = ' n ' ) {
                    cout << " Nombre: " ; fflush (stdin); cin. getline (P [i]. nombre , 20 , ' \ n ' );
                    cout << " Tiempo (meses): " ; cin >> P [i]. Tiempo ;
                    cout << " Nombre de la revista: " ; fflush (stdin); cin. getline (P [i]. revista , 20 , ' \ n ' );
                    cout << ' \ n ' ;
                    romper ;
                    } mas
                    cout << " El " << i + 1 << " º espacio esta ocupado " << endl;
				}
			    sistema ( " pausa " );
				romper ;
			caso  2 :
				sistema ( " cls " );
				cout << " Has eliminado usuario. \ n " ;
				fflush (stdin);
				cin. getline (eliminar, 20 , ' \ n ' );
				para ( int i = 0 ; i < 10 ; i ++) {
					C = strcmp (apuntador-> nombre , eliminar);
					si (C! = 0 )
					apuntador ++;
				    más {
				    Pi]. nombre [ 0 ] = ' n ' ;
					cout << " usuario eliminado " ;
					romper ;	
					}
