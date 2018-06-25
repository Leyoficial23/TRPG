#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <windows.h>
#include <time.h>

#define AR 72
#define AB 80
#define DE 77
#define IZ 75
using namespace std;



void PXY(int x,int y){
HANDLE hCon;
hCon = GetStdHandle(STD_OUTPUT_HANDLE);
COORD dwPos;
dwPos.X = x;
dwPos.Y = y;
SetConsoleCursorPosition(hCon, dwPos);
}
void OcultarCursor(){
HANDLE hCon;
hCon = GetStdHandle(STD_OUTPUT_HANDLE);
CONSOLE_CURSOR_INFO cci;
cci.dwSize = 1;
cci.bVisible = FALSE;
SetConsoleCursorInfo(hCon,&cci);
}

int main(){ OcultarCursor();
bool salir = false;
int x=3,y=12,g1,v1=100,d1=1;
int x2=42,y2=12,g2,v2=100,d2=1;
char nombre1[10];
char nombre2[10];
PXY(5,19); cout<<"Nombre PLAYER 1:";
PXY(5,20); cin>>nombre1;
PXY(5,24); cout<<"Nombre PLAYER 2:";
PXY(5,25); cin>>nombre2;
for(int i3=0;i3<45;i3++){
    PXY(45,i3);
    printf("%c",179);}
for(int i=0;i<45;i++){
    PXY(i,15);
    printf("%c",196);}
PXY(48,2); cout<<" PLAYER 1 Controles:";
PXY(48,3); cout<<" Mover:  W,A,S,D";
PXY(48,4); cout<<" Golpe:  Num. 1";
PXY(48,5); cout<<" Patada: Num. 2";
PXY(48,7);  cout<<" PLAYER 2 Controles:";
PXY(48,8);  cout<<" Mover:  Flechas";
PXY(48,9);  cout<<" Golpe:  tecla ','";
PXY(48,10); cout<<" Patada: tecla '.'";
PXY(5,2); cout<<nombre1<<": "<<v1<<"% ";
PXY(25,2); cout<<nombre2<<": "<<v2<<"% ";
while(!salir){
if(kbhit()){
char Te=getch();
PXY(x,y);  printf(" ");
PXY(x,y+1);printf(" ");
PXY(x,y+2);printf(" ");
if(Te=='d'){x++; if(x>44){x--;} d1=1;}
if(Te=='a'){x--; if(x<1){x++;} d1=2;}
PXY(x,y);  printf("O");
PXY(x,y+1);printf("|");
PXY(x,y+2);printf("|");
if(Te=='s'){
PXY(x,y);  printf(" ");
PXY(x,y+1);printf("O");
PXY(x,y+2);printf("|");}
if(Te=='w'){
PXY(x,y-1);printf("O");
PXY(x,y);  printf("|");
PXY(x,y+1);printf("|");
PXY(x,y+2);printf(" ");
Sleep(100);
PXY(x,y-2);printf("O");
PXY(x,y-1);printf("|");
PXY(x,y);  printf("|");
PXY(x,y+2);printf(" ");
PXY(x,y+2);printf(" ");
Sleep(100);
PXY(x,y-2);printf(" ");
PXY(x,y-1);printf("O");
PXY(x,y);  printf("|");
PXY(x,y+2);printf("|");
PXY(x,y+2);printf(" ");
Sleep(100);
PXY(x,y-2);printf(" ");
PXY(x,y-1);printf(" ");
PXY(x,y);  printf("O");
PXY(x,y+2);printf("|");
PXY(x,y+2);printf("|");}
if(Te=='1'&&d1==1){
    g1=x+3;
    if(g1==x2){v2-=2;
    PXY(25,2); cout<<nombre2<<": "<<v2<<"% ";}
PXY(x,y);  printf("O");
PXY(x,y+1);printf("|--");
PXY(x,y+2);printf("|");
Sleep(100);
PXY(x,y);  printf("O");
PXY(x,y+1);printf("|  ");
PXY(x,y+2);printf("|");}
if(Te=='1'&&d1==2){
    g1=x-3;
    if(g1==x2){v2-=2;
    PXY(25,2); cout<<nombre2<<": "<<v2<<"% ";}
PXY(x,y);  printf("O");
PXY(x-2,y+1);printf("--|");
PXY(x,y+2);printf("|");
Sleep(100);
PXY(x,y);  printf("O");
PXY(x-2,y+1);printf("  |");
PXY(x,y+2);printf("|");}
if(Te=='2'&&d1==1){
        g1=x+4;
    if(g1==x2){v2--;
    PXY(25,2); cout<<nombre2<<": "<<v2<<"% ";}
PXY(x,y);  printf("O");
PXY(x,y+1);printf("|");
PXY(x,y+2);printf("|--");
Sleep(100);
PXY(x,y);  printf("O");
PXY(x,y+1);printf("|");
PXY(x,y+2);printf("|  ");}
if(Te=='2'&&d1==2){
        g1=x-4;
    if(g1==x2){v2--;
    PXY(25,2); cout<<nombre2<<": "<<v2<<"% ";}
PXY(x,y);  printf("O");
PXY(x,y+1);printf("|");
PXY(x-2,y+2);printf("--|");
Sleep(100);
PXY(x,y);  printf("O");
PXY(x,y+1);printf("|");
PXY(x-2,y+2);printf("  |");}
//-------------------------------------------------------------------------
PXY(x2,y2);   printf(" ");
PXY(x2,y2+1); printf(" ");
PXY(x2,y2+2); printf(" ");
if(Te==DE){x2++; if(x2>44){x2--;} d2=2;}
if(Te==IZ){x2--; if(x2<1){x2++;} d2=1;}
PXY(x2,y2);  cout<<"O";
PXY(x2,y2+1);cout<<"|";
PXY(x2,y2+2);cout<<"|";
if(Te==AB){
PXY(x2,y2);  printf(" ");
PXY(x2,y2+1);printf("O");
PXY(x2,y2+2);printf("|");}
if(Te==AR){
PXY(x2,y2-1);printf("O");
PXY(x2,y2);  printf("|");
PXY(x2,y2+1);printf("|");
PXY(x2,y2+2);printf(" ");
Sleep(100);
PXY(x2,y2-2);printf("O");
PXY(x2,y2-1);printf("|");
PXY(x2,y2);  printf("|");
PXY(x2,y2+2);printf(" ");
PXY(x2,y2+2);printf(" ");
Sleep(100);
PXY(x2,y-2);printf(" ");
PXY(x2,y2-1);printf("O");
PXY(x2,y2);  printf("|");
PXY(x2,y2+2);printf("|");
PXY(x2,y2+2);printf(" ");
Sleep(100);
PXY(x2,y2-2);printf(" ");
PXY(x2,y2-1);printf(" ");
PXY(x2,y2);  printf("O");
PXY(x2,y2+2);printf("|");
PXY(x2,y2+2);printf("|");}
if(Te==','&&d2==2){
    g2=x2+3;
    if(g2==x){v1-=2;
    PXY(5,2); cout<<nombre1<<": "<<v1<<"% ";}
PXY(x2,y2);  printf("O");
PXY(x2,y2+1);printf("|--");
PXY(x2,y2+2);printf("|");
Sleep(100);
PXY(x2,y2);  printf("O");
PXY(x2,y2+1);printf("|  ");
PXY(x2,y2+2);printf("|");}
if(Te==','&&d2==1){
    g2=x2-3;
    if(g2==x){v1-=2;
    PXY(5,2); cout<<nombre1<<": "<<v1<<"% ";}
PXY(x2,y2);  printf("O");
PXY(x2-2,y2+1);printf("--|");
PXY(x2,y2+2);printf("|");
Sleep(100);
PXY(x2,y2);  printf("O");
PXY(x2-2,y2+1);printf("  |");
PXY(x2,y2+2);printf("|");}
if(Te=='.'&&d2==1){
    g2=x2-4;
    if(g2==x){v1--;
    PXY(5,2); cout<<nombre1<<": "<<v1<<"% ";}
PXY(x2,y2);  printf("O");
PXY(x2,y2+1);printf("|");
PXY(x2-2,y2+2);printf("--|");
Sleep(100);
PXY(x2,y2);  printf("O");
PXY(x2,y2+1);printf("|");
PXY(x2-2,y2+2);printf("  |");}
if(Te=='.'&&d2==2){
    g2=x2+4;
    if(g2==x){v1--;
    PXY(5,2); cout<<nombre1<<": "<<v1<<"% ";}
PXY(x2,y2);  printf("O");
PXY(x2,y2+1);printf("|");
PXY(x2,y2+2);printf("|--");
Sleep(100);
PXY(x2,y2);  printf("O");
PXY(x2,y2+1);printf("|");
PXY(x2,y2+2);printf("|  ");}
//----------------------------------------------------------------------------
int g = v1/10;
for(int i = 0;i<g;i++){
    PXY(i+6,3); printf("%c ",196);}
int g2 = v2/10;
for(int i2 = 0;i2<g2;i2++){
    PXY(i2+26,3); printf("%c ",196);}
if(v1<=0){PXY(5,3);cout<<"   ";}
if(v2<=0){PXY(25,3);cout<<"   ";}
if(v1<=0){salir=true; PXY(12,5); cout<<nombre2<<" GANO!";
PXY(x,y);  printf("*");
Sleep(300);
PXY(x,y);  printf("x");
Sleep(300);
PXY(x,y);  printf(" ");}
if(v2<=0){salir=true; PXY(12,5); cout<<nombre1<<" GANO!";
PXY(x2,y2);  printf("*");
Sleep(300);
PXY(x2,y2);  printf("x");
Sleep(300);
PXY(x2,y2);  printf(" ");}



}
}
Sleep(10000);


return 0;
}
