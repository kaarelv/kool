/**
 * Fail:		Kodutoo_I_Kaarel_Vandler_142947IALB.c
 * Autor:		Kaarel Vandler
 * E-post:		vandler.kaarel@gmail.com
 * Muudetud:	26.10.2014
 * 
 * Kirjeldus: 	Programm peab arvutama väärtused funktsioonile
 * 				y = (sqrt(x*x*x)+4*x*x)/(4-x*x), kusjuures
 * 				x = A+H*(n-1). Programmi käivitades küsitakse kasutajalt
 * 				algväärtust A, sammu H ja sammude arvu n. Kui x ei kuulu
 * 				funktsiooni määramispiirkonda, siis väljastatakse
 * 				"(puudub)". Pärast funktsiooni väärtuste leidmist ja 
 * 				kuvamist küsitakse kasutajalt, kas ta tahab jätkata
 * 				programmi kasutamist uue argumendi väärtusega.
 **/

#include <stdio.h>
#include <math.h>

int main(void)
{
	
	// Defineerin muutujad
	float algv, samm, x, y ;
	int i, n ;
	
	do // Tsükkel vajadusel programmi uuesti kasutamiseks
	{		
		// Kasutajalt argumendi sisendi küsimine
		printf("Sisestage funktsiooni argumendi algv22rtus A:\n") ;
		scanf("%f", &algv) ;
		printf("Sisestage funktsiooni argumendi sammude arv n:\n") ;
		scanf("%d", &n) ;
		if (n <= 0) // Veateade, kui n <= 0
		{
			while (n <= 0)
			{
				printf
					("Sammude arv peab olema nullist erinev naturaalarvuline v22rtus!\n") ;
				printf
					("Sisestage funktsiooni argumendi sammude arv n:\n") ;
				scanf("%d", &n) ;		
			}
		}
		printf("Sisestage samm H:\n") ;
		scanf("%f", &samm) ;
		
		// Tabeli päise ekraanile kuvamine
		printf("x	|	y\n") ;
		
		// Töötlus ja väljastus
		i = 1 ;
		while(i<=n)
		{
			x = algv + samm * (i-1) ;
			
			// Kontrollin, kontrollin kas x on määramispiirkonnas
			if ( (x<0) || (x==2) )
			{
				// Funktsioon ei ole määratud kohal x
				printf("%.2f	|	(puudub)\n", x) ;
			}
			else
			{
				// Funktsioon on määratud kohal x
				y = (sqrt(x*x*x) + 4*x*x) /( 4-x*x) ;
				printf("%.2f	|	%.2f\n", x, y) ;
			}
			i++;
		}
		
		//Küsitakse kas jätkata programmi kasutamist uue argumendiga
		i = 0 ;
		printf("\nKas j2tkata programmi kasutamist uue argumendiga?\n");
		printf("0 - Ei\n") ;
		printf("1 - Jah\n") ;
		scanf("%d",&i) ;
		
		// Veateade, kui sisestatakse arv, mis ei ole 0 või 1
		if ( (i<0) || (i>1) ) 
		{
			while( ( (i<0) || (i>1) ) ) 
			{
				printf("Viga!\n") ;
				printf("Kas j2tkata programmi kasutamist uue ") ;
				printf("argumendiga?\n") ;
				printf("0 - Ei\n") ;
				printf("1 - Jah\n") ;
				scanf("%d",&i) ;
			}
			
		}
	}
	while(i==1) ;
	
	
	
	return 0;
}

