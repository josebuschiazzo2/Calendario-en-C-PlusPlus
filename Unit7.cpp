//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "Unit7.h"

AnsiString TS::Sello (int n)
{
switch (n)
{       case 0: S="Sol.bmp"; break;
        case 1: S="Dragon.bmp"; break;
        case 2: S="Viento.bmp"; break;
        case 3: S="Noche.bmp"; break;
        case 4: S="Semilla.bmp"; break;
        case 5: S="Serpiente.bmp"; break;
        case 6: S="Enlazador de Mundo.bmp"; break;
        case 7: S="Mano.bmp"; break;
        case 8: S="Estrella.bmp"; break;
        case 9: S="Luna.bmp"; break;
        case 10: S="Perro.bmp"; break;
        case 11: S="Mono.bmp"; break;
        case 12: S="Humano.bmp"; break;
        case 13: S="Caminante del Cielo.bmp"; break;
        case 14: S="Mago.bmp"; break;
        case 15: S="Aguila.bmp"; break;
        case 16: S="Guerrero.bmp"; break;
        case 17: S="Tierra.bmp"; break;
        case 18: S="Espejo.bmp"; break;
        case 19: S="Tormenta.bmp"; break;
        case 20: S="Sol.bmp"; break;
        case 21: S="Dragon.bmp"; break;
        case 22: S="Viento.bmp"; break;
        case 23: S="Noche.bmp"; break;
        case 24: S="Semilla.bmp"; break;
        case 25: S="Serpiente.bmp"; break;
        case 26: S="Enlazador de Mundo.bmp"; break;
        case 27: S="Mano.bmp"; break;
        case 28: S="Estrella.bmp"; break;
        case 29: S="Luna.bmp"; break;
        case 30: S="Perro.bmp"; break;
        case 31: S="Mono.bmp"; break;
        case 32: S= S="Humano.bmp"; break;
        case 33: S="Caminante del Cielo.bmp"; break;
        case 34: S="Mago.bmp"; break;
        case 35: S="Aguila.bmp"; break;
        case 36: S="Guerrero.bmp"; break;
        case 37: S="Tierra.bmp"; break;
        case 38: S="Espejo.bmp"; break;
        case 39: S="Tormenta.bmp"; break;
                }
 return S;               
}
//---------------------------------------------------------------------------
#pragma package(smart_init)
