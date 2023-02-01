
#ifndef _PP_PROJ_H_
#define _PP_PROJ_H_
//***********************************************************************************
// C header for accessing PMAC Global, CSGlobal, Ptr vars
// _PPScriptMode_ for Pmac Script like access global & csglobal
// global Mypvar - access with "Mypvar"
// global Myparray(32) - access with "Myparray(i)"
// csglobal Myqvar - access with "Myqvar(i)" where "i" is Coord #
// csglobal Myqarray(16) - access with "Myqvar(i,j)" where "j" is index
// _EnumMode_ for Pmac enum data type checking on Set & Get global functions
// Example
// global Mypvar
// csglobal Myqvar
// "SetGlobalVar(Myqvar, data)" will give a compile error because its a csglobal var.
// "SetCSGlobalVar(Mypvar, data)" will give a compile error because its a global var.
//************************************************************************************

#ifdef _PPScriptMode_
enum globalP {_globalP_=-1};
enum globalParray {_globalParray_=-1};
enum csglobalQ {_csglobalQ_=-1};
enum csglobalQarray {_csglobalQarray_=-1};

enum ptrM {_ptrM_=-1
,Z_JOGP=8192
,Z_JOGN=8193
,T_JOGP=8194
,T_JOGN=8195
,R_JOGP=8196
,R_JOGN=8197
,W_JOGP=8198
,W_JOGN=8199
,JogVel=8200
,WorkARM=8201
,StationPos=8202
,WaferSize=8203
,Pitch=8204
,Stroke=8205
,Offset=8206
,TotalSlotNumber=8207
,RetractPos=8208
,ReportActPosZ=8209
,ReportActPosT=8210
,ReportActPosR=8211
,ReportActPosW=8212
,DeadMan=8213
,Breaker_ON=8214};
enum ptrMarray {_ptrMarray_=-1};
#define	ReportDesPosZ	pshm->P[8192]
#define	ReportDesPosT	pshm->P[8193]
#define	ReportDesPosR	pshm->P[8194]
#define	ReportDesPosW	pshm->P[8195]
#define	PowerStatus	pshm->P[8196]
#define	PowerOnError	pshm->P[8197]
#define	ErrorStatu	pshm->P[8198]
#define	AutoRun	pshm->P[8199]
#define	RunMode	pshm->P[8200]
#define	JogStatus	pshm->P[8201]
#define	true	pshm->P[8202]
#define	false	pshm->P[8203]
#define	RunStop	pshm->P[8204]
#define	HomeMode	pshm->P[8205]
#define	HomeStatus	pshm->P[8206]
#define	WorkARM_A	pshm->P[8207]
#define	StationPos_A	pshm->P[8208]
#define	WaferSize_A	pshm->P[8209]
#define	Pitch_A	pshm->P[8210]
#define	Stroke_A	pshm->P[8211]
#define	Offset_A	pshm->P[8212]
#define	TotalSlotNumber_A	pshm->P[8213]
#define	RetractPos_A	pshm->P[8214]
#define	WorkARM_B	pshm->P[8215]
#define	StationPos_B	pshm->P[8216]
#define	WaferSize_B	pshm->P[8217]
#define	Pitch_B	pshm->P[8218]
#define	Stroke_B	pshm->P[8219]
#define	Offset_B	pshm->P[8220]
#define	TotalSlotNumber_B	pshm->P[8221]
#define	RetractPos_B	pshm->P[8222]
#define	WorkARM_C	pshm->P[8223]
#define	StationPos_C	pshm->P[8224]
#define	WaferSize_C	pshm->P[8225]
#define	Pitch_C	pshm->P[8226]
#define	Stroke_C	pshm->P[8227]
#define	Offset_C	pshm->P[8228]
#define	TotalSlotNumber_C	pshm->P[8229]
#define	RetractPos_C	pshm->P[8230]
#define	WorkARM_D	pshm->P[8231]
#define	StationPos_D	pshm->P[8232]
#define	WaferSize_D	pshm->P[8233]
#define	Pitch_D	pshm->P[8234]
#define	Stroke_D	pshm->P[8235]
#define	Offset_D	pshm->P[8236]
#define	TotalSlotNumber_D	pshm->P[8237]
#define	RetractPos_D	pshm->P[8238]
#define	WorkARM_E	pshm->P[8239]
#define	StationPos_E	pshm->P[8240]
#define	WaferSize_E	pshm->P[8241]
#define	Pitch_E	pshm->P[8242]
#define	Stroke_E	pshm->P[8243]
#define	Offset_E	pshm->P[8244]
#define	TotalSlotNumber_E	pshm->P[8245]
#define	RetractPos_E	pshm->P[8246]
#define	WorkARM_F	pshm->P[8247]
#define	StationPos_F	pshm->P[8248]
#define	WaferSize_F	pshm->P[8249]
#define	Pitch_F	pshm->P[8250]
#define	Stroke_F	pshm->P[8251]
#define	Offset_F	pshm->P[8252]
#define	TotalSlotNumber_F	pshm->P[8253]
#define	RetractPos_F	pshm->P[8254]
#define	WorkARM_G	pshm->P[8255]
#define	StationPos_G	pshm->P[8256]
#define	WaferSize_G	pshm->P[8257]
#define	Pitch_G	pshm->P[8258]
#define	Stroke_G	pshm->P[8259]
#define	Offset_G	pshm->P[8260]
#define	TotalSlotNumber_G	pshm->P[8261]
#define	RetractPos_G	pshm->P[8262]
#define	WorkARM_H	pshm->P[8263]
#define	StationPos_H	pshm->P[8264]
#define	WaferSize_H	pshm->P[8265]
#define	Pitch_H	pshm->P[8266]
#define	Stroke_H	pshm->P[8267]
#define	Offset_H	pshm->P[8268]
#define	TotalSlotNumber_H	pshm->P[8269]
#define	RetractPos_H	pshm->P[8270]
#define	WorkARM_I	pshm->P[8271]
#define	StationPos_I	pshm->P[8272]
#define	WaferSize_I	pshm->P[8273]
#define	Pitch_I	pshm->P[8274]
#define	Stroke_I	pshm->P[8275]
#define	Offset_I	pshm->P[8276]
#define	TotalSlotNumber_I	pshm->P[8277]
#define	RetractPos_I	pshm->P[8278]
#define	WorkARM_J	pshm->P[8279]
#define	StationPos_J	pshm->P[8280]
#define	WaferSize_J	pshm->P[8281]
#define	Pitch_J	pshm->P[8282]
#define	Stroke_J	pshm->P[8283]
#define	Offset_J	pshm->P[8284]
#define	TotalSlotNumber_J	pshm->P[8285]
#define	RetractPos_J	pshm->P[8286]
#define	Len1(i)	pshm->Coord[i%MAX_COORDS].Q[1024]
#define	Len2(i)	pshm->Coord[i%MAX_COORDS].Q[1025]
#define	MAX_D(i)	pshm->Coord[i%MAX_COORDS].Q[1026]
#define	CtsPerMM_P1(i)	pshm->Coord[i%MAX_COORDS].Q[1027]
#define	MMPerCt_P1(i)	pshm->Coord[i%MAX_COORDS].Q[1028]
#define	CtsPerDeg_P2(i)	pshm->Coord[i%MAX_COORDS].Q[1029]
#define	DegPerCt_P2(i)	pshm->Coord[i%MAX_COORDS].Q[1030]
#define	CtsPerDeg_P3(i)	pshm->Coord[i%MAX_COORDS].Q[1031]
#define	DegPerCt_P3(i)	pshm->Coord[i%MAX_COORDS].Q[1032]
#define	CtsPerDeg_P4(i)	pshm->Coord[i%MAX_COORDS].Q[1033]
#define	DegPerCt_P4(i)	pshm->Coord[i%MAX_COORDS].Q[1034]
#define	InvKinErr(i)	pshm->Coord[i%MAX_COORDS].Q[1035]
#define	MoveEnd	pshm->P[8287]
#define	Ecat_error	pshm->P[8288]
#ifndef _PP_PROJ_HDR_
  void SetEnumGlobalVar(enum globalP var, double data)
  {
    pshm->P[var] = data;
  }

  double GetEnumGlobalVar(enum globalP var)
  {
    return pshm->P[var];
  }

  void SetEnumGlobalArrayVar(enum globalParray var, unsigned index, double data)
  {
    pshm->P[(var + index)%MAX_P] = data;
  }

  double GetEnumGlobalArrayVar(enum globalParray var, unsigned index)
  {
    return pshm->P[(var + index)%MAX_P];
  }

  void SetEnumCSGlobalVar(enum csglobalQ var, unsigned cs, double data)
  {
    pshm->Coord[cs % MAX_COORDS].Q[var] = data;
  }

  double GetEnumCSGlobalVar(enum csglobalQ var, unsigned cs)
  {
    return pshm->Coord[cs % MAX_COORDS].Q[var];
  }

  void SetEnumCSGlobalArrayVar(enum csglobalQarray var, unsigned index, unsigned cs, double data)
  {
    pshm->Coord[cs % MAX_COORDS].Q[(var + index)%MAX_Q] = data;
  }

  double GetEnumCSGlobalArrayVar(enum csglobalQarray var, unsigned index, unsigned cs)
  {
    return pshm->Coord[cs % MAX_COORDS].Q[(var + index)%MAX_Q];
  }

  void SetEnumPtrVar(enum ptrM var, double data)
  {
    im_write(pshm->Mdef + var, data, &pshm->Ldata);
  }

  double GetEnumPtrVar(enum ptrM var)
  {
    return im_read(pshm->Mdef + var, &pshm->Ldata);
  }

  void SetEnumPtrArrayVar(enum ptrMarray var, unsigned index, double data)
  {
    im_write(pshm->Mdef + ((var + index)%MAX_M), data, &pshm->Ldata);
  }

  double GetEnumPtrArrayVar(enum ptrMarray var, unsigned index)
  {
    return im_read(pshm->Mdef + ((var + index)%MAX_M), &pshm->Ldata);
  }

  #define SetGlobalVar(i, x)              SetEnumGlobalVar(i, x)
  #define SetGlobalArrayVar(i, j, x)      SetEnumGlobalArrayVar(i, j, x)
  #define GetGlobalVar(i)                 GetEnumGlobalVar(i)
  #define GetGlobalArrayVar(i, j)         GetEnumGlobalArrayVar(i, j)

  #define SetCSGlobalVar(i, j, x)         SetEnumCSGlobalVar(i, j, x)
  #define SetCSGlobalArrayVar(i, j, k, x) SetEnumCSGlobalArrayVar(i, j, k, x)
  #define GetCSGlobalVar(i, j)            GetEnumCSGlobalVar(i, j)
  #define GetCSGlobalArrayVar(i, j, k)    GetEnumCSGlobalArrayVar(i, j, k)

  #define SetPtrVar(i, x)                 SetEnumPtrVar(i, x)
  #define SetPtrArrayVar(i, j, x)         SetEnumPtrArrayVar(i, j, x)
  #define GetPtrVar(i)                    GetEnumPtrVar(i)
  #define GetPtrArrayVar(i, j)            GetEnumPtrArrayVar(i, j)

#else

  void SetEnumGlobalVar(enum globalP var, double data);
  double GetEnumGlobalVar(enum globalP var);
  void SetEnumGlobalArrayVar(enum globalParray var, unsigned index, double data);
  double GetEnumGlobalArrayVar(enum globalParray var, unsigned index);
  void SetEnumCSGlobalVar(enum csglobalQ var, unsigned cs, double data);
  double GetEnumCSGlobalVar(enum csglobalQ var, unsigned cs);
  void SetEnumCSGlobalArrayVar(enum csglobalQarray var, unsigned index, unsigned cs, double data);
  double GetEnumCSGlobalArrayVar(enum csglobalQarray var, unsigned index, unsigned cs);
  void SetEnumPtrVar(enum ptrM var, double data);
  double GetEnumPtrVar(enum ptrM var);
  void SetEnumPtrArrayVar(enum ptrMarray var, unsigned index, double data);
  double GetEnumPtrArrayVar(enum ptrMarray var, unsigned index);

  #define SetGlobalVar(i, x)              SetEnumGlobalVar(i, x)
  #define SetGlobalArrayVar(i, j, x)      SetEnumGlobalArrayVar(i, j, x)
  #define GetGlobalVar(i)                 GetEnumGlobalVar(i)
  #define GetGlobalArrayVar(i, j)         GetEnumGlobalArrayVar(i, j)

  #define SetCSGlobalVar(i, j, x)         SetEnumCSGlobalVar(i, j, x)
  #define SetCSGlobalArrayVar(i, j, k, x) SetEnumCSGlobalArrayVar(i, j, k, x)
  #define GetCSGlobalVar(i, j)            GetEnumCSGlobalVar(i, j)
  #define GetCSGlobalArrayVar(i, j, k)    GetEnumCSGlobalArrayVar(i, j, k)

  #define SetPtrVar(i, x)                 SetEnumPtrVar(i, x)
  #define SetPtrArrayVar(i, j, x)         SetEnumPtrArrayVar(i, j, x)
  #define GetPtrVar(i)                    GetEnumPtrVar(i)
  #define GetPtrArrayVar(i, j)            GetEnumPtrArrayVar(i, j)

#endif
// end of #ifdef _PPScriptMode_
#else
#ifdef _EnumMode_
enum globalP {_globalP_=-1
,ReportDesPosZ=8192
,ReportDesPosT=8193
,ReportDesPosR=8194
,ReportDesPosW=8195
,PowerStatus=8196
,PowerOnError=8197
,ErrorStatu=8198
,AutoRun=8199
,RunMode=8200
,JogStatus=8201
,true=8202
,false=8203
,RunStop=8204
,HomeMode=8205
,HomeStatus=8206
,WorkARM_A=8207
,StationPos_A=8208
,WaferSize_A=8209
,Pitch_A=8210
,Stroke_A=8211
,Offset_A=8212
,TotalSlotNumber_A=8213
,RetractPos_A=8214
,WorkARM_B=8215
,StationPos_B=8216
,WaferSize_B=8217
,Pitch_B=8218
,Stroke_B=8219
,Offset_B=8220
,TotalSlotNumber_B=8221
,RetractPos_B=8222
,WorkARM_C=8223
,StationPos_C=8224
,WaferSize_C=8225
,Pitch_C=8226
,Stroke_C=8227
,Offset_C=8228
,TotalSlotNumber_C=8229
,RetractPos_C=8230
,WorkARM_D=8231
,StationPos_D=8232
,WaferSize_D=8233
,Pitch_D=8234
,Stroke_D=8235
,Offset_D=8236
,TotalSlotNumber_D=8237
,RetractPos_D=8238
,WorkARM_E=8239
,StationPos_E=8240
,WaferSize_E=8241
,Pitch_E=8242
,Stroke_E=8243
,Offset_E=8244
,TotalSlotNumber_E=8245
,RetractPos_E=8246
,WorkARM_F=8247
,StationPos_F=8248
,WaferSize_F=8249
,Pitch_F=8250
,Stroke_F=8251
,Offset_F=8252
,TotalSlotNumber_F=8253
,RetractPos_F=8254
,WorkARM_G=8255
,StationPos_G=8256
,WaferSize_G=8257
,Pitch_G=8258
,Stroke_G=8259
,Offset_G=8260
,TotalSlotNumber_G=8261
,RetractPos_G=8262
,WorkARM_H=8263
,StationPos_H=8264
,WaferSize_H=8265
,Pitch_H=8266
,Stroke_H=8267
,Offset_H=8268
,TotalSlotNumber_H=8269
,RetractPos_H=8270
,WorkARM_I=8271
,StationPos_I=8272
,WaferSize_I=8273
,Pitch_I=8274
,Stroke_I=8275
,Offset_I=8276
,TotalSlotNumber_I=8277
,RetractPos_I=8278
,WorkARM_J=8279
,StationPos_J=8280
,WaferSize_J=8281
,Pitch_J=8282
,Stroke_J=8283
,Offset_J=8284
,TotalSlotNumber_J=8285
,RetractPos_J=8286
,MoveEnd=8287
,Ecat_error=8288};
enum globalParray {_globalParray_=-1};
enum csglobalQ {_csglobalQ_=-1
,Len1=1024
,Len2=1025
,MAX_D=1026
,CtsPerMM_P1=1027
,MMPerCt_P1=1028
,CtsPerDeg_P2=1029
,DegPerCt_P2=1030
,CtsPerDeg_P3=1031
,DegPerCt_P3=1032
,CtsPerDeg_P4=1033
,DegPerCt_P4=1034
,InvKinErr=1035};
enum csglobalQarray {_csglobalQarray_=-1};
enum ptrM {_ptrM_=-1
,Z_JOGP=8192
,Z_JOGN=8193
,T_JOGP=8194
,T_JOGN=8195
,R_JOGP=8196
,R_JOGN=8197
,W_JOGP=8198
,W_JOGN=8199
,JogVel=8200
,WorkARM=8201
,StationPos=8202
,WaferSize=8203
,Pitch=8204
,Stroke=8205
,Offset=8206
,TotalSlotNumber=8207
,RetractPos=8208
,ReportActPosZ=8209
,ReportActPosT=8210
,ReportActPosR=8211
,ReportActPosW=8212
,DeadMan=8213
,Breaker_ON=8214};
enum ptrMarray {_ptrMarray_=-1};
#ifndef _PP_PROJ_HDR_
  void SetEnumGlobalVar(enum globalP var, double data)
  {
    pshm->P[var] = data;
  }

  double GetEnumGlobalVar(enum globalP var)
  {
    return pshm->P[var];
  }

  void SetEnumGlobalArrayVar(enum globalParray var, unsigned index, double data)
  {
    pshm->P[(var + index)%MAX_P] = data;
  }

  double GetEnumGlobalArrayVar(enum globalParray var, unsigned index)
  {
    return pshm->P[(var + index)%MAX_P];
  }

  void SetEnumCSGlobalVar(enum csglobalQ var, unsigned cs, double data)
  {
    pshm->Coord[cs % MAX_COORDS].Q[var] = data;
  }

  double GetEnumCSGlobalVar(enum csglobalQ var, unsigned cs)
  {
    return pshm->Coord[cs % MAX_COORDS].Q[var];
  }

  void SetEnumCSGlobalArrayVar(enum csglobalQarray var, unsigned index, unsigned cs, double data)
  {
    pshm->Coord[cs % MAX_COORDS].Q[(var + index)%MAX_Q] = data;
  }

  double GetEnumCSGlobalArrayVar(enum csglobalQarray var, unsigned index, unsigned cs)
  {
    return pshm->Coord[cs % MAX_COORDS].Q[(var + index)%MAX_Q];
  }

  void SetEnumPtrVar(enum ptrM var, double data)
  {
    im_write(pshm->Mdef + var, data, &pshm->Ldata);
  }

  double GetEnumPtrVar(enum ptrM var)
  {
    return im_read(pshm->Mdef + var, &pshm->Ldata);
  }

  void SetEnumPtrArrayVar(enum ptrMarray var, unsigned index, double data)
  {
    im_write(pshm->Mdef + ((var + index)%MAX_M), data, &pshm->Ldata);
  }

  double GetEnumPtrArrayVar(enum ptrMarray var, unsigned index)
  {
    return im_read(pshm->Mdef + ((var + index)%MAX_M), &pshm->Ldata);
  }

  #define SetGlobalVar(i, x)              SetEnumGlobalVar(i, x)
  #define SetGlobalArrayVar(i, j, x)      SetEnumGlobalArrayVar(i, j, x)
  #define GetGlobalVar(i)                 GetEnumGlobalVar(i)
  #define GetGlobalArrayVar(i, j)         GetEnumGlobalArrayVar(i, j)

  #define SetCSGlobalVar(i, j, x)         SetEnumCSGlobalVar(i, j, x)
  #define SetCSGlobalArrayVar(i, j, k, x) SetEnumCSGlobalArrayVar(i, j, k, x)
  #define GetCSGlobalVar(i, j)            GetEnumCSGlobalVar(i, j)
  #define GetCSGlobalArrayVar(i, j, k)    GetEnumCSGlobalArrayVar(i, j, k)

  #define SetPtrVar(i, x)                 SetEnumPtrVar(i, x)
  #define SetPtrArrayVar(i, j, x)         SetEnumPtrArrayVar(i, j, x)
  #define GetPtrVar(i)                    GetEnumPtrVar(i)
  #define GetPtrArrayVar(i, j)            GetEnumPtrArrayVar(i, j)

#else

  void SetEnumGlobalVar(enum globalP var, double data);
  double GetEnumGlobalVar(enum globalP var);
  void SetEnumGlobalArrayVar(enum globalParray var, unsigned index, double data);
  double GetEnumGlobalArrayVar(enum globalParray var, unsigned index);
  void SetEnumCSGlobalVar(enum csglobalQ var, unsigned cs, double data);
  double GetEnumCSGlobalVar(enum csglobalQ var, unsigned cs);
  void SetEnumCSGlobalArrayVar(enum csglobalQarray var, unsigned index, unsigned cs, double data);
  double GetEnumCSGlobalArrayVar(enum csglobalQarray var, unsigned index, unsigned cs);
  void SetEnumPtrVar(enum ptrM var, double data);
  double GetEnumPtrVar(enum ptrM var);
  void SetEnumPtrArrayVar(enum ptrMarray var, unsigned index, double data);
  double GetEnumPtrArrayVar(enum ptrMarray var, unsigned index);

  #define SetGlobalVar(i, x)              SetEnumGlobalVar(i, x)
  #define SetGlobalArrayVar(i, j, x)      SetEnumGlobalArrayVar(i, j, x)
  #define GetGlobalVar(i)                 GetEnumGlobalVar(i)
  #define GetGlobalArrayVar(i, j)         GetEnumGlobalArrayVar(i, j)

  #define SetCSGlobalVar(i, j, x)         SetEnumCSGlobalVar(i, j, x)
  #define SetCSGlobalArrayVar(i, j, k, x) SetEnumCSGlobalArrayVar(i, j, k, x)
  #define GetCSGlobalVar(i, j)            GetEnumCSGlobalVar(i, j)
  #define GetCSGlobalArrayVar(i, j, k)    GetEnumCSGlobalArrayVar(i, j, k)

  #define SetPtrVar(i, x)                 SetEnumPtrVar(i, x)
  #define SetPtrArrayVar(i, j, x)         SetEnumPtrArrayVar(i, j, x)
  #define GetPtrVar(i)                    GetEnumPtrVar(i)
  #define GetPtrArrayVar(i, j)            GetEnumPtrArrayVar(i, j)

#endif
// end of #ifdef _EnumMode_
#else
// ***** Standard default mode *****
#define ReportDesPosZ 8192
#define ReportDesPosT 8193
#define ReportDesPosR 8194
#define ReportDesPosW 8195
#define PowerStatus 8196
#define PowerOnError 8197
#define ErrorStatu 8198
#define AutoRun 8199
#define RunMode 8200
#define JogStatus 8201
#define true 8202
#define false 8203
#define RunStop 8204
#define HomeMode 8205
#define HomeStatus 8206
#define WorkARM_A 8207
#define StationPos_A 8208
#define WaferSize_A 8209
#define Pitch_A 8210
#define Stroke_A 8211
#define Offset_A 8212
#define TotalSlotNumber_A 8213
#define RetractPos_A 8214
#define WorkARM_B 8215
#define StationPos_B 8216
#define WaferSize_B 8217
#define Pitch_B 8218
#define Stroke_B 8219
#define Offset_B 8220
#define TotalSlotNumber_B 8221
#define RetractPos_B 8222
#define WorkARM_C 8223
#define StationPos_C 8224
#define WaferSize_C 8225
#define Pitch_C 8226
#define Stroke_C 8227
#define Offset_C 8228
#define TotalSlotNumber_C 8229
#define RetractPos_C 8230
#define WorkARM_D 8231
#define StationPos_D 8232
#define WaferSize_D 8233
#define Pitch_D 8234
#define Stroke_D 8235
#define Offset_D 8236
#define TotalSlotNumber_D 8237
#define RetractPos_D 8238
#define WorkARM_E 8239
#define StationPos_E 8240
#define WaferSize_E 8241
#define Pitch_E 8242
#define Stroke_E 8243
#define Offset_E 8244
#define TotalSlotNumber_E 8245
#define RetractPos_E 8246
#define WorkARM_F 8247
#define StationPos_F 8248
#define WaferSize_F 8249
#define Pitch_F 8250
#define Stroke_F 8251
#define Offset_F 8252
#define TotalSlotNumber_F 8253
#define RetractPos_F 8254
#define WorkARM_G 8255
#define StationPos_G 8256
#define WaferSize_G 8257
#define Pitch_G 8258
#define Stroke_G 8259
#define Offset_G 8260
#define TotalSlotNumber_G 8261
#define RetractPos_G 8262
#define WorkARM_H 8263
#define StationPos_H 8264
#define WaferSize_H 8265
#define Pitch_H 8266
#define Stroke_H 8267
#define Offset_H 8268
#define TotalSlotNumber_H 8269
#define RetractPos_H 8270
#define WorkARM_I 8271
#define StationPos_I 8272
#define WaferSize_I 8273
#define Pitch_I 8274
#define Stroke_I 8275
#define Offset_I 8276
#define TotalSlotNumber_I 8277
#define RetractPos_I 8278
#define WorkARM_J 8279
#define StationPos_J 8280
#define WaferSize_J 8281
#define Pitch_J 8282
#define Stroke_J 8283
#define Offset_J 8284
#define TotalSlotNumber_J 8285
#define RetractPos_J 8286
#define Z_JOGP 8192
#define Z_JOGN 8193
#define T_JOGP 8194
#define T_JOGN 8195
#define R_JOGP 8196
#define R_JOGN 8197
#define W_JOGP 8198
#define W_JOGN 8199
#define JogVel 8200
#define WorkARM 8201
#define StationPos 8202
#define WaferSize 8203
#define Pitch 8204
#define Stroke 8205
#define Offset 8206
#define TotalSlotNumber 8207
#define RetractPos 8208
#define ReportActPosZ 8209
#define ReportActPosT 8210
#define ReportActPosR 8211
#define ReportActPosW 8212
#define DeadMan 8213
#define Breaker_ON 8214
#define Len1 1024
#define Len2 1025
#define MAX_D 1026
#define CtsPerMM_P1 1027
#define MMPerCt_P1 1028
#define CtsPerDeg_P2 1029
#define DegPerCt_P2 1030
#define CtsPerDeg_P3 1031
#define DegPerCt_P3 1032
#define CtsPerDeg_P4 1033
#define DegPerCt_P4 1034
#define InvKinErr 1035
#define MoveEnd 8287
#define Ecat_error 8288
#endif
#endif
#endif //_PP_PROJ_H_
