//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
USERES("FS5.res");
USEPACKAGE("vcl50.bpi");
USEPACKAGE("vcldb50.bpi");
USEPACKAGE("vclib50.bpi");
USEPACKAGE("fs5.bpi");
USEPACKAGE("fsDB5.bpi");
USEUNIT("fs_iibxreg.pas");
USEUNIT("fs_iibxrtti.pas");
USERES("fs_iReg.dcr");
//---------------------------------------------------------------------------
#pragma package(smart_init)
//---------------------------------------------------------------------------

//   Package source.
//---------------------------------------------------------------------------

#pragma argsused
int WINAPI DllEntryPoint(HINSTANCE hinst, unsigned long reason, void*)
{
        return 1;
}
//---------------------------------------------------------------------------
