# juego
#include<windows.h>
#include <stdio.h>

void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
}
  
void Dibujar_Marco(){
	
	for(int i = 0; i<61; i++){
		gotoxy(0,i+1);printf("%c",186);
		gotoxy(236,i+1);printf("%c",186);
	}//Columna
	
	for(int j=0;j<235;j++){
		gotoxy(j+1,0);printf("%c",205);
		gotoxy(j+1,62);printf("%c",205);
	}//Fila
	gotoxy(0,0);printf("%c",201);
	gotoxy(0,62);printf("%c",200);
	gotoxy(236,0);printf("%c",187);
	gotoxy(236,62);printf("%c",188);
	//Vertices
}

void Dibujar_Menu_Inicio(){//Falta terminar
	for(int i = 0; i<=5 ; i++){
		gotoxy(10+i,10);printf("%c",219);
		gotoxy(10+i,16);printf("%c",219);
		gotoxy(10+i,13);printf("%c",219);
		
	}
	
	for(int i = 0; i<=6 ; i++){
		gotoxy(19+i,10);printf("%c",219);
		gotoxy(19+i,16);printf("%c",219);
		
		gotoxy(28+i,10);printf("%c",219);
		gotoxy(28+i,13);printf("%c",219);
		gotoxy(28+i,16);printf("%c",219);
	}
	
	for(int j = 0; j<5; j++){
		gotoxy(16,11+j);printf("%c",219);
		gotoxy(10,11+j);printf("%c",219);
		gotoxy(22,11+j);printf("%c",219);
		gotoxy(28,11+j);printf("%c",219);
	
	}

}
int main(){
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);
	
	Dibujar_Menu_Inicio();
	Dibujar_Marco();
	return 0;
}
