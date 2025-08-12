typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned int    undefined4;
typedef unsigned short    word;
typedef struct Elf32_Shdr Elf32_Shdr, *PElf32_Shdr;

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



undefined DAT_bf808268;
undefined1 DAT_bf808260;
undefined DAT_bf80826c;
undefined DAT_bf808270;
undefined DAT_bf808274;
undefined1 DAT_bf808264;
undefined DAT_bf808280;
int DAT_00000c38;
int DAT_00000c4c;
undefined4 DAT_00000c54;
undefined4 DAT_00000c58;
undefined4 DAT_00000c5c;
undefined4 DAT_00000c60;
undefined4 DAT_00000c48;
undefined4 DAT_00000c44;
undefined4 DAT_00000c50;
undefined *DAT_00000c54;
undefined *DAT_00000c58;
undefined *DAT_00000c5c;
undefined *DAT_00000c60;

// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0000018c(void)

{
  _DAT_bf808268 = 0x3bc;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000001a4(void)

{
  _DAT_bf808268 = _DAT_bf808268 | 0xc;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000001c4(int param_1)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar3 = 0;
  iVar5 = param_1;
  do {
    iVar4 = iVar4 + 1;
    *(undefined4 *)(iVar3 + -0x407f7dc0) = *(undefined4 *)(iVar5 + 4);
    puVar1 = (undefined4 *)(iVar5 + 0x14);
    iVar5 = iVar5 + 4;
    *(undefined4 *)(iVar3 + -0x407f7dbc) = *puVar1;
    iVar3 = iVar4 * 8;
  } while (iVar4 < 4);
  iVar3 = 0;
  iVar5 = param_1;
  do {
    puVar1 = (undefined4 *)(iVar5 + 0x28);
    iVar5 = iVar5 + 4;
    iVar4 = iVar3 * 4;
    iVar3 = iVar3 + 1;
    *(undefined4 *)(iVar4 + -0x407f7e00) = *puVar1;
  } while (iVar3 < 0x10);
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x6c)) {
    puVar2 = *(undefined1 **)(param_1 + 0x74);
    do {
      DAT_bf808260 = *puVar2;
      iVar5 = iVar5 + 1;
      puVar2 = *(undefined1 **)(param_1 + 0x74) + iVar5;
    } while (iVar5 < *(int *)(param_1 + 0x6c));
  }
  if (*(int *)(param_1 + 0x7c) != 0) {
    FUN_00000b08(0xb,*(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x80),
                 *(undefined4 *)(param_1 + 0x84));
    FUN_00000b10(0xb);
  }
  if (*(int *)(param_1 + 0x88) != 0) {
    FUN_00000b08(0xc,*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c),
                 *(undefined4 *)(param_1 + 0x90));
    FUN_00000b10(0xc);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000002f0(void)

{
  _DAT_bf808268 = _DAT_bf808268 | 1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00000310(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = _DAT_bf808274;
  uVar1 = _DAT_bf808270;
  iVar3 = 0;
  *param_1 = _DAT_bf80826c;
  param_1[9] = uVar1;
  param_1[0x1a] = uVar2;
  if (0 < (int)param_1[0x1c]) {
    do {
      *(undefined1 *)(param_1[0x1e] + iVar3) = DAT_bf808264;
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)param_1[0x1c]);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00000384(int param_1)

{
  FUN_00000b88(*(undefined4 *)(param_1 + 4));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000003c4(int param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 auStack_30 [2];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 auStack_20 [8];
  
  lVar2 = FUN_00000a98(0x930);
  if ((lVar2 == 0) && (DAT_00000c38 == 0)) {
    iVar5 = 1;
    DAT_00000c38 = 1;
    DAT_00000c4c = 0x10;
    if (1 < param_1) {
      do {
        param_2 = param_2 + 1;
        lVar2 = FUN_00000bbc(0xbe8,*param_2,6);
        uVar4 = 0xffffffffffffffff;
        iVar1 = DAT_00000c4c;
        if (lVar2 == 0) {
          iVar1 = *param_2;
          uVar3 = FUN_00000bb4(*(undefined1 *)(iVar1 + 6));
          if ((uVar3 & 4) != 0) {
            uVar4 = FUN_00000bc4(iVar1 + 6,0,10);
          }
          iVar1 = (int)uVar4;
          if (0x72 < (int)uVar4 - 9U) {
            FUN_00000a74(0xbf0,uVar4);
            halt_baddata();
          }
        }
        DAT_00000c4c = iVar1;
        iVar5 = iVar5 + 1;
      } while (iVar5 < param_1);
    }
    DAT_00000c54 = 0;
    DAT_00000c58 = 0;
    DAT_00000c5c = 0;
    DAT_00000c60 = 0;
    FUN_0000018c();
    FUN_00000adc(auStack_20);
    FUN_00000abc(0x11,1,900,0xc40);
    FUN_00000acc(0x11);
    FUN_00000ae4(auStack_20[0]);
    FUN_00000b18(0xb,3);
    FUN_00000b18(0xc,3);
    FUN_00000b20(0xb);
    FUN_00000b20(0xc);
    auStack_30[0] = 0;
    uStack_28 = 1;
    uStack_24 = 0x40;
    DAT_00000c48 = FUN_00000b70(auStack_30);
    auStack_30[0] = 0;
    uStack_28 = 0;
    uStack_24 = 0x40;
    DAT_00000c44 = FUN_00000b70(auStack_30);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000059c(void)

{
  undefined4 auStack_10 [4];
  
  FUN_00000b4c();
  FUN_00000adc(auStack_10);
  FUN_00000ad4(0x11,0);
  FUN_00000ac4(0x11);
  FUN_00000ae4(auStack_10[0]);
  FUN_00000b28(0xb);
  FUN_00000b28(0xc);
  FUN_00000b78(DAT_00000c44);
  FUN_00000b78(DAT_00000c48);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00000614(longlong param_1,undefined8 param_2)

{
  undefined4 auStack_18 [6];
  
  if (param_1 == 0) {
    FUN_00000adc(auStack_18);
    FUN_00000ad4(0x11,0);
    FUN_00000ac4(0x11);
    param_1 = 900;
    param_2 = 0xc40;
  }
  else {
    FUN_00000adc(auStack_18);
    FUN_00000ad4(0x11,0);
    FUN_00000ac4(0x11);
  }
  FUN_00000abc(0x11,1,param_1,param_2);
  FUN_00000acc(0x11);
  FUN_00000ae4(auStack_18[0]);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000006c4(undefined4 param_1)

{
  DAT_00000c50 = param_1;
  FUN_000001a4();
  FUN_000001c4(DAT_00000c50);
  FUN_000002f0();
  FUN_00000b90(DAT_00000c44);
  FUN_00000310(DAT_00000c50);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00000720(void)

{
  FUN_000001a4();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00000740(void)

{
  FUN_000002f0();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00000760(void)

{
  FUN_00000b90(DAT_00000c44);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00000788(void)

{
  FUN_00000b90(DAT_00000c48);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000007b0(void)

{
  FUN_00000b80(DAT_00000c48);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00000818(int *param_1)

{
  int iVar1;
  
  if (DAT_00000c54 == (code *)0x0) {
    iVar1 = 0;
    do {
      if (*param_1 + 1U < 2) {
        param_1[4] = 1;
      }
      else {
        param_1[4] = 0;
      }
      iVar1 = iVar1 + 1;
      param_1 = param_1 + 1;
    } while (iVar1 < 4);
  }
  else {
    (*DAT_00000c54)();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00000890(void)

{
  if (DAT_00000c58 != (code *)0x0) {
    (*DAT_00000c58)();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000008c4(void)

{
  if (DAT_00000c5c != (code *)0x0) {
    (*DAT_00000c5c)();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000008f8(void)

{
  if (DAT_00000c60 != (code *)0x0) {
    (*DAT_00000c60)();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}


