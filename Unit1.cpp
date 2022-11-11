//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
#include "Unit6.h"
#include "conio.h"
#include <time.h>
#include <dos.h>
#include   <stdio.h>
#include "math.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Salir1Click(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------



void __fastcall TForm1::About1Click(TObject *Sender)
{
Form1->Enabled=false;
Form2->Visible=true;
Form2->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Mes1Click(TObject *Sender)
{
  Application->ProcessMessages();
  TSellos *Mes;
  Mes= new TSellos;
  Mes->CrearSellos(ComboBox5->ItemIndex, ComboBox2->ItemIndex);
  delete Mes;
  }
//---------------------------------------------------------------------------



void __fastcall TForm1::Image1Click(TObject *Sender)
{
 Application->ProcessMessages();
 TSellos *Sello;
 Sello= new TSellos;
 Sello->CrearTodo(1,1);
 delete Sello;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image2Click(TObject *Sender)
{
 Application->ProcessMessages();
 TSellos *Sello;
 Sello= new TSellos;
 Sello->CrearTodo(2,1);
 delete Sello;
  }
//---------------------------------------------------------------------------

void __fastcall TForm1::Image3Click(TObject *Sender)
{
 Application->ProcessMessages();
 TSellos *Sello;
 Sello= new TSellos;
 Sello->CrearTodo(3,1);
 delete Sello;
 }
//---------------------------------------------------------------------------

void __fastcall TForm1::Image4Click(TObject *Sender)
{
 Application->ProcessMessages();
 TSellos *Sello;
 Sello= new TSellos;
 Sello->CrearTodo(4,1);
 delete Sello;
 }
//---------------------------------------------------------------------------

void __fastcall TForm1::Image5Click(TObject *Sender)
{
 Application->ProcessMessages();
 TSellos *Sello;
 Sello= new TSellos;
 Sello->CrearTodo(5,1);
 delete Sello;
 }
//---------------------------------------------------------------------------

void __fastcall TForm1::Image6Click(TObject *Sender)
{
 Application->ProcessMessages();
 TSellos *Sello;
 Sello= new TSellos;
 Sello->CrearTodo(6,1);
 delete Sello;
 }
//---------------------------------------------------------------------------

void __fastcall TForm1::Image7Click(TObject *Sender)
{
 Application->ProcessMessages();
 TSellos *Sello;
 Sello= new TSellos;
 Sello->CrearTodo(7,1);
 delete Sello;
 }
//---------------------------------------------------------------------------

void __fastcall TForm1::Image8Click(TObject *Sender)
{
 Application->ProcessMessages();
 TSellos *Sello;
 Sello= new TSellos;
 Sello->CrearTodo(1,2);
 delete Sello;
 }
//---------------------------------------------------------------------------

void __fastcall TForm1::Image9Click(TObject *Sender)
{
 Application->ProcessMessages();
 TSellos *Sello;
 Sello= new TSellos;
 Sello->CrearTodo(2,2);
 delete Sello;
 }
//---------------------------------------------------------------------------

void __fastcall TForm1::Image10Click(TObject *Sender)
{
 Application->ProcessMessages();
 TSellos *Sello;
 Sello= new TSellos;
 Sello->CrearTodo(3,2);
 delete Sello;
  }
//---------------------------------------------------------------------------

void __fastcall TForm1::Image11Click(TObject *Sender)
{
 Application->ProcessMessages();
 TSellos *Sello;
 Sello= new TSellos;
 Sello->CrearTodo(4,2);
 delete Sello;
 }
//---------------------------------------------------------------------------

void __fastcall TForm1::Image12Click(TObject *Sender)
{
 Application->ProcessMessages();
 TSellos *Sello;
 Sello= new TSellos;
 Sello->CrearTodo(5,2);
 delete Sello;
 }
//---------------------------------------------------------------------------

void __fastcall TForm1::Image13Click(TObject *Sender)
{
 Application->ProcessMessages();
 TSellos *Sello;
 Sello= new TSellos;
 Sello->CrearTodo(6,2);
 delete Sello;
 }
//---------------------------------------------------------------------------

void __fastcall TForm1::Image14Click(TObject *Sender)
{
 Application->ProcessMessages();
 TSellos *Sello;
 Sello= new TSellos;
 Sello->CrearTodo(7,2);
 delete Sello;
 }
//---------------------------------------------------------------------------

void __fastcall TForm1::Image15Click(TObject *Sender)
{
 Application->ProcessMessages();
 TSellos *Sello;
 Sello= new TSellos;
 Sello->CrearTodo(1,3);
 delete Sello;
 }
//---------------------------------------------------------------------------

void __fastcall TForm1::Image16Click(TObject *Sender)
{
 Application->ProcessMessages();
 TSellos *Sello;
 Sello= new TSellos;
 Sello->CrearTodo(2,3);
 delete Sello;
 }
//---------------------------------------------------------------------------

void __fastcall TForm1::Image17Click(TObject *Sender)
{
 Application->ProcessMessages();
 TSellos *Sello;
 Sello= new TSellos;
 Sello->CrearTodo(3,3);
 delete Sello;
  }
//---------------------------------------------------------------------------

void __fastcall TForm1::Image18Click(TObject *Sender)
{
 Application->ProcessMessages();
 TSellos *Sello;
 Sello= new TSellos;
 Sello->CrearTodo(4,3);
 delete Sello;
  }
//---------------------------------------------------------------------------

void __fastcall TForm1::Image19Click(TObject *Sender)
{
 Application->ProcessMessages();
 TSellos *Sello;
 Sello= new TSellos;
 Sello->CrearTodo(5,3);
 delete Sello;
 }
//---------------------------------------------------------------------------

void __fastcall TForm1::Image20Click(TObject *Sender)
{
 Application->ProcessMessages();
 TSellos *Sello;
 Sello= new TSellos;
 Sello->CrearTodo(6,3);
 delete Sello;
 }
//---------------------------------------------------------------------------

void __fastcall TForm1::Image21Click(TObject *Sender)
{
 Application->ProcessMessages();
 TSellos *Sello;
 Sello= new TSellos;
 Sello->CrearTodo(7,3);
 delete Sello;
  }
//---------------------------------------------------------------------------

void __fastcall TForm1::Image22Click(TObject *Sender)
{
 Application->ProcessMessages();
 TSellos *Sello;
 Sello= new TSellos;
 Sello->CrearTodo(1,4);
 delete Sello;
 }
//---------------------------------------------------------------------------

void __fastcall TForm1::Image23Click(TObject *Sender)
{
 Application->ProcessMessages();
 TSellos *Sello;
 Sello= new TSellos;
 Sello->CrearTodo(2,4);
 delete Sello;
 }
//---------------------------------------------------------------------------

void __fastcall TForm1::Image24Click(TObject *Sender)
{
 Application->ProcessMessages();
 TSellos *Sello;
 Sello= new TSellos;
 Sello->CrearTodo(3,4);
 delete Sello;
 }
//---------------------------------------------------------------------------

void __fastcall TForm1::Image25Click(TObject *Sender)
{
 Application->ProcessMessages();
 TSellos *Sello;
 Sello= new TSellos;
 Sello->CrearTodo(4,4);
 delete Sello;
 }
//---------------------------------------------------------------------------

void __fastcall TForm1::Image26Click(TObject *Sender)
{
 Application->ProcessMessages();
 TSellos *Sello;
 Sello= new TSellos;
 Sello->CrearTodo(5,4);
 delete Sello;
 }
//---------------------------------------------------------------------------

void __fastcall TForm1::Image27Click(TObject *Sender)
{
 Application->ProcessMessages();
 TSellos *Sello;
 Sello= new TSellos;
 Sello->CrearTodo(6,4);
 delete Sello;
 }
//---------------------------------------------------------------------------

void __fastcall TForm1::Image28Click(TObject *Sender)
{
 Application->ProcessMessages();
 TSellos *Sello;
 Sello= new TSellos;
 Sello->CrearTodo(7,4);
 delete Sello;
  }
//---------------------------------------------------------------------------


void __fastcall TForm1::FormCreate(TObject *Sender)
{
K=0;
StatusBar1->Color=Form1->Color;
ComboBox1->ItemIndex=0;
ComboBox2->ItemIndex=0;
ComboBox2->OnClick;
Hoy1->Click();
StatusBar1->Panels->Items[5]->Text= Application->ExeName;
}
//---------------------------------------------------------------------------






void __fastcall TForm1::Hoy1Click(TObject *Sender)
{
AnsiString F;
float d,m,a;
int l,s;
DateTimePicker1->DateTime= Now();
F= StrToDateTime (DateTimePicker1->DateTime);
d= StrToFloat(F[1]) * 10 + StrToFloat (F[2]);
//Label24->Caption=FloatToStr (d);
m= StrToFloat(F[4]) * 10 + StrToFloat (F[5]);
//Label25->Caption=FloatToStr(m);
a= StrToFloat(F[7]) * 1000 + StrToFloat (F[8]) * 100 + StrToFloat (F[9]) * 10 + StrToFloat (F[10]);
//Label26->Caption=FloatToStr(a);

if (a<2006) Application->MessageBox("Fecha No Reconcida Momentaneamente","ERRORRR GARRAFAL!", MB_OK);
else { if (m==2 && d==29) Application->MessageBox("Dia Fuera del Tiempo","ERRORRR GARRAFAL!", MB_OK);
       else {if ((m==7 && d>25) || m>7) ComboBox5->ItemIndex= a - 2005;
                                  else  ComboBox5->ItemIndex= a - 2006;
if (ComboBox5->ItemIndex < 4)
        ComboBox1->ItemIndex = ComboBox5->ItemIndex;
else
        ComboBox1->ItemIndex = ComboBox5->ItemIndex - (INT(ComboBox5->ItemIndex/4)*4);
K=d;
if (m==7 && d>25) K-=365;
switch (INT(m)){
           case 7: K+=30;
           case 6: K+=31;
           case 5: K+=30;
           case 4: K+=31;
           case 3: K+=28;
           case 2: K+=31;
           case 1: K+=31;
           case 12: K+=30;
           case 11: K+=31;
           case 10: K+=30;
           case 9: K+=31;
           case 8: K+=6;
                      }
ComboBox2->ItemIndex= INT (K/28);
TSellos *Mes;
Mes= new TSellos;
Mes->CrearSellos(ComboBox5->ItemIndex, ComboBox2->ItemIndex);
l= K - ((INT (K/28))*28 + ((INT (K/7)) - (INT (K/28))*4)*7);
s= 1 + (INT (K/7)) - (INT (K/28))*4;
if (l==0) {l=7;s=4;}
Mes->CrearTodo(l,s);
delete Mes;
}}
}
//---------------------------------------------------------------------------


void __fastcall TForm1::CuerpoHumano1Click(TObject *Sender)
{
if (Image40->Visible==true)
                          {Image40->Visible=false;
                            Memo1->Visible= true;
                            CuerpoHumano1->Caption= "Cuerpo Humano";}
                     else {Image40->Visible=true;
                            Memo1->Visible= false;
                            CuerpoHumano1->Caption= "Texto";}
}
//---------------------------------------------------------------------------


void __fastcall TForm1::DateTimePicker1Change(TObject *Sender)
{
AnsiString F;
int l,s;
float d,m,a;
F= StrToDateTime (DateTimePicker1->DateTime);
d= StrToFloat(F[1]) * 10 + StrToFloat (F[2]);
//Label24->Caption=FloatToStr (d);
m= StrToFloat(F[4]) * 10 + StrToFloat (F[5]);
//Label25->Caption=FloatToStr(m);
a= StrToFloat(F[7]) * 1000 + StrToFloat (F[8]) * 100 + StrToFloat (F[9]) * 10 + StrToFloat (F[10]);
//Label26->Caption=FloatToStr(a);

if (a<2006) Application->MessageBox("Fecha No Reconcida Momentaneamente","ERRORRR GARRAFAL!", MB_OK);
else { if (m==2 && d==29) Application->MessageBox("Dia Fuera del Tiempo","ERRORRR GARRAFAL!", MB_OK);
       else {if ((m==7 && d>25) || m>7) ComboBox5->ItemIndex= a - 2005;
                                  else  ComboBox5->ItemIndex= a - 2006;
if (ComboBox5->ItemIndex < 4)
        ComboBox1->ItemIndex = ComboBox5->ItemIndex;
else
        ComboBox1->ItemIndex = ComboBox5->ItemIndex - (INT(ComboBox5->ItemIndex/4)*4);
K=d;
if (m==7 && d>25) K-=365;
switch (INT(m)){
           case 7: K+=30;
           case 6: K+=31;
           case 5: K+=30;
           case 4: K+=31;
           case 3: K+=28;
           case 2: K+=31;
           case 1: K+=31;
           case 12: K+=30;
           case 11: K+=31;
           case 10: K+=30;
           case 9: K+=31;
           case 8: K+=6;
                      }
ComboBox2->ItemIndex= INT (K/28);
TSellos *Mes;
Mes= new TSellos;
Mes->CrearSellos(ComboBox5->ItemIndex, ComboBox2->ItemIndex);
l= K - ((INT (K/28))*28 + ((INT (K/7)) - (INT (K/28))*4)*7);
s= 1 + (INT (K/7)) - (INT (K/28))*4;
if (l==0) {l=7;s=4;}
Mes->CrearTodo(l,s);
delete Mes;

}}

}
//---------------------------------------------------------------------------


void __fastcall TForm1::Nota1Click(TObject *Sender)
{
Form5->Enabled=true;
Form5->Visible=true;
Form1->Enabled=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Configurar1Click(TObject *Sender)
{
Form1->Enabled=false;
Form6->Visible=true;
Form6->Enabled=true;
Form6->Color=Form1->Color;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ComboBox5Change(TObject *Sender)
{
if (ComboBox5->ItemIndex < 4)
        ComboBox1->ItemIndex = ComboBox5->ItemIndex;
else
        ComboBox1->ItemIndex = ComboBox5->ItemIndex - (INT(ComboBox5->ItemIndex/4)*4);
}
//---------------------------------------------------------------------------




void __fastcall TForm1::FormMouseUp(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
if (Button==mbRight) PopupMenu1->Popup(X + Form1->Left + 10, Y + Form1->Top + 50);

}
//---------------------------------------------------------------------------



void __fastcall TForm1::GroupBox5MouseUp(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
if (Button==mbRight) PopupMenu1->Popup(X + Form1->Left + 20, Y + Form1->Top + 450);        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::GroupBox1MouseUp(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
if (Button==mbRight) PopupMenu1->Popup(X + Form1->Left + 570, Y + Form1->Top + 590);        
}
//---------------------------------------------------------------------------





void __fastcall TForm1::CumpleKin1Click(TObject *Sender)
{
//En reparacion
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Cumple1Click(TObject *Sender)
{
//en reaparcakdas        
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Image1MouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{
StatusBar1->Panels->Items[0]->Text = "Plasma";
//StatusBar1->Panels->Items[1]->Text = "Dali 1";
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Image29MouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[0]->Text = "Sello";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image30MouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[0]->Text = "Guia";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label3MouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{
StatusBar1->Panels->Items[0]->Text = "Numero de Kin";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image41MouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[0]->Text = "Condon Semanal del I King";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image31MouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[0]->Text = "Tono del Sello";
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Label1MouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{
StatusBar1->Panels->Items[0]->Text = "Nombre del Sello";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label15MouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[0]->Text = "Nombre del Tono";
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Image57MouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[0]->Text = "Chacra Pulsante en el Dia";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Memo1MouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{
StatusBar1->Panels->Items[0]->Text = "Informacion del Dia";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::GroupBox5MouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[0]->Text = "Onda Encantada";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image43MouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[0]->Text = "Imagen del Vinal";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image39MouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[0]->Text = "Imagen de la Runa";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::GroupBox1MouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
StatusBar1->Panels->Items[0]->Text = "Calendario Gregoriano";
}
//---------------------------------------------------------------------------


