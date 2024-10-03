typedef struct {
	int real;
	int imag;
} complex int;

typedef void *__builtin_va_list;
typedef long unsigned int clock_t;

struct tm {
	int tm_sec;
	int tm_min;
	int tm_hour;
	int tm_mday;
	int tm_mon;
	int tm_year;
	int tm_wday;
	int tm_yday;
	int tm_isdst;
};

typedef struct {
	_Bigint *_next;
	int _k;
	int _maxwds;
	int _sign;
	int _wds;
	__ULong _x[1];
} _Bigint;

struct _atexit {
	_atexit *_next;
	int _ind;
	void (*_fns[32])(/* parameters unknown */);
};

struct __sbuf {
	unsigned char *_base;
	int _size;
};

struct __sFILE {
	unsigned char *_p;
	int _r;
	int _w;
	short int _flags;
	short int _file;
	__sbuf _bf;
	int _lbfsize;
	void *_cookie;
	int (*_read)(/* parameters unknown */);
	int (*_write)(/* parameters unknown */);
	_fpos_t (*_seek)(/* parameters unknown */);
	int (*_close)(/* parameters unknown */);
	__sbuf _ub;
	unsigned char *_up;
	int _ur;
	unsigned char _ubuf[3];
	unsigned char _nbuf[1];
	__sbuf _lb;
	int _blksize;
	int _offset;
	_reent *_data;
};

struct _reent {
	int _errno;
	__sFILE *_stdin;
	__sFILE *_stdout;
	__sFILE *_stderr;
	int _inc;
	char _emergency[25];
	int _current_category;
	char *_current_locale;
	int __sdidinit;
	void (*__cleanup)(/* parameters unknown */);
	_Bigint *_result;
	int _result_k;
	_Bigint *_p5s;
	_Bigint **_freelist;
	int _cvtlen;
	char *_cvtbuf;
	union {
		struct {
			unsigned int _unused_rand;
			char *_strtok_last;
			char _asctime_buf[26];
			tm _localtime_buf;
			int _gamma_signgam;
			long long unsigned int _rand_next;
		} _reent;
		struct {
			unsigned char *_nextf[30];
			unsigned int _nmalloc[30];
		} _unused;
	} _new;
	_atexit *_atexit;
	_atexit _atexit0;
	void (**_sig_func)(/* parameters unknown */);
	_glue __sglue;
	__sFILE __sf[3];
};

typedef struct {
	int quot;
	int rem;
} div_t;

typedef struct {
	long int quot;
	long int rem;
} ldiv_t;

typedef long unsigned int u_long;

struct ThreadParam {
	int status;
	void *entry;
	void *stack;
	int stackSize;
	void *gpReg;
	int initPriority;
	int currentPriority;
	u_int attr;
	u_int option;
	int waitType;
	int waitId;
	int wakeupCount;
};

struct SemaParam {
	int currentCount;
	int maxCount;
	int initCount;
	int numWaitThreads;
	u_int attr;
	u_int option;
};

typedef struct {
	u_long128 vf[32];
	u_int status;
	u_int mac;
	u_int clipping;
	u_int r;
	u_int i;
	u_int q;
	u_short vi[16];
} sceDevVu0Cnd;

typedef struct {
	u_long128 vf[32];
	u_int status;
	u_int mac;
	u_int clipping;
	u_int r;
	u_int i;
	u_int q;
	u_int p;
	u_short vi[16];
} sceDevVu1Cnd;

typedef struct {
	u_long128 tag;
	u_int stat;
	u_int count;
	u_int p3count;
	u_int p3tag;
	u_int pad;
} sceDevGifCnd;

typedef struct {
	u_int row[4];
	u_int col[4];
	u_int mask;
	u_int code;
	u_int stat;
	u_short itop;
	u_short itops;
	u_short mark;
	u_short num;
	u_char error;
	u_char cl;
	u_char wl;
	u_char cmod;
	u_char pad;
} sceDevVif0Cnd;

typedef struct {
	u_int row[4];
	u_int col[4];
	u_int mask;
	u_int code;
	u_int stat;
	u_short itop;
	u_short itops;
	u_short base;
	u_short offset;
	u_short top;
	u_short tops;
	u_short mark;
	u_short num;
	u_char error;
	u_char cl;
	u_char wl;
	u_char cmod;
	u_char pad;
} sceDevVif1Cnd;

struct _sceGifPackRgbaq {
	u_int R;
	u_int G;
	u_int B;
	u_int A;
};

typedef _sceGifPackRgbaq sceGifPackRgbaq;

struct _sceGifPackAd {
	u_long DATA;
	u_long ADDR;
};

typedef _sceGifPackAd sceGifPackAd;

struct _sceGifPackSt {
	float S;
	float T;
	float Q;
	u_int pad96;
};

typedef _sceGifPackSt sceGifPackSt;

struct _sceGifPackUv {
	int U;
	int V;
	long int pad64;
};

typedef _sceGifPackUv sceGifPackUv;

struct _sceGifPackXyzf {
	int X;
	int Y;
	u_int Z;
	u_int F : 12;
	u_int pad108 : 3;
	u_int ADC : 1;
	u_int pad112 : 16;
};

typedef _sceGifPackXyzf sceGifPackXyzf;

struct _sceGifPackXyz {
	int X;
	int Y;
	u_int Z;
	u_int pad96 : 15;
	u_int ADC : 1;
	u_int pad112 : 16;
};

typedef _sceGifPackXyz sceGifPackXyz;

struct _sceGifPackFog {
	u_int pad[3];
	u_int F;
};

typedef _sceGifPackFog sceGifPackFog;

struct _sceGifPackNop {
	u_long pad[2];
};

typedef _sceGifPackNop sceGifPackNop;

typedef struct {
	long unsigned int A : 2;
	long unsigned int B : 2;
	long unsigned int C : 2;
	long unsigned int D : 2;
	long unsigned int pad8 : 24;
	long unsigned int FIX : 8;
	long unsigned int pad40 : 24;
} sceGsAlpha;

typedef struct {
	long unsigned int SBP : 14;
	long unsigned int pad14 : 2;
	long unsigned int SBW : 6;
	long unsigned int pad22 : 2;
	long unsigned int SPSM : 6;
	long unsigned int pad30 : 2;
	long unsigned int DBP : 14;
	long unsigned int pad46 : 2;
	long unsigned int DBW : 6;
	long unsigned int pad54 : 2;
	long unsigned int DPSM : 6;
	long unsigned int pad62 : 2;
} sceGsBitbltbuf;

typedef struct {
	long unsigned int WMS : 2;
	long unsigned int WMT : 2;
	long unsigned int MINU : 10;
	long unsigned int MAXU : 10;
	long unsigned int MINV : 10;
	long unsigned int MAXV : 10;
	long unsigned int pad44 : 20;
} sceGsClamp;

typedef struct {
	long unsigned int CLAMP : 1;
	long unsigned int pad01 : 63;
} sceGsColclamp;

typedef struct {
	long unsigned int DIMX00 : 3;
	long unsigned int pad00 : 1;
	long unsigned int DIMX01 : 3;
	long unsigned int pad01 : 1;
	long unsigned int DIMX02 : 3;
	long unsigned int pad02 : 1;
	long unsigned int DIMX03 : 3;
	long unsigned int pad03 : 1;
	long unsigned int DIMX10 : 3;
	long unsigned int pad10 : 1;
	long unsigned int DIMX11 : 3;
	long unsigned int pad11 : 1;
	long unsigned int DIMX12 : 3;
	long unsigned int pad12 : 1;
	long unsigned int DIMX13 : 3;
	long unsigned int pad13 : 1;
	long unsigned int DIMX20 : 3;
	long unsigned int pad20 : 1;
	long unsigned int DIMX21 : 3;
	long unsigned int pad21 : 1;
	long unsigned int DIMX22 : 3;
	long unsigned int pad22 : 1;
	long unsigned int DIMX23 : 3;
	long unsigned int pad23 : 1;
	long unsigned int DIMX30 : 3;
	long unsigned int pad30 : 1;
	long unsigned int DIMX31 : 3;
	long unsigned int pad31 : 1;
	long unsigned int DIMX32 : 3;
	long unsigned int pad32 : 1;
	long unsigned int DIMX33 : 3;
	long unsigned int pad33 : 1;
} sceGsDimx;

typedef struct {
	long unsigned int DTHE : 1;
	long unsigned int pad01 : 63;
} sceGsDthe;

typedef struct {
	long unsigned int FBA : 1;
	long unsigned int pad01 : 63;
} sceGsFba;

typedef struct {
	long unsigned int pad00;
} sceGsFinish;

typedef struct {
	long unsigned int pad00 : 56;
	long unsigned int F : 8;
} sceGsFog;

typedef struct {
	long unsigned int FCR : 8;
	long unsigned int FCG : 8;
	long unsigned int FCB : 8;
	long unsigned int pad24 : 40;
} sceGsFogcol;

typedef struct {
	long unsigned int FBP : 9;
	long unsigned int pad09 : 7;
	long unsigned int FBW : 6;
	long unsigned int pad22 : 2;
	long unsigned int PSM : 6;
	long unsigned int pad30 : 2;
	long unsigned int FBMSK : 32;
} sceGsFrame;

typedef struct {
	long unsigned int WDATA;
} sceGsHwreg;

typedef struct {
	u_int ID;
	u_int IDMSK;
} sceGsLabel;

typedef struct {
	long unsigned int TBP1 : 14;
	long unsigned int TBW1 : 6;
	long unsigned int TBP2 : 14;
	long unsigned int TBW2 : 6;
	long unsigned int TBP3 : 14;
	long unsigned int TBW3 : 6;
	long unsigned int pad60 : 4;
} sceGsMiptbp1;

typedef struct {
	long unsigned int TBP4 : 14;
	long unsigned int TBW4 : 6;
	long unsigned int TBP5 : 14;
	long unsigned int TBW5 : 6;
	long unsigned int TBP6 : 14;
	long unsigned int TBW6 : 6;
	long unsigned int pad60 : 4;
} sceGsMiptbp2;

typedef struct {
	long unsigned int PABE : 1;
	long unsigned int pad01 : 63;
} sceGsPabe;

typedef struct {
	long unsigned int PRIM : 3;
	long unsigned int IIP : 1;
	long unsigned int TME : 1;
	long unsigned int FGE : 1;
	long unsigned int ABE : 1;
	long unsigned int AA1 : 1;
	long unsigned int FST : 1;
	long unsigned int CTXT : 1;
	long unsigned int FIX : 1;
	long unsigned int pad11 : 53;
} sceGsPrim;

typedef struct {
	long unsigned int pad00 : 3;
	long unsigned int IIP : 1;
	long unsigned int TME : 1;
	long unsigned int FGE : 1;
	long unsigned int ABE : 1;
	long unsigned int AA1 : 1;
	long unsigned int FST : 1;
	long unsigned int CTXT : 1;
	long unsigned int FIX : 1;
	long unsigned int pad11 : 53;
} sceGsPrmode;

typedef struct {
	long unsigned int AC : 1;
	long unsigned int pad01 : 63;
} sceGsPrmodecont;

typedef struct {
	u_int R : 8;
	u_int G : 8;
	u_int B : 8;
	u_int A : 8;
	float Q;
} sceGsRgbaq;

typedef struct {
	long unsigned int MSK : 2;
	long unsigned int pad02 : 62;
} sceGsScanmsk;

typedef struct {
	long unsigned int SCAX0 : 11;
	long unsigned int pad11 : 5;
	long unsigned int SCAX1 : 11;
	long unsigned int pad27 : 5;
	long unsigned int SCAY0 : 11;
	long unsigned int pad43 : 5;
	long unsigned int SCAY1 : 11;
	long unsigned int pad59 : 5;
} sceGsScissor;

typedef struct {
	u_int ID;
	u_int IDMSK;
} sceGsSignal;

typedef struct {
	float S;
	float T;
} sceGsSt;

typedef struct {
	long unsigned int ATE : 1;
	long unsigned int ATST : 3;
	long unsigned int AREF : 8;
	long unsigned int AFAIL : 2;
	long unsigned int DATE : 1;
	long unsigned int DATM : 1;
	long unsigned int ZTE : 1;
	long unsigned int ZTST : 2;
	long unsigned int pad19 : 45;
} sceGsTest;

typedef struct {
	long unsigned int TBP0 : 14;
	long unsigned int TBW : 6;
	long unsigned int PSM : 6;
	long unsigned int TW : 4;
	long unsigned int TH : 4;
	long unsigned int TCC : 1;
	long unsigned int TFX : 2;
	long unsigned int CBP : 14;
	long unsigned int CPSM : 4;
	long unsigned int CSM : 1;
	long unsigned int CSA : 5;
	long unsigned int CLD : 3;
} sceGsTex0;

typedef struct {
	long unsigned int LCM : 1;
	long unsigned int pad01 : 1;
	long unsigned int MXL : 3;
	long unsigned int MMAG : 1;
	long unsigned int MMIN : 3;
	long unsigned int MTBA : 1;
	long unsigned int pad10 : 9;
	long unsigned int L : 2;
	long unsigned int pad21 : 11;
	long unsigned int K : 12;
	long unsigned int pad44 : 20;
} sceGsTex1;

typedef struct {
	long unsigned int pad00 : 20;
	long unsigned int PSM : 6;
	long unsigned int pad26 : 11;
	long unsigned int CBP : 14;
	long unsigned int CPSM : 4;
	long unsigned int CSM : 1;
	long unsigned int CSA : 5;
	long unsigned int CLD : 3;
} sceGsTex2;

typedef struct {
	long unsigned int TA0 : 8;
	long unsigned int pad08 : 7;
	long unsigned int AEM : 1;
	long unsigned int pad16 : 16;
	long unsigned int TA1 : 8;
	long unsigned int pad40 : 24;
} sceGsTexa;

typedef struct {
	long unsigned int CBW : 6;
	long unsigned int COU : 6;
	long unsigned int COV : 10;
	long unsigned int pad22 : 42;
} sceGsTexclut;

typedef struct {
	long unsigned int pad00;
} sceGsTexflush;

typedef struct {
	long unsigned int XDR : 2;
	long unsigned int pad02 : 62;
} sceGsTrxdir;

typedef struct {
	long unsigned int SSAX : 11;
	long unsigned int pad11 : 5;
	long unsigned int SSAY : 11;
	long unsigned int pad27 : 5;
	long unsigned int DSAX : 11;
	long unsigned int pad43 : 5;
	long unsigned int DSAY : 11;
	long unsigned int DIR : 2;
	long unsigned int pad61 : 3;
} sceGsTrxpos;

typedef struct {
	long unsigned int RRW : 12;
	long unsigned int pad12 : 20;
	long unsigned int RRH : 12;
	long unsigned int pad44 : 20;
} sceGsTrxreg;

typedef struct {
	long unsigned int U : 14;
	long unsigned int pad14 : 2;
	long unsigned int V : 14;
	long unsigned int pad30 : 34;
} sceGsUv;

typedef struct {
	long unsigned int OFX : 16;
	long unsigned int pad16 : 16;
	long unsigned int OFY : 16;
	long unsigned int pad48 : 16;
} sceGsXyoffset;

typedef struct {
	long unsigned int X : 16;
	long unsigned int Y : 16;
	long unsigned int Z : 32;
} sceGsXyz;

typedef struct {
	long unsigned int X : 16;
	long unsigned int Y : 16;
	long unsigned int Z : 24;
	long unsigned int F : 8;
} sceGsXyzf;

typedef struct {
	long unsigned int ZBP : 9;
	long unsigned int pad09 : 15;
	long unsigned int PSM : 4;
	long unsigned int pad28 : 4;
	long unsigned int ZMSK : 1;
	long unsigned int pad33 : 31;
} sceGsZbuf;

typedef struct {
	unsigned int COUNT : 16;
	unsigned int p0 : 16;
} tT_COUNT;

typedef struct {
	unsigned int CLKS : 2;
	unsigned int GATE : 1;
	unsigned int GATS : 1;
	unsigned int GATM : 2;
	unsigned int ZRET : 1;
	unsigned int CUE : 1;
	unsigned int CMPE : 1;
	unsigned int OVFE : 1;
	unsigned int EQUF : 1;
	unsigned int OVFF : 1;
	unsigned int p0 : 20;
} tT_MODE;

typedef struct {
	unsigned int COMP : 16;
	unsigned int p0 : 16;
} tT_COMP;

typedef struct {
	unsigned int HOLD : 16;
	unsigned int p0 : 16;
} tT_HOLD;

typedef struct {
	unsigned int OPTION : 28;
	unsigned int CODE : 4;
} tIPU_CMD_write;

typedef struct {
	unsigned int DATA;
	unsigned int p0 : 31;
	unsigned int BUSY : 1;
} tIPU_CMD_read;

typedef struct {
	unsigned int BSTOP;
	unsigned int p0 : 31;
	unsigned int BUSY : 1;
} tIPU_TOP;

typedef struct {
	unsigned int IFC : 4;
	unsigned int OFC : 4;
	unsigned int CBP : 6;
	unsigned int ECD : 1;
	unsigned int SCD : 1;
	unsigned int IDP : 2;
	unsigned int p0 : 2;
	unsigned int AS : 1;
	unsigned int IVF : 1;
	unsigned int QST : 1;
	unsigned int MP1 : 1;
	unsigned int PCT : 3;
	unsigned int p1 : 3;
	unsigned int RST : 1;
	unsigned int BUSY : 1;
} tIPU_CTRL;

typedef struct {
	unsigned int BP : 7;
	unsigned int p0 : 1;
	unsigned int IFC : 4;
	unsigned int p1 : 4;
	unsigned int FP : 2;
	unsigned int p2 : 14;
} tIPU_BP;

typedef struct {
	unsigned int RST : 1;
	unsigned int p0 : 2;
	unsigned int PSE : 1;
	unsigned int p1 : 28;
} tGIF_CTRL;

typedef struct {
	unsigned int M3R : 1;
	unsigned int p0 : 1;
	unsigned int IMT : 1;
	unsigned int p1 : 29;
} tGIF_MODE;

typedef struct {
	unsigned int M3R : 1;
	unsigned int M3P : 1;
	unsigned int IMT : 1;
	unsigned int PSE : 1;
	unsigned int p0 : 1;
	unsigned int IP3 : 1;
	unsigned int P3Q : 1;
	unsigned int P2Q : 1;
	unsigned int P1Q : 1;
	unsigned int OPH : 1;
	unsigned int APATH : 2;
	unsigned int DIR : 1;
	unsigned int p1 : 11;
	unsigned int FQC : 5;
	unsigned int p2 : 3;
} tGIF_STAT;

typedef struct {
	unsigned int NLOOP : 15;
	unsigned int EOP : 1;
	unsigned int tag : 16;
} tGIF_TAG0;

typedef struct {
	unsigned int tag : 14;
	unsigned int PRE : 1;
	unsigned int PRIM : 11;
	unsigned int FLG : 2;
	unsigned int NREG : 4;
} tGIF_TAG1;

typedef struct {
	unsigned int tag;
} tGIF_TAG2;

typedef struct {
	unsigned int tag;
} tGIF_TAG3;

typedef struct {
	unsigned int LOOPCNT : 15;
	unsigned int p0 : 1;
	unsigned int REGCNT : 4;
	unsigned int VUADDR : 10;
	unsigned int p1 : 2;
} tGIF_CNT;

typedef struct {
	unsigned int P3CNT : 15;
	unsigned int p0 : 17;
} tGIF_P3CNT;

typedef struct {
	unsigned int LOOPCNT : 15;
	unsigned int EOP : 1;
	unsigned int p0 : 16;
} tGIF_P3TAG;

typedef struct {
	unsigned int VPS : 2;
	unsigned int VEW : 1;
	unsigned int p0 : 3;
	unsigned int MRK : 1;
	unsigned int p1 : 1;
	unsigned int VSS : 1;
	unsigned int VFS : 1;
	unsigned int VIS : 1;
	unsigned int INT : 1;
	unsigned int ERO : 1;
	unsigned int ER1 : 1;
	unsigned int p2 : 10;
	unsigned int FQC : 4;
	unsigned int p3 : 4;
} tVIF0_STAT;

typedef struct {
	unsigned int RST : 1;
	unsigned int FBK : 1;
	unsigned int STP : 1;
	unsigned int STC : 1;
	unsigned int p0 : 28;
} tVIF0_FBRST;

typedef struct {
	unsigned int MII : 1;
	unsigned int ME0 : 1;
	unsigned int ME1 : 1;
	unsigned int p0 : 29;
} tVIF0_ERR;

typedef struct {
	unsigned int MARK : 16;
	unsigned int p0 : 16;
} tVIF_MARK;

typedef struct {
	unsigned int CL : 8;
	unsigned int WL : 8;
	unsigned int p0 : 16;
} tVIF_CYCLE;

typedef struct {
	unsigned int MOD : 2;
	unsigned int p0 : 30;
} tVIF_MODE;

typedef struct {
	unsigned int num : 8;
	unsigned int p0 : 24;
} tVIF0_NUM;

typedef struct {
	unsigned int m0 : 2;
	unsigned int m1 : 2;
	unsigned int m2 : 2;
	unsigned int m3 : 2;
	unsigned int m4 : 2;
	unsigned int m5 : 2;
	unsigned int m6 : 2;
	unsigned int m7 : 2;
	unsigned int m8 : 2;
	unsigned int m9 : 2;
	unsigned int m10 : 2;
	unsigned int m11 : 2;
	unsigned int m12 : 2;
	unsigned int m13 : 2;
	unsigned int m14 : 2;
	unsigned int m15 : 2;
} tVIF_MASK;

typedef struct {
	unsigned int immediate : 16;
	unsigned int num : 8;
	unsigned int CMD : 8;
} tVIF_CODE;

typedef struct {
	unsigned int ITOPS : 10;
	unsigned int p0 : 22;
} tVIF_ITOPS;

typedef struct {
	unsigned int ITOP : 10;
	unsigned int p0 : 22;
} tVIF_ITOP;

typedef struct {
	unsigned int R0;
} tVIF_R0;

typedef struct {
	unsigned int R1;
} tVIF_R1;

typedef struct {
	unsigned int R2;
} tVIF_R2;

typedef struct {
	unsigned int R3;
} tVIF_R3;

typedef struct {
	unsigned int C0;
} tVIF_C0;

typedef struct {
	unsigned int C1;
} tVIF_C1;

typedef struct {
	unsigned int C2;
} tVIF_C2;

typedef struct {
	unsigned int C3;
} tVIF_C3;

typedef struct {
	unsigned int VPS : 2;
	unsigned int VEW : 1;
	unsigned int VGW : 1;
	unsigned int p0 : 2;
	unsigned int MRK : 1;
	unsigned int DBF : 1;
	unsigned int VSS : 1;
	unsigned int VFS : 1;
	unsigned int VIS : 1;
	unsigned int INT : 1;
	unsigned int ERO : 1;
	unsigned int ER1 : 1;
	unsigned int p1 : 9;
	unsigned int FDR : 1;
	unsigned int FQC : 5;
	unsigned int p2 : 3;
} tVIF1_STAT;

typedef struct {
	unsigned int RST : 1;
	unsigned int FBK : 1;
	unsigned int STP : 1;
	unsigned int STC : 1;
	unsigned int p0 : 28;
} tVIF1_FBRST;

typedef struct {
	unsigned int MII : 1;
	unsigned int ME0 : 1;
	unsigned int ME1 : 1;
	unsigned int p0 : 29;
} tVIF1_ERR;

typedef struct {
	unsigned int num : 8;
	unsigned int p0 : 24;
} tVIF1_NUM;

typedef struct {
	unsigned int BASE : 10;
	unsigned int p0 : 22;
} tVIF1_BASE;

typedef struct {
	unsigned int OFFSET : 10;
	unsigned int p0 : 22;
} tVIF1_OFST;

typedef struct {
	unsigned int TOPS : 10;
	unsigned int p0 : 22;
} tVIF1_TOPS;

typedef struct {
	unsigned int TOP : 10;
	unsigned int p0 : 22;
} tVIF1_TOP;

typedef struct {
	unsigned int DIR : 1;
	unsigned int p0 : 1;
	unsigned int MOD : 2;
	unsigned int ASP : 2;
	unsigned int TTE : 1;
	unsigned int TIE : 1;
	unsigned int STR : 1;
	unsigned int p1 : 7;
	unsigned int TAG : 16;
} tD_CHCR;

typedef struct {
	unsigned int ADDR : 31;
	unsigned int SPR : 1;
} tD_MADR;

typedef struct {
	unsigned int QWC : 16;
	unsigned int p0 : 16;
} tD_QWC;

typedef struct {
	unsigned int ADDR : 31;
	unsigned int SPR : 1;
} tD_TADR;

typedef struct {
	unsigned int ADDR : 31;
	unsigned int SPR : 1;
} tD_ASR0;

typedef struct {
	unsigned int ADDR : 31;
	unsigned int SPR : 1;
} tD_ASR1;

typedef struct {
	unsigned int ADDR : 14;
	unsigned int p0 : 18;
} tD_SADR;

typedef struct {
	unsigned int DMAE : 1;
	unsigned int RELE : 1;
	unsigned int MFD : 2;
	unsigned int STS : 2;
	unsigned int STD : 2;
	unsigned int RCYC : 3;
	unsigned int p0 : 21;
} tD_CTRL;

typedef struct {
	unsigned int CIS0 : 1;
	unsigned int CIS1 : 1;
	unsigned int CIS2 : 1;
	unsigned int CIS3 : 1;
	unsigned int CIS4 : 1;
	unsigned int CIS5 : 1;
	unsigned int CIS6 : 1;
	unsigned int CIS7 : 1;
	unsigned int CIS8 : 1;
	unsigned int CIS9 : 1;
	unsigned int p0 : 3;
	unsigned int SIS : 1;
	unsigned int MEIS : 1;
	unsigned int BEIS : 1;
	unsigned int CIM0 : 1;
	unsigned int CIM1 : 1;
	unsigned int CIM2 : 1;
	unsigned int CIM3 : 1;
	unsigned int CIM4 : 1;
	unsigned int CIM5 : 1;
	unsigned int CIM6 : 1;
	unsigned int CIM7 : 1;
	unsigned int CIM8 : 1;
	unsigned int CIM9 : 1;
	unsigned int p1 : 3;
	unsigned int SIM : 1;
	unsigned int MEIM : 1;
	unsigned int p2 : 1;
} tD_STAT;

typedef struct {
	unsigned int CPC0 : 1;
	unsigned int CPC1 : 1;
	unsigned int CPC2 : 1;
	unsigned int CPC3 : 1;
	unsigned int CPC4 : 1;
	unsigned int CPC5 : 1;
	unsigned int CPC6 : 1;
	unsigned int CPC7 : 1;
	unsigned int CPC8 : 1;
	unsigned int CPC9 : 1;
	unsigned int p0 : 6;
	unsigned int CDE0 : 1;
	unsigned int CDE1 : 1;
	unsigned int CDE2 : 1;
	unsigned int CDE3 : 1;
	unsigned int CDE4 : 1;
	unsigned int CDE5 : 1;
	unsigned int CDE6 : 1;
	unsigned int CDE7 : 1;
	unsigned int CDE8 : 1;
	unsigned int CDE9 : 1;
	unsigned int p1 : 5;
	unsigned int PCE : 1;
} tD_PCR;

typedef struct {
	unsigned int SQWC : 8;
	unsigned int p0 : 8;
	unsigned int TQWC : 8;
	unsigned int p1 : 8;
} tD_SQWC;

typedef struct {
	unsigned int RMSK : 31;
	unsigned int p0 : 1;
} tD_RBSR;

typedef struct {
	unsigned int ADDR : 31;
	unsigned int p0 : 1;
} tD_RBOR;

typedef struct {
	unsigned int ADDR : 31;
	unsigned int p0 : 1;
} tD_STADR;

typedef struct {
	unsigned int p0 : 16;
	unsigned int CPND : 1;
	unsigned int p1 : 15;
} tD_ENABLER;

typedef struct {
	unsigned int p0 : 16;
	unsigned int CPND : 1;
	unsigned int p1 : 15;
} tD_ENABLEW;

typedef struct {
	unsigned int EN1 : 1;
	unsigned int EN2 : 1;
	unsigned int CRTMD : 3;
	unsigned int MMOD : 1;
	unsigned int AMOD : 1;
	unsigned int SLBG : 1;
	unsigned int ALP : 8;
	unsigned int p0 : 16;
	unsigned int p1;
} tGS_PMODE;

typedef struct {
	unsigned int INT : 1;
	unsigned int FFMD : 1;
	unsigned int DPMS : 2;
	unsigned int p0 : 28;
	unsigned int p1;
} tGS_SMODE2;

typedef struct {
	unsigned int FBP : 9;
	unsigned int FBW : 6;
	unsigned int PSM : 5;
	unsigned int p0 : 12;
	unsigned int DBX : 11;
	unsigned int DBY : 11;
	unsigned int p1 : 10;
} tGS_DISPFB1;

typedef struct {
	unsigned int DX : 12;
	unsigned int DY : 11;
	unsigned int MAGH : 4;
	unsigned int MAGV : 2;
	unsigned int p0 : 3;
	unsigned int DW : 12;
	unsigned int DH : 11;
	unsigned int p1 : 9;
} tGS_DISPLAY1;

typedef struct {
	unsigned int FBP : 9;
	unsigned int FBW : 6;
	unsigned int PSM : 5;
	unsigned int p0 : 12;
	unsigned int DBX : 11;
	unsigned int DBY : 11;
	unsigned int p1 : 10;
} tGS_DISPFB2;

typedef struct {
	unsigned int DX : 12;
	unsigned int DY : 11;
	unsigned int MAGH : 4;
	unsigned int MAGV : 2;
	unsigned int p0 : 3;
	unsigned int DW : 12;
	unsigned int DH : 11;
	unsigned int p1 : 9;
} tGS_DISPLAY2;

typedef struct {
	unsigned int EXBP : 14;
	unsigned int EXBW : 6;
	unsigned int FBIN : 2;
	unsigned int WFFMD : 1;
	unsigned int EMODA : 2;
	unsigned int EMODC : 2;
	unsigned int p0 : 5;
	unsigned int WDX : 11;
	unsigned int WDY : 11;
	unsigned int p1 : 10;
} tGS_EXTBUF;

typedef struct {
	unsigned int SX : 12;
	unsigned int SY : 11;
	unsigned int SMPH : 4;
	unsigned int SMPV : 2;
	unsigned int p0 : 3;
	unsigned int WW : 12;
	unsigned int WH : 11;
	unsigned int p1 : 9;
} tGS_EXTDATA;

typedef struct {
	unsigned int WRITE : 1;
	unsigned int p0 : 31;
	unsigned int p1;
} tGS_EXTWRITE;

typedef struct {
	unsigned int R : 8;
	unsigned int G : 8;
	unsigned int B : 8;
	unsigned int p0 : 8;
	unsigned int p1;
} tGS_BGCOLOR;

typedef struct {
	unsigned int SIGNAL : 1;
	unsigned int FINISH : 1;
	unsigned int HSINT : 1;
	unsigned int VSINT : 1;
	unsigned int EDWINT : 1;
	unsigned int p0 : 3;
	unsigned int FLUSH : 1;
	unsigned int RESET : 1;
	unsigned int p1 : 2;
	unsigned int NFIELD : 1;
	unsigned int FIELD : 1;
	unsigned int FIFO : 2;
	unsigned int REV : 8;
	unsigned int ID : 8;
	unsigned int p2;
} tGS_CSR;

typedef struct {
	unsigned int p0 : 8;
	unsigned int SIGMSK : 1;
	unsigned int FINISHMSK : 1;
	unsigned int HSMSK : 1;
	unsigned int VSMSK : 1;
	unsigned int EDWMSK : 1;
	unsigned int p1 : 19;
	unsigned int p2;
} tGS_IMR;

typedef struct {
	unsigned int DIR : 1;
	unsigned int p0 : 31;
	unsigned int p1;
} tGS_BUSDIR;

typedef struct {
	unsigned int SIGID;
	unsigned int LBLID;
} tGS_SIGLBLID;

struct _sceDmaTag {
	u_short qwc;
	u_char mark;
	u_char id;
	_sceDmaTag *next;
	u_int p[2];
};

typedef _sceDmaTag sceDmaTag;

typedef struct {
	u_char sts;
	u_char std;
	u_char mfd;
	u_char rcycle;
	u_short express;
	u_short notify;
	u_short sqwc;
	u_short tqwc;
	void *rbadr;
	u_int rbmsk;
} sceDmaEnv;

typedef struct {
	tD_CHCR chcr;
	u_int p0[3];
	void *madr;
	u_int p1[3];
	u_int qwc;
	u_int p2[3];
	sceDmaTag *tadr;
	u_int p3[3];
	void *as0;
	u_int p4[3];
	void *as1;
	u_int p5[3];
	u_int p6[4];
	u_int p7[4];
	void *sadr;
	u_int p8[3];
} sceDmaChan;

typedef struct {
	tGS_PMODE pmode;
	tGS_SMODE2 smode2;
	tGS_DISPFB2 dispfb;
	tGS_DISPLAY2 display;
	tGS_BGCOLOR bgcolor;
} sceGsDispEnv;

typedef struct {
	sceGsFrame frame1;
	u_long frame1addr;
	sceGsZbuf zbuf1;
	long int zbuf1addr;
	sceGsXyoffset xyoffset1;
	long int xyoffset1addr;
	sceGsScissor scissor1;
	long int scissor1addr;
	sceGsPrmodecont prmodecont;
	long int prmodecontaddr;
	sceGsColclamp colclamp;
	long int colclampaddr;
	sceGsDthe dthe;
	long int dtheaddr;
	sceGsTest test1;
	long int test1addr;
} sceGsDrawEnv1;

typedef struct {
	sceGsFrame frame2;
	u_long frame2addr;
	sceGsZbuf zbuf2;
	long int zbuf2addr;
	sceGsXyoffset xyoffset2;
	long int xyoffset2addr;
	sceGsScissor scissor2;
	long int scissor2addr;
	sceGsPrmodecont prmodecont;
	long int prmodecontaddr;
	sceGsColclamp colclamp;
	long int colclampaddr;
	sceGsDthe dthe;
	long int dtheaddr;
	sceGsTest test2;
	long int test2addr;
} sceGsDrawEnv2;

typedef struct {
	sceGsTest testa;
	long int testaaddr;
	sceGsPrim prim;
	long int primaddr;
	sceGsRgbaq rgbaq;
	long int rgbaqaddr;
	sceGsXyz xyz2a;
	long int xyz2aaddr;
	sceGsXyz xyz2b;
	long int xyz2baddr;
	sceGsTest testb;
	long int testbaddr;
} sceGsClear;

typedef struct {
	sceGsDispEnv disp[2];
	sceGifTag giftag0;
	sceGsDrawEnv1 draw0;
	sceGsClear clear0;
	sceGifTag giftag1;
	sceGsDrawEnv1 draw1;
	sceGsClear clear1;
} sceGsDBuff;

typedef struct {
	sceGsDispEnv disp[2];
	sceGifTag giftag0;
	sceGsDrawEnv1 draw01;
	sceGsDrawEnv2 draw02;
	sceGsClear clear0;
	sceGifTag giftag1;
	sceGsDrawEnv1 draw11;
	sceGsDrawEnv2 draw12;
	sceGsClear clear1;
} sceGsDBuffDc;

typedef struct {
	sceGsTexflush texflush;
	long int texflushaddr;
	sceGsTex1 tex11;
	long int tex11addr;
	sceGsTex0 tex01;
	long int tex01addr;
	sceGsClamp clamp1;
	long int clamp1addr;
} sceGsTexEnv;

typedef struct {
	sceGsTexflush texflush;
	long int texflushaddr;
	sceGsTex1 tex12;
	long int tex12addr;
	sceGsTex0 tex02;
	long int tex02addr;
	sceGsClamp clamp2;
	long int clamp2addr;
} sceGsTexEnv2;

typedef struct {
	sceGsAlpha alpha1;
	long int alpha1addr;
	sceGsPabe pabe;
	long int pabeaddr;
	sceGsTexa texa;
	long int texaaddr;
	sceGsFba fba1;
	long int fba1addr;
} sceGsAlphaEnv;

typedef struct {
	sceGsAlpha alpha2;
	long int alpha2addr;
	sceGsPabe pabe;
	long int pabeaddr;
	sceGsTexa texa;
	long int texaaddr;
	sceGsFba fba2;
	long int fba2addr;
} sceGsAlphaEnv2;

typedef struct {
	sceGifTag giftag0;
	sceGsBitbltbuf bitbltbuf;
	long int bitbltbufaddr;
	sceGsTrxpos trxpos;
	long int trxposaddr;
	sceGsTrxreg trxreg;
	long int trxregaddr;
	sceGsTrxdir trxdir;
	long int trxdiraddr;
	sceGifTag giftag1;
} sceGsLoadImage;

typedef struct {
	u_int vifcode[4];
	sceGifTag giftag;
	sceGsBitbltbuf bitbltbuf;
	long int bitbltbufaddr;
	sceGsTrxpos trxpos;
	long int trxposaddr;
	sceGsTrxreg trxreg;
	long int trxregaddr;
	sceGsFinish finish;
	long int finishaddr;
	sceGsTrxdir trxdir;
	long int trxdiraddr;
} sceGsStoreImage;

typedef struct {
	short int sceGsInterMode;
	short int sceGsOutMode;
	short int sceGsFFMode;
	short int sceGsVersion;
	int (*sceGsVSCfunc)(/* parameters unknown */);
	int sceGsVSCid;
} sceGsGParam;

typedef struct {
	u_int *pCurrent;
	u_long128 *pBase;
	u_long128 *pDmaTag;
	u_long *pGifTag;
} sceGifPacket;

typedef int sceVu0IVECTOR[4];
typedef char Sint8;
typedef short int Sint16;
typedef long int Sint64;
typedef long128 Sint128;
typedef u_char Uint8;
typedef u_long Uint64;
typedef u_long128 Uint128;

struct gf_dma_tag {
	long unsigned int QWC : 16;
	long unsigned int pad16 : 10;
	long unsigned int PCE : 2;
	long unsigned int ID : 3;
	long unsigned int IRQ : 1;
	long unsigned int ADDR : 31;
	long unsigned int SPR : 1;
	long unsigned int vif_code[2];
};

typedef gf_dma_tag GF_DMA_TAG;

struct _qdata643232 {
	Uint64 u64;
	Uint32 u32[2];
};

typedef _qdata643232 QDATA643232;

struct pod_header {
	Uint32 magic;
	Uint16 version;
	Uint16 pad;
	Sint32 shapeNum;
	Sint32 rootShape;
	Uint32 extBlockNum;
	Sint32 pad2[3];
};

typedef pod_header PodHEADER;

struct pod_shapetbl {
	Uint16 parent;
	Uint16 child;
	Uint16 sibling;
	Uint32 shape;
	Uint32 flag;
	union {
		sceVu0FMATRIX matrix;
		struct {
			sceVu0FVECTOR rotate;
			sceVu0FVECTOR scale;
			sceVu0FVECTOR translate;
		} vector;
	} rel;
};

typedef pod_shapetbl PodSHAPETBL;

struct pod_extendtbl {
	Uint32 extId;
	Uint32 free[3];
};

typedef pod_extendtbl PodEXTENDTBL;

struct pod_geometry {
	Sint32 vertNum;
	Uint32 prim;
	Sint32 pad[2];
};

typedef pod_geometry PodGEOMETRY;

struct pod_share {
	Uint32 extId;
	Uint32 shapeNo;
	Uint32 offset;
	Uint32 pad;
};

typedef pod_share PodSHARE;

struct pmt_shapeofs {
	Uint32 offset;
	Sint32 keyNum;
	Uint32 flag;
	Sint32 pad;
	sceVu0FMATRIX mat;
};

typedef pmt_shapeofs PmtSHAPEOFS;

struct pmt_shapekeyhead {
	Uint32 frame;
	Sint32 pad[3];
};

typedef pmt_shapekeyhead PmtSHAPEKEYHEAD;

struct gf_pig_ref {
	Uint32 offset;
	Uint32 size;
};

typedef gf_pig_ref GF_PIG_REF;

struct gf_pig_head {
	Uint32 magic;
	Uint16 version;
	Uint16 reserved0;
	Uint32 reserved1;
	Uint16 flag;
	Uint16 imageNum;
	Uint64 guid[2];
	Uint16 width;
	Uint16 height;
	Uint8 psm;
	Uint8 cpsm;
	Uint16 reserved2;
	Uint32 vram;
	Uint32 vramClut;
	qword free;
	GF_PIG_REF clutRef;
	GF_PIG_REF imageRef[7];
};

typedef gf_pig_head GF_PIG_HEAD;

typedef enum {
	GF_INST_TYPE_NULL = 0,
	GF_INST_TYPE_OBJECT = 1,
	GF_INST_TYPE_SHAPE = 2,
	GF_INST_TYPE_SPRITE = 3,
	GF_INST_TYPE_SCENE = 4,
	GF_INST_TYPE_FOG = 5,
	GF_INST_TYPE_USER = 6
} GF_INST_TYPE;

typedef gf_inst_head GF_INST_HEAD;
typedef gf_inst_head GF_INST_NULL;

struct gf_object {
	GF_INST_HEAD head;
	Uint32 flag;
	GF_MICRO *micro;
	GF_LIGHT *light;
	GF_POINT_LIGHT *point_light;
	GF_SPOT_LIGHT *spot_light;
	GF_MODEL *model;
	Sint32 nShape;
	GF_INST_SHAPE *shape;
	Uint32 flagAnim;
	PmtHEADER *curAnim;
	Float32 speedAnim;
	PmtHEADER *compNextAnim;
	Uint32 compAllTimeAnim;
	Uint32 compCurTimeAnim;
	GF_CallBackFunction func;
	sceVu0FVECTOR col;
	Uint64 alpha;
};

struct gf_user {
	GF_INST_HEAD head;
	void (*funcInstUserEval)(/* parameters unknown */);
	qword* (*funcInstUserDraw)(/* parameters unknown */);
};

typedef gf_user GF_INST_USER;

struct gf_vu1pkt_head {
	sceGifTag giftag;
	sceGifTag giftagTriFan;
};

typedef gf_vu1pkt_head GF_VU1PKT_HEAD;

struct gf_cache_head {
	Uint32 size;
	Uint32 cellMax;
	Uint16 cache_pos;
	Uint16 cache_size;
	Uint16 preset_pos;
	Uint16 pad;
};

typedef gf_cache_head GF_CACHE_HEAD;

struct exception {
	int type;
	char *name;
	double arg1;
	double arg2;
	double retval;
	int err;
};

enum __fdlibm_version {
	__fdlibm_ieee = -1,
	__fdlibm_svid = 0,
	__fdlibm_xopen = 1,
	__fdlibm_posix = 2
};

struct gf_vram_cell {
	gf_vram_cell *prev;
	gf_vram_cell *next;
	Uint8 stat;
	Uint8 pad;
	Uint8 used_flag;
	Uint8 reserved_flag;
	Uint16 pos;
	Uint16 size;
};

typedef gf_vram_cell GF_VRAM_CELL;

struct gf_vram_head {
	Uint32 size;
	Uint32 cellMax;
	GF_VRAM_CELL *top_cell;
};

typedef gf_vram_head GF_VRAM_HEAD;

typedef union {
	double value;
	struct {
		__uint32_t lsw;
		__uint32_t msw;
	} parts;
} ieee_double_shape_type;

typedef union {
	float value;
	__uint32_t word;
} ieee_float_shape_type;

enum cmp_type {
	CMP_SI = 0,
	CMP_DI = 1,
	CMP_SF = 2,
	CMP_DF = 3,
	CMP_MAX = 4
};

enum delay_type {
	DELAY_NONE = 0,
	DELAY_LOAD = 1,
	DELAY_HILO = 2,
	DELAY_HILO1 = 3,
	DELAY_FCMP = 4
};

enum processor_type {
	PROCESSOR_DEFAULT = 0,
	PROCESSOR_R3000 = 1,
	PROCESSOR_R3900 = 2,
	PROCESSOR_R6000 = 3,
	PROCESSOR_R4000 = 4,
	PROCESSOR_R4100 = 5,
	PROCESSOR_R4300 = 6,
	PROCESSOR_R4600 = 7,
	PROCESSOR_R4650 = 8,
	PROCESSOR_R5000 = 9,
	PROCESSOR_R5400 = 10,
	PROCESSOR_R5900 = 11,
	PROCESSOR_R8000 = 12
};

enum mips_abicalls_type {
	MIPS_ABICALLS_NO = 0,
	MIPS_ABICALLS_YES = 1
};

enum block_move_type {
	BLOCK_MOVE_NORMAL = 0,
	BLOCK_MOVE_NOT_LAST = 1,
	BLOCK_MOVE_LAST = 2
};

enum reg_class {
	NO_REGS = 0,
	ARGP_REGS = 1,
	M16_NA_REGS = 2,
	M16_REGS = 3,
	T_REG = 4,
	M16_T_REGS = 5,
	GR_REGS = 6,
	FP_REGS = 7,
	HI_REG = 8,
	LO_REG = 9,
	HILO_REG = 10,
	MD_REGS = 11,
	AP_AND_GR_REGS = 12,
	HI_AND_GR_REGS = 13,
	LO_AND_GR_REGS = 14,
	HILO_AND_GR_REGS = 15,
	HI1_REG = 16,
	LO1_REG = 17,
	HILO1_REG = 18,
	MD1_REGS = 19,
	HI1_AND_GR_REGS = 20,
	LO1_AND_GR_REGS = 21,
	HILO1_AND_GR_REGS = 22,
	HI01_REG = 23,
	LO01_REG = 24,
	HILO01_REG = 25,
	MD01_REGS = 26,
	HI01_AND_GR_REGS = 27,
	LO01_AND_GR_REGS = 28,
	HILO01_AND_GR_REGS = 29,
	ST_REGS = 30,
	ALL_REGS = 31,
	LIM_REG_CLASSES = 32
};

enum frameinfo_state {
	fi_blank = 0,
	fi_partially_initialized = 1,
	fi_modes_known = 2,
	fi_initialized = 3
};

struct mips_frame_info {
	long int total_size;
	long int var_size;
	long int args_size;
	long int extra_size;
	int gp_reg_size;
	int fp_reg_size;
	int gp_quad_size;
	long int mask;
	long int fmask;
	long int gp_save_offset;
	long int fp_save_offset;
	long int gp_sp_offset;
	long int rap_offset;
	long int fp_sp_offset;
	frameinfo_state state;
	int num_gp;
	int num_fp;
	long int insns_len;
};

struct mips_args {
	int gp_reg_found;
	unsigned int arg_number;
	unsigned int arg_words;
	unsigned int fp_arg_words;
	int last_arg_fp;
	int fp_code;
	unsigned int num_adjusts;
	rtx_def *adjust[8];
};

typedef mips_args CUMULATIVE_ARGS;

enum mips_builtins {
	MIPS5900_BUILTIN_PABSH = 0,
	MIPS5900_BUILTIN_PABSW = 1,
	MIPS5900_BUILTIN_PADDB = 2,
	MIPS5900_BUILTIN_PADDH = 3,
	MIPS5900_BUILTIN_PADDSB = 4,
	MIPS5900_BUILTIN_PADDSH = 5,
	MIPS5900_BUILTIN_PADDSW = 6,
	MIPS5900_BUILTIN_PADDUB = 7,
	MIPS5900_BUILTIN_PADDUH = 8,
	MIPS5900_BUILTIN_PADDUW = 9,
	MIPS5900_BUILTIN_PADDW = 10,
	MIPS5900_BUILTIN_PADSBH = 11,
	MIPS5900_BUILTIN_PAND = 12,
	MIPS5900_BUILTIN_PCEQB = 13,
	MIPS5900_BUILTIN_PCEQH = 14,
	MIPS5900_BUILTIN_PCEQW = 15,
	MIPS5900_BUILTIN_PCGTB = 16,
	MIPS5900_BUILTIN_PCGTH = 17,
	MIPS5900_BUILTIN_PCGTW = 18,
	MIPS5900_BUILTIN_PCPYH = 19,
	MIPS5900_BUILTIN_PCPYLD = 20,
	MIPS5900_BUILTIN_PCPYUD = 21,
	MIPS5900_BUILTIN_PDIVBW = 22,
	MIPS5900_BUILTIN_PDIVUW = 23,
	MIPS5900_BUILTIN_PDIVW = 24,
	MIPS5900_BUILTIN_PHMADH = 25,
	MIPS5900_BUILTIN_PHMSBH = 26,
	MIPS5900_BUILTIN_PMADDH = 27,
	MIPS5900_BUILTIN_PMADDUW = 28,
	MIPS5900_BUILTIN_PMADDW = 29,
	MIPS5900_BUILTIN_PMSUBH = 30,
	MIPS5900_BUILTIN_PMSUBW = 31,
	MIPS5900_BUILTIN_PMTHI = 32,
	MIPS5900_BUILTIN_PMTLO = 33,
	MIPS5900_BUILTIN_PMTHL_LW = 34,
	MIPS5900_BUILTIN_PMULTH = 35,
	MIPS5900_BUILTIN_PMULTUW = 36,
	MIPS5900_BUILTIN_PMULTW = 37,
	MIPS5900_BUILTIN_PEXCH = 38,
	MIPS5900_BUILTIN_PEXCW = 39,
	MIPS5900_BUILTIN_PEXEH = 40,
	MIPS5900_BUILTIN_PEXEW = 41,
	MIPS5900_BUILTIN_PEXT5 = 42,
	MIPS5900_BUILTIN_PEXTLB = 43,
	MIPS5900_BUILTIN_PEXTLH = 44,
	MIPS5900_BUILTIN_PEXTLW = 45,
	MIPS5900_BUILTIN_PEXTUB = 46,
	MIPS5900_BUILTIN_PEXTUH = 47,
	MIPS5900_BUILTIN_PEXTUW = 48,
	MIPS5900_BUILTIN_PINTH = 49,
	MIPS5900_BUILTIN_PINTEH = 50,
	MIPS5900_BUILTIN_PLZCW = 51,
	MIPS5900_BUILTIN_PMAXH = 52,
	MIPS5900_BUILTIN_PMAXW = 53,
	MIPS5900_BUILTIN_PMINH = 54,
	MIPS5900_BUILTIN_PMINW = 55,
	MIPS5900_BUILTIN_PNOR = 56,
	MIPS5900_BUILTIN_POR = 57,
	MIPS5900_BUILTIN_PPAC5 = 58,
	MIPS5900_BUILTIN_PPACB = 59,
	MIPS5900_BUILTIN_PPACH = 60,
	MIPS5900_BUILTIN_PPACW = 61,
	MIPS5900_BUILTIN_PREVH = 62,
	MIPS5900_BUILTIN_PROT3W = 63,
	MIPS5900_BUILTIN_PSLLH = 64,
	MIPS5900_BUILTIN_PSLLVW = 65,
	MIPS5900_BUILTIN_PSLLW = 66,
	MIPS5900_BUILTIN_PSRAH = 67,
	MIPS5900_BUILTIN_PSRAVW = 68,
	MIPS5900_BUILTIN_PSRAW = 69,
	MIPS5900_BUILTIN_PSRLH = 70,
	MIPS5900_BUILTIN_PSRLVW = 71,
	MIPS5900_BUILTIN_PSRLW = 72,
	MIPS5900_BUILTIN_PSUBB = 73,
	MIPS5900_BUILTIN_PSUBH = 74,
	MIPS5900_BUILTIN_PSUBSB = 75,
	MIPS5900_BUILTIN_PSUBSH = 76,
	MIPS5900_BUILTIN_PSUBSW = 77,
	MIPS5900_BUILTIN_PSUBUB = 78,
	MIPS5900_BUILTIN_PSUBUH = 79,
	MIPS5900_BUILTIN_PSUBUW = 80,
	MIPS5900_BUILTIN_PSUBW = 81,
	MIPS5900_BUILTIN_PXOR = 82,
	MIPS5900_BUILTIN_MFSA = 83,
	MIPS5900_BUILTIN_MTSA = 84,
	MIPS5900_BUILTIN_MTSAB = 85,
	MIPS5900_BUILTIN_MTSAH = 86,
	MIPS5900_BUILTIN_QFSRV = 87,
	MIPS5900_BUILTIN_PMFHI = 88,
	MIPS5900_BUILTIN_PMFLO = 89,
	MIPS5900_BUILTIN_PMFHL_LW = 90,
	MIPS5900_BUILTIN_PMFHL_UW = 91,
	MIPS5900_BUILTIN_PMFHL_SLW = 92,
	MIPS5900_BUILTIN_PMFHL_LH = 93,
	MIPS5900_BUILTIN_PMFHL_SH = 94,
	MIPS_BUILTIN_MAX = 95
};

typedef int ptrdiff_t;

enum machine_mode {
	VOIDmode = 0,
	BImode = 1,
	QImode = 2,
	HImode = 3,
	SImode = 4,
	DImode = 5,
	TImode = 6,
	OImode = 7,
	PQImode = 8,
	PHImode = 9,
	PSImode = 10,
	PDImode = 11,
	QFmode = 12,
	HFmode = 13,
	TQFmode = 14,
	SFmode = 15,
	DFmode = 16,
	XFmode = 17,
	TFmode = 18,
	QCmode = 19,
	HCmode = 20,
	SCmode = 21,
	DCmode = 22,
	XCmode = 23,
	TCmode = 24,
	CQImode = 25,
	CHImode = 26,
	CSImode = 27,
	CDImode = 28,
	CTImode = 29,
	COImode = 30,
	V2QImode = 31,
	V2HImode = 32,
	V2SImode = 33,
	V2DImode = 34,
	V4QImode = 35,
	V4HImode = 36,
	V4SImode = 37,
	V4DImode = 38,
	V8QImode = 39,
	V8HImode = 40,
	V8SImode = 41,
	V8DImode = 42,
	V16QImode = 43,
	V2SFmode = 44,
	V2DFmode = 45,
	V4SFmode = 46,
	V4DFmode = 47,
	V8SFmode = 48,
	V8DFmode = 49,
	BLKmode = 50,
	CCmode = 51,
	MAX_MACHINE_MODE = 52
};

enum mode_class {
	MODE_RANDOM = 0,
	MODE_INT = 1,
	MODE_FLOAT = 2,
	MODE_PARTIAL_INT = 3,
	MODE_CC = 4,
	MODE_COMPLEX_INT = 5,
	MODE_COMPLEX_FLOAT = 6,
	MODE_VECTOR_INT = 7,
	MODE_VECTOR_FLOAT = 8,
	MAX_MODE_CLASS = 9
};

typedef signed char QItype;
typedef unsigned char UQItype;
typedef short int HItype;
typedef short unsigned int UHItype;
typedef long int word_type;

struct DWstruct {
	SItype low;
	SItype high;
};

typedef union {
	DWstruct s;
	DItype ll;
} DWunion;

// warning: multiple differing types with the same name (type name not equal)
typedef SItype intfrac;

typedef enum {
	CLASS_SNAN = 0,
	CLASS_QNAN = 1,
	CLASS_ZERO = 2,
	CLASS_NUMBER = 3,
	CLASS_INFINITY = 4
} fp_class_type;

// warning: multiple differing types with the same name (type name not equal)
typedef DItype intfrac;
typedef short unsigned int ushort;
typedef unsigned int uint;
typedef long int daddr_t;
typedef char *caddr_t;
typedef int pid_t;
typedef long int key_t;
typedef long int ssize_t;
typedef long int fd_mask;

typedef struct {
	fd_mask fds_bits[1];
} _types_fd_set;

typedef long unsigned int sigset_t;

struct sigaction {
	void (*sa_handler)(/* parameters unknown */);
	sigset_t sa_mask;
	int sa_flags;
};

typedef int sig_atomic_t;
typedef malloc_chunk *mchunkptr;

typedef union {
	double value;
	struct {
		unsigned int fraction1;
		unsigned int fraction0 : 20;
		unsigned int exponent : 11;
		unsigned int sign : 1;
	} number;
	struct {
		unsigned int function1;
		unsigned int function0 : 19;
		unsigned int quiet : 1;
		unsigned int exponent : 11;
		unsigned int sign : 1;
	} nan;
	struct {
		long unsigned int lsw;
		long unsigned int msw;
	} parts;
	long int aslong[2];
} __ieee_double_shape_type;

typedef union {
	float value;
	struct {
		unsigned int fraction0 : 7;
		unsigned int fraction1 : 16;
		unsigned int exponent : 8;
		unsigned int sign : 1;
	} number;
	struct {
		unsigned int function1 : 16;
		unsigned int function0 : 6;
		unsigned int quiet : 1;
		unsigned int exponent : 8;
		unsigned int sign : 1;
	} nan;
	long int p1;
} __ieee_float_shape_type;

typedef int fp_rnd;
typedef int fp_except;
typedef int fp_rdi;

union double_union {
	double d;
	__uint32_t i[2];
};

struct flock {
	short int l_type;
	short int l_whence;
	long int l_start;
	long int l_len;
	short int l_pid;
	short int l_xxx;
};

struct eflock {
	short int l_type;
	short int l_whence;
	long int l_start;
	long int l_len;
	short int l_pid;
	short int l_xxx;
	long int l_rpid;
	long int l_rsys;
};

// warning: multiple differing types with the same name (type name not equal)
typedef unsigned int __ULong;
struct rtx_def;
