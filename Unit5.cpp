//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
#include <fstream.h>
#include "Unit1.h"
#include "Unit5.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm5 *Form5;
//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------


void __fastcall TForm5::FormClose(TObject *Sender, TCloseAction &Action)
{
Form5->Enabled=false;
Form1->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm5::Button1Click(TObject *Sender)
{
/*ofstream es;
es.open(.c_str());
if (!es.fail()) {
              es<<Memo1->Text<<endl;
                  }
else ShowMessage("Error en el Creado del Archivo");*/
}
//---------------------------------------------------------------------------

