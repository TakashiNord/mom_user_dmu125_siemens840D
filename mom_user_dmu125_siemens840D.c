/* 

*/

#include <windows.h>
#include <defs.h>


//-------------------------------------------------------------------------
// Data declarations

extern char aExtn_rtv_mom_c[26]; // weak
extern char aUnload[7]; // weak
extern char aM128_init_zero[15]; // weak
extern char aMom_reload_kin[]; // idb
extern char aKin_4th_axis_v[20]; // weak
extern char aM128_init[10]; // weak
extern char aPos[4]; // weak
extern wchar_t a2[2]; // weak
extern char aMcs_goto[9]; // weak
extern char aM128[5]; // weak
extern char aMom_output_l_0[]; // idb
extern char aMom_output_lit[]; // idb
extern wchar_t a1[2]; // weak
extern char aOut_angle_pos[14]; // weak
extern wchar_t a0[2]; // weak
extern char aPlane[6]; // weak
extern char aArg0S[]; // idb
extern char Format[]; // idb
extern char aAsRasx[10]; // weak
extern _UNKNOWN unk_1000312C; // weak
extern char RootPathName[4]; // idb
extern int dword_10003234; // weak
extern int dword_10003248; // weak

//-------------------------------------------------------------------------
// Function declarations

int __cdecl entry_rtv_mom_cp_part_attr(int a1, int a2);
int __cdecl sub_10001080(int a1, int a2, int a3, int a4);
signed int __cdecl ufusr_ask_unload();
signed int __cdecl sub_100014B0();
BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved);
// BOOL __stdcall GetVolumeInformationA(LPCSTR lpRootPathName, LPSTR lpVolumeNameBuffer, DWORD nVolumeNameSize, LPDWORD lpVolumeSerialNumber, LPDWORD lpMaximumComponentLength, LPDWORD lpFileSystemFlags, LPSTR lpFileSystemNameBuffer, DWORD nFileSystemNameSize);
// BOOL __stdcall DisableThreadLibraryCalls(HMODULE hLibModule);
// int sprintf(char *Dest, const char *Format, ...);
// int __cdecl UF_MOM_ask_assoc_double_array(_DWORD, _DWORD, _DWORD, _DWORD); weak
// int __cdecl UF_MOM_execute_command(_DWORD, _DWORD); weak
// int __cdecl UF_MOM_set_assoc_double_array(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD); weak
// int __cdecl UF_MOM_set_string(_DWORD, _DWORD, _DWORD); weak
// int UF_is_initialized(void); weak
// int UF_initialize(void); weak
// int __cdecl UF_MOM_ask_interp_from_param(_DWORD, _DWORD); weak
// int __cdecl UF_MOM_ask_mom(_DWORD, _DWORD); weak
// int UF_terminate(void); weak
// int __cdecl UF_MOM_extend_xlator(_DWORD, _DWORD, _DWORD); weak
// int __cdecl UF_UI_display_nonmodal_msg(_DWORD, _DWORD, _DWORD); weak


//----- (10001000) --------------------------------------------------------
int __cdecl entry_rtv_mom_cp_part_attr(int a1, int a2)
{
  char v2; // bl@1
  int result; // eax@2
  int v4; // [sp+4h] [bp-8h]@1
  int v5; // [sp+8h] [bp-4h]@4

  v4 = 0;
  v2 = 0;
  if ( !UF_is_initialized() )
  {
    result = UF_initialize();
    if ( result )
      return result;
    v2 = 1;
  }
  UF_MOM_ask_interp_from_param(a1, &v4);
  UF_MOM_ask_mom(a1, &v5);
  UF_MOM_extend_xlator(v5, "EXTN_rtv_mom_cp_part_attr", sub_10001080);
  result = a2;
  *(_DWORD *)a2 = 0;
  if ( v2 == 1 )
    result = UF_terminate();
  return result;
}
// 10002034: using guessed type int UF_is_initialized(void);
// 10002038: using guessed type int UF_initialize(void);
// 1000203C: using guessed type int __cdecl UF_MOM_ask_interp_from_param(_DWORD, _DWORD);
// 10002040: using guessed type int __cdecl UF_MOM_ask_mom(_DWORD, _DWORD);
// 10002044: using guessed type int UF_terminate(void);
// 10002048: using guessed type int __cdecl UF_MOM_extend_xlator(_DWORD, _DWORD, _DWORD);

//----- (10001080) --------------------------------------------------------
int __cdecl sub_10001080(int a1, int a2, int a3, int a4)
{
  int result; // eax@2
  int v5; // edi@3
  int v6; // esi@4
  int v7; // [sp+10h] [bp-198h]@11
  int v8; // [sp+14h] [bp-194h]@11
  int v9; // [sp+18h] [bp-190h]@11
  int v10; // [sp+1Ch] [bp-18Ch]@11
  int v11; // [sp+20h] [bp-188h]@11
  int v12; // [sp+24h] [bp-184h]@11
  int v13; // [sp+28h] [bp-180h]@9
  int v14; // [sp+2Ch] [bp-17Ch]@9
  int v15; // [sp+30h] [bp-178h]@9
  int v16; // [sp+34h] [bp-174h]@9
  int v17; // [sp+38h] [bp-170h]@9
  int v18; // [sp+3Ch] [bp-16Ch]@9
  int v19; // [sp+40h] [bp-168h]@7
  int v20; // [sp+44h] [bp-164h]@7
  int v21; // [sp+48h] [bp-160h]@7
  int v22; // [sp+4Ch] [bp-15Ch]@7
  char v23; // [sp+58h] [bp-150h]@16
  char Dest; // [sp+7Ch] [bp-12Ch]@3

  if ( sub_100014B0() == 1 )
  {
    UF_UI_display_nonmodal_msg("Внимание!", &unk_1000312C, 0);
    UF_terminate();
    result = 0;
  }
  else
  {
    v5 = a3;
    sprintf(&Dest, "Number of args %ld", a3);
    if ( a3 > 0 )
    {
      v6 = a4;
      do
      {
        sprintf(&Dest, "Arg 0 %s", *(_DWORD *)v6);
        v6 += 4;
        --v5;
      }
      while ( v5 );
    }
    if ( !strcmp(*(const char **)(a4 + 4), "PLANE") )
    {
      UF_MOM_ask_assoc_double_array(a1, "out_angle_pos", L"0", &v19);
      UF_MOM_ask_assoc_double_array(a1, "out_angle_pos", L"1", &v21);
      sprintf(&Dest, "MOM_output_literal \"ROT Z%.3lf \"", v21, v22);
      UF_MOM_execute_command(a1, &Dest);
      sprintf(&Dest, "MOM_output_literal \"AROT Y%.3lf \"", v19, v20);
      UF_MOM_execute_command(a1, &Dest);
    }
    if ( !strcmp(*(const char **)(a4 + 4), "M128") )
    {
      UF_MOM_ask_assoc_double_array(a1, "mcs_goto", L"0", &v13);
      UF_MOM_ask_assoc_double_array(a1, "mcs_goto", L"1", &v15);
      UF_MOM_ask_assoc_double_array(a1, "mcs_goto", L"2", &v17);
      UF_MOM_set_assoc_double_array(a1, "pos", L"0", v13, v14);
      UF_MOM_set_assoc_double_array(a1, "pos", L"1", v15, v16);
      UF_MOM_set_assoc_double_array(a1, "pos", L"2", v17, v18);
    }
    if ( !strcmp(*(const char **)(a4 + 4), "M128_init") )
    {
      v7 = 0;
      v8 = 0;
      v9 = 1719609481;
      v10 = 1072079006;
      v11 = 1719609481;
      v12 = 1072079006;
      UF_MOM_set_assoc_double_array(a1, "kin_4th_axis_vector", L"0", 0, 0);
      UF_MOM_set_assoc_double_array(a1, "kin_4th_axis_vector", L"1", 1719609481, 1072079006);
      UF_MOM_set_assoc_double_array(a1, "kin_4th_axis_vector", L"2", 1719609481, 1072079006);
      sprintf(&Dest, "MOM_reload_kinematics");
      UF_MOM_execute_command(a1, &Dest);
    }
    if ( !strcmp(*(const char **)(a4 + 4), "M128_init_zero") )
    {
      UF_MOM_ask_assoc_double_array(a1, "kin_4th_axis_vector", L"0", &v7);
      UF_MOM_ask_assoc_double_array(a1, "kin_4th_axis_vector", L"1", &v9);
      UF_MOM_ask_assoc_double_array(a1, "kin_4th_axis_vector", L"2", &v11);
      v7 = 0;
      v8 = 0;
      v9 = 0;
      v10 = 0;
      v11 = 0;
      v12 = 0;
      UF_MOM_set_assoc_double_array(a1, "kin_4th_axis_vector", L"0", 0, 0);
      UF_MOM_set_assoc_double_array(a1, "kin_4th_axis_vector", L"1", v9, v10);
      UF_MOM_set_assoc_double_array(a1, "kin_4th_axis_vector", L"2", v11, v12);
    }
    if ( !strcmp(*(const char **)(a4 + 4), "UNLOAD") )
      dword_10003234 = 0;
    UF_MOM_set_string(a1, &v23, &Dest);
    UF_terminate();
    result = 0;
  }
  return result;
}
// 10002024: using guessed type int __cdecl UF_MOM_ask_assoc_double_array(_DWORD, _DWORD, _DWORD, _DWORD);
// 10002028: using guessed type int __cdecl UF_MOM_execute_command(_DWORD, _DWORD);
// 1000202C: using guessed type int __cdecl UF_MOM_set_assoc_double_array(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10002030: using guessed type int __cdecl UF_MOM_set_string(_DWORD, _DWORD, _DWORD);
// 10002044: using guessed type int UF_terminate(void);
// 10002050: using guessed type int __cdecl UF_UI_display_nonmodal_msg(_DWORD, _DWORD, _DWORD);
// 10003080: using guessed type wchar_t a2[2];
// 100030E0: using guessed type wchar_t a1[2];
// 100030F4: using guessed type wchar_t a0[2];
// 10003234: using guessed type int dword_10003234;

//----- (100014A0) --------------------------------------------------------
signed int __cdecl ufusr_ask_unload()
{
  return 3;
}

//----- (100014B0) --------------------------------------------------------
signed int __cdecl sub_100014B0()
{
  signed int v0; // eax@1
  int *v1; // ecx@1
  DWORD VolumeSerialNumber; // [sp+0h] [bp-86Ch]@1
  int v4; // [sp+4h] [bp-868h]@1
  int v5; // [sp+8h] [bp-864h]@1
  int v6; // [sp+Ch] [bp-860h]@1
  int v7; // [sp+10h] [bp-85Ch]@1
  int v8; // [sp+14h] [bp-858h]@1
  int v9; // [sp+18h] [bp-854h]@1
  int v10; // [sp+1Ch] [bp-850h]@1
  int v11; // [sp+20h] [bp-84Ch]@1
  int v12; // [sp+24h] [bp-848h]@1
  int v13; // [sp+28h] [bp-844h]@1
  int v14; // [sp+2Ch] [bp-840h]@1
  int v15; // [sp+30h] [bp-83Ch]@1
  int v16; // [sp+34h] [bp-838h]@1
  int v17; // [sp+38h] [bp-834h]@1
  int v18; // [sp+3Ch] [bp-830h]@1
  int v19; // [sp+40h] [bp-82Ch]@1
  int v20; // [sp+44h] [bp-828h]@1
  int v21; // [sp+48h] [bp-824h]@1
  int v22; // [sp+4Ch] [bp-820h]@1
  int v23; // [sp+50h] [bp-81Ch]@1
  int v24; // [sp+54h] [bp-818h]@1
  int v25; // [sp+58h] [bp-814h]@1
  int v26; // [sp+5Ch] [bp-810h]@1
  int v27; // [sp+60h] [bp-80Ch]@1
  int v28; // [sp+64h] [bp-808h]@1
  int v29; // [sp+68h] [bp-804h]@1
  int v30; // [sp+6Ch] [bp-800h]@1
  int v31; // [sp+70h] [bp-7FCh]@1
  int v32; // [sp+74h] [bp-7F8h]@1
  int v33; // [sp+78h] [bp-7F4h]@1
  int v34; // [sp+7Ch] [bp-7F0h]@1
  int v35; // [sp+80h] [bp-7ECh]@1
  int v36; // [sp+84h] [bp-7E8h]@1
  int v37; // [sp+88h] [bp-7E4h]@1
  int v38; // [sp+8Ch] [bp-7E0h]@1
  int v39; // [sp+90h] [bp-7DCh]@1
  DWORD MaximumComponentLength; // [sp+94h] [bp-7D8h]@1
  DWORD FileSystemFlags; // [sp+98h] [bp-7D4h]@1
  CHAR FileSystemNameBuffer; // [sp+9Ch] [bp-7D0h]@1
  CHAR VolumeNameBuffer; // [sp+484h] [bp-3E8h]@1

  v10 = 1691546623;
  v15 = 1691546623;
  v4 = -1125368102;
  v5 = 476680955;
  v6 = -1675511315;
  v7 = -991997948;
  v8 = -995392078;
  v9 = -1195104158;
  v11 = 2021001887;
  v12 = -469606654;
  v13 = -1666107977;
  v14 = 548989400;
  v16 = -2078945985;
  v17 = 748389263;
  v18 = 1221985931;
  v19 = 134388580;
  v20 = 1212903245;
  v21 = -533768420;
  v22 = -1267737711;
  v23 = 808576418;
  v24 = -598964001;
  v25 = -1328157103;
  v26 = -2077920088;
  v27 = -1599057736;
  v28 = 1426045915;
  v29 = -1325951508;
  v30 = 205835745;
  v31 = 1741713889;
  v32 = -236991870;
  v33 = 753438737;
  v34 = -1066013373;
  v35 = 1754513443;
  v36 = -868006512;
  v37 = 345928369;
  v38 = -732432788;
  v39 = 1;
  GetVolumeInformationA(
    "C:\\",
    &VolumeNameBuffer,
    0x3E8u,
    &VolumeSerialNumber,
    &MaximumComponentLength,
    &FileSystemFlags,
    &FileSystemNameBuffer,
    0x3E8u);
  v0 = 0;
  v1 = &v4;
  while ( VolumeSerialNumber != *v1 )
  {
    ++v0;
    ++v1;
    if ( v0 >= 36 )
      return 0;
  }
  return 1;
}

//----- (100017AE) --------------------------------------------------------
BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  if ( fdwReason == 1 )
  {
    if ( !dword_10003248 )
      DisableThreadLibraryCalls(hinstDLL);
  }
  return 1;
}
// 10003248: using guessed type int dword_10003248;

// ALL OK, 5 function(s) have been successfully decompiled
