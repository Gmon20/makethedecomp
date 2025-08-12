typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned short    word;
typedef struct Elf32_Sym Elf32_Sym, *PElf32_Sym;

struct Elf32_Sym {
    dword st_name;
    dword st_value;
    dword st_size;
    byte st_info;
    byte st_other;
    word st_shndx;
};

typedef struct Elf32_Rel Elf32_Rel, *PElf32_Rel;

struct Elf32_Rel {
    dword r_offset; // location to apply the relocation action
    dword r_info; // the symbol table index and the type of relocation
};

typedef struct Elf32_Phdr Elf32_Phdr, *PElf32_Phdr;

typedef enum Elf_ProgramHeaderType_MIPS {
    PT_NULL=0,
    PT_LOAD=1,
    PT_DYNAMIC=2,
    PT_INTERP=3,
    PT_NOTE=4,
    PT_SHLIB=5,
    PT_PHDR=6,
    PT_TLS=7,
    PT_GNU_EH_FRAME=1685382480,
    PT_GNU_STACK=1685382481,
    PT_GNU_RELRO=1685382482,
    PT_MIPS_REGINFO=1879048192,
    PT_MIPS_RTPROC=1879048193,
    PT_MIPS_OPTIONS=1879048194,
    PT_MIPS_ABIFLAGS=1879048195,
    PT_MIPS_PSPREL1=1879048352,
    PT_MIPS_PSPREL2=1879048353
} Elf_ProgramHeaderType_MIPS;

struct Elf32_Phdr {
    enum Elf_ProgramHeaderType_MIPS p_type;
    dword p_offset;
    dword p_vaddr;
    dword p_paddr;
    dword p_filesz;
    dword p_memsz;
    dword p_flags;
    dword p_align;
};

typedef enum Elf_SectionHeaderType_MIPS {
    SHT_NULL=0,
    SHT_PROGBITS=1,
    SHT_SYMTAB=2,
    SHT_STRTAB=3,
    SHT_RELA=4,
    SHT_HASH=5,
    SHT_DYNAMIC=6,
    SHT_NOTE=7,
    SHT_NOBITS=8,
    SHT_REL=9,
    SHT_SHLIB=10,
    SHT_DYNSYM=11,
    SHT_INIT_ARRAY=14,
    SHT_FINI_ARRAY=15,
    SHT_PREINIT_ARRAY=16,
    SHT_GROUP=17,
    SHT_SYMTAB_SHNDX=18,
    SHT_ANDROID_REL=1610612737,
    SHT_ANDROID_RELA=1610612738,
    SHT_GNU_ATTRIBUTES=1879048181,
    SHT_GNU_HASH=1879048182,
    SHT_GNU_LIBLIST=1879048183,
    SHT_CHECKSUM=1879048184,
    SHT_SUNW_move=1879048186,
    SHT_SUNW_COMDAT=1879048187,
    SHT_SUNW_syminfo=1879048188,
    SHT_GNU_verdef=1879048189,
    SHT_GNU_verneed=1879048190,
    SHT_GNU_versym=1879048191,
    SHT_MIPS_LIBLIST=1879048192,
    SHT_MIPS_MSYM=1879048193,
    SHT_MIPS_CONFLICT=1879048194,
    SHT_MIPS_GPTAB=1879048195,
    SHT_MIPS_UCODE=1879048196,
    SHT_MIPS_DEBUG=1879048197,
    SHT_MIPS_REGINFO=1879048198,
    SHT_MIPS_PACKAGE=1879048199,
    SHT_MIPS_PACKSYM=1879048200,
    SHT_MIPS_RELD=1879048201,
    =1879048203,
    SHT_MIPS_CONTENT=1879048204,
    SHT_MIPS_OPTIONS=1879048205,
    SHT_MIPS_SHDR=1879048208,
    SHT_MIPS_FDESC=1879048209,
    SHT_MIPS_EXTSYM=1879048210,
    SHT_MIPS_DENSE=1879048211,
    SHT_MIPS_PDESC=1879048212,
    SHT_MIPS_LOCSYM=1879048213,
    SHT_MIPS_AUXSYM=1879048214,
    SHT_MIPS_OPTSYM=1879048215,
    SHT_MIPS_LOCSTR=1879048216,
    SHT_MIPS_LINE=1879048217,
    SHT_MIPS_RFDESC=1879048218,
    SHT_MIPS_DELTASYM=1879048219,
    SHT_MIPS_DELTAINST=1879048220,
    SHT_MIPS_DELTACLASS=1879048221,
    SHT_MIPS_DWARF=1879048222,
    SHT_MIPS_DELTADECL=1879048223,
    SHT_MIPS_SYMBOL_LIB=1879048224,
    SHT_MIPS_EVENTS=1879048225,
    SHT_MIPS_TRANSLATE=1879048226,
    SHT_MIPS_PIXIE=1879048227,
    SHT_MIPS_XLATE=1879048228,
    SHT_MIPS_XLATE_DEBUG=1879048229,
    SHT_MIPS_WHIRL=1879048230,
    SHT_MIPS_EH_REGION=1879048231,
    SHT_MIPS_XLATE_OLD=1879048232,
    SHT_MIPS_PDR_EXCEPTION=1879048233,
    SHT_MIPS_ABIFLAGS=1879048234,
    SHT_MIPS_PSPREL=1879048352
} Elf_SectionHeaderType_MIPS;

typedef struct Elf32_Shdr Elf32_Shdr, *PElf32_Shdr;

struct Elf32_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType_MIPS sh_type;
    dword sh_flags;
    dword sh_addr;
    dword sh_offset;
    dword sh_size;
    dword sh_link;
    dword sh_info;
    dword sh_addralign;
    dword sh_entsize;
};

typedef struct Elf32_Ehdr Elf32_Ehdr, *PElf32_Ehdr;

struct Elf32_Ehdr {
    byte e_ident_magic_num;
    char e_ident_magic_str[3];
    byte e_ident_class;
    byte e_ident_data;
    byte e_ident_version;
    byte e_ident_osabi;
    byte e_ident_abiversion;
    byte e_ident_pad[7];
    word e_type;
    word e_machine;
    dword e_version;
    dword e_entry;
    dword e_phoff;
    dword e_shoff;
    dword e_flags;
    word e_ehsize;
    word e_phentsize;
    word e_phnum;
    word e_shentsize;
    word e_shnum;
    word e_shstrndx;
};



undefined DAT_00013578;
undefined DAT_0001357c;
undefined s_PsIImcman_3100_000136a0;
undefined *DAT_0001393c;
undefined FUN_00003f7c;
undefined *DAT_00013948;
undefined4 DAT_0001394c;
undefined4 DAT_00013940;
undefined4 DAT_000138c0;
undefined1 DAT_000138cc;
undefined4 DAT_000138dc;
undefined DAT_00013958;
undefined DAT_00015158;
undefined FUN_00003fb4;
int DAT_00013944;
int DAT_00013950;
char DAT_0001515b;
char DAT_00015160;
char DAT_0001525b;
undefined DAT_00025ce0;
undefined1 DAT_0001515d;
char DAT_0001575b;
undefined4 DAT_0001525c;
char DAT_00015164;
char DAT_00015163;
byte DAT_0001515c;
undefined1 DAT_0001515b;
byte DAT_0001515e;
byte DAT_0001515d;
byte DAT_00015160;
byte DAT_0001515f;
byte DAT_00015161;
byte DAT_00015162;
undefined1 DAT_0001515a;
char DAT_0001515c;
undefined4 DAT_000136e8;
undefined DAT_bf808268;
undefined DAT_000169d8;
undefined4 DAT_000138a4;
undefined4 DAT_000138a8;
undefined4 DAT_000138ac;
undefined4 DAT_000138a0;
undefined4 DAT_00016964;
undefined4 DAT_00016958;
undefined4 DAT_000138b8;
undefined4 DAT_000138b4;
undefined4 DAT_000138bc;
undefined4 DAT_000138b0;
undefined4 DAT_00016968;
undefined4 DAT_0001696c;
undefined4 DAT_00016960;
undefined DAT_0002584c;
undefined4 DAT_00025830;
undefined2 DAT_00013620;
undefined2 DAT_00013624;
undefined4 DAT_00017298;
undefined4 DAT_0001729c;
undefined4 DAT_00017480;
undefined2 DAT_00017680;
undefined4 DAT_00017690;
undefined4 DAT_00017684;
int DAT_00017884;
undefined4 DAT_00017890;
undefined4 DAT_00017898;
undefined4 DAT_0001789c;
undefined4 DAT_00017880;
undefined4 DAT_00017a80;
undefined4 DAT_000137f0;
undefined1 DAT_00017e87;
undefined1 DAT_00017a89;
undefined1 DAT_00017a88;
int DAT_00017e88;
int DAT_00013800;
int DAT_00017a84;
int DAT_00017a80;
undefined DAT_00026b40;
undefined4 DAT_00026940;
ushort *DAT_00017e8c;
undefined4 DAT_00017e90;
undefined4 DAT_00018090;
int DAT_00018094;
undefined4 DAT_000180a0;
undefined4 DAT_000180d0;
undefined4 DAT_000180d4;
undefined4 DAT_000180d8;
undefined4 DAT_000180dc;
undefined4 DAT_000180e0;
undefined4 DAT_000180e4;
undefined4 DAT_000180e8;
undefined4 DAT_000180ec;
undefined4 DAT_00017ea0;
undefined1 *DAT_0001834c;
undefined *DAT_00018350;
undefined4 DAT_00018510;
undefined4 DAT_000182d8;
undefined1 DAT_000182dc;
undefined4 DAT_000182ec;
undefined1 DAT_00018370;
undefined DAT_00018400;
uint DAT_00018300;
undefined4 DAT_00018304;
undefined4 DAT_00018344;
undefined4 DAT_00018348;
undefined1 DAT_00018371;
undefined1 DAT_00018374;
undefined1 DAT_00018375;
undefined1 DAT_000183f6;
undefined FUN_0000c714;
char DAT_00018402;
char DAT_00018403;
char DAT_00018489;
undefined1 DAT_00018401;
undefined DAT_00004e20;
undefined1 DAT_00018376;
undefined DAT_00018518;
char DAT_00018404;
char DAT_00018406;
char DAT_00018407;
char DAT_0001848b;
char DAT_0001848a;
undefined DAT_00018408;
undefined1 DAT_0001840a;
char DAT_00018401;
undefined4 DAT_00018490;
char DAT_0001850f;
undefined2 DAT_00018498;
undefined1 DAT_0001850f;
undefined DAT_0000101f;
undefined DAT_00013630;
undefined DAT_00013634;
int DAT_00018290;
undefined1 DAT_000182d7;
undefined DAT_00018298;
undefined *DAT_00025810;
undefined *DAT_00025814;
undefined DAT_00018520;
undefined DAT_00021520;
undefined DAT_00021760;
undefined DAT_000217f0;
int DAT_00013810;
undefined4 *DAT_00025814;
int *DAT_00025810;
int DAT_00025810;
undefined4 DAT_00025814;
int DAT_00025814;
int DAT_0002adc8;
int DAT_0002adc0;
int DAT_0002adc4;
undefined4 DAT_0002adc0;
undefined4 DAT_0002adc4;
undefined *PTR_DAT_0001388c;
uint DAT_00025820;
undefined4 DAT_00025824;
undefined FUN_000123e4;
pointer PTR_DAT_0001388c;
undefined4 DAT_00025828;
undefined4 DAT_00025820;

// WARNING: Control flow encountered bad instruction data

void FUN_00000140(char *param_1,char param_2)

{
  char cVar1;
  
  if (*param_1 != '\0') {
    cVar1 = *param_1;
    do {
      if (cVar1 == param_2) {
        halt_baddata();
      }
      param_1 = param_1 + 1;
      cVar1 = *param_1;
    } while (cVar1 != '\0');
  }
  if (*param_1 == param_2) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00000198(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar4 = 0;
  do {
    iVar3 = 3;
    iVar1 = iVar4 + 0x4a4;
    do {
      *(undefined1 *)(iVar1 + 0x25e67) = 0;
      iVar3 = iVar3 + -1;
      iVar1 = iVar1 + -0x18c;
    } while (-1 < iVar3);
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 0x630;
  } while (iVar5 < 2);
  if (param_1 < 0) {
    FUN_0000023c(-(int)param_1);
  }
  else {
    lVar2 = FUN_000132a8(0);
    if (lVar2 == 0) {
      FUN_00002624();
      FUN_0000c5f8();
      FUN_0000f900();
      FUN_0001260c();
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000023c(void)

{
  longlong lVar1;
  undefined4 auStack_10 [4];
  
  FUN_000132d4(auStack_10);
  lVar1 = FUN_000132b0(0);
  FUN_000132dc(auStack_10[0]);
  if ((lVar1 == 0) || (lVar1 == -0xd5)) {
    FUN_0001268c();
    FUN_00000770();
    FUN_0000273c();
    FUN_0000c6d0();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000002b0(ulonglong param_1)

{
  FUN_00013320(param_1 & 1 | 2);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000002d4(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00000314(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000038c(undefined8 param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = param_2 * 0x18c + (int)param_1 * 0x630;
  if ((*(int *)(iVar2 + 0x25e40) != 0) && (*(int *)(iVar2 + 0x25e60) < 0)) {
    bVar1 = *(byte *)(iVar2 + 0x25e30);
    if (bVar1 == 2) {
      FUN_000072a8(param_1,param_2,0);
    }
    else {
      if (bVar1 < 3) {
        if (bVar1 != 1) {
          halt_baddata();
        }
      }
      else if (bVar1 != 3) {
        halt_baddata();
      }
      FUN_0000e9c4(param_1,param_2,0);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00000478(undefined4 *param_1,uint param_2,undefined4 param_3)

{
  param_2 = param_2 >> 2;
  while (param_2 = param_2 - 1, param_2 != 0xffffffff) {
    *param_1 = param_3;
    param_1 = param_1 + 1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000004a4(undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 + -1;
  if (param_2 != 0) {
    do {
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000004d0(byte *param_1)

{
  byte bVar1;
  
  bVar1 = *param_1;
  while( true ) {
    if (bVar1 == 0) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    if (((bVar1 == 0x3f) || (bVar1 == 0x2a)) || (param_1 = param_1 + 1, bVar1 < 0x20)) break;
    bVar1 = *param_1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00000520(int param_1)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = -1;
  while( true ) {
    lVar1 = FUN_00000140(param_1 + iVar2 + 1,0x2f);
    if (lVar1 < 0) break;
    iVar2 = iVar2 + 1 + (int)lVar1;
  }
  param_1 = param_1 + iVar2 + 1;
  lVar1 = FUN_0001336c(param_1,&DAT_00013578);
  if (lVar1 != 0) {
    FUN_0001336c(param_1,&DAT_0001357c);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000005b0(char *param_1,char *param_2)

{
  char *pcVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  char *pcVar6;
  
  while( true ) {
    lVar2 = FUN_00000140(param_2,0x3f);
    lVar3 = FUN_00000140(param_2,0x2a);
    if ((lVar2 < 0) && (lVar3 < 0)) {
      FUN_0001336c(param_2,param_1);
      halt_baddata();
    }
    lVar5 = lVar3;
    if (((lVar2 < 0) || (lVar5 = lVar2, lVar3 < 0)) || (lVar2 < lVar3)) {
      lVar3 = lVar5;
    }
    lVar2 = FUN_00013384(param_2,param_1,lVar3);
    param_2 = param_2 + (int)lVar3;
    if (lVar2 != 0) break;
    cVar4 = *param_2;
    param_1 = param_1 + (int)lVar3;
    if (cVar4 == '?') {
      do {
        param_2 = param_2 + 1;
        if (*param_1 == '\0') {
          halt_baddata();
        }
        param_1 = param_1 + 1;
      } while (*param_2 == '?');
      cVar4 = *param_2;
    }
    if (cVar4 == '*') {
      pcVar1 = param_2 + 1;
      do {
        do {
          pcVar6 = pcVar1;
          cVar4 = *pcVar6;
          pcVar1 = pcVar6 + 1;
        } while (cVar4 == '*');
        pcVar1 = pcVar6 + 1;
      } while (cVar4 == '?');
      if (cVar4 != '\0') {
        do {
          lVar3 = FUN_00000140(param_1,*pcVar6);
          if (lVar3 < 0) {
            halt_baddata();
          }
          lVar2 = FUN_000005b0(param_1 + (int)lVar3,pcVar6);
          param_1 = param_1 + (int)lVar3 + 1;
        } while (lVar2 == 0);
      }
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
  }
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00000714(short param_1,short param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0;
  do {
    if ((*(short *)(iVar1 + 0x25c56) == param_1) && (*(short *)(iVar1 + 0x25c58) == param_2)) {
      *(undefined1 *)(iVar1 + 0x25c50) = 0;
    }
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 0x30;
  } while (iVar2 < 3);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00000770(void)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  lVar4 = 0;
  iVar2 = 0;
  iVar3 = 0;
  do {
    if ((*(char *)(iVar3 + 0x25c50) != '\0') && (lVar1 = FUN_00000dbc(iVar2), lVar1 < lVar4)) {
      lVar4 = lVar1;
    }
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 0x30;
  } while (iVar2 < 3);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000007f0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = (int)param_2;
  iVar5 = (int)param_1;
  iVar3 = iVar4 * 0x18c + iVar5 * 0x630;
  if ((*(char *)(iVar3 + 0x25e30) == '\0') || (*(char *)(iVar3 + 0x25e30) == '\x02')) {
    lVar1 = FUN_00003968(param_1,param_2);
    if (-10 < lVar1) {
      *(undefined1 *)(iVar3 + 0x25e30) = 2;
      halt_baddata();
    }
    lVar1 = FUN_0000cbf0(param_1,param_2);
    iVar2 = iVar4 << 1;
    if (-10 < lVar1) goto LAB_000008a8;
  }
  else {
    lVar1 = FUN_0000cbf0(param_1,param_2);
    if (lVar1 == 0) {
      halt_baddata();
    }
    if ((-10 < lVar1) && (lVar1 < 0)) {
LAB_000008a8:
      lVar1 = FUN_0000d014(param_1,param_2);
      if (lVar1 == 0) {
        *(undefined1 *)(iVar3 + 0x25e30) = 3;
        halt_baddata();
      }
      *(undefined1 *)(iVar3 + 0x25e30) = 1;
      halt_baddata();
    }
    lVar1 = FUN_00003968(param_1,param_2);
    iVar2 = iVar4 * 2;
    if (-10 < lVar1) {
      *(undefined1 *)(iVar4 * 0x18c + iVar5 * 0x630 + 0x25e30) = 2;
      halt_baddata();
    }
  }
  iVar3 = (iVar2 + iVar4) * 0x84 + iVar5 * 0x630;
  if (*(char *)(iVar3 + 0x25e30) == '\0') {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  *(undefined1 *)(iVar3 + 0x25e30) = 0;
  *(undefined4 *)(iVar3 + 0x25e40) = 0;
  FUN_00000714(param_1,param_2);
                    // WARNING: Subroutine does not return
  FUN_0000fa24(param_1,param_2);
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00000a3c(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = (int)param_2;
  iVar5 = (int)param_1;
  iVar3 = iVar4 * 0x18c + iVar5 * 0x630;
  if ((*(char *)(iVar3 + 0x25e30) == '\0') || (*(char *)(iVar3 + 0x25e30) == '\x02')) {
    lVar1 = FUN_00003ab4(param_1,param_2);
    if (-10 < lVar1) {
      *(undefined1 *)(iVar3 + 0x25e30) = 2;
      if (lVar1 != -1) {
        halt_baddata();
      }
      goto LAB_00000c68;
    }
    lVar1 = FUN_0000cdb4(param_1,param_2);
    iVar2 = iVar4 << 1;
    if (-10 < lVar1) goto LAB_00000b04;
  }
  else {
    lVar1 = FUN_0000cdb4(param_1,param_2);
    if (lVar1 == 0) {
      halt_baddata();
    }
    if ((-10 < lVar1) && (lVar1 < 0)) {
LAB_00000b04:
      lVar1 = FUN_0000d014(param_1,param_2);
      if (lVar1 == 0) {
        *(undefined1 *)(iVar3 + 0x25e30) = 3;
        halt_baddata();
      }
      *(undefined1 *)(iVar3 + 0x25e30) = 1;
      halt_baddata();
    }
    lVar1 = FUN_00003ab4(param_1,param_2);
    iVar2 = iVar4 * 2;
    if (-10 < lVar1) {
      *(undefined1 *)(iVar4 * 0x18c + iVar5 * 0x630 + 0x25e30) = 2;
      halt_baddata();
    }
  }
  iVar3 = (iVar2 + iVar4) * 0x84 + iVar5 * 0x630;
  if (*(char *)(iVar3 + 0x25e30) == '\0') {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  *(undefined1 *)(iVar3 + 0x25e30) = 0;
  *(undefined4 *)(iVar3 + 0x25e40) = 0;
LAB_00000c68:
  FUN_00000714(param_1,param_2);
                    // WARNING: Subroutine does not return
  FUN_0000fa24(param_1,param_2);
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00000c9c(undefined8 param_1,undefined8 param_2,char *param_3,ulonglong param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_000007f0();
  if (((lVar1 == 0) && (param_3 != (char *)0x0)) && (*param_3 != '\0')) {
    if (ram0x000136b0 == 0) {
      param_4 = param_4 & 0xffffffffffffdfff;
    }
    if (*(char *)((int)param_2 * 0x18c + (int)param_1 * 0x630 + 0x25e30) == '\x02') {
      lVar1 = FUN_00009344(param_1,param_2,param_3,param_4);
    }
    else {
      lVar1 = FUN_0000d4d0(param_1,param_2,param_3,param_4);
    }
    if (lVar1 < -9) {
      FUN_00000714(param_1,param_2);
                    // WARNING: Subroutine does not return
      FUN_0000fa24(param_1,param_2);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00000dbc(ulonglong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1 * 0x30;
  if ((param_1 < 3) && (*(char *)(iVar1 + 0x25c50) != '\0')) {
    *(char *)(iVar1 + 0x25c50) = '\0';
    lVar2 = FUN_000007f0(*(undefined2 *)(iVar1 + 0x25c56),*(undefined2 *)(iVar1 + 0x25c58));
    if (lVar2 == 0) {
                    // WARNING: Subroutine does not return
      FUN_0000fdac(*(undefined2 *)(iVar1 + 0x25c56),*(undefined2 *)(iVar1 + 0x25c58));
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00000f7c(ulonglong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1 * 0x30;
  if (((param_1 < 3) && (*(char *)(iVar1 + 0x25c50) != '\0')) &&
     (lVar2 = FUN_000007f0(*(undefined2 *)(iVar1 + 0x25c56),*(undefined2 *)(iVar1 + 0x25c58)),
     lVar2 == 0)) {
                    // WARNING: Subroutine does not return
    FUN_0000fdac(*(undefined2 *)(iVar1 + 0x25c56),*(undefined2 *)(iVar1 + 0x25c58));
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000114c(ulonglong param_1,int param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (2 < param_1) {
    halt_baddata();
  }
  iVar1 = (int)param_1 * 0x30;
  if (*(char *)(iVar1 + 0x25c50) == '\0') {
    halt_baddata();
  }
  lVar2 = FUN_000007f0(*(undefined2 *)(iVar1 + 0x25c56),*(undefined2 *)(iVar1 + 0x25c58));
  if (lVar2 != 0) {
    halt_baddata();
  }
  if (param_3 != 1) {
    if (param_3 == 0) goto LAB_000011fc;
    if (param_3 == 2) {
      param_2 = *(int *)(iVar1 + 0x25c60) + param_2;
      goto LAB_000011fc;
    }
  }
  param_2 = *(int *)(iVar1 + 0x25c5c) + param_2;
LAB_000011fc:
  if (param_2 < 0) {
    param_2 = 0;
  }
  *(int *)(iVar1 + 0x25c5c) = param_2;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00001224(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 < 3) {
    iVar3 = (int)param_1;
    iVar2 = iVar3 * 0x30;
    if (((*(char *)(iVar2 + 0x25c50) != '\0') && (*(char *)(iVar2 + 0x25c52) != '\0')) &&
       (lVar1 = FUN_000007f0(*(undefined2 *)(iVar2 + 0x25c56),*(undefined2 *)(iVar2 + 0x25c58)),
       lVar1 == 0)) {
      if (*(char *)(*(short *)(iVar2 + 0x25c58) * 0x18c + *(short *)(iVar2 + 0x25c56) * 0x630 +
                   0x25e30) == '\x02') {
        lVar1 = FUN_00007dd4(param_1,param_2,param_3);
      }
      else {
        lVar1 = FUN_0000d970(param_1,param_2,param_3);
      }
      if (lVar1 < 0) {
        *(undefined1 *)(iVar3 * 0x30 + 0x25c50) = 0;
      }
      if (lVar1 < -9) {
        iVar3 = iVar3 * 0x30;
        FUN_00000714(*(undefined2 *)(iVar3 + 0x25c56),*(undefined2 *)(iVar3 + 0x25c58));
                    // WARNING: Subroutine does not return
        FUN_0000fa24(*(undefined2 *)(iVar3 + 0x25c56),*(undefined2 *)(iVar3 + 0x25c58));
      }
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000013dc(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  
  if ((((param_1 < 3) && (iVar2 = (int)param_1 * 0x30, *(char *)(iVar2 + 0x25c50) != '\0')) &&
      (*(char *)(iVar2 + 0x25c52) != '\0')) &&
     ((lVar1 = FUN_000007f0(*(undefined2 *)(iVar2 + 0x25c56),*(undefined2 *)(iVar2 + 0x25c58)),
      lVar1 == 0 &&
      (*(char *)(*(short *)(iVar2 + 0x25c58) * 0x18c + *(short *)(iVar2 + 0x25c56) * 0x630 + 0x25e30
                ) == '\x02')))) {
    lVar1 = FUN_000081dc(param_1,param_2,param_3);
    if (lVar1 < 0) {
      *(undefined1 *)(iVar2 + 0x25c50) = 0;
    }
    if (lVar1 < -9) {
      FUN_00000714(*(undefined2 *)(iVar2 + 0x25c56),*(undefined2 *)(iVar2 + 0x25c58));
                    // WARNING: Subroutine does not return
      FUN_0000fa24(*(undefined2 *)(iVar2 + 0x25c56),*(undefined2 *)(iVar2 + 0x25c58));
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000156c(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  if ((((param_1 < 3) && (iVar3 = (int)param_1 * 0x30, *(char *)(iVar3 + 0x25c50) != '\0')) &&
      (*(char *)(iVar3 + 0x25c51) != '\0')) &&
     ((lVar1 = FUN_000007f0(*(undefined2 *)(iVar3 + 0x25c56),*(undefined2 *)(iVar3 + 0x25c58)),
      lVar1 == 0 &&
      (iVar2 = *(short *)(iVar3 + 0x25c58) * 0x18c + *(short *)(iVar3 + 0x25c56) * 0x630,
      *(char *)(iVar2 + 0x25e30) == '\x02')))) {
    *(undefined1 *)(iVar2 + 0x25e67) = 1;
    lVar1 = FUN_000084a4(param_1,param_2,param_3);
    if (lVar1 < 0) {
      *(undefined1 *)(iVar3 + 0x25c50) = 0;
    }
    if (lVar1 < -9) {
      FUN_00000714(*(undefined2 *)(iVar3 + 0x25c56),*(undefined2 *)(iVar3 + 0x25c58));
                    // WARNING: Subroutine does not return
      FUN_0000fa24(*(undefined2 *)(iVar3 + 0x25c56),*(undefined2 *)(iVar3 + 0x25c58));
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000170c(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 < 3) {
    iVar3 = (int)param_1;
    iVar2 = iVar3 * 0x30;
    if (((*(char *)(iVar2 + 0x25c50) != '\0') && (*(char *)(iVar2 + 0x25c51) != '\0')) &&
       (lVar1 = FUN_000007f0(*(undefined2 *)(iVar2 + 0x25c56),*(undefined2 *)(iVar2 + 0x25c58)),
       lVar1 == 0)) {
      iVar2 = *(short *)(iVar2 + 0x25c58) * 0x18c + *(short *)(iVar2 + 0x25c56) * 0x630;
      if (*(char *)(iVar2 + 0x25e30) == '\x02') {
        *(undefined1 *)(iVar2 + 0x25e67) = 0;
        lVar1 = FUN_00007f7c(param_1,param_2,param_3);
      }
      else {
        lVar1 = FUN_0000dad4(param_1,param_2,param_3);
      }
      if (lVar1 < 0) {
        *(undefined1 *)(iVar3 * 0x30 + 0x25c50) = 0;
      }
      if (lVar1 < -9) {
        iVar3 = iVar3 * 0x30;
        FUN_00000714(*(undefined2 *)(iVar3 + 0x25c56),*(undefined2 *)(iVar3 + 0x25c58));
                    // WARNING: Subroutine does not return
        FUN_0000fa24(*(undefined2 *)(iVar3 + 0x25c56),*(undefined2 *)(iVar3 + 0x25c58));
      }
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000018d0(undefined8 param_1,undefined8 param_2,char *param_3,undefined2 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_000007f0();
  if (((lVar1 == 0) && (param_3 != (char *)0x0)) && (*param_3 != '\0')) {
    if (*(char *)((int)param_2 * 0x18c + (int)param_1 * 0x630 + 0x25e30) == '\x02') {
      lVar1 = FUN_0000a87c(param_1,param_2,param_3,param_4);
    }
    else {
      lVar1 = FUN_0000e2fc(param_1,param_2,param_3,param_4);
    }
    if (lVar1 < -9) {
      FUN_00000714(param_1,param_2);
                    // WARNING: Subroutine does not return
      FUN_0000fa24(param_1,param_2);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00001a04(undefined8 param_1,undefined8 param_2,char *param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_000007f0();
  if (((lVar1 == 0) && (param_3 != (char *)0x0)) && (*param_3 != '\0')) {
    lVar1 = 0;
    if (*(char *)((int)param_2 * 0x18c + (int)param_1 * 0x630 + 0x25e30) == '\x02') {
      lVar1 = FUN_000089e8(param_1,param_2,param_3);
    }
    if (lVar1 < -9) {
      FUN_00000714(param_1,param_2);
                    // WARNING: Subroutine does not return
      FUN_0000fa24(param_1,param_2);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00001aec(ulonglong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 < 3) {
    iVar3 = (int)param_1;
    iVar2 = iVar3 * 0x30;
    if (((*(char *)(iVar2 + 0x25c50) != '\0') && (*(char *)(iVar2 + 0x25c54) != '\0')) &&
       (lVar1 = FUN_000007f0(*(undefined2 *)(iVar2 + 0x25c56),*(undefined2 *)(iVar2 + 0x25c58)),
       lVar1 == 0)) {
      if (*(char *)(*(short *)(iVar2 + 0x25c58) * 0x18c + *(short *)(iVar2 + 0x25c56) * 0x630 +
                   0x25e30) == '\x02') {
        lVar1 = FUN_00007584(param_1,param_2);
      }
      else {
        lVar1 = FUN_0000ddec(param_1,param_2);
      }
      if (lVar1 < 0) {
        *(undefined1 *)(iVar3 * 0x30 + 0x25c50) = 0;
      }
      if (lVar1 < -9) {
        iVar3 = iVar3 * 0x30;
        FUN_00000714(*(undefined2 *)(iVar3 + 0x25c56),*(undefined2 *)(iVar3 + 0x25c58));
                    // WARNING: Subroutine does not return
        FUN_0000fa24(*(undefined2 *)(iVar3 + 0x25c56),*(undefined2 *)(iVar3 + 0x25c58));
      }
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00001c90(undefined8 param_1,undefined8 param_2,char *param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_000007f0();
  if (((lVar1 == 0) && (param_3 != (char *)0x0)) && (*param_3 != '\0')) {
    if (*(char *)((int)param_2 * 0x18c + (int)param_1 * 0x630 + 0x25e30) == '\x02') {
      lVar1 = FUN_0000782c(param_1,param_2,param_3,param_4);
    }
    else {
      lVar1 = FUN_0000df8c(param_1,param_2,param_3,param_4);
    }
    if (lVar1 < -9) {
      FUN_00000714(param_1,param_2);
                    // WARNING: Subroutine does not return
      FUN_0000fa24(param_1,param_2);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00001d9c(undefined8 param_1,undefined8 param_2,char *param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_000007f0();
  if ((((lVar1 == 0) && (param_3 != (char *)0x0)) && (*param_3 != '\0')) &&
     (lVar1 = FUN_00000520(param_3), lVar1 == 0)) {
    if (*(char *)((int)param_2 * 0x18c + (int)param_1 * 0x630 + 0x25e30) == '\x02') {
      lVar1 = FUN_00007a18(param_1,param_2,param_3,param_4);
    }
    else {
      lVar1 = FUN_0000e084(param_1,param_2,param_3,param_4);
    }
    if (lVar1 < -9) {
      FUN_00000714(param_1,param_2);
                    // WARNING: Subroutine does not return
      FUN_0000fa24(param_1,param_2);
    }
    if (lVar1 == 0) {
                    // WARNING: Subroutine does not return
      FUN_0000fdac(param_1,param_2);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00001f00(undefined8 param_1,undefined8 param_2,char *param_3,undefined1 *param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_000007f0();
  if (((lVar1 == 0) && (param_3 != (char *)0x0)) && (*param_3 != '\0')) {
    if (*(char *)((int)param_2 * 0x18c + (int)param_1 * 0x630 + 0x25e30) == '\x02') {
      lVar1 = FUN_00009d88(param_1,param_2,param_3,param_4);
    }
    else {
      *param_4 = 0;
      lVar1 = 0;
    }
    if (lVar1 < -9) {
      FUN_00000714(param_1,param_2);
                    // WARNING: Subroutine does not return
      FUN_0000fa24(param_1,param_2);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00001ffc(undefined8 param_1,undefined8 param_2,char *param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_000007f0();
  if ((((lVar1 == 0) && (param_3 != (char *)0x0)) && (*param_3 != '\0')) &&
     (lVar1 = FUN_00000520(param_3), lVar1 == 0)) {
    if (*(char *)((int)param_2 * 0x18c + (int)param_1 * 0x630 + 0x25e30) == '\x02') {
      lVar1 = FUN_0000ad40(param_1,param_2,param_3,param_4);
    }
    else {
      lVar1 = FUN_0000e804(param_1,param_2,param_3,param_4);
    }
    if (lVar1 < -9) {
      FUN_00000714(param_1,param_2);
                    // WARNING: Subroutine does not return
      FUN_0000fa24(param_1,param_2);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00002114(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  FUN_00000714();
  lVar1 = FUN_000007f0(param_1,param_2);
  if (-3 < lVar1) {
                    // WARNING: Subroutine does not return
    FUN_0000fa24(param_1,param_2);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000021f8(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  FUN_00000714();
  lVar1 = FUN_000007f0(param_1,param_2);
  if (-3 < lVar1) {
                    // WARNING: Subroutine does not return
    FUN_0000fa24(param_1,param_2);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00002314(undefined8 param_1,undefined8 param_2,char *param_3,char *param_4)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [64];
  
  lVar1 = FUN_000007f0();
  if ((((lVar1 == 0) && (param_3 != (char *)0x0)) && (*param_3 != '\0')) &&
     (((param_4 != (char *)0x0 && (*param_4 != '\0')) && (lVar1 = FUN_00000520(param_3), lVar1 == 0)
      ))) {
    iVar2 = -1;
    if (*(char *)((int)param_2 * 0x18c + (int)param_1 * 0x630 + 0x25e30) == '\x02') {
      lVar1 = FUN_0000bef8(param_1,param_2,param_3,param_4);
    }
    else {
      while( true ) {
        lVar1 = FUN_00000140(param_4 + iVar2 + 1,0x2f);
        if (lVar1 < 0) break;
        iVar2 = iVar2 + 1 + (int)lVar1;
      }
      FUN_00013374(auStack_40,param_4 + iVar2 + 1);
      lVar1 = FUN_0000e084(param_1,param_2,param_3,auStack_60);
    }
    if (lVar1 < -9) {
      FUN_00000714(param_1,param_2);
                    // WARNING: Subroutine does not return
      FUN_0000fa24(param_1,param_2);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00002490(undefined1 *param_1)

{
  byte bVar1;
  undefined1 uStack_10;
  byte bStack_f;
  byte bStack_e;
  byte bStack_d;
  byte bStack_b;
  byte bStack_a;
  byte bStack_9;
  
  FUN_0001355c(&uStack_10);
  *param_1 = 0;
  param_1[1] = (bStack_f >> 4) * '\n' + (bStack_f & 0xf);
  param_1[2] = (bStack_e >> 4) * '\n' + (bStack_e & 0xf);
  param_1[3] = (bStack_d >> 4) * '\n' + (bStack_d & 0xf);
  param_1[4] = (bStack_b >> 4) * '\n' + (bStack_b & 0xf);
  bVar1 = bStack_a & 0xf;
  if ((bStack_a & 0x10) != 0) {
    bVar1 = bVar1 + 10;
  }
  param_1[5] = bVar1;
  *(ushort *)(param_1 + 6) =
       ((ushort)(bStack_9 >> 4) * 4 + (ushort)(bStack_9 >> 4)) * 2 + (bStack_9 & 0xf | 2000);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000025b0(uint param_1,undefined4 param_2)

{
  undefined4 auStack_28 [10];
  
  auStack_28[0] = 0xffffffff;
  auStack_28[1] = 0xffffffff;
  auStack_28[2] = 0xffffffff;
  auStack_28[3] = 0xffffffff;
  auStack_28[(param_1 & 1) + 2] = param_2;
  FUN_00013300();
  FUN_00013318(auStack_28);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00002604(void)

{
  FUN_00013310();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00002624(void)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  
  FUN_00000478(&DAT_000138c0,0x94,0);
  iVar6 = 0;
  iVar4 = 0;
  do {
    iVar2 = 3;
    iVar1 = iVar4 + 0x4a4;
    do {
      *(undefined4 *)(iVar1 + 0x25e68) = 0;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + -0x18c;
    } while (-1 < iVar2);
    iVar6 = iVar6 + 1;
    iVar4 = iVar4 + 0x630;
  } while (iVar6 < 2);
  iVar4 = 2;
  puVar5 = &DAT_000138dc;
  puVar3 = &DAT_000138cc;
  do {
    *puVar3 = 10;
    puVar3[1] = 0x2c;
    puVar3[2] = 2;
    puVar3[3] = 0xc;
    puVar3 = puVar3 + 4;
    *(undefined1 *)((int)puVar5 + 2) = 5;
    *(undefined2 *)puVar5 = 0xffff;
    iVar4 = iVar4 + 1;
    *puVar5 = *puVar5 & 0xfcffffff;
    puVar5 = puVar5 + 1;
  } while (iVar4 < 4);
  DAT_0001393c = &DAT_00013958;
  DAT_00013948 = &DAT_00015158;
  DAT_0001394c = 0x40;
  DAT_00013940 = 0x40;
  FUN_00013528(FUN_00003f7c);
  FUN_00013530(FUN_00003fb4);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000273c(void)

{
  FUN_00013528(0);
  FUN_00013530(0);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00002764(uint param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  
  iVar1 = DAT_00013944;
  if (param_3 == -1) {
    DAT_00013944 = 0;
  }
  else if (DAT_00013944 < 0xb) {
    if (param_3 == -2) {
      *(undefined4 *)(DAT_00013944 * 4 + 0x138e8) = 0;
      DAT_00013950 = DAT_00013944;
    }
    else {
      puVar5 = (uint *)(DAT_00013944 * 4 + 0x138e8);
      uVar2 = (param_1 & 1) + 2 & 3 | 0x70;
      iVar4 = (int)param_3 * 2;
      DAT_00013944 = DAT_00013944 + 1;
      *puVar5 = uVar2;
      uVar3 = (uint)*(byte *)(iVar4 + 0x136c1);
      *puVar5 = uVar2 | uVar3 << 0x12 | uVar3 << 8;
      (&DAT_00013958)[iVar1 * 0x100] = 0x81;
      *(undefined1 *)(iVar1 * 0x100 + 0x13959) = *(undefined1 *)(iVar4 + 0x136c0);
      if ((int)param_3 - 1U < 0x13) {
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00002aac(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  FUN_00002764(param_1,param_2,0xffffffffffffffff,0);
  FUN_00002764(param_1,param_2,0,0);
  FUN_00002764(param_1,param_2,0xfffffffffffffffe,0);
  iVar1 = 0;
  while( true ) {
    FUN_000025b0(param_1,param_2);
    FUN_00013308(&DAT_000138c0);
    FUN_00002604();
    if (((DAT_000138c0 & 0xf000) == 0x1000) && (DAT_0001515b == 'U')) break;
    iVar1 = iVar1 + 1;
    if (4 < iVar1) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
  }
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00002ba0(undefined8 param_1,undefined8 param_2,int param_3,int *param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int in_stack_00000010;
  
  iVar3 = (int)param_1 * 0x630 + (int)param_2 * 0x18c;
  FUN_00002764(param_1,param_2,0xffffffffffffffff,0);
  iVar2 = 0;
  FUN_00002764(param_1,param_2,2,
               (longlong)param_3 * (longlong)(int)*(short *)(&DAT_00025ce0 + iVar3 + 0x2c));
  FUN_00002764(param_1,param_2,0xd,0);
  FUN_00002764(param_1,param_2,0xfffffffffffffffe,0);
  do {
    FUN_000025b0(param_1,param_2);
    FUN_00013308(&DAT_000138c0);
    FUN_00002604();
    if ((((DAT_000138c0 & 0xf000) == 0x1000) && (DAT_00015160 == 'U')) && (DAT_0001525b == 'U'))
    break;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 5);
  if (iVar2 < 5) {
    if ((param_4 != (int *)0x0) && (in_stack_00000010 != 0)) {
      FUN_00000478(in_stack_00000010,0x20,0);
      lVar4 = 0;
      if (0 < *(short *)(&DAT_00025ce0 + iVar3 + 0x2c)) {
        do {
          sVar1 = *(short *)(&DAT_00025ce0 + iVar3 + 0x28);
          lVar5 = (longlong)(int)lVar4 * (longlong)(int)sVar1;
          if (lVar5 < 0) {
            lVar5 = (longlong)((int)lVar5 + 0x1f);
          }
          iVar2 = in_stack_00000010 + ((int)lVar5 >> 5);
          lVar5 = 0;
          if (0 < sVar1) {
            do {
              if (*param_4 != 0) {
                FUN_00003fc4(*param_4 + (int)lVar5,iVar2);
              }
              lVar5 = (longlong)((int)lVar5 + 0x80);
              iVar2 = iVar2 + 3;
            } while (lVar5 < *(short *)(&DAT_00025ce0 + iVar3 + 0x28));
          }
          lVar4 = (longlong)((int)lVar4 + 1);
          param_4 = param_4 + 1;
        } while (lVar4 < *(short *)(&DAT_00025ce0 + iVar3 + 0x2c));
      }
    }
    FUN_00002764(param_1,param_2,0xffffffffffffffff,0);
    FUN_00002764(param_1,param_2,1,0);
    FUN_00002764(param_1,param_2,0xfffffffffffffffe,0);
    iVar3 = 0;
    do {
      FUN_000025b0(param_1,param_2);
      FUN_00013308(&DAT_000138c0);
      FUN_00002604();
      if (((DAT_000138c0 & 0xf000) == 0x1000) && (DAT_0001515b == 'U')) {
        halt_baddata();
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 100);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Removing unreachable block (ram,0x00003144)
// WARNING: Removing unreachable block (ram,0x00003158)

void FUN_00002e90(undefined8 param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 in_stack_00000010;
  
  bVar2 = false;
  iVar4 = (int)param_2 * 0x18c + (int)param_1 * 0x630;
  sVar1 = *(short *)(iVar4 + 0x25d08);
  lVar7 = (longlong)sVar1;
  do {
    if (bVar2) {
                    // WARNING: Subroutine does not return
      FUN_00002aac(param_1,param_2);
    }
    FUN_00002764(param_1,param_2,0xffffffffffffffff,0);
    FUN_00002764(param_1,param_2,3,param_3);
    lVar6 = 0;
    if (0 < lVar7) {
      do {
        FUN_00002764(param_1,param_2,10,param_4 + (int)lVar6);
        lVar6 = (longlong)((int)lVar6 + 0x80);
      } while (lVar6 < lVar7);
    }
    if ((*(byte *)(iVar4 + 0x25e31) & 1) != 0) {
      FUN_00002764(param_1,param_2,0xe,in_stack_00000010);
    }
    FUN_00002764(param_1,param_2,0xfffffffffffffffe,0);
    FUN_000025b0(param_1,param_2);
    FUN_00013308(&DAT_000138c0);
    FUN_00002604();
    if (((DAT_000138c0 & 0xf000) == 0x1000) && (iVar3 = 0, DAT_00015160 == 'U')) {
      do {
        iVar5 = iVar3;
        iVar3 = (int)sVar1;
        if (lVar7 < 0) {
          iVar3 = sVar1 + 0x7f;
        }
      } while ((iVar5 < iVar3 >> 7) &&
              (iVar3 = iVar5 + 1, *(char *)((iVar5 + 1) * 0x100 + 0x151dd) == 'U'));
      lVar6 = lVar7;
      if (lVar7 < 0) {
        lVar6 = (longlong)(sVar1 + 0x7f);
      }
      if (((int)lVar6 >> 7 <= iVar5) &&
         (((*(byte *)(iVar4 + 0x25e31) & 1) == 0 ||
          (iVar3 = FUN_00005dec(param_1,param_2),
          (&DAT_0001515d)[iVar3 + (iVar5 + 1) * 0x100] == 'U')))) {
        FUN_00002764(param_1,param_2,0xffffffffffffffff,0);
        FUN_00002764(param_1,param_2,0xc,0);
        FUN_00002764(param_1,param_2,0xfffffffffffffffe,0);
        FUN_000025b0(param_1,param_2);
        FUN_00013308(&DAT_000138c0);
        FUN_00002604();
        if (((DAT_000138c0 & 0xf000) == 0x1000) && (DAT_0001515b == 'U')) {
                    // WARNING: Bad instruction - Truncating control flow here
          halt_baddata();
        }
      }
    }
    bVar2 = true;
  } while( true );
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000318c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  undefined4 in_stack_00000010;
  
  iVar6 = (int)param_2 * 0x18c + (uint)param_1 * 0x630;
  lVar11 = (longlong)*(short *)(iVar6 + 0x25d08);
  if (lVar11 < 0) {
    lVar11 = (longlong)(*(short *)(iVar6 + 0x25d08) + 0x7f);
  }
  iVar13 = (int)lVar11 >> 7;
  iVar14 = 0;
  puVar15 = &DAT_0001525c;
  do {
    FUN_00002764(param_1,param_2,0xffffffffffffffff,0);
    FUN_00002764(param_1,param_2,4,param_3);
    iVar12 = 0;
    if (0 < iVar13) {
      do {
        FUN_00002764(param_1,param_2,0xb,0);
        iVar12 = iVar12 + 1;
      } while (iVar12 < iVar13);
    }
    if ((*(byte *)(iVar6 + 0x25e31) & 1) != 0) {
      FUN_00002764(param_1,param_2,0xf,0);
    }
    FUN_00002764(param_1,param_2,0xc,0);
    FUN_00002764(param_1,param_2,0xfffffffffffffffe,0);
    iVar12 = (((uint)param_1 & 1) + 2) * 4;
    *(undefined2 *)(iVar12 + 0x138d4) = 0x7fff;
    FUN_000025b0(param_1,param_2);
    FUN_00013308(&DAT_000138c0);
    FUN_00002604();
    *(undefined2 *)(iVar12 + 0x138d4) = 0xffff;
    if ((DAT_000138c0 & 0xf000) == 0x1000) {
      if ((DAT_00015160 == 'U') && (DAT_0001575b == 'U')) {
        if (iVar13 < 1) {
LAB_000033cc:
          iVar6 = 0;
          if (0 < iVar13) {
            do {
              if (((uint)param_4 & 3) != 0) {
                    // WARNING: Bad instruction - Truncating control flow here
                halt_baddata();
              }
              puVar7 = puVar15;
              puVar10 = param_4;
              do {
                uVar1 = puVar7[1];
                uVar2 = puVar7[2];
                uVar3 = puVar7[3];
                *puVar10 = *puVar7;
                puVar10[1] = uVar1;
                puVar10[2] = uVar2;
                puVar10[3] = uVar3;
                puVar7 = puVar7 + 4;
                puVar10 = puVar10 + 4;
              } while (puVar7 != puVar15 + 0x20);
              puVar15 = puVar15 + 0x40;
              iVar6 = iVar6 + 1;
              param_4 = param_4 + 0x20;
            } while (iVar6 < iVar13);
          }
          uVar5 = FUN_00005dec(param_1,param_2);
          FUN_0001334c(in_stack_00000010,&DAT_0001525c + iVar13 * 0x40,uVar5);
                    // WARNING: Bad instruction - Truncating control flow here
          halt_baddata();
        }
        iVar8 = 0;
        iVar12 = 0;
        do {
          cVar4 = FUN_000004a4((int)&DAT_0001525c + iVar8,0x80);
          iVar9 = iVar12 + 1;
          if (cVar4 != *(char *)(iVar9 * 0x100 + 0x151dc)) break;
          iVar8 = iVar9 * 0x100;
          iVar12 = iVar9;
        } while (iVar9 < iVar13);
        if (iVar13 <= iVar12) goto LAB_000033cc;
      }
    }
    else {
      *(uint *)(iVar6 + 0x25e68) = *(uint *)(iVar6 + 0x25e68) ^ 1;
    }
    iVar14 = iVar14 + 1;
    if (4 < iVar14) {
      halt_baddata();
    }
  } while( true );
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000350c(undefined8 param_1,int param_2,undefined4 param_3,int param_4)

{
  char *pcVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  char acStack_51 [33];
  int iStack_30;
  
  iStack_30 = param_2 * 0x18c + (int)param_1 * 0x630;
  lVar4 = (longlong)*(short *)(iStack_30 + 0x25d08);
  if (lVar4 < 0) {
    lVar4 = (longlong)(*(short *)(iStack_30 + 0x25d08) + 0x7f);
  }
  cVar8 = '\0';
  iVar7 = (int)lVar4 >> 7;
  if ((*(byte *)(iStack_30 + 0x25e31) & 0x10) == 0) {
    cVar8 = -1;
  }
  iVar6 = 0;
  do {
    lVar4 = FUN_0000318c(param_1,param_2,param_3,param_4);
    if (lVar4 == 0) {
      if ((*(byte *)(iStack_30 + 0x25e31) & 1) == 0) {
        halt_baddata();
      }
      iVar2 = FUN_00005dec(param_1,param_2);
      if (acStack_51[iVar2] == cVar8) {
        halt_baddata();
      }
      iVar5 = 0;
      lVar4 = 0;
      iVar2 = param_4;
      pcVar1 = acStack_51 + 1;
      if (0 < iVar7) {
        do {
          lVar3 = FUN_00004038(iVar2,pcVar1);
          if (lVar3 < lVar4) {
            lVar4 = lVar3;
          }
          iVar5 = iVar5 + 1;
          iVar2 = iVar2 + 0x80;
          pcVar1 = pcVar1 + 3;
        } while (iVar5 < iVar7);
      }
      if (lVar4 == 0) {
        halt_baddata();
      }
      if ((iVar6 == 4) && (-3 < lVar4)) {
        halt_baddata();
      }
    }
    iVar6 = iVar6 + 1;
    if (4 < iVar6) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
  } while( true );
}



// WARNING: Control flow encountered bad instruction data

void FUN_000036e0(undefined8 param_1,undefined8 param_2,short *param_3,short *param_4)

{
  char cVar1;
  int iVar2;
  int *in_stack_00000010;
  undefined1 *in_stack_00000014;
  
  FUN_00002764(param_1,param_2,0xffffffffffffffff,0);
  FUN_00002764(param_1,param_2,7,0);
  FUN_00002764(param_1,param_2,0xfffffffffffffffe,0);
  iVar2 = 0;
  do {
    FUN_000025b0(param_1,param_2);
    FUN_00013308(&DAT_000138c0);
    FUN_00002604();
    if ((((DAT_000138c0 & 0xf000) == 0x1000) && (DAT_00015164 == 'U')) &&
       (cVar1 = FUN_000004a4(&DAT_0001515b,8), DAT_00015163 == cVar1)) break;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 5);
  if (iVar2 != 5) {
    *param_3 = (ushort)DAT_0001515b + (ushort)DAT_0001515c * 0x100;
    *param_4 = (ushort)DAT_0001515d + (ushort)DAT_0001515e * 0x100;
    *in_stack_00000010 =
         (uint)DAT_0001515f + (uint)DAT_00015160 * 0x100 + (uint)DAT_00015161 * 0x10000 +
         (uint)DAT_00015162 * 0x1000000;
    *in_stack_00000014 = DAT_0001515a;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000387c(int param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00003fb4();
  FUN_00013538(param_1 + 2,param_2,uVar1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000038cc(undefined8 param_1,undefined8 param_2)

{
  FUN_00002764(param_1,param_2,0xffffffffffffffff,0);
  FUN_00002764(param_1,param_2,0x11,0);
  FUN_00002764(param_1,param_2,0xfffffffffffffffe,0);
  FUN_000025b0(param_1,param_2);
  FUN_00013308(&DAT_000138c0);
  FUN_00002604();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00003968(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    FUN_00002764(param_1,param_2,0xffffffffffffffff,0);
    FUN_00002764(param_1,param_2,9,0);
    FUN_00002764(param_1,param_2,0xfffffffffffffffe,0);
    FUN_000025b0(param_1,param_2);
    FUN_00013308(&DAT_000138c0);
    FUN_00002604();
    if (((DAT_000138c0 & 0xf000) == 0x1000) && (DAT_0001515c != 'f')) break;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 5);
  if (((iVar2 != 5) && (DAT_0001515b == 'U')) && (lVar1 = FUN_000002d4(param_1,param_2), lVar1 < 1))
  {
    FUN_000002d4(param_1,param_2);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_00003ab4(void)

{
  DAT_000136e8 = 0xff;
                    // WARNING: Subroutine does not return
  FUN_00002aac();
}



void FUN_00003df0(void)

{
                    // WARNING: Subroutine does not return
  FUN_00002aac();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00003f7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_000025b0();
  FUN_00013308(param_3);
  FUN_00002604();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00003fb4(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00003fc4(byte *param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  
  uVar4 = 0;
  bVar3 = 0;
  uVar2 = 0;
  do {
    bVar1 = *param_1;
    bVar3 = bVar3 ^ *(byte *)(bVar1 + 0x136ec);
    param_1 = param_1 + 1;
    if ((*(byte *)(bVar1 + 0x136ec) & 0x80) != 0) {
      uVar4 = uVar4 ^ ~uVar2;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 0x80);
  *param_2 = ~bVar3 & 0x77;
  param_2[1] = ~(byte)uVar4 & 0x7f;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00004038(int param_1,byte *param_2)

{
  int iVar1;
  uint uVar2;
  byte bStack_18;
  byte bStack_17;
  byte bStack_16;
  
  FUN_00003fc4(param_1,&bStack_18);
  bStack_16 = param_2[2] ^ bStack_16;
  uVar2 = (uint)(*param_2 ^ bStack_18);
  if (((bStack_16 != 0) || ((param_2[1] ^ bStack_17) != 0)) || (uVar2 != 0)) {
    if (((byte)(bStack_16 ^ param_2[1] ^ bStack_17) == 0x7f) &&
       ((uVar2 & 0xf ^ (int)uVar2 >> 4) == 7)) {
      *(byte *)(param_1 + (uint)bStack_16) =
           *(byte *)(param_1 + (uint)bStack_16) ^ (byte)(1 << ((int)uVar2 >> 4));
    }
    else {
      iVar1 = 7;
      do {
        iVar1 = iVar1 + -1;
      } while (-1 < iVar1);
      iVar1 = 3;
      do {
        iVar1 = iVar1 + -1;
      } while (-1 < iVar1);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0000413c(int param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = (param_1 + 2) * 8;
  _DAT_bf808268 = 0x3bc;
  *(undefined4 *)(iVar1 + -0x407f7dc0) = 0xc022c0a;
  *(uint *)(iVar1 + -0x407f7dbc) = param_3 & 0xfc00ffff | 0x5ffff;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000041d8(int param_1,int param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  
  if (param_1 < 0) {
    param_1 = param_1 + 0x7f;
  }
  iVar2 = 0;
  if (0 < param_1 >> 7) {
    do {
      lVar1 = FUN_00004038(param_2,param_3);
      param_2 = param_2 + 0x80;
      if (lVar1 < 0) {
        halt_baddata();
      }
      iVar2 = iVar2 + 1;
      param_3 = param_3 + 3;
    } while (iVar2 < param_1 >> 7);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00004250(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_1 < 0) {
    param_1 = param_1 + 0x7f;
  }
  iVar1 = 0;
  if (0 < param_1 >> 7) {
    do {
      FUN_00003fc4(param_2,param_3);
      param_2 = param_2 + 0x80;
      iVar1 = iVar1 + 1;
      param_3 = param_3 + 3;
    } while (iVar1 < param_1 >> 7);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000042c4(undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 + -1;
  if (param_2 != 0) {
    do {
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000042f0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_000134c8(&DAT_000169d8,0xffffffff80000400,0);
  if (lVar1 < 0) {
    FUN_00013284("mcman: bind error\n");
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000433c(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 auStack_20 [8];
  
  FUN_0001334c(&DAT_00015158,param_1,param_2);
  DAT_000138a8 = 0x400;
  DAT_000138ac = 0;
  DAT_000138a0 = &DAT_00015158;
  DAT_000138a4 = param_3;
  FUN_000132d4(auStack_20);
  FUN_000134a4(&DAT_000138a0,1);
  FUN_000132dc(auStack_20[0]);
  DAT_00016964 = (undefined4)param_2;
  FUN_000134d0(&DAT_000169d8,2,0,&DAT_00016958,0);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_0000440c(int param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined *puVar1;
  int in_stack_00000010;
  
  puVar1 = &DAT_00013958 + param_1 * 0xc00 + in_stack_00000010 * 0x100;
  *puVar1 = 0x81;
  puVar1[1] = 0x23;
  puVar1[2] = (char)param_4;
  puVar1[3] = (char)((uint)param_4 >> 8);
  puVar1[4] = (char)((uint)param_4 >> 0x10);
  puVar1[5] = (char)((uint)param_4 >> 0x18);
                    // WARNING: Subroutine does not return
  FUN_000042c4(&DAT_00013958 + param_1 * 0xc00 + in_stack_00000010 * 0x100 + 2,4);
}



// WARNING: Control flow encountered bad instruction data

void FUN_00004548(int param_1,uint param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  int in_stack_00000010;
  
  puVar1 = &DAT_00013958 + param_1 * 0xc00 + in_stack_00000010 * 0x100;
  *puVar1 = 0x81;
  puVar1[1] = 0x43;
  puVar1[2] = (char)param_4;
  *(uint *)(param_1 * 0x40 + in_stack_00000010 * 4 + 0x16a00) =
       (param_2 & 1) + 2 & 3 | 0x370 | (param_4 + 6U & 0x1ff) << 0x12;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_000045c8(int param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined *puVar1;
  int in_stack_00000010;
  
  puVar1 = &DAT_00013958 + param_1 * 0xc00 + in_stack_00000010 * 0x100;
  *puVar1 = 0x81;
  puVar1[1] = 0x22;
  puVar1[2] = (char)param_4;
  puVar1[3] = (char)((uint)param_4 >> 8);
  puVar1[4] = (char)((uint)param_4 >> 0x10);
  puVar1[5] = (char)((uint)param_4 >> 0x18);
                    // WARNING: Subroutine does not return
  FUN_000042c4(&DAT_00013958 + param_1 * 0xc00 + in_stack_00000010 * 0x100 + 2,4);
}



void FUN_000046b0(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined4 in_stack_00000010;
  int in_stack_00000014;
  
  puVar1 = &DAT_00013958 + param_1 * 0xc00 + in_stack_00000014 * 0x100;
  *puVar1 = 0x81;
  puVar1[1] = 0x42;
  puVar1[2] = (char)in_stack_00000010;
  FUN_0001334c(puVar1 + 3,param_4,in_stack_00000010);
                    // WARNING: Subroutine does not return
  FUN_000042c4(&DAT_00013958 + param_1 * 0xc00 + in_stack_00000014 * 0x100 + 3,in_stack_00000010);
}



void FUN_000047b4(int param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined *puVar1;
  int in_stack_00000010;
  
  puVar1 = &DAT_00013958 + param_1 * 0xc00 + in_stack_00000010 * 0x100;
  *puVar1 = 0x81;
  puVar1[1] = 0x21;
  puVar1[2] = (char)param_4;
  puVar1[3] = (char)((uint)param_4 >> 8);
  puVar1[4] = (char)((uint)param_4 >> 0x10);
  puVar1[5] = (char)((uint)param_4 >> 0x18);
                    // WARNING: Subroutine does not return
  FUN_000042c4(&DAT_00013958 + param_1 * 0xc00 + in_stack_00000010 * 0x100 + 2,4);
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000489c(int param_1,uint param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  
  puVar1 = &DAT_00013958 + param_1 * 0xc00 + param_4 * 0x100;
  *puVar1 = 0x81;
  puVar1[1] = 0x12;
  puVar1[2] = 0;
  *(uint *)(param_1 * 0x40 + param_4 * 4 + 0x16a00) = (param_2 & 1) + 2 & 3 | 0x100370;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00004914(int param_1,uint param_2,undefined8 param_3,int param_4)

{
  (&DAT_00013958)[param_1 * 0xc00 + param_4 * 0x100] = 0x81;
  (&DAT_00013958 + param_1 * 0xc00 + param_4 * 0x100)[1] = 0x82;
  *(uint *)(param_1 * 0x40 + param_4 * 4 + 0x16a00) = (param_2 & 1) + 2 & 3 | 0x100270;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00004984(int param_1,uint param_2,undefined8 param_3,int param_4)

{
  (&DAT_00013958)[param_1 * 0xc00 + param_4 * 0x100] = 0x81;
  (&DAT_00013958 + param_1 * 0xc00 + param_4 * 0x100)[1] = 0x81;
  *(uint *)(param_1 * 0x40 + param_4 * 4 + 0x16a00) = (param_2 & 1) + 2 & 3 | 0x100270;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000049f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000010;
  
  iVar1 = in_stack_00000010;
  if (in_stack_00000010 < 0) {
    iVar1 = in_stack_00000010 + 0x1f;
  }
  iVar3 = 1;
  FUN_0000440c(param_1,param_2,param_3);
  for (iVar1 = in_stack_00000010 + (iVar1 >> 5); 0 < iVar1; iVar1 = iVar1 - iVar2) {
    iVar2 = iVar1;
    if (0xfa < iVar1) {
      iVar2 = 0xfa;
    }
    iVar3 = iVar3 + 1;
    FUN_00004548(param_1,param_2,param_3,iVar2);
  }
  FUN_00004984(param_1,param_2,param_3,iVar3);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00004ac4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000010;
  int in_stack_00000014;
  
  iVar1 = in_stack_00000014;
  if (in_stack_00000014 < 0) {
    iVar1 = in_stack_00000014 + 0x1f;
  }
  iVar3 = 1;
  FUN_000045c8(param_1,param_2,param_3);
  for (iVar1 = in_stack_00000014 + (iVar1 >> 5); 0 < iVar1; iVar1 = iVar1 - iVar2) {
    iVar2 = iVar1;
    if (0xfa < iVar1) {
      iVar2 = 0xfa;
    }
    iVar3 = iVar3 + 1;
    FUN_000046b0(param_1,param_2,param_3,in_stack_00000010);
    in_stack_00000010 = in_stack_00000010 + iVar2;
  }
  FUN_00004984(param_1,param_2,param_3,iVar3);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00004ba8(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar2 = (int *)(param_1 * 0x40 + 0x16a00);
  _DAT_bf808268 = _DAT_bf808268 | 4;
  if (*piVar2 != 0) {
    iVar1 = *piVar2;
    do {
      piVar2 = piVar2 + 1;
      *(int *)(iVar3 * 4 + -0x407f7e00) = iVar1;
      iVar1 = *piVar2;
      iVar3 = iVar3 + 1;
    } while (iVar1 != 0);
  }
  *(undefined4 *)(iVar3 * 4 + -0x407f7e00) = 0;
  FUN_000134fc(0xb,&DAT_00013958 + param_1 * 0xc00,0x40,iVar3);
  FUN_00013504(0xb);
  FUN_000134fc(0xc,&DAT_00015158 + param_1 * 0xc00,0x40,iVar3);
  FUN_00013504(0xc);
  _DAT_bf808268 = _DAT_bf808268 | 1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00004cb4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 auStack_18 [6];
  
  DAT_000138b8 = 0xf00;
  DAT_000138b0 = &DAT_00015158 + param_1 * 0xc00;
  DAT_000138bc = 0;
  DAT_000138b4 = param_4;
  FUN_000132d4(auStack_18);
  FUN_000134a4(&DAT_000138b0,1);
  FUN_000132dc(auStack_18[0]);
  DAT_00016958 = 1;
  DAT_00016968 = 0xc;
  DAT_0001696c = 0xfa;
  DAT_00016960 = param_3;
  DAT_00016964 = param_2;
  FUN_000134d0(&DAT_000169d8,1,0,&DAT_00016958,0);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Removing unreachable block (ram,0x00004dfc)

void FUN_00004d9c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)(&DAT_00013958 + param_1 * 0xc00);
  puVar4 = &DAT_0001525c + param_1 * 0x300;
  do {
    uVar1 = puVar4[1];
    uVar2 = puVar4[2];
    uVar3 = puVar4[3];
    *puVar5 = *puVar4;
    puVar5[1] = uVar1;
    puVar5[2] = uVar2;
    puVar5[3] = uVar3;
    puVar4 = puVar4 + 4;
    puVar5 = puVar5 + 4;
  } while (puVar4 != (undefined4 *)(param_1 * 0xc00 + 0x1534c));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Removing unreachable block (ram,0x00004fa8)

void FUN_00004f60(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)(&DAT_00013958 + param_1 * 0xc00);
  puVar4 = &DAT_0001525c + param_1 * 0x300;
  do {
    uVar1 = puVar4[1];
    uVar2 = puVar4[2];
    uVar3 = puVar4[3];
    *puVar5 = *puVar4;
    puVar5[1] = uVar1;
    puVar5[2] = uVar2;
    puVar5[3] = uVar3;
    puVar4 = puVar4 + 4;
    puVar5 = puVar5 + 4;
  } while (puVar4 != (undefined4 *)(param_1 * 0xc00 + 0x1534c));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered unimplemented instructions

void FUN_000050b8(void)

{
                    // WARNING: Unimplemented instruction - Truncating control flow here
  halt_unimplemented();
}



void FUN_000054d0(void)

{
                    // WARNING: Subroutine does not return
  FUN_00002aac();
}



void FUN_00005578(void)

{
                    // WARNING: Subroutine does not return
  FUN_00002aac();
}



// WARNING: Control flow encountered unimplemented instructions
// WARNING: Control flow encountered bad instruction data
// WARNING: Removing unreachable block (ram,0x00005d14)

void FUN_0000561c(undefined4 param_1,undefined4 param_2,undefined8 param_3,int param_4)

{
  int in_stack_00000010;
  
  FUN_000025b0();
  FUN_0000413c(param_1,param_2);
  if (in_stack_00000010 + param_4 == 0) {
    FUN_00002604();
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Unimplemented instruction - Truncating control flow here
  halt_unimplemented();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00005d80(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_00013364(param_1,0x2f);
  if (lVar2 == 0) {
    FUN_0001337c(param_1);
  }
  else {
    iVar1 = FUN_00013394(param_1,0x2f);
    FUN_0001337c(iVar1 + 1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00005dec(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered unimplemented instructions
// WARNING: Control flow encountered bad instruction data

void FUN_00005e3c(undefined8 param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1 * 0x630 + param_2 * 0x18c;
  lVar2 = FUN_000036e0(param_1,param_2,&DAT_00025ce0 + iVar1 + 0x28,&DAT_00025ce0 + iVar1 + 0x2c);
  if (lVar2 == 0) {
                    // WARNING: Unimplemented instruction - Truncating control flow here
    halt_unimplemented();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered unimplemented instructions

void FUN_00005f98(int param_1,int param_2)

{
  FUN_00000478(param_1 * 0x630 + param_2 * 0x18c + 0x25db0,0x80,0xffffffffffffffff);
                    // WARNING: Unimplemented instruction - Truncating control flow here
  halt_unimplemented();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Removing unreachable block (ram,0x000062e0)

void FUN_000061d0(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar6 = (undefined4 *)(&DAT_00025ce0 + (int)param_1 * 0x630 + (int)param_2 * 0x18c);
  FUN_00000478(puVar6,0x18c,0);
  lVar4 = FUN_00005e3c(param_1,param_2);
  if ((((lVar4 == 0) && (lVar4 = FUN_0000350c(param_1,param_2,0,&DAT_00025830), lVar4 != -2)) &&
      (lVar4 == 0)) &&
     ((lVar4 = FUN_00013384("Sony PS2 Memory Card Format ",&DAT_00025830,0x1c), lVar4 == 0 &&
      (((char)DAT_0002584c != '1' || (DAT_0002584c._2_1_ != '0')))))) {
    puVar5 = &DAT_00025830;
    do {
      uVar1 = puVar5[1];
      uVar2 = puVar5[2];
      uVar3 = puVar5[3];
      *puVar6 = *puVar5;
      puVar6[1] = uVar1;
      puVar6[2] = uVar2;
      puVar6[3] = uVar3;
      puVar5 = puVar5 + 4;
      puVar6 = puVar6 + 4;
    } while (puVar5 != (undefined4 *)0x25980);
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered unimplemented instructions
// WARNING: Control flow encountered bad instruction data

void FUN_000065a4(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  char *pcVar4;
  
  iVar1 = (int)param_1 * 0x630;
  iVar2 = (int)param_2 * 0x18c;
  pcVar4 = &DAT_00025ce0 + iVar1 + iVar2;
  if ((((*(int *)(pcVar4 + 0x160) < 1) ||
       (((int)((byte)pcVar4[0x1c] - 0x30) < 2 && ((int)((byte)pcVar4[0x1e] - 0x30) < 2)))) &&
      (lVar3 = FUN_00005f98(param_1,param_2), lVar3 != 0)) && (lVar3 != -2)) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  FUN_00013354(pcVar4,0,0x28);
  builtin_strncpy(&DAT_00025ce0 + iVar1 + iVar2,"Sony PS2 Memory Card Format ",0x1d);
  FUN_0001335c(pcVar4,"1.2.0.0");
                    // WARNING: Unimplemented instruction - Truncating control flow here
  halt_unimplemented();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00006cbc(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  undefined2 *puVar1;
  longlong lVar2;
  int in_stack_00000010;
  int in_stack_00000014;
  int aiStack_28 [10];
  
  lVar2 = FUN_000108dc(param_1,param_2,
                       in_stack_00000010 +
                       *(int *)((int)param_2 * 0x18c + (int)param_1 * 0x630 + 0x25d14),aiStack_28);
  if (lVar2 != 0) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  FUN_00000478(*(undefined4 *)(aiStack_28[0] + 4),0x400,0);
  puVar1 = *(undefined2 **)(aiStack_28[0] + 4);
  *puVar1 = 0x8427;
  if (in_stack_00000014 == 0) {
    FUN_00002490(puVar1 + 4);
    *(undefined4 *)(puVar1 + 0xc) = *(undefined4 *)(puVar1 + 4);
    *(undefined4 *)(puVar1 + 0xe) = *(undefined4 *)(puVar1 + 6);
    *(undefined4 *)(puVar1 + 2) = 0;
    *(int *)(puVar1 + 10) = (int)param_4;
    *(int *)(puVar1 + 8) = (int)param_3;
    puVar1[0x20] = 0x2e;
    if ((param_3 == 0) && (param_4 == 0)) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    FUN_00010b78(param_1,param_2,param_3,0);
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered unimplemented instructions

void FUN_00006edc(void)

{
                    // WARNING: Unimplemented instruction - Truncating control flow here
  halt_unimplemented();
}



// WARNING: Control flow encountered unimplemented instructions

void FUN_00007070(void)

{
                    // WARNING: Unimplemented instruction - Truncating control flow here
  halt_unimplemented();
}



// WARNING: Control flow encountered unimplemented instructions
// WARNING: Control flow encountered bad instruction data

void FUN_000072a8(int param_1,int param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = param_1 * 0x630 + param_2 * 0x18c;
  if (*(int *)(&DAT_00025ce0 + iVar1 + 0x170) <= *(int *)(&DAT_00025ce0 + iVar1 + 0x16c)) {
    if (param_3 == 0) {
      *(undefined4 *)(&DAT_00025ce0 + iVar1 + 0x180) = 0;
    }
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Unimplemented instruction - Truncating control flow here
  halt_unimplemented();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00007584(int param_1,uint *param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  ushort *puStack_20;
  
  param_1 = param_1 * 0x30;
  uVar1 = *(undefined2 *)(param_1 + 0x25c56);
  uVar2 = *(undefined2 *)(param_1 + 0x25c58);
  if (*(int *)(param_1 + 0x25c5c) < *(int *)(param_1 + 0x25c60)) {
    do {
      lVar5 = FUN_00010b78(uVar1,uVar2,*(undefined4 *)(param_1 + 0x25c64),
                           *(undefined4 *)(param_1 + 0x25c5c));
      if (lVar5 != 0) {
        halt_baddata();
      }
    } while (((*puStack_20 & 0x8000) == 0) &&
            (iVar3 = *(int *)(param_1 + 0x25c5c) + 1, *(int *)(param_1 + 0x25c5c) = iVar3,
            iVar3 < *(int *)(param_1 + 0x25c60)));
    if (*(int *)(param_1 + 0x25c5c) < *(int *)(param_1 + 0x25c60)) {
      *(int *)(param_1 + 0x25c5c) = *(int *)(param_1 + 0x25c5c) + 1;
      FUN_00000478(param_2,0x144,0);
      FUN_00013374(param_2 + 0x10,puStack_20 + 0x20);
      *(undefined1 *)(param_2 + 0x18) = 0;
      if ((*puStack_20 & 1) != 0) {
        *param_2 = *param_2 | 1;
      }
      if ((*puStack_20 & 2) != 0) {
        *param_2 = *param_2 | 2;
      }
      if ((*puStack_20 & 4) != 0) {
        *param_2 = *param_2 | 4;
      }
      if ((*puStack_20 & 0x1000) != 0) {
        *param_2 = *param_2 | 0x1000;
      }
      if ((*puStack_20 & 0x800) != 0) {
        *param_2 = *param_2 | 0x800;
      }
      if ((*puStack_20 & 8) != 0) {
        *param_2 = *param_2 | 8;
      }
      if ((*puStack_20 & 0x20) == 0) {
        uVar4 = *param_2 | 0x10;
      }
      else {
        uVar4 = *param_2 | 0x20;
      }
      *param_2 = uVar4;
      param_2[1] = *(uint *)(puStack_20 + 0x10);
      param_2[2] = *(uint *)(puStack_20 + 2);
      uVar4 = *(uint *)(puStack_20 + 6);
      param_2[3] = *(uint *)(puStack_20 + 4);
      param_2[4] = uVar4;
      uVar4 = *(uint *)(puStack_20 + 0xe);
      param_2[7] = *(uint *)(puStack_20 + 0xc);
      param_2[8] = uVar4;
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000782c(void)

{
  uint uVar1;
  longlong lVar2;
  uint *in_a3_lo;
  ushort *puStack_10;
  
  lVar2 = FUN_00008b00();
  if (lVar2 == 0) {
    FUN_00000478(in_a3_lo,0x40,0);
    if ((*puStack_10 & 1) != 0) {
      *in_a3_lo = *in_a3_lo | 1;
    }
    if ((*puStack_10 & 2) != 0) {
      *in_a3_lo = *in_a3_lo | 2;
    }
    if ((*puStack_10 & 4) != 0) {
      *in_a3_lo = *in_a3_lo | 4;
    }
    if ((*puStack_10 & 0x1000) != 0) {
      *in_a3_lo = *in_a3_lo | 0x1000;
    }
    if ((*puStack_10 & 0x800) != 0) {
      *in_a3_lo = *in_a3_lo | 0x800;
    }
    if ((*puStack_10 & 8) != 0) {
      *in_a3_lo = *in_a3_lo | 8;
    }
    if ((*puStack_10 & 0x20) == 0) {
      uVar1 = *in_a3_lo | 0x10;
    }
    else {
      uVar1 = *in_a3_lo | 0x20;
    }
    *in_a3_lo = uVar1;
    in_a3_lo[1] = *(uint *)(puStack_10 + 0x10);
    if ((*puStack_10 & 0x20) == 0) {
      in_a3_lo[2] = *(uint *)(puStack_10 + 2);
    }
    uVar1 = *(uint *)(puStack_10 + 6);
    in_a3_lo[3] = *(uint *)(puStack_10 + 4);
    in_a3_lo[4] = uVar1;
    uVar1 = *(uint *)(puStack_10 + 0xe);
    in_a3_lo[7] = *(uint *)(puStack_10 + 0xc);
    in_a3_lo[8] = uVar1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00007a18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort *puVar4;
  longlong lVar5;
  undefined4 *puVar6;
  ushort uVar7;
  ushort *puVar8;
  uint in_stack_00000010;
  undefined4 auStack_260 [128];
  int iStack_60;
  int iStack_5c;
  undefined1 auStack_50 [40];
  ushort *puStack_28;
  
  lVar5 = FUN_00008b00();
  if (lVar5 == 3) {
    halt_baddata();
  }
  if (0 < lVar5) {
    halt_baddata();
  }
  if (lVar5 != 0) {
    halt_baddata();
  }
  if ((iStack_60 == 0) && (iStack_5c < 2)) {
    halt_baddata();
  }
  if ((in_stack_00000010 & 0x10) != 0) {
    FUN_00013354(auStack_50,0,0x24);
    puVar6 = param_4 + 8;
    FUN_0001338c(auStack_50,puVar6,0x20);
    lVar5 = FUN_0001337c(auStack_50);
    if (0x1f < lVar5) {
      halt_baddata();
    }
    lVar5 = FUN_0001336c(&DAT_00013620,puVar6);
    if (lVar5 == 0) {
      halt_baddata();
    }
    lVar5 = FUN_0001336c(&DAT_00013624,puVar6);
    if (lVar5 == 0) {
      halt_baddata();
    }
    if (*(char *)(param_4 + 8) == '\0') {
      halt_baddata();
    }
    lVar5 = FUN_00000140(puVar6,0x2f);
    if (-1 < lVar5) {
      halt_baddata();
    }
    if (iStack_5c < 2) {
      halt_baddata();
    }
    lVar5 = FUN_000004d0(puVar6);
    if (lVar5 == 0) {
      halt_baddata();
    }
    lVar5 = FUN_00010b78(param_1,param_2,iStack_60,0);
    if (lVar5 != 0) {
      halt_baddata();
    }
    lVar5 = FUN_00010b78(param_1,param_2,*(undefined4 *)(puStack_28 + 8),
                         *(undefined4 *)(puStack_28 + 10));
    puVar6 = auStack_260;
    if (lVar5 != 0) {
      halt_baddata();
    }
    puVar8 = puStack_28 + 0x100;
    puVar4 = puStack_28;
    do {
      uVar1 = *(undefined4 *)(puVar4 + 2);
      uVar2 = *(undefined4 *)(puVar4 + 4);
      uVar3 = *(undefined4 *)(puVar4 + 6);
      *puVar6 = *(undefined4 *)puVar4;
      puVar6[1] = uVar1;
      puVar6[2] = uVar2;
      puVar6[3] = uVar3;
      puVar4 = puVar4 + 8;
      puVar6 = puVar6 + 4;
    } while (puVar4 != puVar8);
    lVar5 = FUN_00008ea4(param_1,param_2,auStack_260,param_4 + 8);
    if (lVar5 != 1) {
      halt_baddata();
    }
  }
  lVar5 = FUN_00010b78(param_1,param_2,iStack_60,iStack_5c);
  if (lVar5 == 0) {
    FUN_0000fcf8();
    if ((in_stack_00000010 & 8) != 0) {
      *(undefined4 *)(puStack_28 + 0x10) = param_4[6];
    }
    if (((in_stack_00000010 & 4) != 0) && ((*puStack_28 & 0x20) != 0)) {
      uVar7 = 0x7fcf;
      if (ram0x000136b0 == 0) {
        uVar7 = 0x180f;
      }
      *puStack_28 = *puStack_28 & ~uVar7 | *(ushort *)(param_4 + 5) & uVar7;
    }
    if (((in_stack_00000010 & 0x200) != 0) && ((*puStack_28 & 0x20) != 0)) {
      uVar7 = 0x180f;
      if (ram0x000136b0 != 0) {
        uVar7 = 0x7fcf;
      }
      *puStack_28 = *puStack_28 & ~uVar7 | *(ushort *)(param_4 + 5) & uVar7;
    }
    if ((in_stack_00000010 & 1) != 0) {
      uVar1 = param_4[1];
      *(undefined4 *)(puStack_28 + 4) = *param_4;
      *(undefined4 *)(puStack_28 + 6) = uVar1;
    }
    if ((in_stack_00000010 & 2) != 0) {
      uVar1 = param_4[3];
      *(undefined4 *)(puStack_28 + 0xc) = param_4[2];
      *(undefined4 *)(puStack_28 + 0xe) = uVar1;
    }
    if ((in_stack_00000010 & 0x10) != 0) {
      FUN_0001338c(puStack_28 + 0x20,param_4 + 8,0x20);
      *(undefined1 *)((int)puStack_28 + 0x5f) = 0;
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Control flow encountered unimplemented instructions

void FUN_00007dd4(int param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 * 0x30 + 0x25c5c);
  iVar2 = *(int *)(param_1 * 0x30 + 0x25c60);
  if (iVar1 < iVar2) {
    iVar2 = iVar2 - iVar1;
    if (param_3 < iVar2) {
      iVar2 = param_3;
    }
    if (iVar2 != 0) {
                    // WARNING: Unimplemented instruction - Truncating control flow here
      halt_unimplemented();
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Control flow encountered unimplemented instructions

void FUN_00007f7c(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  longlong lVar4;
  int aiStack_30 [12];
  
  iVar3 = (int)param_1 * 0x30;
  uVar1 = *(undefined2 *)(iVar3 + 0x25c56);
  uVar2 = *(undefined2 *)(iVar3 + 0x25c58);
  if ((param_3 == 0) || (*(char *)(iVar3 + 0x25c55) != '\0')) {
    if (param_3 == 0) {
      FUN_000088a4(param_1);
    }
    else {
      lVar4 = FUN_00006edc(param_1);
      if (lVar4 == -3) {
        lVar4 = FUN_00007070(param_1);
        if (lVar4 == -3) {
                    // WARNING: Subroutine does not return
          FUN_0000fdac(uVar1,uVar2);
        }
        if (lVar4 != 0) {
          halt_baddata();
        }
        lVar4 = FUN_00006edc(param_1);
      }
      else if (lVar4 < 0) {
        halt_baddata();
      }
      lVar4 = FUN_000108dc(uVar1,uVar2,lVar4,aiStack_30);
      if (lVar4 == 0) {
        *(undefined1 *)(aiStack_30[0] + 0xc) = 1;
                    // WARNING: Unimplemented instruction - Truncating control flow here
        halt_unimplemented();
      }
    }
  }
  else {
    *(undefined1 *)(iVar3 + 0x25c55) = 1;
    lVar4 = FUN_000088a4(param_1);
    if (lVar4 == 0) {
                    // WARNING: Subroutine does not return
      FUN_0000fdac(*(undefined2 *)(iVar3 + 0x25c56),*(undefined2 *)(iVar3 + 0x25c58));
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_000081dc(int param_1)

{
                    // WARNING: Subroutine does not return
  FUN_0000fdac(*(undefined2 *)(param_1 * 0x30 + 0x25c56),*(undefined2 *)(param_1 * 0x30 + 0x25c58),
               &DAT_00025ce0);
}



// WARNING: Control flow encountered bad instruction data

void FUN_000084a4(int param_1,undefined8 param_2,int param_3)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  
  iVar3 = param_1 * 0x30;
  sVar1 = *(short *)(iVar3 + 0x25c56);
  sVar2 = *(short *)(iVar3 + 0x25c58);
  iVar4 = sVar1 * 0x630 + sVar2 * 0x18c;
  if ((param_3 != 0) && (*(char *)(iVar3 + 0x25c55) == '\0')) {
    *(undefined1 *)(iVar3 + 0x25c55) = 1;
    lVar6 = FUN_000088a4(param_1);
    if (lVar6 != 0) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
                    // WARNING: Subroutine does not return
    FUN_0000fdac(*(undefined2 *)(iVar3 + 0x25c56),*(undefined2 *)(iVar3 + 0x25c58));
  }
  iVar7 = *(int *)(iVar3 + 0x25c5c);
  iVar5 = iVar7;
  if (iVar7 < 0) {
    iVar5 = iVar7 + 0x3ff;
  }
  iVar7 = iVar7 + (iVar5 >> 10) * -0x400;
  if (0 < iVar7) {
    iVar5 = *(int *)(&DAT_00025ce0 + iVar4 + 0x154) - iVar7;
    if (iVar5 < param_3) {
      param_3 = iVar5;
    }
    lVar6 = FUN_00006edc(param_1);
    if (lVar6 == -3) {
      lVar6 = FUN_00007070(param_1);
      if (lVar6 != 0) {
                    // WARNING: Subroutine does not return
        FUN_0000fdac(sVar1,sVar2);
      }
      lVar6 = FUN_00006edc(param_1);
    }
    if (lVar6 < 1) {
      halt_baddata();
    }
    FUN_0000561c(sVar1,sVar2,
                 (longlong)(int)lVar6 * (longlong)(int)*(short *)(&DAT_00025ce0 + iVar4 + 0x2a),
                 iVar7);
    *(int *)(iVar3 + 0x25c5c) = *(int *)(iVar3 + 0x25c5c) + param_3;
  }
                    // WARNING: Subroutine does not return
  FUN_0000fdac(sVar1,sVar2);
}



// WARNING: Control flow encountered bad instruction data

void FUN_000088a4(int param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  ushort uVar4;
  longlong lVar5;
  ushort *puStack_18;
  int iStack_14;
  
  param_1 = param_1 * 0x30;
  uVar1 = *(undefined2 *)(param_1 + 0x25c56);
  uVar2 = *(undefined2 *)(param_1 + 0x25c58);
  lVar5 = FUN_00010b78(uVar1,uVar2,*(undefined4 *)(param_1 + 0x25c70),
                       *(undefined4 *)(param_1 + 0x25c74));
  if (lVar5 == 0) {
    if (*(char *)(param_1 + 0x25c55) == '\0') {
      uVar4 = *puStack_18 | 0x80;
    }
    else {
      uVar4 = *puStack_18 & 0xff7f;
    }
    *puStack_18 = uVar4;
    FUN_00002490(puStack_18 + 0xc);
    *(undefined4 *)(puStack_18 + 8) = *(undefined4 *)(param_1 + 0x25c64);
    *(undefined4 *)(puStack_18 + 2) = *(undefined4 *)(param_1 + 0x25c60);
    FUN_0000fcf8();
    DAT_00017298 = *(undefined4 *)(puStack_18 + 0xc);
    DAT_0001729c = *(undefined4 *)(puStack_18 + 0xe);
    lVar5 = FUN_00010b78(uVar1,uVar2,*(undefined4 *)(param_1 + 0x25c78),
                         *(undefined4 *)(param_1 + 0x25c7c));
    uVar3 = DAT_0001729c;
    if (lVar5 == 0) {
      *(undefined4 *)(iStack_14 + 0x18) = DAT_00017298;
      *(undefined4 *)(iStack_14 + 0x1c) = uVar3;
      FUN_0000fcf8();
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000089e8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  int *piVar5;
  int iVar6;
  int aiStack_230 [132];
  int *piStack_20;
  
  lVar4 = FUN_00008b00();
  if ((lVar4 < 1) && (piVar5 = aiStack_230, -1 < lVar4)) {
    piVar3 = piStack_20;
    do {
      iVar6 = piVar3[1];
      iVar1 = piVar3[2];
      iVar2 = piVar3[3];
      *piVar5 = *piVar3;
      piVar5[1] = iVar6;
      piVar5[2] = iVar1;
      piVar5[3] = iVar2;
      piVar3 = piVar3 + 4;
      piVar5 = piVar5 + 4;
    } while (piVar3 != piStack_20 + 0x80);
    iVar6 = 0;
    if (0 < aiStack_230[1]) {
      do {
        lVar4 = FUN_00010b78(param_1,param_2,aiStack_230[4],iVar6);
        if (lVar4 != 0) {
          halt_baddata();
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < aiStack_230[1]);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00008b00(undefined8 param_1,undefined8 param_2,char *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort *puVar4;
  int iVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined4 *in_stack_00000010;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 auStack_40 [2];
  undefined4 uStack_38;
  ushort *puStack_30;
  
  iVar5 = (int)param_1 * 0x630 + (int)param_2 * 0x18c;
  if (param_4 == (undefined4 *)0x0) {
    param_4 = auStack_40;
    uStack_38 = 0xffffffff;
  }
  if (*param_3 == '/') {
    param_3 = param_3 + 1;
    uStack_50 = 0;
    uStack_4c = 0;
  }
  else {
    uStack_50 = *(undefined4 *)(&DAT_00025ce0 + iVar5 + 0x164);
    uStack_4c = *(undefined4 *)(&DAT_00025ce0 + iVar5 + 0x168);
  }
  lVar6 = FUN_00010b78(param_1,param_2,uStack_50,uStack_4c);
  if (lVar6 == 0) {
    if (*param_3 == '\0') {
      if (((*puStack_30 & 0x8000) != 0) && (((*puStack_30 & 0x2000) == 0 || (ram0x000136b0 != 0))))
      {
        if (param_4 == (undefined4 *)0x0) {
          *in_stack_00000010 = puStack_30;
        }
        else {
          puVar7 = &DAT_00017480;
          puVar4 = puStack_30 + 0x100;
          do {
            uVar1 = *(undefined4 *)(puStack_30 + 2);
            uVar2 = *(undefined4 *)(puStack_30 + 4);
            uVar3 = *(undefined4 *)(puStack_30 + 6);
            *puVar7 = *(undefined4 *)puStack_30;
            puVar7[1] = uVar1;
            puVar7[2] = uVar2;
            puVar7[3] = uVar3;
            puStack_30 = puStack_30 + 8;
            puVar7 = puVar7 + 4;
          } while (puStack_30 != puVar4);
          lVar6 = FUN_00008ea4(param_1,param_2,&DAT_00017480,&DAT_00013620);
          if (-1 < lVar6) {
            FUN_00010b78(param_1,param_2,*param_4,param_4[1]);
          }
        }
      }
    }
    else {
      while( true ) {
        if (((*puStack_30 & 5) != 5) && (ram0x000136b0 == 0)) {
          halt_baddata();
        }
        lVar6 = FUN_00000140(param_3,0x2f);
        if (lVar6 < 0) {
          FUN_0001337c(param_3);
        }
        puVar7 = &DAT_00017480;
        puVar4 = puStack_30;
        do {
          uVar1 = *(undefined4 *)(puVar4 + 2);
          uVar2 = *(undefined4 *)(puVar4 + 4);
          uVar3 = *(undefined4 *)(puVar4 + 6);
          *puVar7 = *(undefined4 *)puVar4;
          puVar7[1] = uVar1;
          puVar7[2] = uVar2;
          puVar7[3] = uVar3;
          puVar4 = puVar4 + 8;
          puVar7 = puVar7 + 4;
        } while (puVar4 != puStack_30 + 0x100);
        lVar6 = FUN_00008ea4(param_1,param_2,&DAT_00017480,param_3);
        if (lVar6 < 0) {
          halt_baddata();
        }
        if (0 < lVar6) break;
        lVar6 = FUN_00000140(param_3,0x2f);
        if ((lVar6 < 0) || (param_3[(int)lVar6 + 1] == '\0')) {
          FUN_00010b78(param_1,param_2,*param_4,param_4[1]);
          halt_baddata();
        }
        iVar5 = FUN_00000140(param_3,0x2f);
        uStack_50 = *param_4;
        param_3 = param_3 + iVar5 + 1;
        uStack_4c = param_4[1];
        FUN_00010b78(param_1,param_2,*param_4,param_4[1]);
        if ((*puStack_30 & 0x20) == 0) {
          halt_baddata();
        }
        if (*param_3 == '\0') {
          halt_baddata();
        }
      }
      lVar6 = FUN_00000140(param_3,0x2f);
      if (lVar6 < 0) {
        *param_4 = uStack_50;
        param_4[1] = uStack_4c;
      }
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00008ea4(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  int iVar10;
  longlong lVar11;
  undefined4 *in_stack_00000010;
  int in_stack_00000014;
  ushort *puStack_30;
  
  uVar5 = FUN_00000140(param_4,0x2f);
  if ((longlong)uVar5 < 0) {
    uVar5 = FUN_0001337c(param_4);
  }
  lVar11 = 0;
  if ((uVar5 == 2) && (lVar6 = FUN_00013384(param_4,&DAT_00013624,2), lVar6 == 0)) {
    lVar11 = FUN_00010b78(param_1,param_2,param_3[4],0);
    if (lVar11 != 0) {
      halt_baddata();
    }
    lVar11 = FUN_00010b78(param_1,param_2,*(undefined4 *)(puStack_30 + 8),0);
    if (lVar11 != 0) {
      halt_baddata();
    }
    if (in_stack_00000010 != (undefined4 *)0x0) {
      *in_stack_00000010 = *(undefined4 *)(puStack_30 + 8);
      in_stack_00000010[1] = *(undefined4 *)(puStack_30 + 10);
    }
    lVar11 = FUN_00010b78(param_1,param_2,*(undefined4 *)(puStack_30 + 8),
                          *(undefined4 *)(puStack_30 + 10));
    if (lVar11 != 0) {
      halt_baddata();
    }
    puVar4 = puStack_30;
    puVar9 = param_3;
    do {
      uVar1 = *(undefined4 *)(puVar4 + 2);
      uVar2 = *(undefined4 *)(puVar4 + 4);
      uVar3 = *(undefined4 *)(puVar4 + 6);
      *puVar9 = *(undefined4 *)puVar4;
      puVar9[1] = uVar1;
      puVar9[2] = uVar2;
      puVar9[3] = uVar3;
      puVar4 = puVar4 + 8;
      puVar9 = puVar9 + 4;
    } while (puVar4 != puStack_30 + 0x100);
    if (((*puStack_30 & 0x2000) != 0) && (ram0x000136b0 == 0)) goto LAB_000090d0;
LAB_000090f4:
    lVar11 = 1;
    if (in_stack_00000010 == (undefined4 *)0x0) {
      halt_baddata();
    }
    iVar10 = in_stack_00000010[2];
  }
  else {
    if ((uVar5 != 1) || (lVar6 = FUN_00013384(param_4,&DAT_00013620,1), lVar6 != 0))
    goto LAB_0000910c;
    lVar11 = FUN_00010b78(param_1,param_2,param_3[4],0);
    if (lVar11 != 0) {
      halt_baddata();
    }
    if (in_stack_00000010 != (undefined4 *)0x0) {
      *in_stack_00000010 = *(undefined4 *)(puStack_30 + 8);
      in_stack_00000010[1] = *(undefined4 *)(puStack_30 + 10);
    }
    if (((*puStack_30 & 0x2000) == 0) || (ram0x000136b0 != 0)) goto LAB_000090f4;
LAB_000090d0:
    lVar11 = 2;
    if (in_stack_00000010 == (undefined4 *)0x0) {
      halt_baddata();
    }
    iVar10 = in_stack_00000010[2];
  }
  if (iVar10 < 0) {
    halt_baddata();
  }
LAB_0000910c:
  if ((in_stack_00000010 != (undefined4 *)0x0) && (-1 < (int)in_stack_00000010[2])) {
    in_stack_00000010[2] = param_3[1];
  }
  iVar10 = 0;
  if (0 < (int)param_3[1]) {
    do {
      lVar6 = FUN_00010b78(param_1,param_2,param_3[4],iVar10);
      if (lVar6 != 0) {
        halt_baddata();
      }
      if ((((*puStack_30 & 0x8000) == 0) && (in_stack_00000010 != (undefined4 *)0x0)) &&
         (iVar10 < (int)in_stack_00000010[2])) {
        in_stack_00000010[2] = iVar10;
      }
      if (in_stack_00000014 == 0) {
        if ((*puStack_30 & 0x8000) == 0) goto LAB_000091e8;
      }
      else if ((*puStack_30 & 0x8000) != 0) {
LAB_000091e8:
        if (lVar11 == 0) {
          if (((longlong)uVar5 < 0xb) ||
             (lVar6 = FUN_00013384((int)param_4 + 10,puStack_30 + 0x25,(int)uVar5 + -10), lVar6 != 0
             )) {
LAB_00009258:
            uVar7 = FUN_0001337c(puStack_30 + 0x20);
            uVar8 = uVar5;
            if (uVar5 <= uVar7) {
              uVar8 = FUN_0001337c(puStack_30 + 0x20);
            }
            lVar6 = FUN_00013384(param_4,puStack_30 + 0x20,uVar8);
            if (lVar6 != 0) goto LAB_000092f0;
          }
          else {
            uVar7 = FUN_0001337c(puStack_30 + 0x20);
            uVar8 = uVar5;
            if (uVar5 <= uVar7) {
              uVar8 = FUN_0001337c(puStack_30 + 0x20);
            }
            lVar6 = FUN_00013384(param_4,puStack_30 + 0x20,uVar8);
            if (lVar6 != 0) goto LAB_00009258;
          }
          lVar11 = 1;
          if (((*puStack_30 & 0x2000) != 0) && (ram0x000136b0 == 0)) {
            lVar11 = 2;
          }
          if (in_stack_00000010 == (undefined4 *)0x0) {
            halt_baddata();
          }
          uVar1 = param_3[4];
          in_stack_00000010[1] = iVar10;
          *in_stack_00000010 = uVar1;
          if ((int)in_stack_00000010[2] < 0) {
            halt_baddata();
          }
        }
      }
LAB_000092f0:
      iVar10 = iVar10 + 1;
    } while (iVar10 < (int)param_3[1]);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Control flow encountered unimplemented instructions
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00009344(longlong param_1,longlong param_2,char *param_3,ulonglong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort uVar4;
  ushort *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  byte bVar9;
  int iVar10;
  undefined4 *puVar11;
  byte bVar12;
  int iVar13;
  undefined1 *puVar14;
  ulonglong uVar15;
  int iVar16;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  ushort *puStack_38;
  ushort *puStack_34;
  
  if ((param_4 & 0x240) != 0) {
    param_4 = param_4 | 2;
    lVar6 = FUN_00005d80(param_3);
    if (lVar6 == 0) {
      halt_baddata();
    }
  }
  if (*param_3 != '\0') {
    lVar6 = FUN_000004d0(param_3);
    iVar16 = 0;
    if (lVar6 != 0) {
      iVar10 = 0;
      do {
        if (*(char *)(iVar10 + 0x25c50) == '\0') break;
        iVar16 = iVar16 + 1;
        iVar10 = iVar10 + 0x30;
      } while (iVar16 < 3);
      if (iVar16 != 3) {
        iVar16 = iVar16 * 0x30;
        puVar14 = (undefined1 *)(iVar16 + 0x25c50);
        iVar10 = (int)param_1 * 0x630 + (int)param_2 * 0x18c;
        FUN_00000478(puVar14,0x30,0);
        iStack_40 = 0;
        if ((param_4 & 0x240) == 0) {
          iStack_40 = -1;
        }
        puStack_38 = (ushort *)0x0;
        lVar6 = FUN_00008b00(param_1,param_2,param_3,&iStack_48);
        if (-1 < lVar6) {
          if (puStack_38 != (ushort *)0x0) {
            puVar11 = (undefined4 *)&DAT_00017680;
            puVar5 = puStack_38;
            do {
              uVar1 = *(undefined4 *)(puVar5 + 2);
              uVar2 = *(undefined4 *)(puVar5 + 4);
              uVar3 = *(undefined4 *)(puVar5 + 6);
              *puVar11 = *(undefined4 *)puVar5;
              puVar11[1] = uVar1;
              puVar11[2] = uVar2;
              puVar11[3] = uVar3;
              puVar5 = puVar5 + 8;
              puVar11 = puVar11 + 4;
            } while (puVar5 != puStack_38 + 0x100);
          }
          if ((param_4 == 0) && ((*puStack_38 & 0x8000) == 0)) {
            lVar6 = 1;
          }
          if ((lVar6 != 2) && (lVar6 != 3)) {
            if (lVar6 == 0) {
              if ((param_4 & 0x40) != 0) {
                halt_baddata();
              }
            }
            else if ((param_4 & 0x40) != 0) {
              if (iStack_48 != *(int *)(&DAT_00025ce0 + iVar10 + 0x3c)) {
                halt_baddata();
              }
              if (iStack_44 != 0) {
                halt_baddata();
              }
            }
            if ((((((param_4 & 0x240) == 0) || (lVar6 == 0)) || (iStack_40 < 0x14)) ||
                (iStack_48 == *(int *)(&DAT_00025ce0 + iVar10 + 0x3c))) &&
               ((lVar6 != 1 || ((param_4 & 0x240) != 0)))) {
              *(undefined4 *)(iVar16 + 0x25c64) = 0xffffffff;
              *(undefined4 *)(iVar16 + 0x25c68) = 0xffffffff;
              *(undefined4 *)(iVar16 + 0x25c6c) = 0;
              *(undefined4 *)(iVar16 + 0x25c60) = 0;
              *(undefined4 *)(iVar16 + 0x25c5c) = 0;
              *(short *)(iVar16 + 0x25c56) = (short)param_1;
              *(short *)(iVar16 + 0x25c58) = (short)param_2;
              *(undefined1 *)(iVar16 + 0x25c55) = 0;
              *(byte *)(iVar16 + 0x25c52) = (byte)param_4 & 1;
              *(char *)(iVar16 + 0x25c51) = (char)(param_4 & 2);
              *(undefined1 *)(iVar16 + 0x25c53) = 0;
              *(int *)(iVar16 + 0x25c70) = iStack_48;
              *(int *)(iVar16 + 0x25c74) = iStack_44;
              if (lVar6 == 0) {
                if (((ram0x000136b0 != 0) ||
                    ((((param_4 & 2) == 0 || ((_DAT_00017680 & 2) != 0)) &&
                     (((param_4 & 1) == 0 || ((_DAT_00017680 & 1) != 0)))))) &&
                   (lVar6 = FUN_00010b78(param_1,param_2,iStack_48,0), lVar6 == 0)) {
                  *(undefined4 *)(iVar16 + 0x25c78) = *(undefined4 *)(puStack_34 + 8);
                  *(undefined4 *)(iVar16 + 0x25c7c) = *(undefined4 *)(puStack_34 + 10);
                  if (((_DAT_00017680 & 0x20) == 0) || (ram0x000136b0 != 0)) {
                    if ((param_4 & 2) != 0) {
                      iVar13 = 0;
                      iVar10 = 0;
                      do {
                        if (((((*(char *)(iVar10 + 0x25c50) != '\0') &&
                              (*(short *)(iVar10 + 0x25c56) == param_1)) &&
                             (*(short *)(iVar10 + 0x25c58) == param_2)) &&
                            ((*(int *)(iVar10 + 0x25c70) == iStack_48 &&
                             (*(int *)(iVar10 + 0x25c74) == iStack_44)))) &&
                           (*(char *)(iVar10 + 0x25c51) != '\0')) {
                          halt_baddata();
                        }
                        iVar13 = iVar13 + 1;
                        iVar10 = iVar10 + 0x30;
                      } while (iVar13 < 3);
                    }
                    if ((param_4 & 0x200) != 0) {
                      FUN_0000a5b0(param_1,param_2,iStack_48,iStack_44);
                    // WARNING: Subroutine does not return
                      FUN_0000fdac(param_1,param_2);
                    }
                    *(undefined4 *)(iVar16 + 0x25c64) = DAT_00017690;
                    bVar12 = 0;
                    *(undefined4 *)(iVar16 + 0x25c60) = DAT_00017684;
                    *(undefined4 *)(iVar16 + 0x25c68) = *(undefined4 *)(iVar16 + 0x25c64);
                    if (*(char *)(iVar16 + 0x25c52) != '\0') {
                      bVar12 = (byte)DAT_00017680 & 1;
                    }
                    bVar9 = 0;
                    *(byte *)(iVar16 + 0x25c52) = bVar12;
                    if (*(char *)(iVar16 + 0x25c51) != '\0') {
                      bVar9 = (byte)(DAT_00017680 >> 1) & 1;
                    }
                    *(byte *)(iVar16 + 0x25c51) = bVar9;
                    *puVar14 = 1;
                    *(undefined1 *)(iVar16 + 0x25c54) = 1;
                  }
                  else if ((_DAT_00017680 & 5) == 5) {
                    *(undefined4 *)(iVar16 + 0x25c64) = DAT_00017690;
                    uVar1 = DAT_00017684;
                    *(undefined1 *)(iVar16 + 0x25c52) = 0;
                    *(undefined1 *)(iVar16 + 0x25c51) = 0;
                    *(undefined1 *)(iVar16 + 0x25c53) = 0;
                    *(undefined1 *)(iVar16 + 0x25c54) = 1;
                    *puVar14 = 1;
                    *(undefined4 *)(iVar16 + 0x25c60) = uVar1;
                    *(undefined4 *)(iVar16 + 0x25c68) = *(undefined4 *)(iVar16 + 0x25c64);
                  }
                }
              }
              else {
                *(int *)(iVar16 + 0x25c78) = iStack_48;
                *(int *)(iVar16 + 0x25c7c) = iStack_44;
                lVar6 = FUN_00010b78(param_1,param_2,*(undefined4 *)(iVar16 + 0x25c78),
                                     *(undefined4 *)(iVar16 + 0x25c7c));
                if (lVar6 == 0) {
                  puVar11 = &DAT_00017880;
                  puVar5 = puStack_38;
                  do {
                    uVar1 = *(undefined4 *)(puVar5 + 2);
                    uVar2 = *(undefined4 *)(puVar5 + 4);
                    uVar3 = *(undefined4 *)(puVar5 + 6);
                    *puVar11 = *(undefined4 *)puVar5;
                    puVar11[1] = uVar1;
                    puVar11[2] = uVar2;
                    puVar11[3] = uVar3;
                    puVar5 = puVar5 + 8;
                    puVar11 = puVar11 + 4;
                  } while (puVar5 != puStack_38 + 0x100);
                  iVar10 = -1;
                  if (DAT_00017884 == iStack_40) {
                    // WARNING: Unimplemented instruction - Truncating control flow here
                    halt_unimplemented();
                  }
                  while( true ) {
                    lVar6 = FUN_00000140(param_3 + iVar10 + 1,0x2f);
                    if (lVar6 < 0) break;
                    iVar10 = iVar10 + 1 + (int)lVar6;
                  }
                  lVar6 = 0;
                  if (((param_4 & 0x40) == 0) ||
                     (lVar6 = FUN_000072a8(param_1,param_2,1), -1 < lVar6)) {
                    uVar7 = FUN_0000fd14();
                    FUN_00002490(&DAT_00017898);
                    lVar8 = FUN_00010b78(param_1,param_2,DAT_00017890,iStack_40);
                    if (lVar8 == 0) {
                      FUN_00000478(puStack_34,0x200,0);
                      FUN_0001338c(puStack_34 + 0x20,param_3 + iVar10 + 1,0x20);
                      uVar1 = DAT_0001789c;
                      *(undefined4 *)(puStack_34 + 4) = DAT_00017898;
                      *(undefined4 *)(puStack_34 + 6) = uVar1;
                      uVar1 = DAT_0001789c;
                      *(undefined4 *)(puStack_34 + 0xc) = DAT_00017898;
                      *(undefined4 *)(puStack_34 + 0xe) = uVar1;
                      FUN_0000fcf8();
                      FUN_0000fd2c(uVar7);
                      uVar15 = param_4;
                      if (ram0x000136b0 == 0) {
                        uVar15 = param_4 & 0xffffffffffffdfff;
                      }
                      uVar4 = (ushort)uVar15;
                      if ((param_4 & 0x40) == 0) {
                        *puStack_34 = uVar4 & 0x2000 | 0x8417 | uVar4 & 0x1800;
                        puStack_34[8] = 0xffff;
                        puStack_34[9] = 0xffff;
                        *(undefined4 *)(iVar16 + 0x25c70) = DAT_00017890;
                        *(int *)(iVar16 + 0x25c74) = iStack_40;
                        lVar6 = FUN_00010b78(param_1,param_2,*(undefined4 *)(iVar16 + 0x25c78),
                                             *(undefined4 *)(iVar16 + 0x25c7c));
                        if (lVar6 == 0) {
                          puVar11 = &DAT_00017880;
                          puVar5 = puStack_38;
                          do {
                            uVar1 = puVar11[1];
                            uVar2 = puVar11[2];
                            uVar3 = puVar11[3];
                            *(undefined4 *)puVar5 = *puVar11;
                            *(undefined4 *)(puVar5 + 2) = uVar1;
                            *(undefined4 *)(puVar5 + 4) = uVar2;
                            *(undefined4 *)(puVar5 + 6) = uVar3;
                            puVar11 = puVar11 + 4;
                            puVar5 = puVar5 + 8;
                          } while (puVar11 != &DAT_00017a80);
                          FUN_0000fcf8();
                    // WARNING: Subroutine does not return
                          FUN_0000fdac(param_1,param_2);
                        }
                      }
                      else {
                        *puStack_34 = uVar4 & 0x2000 | 0x8427 | uVar4 & 0x1800;
                        puStack_34[2] = 2;
                        puStack_34[3] = 0;
                        *(int *)(puStack_34 + 8) = (int)lVar6;
                        lVar6 = FUN_00006cbc(param_1,param_2,DAT_00017890,iStack_40);
                        if ((lVar6 == 0) &&
                           (lVar6 = FUN_00010b78(param_1,param_2,*(undefined4 *)(iVar16 + 0x25c78),
                                                 *(undefined4 *)(iVar16 + 0x25c7c)), lVar6 == 0)) {
                          puVar11 = &DAT_00017880;
                          puVar5 = puStack_38;
                          do {
                            uVar1 = puVar11[1];
                            uVar2 = puVar11[2];
                            uVar3 = puVar11[3];
                            *(undefined4 *)puVar5 = *puVar11;
                            *(undefined4 *)(puVar5 + 2) = uVar1;
                            *(undefined4 *)(puVar5 + 4) = uVar2;
                            *(undefined4 *)(puVar5 + 6) = uVar3;
                            puVar11 = puVar11 + 4;
                            puVar5 = puVar5 + 8;
                          } while (puVar11 != &DAT_00017a80);
                          FUN_0000fcf8();
                    // WARNING: Subroutine does not return
                          FUN_0000fdac(param_1,param_2);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00009d88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_30;
  int iStack_2c;
  
  lVar5 = FUN_000004d0(param_3);
  if (lVar5 != 0) {
    uStack_38 = 0xffffffff;
    iVar3 = (int)param_1 * 0x630 + (int)param_2 * 0x18c;
    lVar5 = FUN_00008b00(param_1,param_2,param_3,&uStack_40);
    if ((-1 < lVar5) && (1 < (int)lVar5 - 1U)) {
      uVar1 = *(undefined4 *)(&DAT_00025ce0 + iVar3 + 0x164);
      uVar2 = *(undefined4 *)(&DAT_00025ce0 + iVar3 + 0x168);
      *(undefined4 *)(&DAT_00025ce0 + iVar3 + 0x164) = uStack_40;
      *(undefined4 *)(&DAT_00025ce0 + iVar3 + 0x168) = uStack_3c;
      lVar5 = FUN_0001336c(iStack_30 + 0x40,&DAT_00013624);
      if ((lVar5 != 0) ||
         (lVar5 = FUN_00010b78(param_1,param_2,*(undefined4 *)(iStack_30 + 0x10),0), lVar5 == 0)) {
        lVar5 = FUN_0001336c(iStack_30 + 0x40,&DAT_00013620);
        uVar7 = uStack_40;
        if (lVar5 == 0) {
          *(undefined4 *)(&DAT_00025ce0 + iVar3 + 0x164) = *(undefined4 *)(iStack_30 + 0x10);
          *(undefined4 *)(&DAT_00025ce0 + iVar3 + 0x168) = *(undefined4 *)(iStack_30 + 0x14);
          uVar7 = *(undefined4 *)(iStack_30 + 0x10);
          lVar5 = FUN_00010b78(param_1,param_2,uVar7,*(undefined4 *)(iStack_30 + 0x14));
          if (lVar5 != 0) {
            halt_baddata();
          }
        }
        lVar5 = FUN_00010b78(param_1,param_2,uVar7,*(undefined4 *)(&DAT_00025ce0 + iVar3 + 0x168));
        if ((lVar5 == 0) &&
           (lVar5 = FUN_00010b78(param_1,param_2,*(undefined4 *)(iStack_2c + 0x10),0), lVar5 == 0))
        {
          if ((*(int *)(&DAT_00025ce0 + iVar3 + 0x164) == *(int *)(iStack_2c + 0x10)) &&
             (*(int *)(&DAT_00025ce0 + iVar3 + 0x168) == *(int *)(iStack_2c + 0x14))) {
            *param_4 = 0;
            do {
              lVar5 = FUN_0001336c(iStack_30 + 0x40,&DAT_00013620);
              if (lVar5 == 0) {
                FUN_0001337c(iStack_30 + 0x40);
                for (iVar3 = FUN_0001337c(param_4); -1 < iVar3; iVar3 = iVar3 + -1) {
                  (param_4 + iVar3)[1] = param_4[iVar3];
                }
                *param_4 = 0x2f;
                halt_baddata();
              }
              uVar6 = FUN_0001337c(iStack_30 + 0x40);
              iVar3 = 0x20;
              if (uVar6 < 0x20) {
                iVar3 = FUN_0001337c(iStack_30 + 0x40);
              }
              lVar5 = FUN_0001337c(param_4);
              if (lVar5 == 0) {
                FUN_0001338c(param_4,iStack_30 + 0x40,0x20);
                param_4[0x20] = 0;
              }
              else {
                for (iVar4 = FUN_0001337c(param_4); -1 < iVar4; iVar4 = iVar4 + -1) {
                  param_4[iVar4 + iVar3 + 1] = param_4[iVar4];
                }
                param_4[iVar3] = 0x2f;
                FUN_0001338c(param_4,iStack_30 + 0x40,iVar3);
              }
              lVar5 = FUN_00010b78(param_1,param_2,uVar7,0);
              if (lVar5 != 0) {
                halt_baddata();
              }
              uVar7 = *(undefined4 *)(iStack_30 + 0x10);
              lVar5 = FUN_00010b78(param_1,param_2,uVar7,*(undefined4 *)(iStack_30 + 0x14));
            } while (lVar5 == 0);
          }
          else {
            *(undefined4 *)(&DAT_00025ce0 + iVar3 + 0x164) = uVar1;
            *(undefined4 *)(&DAT_00025ce0 + iVar3 + 0x168) = uVar2;
          }
        }
      }
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered unimplemented instructions

void FUN_0000a104(void)

{
                    // WARNING: Unimplemented instruction - Truncating control flow here
  halt_unimplemented();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000a5b0(short param_1,short param_2,int param_3,int param_4)

{
  ushort uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int in_stack_00000010;
  ushort *puStack_28;
  
  lVar2 = FUN_00010b78();
  if ((lVar2 == 0) &&
     (((char)puStack_28[0x20] != '.' ||
      ((*(char *)((int)puStack_28 + 0x41) != '\0' && (*(char *)((int)puStack_28 + 0x41) != '.'))))))
  {
    iVar4 = 0;
    iVar3 = iVar4;
    while ((((*(char *)(iVar3 + 0x25c50) == '\0' || (*(short *)(iVar3 + 0x25c56) != param_1)) ||
            (*(short *)(iVar3 + 0x25c58) != param_2)) ||
           ((*(int *)(iVar3 + 0x25c70) != param_3 || (*(int *)(iVar3 + 0x25c74) != param_4))))) {
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x30;
      if (2 < iVar4) {
        if (in_stack_00000010 == 0) {
          uVar1 = *puStack_28 & 0x7fff;
        }
        else {
          uVar1 = *puStack_28 | 0x8000;
        }
        *puStack_28 = uVar1;
        FUN_0000fcf8();
                    // WARNING: Subroutine does not return
        FUN_0000fdac(param_1,param_2);
      }
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0000a87c(undefined8 param_1,undefined8 param_2,int param_3,short param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  int in_stack_00000010;
  undefined4 *in_stack_00000014;
  int iStack_38;
  int iStack_34;
  undefined4 uStack_30;
  ushort *puStack_28;
  int iStack_24;
  
  if (param_4 == 0) {
    FUN_0001338c(&DAT_00017a88,param_3,0x3ff);
    DAT_00017e87 = 0;
    iVar3 = -1;
    while( true ) {
      lVar2 = FUN_00000140(&DAT_00017a89 + iVar3,0x2f);
      if (lVar2 < 0) break;
      iVar3 = iVar3 + 1 + (int)lVar2;
    }
    if (iVar3 < 1) {
      if (iVar3 == 0) {
        DAT_00017a89 = 0;
      }
      else {
        DAT_00017a88 = 0;
      }
    }
    else {
      (&DAT_00017a88)[iVar3] = 0;
    }
    DAT_00017e88 = param_3 + iVar3 + 1;
    uStack_30 = 0xffffffff;
    lVar2 = FUN_00008b00(param_1,param_2,&DAT_00017a88,&iStack_38);
    if (0 < lVar2) {
      halt_baddata();
    }
    if (lVar2 < 0) {
      halt_baddata();
    }
    lVar2 = FUN_00010b78(param_1,param_2,*(undefined4 *)(puStack_28 + 8),
                         *(undefined4 *)(puStack_28 + 10));
    if (lVar2 != 0) {
      halt_baddata();
    }
    if (iStack_38 != *(int *)(iStack_24 + 0x10)) {
      halt_baddata();
    }
    if (iStack_34 != *(int *)(iStack_24 + 0x14)) {
      halt_baddata();
    }
    if ((*puStack_28 & 0x20) == 0) {
      DAT_00013800 = 0xffffffff;
      halt_baddata();
    }
    DAT_00013800 = *(int *)(puStack_28 + 8);
    DAT_00017a84 = *(int *)(puStack_28 + 2);
    if ((DAT_00013800 == *(int *)((int)param_2 * 0x18c + (int)param_1 * 0x630 + 0x25d1c)) &&
       (*(int *)(puStack_28 + 10) == 0)) {
      DAT_00017a80 = 2;
    }
    else {
      DAT_00017a80 = 0;
    }
  }
  else if (DAT_00013800 < 0) {
    halt_baddata();
  }
  if (in_stack_00000010 != 0) {
    do {
      if (DAT_00017a84 <= DAT_00017a80) {
        halt_baddata();
      }
      lVar2 = FUN_00010b78(param_1,param_2,DAT_00013800);
      if (lVar2 != 0) {
        halt_baddata();
      }
      DAT_00017a80 = DAT_00017a80 + 1;
      if (((*puStack_28 & 0x8000) != 0) &&
         ((((*puStack_28 & 0x2000) == 0 || (ram0x000136b0 != 0)) &&
          (lVar2 = FUN_000005b0(puStack_28 + 0x20,DAT_00017e88), lVar2 != 0)))) {
        if (in_stack_00000010 < 0) {
          in_stack_00000014 = in_stack_00000014 + 0x10;
        }
        else {
          FUN_00000478(in_stack_00000014,0x40,0);
          if (DAT_00017a80 == 2) {
            lVar2 = FUN_00010b78(param_1,param_2,DAT_00013800,0);
            if (lVar2 != 0) {
              halt_baddata();
            }
            lVar2 = FUN_00010b78(param_1,param_2,*(undefined4 *)(puStack_28 + 8),0);
            if (lVar2 != 0) {
              halt_baddata();
            }
            lVar2 = FUN_00010b78(param_1,param_2,*(undefined4 *)(puStack_28 + 8),
                                 *(undefined4 *)(puStack_28 + 10));
            if (lVar2 != 0) {
              halt_baddata();
            }
            *(undefined2 *)(in_stack_00000014 + 8) = 0x2e2e;
            *(undefined1 *)((int)in_stack_00000014 + 0x22) = 0;
          }
          else if (DAT_00017a80 == 1) {
            lVar2 = FUN_00010b78(param_1,param_2,DAT_00013800,0);
            if (lVar2 != 0) {
              halt_baddata();
            }
            lVar2 = FUN_00010b78(param_1,param_2,*(undefined4 *)(puStack_28 + 8),
                                 *(undefined4 *)(puStack_28 + 10));
            if (lVar2 != 0) {
              halt_baddata();
            }
            *(undefined2 *)(in_stack_00000014 + 8) = 0x2e;
          }
          else {
            FUN_0001338c(in_stack_00000014 + 8,puStack_28 + 0x20,0x20);
          }
          *(ushort *)(in_stack_00000014 + 5) = *puStack_28;
          *(ushort *)((int)in_stack_00000014 + 0x16) = puStack_28[1];
          in_stack_00000014[6] = *(undefined4 *)(puStack_28 + 0x10);
          uVar1 = *(undefined4 *)(puStack_28 + 6);
          *in_stack_00000014 = *(undefined4 *)(puStack_28 + 4);
          in_stack_00000014[1] = uVar1;
          uVar1 = *(undefined4 *)(puStack_28 + 0xe);
          in_stack_00000014[2] = *(undefined4 *)(puStack_28 + 0xc);
          in_stack_00000014[3] = uVar1;
          if ((*puStack_28 & 0x20) == 0) {
            in_stack_00000014[4] = *(undefined4 *)(puStack_28 + 2);
          }
          in_stack_00000014 = in_stack_00000014 + 0x10;
          in_stack_00000010 = in_stack_00000010 + -1;
        }
      }
    } while (in_stack_00000010 != 0);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0000ad40(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ushort *puStack_28;
  
  lVar3 = FUN_000004d0(param_3);
  if ((((lVar3 != 0) && (lVar3 = FUN_00008b00(param_1,param_2,param_3,&uStack_38), lVar3 != 3)) &&
      (lVar3 < 1)) && (-1 < lVar3)) {
    if (param_4 == 0) {
      if ((*puStack_28 & 0x8000) == 0) {
        halt_baddata();
      }
    }
    else if ((*puStack_28 & 0x8000) != 0) {
      halt_baddata();
    }
    if ((((ram0x000136b0 != 0) || (param_4 != 0)) || ((*puStack_28 & 2) != 0)) &&
       ((*(int *)(puStack_28 + 8) != 0 || (*(int *)(puStack_28 + 10) != 0)))) {
      if ((param_4 == 0) && ((*puStack_28 & 0x20) != 0)) {
        iVar4 = 2;
        iVar1 = *(int *)(puStack_28 + 2);
        uVar2 = *(undefined4 *)(puStack_28 + 8);
        if (2 < iVar1) {
          do {
            lVar3 = FUN_00010b78(param_1,param_2,uVar2,iVar4);
            if (lVar3 != 0) {
              halt_baddata();
            }
            iVar4 = iVar4 + 1;
            if ((*puStack_28 & 0x8000) != 0) {
              halt_baddata();
            }
          } while (iVar4 < iVar1);
        }
      }
      lVar3 = FUN_0000a5b0(param_1,param_2,uStack_38,uStack_34);
      if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
        FUN_0000fdac(param_1,param_2);
      }
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000af74(undefined8 param_1,undefined8 param_2)

{
  short sVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int aiStack_30 [12];
  
  iVar2 = (int)param_1 * 0x630 + (int)param_2 * 0x18c;
  lVar3 = FUN_0000350c(param_1,param_2,
                       (longlong)*(int *)(&DAT_00025ce0 + iVar2 + 0x44) *
                       (longlong)(int)*(short *)(&DAT_00025ce0 + iVar2 + 0x2c),&DAT_00025830);
  uVar8 = DAT_00025830;
  if ((((&DAT_00025ce0)[iVar2 + 0x151] & 0x10) != 0) && (DAT_00025830 == 0)) {
    uVar8 = 0xffffffff;
  }
  if (uVar8 != 0xffffffff) {
    uVar8 = uVar8 & 0x7fffffff;
  }
  lVar4 = FUN_0000350c(param_1,param_2,
                       *(int *)(&DAT_00025ce0 + iVar2 + 0x44) *
                       (int)*(short *)(&DAT_00025ce0 + iVar2 + 0x2c) + 1,&DAT_00025830);
  uVar5 = DAT_00025830;
  if ((((&DAT_00025ce0)[iVar2 + 0x151] & 0x10) != 0) && (DAT_00025830 == 0)) {
    uVar5 = 0xffffffff;
  }
  if (uVar5 != 0xffffffff) {
    uVar5 = uVar5 & 0x7fffffff;
  }
  if ((((uVar8 == 0xffffffff) || (uVar5 != 0xffffffff)) && (-1 < lVar3)) && (-1 < lVar4)) {
    if ((uVar8 == 0xffffffff) && (uVar5 == 0xffffffff)) {
      halt_baddata();
    }
    iVar6 = *(int *)(&DAT_00025ce0 + iVar2 + 0x15c);
    iVar7 = 0;
    if (0 < iVar6) {
      do {
        lVar3 = FUN_000108dc(param_1,param_2,*(int *)(&DAT_00025ce0 + iVar2 + 0x40) * iVar6 + iVar7,
                             aiStack_30);
        if (lVar3 != 0) {
          halt_baddata();
        }
        *(undefined1 *)(aiStack_30[0] + 0xc) = 1;
        sVar1 = *(short *)(&DAT_00025ce0 + iVar2 + 0x2a);
        lVar3 = 0;
        if (0 < *(short *)(&DAT_00025ce0 + iVar2 + 0x2a)) {
          do {
            iVar6 = (int)lVar3;
            lVar3 = (longlong)(iVar6 + 1);
            *(int *)(&DAT_00026b40 + (iVar7 * sVar1 + iVar6) * 4) =
                 *(int *)(aiStack_30[0] + 4) + iVar6 * *(short *)(&DAT_00025ce0 + iVar2 + 0x28);
            sVar1 = *(short *)(&DAT_00025ce0 + iVar2 + 0x2a);
          } while (lVar3 < *(short *)(&DAT_00025ce0 + iVar2 + 0x2a));
        }
        iVar6 = *(int *)(&DAT_00025ce0 + iVar2 + 0x15c);
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar6);
    }
    lVar3 = FUN_00002ba0(param_1,param_2,uVar8,&DAT_00026b40);
    if (lVar3 != 0) {
      halt_baddata();
    }
    sVar1 = *(short *)(&DAT_00025ce0 + iVar2 + 0x2c);
    lVar3 = 0;
    if (0 < *(short *)(&DAT_00025ce0 + iVar2 + 0x2c)) {
      do {
        iVar6 = (int)lVar3;
        lVar4 = FUN_00002e90(param_1,param_2,uVar8 * (int)sVar1 + iVar6,
                             *(undefined4 *)(&DAT_00026b40 + iVar6 * 4));
        lVar3 = (longlong)(iVar6 + 1);
        if (lVar4 != 0) {
          halt_baddata();
        }
        sVar1 = *(short *)(&DAT_00025ce0 + iVar2 + 0x2c);
      } while (lVar3 < *(short *)(&DAT_00025ce0 + iVar2 + 0x2c));
    }
    iVar6 = *(int *)(&DAT_00025ce0 + iVar2 + 0x15c);
    iVar7 = 0;
    if (0 < iVar6) {
      do {
        FUN_0000fc34(param_1,param_2,*(int *)(&DAT_00025ce0 + iVar2 + 0x40) * iVar6 + iVar7);
        iVar6 = *(int *)(&DAT_00025ce0 + iVar2 + 0x15c);
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar6);
    }
  }
  FUN_00002ba0(param_1,param_2,*(undefined4 *)(&DAT_00025ce0 + iVar2 + 0x44),0);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered unimplemented instructions

void FUN_0000b2e8(void)

{
                    // WARNING: Unimplemented instruction - Truncating control flow here
  halt_unimplemented();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000b688(undefined8 param_1,int param_2,int param_3)

{
  short sVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined *puVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined *puVar13;
  uint uVar14;
  int iVar15;
  
  puVar13 = &DAT_00025ce0 + (int)param_1 * 0x630 + param_2 * 0x18c;
  sVar1 = *(short *)(puVar13 + 0x28);
  lVar3 = (longlong)sVar1;
  iVar8 = param_3 * *(short *)(puVar13 + 0x2c);
  uVar14 = (uint)(int)sVar1 >> 2;
  if (lVar3 < 0) {
    lVar3 = (longlong)(int)((int)sVar1 + 0x7f);
  }
  iVar15 = (int)lVar3 >> 7;
  if (0 < *(int *)(puVar13 + 0x160)) {
    iVar12 = 0;
    puVar5 = puVar13;
    do {
      if (*(int *)(puVar5 + 0xd0) < 1) break;
      if (*(int *)(puVar5 + 0xd0) == param_3) goto LAB_0000bbf4;
      iVar12 = iVar12 + 1;
      puVar5 = puVar5 + 4;
    } while (iVar12 < 0x10);
  }
  iVar12 = 0x10;
  lVar3 = 0;
  if (0 < *(short *)(puVar13 + 0x2c)) {
    do {
      lVar4 = FUN_0000318c(param_1,param_2,(int)lVar3 + iVar8,&DAT_00025830);
      if (lVar4 != 0) {
        halt_baddata();
      }
      if ((((*(byte *)(param_2 * 0x18c + (int)param_1 * 0x630 + 0x25e31) & 1) != 0) &&
          (iVar2 = FUN_00005dec(param_1,param_2), *(char *)(iVar2 + 0x2693f) != -1)) &&
         (iVar2 = 0, 0 < iVar15)) {
        puVar11 = &DAT_00026940;
        puVar10 = &DAT_00025830;
        do {
          lVar4 = FUN_00004038(puVar10,puVar11);
          puVar11 = (undefined4 *)((int)puVar11 + 3);
          if (lVar4 != 0) goto LAB_0000b964;
          iVar2 = iVar2 + 1;
          puVar10 = puVar10 + 0x20;
        } while (iVar2 < iVar15);
      }
      lVar3 = (longlong)((int)lVar3 + 1);
    } while (lVar3 < *(short *)(puVar13 + 0x2c));
  }
  iVar15 = 0;
  if (uVar14 != 0) {
    puVar10 = &DAT_00025830;
    do {
      *puVar10 = 0x5a5aa5a5;
      iVar15 = iVar15 + 1;
      puVar10 = puVar10 + 1;
    } while (iVar15 < (int)uVar14);
  }
  uVar9 = 0;
  puVar10 = &DAT_00026940;
  do {
    *puVar10 = 0x5a5aa5a5;
    uVar9 = uVar9 + 1;
    puVar10 = puVar10 + 1;
  } while (uVar9 < 0x80);
  lVar3 = FUN_00002ba0(param_1,param_2,param_3,0);
  if (lVar3 == 0) {
    sVar1 = *(short *)(puVar13 + 0x2c);
    lVar3 = 0;
    if (0 < sVar1) {
      do {
        lVar4 = FUN_00002e90(param_1,param_2,(int)lVar3 + iVar8,&DAT_00025830);
        if (lVar4 != 0) {
          lVar3 = FUN_00003968(param_1,param_2);
          if (lVar3 != 0) {
            halt_baddata();
          }
          goto LAB_0000b964;
        }
        lVar3 = (longlong)((int)lVar3 + 1);
      } while (lVar3 < *(short *)(puVar13 + 0x2c));
      sVar1 = *(short *)(puVar13 + 0x2c);
    }
    lVar3 = 0;
    if (0 < sVar1) {
      do {
        lVar4 = FUN_0000318c(param_1,param_2,(int)lVar3 + iVar8,&DAT_00025830);
        if (lVar4 != 0) {
          halt_baddata();
        }
        iVar15 = 0;
        piVar6 = &DAT_00025830;
        if (uVar14 != 0) {
          do {
            if (*piVar6 != 0x5a5aa5a5) goto LAB_0000b964;
            iVar15 = iVar15 + 1;
            piVar6 = piVar6 + 1;
          } while (iVar15 < (int)uVar14);
        }
        uVar9 = 0;
        piVar6 = &DAT_00026940;
        do {
          if (*piVar6 != 0x5a5aa5a5) goto LAB_0000b964;
          uVar9 = uVar9 + 1;
          piVar6 = piVar6 + 1;
        } while (uVar9 < 0x80);
        lVar3 = (longlong)((int)lVar3 + 1);
      } while (lVar3 < *(short *)(puVar13 + 0x2c));
    }
    iVar15 = 0;
    if (uVar14 != 0) {
      puVar10 = &DAT_00025830;
      do {
        *puVar10 = 0xa5a55a5a;
        iVar15 = iVar15 + 1;
        puVar10 = puVar10 + 1;
      } while (iVar15 < (int)uVar14);
    }
    uVar9 = 0;
    puVar10 = &DAT_00026940;
    do {
      *puVar10 = 0xa5a55a5a;
      uVar9 = uVar9 + 1;
      puVar10 = puVar10 + 1;
    } while (uVar9 < 0x80);
    lVar3 = FUN_00002ba0(param_1,param_2,param_3,0);
    if (lVar3 == 0) {
      sVar1 = *(short *)(puVar13 + 0x2c);
      lVar3 = 0;
      if (0 < sVar1) {
        do {
          lVar4 = FUN_00002e90(param_1,param_2,(int)lVar3 + iVar8,&DAT_00025830);
          if (lVar4 != 0) {
            lVar3 = FUN_00003968(param_1,param_2);
            iVar12 = -1;
            if (lVar3 != 0) {
              halt_baddata();
            }
            goto LAB_0000bbf4;
          }
          lVar3 = (longlong)((int)lVar3 + 1);
        } while (lVar3 < *(short *)(puVar13 + 0x2c));
        sVar1 = *(short *)(puVar13 + 0x2c);
      }
      lVar3 = 0;
      if (0 < sVar1) {
        do {
          lVar4 = FUN_0000318c(param_1,param_2,(int)lVar3 + iVar8,&DAT_00025830);
          if (lVar4 != 0) {
            halt_baddata();
          }
          iVar15 = 0;
          piVar6 = &DAT_00025830;
          if (uVar14 != 0) {
            do {
              if (*piVar6 != -0x5a5aa5a6) goto LAB_0000b964;
              iVar15 = iVar15 + 1;
              piVar6 = piVar6 + 1;
            } while (iVar15 < (int)uVar14);
          }
          uVar9 = 0;
          piVar6 = &DAT_00026940;
          do {
            if (*piVar6 != -0x5a5aa5a6) goto LAB_0000b964;
            uVar9 = uVar9 + 1;
            piVar6 = piVar6 + 1;
          } while (uVar9 < 0x80);
          lVar3 = (longlong)((int)lVar3 + 1);
        } while (lVar3 < *(short *)(puVar13 + 0x2c));
      }
      goto LAB_0000bbf4;
    }
    lVar3 = FUN_00003968(param_1,param_2);
  }
  else {
    lVar3 = FUN_00003968(param_1,param_2);
  }
  if (lVar3 != 0) {
    halt_baddata();
  }
LAB_0000b964:
  iVar12 = -1;
LAB_0000bbf4:
  if (iVar12 == 0x10) {
    FUN_00002ba0(param_1,param_2,param_3,0);
  }
  else {
    uVar7 = 0xffffffff;
    if ((puVar13[0x151] & 0x10) == 0) {
      uVar7 = 0;
    }
    iVar15 = 0;
    if (uVar14 != 0) {
      puVar10 = &DAT_00025830;
      do {
        *puVar10 = uVar7;
        iVar15 = iVar15 + 1;
        puVar10 = puVar10 + 1;
      } while (iVar15 < (int)uVar14);
    }
    uVar14 = 0;
    puVar10 = &DAT_00026940;
    do {
      *puVar10 = uVar7;
      uVar14 = uVar14 + 1;
      puVar10 = puVar10 + 1;
    } while (uVar14 < 0x80);
    lVar3 = 0;
    if (0 < *(short *)(puVar13 + 0x2c)) {
      do {
        lVar4 = FUN_00002e90(param_1,param_2,(int)lVar3 + iVar8,&DAT_00025830);
        if ((lVar4 != 0) && (lVar4 = FUN_00003968(param_1,param_2), lVar4 != 0)) {
          halt_baddata();
        }
        lVar3 = (longlong)((int)lVar3 + 1);
      } while (lVar3 < *(short *)(puVar13 + 0x2c));
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000bd18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int in_stack_00000010;
  ushort *puStack_30;
  int aiStack_2c [11];
  
  if (in_stack_00000010 == 0) {
    lVar2 = FUN_00010b78();
    if (lVar2 != 0) {
      halt_baddata();
    }
    if ((*puStack_30 & 0x20) == 0) goto LAB_0000beb4;
    aiStack_2c[0] = *(int *)(puStack_30 + 8);
    iVar4 = *(int *)(puStack_30 + 2);
  }
  else {
    aiStack_2c[0] = (int)param_3;
    iVar4 = in_stack_00000010;
  }
  lVar2 = FUN_000110a4(param_1,param_2,aiStack_2c[0],aiStack_2c);
  if (lVar2 != 0) {
    halt_baddata();
  }
  iVar3 = 2;
  if (aiStack_2c[0] < 0) {
    bVar1 = 2 < iVar4;
    do {
      if (!bVar1) break;
      lVar2 = FUN_00010b78(param_1,param_2,aiStack_2c[0],0);
      if (lVar2 != 0) {
        halt_baddata();
      }
      if ((*puStack_30 & 0x8000) != 0) {
        FUN_0000bd18(param_1,param_2,aiStack_2c[0],0);
      }
      iVar3 = iVar3 + 1;
      if (iVar4 <= iVar3) break;
      lVar2 = FUN_00010b78(param_1,param_2,aiStack_2c[0],1);
      if (lVar2 != 0) {
        halt_baddata();
      }
      if ((*puStack_30 & 0x8000) != 0) {
        FUN_0000bd18(param_1,param_2,aiStack_2c[0],1);
      }
      lVar2 = FUN_000110a4(param_1,param_2,aiStack_2c[0],aiStack_2c);
      if (lVar2 != 0) {
        halt_baddata();
      }
      bVar1 = iVar3 < iVar4;
    } while (aiStack_2c[0] < 0);
  }
  if (in_stack_00000010 != 0) {
    halt_baddata();
  }
LAB_0000beb4:
  FUN_0000a5b0(param_1,param_2,param_3,param_4);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0000bef8(short param_1,short param_2,char *param_3,char *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 *puVar8;
  ushort *puVar9;
  int iVar10;
  int iVar11;
  int iStack_88;
  int iStack_84;
  undefined4 uStack_80;
  int iStack_78;
  int iStack_74;
  undefined4 uStack_70;
  undefined1 auStack_68 [32];
  undefined1 auStack_48 [72];
  
  if (((*param_3 != '\0') && (*param_4 != '\0')) && (lVar5 = FUN_0001337c(param_4), lVar5 < 0x20)) {
    uStack_80 = 0xffffffff;
    uStack_70 = 0xffffffff;
    DAT_00017e8c = (ushort *)0x0;
    lVar5 = FUN_00008b00(param_1,param_2,param_3,&iStack_88);
    if (-1 < lVar5) {
      puVar4 = DAT_00017e8c + 0x100;
      if (DAT_00017e8c != (ushort *)0x0) {
        puVar8 = &DAT_00017e90;
        do {
          uVar1 = *(undefined4 *)(DAT_00017e8c + 2);
          uVar2 = *(undefined4 *)(DAT_00017e8c + 4);
          uVar3 = *(undefined4 *)(DAT_00017e8c + 6);
          *puVar8 = *(undefined4 *)DAT_00017e8c;
          puVar8[1] = uVar1;
          puVar8[2] = uVar2;
          puVar8[3] = uVar3;
          DAT_00017e8c = DAT_00017e8c + 8;
          puVar8 = puVar8 + 4;
        } while (DAT_00017e8c != puVar4);
      }
      DAT_00017e8c = (ushort *)0x0;
      lVar6 = FUN_00008b00(param_1,param_2,param_4,&iStack_78);
      if (-1 < lVar6) {
        if (DAT_00017e8c != (ushort *)0x0) {
          puVar8 = &DAT_00018090;
          puVar9 = DAT_00017e8c + 0x100;
          puVar4 = DAT_00017e8c;
          do {
            uVar1 = *(undefined4 *)(puVar4 + 2);
            uVar2 = *(undefined4 *)(puVar4 + 4);
            uVar3 = *(undefined4 *)(puVar4 + 6);
            *puVar8 = *(undefined4 *)puVar4;
            puVar8[1] = uVar1;
            puVar8[2] = uVar2;
            puVar8[3] = uVar3;
            puVar4 = puVar4 + 8;
            puVar8 = puVar8 + 4;
          } while (puVar4 != puVar9);
        }
        if (((1 < (int)lVar5 - 1U) && (lVar6 != 2)) && ((lVar5 != 3 && (lVar6 != 3)))) {
          iVar10 = iStack_78;
          if (lVar6 != 0) {
            lVar7 = FUN_00010b78(param_1,param_2,iStack_78,iStack_74);
            if (lVar7 != 0) {
              halt_baddata();
            }
            iVar10 = *(int *)(DAT_00017e8c + 8);
          }
          if (iStack_88 == iVar10) {
            iVar10 = -1;
            if (lVar6 == 1) {
              while( true ) {
                lVar5 = FUN_00000140(param_4 + iVar10 + 1,0x2f);
                if (lVar5 < 0) break;
                iVar10 = iVar10 + 1 + (int)lVar5;
              }
              FUN_00013374(auStack_48,param_4 + iVar10 + 1);
              lVar5 = FUN_00007a18(param_1,param_2,param_3,auStack_68);
              if (lVar5 == 0) {
                    // WARNING: Subroutine does not return
                FUN_0000fdac(param_1,param_2);
              }
            }
            else if ((iStack_84 != iStack_74) &&
                    (((ushort)DAT_00017e90 & 0x20) == ((ushort)DAT_00018090 & 0x20))) {
              iVar10 = 2;
              if ((((ushort)DAT_00017e90 & 0x20) != 0) && (2 < DAT_00018094)) {
                do {
                  lVar6 = FUN_00010b78(param_1,param_2,DAT_000180a0,iVar10);
                  if (lVar6 != 0) {
                    halt_baddata();
                  }
                  iVar10 = iVar10 + 1;
                  if ((*DAT_00017e8c & 0x8000) != 0) {
                    halt_baddata();
                  }
                } while (iVar10 < DAT_00018094);
              }
              iVar11 = 0;
              iVar10 = 0;
              do {
                if ((((*(char *)(iVar10 + 0x25c50) != '\0') &&
                     (*(short *)(iVar10 + 0x25c56) == param_1)) &&
                    (*(short *)(iVar10 + 0x25c58) == param_2)) &&
                   ((*(int *)(iVar10 + 0x25c70) == iStack_78 &&
                    (*(int *)(iVar10 + 0x25c74) == iStack_74)))) {
                  halt_baddata();
                }
                iVar11 = iVar11 + 1;
                iVar10 = iVar10 + 0x30;
              } while (iVar11 < 3);
              if (((ram0x000136b0 != 0) || (((ushort)DAT_00018090 & 2) != 0)) &&
                 ((FUN_00010b78(param_1,param_2,iStack_88,iStack_84), -1 < lVar5 && (lVar5 < 1)))) {
                *DAT_00017e8c = *DAT_00017e8c & 0x7fff;
                FUN_0000fcf8();
                lVar5 = FUN_00010b78(param_1,param_2,iStack_78,iStack_74);
                if ((-1 < lVar5) && (lVar5 < 1)) {
                  puVar8 = &DAT_00017e90;
                  puVar4 = DAT_00017e8c;
                  do {
                    uVar1 = puVar8[1];
                    uVar2 = puVar8[2];
                    uVar3 = puVar8[3];
                    *(undefined4 *)puVar4 = *puVar8;
                    *(undefined4 *)(puVar4 + 2) = uVar1;
                    *(undefined4 *)(puVar4 + 4) = uVar2;
                    *(undefined4 *)(puVar4 + 6) = uVar3;
                    uVar2 = DAT_000180d8;
                    uVar1 = DAT_000180d4;
                    puVar9 = DAT_00017e8c;
                    puVar8 = puVar8 + 4;
                    puVar4 = puVar4 + 8;
                  } while (puVar8 != &DAT_00018090);
                  *(undefined4 *)(DAT_00017e8c + 0x20) = DAT_000180d0;
                  *(undefined4 *)(puVar9 + 0x22) = uVar1;
                  *(undefined4 *)(puVar9 + 0x24) = uVar2;
                  uVar2 = DAT_000180e4;
                  uVar1 = DAT_000180e0;
                  *(undefined4 *)(puVar9 + 0x26) = DAT_000180dc;
                  *(undefined4 *)(puVar9 + 0x28) = uVar1;
                  *(undefined4 *)(puVar9 + 0x2a) = uVar2;
                  uVar1 = DAT_000180ec;
                  *(undefined4 *)(puVar9 + 0x2c) = DAT_000180e8;
                  *(undefined4 *)(puVar9 + 0x2e) = uVar1;
                  FUN_0000fcf8();
                  if (((ushort)DAT_00017e90 & 0x20) != 0) {
                    lVar5 = FUN_00010b78(param_1,param_2,DAT_00017ea0,0);
                    if (lVar5 < 0) {
                      halt_baddata();
                    }
                    *(int *)(DAT_00017e8c + 10) = iStack_74;
                    FUN_0000fcf8();
                  }
                    // WARNING: Subroutine does not return
                  FUN_0000fdac(param_1,param_2);
                }
              }
            }
          }
        }
      }
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000c5d0(void)

{
  FUN_000025b0();
  FUN_000133dc(300);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000c5f8(void)

{
  uint *puVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  FUN_00013354(&DAT_000182d8,0,0x94);
  iVar2 = 0;
  puVar1 = &DAT_000182ec;
  puVar3 = &DAT_000182dc;
  do {
    *puVar3 = 5;
    puVar3[1] = 5;
    puVar3[2] = 0xc0;
    puVar3[3] = 0xff;
    puVar3 = puVar3 + 4;
    *(undefined1 *)((int)puVar1 + 2) = 2;
    *(undefined2 *)puVar1 = 500;
    iVar2 = iVar2 + 1;
    *puVar1 = *puVar1 & 0xfcffffff;
    puVar1 = puVar1 + 1;
  } while (iVar2 < 4);
  DAT_0001834c = &DAT_00018370;
  DAT_00018350 = &DAT_00018400;
  uStack_18 = 1;
  uStack_10 = 1;
  uStack_c = 1;
  uStack_14 = 0;
  DAT_00018510 = FUN_00013410(&uStack_18);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000c6d0(void)

{
  FUN_00013418(DAT_00018510);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000c714(void)

{
  FUN_00013428(DAT_00018510);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000c73c(undefined8 param_1,undefined8 param_2,longlong param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  
  DAT_00018300 = ((uint)param_1 & 1) + 2 & 3 | 0x2288a40;
  iVar3 = 0;
  iVar2 = (int)param_2 * 0x18c;
  DAT_00018304 = 0;
  DAT_00018344 = 0x8a;
  DAT_00018348 = 0x8a;
  do {
    if (*(int *)(iVar2 + (uint)param_1 * 0x630 + 0x25db0) == param_3) {
      param_3 = (longlong)(iVar3 + 0x24);
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 4;
  } while (iVar3 < 0x14);
  iVar2 = 0;
  DAT_00018370 = 0x81;
  DAT_00018371 = 0x57;
  DAT_00018374 = (undefined1)((ulonglong)param_3 >> 8);
  DAT_00018375 = (undefined1)param_3;
  puVar1 = param_4;
  do {
    (&DAT_00018376)[iVar2] = *puVar1;
    iVar2 = iVar2 + 1;
    puVar1 = param_4 + iVar2;
  } while (iVar2 < 0x80);
  DAT_000183f6 = FUN_000004a4(&DAT_00018374,0x82);
  iVar2 = 0;
  while( true ) {
    FUN_00013430(DAT_00018510);
    FUN_0000c5d0(param_1,param_2);
    FUN_00013308(&DAT_000182d8);
    FUN_00002604();
    FUN_000133ec(&DAT_00004e20,&DAT_00018518);
    FUN_000133e4(&DAT_00018518,FUN_0000c714,0);
    if (((((DAT_000182d8 & 0xf000) == 0x1000) && (DAT_00018402 == 'Z')) && (DAT_00018403 == ']')) &&
       (DAT_00018489 == 'G')) break;
    iVar2 = iVar2 + 1;
    if (4 < iVar2) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
  }
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000c988(undefined8 param_1,undefined8 param_2,int param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  char cVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  
  DAT_00018300 = ((uint)param_1 & 1) + 2 & 3 | 0x2308c40;
  iVar5 = 0;
  iVar4 = (int)param_2 * 0x18c;
  DAT_00018304 = 0;
  DAT_00018344 = 0x8c;
  DAT_00018348 = 0x8c;
  do {
    if (*(int *)(iVar4 + (uint)param_1 * 0x630 + 0x25db0) == param_3) {
      param_3 = iVar5 + 0x24;
    }
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 4;
  } while (iVar5 < 0x14);
  iVar4 = 0;
  DAT_00018370 = 0x81;
  DAT_00018371 = 0x52;
  DAT_00018374 = (undefined1)((uint)param_3 >> 8);
  DAT_00018375 = (undefined1)param_3;
  do {
    FUN_00013430(DAT_00018510);
    FUN_0000c5d0(param_1,param_2);
    FUN_00013308(&DAT_000182d8);
    FUN_00002604();
    FUN_000133ec(10000,&DAT_00018518);
    FUN_000133e4(&DAT_00018518,FUN_0000c714,0);
    if ((((((DAT_000182d8 & 0xf000) == 0x1000) && (DAT_00018402 == 'Z')) && (DAT_00018403 == ']'))
        && ((DAT_00018404 == '\0' && (DAT_00018406 == '\\')))) &&
       ((DAT_00018407 == ']' &&
        ((DAT_0001848b == 'G' && (cVar2 = FUN_000004a4(&DAT_00018408,0x82), DAT_0001848a == cVar2)))
        ))) break;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 5);
  iVar5 = 0;
  puVar3 = param_4;
  if (iVar4 != 5) {
    do {
      puVar1 = &DAT_0001840a + iVar5;
      iVar5 = iVar5 + 1;
      *puVar3 = *puVar1;
      puVar3 = param_4 + iVar5;
    } while (iVar5 < 0x80);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000cbf0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  DAT_00018300 = ((uint)param_1 & 1) + 2 & 3 | 0xc0340;
  iVar1 = 0;
  DAT_00018304 = 0;
  DAT_00018344 = 3;
  DAT_00018348 = 3;
  DAT_00018370 = 0x81;
  DAT_00018371 = 0x52;
  while( true ) {
    FUN_00013430(DAT_00018510);
    FUN_0000c5d0(param_1,param_2);
    FUN_00013308(&DAT_000182d8);
    FUN_00002604();
    FUN_000133ec(100,&DAT_00018518);
    FUN_000133e4(&DAT_00018518,FUN_0000c714,0);
    if (((DAT_000182d8 & 0xf000) == 0x1000) && (DAT_00018402 == 'Z')) break;
    iVar1 = iVar1 + 1;
    if (4 < iVar1) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
  }
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000cdb4(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  DAT_00018300 = ((uint)param_1 & 1) + 2 & 3 | 0xc0340;
  iVar1 = 0;
  DAT_00018304 = 0;
  DAT_00018344 = 3;
  DAT_00018348 = 3;
  DAT_00018370 = 0x81;
  DAT_00018371 = 0x52;
  do {
    FUN_00013430(DAT_00018510);
    FUN_0000c5d0(param_1,param_2);
    FUN_00013308(&DAT_000182d8);
    FUN_00002604();
    FUN_000133ec(100,&DAT_00018518);
    FUN_000133e4(&DAT_00018518,FUN_0000c714,0);
    if (((DAT_000182d8 & 0xf000) == 0x1000) && (DAT_00018402 == 'Z')) break;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 5);
  if (iVar1 != 5) {
    if (DAT_00018401 == '\0') {
      if (*(int *)((int)param_2 * 0x18c + (uint)param_1 * 0x630 + 0x25e40) == 0) {
LAB_0000cf44:
                    // WARNING: Subroutine does not return
        FUN_0000fa24(param_1,param_2);
      }
    }
    else if (DAT_00018401 == '\b') goto LAB_0000cf44;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000d014(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  DAT_00018300 = ((uint)param_1 & 1) + 2 & 3 | 0x140540;
  iVar1 = 0;
  DAT_00018344 = 5;
  DAT_00018348 = 5;
  DAT_00018304 = 0;
  DAT_00018370 = 0x81;
  DAT_00018371 = 0x58;
  do {
    FUN_0000c5d0(param_1,param_2);
    FUN_00013308(&DAT_000182d8);
    FUN_00002604();
    if ((DAT_000182d8 & 0xf000) == 0x1000) {
      halt_baddata();
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 5);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000d104(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar4 = &DAT_00025ce0 + (int)param_1 * 0x630 + (int)param_2 * 0x18c;
  FUN_00013354(puVar4,0,0x18c);
  FUN_00013354(puVar4 + 0xd0,0xffffffffffffffff,0x80);
  *(undefined2 *)(puVar4 + 0x28) = 0x80;
  *(undefined2 *)(puVar4 + 0x2c) = 0x80;
  *(undefined2 *)(puVar4 + 0x2a) = 0x40;
  *(undefined2 *)(puVar4 + 0x2e) = 0xff00;
  *(undefined4 *)(puVar4 + 0x154) = 0x2000;
  *(undefined4 *)(puVar4 + 0x158) = 0x800;
  *(undefined4 *)(puVar4 + 0x30) = 0x10;
  puVar4[0x150] = 1;
  *(undefined4 *)(puVar4 + 0x15c) = 0;
  *(undefined4 *)(puVar4 + 0x160) = 0;
  *(undefined4 *)(puVar4 + 0x180) = 0xffffffff;
  lVar2 = FUN_0000c988(param_1,param_2,0,&DAT_00018490);
  if ((((-1 < lVar2) && (DAT_00018401 == '\0')) && ((char)DAT_00018490 == 'M')) &&
     (DAT_00018490._1_1_ == 'C')) {
    iVar3 = 0;
    puVar5 = puVar4;
    do {
      lVar2 = FUN_0000c988(param_1,param_2,iVar3 + 0x10,&DAT_00018490);
      if (lVar2 != 0) {
        halt_baddata();
      }
      cVar1 = FUN_000004a4(&DAT_00018490,0x7f);
      if (DAT_0001850f == cVar1) {
        *(undefined4 *)(puVar5 + 0xd0) = DAT_00018490;
      }
      iVar3 = iVar3 + 1;
      puVar5 = puVar5 + 4;
    } while (iVar3 < 0x14);
    lVar2 = FUN_0000f454(param_1,param_2);
    if (lVar2 == 0) {
      *(undefined4 *)(puVar4 + 0x160) = 1;
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000d2d0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined *puVar2;
  int iVar3;
  undefined *puVar4;
  
  FUN_00000714();
  puVar4 = &DAT_00025ce0 + (int)param_1 * 0x630 + (int)param_2 * 0x18c;
  iVar3 = 0;
  while( true ) {
    lVar1 = FUN_0000f260(param_1,param_2,iVar3);
    if (lVar1 == 0) {
      halt_baddata();
    }
    iVar3 = iVar3 + 1;
    if (lVar1 != 1) break;
    if (0x37 < iVar3) {
      FUN_00013354(&DAT_00018490,0,0x80);
      DAT_00018490 = 0xa0;
      DAT_00018498 = 0xffff;
      DAT_0001850f = FUN_000004a4(&DAT_00018490,0x7f);
      iVar3 = 0;
      do {
        iVar3 = iVar3 + 1;
        lVar1 = FUN_0000c73c(param_1,param_2,iVar3,&DAT_00018490);
        if (lVar1 != 0) {
          halt_baddata();
        }
      } while (iVar3 < 0xf);
      FUN_00013354(&DAT_00018490,0,0x80);
      iVar3 = 0;
      puVar2 = puVar4;
      do {
        DAT_00018490 = *(undefined4 *)(puVar2 + 0xd0);
        DAT_0001850f = FUN_000004a4(&DAT_00018490,0x7f);
        lVar1 = FUN_0000c73c(param_1,param_2,iVar3 + 0x10,&DAT_00018490);
        iVar3 = iVar3 + 1;
        if (lVar1 != 0) {
          halt_baddata();
        }
        puVar2 = puVar2 + 4;
      } while (iVar3 < 0x14);
      FUN_00000478(&DAT_00018490,0x80,0);
      DAT_00018490 = CONCAT22(DAT_00018490._2_2_,0x434d);
      DAT_0001850f = 0xe;
      lVar1 = FUN_0000c73c(param_1,param_2,0);
      if (lVar1 == 0) {
        *(undefined4 *)(puVar4 + 0x160) = 1;
        *(undefined4 *)(puVar4 + 0x180) = 0xffffffff;
      }
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
  }
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000d4d0(short param_1,short param_2,char *param_3,ulonglong param_4)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  uint *apuStack_30 [12];
  
  if ((param_4 & 0x200) != 0) {
    param_4 = param_4 | 2;
  }
  iVar9 = 0;
  iVar5 = 0;
  do {
    if (*(char *)(iVar5 + 0x25c50) == '\0') break;
    iVar9 = iVar9 + 1;
    iVar5 = iVar5 + 0x30;
  } while (iVar9 < 3);
  if (iVar9 != 3) {
    iVar9 = iVar9 * 0x30;
    puVar8 = (undefined1 *)(iVar9 + 0x25c50);
    FUN_00000478(puVar8,0x30,0);
    *(short *)(iVar9 + 0x25c56) = param_1;
    *(short *)(iVar9 + 0x25c58) = param_2;
    cVar4 = *param_3;
    if (cVar4 == '/') {
      param_3 = param_3 + 1;
      cVar4 = *param_3;
    }
    if ((cVar4 == '\0') || ((cVar4 == '.' && (param_3[1] == '\0')))) {
      *(undefined4 *)(iVar9 + 0x25c60) = 0xf;
      *(undefined1 *)(iVar9 + 0x25c54) = 1;
      *puVar8 = 1;
    }
    else {
      iVar5 = FUN_0000dcb8(param_1,param_2,param_3,apuStack_30);
      if ((*apuStack_30[0] & 0xf0) == 0xa0) {
        iVar5 = -4;
      }
      *(int *)(iVar9 + 0x25c64) = iVar5;
      if (iVar5 < 0) {
        *(undefined4 *)(iVar9 + 0x25c60) = 0;
      }
      else if (*(char *)((int)apuStack_30[0] + 0x7d) == '\0') {
        *(uint *)(iVar9 + 0x25c60) = apuStack_30[0][1];
      }
      else {
        *(uint *)(iVar9 + 0x25c60) = apuStack_30[0][0xe];
      }
      *(byte *)(iVar9 + 0x25c52) = (byte)param_4 & 1;
      *(char *)(iVar9 + 0x25c51) = (char)(param_4 & 2);
      *(undefined1 *)(iVar9 + 0x25c53) = 0;
      if ((param_4 & 0x200) == 0) {
        if (-1 < iVar5) {
          *puVar8 = 1;
        }
      }
      else {
        iVar9 = 0;
        if ((param_4 & 2) != 0) {
          iVar6 = 0;
          do {
            if ((((*(char *)(iVar6 + 0x25c50) != '\0') && (*(short *)(iVar6 + 0x25c56) == param_1))
                && (*(short *)(iVar6 + 0x25c58) == param_2)) &&
               ((*(int *)(iVar6 + 0x25c64) == iVar5 && (*(char *)(iVar6 + 0x25c51) != '\0')))) {
              halt_baddata();
            }
            iVar9 = iVar9 + 1;
            iVar6 = iVar6 + 0x30;
          } while (iVar9 < 3);
        }
        if ((iVar5 < 0) || (lVar3 = FUN_0000e560(param_1,param_2,iVar5,0), lVar3 == 0)) {
          iVar9 = -1;
          iVar5 = 0;
          while (lVar3 = FUN_00010e3c(param_1,param_2,iVar5,apuStack_30), lVar3 == 0) {
            if ((*apuStack_30[0] & 0xf0) == 0xa0) {
              if (iVar9 < 0) {
                iVar9 = iVar5;
              }
              if (*apuStack_30[0] != 0xa0) {
                FUN_00000478(apuStack_30[0],0x80,0);
                *apuStack_30[0] = 0xa0;
                *(undefined2 *)(apuStack_30[0] + 2) = 0xffff;
                uVar1 = FUN_000004a4(apuStack_30[0],0x7f);
                *(undefined1 *)((int)apuStack_30[0] + 0x7f) = uVar1;
                iVar2 = FUN_0000fd14();
                iVar7 = iVar5 + 1;
                iVar6 = iVar7;
                if (iVar7 < 0) {
                  iVar6 = iVar5 + 8;
                }
                *(byte *)(iVar2 + 0xb) =
                     *(byte *)(iVar2 + 0xb) | (byte)(1 << (iVar7 + (iVar6 >> 3) * -8 & 0x1fU));
              }
            }
            iVar5 = iVar5 + 1;
            if (0xe < iVar5) {
                    // WARNING: Subroutine does not return
              FUN_0000fdac(param_1,param_2);
            }
          }
        }
      }
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000d970(undefined8 param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int aiStack_30 [12];
  
  iVar3 = (int)param_1 * 0x30;
  uVar1 = *(undefined2 *)(iVar3 + 0x25c56);
  uVar2 = *(undefined2 *)(iVar3 + 0x25c58);
  if (*(int *)(iVar3 + 0x25c5c) < *(int *)(iVar3 + 0x25c60)) {
    iVar6 = *(int *)(iVar3 + 0x25c60) - *(int *)(iVar3 + 0x25c5c);
    if (param_3 < iVar6) {
      iVar6 = param_3;
    }
    iVar9 = 0;
    for (; iVar6 != 0; iVar6 = iVar6 - iVar4) {
      iVar8 = *(int *)(iVar3 + 0x25c5c);
      iVar4 = iVar8;
      if (iVar8 < 0) {
        iVar4 = iVar8 + 0x3ff;
      }
      iVar8 = iVar8 + (iVar4 >> 10) * -0x400;
      iVar7 = 0x400 - iVar8;
      iVar4 = iVar6;
      if (iVar7 < iVar6) {
        iVar4 = iVar7;
      }
      lVar5 = FUN_0000eabc(param_1);
      if (lVar5 < 0) {
        halt_baddata();
      }
      lVar5 = FUN_000111fc(uVar1,uVar2,lVar5,aiStack_30);
      if (lVar5 != 0) {
        halt_baddata();
      }
      iVar7 = param_2 + iVar9;
      iVar9 = iVar9 + iVar4;
      FUN_0001334c(iVar7,*(int *)(aiStack_30[0] + 4) + iVar8,iVar4);
      *(int *)(iVar3 + 0x25c5c) = *(int *)(iVar3 + 0x25c5c) + iVar4;
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000dad4(undefined8 param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int aiStack_30 [12];
  
  iVar3 = (int)param_1 * 0x30;
  uVar1 = *(undefined2 *)(iVar3 + 0x25c56);
  uVar2 = *(undefined2 *)(iVar3 + 0x25c58);
  if ((param_3 == 0) || (*(char *)(iVar3 + 0x25c55) != '\0')) {
    iVar8 = 0;
    if (param_3 != 0) {
      do {
        lVar5 = FUN_0000eabc(param_1);
        if (lVar5 == -3) {
          lVar5 = FUN_0000ec7c(param_1);
          if (lVar5 == -3) {
            halt_baddata();
          }
          if (lVar5 != 0) {
            halt_baddata();
          }
          lVar5 = FUN_0000eabc(param_1);
        }
        else if (lVar5 < 0) {
          halt_baddata();
        }
        lVar5 = FUN_000111fc(uVar1,uVar2,lVar5,aiStack_30);
        if (lVar5 != 0) {
          halt_baddata();
        }
        iVar7 = *(int *)(iVar3 + 0x25c5c);
        iVar4 = iVar7;
        if (iVar7 < 0) {
          iVar4 = iVar7 + 0x3ff;
        }
        iVar7 = iVar7 + (iVar4 >> 10) * -0x400;
        iVar6 = 0x400 - iVar7;
        iVar4 = param_3;
        if (iVar6 < param_3) {
          iVar4 = iVar6;
        }
        FUN_0001334c(*(int *)(aiStack_30[0] + 4) + iVar7,param_2 + iVar8,iVar4);
        *(undefined1 *)(aiStack_30[0] + 0xb) = 0xff;
        iVar7 = *(int *)(iVar3 + 0x25c5c) + iVar4;
        *(int *)(iVar3 + 0x25c5c) = iVar7;
        if (iVar7 < *(int *)(iVar3 + 0x25c60)) {
          iVar7 = *(int *)(iVar3 + 0x25c60);
        }
        *(int *)(iVar3 + 0x25c60) = iVar7;
        param_3 = param_3 - iVar4;
        iVar8 = iVar8 + iVar4;
      } while (param_3 != 0);
    }
    FUN_0000e864(param_1);
  }
  else {
    *(undefined1 *)(iVar3 + 0x25c55) = 1;
    lVar5 = FUN_0000e864();
    if (lVar5 == 0) {
                    // WARNING: Subroutine does not return
      FUN_0000fdac(uVar1,uVar2);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000dcb8(undefined8 param_1,undefined8 param_2,char *param_3,int *param_4)

{
  longlong lVar1;
  int iVar2;
  int in_stack_00000010;
  
  if (*param_3 == '/') {
    param_3 = param_3 + 1;
  }
  lVar1 = FUN_00000140(param_3,0x2f);
  if (lVar1 < 0) {
    lVar1 = FUN_000004d0(param_3);
    iVar2 = 0;
    if (lVar1 != 0) {
      do {
        lVar1 = FUN_00010e3c(param_1,param_2,iVar2,param_4);
        if (lVar1 != 0) {
          halt_baddata();
        }
        if (in_stack_00000010 == 0) {
          if (*(int *)*param_4 == 0xa1) goto LAB_0000dd94;
        }
        else if (*(int *)*param_4 == 0x51) {
LAB_0000dd94:
          lVar1 = FUN_0001336c(param_3,*param_4 + 10);
          if (lVar1 == 0) {
            halt_baddata();
          }
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0xf);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000ddec(int param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  longlong lVar4;
  int *apiStack_20 [8];
  
  param_1 = param_1 * 0x30;
  iVar3 = *(int *)(param_1 + 0x25c5c);
  uVar1 = *(undefined2 *)(param_1 + 0x25c56);
  uVar2 = *(undefined2 *)(param_1 + 0x25c58);
  if (iVar3 < *(int *)(param_1 + 0x25c60)) {
    do {
      lVar4 = FUN_00010e3c(uVar1,uVar2,iVar3,apiStack_20);
      if (lVar4 != 0) {
        halt_baddata();
      }
      if (*apiStack_20[0] == 0x51) break;
      iVar3 = *(int *)(param_1 + 0x25c5c) + 1;
      *(int *)(param_1 + 0x25c5c) = iVar3;
    } while (iVar3 < *(int *)(param_1 + 0x25c60));
    if (*(int *)(param_1 + 0x25c5c) < *(int *)(param_1 + 0x25c60)) {
      *(int *)(param_1 + 0x25c5c) = *(int *)(param_1 + 0x25c5c) + 1;
      FUN_00000478(param_2,0x144,0);
      FUN_0001338c(param_2 + 0x10,(int)apiStack_20[0] + 10,0x14);
      *(undefined1 *)(param_2 + 0x15) = 0;
      *param_2 = &DAT_0000101f;
      if (*(char *)((int)apiStack_20[0] + 0x7e) != '\0') {
        *param_2 = 0x181f;
      }
      if (*(char *)((int)apiStack_20[0] + 0x7d) == '\0') {
        param_2[2] = apiStack_20[0][1];
      }
      else {
        iVar3 = apiStack_20[0][9];
        param_2[3] = apiStack_20[0][8];
        param_2[4] = iVar3;
        iVar3 = apiStack_20[0][0xd];
        param_2[7] = apiStack_20[0][0xc];
        param_2[8] = iVar3;
        param_2[2] = apiStack_20[0][0xe];
        param_2[1] = apiStack_20[0][10];
      }
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000df8c(void)

{
  uint uVar1;
  longlong lVar2;
  undefined4 *in_a3_lo;
  uint *puStack_10;
  
  lVar2 = FUN_0000dcb8();
  if ((*puStack_10 & 0xf0) == 0xa0) {
    lVar2 = -4;
  }
  if (-1 < lVar2) {
    FUN_00000478(in_a3_lo,0x40,0);
    *in_a3_lo = 0x1f;
    if (*(char *)((int)puStack_10 + 0x7d) == '\0') {
      in_a3_lo[2] = puStack_10[1];
    }
    else {
      if ((puStack_10[0xb] & 0x80) != 0) {
        *in_a3_lo = 0x9f;
      }
      uVar1 = puStack_10[9];
      in_a3_lo[3] = puStack_10[8];
      in_a3_lo[4] = uVar1;
      uVar1 = puStack_10[0xd];
      in_a3_lo[7] = puStack_10[0xc];
      in_a3_lo[8] = uVar1;
      in_a3_lo[2] = puStack_10[0xe];
      in_a3_lo[1] = puStack_10[10];
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Removing unreachable block (ram,0x0000e254)
// WARNING: Removing unreachable block (ram,0x0000e238)
// WARNING: Removing unreachable block (ram,0x0000e274)

void FUN_0000e084(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  uint in_stack_00000010;
  undefined1 auStack_30 [4];
  uint *apuStack_2c [11];
  
  lVar3 = 0;
  if ((in_stack_00000010 & 0x10) != 0) {
    iVar6 = param_4 + 0x20;
    lVar3 = FUN_0000dcb8(param_1,param_2,iVar6,auStack_30);
    if ((-1 < lVar3) ||
       ((lVar3 == -4 &&
        ((((lVar3 = FUN_0001336c(&DAT_00013630,iVar6), lVar3 == 0 ||
           (lVar3 = FUN_0001336c(&DAT_00013634,iVar6), lVar3 == 0)) ||
          (*(char *)(param_4 + 0x20) == '\0')) ||
         ((lVar3 = FUN_00000140(iVar6,0x2f), -1 < lVar3 ||
          (lVar4 = FUN_000004d0(iVar6), lVar3 = 0, lVar4 == 0)))))))) {
      lVar3 = -4;
    }
  }
  lVar4 = FUN_0000dcb8(param_1,param_2,param_3,apuStack_2c);
  if ((*apuStack_2c[0] & 0xf0) == 0xa0) {
    lVar4 = -4;
  }
  if ((-1 < lVar4) && (lVar3 == 0)) {
    iVar2 = FUN_0000fd14();
    iVar5 = (int)lVar4 + 1;
    iVar6 = iVar5;
    if (iVar5 < 0) {
      iVar6 = (int)lVar4 + 8;
    }
    *(byte *)(iVar2 + 0xb) =
         *(byte *)(iVar2 + 0xb) | (byte)(1 << (iVar5 + (iVar6 >> 3) * -8 & 0x1fU));
    *(undefined1 *)((int)apuStack_2c[0] + 0x7d) = 0;
    *(undefined2 *)(apuStack_2c[0] + 0xb) = 0;
    if ((in_stack_00000010 & 4) != 0) {
      if ((*(ushort *)(param_4 + 0x14) & 0x800) == 0) {
        *(undefined1 *)((int)apuStack_2c[0] + 0x7e) = 0;
      }
      else {
        *(undefined1 *)((int)apuStack_2c[0] + 0x7e) = 1;
      }
    }
    if ((in_stack_00000010 & 0x10) != 0) {
      FUN_0001338c((int)apuStack_2c[0] + 10,param_4 + 0x20,0x14);
      *(undefined1 *)((int)apuStack_2c[0] + 0x1e) = 0;
    }
    uVar1 = FUN_000004a4(apuStack_2c[0],0x7f);
                    // WARNING: Subroutine does not return
    *(undefined1 *)((int)apuStack_2c[0] + 0x7f) = uVar1;
    FUN_0000fdac(param_1,param_2);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000e2fc(undefined8 param_1,undefined8 param_2,int param_3,short param_4)

{
  int iVar1;
  longlong lVar2;
  int in_stack_00000010;
  int *in_stack_00000014;
  int *apiStack_28 [10];
  
  lVar2 = FUN_00000140(param_3 + 1,0x2f);
  if (lVar2 < 0) {
    if (param_4 == 0) {
      DAT_00018290 = 0;
      while (lVar2 = FUN_00000140(param_3,0x2f), -1 < lVar2) {
        iVar1 = FUN_00000140(param_3,0x2f);
        param_3 = param_3 + iVar1 + 1;
      }
      FUN_0001338c(&DAT_00018298,param_3,0x3f);
      DAT_000182d7 = 0;
    }
    if (in_stack_00000010 != 0) {
      do {
        if (0xe < DAT_00018290) {
          halt_baddata();
        }
        lVar2 = FUN_00010e3c(param_1,param_2,DAT_00018290,apiStack_28);
        if (lVar2 != 0) {
          halt_baddata();
        }
        DAT_00018290 = DAT_00018290 + 1;
        if ((*apiStack_28[0] == 0x51) &&
           (lVar2 = FUN_000005b0((int)apiStack_28[0] + 10,&DAT_00018298), lVar2 != 0)) {
          if (in_stack_00000010 < 0) {
            in_stack_00000014 = in_stack_00000014 + 0x10;
          }
          else {
            FUN_00013354(in_stack_00000014,0,0x40);
            *(undefined2 *)(in_stack_00000014 + 5) = 0x9417;
            if (*(char *)((int)apiStack_28[0] + 0x7e) != '\0') {
              *(undefined2 *)(in_stack_00000014 + 5) = 0x9c17;
            }
            if (*(char *)((int)apiStack_28[0] + 0x7d) == '\0') {
              in_stack_00000014[4] = apiStack_28[0][1];
            }
            else {
              if ((*(ushort *)(apiStack_28[0] + 0xb) & 0x80) != 0) {
                *(ushort *)(in_stack_00000014 + 5) = *(ushort *)(in_stack_00000014 + 5) | 0x80;
              }
              *(undefined2 *)((int)in_stack_00000014 + 0x16) =
                   *(undefined2 *)((int)apiStack_28[0] + 0x2e);
              iVar1 = apiStack_28[0][9];
              *in_stack_00000014 = apiStack_28[0][8];
              in_stack_00000014[1] = iVar1;
              iVar1 = apiStack_28[0][0xd];
              in_stack_00000014[2] = apiStack_28[0][0xc];
              in_stack_00000014[3] = iVar1;
              in_stack_00000014[4] = apiStack_28[0][0xe];
              iVar1 = apiStack_28[0][10];
              in_stack_00000014[7] = DAT_00018290;
              in_stack_00000014[6] = iVar1;
            }
            FUN_0001338c(in_stack_00000014 + 8,(int)apiStack_28[0] + 10,0x14);
            *(undefined1 *)(in_stack_00000014 + 0xd) = 0;
            in_stack_00000010 = in_stack_00000010 + -1;
            in_stack_00000014[7] = DAT_00018290;
            in_stack_00000014 = in_stack_00000014 + 0x10;
          }
        }
      } while (in_stack_00000010 != 0);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000e560(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *apuStack_28 [10];
  
  lVar4 = FUN_00010e3c();
  iVar7 = 0;
  if (lVar4 == 0) {
    iVar5 = 0;
    do {
      if ((((*(char *)(iVar5 + 0x25c50) != '\0') && (*(short *)(iVar5 + 0x25c56) == param_1)) &&
          (*(short *)(iVar5 + 0x25c58) == param_2)) && (*(int *)(iVar5 + 0x25c64) == param_3)) {
        halt_baddata();
      }
      iVar7 = iVar7 + 1;
      iVar5 = iVar5 + 0x30;
    } while (iVar7 < 3);
    if (param_4 == 0) {
      if (*apuStack_28[0] == 0x51) {
LAB_0000e65c:
        iVar7 = (int)param_2 * 0x18c + (int)param_1 * 0x630;
        lVar4 = (longlong)((int)param_1 * 0x60);
        do {
          while( true ) {
            iVar2 = FUN_0000fd14(lVar4);
            iVar6 = (int)param_3 + 1;
            iVar5 = iVar6;
            if (iVar6 < 0) {
              iVar5 = (int)param_3 + 8;
            }
            *(byte *)(iVar2 + 0xb) =
                 *(byte *)(iVar2 + 0xb) | (byte)(1 << (iVar6 + (iVar5 >> 3) * -8 & 0x1fU));
            if (param_4 == 0) {
              uVar3 = *apuStack_28[0] & 0xf | 0xa0;
            }
            else {
              uVar3 = *apuStack_28[0] & 0xf | 0x50;
            }
            *apuStack_28[0] = uVar3;
            uVar1 = FUN_000004a4(apuStack_28[0],0x7f);
            *(undefined1 *)((int)apuStack_28[0] + 0x7f) = uVar1;
            param_3 = (longlong)(short)apuStack_28[0][2];
            if (param_4 == 0) {
              iVar5 = *(int *)(iVar7 + 0x25e60) + 1;
            }
            else {
              iVar5 = *(int *)(iVar7 + 0x25e60) + -1;
            }
            *(int *)(iVar7 + 0x25e60) = iVar5;
            if (param_3 < 0) {
                    // WARNING: Subroutine does not return
              FUN_0000fdac(param_1,param_2);
            }
            lVar4 = FUN_00010e3c(param_1,param_2,param_3,apuStack_28);
            if (lVar4 != 0) {
              halt_baddata();
            }
            lVar4 = param_1;
            if (param_4 != 0) break;
            if ((*apuStack_28[0] & 0xf0) != 0x50) goto LAB_0000e7ac;
          }
        } while ((*apuStack_28[0] & 0xf0) == 0xa0);
LAB_0000e7ac:
                    // WARNING: Subroutine does not return
        FUN_0000fdac(param_1,param_2);
      }
    }
    else if (*apuStack_28[0] == 0xa1) goto LAB_0000e65c;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000e804(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_0000dcb8();
  if (-1 < lVar1) {
    FUN_0000e560(param_1,param_2,lVar1,param_4);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000e864(int param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int aiStack_18 [6];
  
  param_1 = param_1 * 0x30;
  uVar1 = *(undefined2 *)(param_1 + 0x25c56);
  uVar2 = *(undefined2 *)(param_1 + 0x25c58);
  lVar5 = FUN_00010e3c(uVar1,uVar2,*(undefined4 *)(param_1 + 0x25c64),aiStack_18);
  if (lVar5 == 0) {
    iVar4 = FUN_0000fd14();
    iVar6 = *(int *)(param_1 + 0x25c64) + 1;
    iVar7 = iVar6;
    if (iVar6 < 0) {
      iVar7 = *(int *)(param_1 + 0x25c64) + 8;
    }
    *(byte *)(iVar4 + 0xb) =
         *(byte *)(iVar4 + 0xb) | (byte)(1 << (iVar6 + (iVar7 >> 3) * -8 & 0x1fU));
    iVar7 = *(int *)(param_1 + 0x25c60);
    iVar4 = iVar7 + -1;
    if (iVar7 == 0) {
      *(undefined4 *)(aiStack_18[0] + 4) = 0;
    }
    else {
      if (iVar4 < 0) {
        iVar4 = iVar7 + 0x1ffe;
      }
      *(int *)(aiStack_18[0] + 4) = ((iVar4 >> 0xd) + 1) * 0x2000;
    }
    *(undefined1 *)(aiStack_18[0] + 0x7d) = 0;
    *(undefined2 *)(aiStack_18[0] + 0x2c) = 0;
    *(undefined4 *)(aiStack_18[0] + 0x38) = 0;
    FUN_00013354(aiStack_18[0] + 0x20,0,8);
    FUN_00013354(aiStack_18[0] + 0x30,0,8);
    uVar3 = FUN_000004a4(aiStack_18[0],0x7f);
                    // WARNING: Subroutine does not return
    *(undefined1 *)(aiStack_18[0] + 0x7f) = uVar3;
    FUN_0000fdac(uVar1,uVar2);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000e9c4(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint *apuStack_28 [10];
  
  iVar3 = 0;
  iVar2 = 0;
  do {
    lVar1 = FUN_00010e3c(param_1,param_2,iVar2,apuStack_28);
    if (lVar1 != 0) {
      halt_baddata();
    }
    if ((*apuStack_28[0] & 0xf0) == 0xa0) {
      if (param_3 != 0) {
        halt_baddata();
      }
      iVar3 = iVar3 + 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0xf);
  if (param_3 == 0) {
    *(int *)((int)param_2 * 0x18c + (int)param_1 * 0x630 + 0x25e60) = iVar3;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered unimplemented instructions

void FUN_0000eabc(void)

{
                    // WARNING: Unimplemented instruction - Truncating control flow here
  halt_unimplemented();
}



// WARNING: Control flow encountered unimplemented instructions

void FUN_0000ec7c(void)

{
                    // WARNING: Unimplemented instruction - Truncating control flow here
  halt_unimplemented();
}



// WARNING: Control flow encountered unimplemented instructions

void FUN_0000edb0(void)

{
                    // WARNING: Unimplemented instruction - Truncating control flow here
  halt_unimplemented();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000f260(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  uVar2 = 0;
  puVar3 = &DAT_00018490;
  do {
    *puVar3 = 0xffffffff;
    uVar2 = uVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (uVar2 < 0x20);
  piVar4 = &DAT_00018490;
  lVar1 = FUN_0000c73c(param_1,param_2,param_3,&DAT_00018490);
  if ((lVar1 == 0) && (lVar1 = FUN_0000c988(param_1,param_2,param_3,&DAT_00018490), lVar1 == 0)) {
    uVar2 = 0;
    do {
      uVar2 = uVar2 + 1;
      if (*piVar4 != -1) {
        halt_baddata();
      }
      piVar4 = piVar4 + 1;
    } while (uVar2 < 0x20);
    uVar2 = 0;
    puVar3 = &DAT_00018490;
    do {
      *puVar3 = 0;
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar2 < 0x20);
    piVar4 = &DAT_00018490;
    lVar1 = FUN_0000c73c(param_1,param_2,param_3,&DAT_00018490);
    if ((lVar1 == 0) && (lVar1 = FUN_0000c988(param_1,param_2,param_3,&DAT_00018490), lVar1 == 0)) {
      uVar2 = 0;
      do {
        uVar2 = uVar2 + 1;
        if (*piVar4 != 0) {
          halt_baddata();
        }
        piVar4 = piVar4 + 1;
      } while (uVar2 < 0x20);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000f3c4(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  puVar2 = &DAT_00018490;
  do {
    *puVar2 = 0;
    uVar3 = uVar3 + 1;
    puVar2 = puVar2 + 1;
  } while (uVar3 < 0x20);
  iVar4 = 0;
  do {
    lVar1 = FUN_0000c73c(param_1,param_2,iVar4,&DAT_00018490);
    iVar4 = iVar4 + 1;
    if (lVar1 != 0) {
      halt_baddata();
    }
  } while (iVar4 < 0x400);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000f454(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 uVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int aiStack_b0 [16];
  int aiStack_70 [28];
  
  iVar10 = 0;
  piVar13 = aiStack_b0;
  do {
    lVar3 = FUN_00010e3c(param_1,param_2,iVar10,piVar13);
    if (lVar3 != 0) {
      halt_baddata();
    }
    if (iVar10 == 0) {
      aiStack_70[0] = FUN_0000fd14();
    }
    else if (iVar10 == 7) {
      aiStack_70[1] = FUN_0000fd14();
    }
    piVar13 = piVar13 + 1;
    iVar10 = iVar10 + 1;
  } while (iVar10 < 0xf);
  piVar7 = aiStack_70 + 2;
  FUN_00013354(piVar7,0xffffffffffffffff,0x3c);
  iVar10 = 0;
  piVar13 = aiStack_b0;
  piVar12 = piVar7;
  do {
    uVar1 = *(uint *)*piVar13;
    uVar5 = uVar1 & 0xf0;
    if ((uVar1 & 0xf) == 1) {
      lVar3 = (longlong)(short)((uint *)*piVar13)[2];
      *piVar12 = iVar10;
      if (lVar3 < 0) {
LAB_0000f5ac:
        if (uVar5 != 0) goto LAB_0000f664;
      }
      else {
        do {
          piVar9 = aiStack_b0 + (int)lVar3;
          uVar1 = *(uint *)*piVar9;
          if ((uVar1 & 0xf0) != uVar5) {
            uVar5 = 0;
          }
          if ((uVar1 == 0xa0) || (piVar7[(int)lVar3] != -1)) break;
          piVar7[(int)lVar3] = iVar10;
          lVar3 = (longlong)*(short *)(*piVar9 + 8);
        } while (-1 < lVar3);
        if (lVar3 < 0) goto LAB_0000f5ac;
      }
      iVar8 = 0;
      piVar9 = aiStack_b0;
      piVar11 = piVar7;
      do {
        if (*piVar11 == iVar10) {
          FUN_00013354(*piVar9,0,0x80);
          *(undefined4 *)*piVar9 = 0xa0;
          *(undefined2 *)(*piVar9 + 8) = 0xffff;
          uVar2 = FUN_000004a4(*piVar9,0x7f);
          iVar6 = iVar8 + 1;
          *(undefined1 *)(*piVar9 + 0x7f) = uVar2;
          iVar4 = iVar6;
          if (iVar6 < 0) {
            iVar4 = iVar8 + 8;
          }
          *(byte *)(aiStack_70[iVar8 < 7 ^ 1] + 0xb) =
               *(byte *)(aiStack_70[iVar8 < 7 ^ 1] + 0xb) |
               (byte)(1 << (iVar6 + (iVar4 >> 3) * -8 & 0x1fU));
        }
        piVar9 = piVar9 + 1;
        iVar8 = iVar8 + 1;
        piVar11 = piVar11 + 1;
      } while (iVar8 < 0xf);
    }
LAB_0000f664:
    piVar12 = piVar12 + 1;
    iVar10 = iVar10 + 1;
    piVar13 = piVar13 + 1;
    if (0xe < iVar10) {
      iVar10 = 0;
      piVar13 = aiStack_b0;
      piVar12 = aiStack_70 + 2;
      do {
        if ((*piVar12 == -1) && (*(int *)*piVar13 != 0xa0)) {
          FUN_00013354((int *)*piVar13,0,0x80);
          *(undefined4 *)*piVar13 = 0xa0;
          *(undefined2 *)(*piVar13 + 8) = 0xffff;
          uVar2 = FUN_000004a4(*piVar13,0x7f);
          iVar4 = iVar10 + 1;
          *(undefined1 *)(*piVar13 + 0x7f) = uVar2;
          iVar8 = iVar4;
          if (iVar4 < 0) {
            iVar8 = iVar10 + 8;
          }
          *(byte *)(aiStack_70[iVar10 < 7 ^ 1] + 0xb) =
               *(byte *)(aiStack_70[iVar10 < 7 ^ 1] + 0xb) |
               (byte)(1 << (iVar4 + (iVar8 >> 3) * -8 & 0x1fU));
        }
        piVar13 = piVar13 + 1;
        iVar10 = iVar10 + 1;
        piVar12 = piVar12 + 1;
      } while (iVar10 < 0xf);
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
  } while( true );
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000f77c(undefined8 param_1,undefined8 param_2,uint param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  FUN_00013354(&DAT_00018490,0,0x80);
  iVar5 = 0;
  iVar3 = 0x10;
  iVar4 = (int)param_2 * 0x18c;
  do {
    iVar2 = iVar4 + (int)param_1 * 0x630;
    if (*(uint *)(iVar2 + 0x25db0) == param_3) {
      *(uint *)(iVar2 + 0x25db0) = param_3 | 0x1000000;
      DAT_00018490 = param_3 | 0x1000000;
      DAT_0001850f = FUN_000004a4(&DAT_00018490,0x7f);
      lVar1 = FUN_0000c73c(param_1,param_2,iVar3,&DAT_00018490);
      if (lVar1 != 0) {
        halt_baddata();
      }
    }
    else if ((int)*(uint *)(iVar2 + 0x25db0) < 0) {
      DAT_00018490 = param_3;
      DAT_0001850f = FUN_000004a4(&DAT_00018490,0x7f);
      lVar1 = FUN_0000c73c(param_1,param_2,iVar3);
      if (lVar1 != 0) {
        halt_baddata();
      }
      *(uint *)(iVar2 + 0x25db0) = param_3;
      halt_baddata();
    }
    iVar3 = iVar3 + 1;
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 4;
  } while (iVar5 < 0x14);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000f900(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  
  iVar4 = 0;
  puVar6 = &DAT_00018520;
  do {
    iVar2 = iVar4 * 0x10;
    *(undefined **)(iVar2 + 0x21524) = puVar6;
    iVar3 = iVar4 * 4;
    iVar1 = 0x23 - iVar4;
    iVar4 = iVar4 + 1;
    *(undefined **)(&DAT_00021760 + iVar3) = &DAT_00021520 + iVar1 * 0x10;
    *(undefined4 *)(&DAT_00021520 + iVar2) = 0xffffffff;
    puVar6 = puVar6 + 0x400;
  } while (iVar4 < 0x24);
  DAT_00025810 = &DAT_00021520;
  DAT_00025814 = &DAT_00021760;
  FUN_00013354(&DAT_000217f0,0xffffffffffffffff,0x4020);
  iVar2 = 0;
  iVar1 = 0;
  iVar4 = 0;
  do {
    iVar5 = 0;
    puVar6 = &DAT_00025ce0;
    iVar3 = iVar1;
    do {
      *(undefined4 *)(puVar6 + iVar4 + 0x174) = 0xffffffff;
      *(undefined4 *)(puVar6 + iVar4 + 0x178) = 0xffffffff;
      *(undefined4 *)(puVar6 + iVar4 + 0x17c) = 0xffffffff;
      *(undefined4 *)(puVar6 + iVar4 + 0x180) = 0xffffffff;
      *(undefined4 *)(&DAT_000217f0 + iVar3) = 0;
      iVar3 = iVar3 + 0x804;
      iVar5 = iVar5 + 1;
      puVar6 = puVar6 + 0x18c;
    } while (iVar5 < 4);
    iVar1 = iVar1 + 0x2010;
    iVar2 = iVar2 + 1;
    iVar4 = iVar4 + 0x630;
  } while (iVar2 < 2);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000fa24(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  
  iVar7 = DAT_00013810;
  puVar2 = DAT_00025814;
  for (iVar5 = DAT_00013810 + -1; DAT_00013810 = iVar7, DAT_00025814 = puVar2, -1 < iVar5;
      iVar5 = iVar5 + -1) {
    piVar1 = (int *)puVar2[iVar5];
    if ((((char)piVar1[2] == param_1) && (*(char *)((int)piVar1 + 9) == param_2)) && (-1 < *piVar1))
    {
      *(undefined1 *)(piVar1 + 2) = 0xff;
      *(undefined1 *)((int)piVar1 + 9) = 0xff;
      *(undefined1 *)((int)piVar1 + 0xb) = 0;
      *piVar1 = -1;
    }
    iVar7 = DAT_00013810;
    puVar2 = DAT_00025814;
  }
  iVar5 = 0;
  puVar6 = puVar2;
  if (0 < iVar7 + -1) {
    do {
      piVar1 = (int *)*puVar6;
      iVar3 = iVar5 + 1;
      if (*piVar1 < 0) {
        if (iVar3 < DAT_00013810) {
          puVar4 = puVar2 + iVar3;
          do {
            if (-1 < *(int *)*puVar4) break;
            iVar3 = iVar3 + 1;
            puVar4 = puVar4 + 1;
          } while (iVar3 < DAT_00013810);
        }
        if (iVar3 == iVar7) break;
        *puVar6 = puVar2[iVar3];
        puVar2[iVar3] = piVar1;
      }
      iVar5 = iVar5 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar5 < DAT_00013810 + -1);
  }
  iVar7 = (int)param_1 * 0x2010;
  iVar5 = (int)param_2 * 0x804;
  FUN_00013354(&DAT_000217f0 + iVar7 + iVar5,0xffffffffffffffff,0x804);
  *(undefined4 *)(&DAT_000217f0 + iVar5 + iVar7) = 0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000fbc0(char param_1,char param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = DAT_00025810;
  if (0 < DAT_00013810) {
    do {
      if ((((char)piVar1[2] == param_1) && (*(char *)((int)piVar1 + 9) == param_2)) &&
         (*piVar1 == param_3)) {
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 4;
    } while (iVar2 < DAT_00013810);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000fc34(char param_1,char param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < DAT_00013810) {
    do {
      piVar1 = (int *)(iVar2 * 0x10 + DAT_00025810);
      if ((((char)piVar1[2] == param_1) && (*(char *)((int)piVar1 + 9) == param_2)) &&
         (*piVar1 == param_3)) {
        *piVar1 = -1;
        *(undefined1 *)((int)piVar1 + 0xb) = 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_00013810);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000fcb4(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 < 0x201) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000fcf8(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000fd14(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000fd2c(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = DAT_00013810 + -1;
  if (-1 < iVar3) {
    piVar1 = (int *)(iVar3 * 4 + DAT_00025814);
    do {
      if (*piVar1 == param_1) break;
      iVar3 = iVar3 + -1;
      piVar1 = piVar1 + -1;
    } while (-1 < iVar3);
    if (iVar3 == 0) {
      halt_baddata();
    }
  }
  puVar2 = (undefined4 *)(iVar3 * 4 + DAT_00025814);
  do {
    iVar3 = iVar3 + -1;
    *puVar2 = puVar2[-1];
    puVar2 = puVar2 + -1;
  } while (iVar3 != 0);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000fdac(char param_1,char param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = DAT_00013810 + -1;
  while ((-1 < iVar3 &&
         ((((iVar1 = *(int *)(iVar3 * 4 + DAT_00025814), *(char *)(iVar1 + 8) != param_1 ||
            (*(char *)(iVar1 + 9) != param_2)) || (*(char *)(iVar1 + 0xb) == '\0')) ||
          (lVar2 = FUN_0000fe58(), lVar2 == 0))))) {
    iVar3 = iVar3 + -1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Control flow encountered unimplemented instructions

void FUN_0000fe58(int param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0xb) != '\0') {
    cVar1 = *(char *)(*(char *)(param_1 + 8) * 0x630 + *(char *)(param_1 + 9) * 0x18c + 0x25e30);
    if (cVar1 != '\0') {
      if ((cVar1 != '\x01') && (cVar1 != '\x03')) {
                    // WARNING: Unimplemented instruction - Truncating control flow here
        halt_unimplemented();
      }
                    // WARNING: Unimplemented instruction - Truncating control flow here
      halt_unimplemented();
    }
    *(undefined1 *)(param_1 + 0xb) = 0;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered unimplemented instructions
// WARNING: Control flow encountered bad instruction data

void FUN_000108dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  iVar2 = (int)param_1 * 0x630 + (int)param_2 * 0x18c;
  if (0 < DAT_0002adc8) {
                    // WARNING: Unimplemented instruction - Truncating control flow here
    halt_unimplemented();
  }
  piVar3 = (int *)FUN_0000fbc0(param_1,param_2,param_3);
  if (piVar3 == (int *)0x0) {
    piVar3 = *(int **)(DAT_00013810 * 4 + DAT_00025814 + -4);
    if ((*(char *)((int)piVar3 + 0xb) != '\0') && (lVar4 = FUN_0000fe58(piVar3), lVar4 != 0)) {
      halt_baddata();
    }
    *(char *)(piVar3 + 2) = (char)param_1;
    *(char *)((int)piVar3 + 9) = (char)param_2;
    *piVar3 = (int)param_3;
    *(undefined1 *)(piVar3 + 3) = 0;
    sVar1 = *(short *)(&DAT_00025ce0 + iVar2 + 0x2a);
    lVar4 = 0;
    if (0 < (longlong)sVar1) {
      do {
        iVar6 = (int)lVar4;
        lVar5 = FUN_0000350c(param_1,param_2,(int)param_3 * (int)sVar1 + iVar6,
                             piVar3[1] + iVar6 * *(short *)(&DAT_00025ce0 + iVar2 + 0x28));
        lVar4 = (longlong)(iVar6 + 1);
        if (lVar5 != 0) {
          halt_baddata();
        }
      } while (lVar4 < sVar1);
    }
  }
  FUN_0000fd2c(piVar3);
  *param_4 = (int)piVar3;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered unimplemented instructions

void FUN_00010b78(void)

{
                    // WARNING: Unimplemented instruction - Truncating control flow here
  halt_unimplemented();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Control flow encountered unimplemented instructions

void FUN_00010e3c(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  if (0xe < param_3) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Unimplemented instruction - Truncating control flow here
  halt_unimplemented();
}



// WARNING: Control flow encountered unimplemented instructions

void FUN_00010f4c(void)

{
                    // WARNING: Unimplemented instruction - Truncating control flow here
  halt_unimplemented();
}



// WARNING: Control flow encountered unimplemented instructions

void FUN_000110a4(void)

{
                    // WARNING: Unimplemented instruction - Truncating control flow here
  halt_unimplemented();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Control flow encountered unimplemented instructions

void FUN_000111fc(undefined1 param_1,undefined1 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  lVar2 = FUN_0000fbc0();
  if (lVar2 == 0) {
    puVar1 = *(undefined4 **)(DAT_00013810 * 4 + DAT_00025814 + -4);
    if ((*(char *)((int)puVar1 + 0xb) == '\0') || (lVar2 = FUN_0000fe58(puVar1), lVar2 == 0)) {
      *(undefined1 *)(puVar1 + 2) = param_1;
      *(undefined1 *)((int)puVar1 + 9) = param_2;
      *puVar1 = param_3;
                    // WARNING: Unimplemented instruction - Truncating control flow here
      halt_unimplemented();
    }
  }
  else {
    FUN_0000fd2c(lVar2);
    *param_4 = (int)lVar2;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Control flow encountered unimplemented instructions

void FUN_00011390(int param_1,int param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar1 = &DAT_00025ce0 + param_1 * 0x630 + param_2 * 0x18c;
  if (0 < DAT_0002adc8) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  iVar3 = 0;
  puVar2 = puVar1;
  do {
    if (*(int *)(puVar2 + 0xd0) == -1) break;
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 4;
  } while (iVar3 < 0x10);
  if ((iVar3 < 0x10) && (7 < *(int *)(puVar1 + 0x38) - *(int *)(puVar1 + 0x170))) {
    *(int *)(puVar1 + 0x38) = *(int *)(puVar1 + 0x38) + -8;
    *(undefined4 *)(puVar1 + iVar3 * 4 + 0xd0) = param_3;
    DAT_0002adc0 = param_1;
    DAT_0002adc4 = param_2;
    DAT_0002adc8 = 0xffffffff;
                    // WARNING: Unimplemented instruction - Truncating control flow here
    halt_unimplemented();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered unimplemented instructions
// WARNING: Control flow encountered bad instruction data

void FUN_000114a4(int param_1,int param_2,int param_3)

{
  FUN_00005dec();
  if ((DAT_0002adc8 != 0) &&
     (((DAT_0002adc8 != param_3 || (DAT_0002adc0 != param_1)) || (DAT_0002adc4 != param_2)))) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Unimplemented instruction - Truncating control flow here
  halt_unimplemented();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000116c8(void)

{
  if (DAT_0002adc8 != 0) {
    if (-1 < DAT_0002adc8) {
                    // WARNING: Subroutine does not return
      FUN_0000fdac(DAT_0002adc0,DAT_0002adc4);
    }
    DAT_0002adc8 = 0;
    FUN_000121e4(DAT_0002adc0,DAT_0002adc4);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000121e4(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  int aiStack_28 [10];
  
  iVar1 = (int)param_1 * 0x630;
  iVar2 = (int)param_2 * 0x18c;
  pcVar7 = &DAT_00025ce0 + iVar1 + iVar2;
  FUN_00013354(pcVar7,0,0x28);
  builtin_strncpy(&DAT_00025ce0 + iVar1 + iVar2,"Sony PS2 Memory Card Format ",0x1d);
  FUN_0001335c(pcVar7,"1.2.0.0");
  uVar6 = 0;
  do {
    uVar5 = uVar6;
    if ((int)uVar6 < 0) {
      uVar5 = uVar6 + 0x3ff;
    }
    lVar3 = FUN_000108dc(param_1,param_2,(int)uVar5 >> 10,aiStack_28);
    if (lVar3 != 0) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    *(undefined1 *)(aiStack_28[0] + 0xb) = 1;
    pcVar4 = pcVar7 + uVar6;
    uVar5 = 0x400;
    if (0x18c - uVar6 < 0x401) {
      uVar5 = 0x18c - uVar6;
    }
    uVar6 = uVar6 + 0x400;
    FUN_0001334c(*(undefined4 *)(aiStack_28[0] + 4),pcVar4,uVar5);
  } while (uVar6 < 0x18c);
                    // WARNING: Subroutine does not return
  FUN_0000fdac(param_1,param_2);
}



// WARNING: Control flow encountered bad instruction data

void FUN_00012370(longlong param_1)

{
  if ((param_1 < 0) && ((int)param_1 + 8U < 7)) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000123e4(byte *param_1,int *param_2,int *param_3)

{
  byte bVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  
  bVar1 = *param_1;
  while (bVar1 == 0x20) {
    param_1 = param_1 + 1;
    bVar1 = *param_1;
  }
  if ((((longlong)(int)(char)(*param_1 | 0x20) == (longlong)(char)*PTR_DAT_0001388c) &&
      ((longlong)(int)(char)(param_1[1] | 0x20) == (longlong)(char)PTR_DAT_0001388c[1])) &&
     (uVar2 = FUN_0001337c(param_1), 1 < uVar2)) {
    lVar3 = FUN_00000140(param_1,0x3a);
    if (lVar3 < 0) {
      lVar3 = FUN_0001337c(param_1);
    }
    iVar6 = (int)lVar3 + -1;
    if (param_2 != (int *)0x0) {
      if (param_1[iVar6] - 0x30 < 10) {
        *param_2 = (char)param_1[iVar6] + -0x30;
        iVar6 = (int)lVar3 + -2;
      }
      else {
        *param_2 = 0;
      }
      *param_2 = *param_2 + 2;
    }
    if (param_3 != (int *)0x0) {
      pbVar5 = param_1 + iVar6;
      *param_3 = 0;
      iVar4 = 1;
      bVar1 = *pbVar5;
      while (bVar1 - 0x30 < 10) {
        bVar1 = *pbVar5;
        iVar6 = iVar6 + -1;
        pbVar5 = param_1 + iVar6;
        *param_3 = *param_3 + iVar4 * ((char)bVar1 + -0x30);
        iVar4 = iVar4 * 10;
        bVar1 = *pbVar5;
      }
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Control flow encountered unimplemented instructions

void FUN_0001256c(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0xf0000000;
  uVar1 = param_1 & 0xf0000000;
  do {
    if (uVar1 != 0) break;
    uVar2 = uVar2 >> 4;
    uVar1 = param_1 & uVar2;
  } while (0xf < uVar2);
  DAT_00025820 = param_1 & 0xf;
  if (0xe < uVar2) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  DAT_00025824 = 0;
  if (uVar2 != 0) {
                    // WARNING: Unimplemented instruction - Truncating control flow here
    halt_unimplemented();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0001260c(void)

{
  longlong lVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  FUN_00013454(FUN_000123e4);
  FUN_00013480(PTR_DAT_0001388c);
  lVar1 = FUN_00013478(&PTR_DAT_0001388c);
  if (lVar1 == 0) {
    uStack_18 = 1;
    uStack_10 = 1;
    uStack_c = 1;
    uStack_14 = 0;
    DAT_00025828 = FUN_00013410();
  }
  else {
    FUN_00000770(&uStack_18);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0001268c(void)

{
  FUN_00013430(DAT_00025828);
  FUN_00013480(PTR_DAT_0001388c);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000126c4(void)

{
  FUN_00000770();
  FUN_00013418(DAT_00025828);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_000126f4(int param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  FUN_00013430(DAT_00025828);
  FUN_0001256c(*(undefined4 *)(param_1 + 4));
  lVar1 = FUN_00000a3c(DAT_00025820,DAT_00025824);
  if ((-2 < lVar1) && (lVar1 = FUN_00000c9c(DAT_00025820,DAT_00025824,param_2,param_3), -1 < lVar1))
  {
    *(int *)(param_1 + 0xc) = (int)lVar1;
  }
  FUN_00013420(DAT_00025828);
                    // WARNING: Subroutine does not return
  FUN_00012370(lVar1);
}



void FUN_000127b4(int param_1)

{
  undefined8 uVar1;
  
  FUN_00013430(DAT_00025828);
  uVar1 = FUN_00000dbc(*(undefined4 *)(param_1 + 0xc));
  FUN_00013420(DAT_00025828);
                    // WARNING: Subroutine does not return
  FUN_00012370(uVar1);
}



void FUN_00012808(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_00013430(DAT_00025828);
  uVar1 = FUN_0000114c(*(undefined4 *)(param_1 + 0xc),param_2,param_3);
  FUN_00013420(DAT_00025828);
                    // WARNING: Subroutine does not return
  FUN_00012370(uVar1);
}



void FUN_00012874(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_00013430(DAT_00025828);
  uVar1 = FUN_00001224(*(undefined4 *)(param_1 + 0xc),param_2,param_3);
  FUN_00013420(DAT_00025828);
                    // WARNING: Subroutine does not return
  FUN_00012370(uVar1);
}



void FUN_000128e0(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_00013430(DAT_00025828);
  uVar1 = FUN_0000170c(*(undefined4 *)(param_1 + 0xc),param_2,param_3);
  FUN_00013420(DAT_00025828);
                    // WARNING: Subroutine does not return
  FUN_00012370(uVar1);
}



void FUN_0001294c(int param_1)

{
  longlong lVar1;
  
  FUN_00013430(DAT_00025828);
  FUN_0001256c(*(undefined4 *)(param_1 + 4));
  lVar1 = FUN_00000a3c(DAT_00025820,DAT_00025824);
  if (-3 < lVar1) {
    lVar1 = FUN_00002114(DAT_00025820,DAT_00025824);
  }
  FUN_00013420(DAT_00025828);
                    // WARNING: Subroutine does not return
  FUN_00012370(lVar1);
}



void FUN_000129ec(int param_1,undefined8 param_2)

{
  longlong lVar1;
  
  FUN_00013430(DAT_00025828);
  FUN_0001256c(*(undefined4 *)(param_1 + 4));
  lVar1 = FUN_00000a3c(DAT_00025820,DAT_00025824);
  if (-2 < lVar1) {
    lVar1 = FUN_00001ffc(DAT_00025820,DAT_00025824,param_2,0);
  }
  FUN_00013420(DAT_00025828);
                    // WARNING: Subroutine does not return
  FUN_00012370(lVar1);
}



void FUN_00012a98(int param_1,undefined8 param_2)

{
  longlong lVar1;
  
  FUN_00013430(DAT_00025828);
  FUN_0001256c(*(undefined4 *)(param_1 + 4));
  lVar1 = FUN_00000a3c(DAT_00025820,DAT_00025824);
  if (-2 < lVar1) {
    lVar1 = FUN_00000c9c(DAT_00025820,DAT_00025824,param_2,0x40);
  }
  FUN_00013420(DAT_00025828);
                    // WARNING: Subroutine does not return
  FUN_00012370(lVar1);
}



void FUN_00012b44(int param_1,undefined8 param_2)

{
  longlong lVar1;
  
  FUN_00013430(DAT_00025828);
  FUN_0001256c(*(undefined4 *)(param_1 + 4));
  lVar1 = FUN_00000a3c(DAT_00025820,DAT_00025824);
  if (-2 < lVar1) {
    lVar1 = FUN_00001ffc(DAT_00025820,DAT_00025824,param_2,0);
  }
  FUN_00013420(DAT_00025828);
                    // WARNING: Subroutine does not return
  FUN_00012370(lVar1);
}



void FUN_00012bf0(int param_1,undefined8 param_2)

{
  longlong lVar1;
  
  FUN_00013430(DAT_00025828);
  FUN_0001256c(*(undefined4 *)(param_1 + 4));
  lVar1 = FUN_00000a3c(DAT_00025820,DAT_00025824);
  if ((-2 < lVar1) && (lVar1 = FUN_00000c9c(DAT_00025820,DAT_00025824,param_2,0), -1 < lVar1)) {
    *(int *)(param_1 + 0xc) = (int)lVar1;
  }
  FUN_00013420(DAT_00025828);
                    // WARNING: Subroutine does not return
  FUN_00012370(lVar1);
}



void FUN_00012ca4(int param_1)

{
  undefined8 uVar1;
  
  FUN_00013430(DAT_00025828);
  uVar1 = FUN_00000dbc(*(undefined4 *)(param_1 + 0xc));
  FUN_00013420(DAT_00025828);
                    // WARNING: Subroutine does not return
  FUN_00012370(uVar1);
}



// WARNING: Control flow encountered bad instruction data

void FUN_00012cf8(int param_1,undefined8 param_2)

{
  longlong lVar1;
  
  FUN_00013430(DAT_00025828);
  lVar1 = FUN_00001aec(*(undefined4 *)(param_1 + 0xc),param_2);
  FUN_00013420(DAT_00025828);
  if (lVar1 < 1) {
                    // WARNING: Subroutine does not return
    FUN_00012370(lVar1);
  }
  FUN_0001337c((int)param_2 + 0x40);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_00012d6c(int param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  FUN_00013430(DAT_00025828);
  FUN_0001256c(*(undefined4 *)(param_1 + 4));
  lVar1 = FUN_00000a3c(DAT_00025820,DAT_00025824);
  if (-2 < lVar1) {
    lVar1 = FUN_00001c90(DAT_00025820,DAT_00025824,param_2,param_3);
  }
  FUN_00013420(DAT_00025828);
                    // WARNING: Subroutine does not return
  FUN_00012370(lVar1);
}



void FUN_00012e24(int param_1,undefined8 param_2,uint *param_3,ulonglong param_4)

{
  longlong lVar1;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  ushort uStack_44;
  uint uStack_40;
  
  FUN_00013430(DAT_00025828);
  FUN_0001256c(*(undefined4 *)(param_1 + 4));
  lVar1 = FUN_00000a3c(DAT_00025820,DAT_00025824);
  if (-2 < lVar1) {
    if ((param_4 & 2) != 0) {
      uStack_40 = param_3[1];
    }
    if ((param_4 & 1) != 0) {
      if ((*param_3 & 1) == 0) {
        uStack_44 = uStack_44 & 0xfffe;
      }
      else {
        uStack_44 = uStack_44 | 1;
      }
      if ((*param_3 & 2) == 0) {
        uStack_44 = uStack_44 & 0xfffd;
      }
      else {
        uStack_44 = uStack_44 | 2;
      }
      if ((*param_3 & 4) == 0) {
        uStack_44 = uStack_44 & 0xfffb;
      }
      else {
        uStack_44 = uStack_44 | 4;
      }
      if ((*param_3 & 8) == 0) {
        uStack_44 = uStack_44 & 0xfff7;
      }
      else {
        uStack_44 = uStack_44 | 8;
      }
      if ((*param_3 & 0x1000) == 0) {
        uStack_44 = uStack_44 & 0xefff;
      }
      else {
        uStack_44 = uStack_44 | 0x1000;
      }
      if ((*param_3 & 0x800) == 0) {
        uStack_44 = uStack_44 & 0xf7ff;
      }
      else {
        uStack_44 = uStack_44 | 0x800;
      }
    }
    if ((param_4 & 8) != 0) {
      uStack_58 = param_3[3];
      uStack_54 = param_3[4];
    }
    if ((param_4 & 0x20) != 0) {
      uStack_50 = param_3[7];
      uStack_4c = param_3[8];
    }
    lVar1 = FUN_00001d9c(DAT_00025820,DAT_00025824,param_2,&uStack_58);
  }
  FUN_00013420(DAT_00025828);
                    // WARNING: Subroutine does not return
  FUN_00012370(lVar1);
}



void FUN_00013070(int param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  FUN_00013430(DAT_00025828);
  FUN_0001256c(*(undefined4 *)(param_1 + 4));
  lVar1 = FUN_00000a3c(DAT_00025820,DAT_00025824);
  if (-2 < lVar1) {
    lVar1 = FUN_00002314(DAT_00025820,DAT_00025824,param_2,param_3);
  }
  FUN_00013420(DAT_00025828);
                    // WARNING: Subroutine does not return
  FUN_00012370(lVar1);
}



// WARNING: Control flow encountered bad instruction data

void FUN_00013128(int param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  
  FUN_00013430(DAT_00025828);
  FUN_0001256c(*(undefined4 *)(param_1 + 4));
  lVar1 = FUN_00000a3c(DAT_00025820,DAT_00025824);
  if (lVar1 < -1) {
    FUN_00013420(DAT_00025828);
                    // WARNING: Subroutine does not return
    FUN_00012370(lVar1);
  }
  FUN_00000314(DAT_00025820,DAT_00025824);
  if ((param_3 != 0x5001) && (param_3 == 0x5002)) {
    FUN_0000038c(DAT_00025820,DAT_00025824);
  }
  FUN_00013420(DAT_00025828);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00013244(void)

{
  FUN_00013430(DAT_00025828);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}


