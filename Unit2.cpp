//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
#include "Unit1.h"
#include "Unit2.h"
#include "Unit6.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
        : TForm(Owner)
{

}
//---------------------------------------------------------------------------



void __fastcall TForm2::FormClose(TObject *Sender, TCloseAction &Action)
{
Form2->Enabled=false;
Form1->Enabled=true;
}
//---------------------------------------------------------------------------




void __fastcall TForm2::FormKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
if (Key == VK_F2) {MaskEdit1->Visible=true; MaskEdit1->SetFocus();}

}
//---------------------------------------------------------------------------

void __fastcall TForm2::MaskEdit1DblClick(TObject *Sender)
{
if (MaskEdit1->Text=="Buschi2") {Label4->Caption="Hola Jose!!!!:";
                                 Label5->Caption="Panel Activado";
                                 Form6->GroupBox5->Visible=true;
                                 Form6->Width=1000;
                                 }

}
//---------------------------------------------------------------------------


