# inclure  " main.h "
/* *
* principal - Bloc d'entrée
  *Description : imprime _putchar suivi d'une nouvelle ligne
* Retour : 0
 */
int  principal ( vide )
{
	char c[ 8 ] = " _putchar " ;

	entier je = 0 ;

	tandis que (i < 8 )
	{
		_putchar (c[i]);
		je++ ;
	}
	_putchar ( ' \n ' );
	retour ( 0 );
}
