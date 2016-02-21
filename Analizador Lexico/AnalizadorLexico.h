#ifndef ANALIZADORLEXICO_H
#define ANALIZADORLEXICO_H

#include <string>
using std::string;

#define X -1
#define PALABRAS_RESERVADAS 21

string palabrasReservadas[] = {
"auto",
	"break",
	"case",
	"char",
	"const",
	"continue",
	"default",
	"do",
	"double",
	"else",
	"enum",
	"extern",
	"float",
	"for",
	"if",
	"int",
	"long",
	"register",
	"return",
	"short",
	"signed",
	"sizeof",
	"static",
	"struct",
	"switch",
	"typedef",
	"union",
	"unsigned",
	"void",
	"volatile",
	"while"
};

int G[][60] = {
//	  0  1  2  3  4  5  6  7  8  9  a  b  c  d  e  f  g  h  i  j  k  l  m  n  o  p  q  r  s  t  u  v  w  x  y  z  '  "  +  -  *  /  >  <  %  =  .  ^  &  |  \  $  _  !
	{ 1,11,11,11,11,11,11,11,11,11,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,48,41,15,16,31,32,28,29,33,30,21,36,35,34, X,38,39,57, X},//0
	{11,11,11,11,11,11,11,11,11,11, X, X, X, X,22,26, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X,21, X, X, X, X, X, X, X, X},//1
	{ 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, 3, 3, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X},//2
	{ 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X},//3
	{ 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X},//4
	{ 7, 7, 7, 7, 7, 7, 7, 7, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, 6, 6, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X},//5
	{ 7, 7, 7, 7, 7, 7, 7, 7, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X},//6
	{ 7, 7, 7, 7, 7, 7, 7, 7, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X},//7
	{10,10, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, 9, 9, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X},//8
	{10,10, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X},//9
	{10,10, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X},//10
	{11,11,11,11,11,11,11,11,11,11, X, X, X, X,22,26, X, X, X, X, X,12, X, X, X, X, X, X, X, X,13, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X,21, X, X, X, X, X, X, X, X},//11
	{ X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X,14, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X},//12
	{ X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X},//13
	{ X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X},//14
	{56,19,19,19,19,19,19,19,19,19, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X,17, X, X, X, X, X, X,18, X, X, X, X, X, X, X, X, X},//15
	{56,19,19,19,19,19,19,19,19,19, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X,17, X, X, X, X, X,18, X, X, X, X, X, X, X, X, X},//16
	{ X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X},//17
	{ X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X},//18
	{20,20,20,20,20,20,20,20,20,20, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X},//19
	{20,20,20,20,20,20,20,20,20,20, X, X, X, X,22,26, X, X, X, X, X,27, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X,21, X, X, X, X, X, X, X, X},//20
	{40,40,40,40,40,40,40,40,40,40, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X},//21
	{24,24,24,24,24,24,24,24,24,24, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X,23,23, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X},//22
	{24,24,24,24,24,24,24,24,24,24, X, X, X, X, X,26, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X},//23
	{25,25,25,25,25,25,25,25,25,25, X, X, X, X, X,26, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X},//24
	{ X, X, X, X, X, X, X, X, X, X, X, X, X, X, X,26, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X},//25
	{ X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X},//26
	{ X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X},//27
	{ X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X,33, X, X,37, X, X, X, X, X, X, X, X, X},//28
	{ X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X,33, X,37, X, X, X, X, X, X, X, X, X},//29
	{ X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X,37, X, X, X, X, X, X, X, X, X},//30
	{ X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X,18, X, X, X, X, X, X, X, X, X},//31
	{ X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X,18, X, X, X, X, X, X, X, X, X},//32
	{ X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X,18, X, X, X, X, X, X, X, X, X},//33
	{ X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X,18, X, X, X,37, X, X, X, X, X},//34
	{ X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X,18, X, X,37, X, X, X, X, X, X},//35
	{ X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X,18, X, X, X, X, X, X, X, X, X},//36
	{ X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X},//37
	{ X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X},//38
	{39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X,39,39, X, X},//39
	{40,40,40,40,40,40,40,40,40,40, X, X, X, X,22,26, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X},//40
	{41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,43,41,41,41,41,41,41,41,41,41,41,41,41,42,41,41,41,41},//41
	{44,44,45,46,46,46,46,46,46,46,41,41, X, X, X,41, X, X, X, X, X, X, X,41, X, X, X,41, X,41, X,41, X, X, X, X,41,41, X, X, X, X, X, X, X, X, X, X, X, X,41, X, X, X, X},//42
	{ X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X},//43
	{46,46,46,46,46,46,46,46,46,46,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,43,41,41,41,41,41,41,41,41,41,41,41,41,42,41,41,41,41},//44
	{46,46,46,46,46,47,49,49,49,49,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,43,41,41,41,41,41,41,41,41,41,41,41,41,42,41,41,41,41},//45
	{41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,43,41,41,41,41,41,41,41,41,41,41,41,41,42,41,41,41,41},//46
	{41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,43,41,41,41,41,41,41,41,41,41,41,41,41,42,41,41,41,41},//47
	{49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49, X,49,49,49,49,49,49,49,49,49,49,49,49,49,51,49,49,49,49},//48
	{ X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X,50, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X},//49
	{ X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X,50, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X},//50
	{53,53,52,54,54,54,54,54,54,54,49,49, X, X, X,49, X, X, X, X, X, X, X,49, X, X, X,49, X,49, X,49, X, X, X, X,49,49, X, X, X, X, X, X, X, X, X, X, X, X,49, X, X, X, X},//51
	{54,54,54,54,54,55,49,49,49,49, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X,50, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X},//52
	{54,54,54,54,54,54,54,54,54,54, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X,50, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X},//53
	{49,49,49,49,49,49,49,49,49,49, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X,50, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X},//54
	{49,49,49,49,49,49, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X,50, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X},//55
	{19,19,19,19,19,19,19,19,19,19, X,10, X, X,22, X, X, X, X, X, X, X, X, X, 7, X, X, X, X, X, X, X, X, 4, X, X, X, X, X, X, X, X, X, X, X, X,21, X, X, X, X, X, X, X, X},//56
	{ X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X, X,37, X, X, X, X, X, X, X, X, X},//57
};

string estados[] = {
	"Cadena Vacia", //1
	"Entero", //2
	"Hexadecimal incompleto", //3
	"Hexadecimal incompleto", //4
	"Hexadecimal", //5
	"Octal incompleto", //6
	"Octal incompleto", //7
	"Octal", //8
	"Binario incompleto", //9
	"Binario incompleto", //10
	"Binario", //11
	"Entero", //12
	"Entero largo", //13
	"Entero sin signo", //14
	"Entero largo sin signo", //15
	"Operador aritmetico", //16
	"Operador aritmetico", //17
	"Operador Incremento/Decremento", //18
	"Operador Asignacion", //19
	"Entero con signo incompleto", //20
	"Entero con signo", //21
	"Real incompleto", //22
	"Real incompleto", //23
	"Real", //24
	"Real", //25
	"Real", //26
	"Real", //27
	"Entero consigno largo", //28
	"Operador relacional", //29
	"Operador relacional", //30
	"Asignacion", //31
	"Operador aritmetico", //32
	"Operador aritmetico", //33
	"Operador aritmetico", //34
	"Operador binario", //36
	"Operador binario", //37
	"Operador binario", //38
	"Operador binario", //39
	"Operador binario", //40
	"Identificador", //41
	"Real", //42
	"Cadena incompleta", //43
	"Cadena incompleta", //44
	"Cadena", //45
	"Cadena incompleta", //46
	"Cadena incompleta", //47
	"Cadena incompleta", //48
	"Cadena incompleta", //49
	"Caracter incompleto", //50
	"Caracter incompleto", //51
	"Caracter", //52
	"", //53
	"", //54
	"", //55
	"", //56
	"", //57
	"", //58
	"Operador logico", //60
};

int hash (char c) {
	switch (c) {
		case '0':
				return 0;
		case '1':
				return 1;
		case '2':
				return 2;
		case '3':
				return 3;
		case '4':
				return 4;
		case '5':
				return 5;
		case '6':
				return 6;
		case '7':
				return 7;
		case '8':
				return 8;
		case '9':
				return 9;
		case 'a': case 'A':
				return 10;
		case 'b': case 'B':
				return 11;
		case 'c': case 'C':
				return 12;
		case 'd': case 'D':
				return 13;
		case 'e': case 'E':
				return 14;
		case 'f': case 'F':
				return 15;
		case 'g': case 'G':
				return 16;
		case 'h': case 'H':
				return 17;
		case 'i': case 'I':
				return 18;
		case 'j': case 'J':
				return 19;
		case 'k': case 'K':
				return 20;
		case 'l': case 'L':
				return 21;
		case 'm': case 'M':
				return 22;
		case 'n': case 'N':
				return 23;
		case 'o': case 'O':
				return 24;
		case 'p': case 'P':
				return 25;
		case 'q': case 'Q':
				return 26;
		case 'r': case 'R':
				return 27;
		case 's': case 'S':
				return 28;
		case 't': case 'T':
				return 29;
		case 'u': case 'U':
				return 30;
		case 'v': case 'V':
				return 31;
		case 'w': case 'W':
				return 32;
		case 'x': case 'X':
				return 33;
		case 'y': case 'Y':
				return 34;
		case 'z': case 'Z':
				return 35;
		case '\'':
				return 36;
		case '"':
				return 37;
		case '+':
				return 38;
		case '-':
				return 39;
		case '*':
				return 40;
		case '/':
				return 41;
		case '>':
				return 42;
		case '<':
				return 43;
		case '%':
				return 44;
		case '=':
				return 45;
		case '.':
				return 46;
		case '^':
				return 47;
		case '&':
				return 48;
		case '|':
				return 49;
		case '\\':
				return 50;
		case '$':
				return 51;
		case '_':
				return 52;
		case '!':
				return 53;
		default:
				return 54;
	}
}

bool esPalabraReservada (string token) {
	for (int i = 0; i < PALABRAS_RESERVADAS; i++) {
		if (token == palabrasReservadas[i]) {
			return true;
		}
	}
	return false;
}

int evaluar(const char *cad) {
	int estado=0; //Contador de estado
	int pos=1; //Contador de posiciones recorridas

	while (*cad!='\0') { //hasta llegar al fin de cadena
		int in=hash(*cad); //Obtiene la columna de la tabla con la funcion hash
		//cout<<estado<<endl;
		if (in>=0) { //La funcion hash retorna negativo para caracteres no validos en C, si lo encuentra se detiene y sale
			int sig=G[estado][in]; //obtiene el estado siguiente
			if (sig==X) //Si llega a caracter inesperado, rompe el ciclo y retorna la posicion en la que encontro el error
				return -pos;
			estado=sig;
		} else
			return -pos;
		cad++;
		pos++;
	}
	return estado;
}

#endif

