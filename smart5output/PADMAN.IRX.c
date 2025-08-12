typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
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



int DAT_000092a4;
int DAT_000082f8;
int DAT_000082fc;
undefined DAT_bd000040;
undefined4 DAT_00009260;
undefined4 DAT_00008320;
uint DAT_00008300;
undefined4 DAT_0000926c;
undefined4 DAT_00009280;
undefined4 DAT_00009284;
undefined4 DAT_00009268;
undefined4 DAT_00009294;
undefined4 DAT_00009298;
undefined4 DAT_00009288;
undefined4 DAT_000092a4;
undefined4 DAT_000092a0;
int DAT_00009294;
int DAT_00009298;
undefined UNK_00007c50;
int DAT_00009288;
undefined4 DAT_0000928c;
undefined4 DAT_000082f8;
undefined4 DAT_00009270;
undefined4 DAT_00009274;
undefined4 DAT_0000929c;
int DAT_000092a0;
undefined4 DAT_000092a8;
undefined4 DAT_00009290;
undefined4 DAT_00009264;
int DAT_0000926c;
undefined4 DAT_0000927c;
undefined4 DAT_00009278;
undefined UNK_00002704;
undefined FUN_00002574;
undefined FUN_00002c54;
undefined FUN_00002d8c;
undefined FUN_00002ec4;
undefined FUN_00003068;
undefined2 DAT_000082f4;
undefined *DAT_00009664;
undefined DAT_000096a8;
int DAT_00009664;
int DAT_0000965c;
int DAT_00009660;
undefined4 DAT_000095f0;
int DAT_00009668;
undefined4 DAT_0000965c;
undefined4 DAT_00009660;
undefined4 DAT_00009678;
undefined4 DAT_0000966c;
undefined4 DAT_00009698;
int DAT_0000969c;
undefined4 DAT_00009688;
int DAT_0000968c;
undefined4 DAT_00009690;
undefined4 DAT_00009694;
int DAT_00008310;
undefined4 DAT_0000968c;
undefined4 DAT_00009d30;
int DAT_00009d30;
undefined UNK_00006410;
undefined UNK_00006430;
undefined UNK_00006450;
undefined UNK_000064bc;
undefined FUN_00006470;
undefined FUN_00006478;
undefined FUN_00006480;
undefined UNK_00006570;
undefined UNK_00006598;
undefined UNK_000065b8;
undefined UNK_000065d8;
undefined UNK_000065e4;
undefined UNK_000065ec;
undefined UNK_000065f4;
undefined UNK_000066d0;
undefined UNK_000066f0;
undefined UNK_00006710;
undefined UNK_00006730;
undefined UNK_0000673c;
undefined UNK_00006744;
undefined UNK_0000674c;
undefined UNK_00006820;
undefined UNK_00006868;
undefined UNK_000068dc;
undefined UNK_000068fc;
undefined UNK_000069e0;
undefined UNK_00006a10;
undefined UNK_00006a30;
undefined UNK_00006a50;
undefined UNK_00006a5c;
undefined UNK_00006a64;
undefined UNK_00006a6c;
undefined UNK_00006b50;
undefined UNK_00006b80;
undefined UNK_00006ba0;
undefined UNK_00006bc0;
undefined UNK_00006bcc;
undefined UNK_00006bd4;
undefined UNK_00006bdc;
undefined UNK_00006cc0;
undefined UNK_00006ce4;
undefined UNK_00006d04;
undefined UNK_00006d24;
undefined UNK_00006d30;
undefined UNK_00006d38;
undefined UNK_00006d40;
undefined UNK_00006e10;
undefined UNK_00006e40;
undefined UNK_00006e60;
undefined UNK_00006e80;
undefined UNK_00006e8c;
undefined UNK_00006e94;
undefined UNK_00006e9c;
undefined UNK_00006f80;
undefined UNK_00006fc0;
undefined UNK_00006fe0;
undefined UNK_0000700c;
undefined UNK_00007014;
undefined UNK_0000701c;
undefined UNK_00007110;
undefined UNK_00007144;
undefined UNK_00007164;
undefined UNK_00007184;
undefined UNK_00007190;
undefined UNK_00007198;
undefined UNK_000071a0;
undefined UNK_000071d8;
undefined UNK_00007210;
undefined UNK_00007248;
undefined UNK_00007280;
undefined UNK_000072b8;
undefined UNK_000072f0;
undefined UNK_00007324;
undefined UNK_00007358;
undefined UNK_0000738c;
undefined DAT_00009d44;
undefined DAT_00009d5c;
undefined DAT_00009da0;
undefined FUN_0000789c;
undefined FUN_00007abc;
undefined DAT_00009e24;
undefined DAT_00009e3c;
undefined DAT_00009e80;
undefined4 DAT_00009d40;
undefined FUN_00007aec;
undefined4 DAT_00009e20;
undefined FUN_00007a28;

// WARNING: Control flow encountered bad instruction data

void FUN_00000000(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + (uint)(*(uint *)(param_1 + 0x80) < *(uint *)(param_1 + 0xa0)) * 0x20 + 0x80;
  if (*(int *)(iVar1 + 4) != 0) {
    FUN_0000447c(*(undefined2 *)(param_1 + 0x1ac),*(undefined2 *)(param_1 + 0x1ae),iVar1 + 0xc);
    *(undefined4 *)(iVar1 + 4) = 0;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000006c(undefined8 param_1,ulonglong param_2)

{
  undefined1 auStack_60 [72];
  uint auStack_18 [6];
  
  FUN_00007e5c(param_1,param_2 | 0x1000,1,auStack_18);
  if ((auStack_18[0] & 0x1000) != 0) {
    FUN_00007e08(0,auStack_60);
                    // WARNING: Subroutine does not return
    FUN_00007e44(param_1,0x1000);
  }
  FUN_00007e54(param_1,~param_2);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000000e4(int param_1)

{
  undefined1 auStack_58 [88];
  
  FUN_00007e10(*(undefined4 *)(param_1 + 0x10),auStack_58);
  FUN_00007e10(*(undefined4 *)(param_1 + 0x14),auStack_58);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00000164(int param_1)

{
  FUN_00007de8(*(undefined4 *)(param_1 + 0x10));
  FUN_00007de8(*(undefined4 *)(param_1 + 0x14));
  FUN_00007e3c(*(undefined4 *)(param_1 + 4));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000001a8(int param_1)

{
  undefined1 auStack_58 [88];
  
  FUN_00007e08(*(undefined4 *)(param_1 + 0x18c),auStack_58);
  FUN_00007e08(*(undefined4 *)(param_1 + 400),auStack_58);
  FUN_00007e08(*(undefined4 *)(param_1 + 0x198),auStack_58);
  FUN_00007e08(*(undefined4 *)(param_1 + 0x19c),auStack_58);
  FUN_00007e08(*(undefined4 *)(param_1 + 0x1a0),auStack_58);
  FUN_00007e08(*(undefined4 *)(param_1 + 0x1a4),auStack_58);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000002d8(int param_1)

{
  FUN_00007de8(*(undefined4 *)(param_1 + 0x18c));
  FUN_00007de8(*(undefined4 *)(param_1 + 400));
  FUN_00007de8(*(undefined4 *)(param_1 + 0x198));
  FUN_00007de8(*(undefined4 *)(param_1 + 0x19c));
  FUN_00007de8(*(undefined4 *)(param_1 + 0x1a0));
  FUN_00007de8(*(undefined4 *)(param_1 + 0x1a4));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00000340(void)

{
  FUN_00007e90();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Removing unreachable block (ram,0x000006ac)
// WARNING: Removing unreachable block (ram,0x00000828)
// WARNING: Removing unreachable block (ram,0x000006c4)
// WARNING: Removing unreachable block (ram,0x0000085c)
// WARNING: Removing unreachable block (ram,0x00000874)
// WARNING: Removing unreachable block (ram,0x00000704)
// WARNING: Removing unreachable block (ram,0x00000720)
// WARNING: Removing unreachable block (ram,0x00000738)
// WARNING: Removing unreachable block (ram,0x00000748)
// WARNING: Removing unreachable block (ram,0x000007e4)
// WARNING: Removing unreachable block (ram,0x00000800)
// WARNING: Removing unreachable block (ram,0x00000818)
// WARNING: Removing unreachable block (ram,0x000007bc)
// WARNING: Removing unreachable block (ram,0x000007d4)
// WARNING: Removing unreachable block (ram,0x0000087c)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00000360(void)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iStack_30;
  
  if ((DAT_000092a4 == 0) || (lVar1 = FUN_00007f18(DAT_000092a4), lVar1 < 0)) {
    iVar3 = 0;
    iStack_30 = 0;
    do {
      uVar2 = 0;
      iVar4 = 0;
      do {
        if (((int)(&DAT_00009260)[iVar3] >> (uVar2 & 0x1f) & 1U) != 0) {
          iStack_30 = iStack_30 + iVar4 + 0x8440;
          *(int *)(iStack_30 + 0x58) = *(int *)(iStack_30 + 0x180);
          *(undefined1 *)(iStack_30 + 0x69) = *(undefined1 *)(iStack_30 + 0xc4);
          *(undefined1 *)(iStack_30 + 0x6a) = *(undefined1 *)(iStack_30 + 0xc5);
          *(undefined1 *)(iStack_30 + 0x6b) = *(undefined1 *)(iStack_30 + 0xc6);
          *(int *)(iStack_30 + 0x180) = *(int *)(iStack_30 + 0x180) + 1;
          *(undefined4 *)(iStack_30 + 0x5c) = *(undefined4 *)(iStack_30 + 0x188);
          *(undefined1 *)(iStack_30 + 100) = *(undefined1 *)(iStack_30 + 0xc0);
          *(undefined1 *)(iStack_30 + 0x65) = *(undefined1 *)(iStack_30 + 0xc1);
          *(undefined1 *)(iStack_30 + 0x66) = *(undefined1 *)(iStack_30 + 0xc2);
          *(undefined1 *)(iStack_30 + 0x67) = *(undefined1 *)(iStack_30 + 0x168);
          *(undefined1 *)(iStack_30 + 0x68) = *(undefined1 *)(iStack_30 + 0xc3);
          *(undefined1 *)(iStack_30 + 0x6c) = *(undefined1 *)(iStack_30 + 0x106);
          *(undefined1 *)(iStack_30 + 0x6d) = *(undefined1 *)(iStack_30 + 0x16a);
          *(undefined1 *)(iStack_30 + 0x6e) = *(undefined1 *)(iStack_30 + 0x16b);
          *(undefined1 *)(iStack_30 + 0x6f) = *(undefined1 *)(iStack_30 + 0x174);
          *(undefined1 *)(iStack_30 + 0x70) = *(undefined1 *)(iStack_30 + 0x17c);
          *(undefined1 *)(iStack_30 + 0x71) = *(undefined1 *)(iStack_30 + 0x17e);
          *(undefined1 *)(iStack_30 + 0x72) = *(undefined1 *)(iStack_30 + 0x1b0);
          *(undefined1 *)(iStack_30 + 0x73) = *(undefined1 *)(iStack_30 + 0x1b2);
          *(undefined4 *)(iStack_30 + 0x20) = *(undefined4 *)(iStack_30 + 0x16c);
          *(undefined4 *)(iStack_30 + 0x24) = *(undefined4 *)(iStack_30 + 0x170);
                    // WARNING: Bad instruction - Truncating control flow here
          halt_baddata();
        }
        uVar2 = uVar2 + 1;
        iVar4 = iVar4 + 0x1c4;
      } while ((int)uVar2 < 4);
      iVar3 = iVar3 + 1;
      iStack_30 = iStack_30 + 0x710;
    } while (iVar3 < 2);
  }
  else if ((DAT_000082f8 != 0) &&
          (DAT_000082fc ==
           ((SUB164(SEXT416(DAT_000082fc) * SEXT416(-0x77777777),8) + DAT_000082fc >> 7) -
           (DAT_000082fc >> 0x1f)) * 0xf0)) {
    FUN_00007cd4(0x7ffc,DAT_000092a4);
    FUN_00007cd4("        SB_STAT = %08x\n",_DAT_bd000040);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000008b4(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_21 [33];
  
  puVar1 = auStack_21 + 1;
  iVar4 = 0;
  do {
    iVar3 = iVar4 + 1;
    *puVar1 = param_1[iVar4];
    puVar1 = auStack_21 + iVar4 + 2;
    iVar4 = iVar3;
  } while (iVar3 < 0x20);
  *param_1 = 0xff;
  iVar4 = 1;
  do {
    puVar2 = param_1 + iVar4;
    puVar1 = auStack_21 + iVar4;
    iVar4 = iVar4 + 1;
    *puVar2 = *puVar1;
  } while (iVar4 < 0x20);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00000924(int *param_1)

{
  longlong lVar1;
  
  DAT_00008320 = 0;
  DAT_000082fc = DAT_000082fc + 1;
  DAT_00008300 = DAT_00008300 + 1;
  if (param_1[2] != 0) {
    if (param_1[3] == 0) {
      param_1[3] = 1;
      FUN_00007e4c(param_1[1],1);
    }
    else if (299 < DAT_00008300) {
      if (DAT_000082f8 != 0) {
        FUN_00007cd4("padman: *** VBLANK OVERLAP ***\n");
      }
      DAT_00008300 = 0;
    }
  }
  if ((*param_1 == 1) && (lVar1 = FUN_000000e4(param_1), lVar1 == 0)) {
    FUN_00007e4c(param_1[1],8);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_00000a10(void)

{
  FUN_0000006c(DAT_0000926c,1,0x10,0);
  FUN_00005194();
                    // WARNING: Subroutine does not return
  FUN_00007e44(DAT_0000926c,4);
}



void FUN_00000d98(int param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  
  uVar1 = *(undefined2 *)(param_1 + 0x1ac);
  uVar2 = *(undefined2 *)(param_1 + 0x1ae);
  uVar4 = FUN_00005bf8(*(undefined1 *)(param_1 + 0xc1),*(undefined4 *)(param_1 + 0x1b8),
                       *(undefined1 *)(param_1 + 0xc2));
  FUN_00005250(uVar1,uVar2,uVar4);
  uVar4 = FUN_00005c90(*(undefined1 *)(param_1 + 0xc1),*(undefined4 *)(param_1 + 0x1b8));
  FUN_000052a0(uVar1,uVar2,uVar4);
  uVar4 = FUN_00005d64(*(undefined1 *)(param_1 + 0xc1));
  FUN_000052f0(uVar1,uVar2,uVar4);
  uVar4 = FUN_00005d24(*(undefined1 *)(param_1 + 0xc1));
  FUN_00005390(uVar1,uVar2,uVar4);
  uVar4 = FUN_00005d44(*(undefined1 *)(param_1 + 0xc1));
  FUN_00005498(uVar1,uVar2,uVar4);
  iVar5 = 0;
  iVar3 = param_1;
  do {
    iVar5 = iVar5 + 1;
    *(undefined1 *)(iVar3 + 0x108) = 0;
    *(undefined1 *)(iVar3 + 0x128) = 0;
    iVar3 = param_1 + iVar5;
  } while (iVar5 < 0x20);
  FUN_00005b68(*(undefined1 *)(param_1 + 0xc1),param_1 + 0x108);
  iVar3 = 0;
  if (*(short *)(param_1 + 0x174) != 0) {
    iVar5 = 3;
    do {
      if (*(char *)(param_1 + iVar3 + 0x176) == -1) {
        *(undefined1 *)(param_1 + iVar5 + 0x108) = 0;
      }
      else {
        *(undefined1 *)(param_1 + iVar5 + 0x108) = *(undefined1 *)(param_1 + iVar3 + 0x16c);
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 1;
    } while (iVar3 < (int)(uint)*(ushort *)(param_1 + 0x174));
  }
  FUN_000053e0(uVar1,uVar2,0,param_1 + 0x108);
                    // WARNING: Subroutine does not return
  FUN_00007e44(*(undefined4 *)(param_1 + 0x1a8),0x80);
}



void FUN_00000f74(int param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined2 *)(param_1 + 0x1ac);
  uVar2 = *(undefined2 *)(param_1 + 0x1ae);
  uVar3 = FUN_00005bf8(0,*(undefined4 *)(param_1 + 0x1b8),*(undefined1 *)(param_1 + 0xc2));
  FUN_00005250(uVar1,uVar2,uVar3);
  uVar3 = FUN_00005c90(0,*(undefined4 *)(param_1 + 0x1b8));
  FUN_000052a0(uVar1,uVar2,uVar3);
  uVar3 = FUN_00005d64(0);
  FUN_000052f0(uVar1,uVar2,uVar3);
  uVar3 = FUN_00005d24(0);
  FUN_00005390(uVar1,uVar2,uVar3);
  uVar3 = FUN_00005d44(0);
  FUN_00005498(uVar1,uVar2,uVar3);
  FUN_00005b68(0,param_1 + 0x108);
  FUN_000053e0(uVar1,uVar2,0,param_1 + 0x108);
                    // WARNING: Subroutine does not return
  FUN_00007e44(*(undefined4 *)(param_1 + 0x1a8),0x80);
}



void FUN_00001140(undefined1 param_1,int param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined2 *)(param_2 + 0x1ac);
  uVar2 = *(undefined2 *)(param_2 + 0x1ae);
  uVar3 = FUN_00005bf8(param_1,*(undefined4 *)(param_2 + 0x1b8),*(undefined1 *)(param_2 + 0xc2));
  FUN_00005250(uVar1,uVar2,uVar3);
  uVar3 = FUN_00005c90(param_1,*(undefined4 *)(param_2 + 0x1b8));
  FUN_000052a0(uVar1,uVar2,uVar3);
  uVar3 = FUN_00005d64(param_1);
  FUN_000052f0(uVar1,uVar2,uVar3);
  uVar3 = FUN_00005d24(param_1);
  FUN_00005390(uVar1,uVar2,uVar3);
  uVar3 = FUN_00005d44(param_1);
  FUN_00005498(uVar1,uVar2,uVar3);
  FUN_00005db4(param_1,param_2 + 0x108);
  FUN_000053e0(uVar1,uVar2,0,param_2 + 0x108);
                    // WARNING: Subroutine does not return
  FUN_00007e44(*(undefined4 *)(param_2 + 0x1a8),0x80);
}



void FUN_000012ac(int param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined2 *)(param_1 + 0x1ac);
  uVar2 = *(undefined2 *)(param_1 + 0x1ae);
  uVar3 = FUN_00005bf8(0xf3,*(undefined4 *)(param_1 + 0x1b8),*(undefined1 *)(param_1 + 0xc2));
  FUN_00005250(uVar1,uVar2,uVar3);
  uVar3 = FUN_00005c90(0xf3,*(undefined4 *)(param_1 + 0x1b8));
  FUN_000052a0(uVar1,uVar2,uVar3);
  uVar3 = FUN_00005d64(0xf3);
  FUN_000052f0(uVar1,uVar2,uVar3);
  uVar3 = FUN_00005d24(0xf3);
  FUN_00005390(uVar1,uVar2,uVar3);
  uVar3 = FUN_00005d44(0xf3);
  FUN_00005498(uVar1,uVar2,uVar3);
  FUN_00005e48(0xf3,param_1 + 0x108);
  FUN_000053e0(uVar1,uVar2,0,param_1 + 0x108);
                    // WARNING: Subroutine does not return
  FUN_00007e44(*(undefined4 *)(param_1 + 0x1a8),0x80);
}



void FUN_00001414(int param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined2 *)(param_1 + 0x1ac);
  uVar2 = *(undefined2 *)(param_1 + 0x1ae);
  uVar3 = FUN_00005bf8(0xf3,*(undefined4 *)(param_1 + 0x1b8),*(undefined1 *)(param_1 + 0xc2));
  FUN_00005250(uVar1,uVar2,uVar3);
  uVar3 = FUN_00005c90(0xf3,*(undefined4 *)(param_1 + 0x1b8));
  FUN_000052a0(uVar1,uVar2,uVar3);
  uVar3 = FUN_00005d64(0xf3);
  FUN_000052f0(uVar1,uVar2,uVar3);
  uVar3 = FUN_00005d24(0xf3);
  FUN_00005390(uVar1,uVar2,uVar3);
  uVar3 = FUN_00005d44(0xf3);
  FUN_00005498(uVar1,uVar2,uVar3);
  FUN_000062e8(0xf3,param_1 + 0x108);
  *(undefined1 *)(param_1 + 0x10b) = *(undefined1 *)(param_1 + 0x16a);
  *(undefined1 *)(param_1 + 0x10c) = *(undefined1 *)(param_1 + 0x16b);
  FUN_000053e0(uVar1,uVar2,0,param_1 + 0x108);
                    // WARNING: Subroutine does not return
  FUN_00007e44(*(undefined4 *)(param_1 + 0x1a8),0x80);
}



void FUN_0000159c(int param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = *(undefined2 *)(param_1 + 0x1ac);
  uVar2 = *(undefined2 *)(param_1 + 0x1ae);
  uVar4 = FUN_00005bf8(0xf3,*(undefined4 *)(param_1 + 0x1b8),*(undefined1 *)(param_1 + 0xc2));
  FUN_00005250(uVar1,uVar2,uVar4);
  uVar4 = FUN_00005c90(0xf3,*(undefined4 *)(param_1 + 0x1b8));
  FUN_000052a0(uVar1,uVar2,uVar4);
  uVar4 = FUN_00005d64(0xf3);
  FUN_000052f0(uVar1,uVar2,uVar4);
  uVar4 = FUN_00005d24(0xf3);
  FUN_00005390(uVar1,uVar2,uVar4);
  uVar4 = FUN_00005d44(0xf3);
  FUN_00005498(uVar1,uVar2,uVar4);
  FUN_0000637c(0xf3,param_1 + 0x108);
  iVar6 = 0;
  iVar5 = param_1;
  do {
    iVar3 = param_1 + iVar6;
    iVar6 = iVar6 + 1;
    *(undefined1 *)(iVar5 + 0x10b) = *(undefined1 *)(iVar3 + 0x176);
    iVar5 = iVar6 + param_1;
  } while (iVar6 < 6);
  FUN_000053e0(uVar1,uVar2,0,param_1 + 0x108);
                    // WARNING: Subroutine does not return
  FUN_00007e44(*(undefined4 *)(param_1 + 0x1a8),0x80);
}



void FUN_0000172c(int param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined2 *)(param_1 + 0x1ac);
  uVar2 = *(undefined2 *)(param_1 + 0x1ae);
  uVar3 = FUN_00005bf8(0xf3,*(undefined4 *)(param_1 + 0x1b8),*(undefined1 *)(param_1 + 0xc2));
  FUN_00005250(uVar1,uVar2,uVar3);
  uVar3 = FUN_00005c90(0xf3,*(undefined4 *)(param_1 + 0x1b8));
  FUN_000052a0(uVar1,uVar2,uVar3);
  uVar3 = FUN_00005d64(0xf3);
  FUN_000052f0(uVar1,uVar2,uVar3);
  uVar3 = FUN_00005d24(0xf3);
  FUN_00005390(uVar1,uVar2,uVar3);
  uVar3 = FUN_00005d44(0xf3);
  FUN_00005498(uVar1,uVar2,uVar3);
  FUN_00005edc(0xf3,param_1 + 0x108);
  FUN_000053e0(uVar1,uVar2,0,param_1 + 0x108);
                    // WARNING: Subroutine does not return
  FUN_00007e44(*(undefined4 *)(param_1 + 0x1a8),0x80);
}



void FUN_00001910(undefined1 param_1,int param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined2 *)(param_2 + 0x1ac);
  uVar2 = *(undefined2 *)(param_2 + 0x1ae);
  uVar3 = FUN_00005bf8(0xf3,*(undefined4 *)(param_2 + 0x1b8),*(undefined1 *)(param_2 + 0xc2));
  FUN_00005250(uVar1,uVar2,uVar3);
  uVar3 = FUN_00005c90(0xf3,*(undefined4 *)(param_2 + 0x1b8));
  FUN_000052a0(uVar1,uVar2,uVar3);
  uVar3 = FUN_00005d64(0xf3);
  FUN_000052f0(uVar1,uVar2,uVar3);
  uVar3 = FUN_00005d24(0xf3);
  FUN_00005390(uVar1,uVar2,uVar3);
  uVar3 = FUN_00005d44(0xf3);
  FUN_00005498(uVar1,uVar2,uVar3);
  FUN_00005f70(0xf3,param_2 + 0x108);
  *(undefined1 *)(param_2 + 0x10b) = param_1;
  FUN_000053e0(uVar1,uVar2,0,param_2 + 0x108);
                    // WARNING: Subroutine does not return
  FUN_00007e44(*(undefined4 *)(param_2 + 0x1a8),0x80);
}



void FUN_00001ac4(undefined1 param_1,int param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined2 *)(param_2 + 0x1ac);
  uVar2 = *(undefined2 *)(param_2 + 0x1ae);
  uVar3 = FUN_00005bf8(0xf3,*(undefined4 *)(param_2 + 0x1b8),*(undefined1 *)(param_2 + 0xc2));
  FUN_00005250(uVar1,uVar2,uVar3);
  uVar3 = FUN_00005c90(0xf3,*(undefined4 *)(param_2 + 0x1b8));
  FUN_000052a0(uVar1,uVar2,uVar3);
  uVar3 = FUN_00005d64(0xf3);
  FUN_000052f0(uVar1,uVar2,uVar3);
  uVar3 = FUN_00005d24(0xf3);
  FUN_00005390(uVar1,uVar2,uVar3);
  uVar3 = FUN_00005d44(0xf3);
  FUN_00005498(uVar1,uVar2,uVar3);
  FUN_00006004(0xf3,param_2 + 0x108);
  *(undefined1 *)(param_2 + 0x10b) = param_1;
  FUN_000053e0(uVar1,uVar2,0,param_2 + 0x108);
                    // WARNING: Subroutine does not return
  FUN_00007e44(*(undefined4 *)(param_2 + 0x1a8),0x80);
}



void FUN_00001c78(undefined1 param_1,int param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined2 *)(param_2 + 0x1ac);
  uVar2 = *(undefined2 *)(param_2 + 0x1ae);
  uVar3 = FUN_00005bf8(0xf3,*(undefined4 *)(param_2 + 0x1b8),*(undefined1 *)(param_2 + 0xc2));
  FUN_00005250(uVar1,uVar2,uVar3);
  uVar3 = FUN_00005c90(0xf3,*(undefined4 *)(param_2 + 0x1b8));
  FUN_000052a0(uVar1,uVar2,uVar3);
  uVar3 = FUN_00005d64(0xf3);
  FUN_000052f0(uVar1,uVar2,uVar3);
  uVar3 = FUN_00005d24(0xf3);
  FUN_00005390(uVar1,uVar2,uVar3);
  uVar3 = FUN_00005d44(0xf3);
  FUN_00005498(uVar1,uVar2,uVar3);
  FUN_00006098(0xf3,param_2 + 0x108);
  *(undefined1 *)(param_2 + 0x10b) = param_1;
  FUN_000053e0(uVar1,uVar2,0,param_2 + 0x108);
                    // WARNING: Subroutine does not return
  FUN_00007e44(*(undefined4 *)(param_2 + 0x1a8),0x80);
}



void FUN_00001e1c(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined2 *)(param_2 + 0x1ac);
  uVar2 = *(undefined2 *)(param_2 + 0x1ae);
  uVar3 = FUN_00005bf8(0xf3,*(undefined4 *)(param_2 + 0x1b8),*(undefined1 *)(param_2 + 0xc2));
  FUN_00005250(uVar1,uVar2,uVar3);
  uVar3 = FUN_00005c90(0xf3,*(undefined4 *)(param_2 + 0x1b8));
  FUN_000052a0(uVar1,uVar2,uVar3);
  uVar3 = FUN_00005d64(0xf3);
  FUN_000052f0(uVar1,uVar2,uVar3);
  FUN_00005390(uVar1,uVar2,9);
  FUN_00005498(uVar1,uVar2,9);
  FUN_00006254(0xf3,param_2 + 0x108);
  *(char *)(param_2 + 0x10b) = (char)param_1;
  *(undefined1 *)(param_2 + 0x10c) = *(undefined1 *)(param_2 + param_1 + 0xf8);
  FUN_000053e0(uVar1,uVar2,0,param_2 + 0x108);
                    // WARNING: Subroutine does not return
  FUN_00007e44(*(undefined4 *)(param_2 + 0x1a8),0x80);
}



void FUN_00001fa0(int param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined2 *)(param_1 + 0x1ac);
  uVar2 = *(undefined2 *)(param_1 + 0x1ae);
  uVar3 = FUN_00005bf8(0xf3,*(undefined4 *)(param_1 + 0x1b8),*(undefined1 *)(param_1 + 0xc2));
  FUN_00005250(uVar1,uVar2,uVar3);
  uVar3 = FUN_00005c90(0xf3,*(undefined4 *)(param_1 + 0x1b8));
  FUN_000052a0(uVar1,uVar2,uVar3);
  uVar3 = FUN_00005d64(0xf3);
  FUN_000052f0(uVar1,uVar2,uVar3);
  uVar3 = FUN_00005d24(0xf3);
  FUN_00005390(uVar1,uVar2,uVar3);
  uVar3 = FUN_00005d44(0xf3);
  FUN_00005498(uVar1,uVar2,uVar3);
  FUN_0000612c(0xf3,param_1 + 0x108);
  FUN_000053e0(uVar1,uVar2,0,param_1 + 0x108);
                    // WARNING: Subroutine does not return
  FUN_00007e44(*(undefined4 *)(param_1 + 0x1a8),0x80);
}



void FUN_0000214c(int param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = *(undefined2 *)(param_1 + 0x1ac);
  uVar2 = *(undefined2 *)(param_1 + 0x1ae);
  uVar4 = FUN_00005bf8(0xf3,*(undefined4 *)(param_1 + 0x1b8),*(undefined1 *)(param_1 + 0xc2));
  FUN_00005250(uVar1,uVar2,uVar4);
  uVar4 = FUN_00005c90(0xf3,*(undefined4 *)(param_1 + 0x1b8));
  FUN_000052a0(uVar1,uVar2,uVar4);
  uVar4 = FUN_00005d64(0xf3);
  FUN_000052f0(uVar1,uVar2,uVar4);
  uVar4 = FUN_00005d24(0xf3);
  FUN_00005390(uVar1,uVar2,uVar4);
  uVar4 = FUN_00005d44(0xf3);
  FUN_00005498(uVar1,uVar2,uVar4);
  FUN_000061c0(0xf3,param_1 + 0x108);
  iVar6 = 0;
  iVar5 = param_1;
  do {
    iVar3 = param_1 + iVar6;
    iVar6 = iVar6 + 1;
    *(undefined1 *)(iVar5 + 0x10b) = *(undefined1 *)(iVar3 + 0xf0);
    iVar5 = iVar6 + param_1;
  } while (iVar6 < 4);
  FUN_000053e0(uVar1,uVar2,0,param_1 + 0x108);
                    // WARNING: Subroutine does not return
  FUN_00007e44(*(undefined4 *)(param_1 + 0x1a8),0x80);
}



// WARNING: Control flow encountered bad instruction data

void FUN_000022dc(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  for (iVar5 = 0; iVar1 = FUN_000048f0(), iVar5 < iVar1; iVar5 = iVar5 + 1) {
    iVar1 = 0;
    for (uVar4 = 0; iVar2 = FUN_000048f8(iVar5), (int)uVar4 < iVar2; uVar4 = uVar4 + 1) {
      if ((((param_1 != iVar5) || (param_2 != uVar4)) &&
          (((int)(&DAT_00009260)[iVar5] >> (uVar4 & 0x1f) & 1U) != 0)) &&
         (iVar2 = iVar6 + iVar1 + 0x8440, *(char *)(iVar2 + 0xc1) != '\0')) {
        uVar3 = (uint)*(ushort *)(iVar2 + 0x174);
        iVar2 = 0;
        if (uVar3 != 0) {
          do {
            iVar2 = iVar2 + 1;
          } while (iVar2 < (int)uVar3);
        }
      }
      iVar1 = iVar1 + 0x1c4;
    }
    iVar6 = iVar6 + 0x710;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00002448(undefined8 param_1,undefined8 param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  
  iVar2 = FUN_000022dc();
  iVar7 = (int)param_1 * 0x710 + (int)param_2 * 0x1c4 + 0x8440;
  iVar5 = 0;
  iVar3 = iVar7;
  do {
    bVar1 = *(byte *)(iVar3 + 0x176);
    pcVar6 = (char *)(param_3 + (uint)bVar1);
    iVar4 = iVar2;
    if ((bVar1 != 0xff) && (*pcVar6 != '\0')) {
      iVar4 = iVar2 + (uint)*(byte *)(iVar7 + (uint)bVar1 * 4 + 0xcb);
      if (0x3c < iVar4) {
        if (DAT_000082f8 != 0) {
          FUN_00007cd4("padman: Over Consumpt Max [%d][%d]\n",param_1,param_2);
        }
        *pcVar6 = '\0';
        iVar4 = iVar2;
      }
    }
    iVar5 = iVar5 + 1;
    iVar3 = iVar7 + iVar5;
    iVar2 = iVar4;
  } while (iVar5 < 6);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_00002574(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 auStack_68 [4];
  int iStack_64;
  
  iVar7 = 0;
  FUN_00007e08(0,auStack_68);
  uVar1 = *(undefined2 *)(iStack_64 + 0x1ac);
  uVar2 = *(undefined2 *)(iStack_64 + 0x1ae);
LAB_000025c0:
  FUN_0000006c(*(undefined4 *)(iStack_64 + 0x1a8),1,0x10,0);
  FUN_00000000(iStack_64);
  lVar4 = FUN_00000d98(iStack_64);
  if (lVar4 != 1) goto LAB_000026b8;
  iVar7 = 0;
  if (*(char *)(iStack_64 + 0x12a) != 'Z') {
    uVar6 = *(undefined4 *)(iStack_64 + 400);
    *(undefined2 *)(iStack_64 + 0x168) = 0;
    *(undefined2 *)(iStack_64 + 0x17c) = 5;
    goto LAB_000026f4;
  }
  if (*(char *)(iStack_64 + 0x129) == *(char *)(iStack_64 + 0xc1)) {
    if (*(char *)(iStack_64 + 0x129) != -0xd) {
      iVar5 = 0;
      iVar3 = iStack_64;
      do {
        iVar5 = iVar5 + 1;
        *(undefined1 *)(iVar3 + 0x148) = *(undefined1 *)(iVar3 + 0x128);
        iVar3 = iStack_64 + iVar5;
      } while (iVar5 < 0x20);
      *(undefined2 *)(iStack_64 + 0x168) = 1;
      if (*(char *)(iStack_64 + 0xc0) == '\x01') {
        *(undefined2 *)(iStack_64 + 0x17c) = 2;
      }
      else {
        *(undefined2 *)(iStack_64 + 0x17c) = 6;
      }
      if ((*(short *)(iStack_64 + 0x17e) == 2) && (*(short *)(iStack_64 + 0x1b2) == 0)) {
        *(undefined2 *)(iStack_64 + 0x17e) = 0;
      }
      goto LAB_000025c0;
    }
    uVar6 = *(undefined4 *)(iStack_64 + 400);
    *(undefined2 *)(iStack_64 + 0x168) = 0;
    *(undefined2 *)(iStack_64 + 0x17c) = 5;
  }
  else {
    uVar6 = *(undefined4 *)(iStack_64 + 400);
    *(undefined2 *)(iStack_64 + 0x168) = 0;
    *(undefined2 *)(iStack_64 + 0x17c) = 5;
  }
  goto LAB_000026f4;
LAB_000026b8:
  *(undefined2 *)(iStack_64 + 0x168) = 0;
  *(undefined2 *)(iStack_64 + 0x17c) = 7;
  *(int *)(iStack_64 + 0x188) = *(int *)(iStack_64 + 0x188) + 1;
  iVar3 = FUN_00005340(uVar1,uVar2);
  iVar7 = iVar7 + iVar3;
  if (iVar7 < 10) goto LAB_000025c0;
  uVar6 = *(undefined4 *)(iStack_64 + 400);
LAB_000026f4:
  iVar7 = 0;
  *(undefined2 *)(iStack_64 + 0x1b0) = 2;
  FUN_00007df0(uVar6,0);
  goto LAB_000025c0;
}



void FUN_00002c54(void)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_58 [4];
  int iStack_54;
  
  iVar2 = 0;
  FUN_00007e08(0,auStack_58);
  *(undefined2 *)(iStack_54 + 0x168) = 0;
  *(undefined2 *)(iStack_54 + 0x17c) = 5;
  do {
    FUN_0000006c(*(undefined4 *)(iStack_54 + 0x1a8),8,0x10,0);
    lVar1 = FUN_00001140(*(undefined1 *)(iStack_54 + 0xc1),iStack_54);
    iVar2 = iVar2 + 1;
    if (lVar1 == 1) {
      iVar2 = 0;
      do {
        FUN_0000006c(*(undefined4 *)(iStack_54 + 0x1a8),8,0x10,0);
        lVar1 = FUN_00001414(iStack_54);
        iVar2 = iVar2 + 1;
        if (lVar1 == 1) {
          iVar2 = 0;
          do {
            FUN_0000006c(*(undefined4 *)(iStack_54 + 0x1a8),8,0x10,0);
            lVar1 = FUN_000012ac(iStack_54);
            iVar2 = iVar2 + 1;
            if (lVar1 == 1) {
                    // WARNING: Subroutine does not return
              *(undefined2 *)(iStack_54 + 0x1b0) = 1;
              FUN_00007df8();
            }
          } while (iVar2 < 10);
          *(undefined2 *)(iStack_54 + 0x17e) = 1;
                    // WARNING: Subroutine does not return
          *(undefined2 *)(iStack_54 + 0x1b0) = 1;
          FUN_00007df8();
        }
      } while (iVar2 < 10);
      *(undefined2 *)(iStack_54 + 0x17e) = 1;
                    // WARNING: Subroutine does not return
      *(undefined2 *)(iStack_54 + 0x1b0) = 1;
      FUN_00007df8();
    }
  } while (iVar2 < 10);
  *(undefined2 *)(iStack_54 + 0x17e) = 1;
                    // WARNING: Subroutine does not return
  *(undefined2 *)(iStack_54 + 0x1b0) = 1;
  FUN_00007df8();
}



void FUN_00002d8c(void)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_58 [4];
  int iStack_54;
  
  iVar2 = 0;
  FUN_00007e08(0,auStack_58);
  *(undefined2 *)(iStack_54 + 0x168) = 0;
  *(undefined2 *)(iStack_54 + 0x17c) = 5;
  do {
    FUN_0000006c(*(undefined4 *)(iStack_54 + 0x1a8),0x10,0x10,0);
    lVar1 = FUN_00001140(*(undefined1 *)(iStack_54 + 0xc1),iStack_54);
    iVar2 = iVar2 + 1;
    if (lVar1 == 1) {
      iVar2 = 0;
      do {
        FUN_0000006c(*(undefined4 *)(iStack_54 + 0x1a8),0x10,0x10,0);
        lVar1 = FUN_0000159c(iStack_54);
        iVar2 = iVar2 + 1;
        if (lVar1 == 1) {
          iVar2 = 0;
          do {
            FUN_0000006c(*(undefined4 *)(iStack_54 + 0x1a8),0x10,0x10,0);
            lVar1 = FUN_000012ac(iStack_54);
            iVar2 = iVar2 + 1;
            if (lVar1 == 1) {
                    // WARNING: Subroutine does not return
              *(undefined2 *)(iStack_54 + 0x1b0) = 1;
              FUN_00007df8();
            }
          } while (iVar2 < 10);
          *(undefined2 *)(iStack_54 + 0x17e) = 1;
                    // WARNING: Subroutine does not return
          *(undefined2 *)(iStack_54 + 0x1b0) = 1;
          FUN_00007df8();
        }
      } while (iVar2 < 10);
      *(undefined2 *)(iStack_54 + 0x17e) = 1;
                    // WARNING: Subroutine does not return
      *(undefined2 *)(iStack_54 + 0x1b0) = 1;
      FUN_00007df8();
    }
  } while (iVar2 < 10);
  *(undefined2 *)(iStack_54 + 0x17e) = 1;
                    // WARNING: Subroutine does not return
  *(undefined2 *)(iStack_54 + 0x1b0) = 1;
  FUN_00007df8();
}



void FUN_00002ec4(void)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_60 [4];
  int iStack_5c;
  
  iVar2 = 0;
  FUN_00007e08(0,auStack_60);
  *(undefined2 *)(iStack_5c + 0x168) = 0;
  *(undefined2 *)(iStack_5c + 0x17c) = 5;
  do {
    FUN_0000006c(*(undefined4 *)(iStack_5c + 0x1a8),0x20,0x10,0);
    lVar1 = FUN_00001140(*(undefined1 *)(iStack_5c + 0xc1),iStack_5c);
    iVar2 = iVar2 + 1;
    if (lVar1 == 1) {
      iVar2 = 0;
      do {
        FUN_0000006c(*(undefined4 *)(iStack_5c + 0x1a8),0x20,0x10,0);
        lVar1 = FUN_0000214c(iStack_5c);
        iVar2 = iVar2 + 1;
        if (lVar1 == 1) {
          iVar3 = 0;
          iVar2 = 0;
          do {
            while( true ) {
              FUN_0000006c(*(undefined4 *)(iStack_5c + 0x1a8),0x20,0x10,0);
              lVar1 = FUN_00001e1c(iVar3,iStack_5c);
              iVar2 = iVar2 + 1;
              if (lVar1 == 1) break;
              if (9 < iVar2) {
                *(undefined2 *)(iStack_5c + 0x17e) = 1;
                    // WARNING: Subroutine does not return
                *(undefined2 *)(iStack_5c + 0x1b0) = 1;
                FUN_00007df8();
              }
            }
            iVar3 = iVar3 + 1;
            iVar2 = 0;
          } while (iVar3 < 0xc);
          do {
            FUN_0000006c(*(undefined4 *)(iStack_5c + 0x1a8),0x20,0x10,0);
            lVar1 = FUN_000012ac(iStack_5c);
            iVar2 = iVar2 + 1;
            if (lVar1 == 1) {
              *(undefined2 *)(iStack_5c + 0x106) = 1;
                    // WARNING: Subroutine does not return
              *(undefined2 *)(iStack_5c + 0x1b0) = 1;
              FUN_00007df8();
            }
          } while (iVar2 < 10);
          *(undefined2 *)(iStack_5c + 0x17e) = 1;
                    // WARNING: Subroutine does not return
          *(undefined2 *)(iStack_5c + 0x1b0) = 1;
          FUN_00007df8();
        }
      } while (iVar2 < 10);
      *(undefined2 *)(iStack_5c + 0x17e) = 1;
                    // WARNING: Subroutine does not return
      *(undefined2 *)(iStack_5c + 0x1b0) = 1;
      FUN_00007df8();
    }
  } while (iVar2 < 10);
  *(undefined2 *)(iStack_5c + 0x17e) = 1;
                    // WARNING: Subroutine does not return
  *(undefined2 *)(iStack_5c + 0x1b0) = 1;
  FUN_00007df8();
}



void FUN_00003068(void)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_60 [4];
  int iStack_5c;
  
  iVar2 = 0;
  FUN_00007e08(0,auStack_60);
  *(undefined2 *)(iStack_5c + 0x168) = 0;
  *(undefined2 *)(iStack_5c + 0x17c) = 5;
  do {
    FUN_0000006c(*(undefined4 *)(iStack_5c + 0x1a8),0x40,0x10,0);
    lVar1 = FUN_00001140(*(undefined1 *)(iStack_5c + 0xc1),iStack_5c);
    iVar2 = iVar2 + 1;
    if (lVar1 == 1) {
      iVar3 = 0;
      iVar2 = 0;
      do {
        while( true ) {
          FUN_0000006c(*(undefined4 *)(iStack_5c + 0x1a8),0x40,0x10,0);
          lVar1 = FUN_00001e1c(iVar3,iStack_5c);
          iVar2 = iVar2 + 1;
          if (lVar1 == 1) break;
          if (9 < iVar2) {
            *(undefined2 *)(iStack_5c + 0x17e) = 1;
                    // WARNING: Subroutine does not return
            *(undefined2 *)(iStack_5c + 0x1b0) = 1;
            FUN_00007df8();
          }
        }
        iVar3 = iVar3 + 1;
        iVar2 = 0;
      } while (iVar3 < 0xc);
      do {
        FUN_0000006c(*(undefined4 *)(iStack_5c + 0x1a8),0x40,0x10,0);
        lVar1 = FUN_000012ac(iStack_5c);
        iVar2 = iVar2 + 1;
        if (lVar1 == 1) {
                    // WARNING: Subroutine does not return
          *(undefined2 *)(iStack_5c + 0x1b0) = 1;
          FUN_00007df8();
        }
      } while (iVar2 < 10);
      *(undefined2 *)(iStack_5c + 0x17e) = 1;
                    // WARNING: Subroutine does not return
      *(undefined2 *)(iStack_5c + 0x1b0) = 1;
      FUN_00007df8();
    }
  } while (iVar2 < 10);
  *(undefined2 *)(iStack_5c + 0x17e) = 1;
                    // WARNING: Subroutine does not return
  *(undefined2 *)(iStack_5c + 0x1b0) = 1;
  FUN_00007df8();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000031bc(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00007ebc(4,0x20,1);
  if ((lVar1 < 0) && (lVar1 = FUN_00007ebc(4,0x20,1), lVar1 < 0)) {
    FUN_00007cd4("Timer alloc faild\n");
  }
  else {
    uVar2 = FUN_00007ee4(lVar1);
    FUN_00007d24(uVar2,1,0x924,&DAT_00009268);
    FUN_00007ecc(lVar1,0);
    FUN_00007edc(lVar1,param_2);
    FUN_00007ed4(lVar1,0);
    FUN_00007ecc(lVar1,param_1);
    FUN_00007d34(uVar2);
    DAT_00009280 = (undefined4)lVar1;
    DAT_00009284 = (undefined4)uVar2;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000032bc(int param_1,int param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  char *pcVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  lVar6 = 0x14;
  lVar5 = 0x2e;
  iVar7 = 1;
  if (1 < param_1) {
    piVar4 = (int *)(param_2 + 4);
    do {
      lVar1 = FUN_00007fcc("thpri=",*piVar4,6);
      if (lVar1 == 0) {
        pcVar3 = (char *)(*piVar4 + 6);
        uVar2 = FUN_00007fbc(*(undefined1 *)(*piVar4 + 6));
        if (((uVar2 & 4) != 0) && (lVar6 = FUN_00007fd4(pcVar3,0,10), 0x72 < (int)lVar6 - 9U)) {
          pcVar3 = "PADMAN : invalid priority %d\n";
LAB_000033d4:
          FUN_00007d68(pcVar3);
          halt_baddata();
        }
        while (uVar2 = FUN_00007fbc(*pcVar3), (uVar2 & 4) != 0) {
          pcVar3 = pcVar3 + 1;
        }
        if (*pcVar3 == ',') {
          uVar2 = FUN_00007fbc(pcVar3[1]);
          if (((uVar2 & 4) != 0) && (lVar5 = FUN_00007fd4(pcVar3 + 1,0,10), 0x72 < (int)lVar5 - 9U))
          {
            pcVar3 = " SDR driver error: invalid priority %d\n";
            goto LAB_000033d4;
          }
        }
        if (lVar5 < lVar6) {
          FUN_00007d68("PADMAN : high prio thread must be higher than low prio thread\n");
          lVar5 = lVar6;
        }
      }
      iVar7 = iVar7 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar7 < param_1);
  }
  DAT_00009298 = (int)lVar5;
  DAT_00009294 = (int)lVar6;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00003448(longlong param_1)

{
  longlong lVar1;
  
  DAT_00008320 = 0;
  DAT_00009288 = 0;
  DAT_000092a4 = 0;
  DAT_000092a0 = 0;
  DAT_00009294 = 0x14;
  DAT_00009298 = 0x2e;
  if (1 < param_1) {
    FUN_000032bc();
  }
  if (((DAT_00009294 != 0x14) || (DAT_00009298 != 0x2e)) && (DAT_000082f8 != 0)) {
    FUN_00007cd4("padman: thread priority: high=%d, low=%d\n",DAT_00009294,DAT_00009298);
  }
  lVar1 = FUN_00007cf8(&UNK_00007c50);
  if (lVar1 == 0) {
    lVar1 = FUN_00007d00(&UNK_00007c50,2);
    if (((lVar1 == 0) && (lVar1 = FUN_00007b80(DAT_00009298), lVar1 == 0)) && (DAT_000082f8 != 0)) {
      FUN_00007cd4("padman: sif_init Faild\n");
    }
  }
  else if (DAT_000082f8 != 0) {
    FUN_00007cd4("padman: RegisterLibraryEntries Faild\n");
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00003590(void)

{
  FUN_00003858();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000035b0(undefined4 param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 auStack_60 [2];
  undefined4 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 auStack_38 [2];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 auStack_28 [10];
  
  if (DAT_00009288 == 1) {
    FUN_00003858();
  }
  DAT_0000928c = 0;
  DAT_000082f8 = 1;
  DAT_00009270 = 0;
  DAT_00009274 = 1;
  DAT_00009268 = 0;
  DAT_0000929c = 0;
  iVar2 = (int)param_2;
  DAT_000092a8 = 0xffffffff;
  DAT_00009290 = param_1;
  DAT_000092a0 = iVar2;
  FUN_00005910();
  FUN_000064c4();
  FUN_00006620();
  FUN_00006aa0();
  FUN_00006d64();
  FUN_00006770();
  FUN_00006c10();
  FUN_00006ed0();
  FUN_00006948();
  FUN_00007060();
  FUN_000073c0();
  FUN_00004968();
  DAT_00009260 = 0;
  DAT_00009264 = 0;
  auStack_60[0] = 2;
  uStack_58 = 0;
  DAT_0000926c = FUN_00007e34(auStack_60);
  if (DAT_0000926c != 0) {
    uStack_50 = 0x2000000;
    uStack_48 = 0xa10;
    uStack_4c = 0;
    uStack_44 = 0x800;
    uStack_40 = DAT_00009294;
    lVar1 = FUN_00007de0(&uStack_50);
    DAT_0000927c = (undefined4)lVar1;
    if (lVar1 != 0) {
      FUN_00007df0(lVar1,0);
      uStack_50 = 0x2000000;
      uStack_48 = 0xa54;
      uStack_4c = 1;
      uStack_44 = 0x1000;
      uStack_40 = DAT_00009298;
      lVar1 = FUN_00007de0(&uStack_50);
      DAT_00009278 = (undefined4)lVar1;
      if (lVar1 != 0) {
        FUN_00007df0(lVar1,0);
        auStack_38[0] = 0;
        uStack_30 = 0;
        uStack_2c = 0x10;
        lVar1 = FUN_00007e80(auStack_38);
        DAT_000092a8 = (undefined4)lVar1;
        if (-1 < lVar1) {
          if (param_2 < 1) {
            FUN_00007d3c(auStack_28);
            FUN_00007f90(0,0x10,0x924,&DAT_00009268);
            FUN_00007f90(1,0x10,0x910,&DAT_00009268);
          }
          else {
            if (0xc348 < iVar2 - 0x4123U) {
              halt_baddata();
            }
            DAT_000092a0 = (SUB164(SEXT416(iVar2 * 0x3d76) * SEXT416(0x431bde83),8) >> 0x12) -
                           (iVar2 * 0x3d76 >> 0x1f);
            FUN_00007d3c(auStack_28);
            FUN_000031bc(0x15a,DAT_000092a0);
          }
          FUN_00007d44(auStack_28[0]);
          DAT_00009270 = 1;
          DAT_00009288 = 1;
        }
      }
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00003858(void)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  if (DAT_00009288 == 0) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  iVar2 = 0;
  piVar3 = &DAT_00009260;
  do {
    uVar1 = 0;
    do {
      if ((*piVar3 >> (uVar1 & 0x1f) & 1U) != 0) {
        FUN_00003c78(iVar2,uVar1,1);
      }
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < 4);
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar2 < 2);
                    // WARNING: Subroutine does not return
  FUN_00007e44(DAT_0000926c,0x1000);
}



// WARNING: Control flow encountered bad instruction data

void FUN_000039cc(ulonglong param_1,ulonglong param_2,undefined4 param_3,int *param_4)

{
  longlong lVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  undefined4 auStack_48 [2];
  undefined4 uStack_40;
  undefined4 uStack_38;
  int iStack_34;
  code *pcStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if ((param_1 < 2) && (param_2 < 4)) {
    uVar2 = (uint)param_2;
    iVar4 = (int)param_1 * 0x710 + uVar2 * 0x1c4 + 0x8440;
    *param_4 = iVar4 + 0x80;
    puVar3 = &DAT_00009260 + (int)param_1;
    *(undefined4 *)(iVar4 + 0x80) = 0;
    *(undefined4 *)(iVar4 + 0xa0) = 0;
    *(undefined4 *)(iVar4 + 0x84) = 0;
    *(undefined4 *)(iVar4 + 0xa4) = 0;
    *(undefined4 *)(iVar4 + 0x88) = 0;
    *(undefined4 *)(iVar4 + 0xa8) = 0;
    if (((int)*puVar3 >> (uVar2 & 0x1f) & 1U) == 0) {
      *(short *)(iVar4 + 0x1ac) = (short)param_1;
      *(short *)(iVar4 + 0x1ae) = (short)param_2;
      *puVar3 = *puVar3 | 1 << (uVar2 & 0x1f);
      *(undefined2 *)(iVar4 + 0x17c) = 5;
      *(undefined1 *)(iVar4 + 0xc1) = 0;
      *(undefined2 *)(iVar4 + 0x17e) = 0;
      *(undefined4 *)(iVar4 + 0x180) = 0;
      *(undefined4 *)(iVar4 + 0x184) = param_3;
      *(undefined2 *)(iVar4 + 0x168) = 0;
      *(undefined2 *)(iVar4 + 0x174) = 0;
      *(undefined2 *)(iVar4 + 0x106) = 0;
      *(undefined2 *)(iVar4 + 0x1b0) = 0;
      *(undefined2 *)(iVar4 + 0x1b2) = 0;
      *(undefined4 *)(iVar4 + 0x1bc) = 0;
      *(undefined1 *)(iVar4 + 199) = 1;
      *(undefined4 *)(iVar4 + 0x1b8) = 0;
      auStack_48[0] = 2;
      uStack_40 = 0;
      lVar1 = FUN_00007e34(auStack_48);
      *(int *)(iVar4 + 0x1a8) = (int)lVar1;
      if (lVar1 != 0) {
        uStack_38 = 0x2000000;
        pcStack_30 = FUN_00002574;
        uStack_2c = 0x600;
        uStack_28 = DAT_00009298;
        iStack_34 = iVar4;
        lVar1 = FUN_00007de0(&uStack_38);
        *(int *)(iVar4 + 0x18c) = (int)lVar1;
        if (lVar1 != 0) {
          uStack_38 = 0x2000000;
          pcStack_30 = (code *)&UNK_00002704;
          uStack_2c = 0x600;
          uStack_28 = DAT_00009298;
          iStack_34 = iVar4;
          lVar1 = FUN_00007de0(&uStack_38);
          *(int *)(iVar4 + 400) = (int)lVar1;
          if (lVar1 != 0) {
            uStack_38 = 0x2000000;
            pcStack_30 = FUN_00002c54;
            uStack_2c = 0x400;
            uStack_28 = DAT_00009298;
            iStack_34 = iVar4;
            lVar1 = FUN_00007de0(&uStack_38);
            *(int *)(iVar4 + 0x198) = (int)lVar1;
            if (lVar1 != 0) {
              uStack_38 = 0x2000000;
              pcStack_30 = FUN_00002d8c;
              uStack_2c = 0x400;
              uStack_28 = DAT_00009298;
              iStack_34 = iVar4;
              lVar1 = FUN_00007de0(&uStack_38);
              *(int *)(iVar4 + 0x19c) = (int)lVar1;
              if (lVar1 != 0) {
                uStack_38 = 0x2000000;
                pcStack_30 = FUN_00002ec4;
                uStack_2c = 0x400;
                uStack_28 = DAT_00009298;
                iStack_34 = iVar4;
                lVar1 = FUN_00007de0(&uStack_38);
                *(int *)(iVar4 + 0x1a0) = (int)lVar1;
                if (lVar1 != 0) {
                  uStack_38 = 0x2000000;
                  pcStack_30 = FUN_00003068;
                  uStack_2c = 0x400;
                  uStack_28 = DAT_00009298;
                  iStack_34 = iVar4;
                  lVar1 = FUN_00007de0(&uStack_38);
                  *(int *)(iVar4 + 0x1a4) = (int)lVar1;
                  if ((lVar1 != 0) && (*(ushort *)(iVar4 + 0x1b0) < 2)) {
                    *(undefined2 *)(iVar4 + 0x1b0) = 1;
                    FUN_00007df0(*(undefined4 *)(iVar4 + 0x18c),0);
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

void FUN_00003c78(int param_1,uint param_2,longlong param_3)

{
  int iVar1;
  undefined4 auStack_10 [4];
  
  auStack_10[0] = 0;
  iVar1 = param_1 * 0x710 + param_2 * 0x1c4 + 0x8440;
  if ((((int)(&DAT_00009260)[param_1] >> (param_2 & 0x1f) & 1U) != 0) &&
     (*(short *)(iVar1 + 0x17e) != 2)) {
    *(undefined2 *)(iVar1 + 0x1b2) = 3;
    *(undefined4 *)(iVar1 + 0x1b4) = 0;
    *(undefined2 *)(iVar1 + 0x17e) = 2;
    *(int *)(iVar1 + 0x1c0) = (int)param_3;
    if (param_3 != 0) {
      FUN_00007e5c(*(undefined4 *)(iVar1 + 0x1a8),0x400,0x10,auStack_10);
      FUN_00007e3c(*(undefined4 *)(iVar1 + 0x1a8));
      *(undefined4 *)(iVar1 + 0x1a8) = 0;
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00004158(int param_1,int param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  
  iVar1 = param_1 * 0x710 + param_2 * 0x1c4 + 0x8440;
  if ((*(short *)(iVar1 + 0x1b0) != 1) || (*(byte *)(iVar1 + 0xc0) < 2)) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  if (param_3 == -1) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  if (param_3 < (longlong)(ulonglong)*(byte *)(iVar1 + 0xc5)) {
    if (param_4 == 1) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    if (param_4 == 2) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    if (param_4 == 3) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    if (param_4 == 4) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00004258(int param_1,int param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  
  iVar1 = param_1 * 0x710 + param_2 * 0x1c4 + 0x8440;
  if (*(short *)(iVar1 + 0x1b0) != 1) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  if (1 < *(byte *)(iVar1 + 0xc0)) {
    if (param_3 == -1) {
      halt_baddata();
    }
    if (param_3 < (longlong)(ulonglong)*(byte *)(iVar1 + 0xc6)) {
      if (param_4 == -1) {
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
      if (param_4 == 0) {
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
      if (param_4 == 1) {
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
      if (param_4 == 2) {
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00004344(int param_1,int param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  
  iVar1 = param_1 * 0x710 + param_2 * 0x1c4 + 0x8440;
  if ((*(short *)(iVar1 + 0x1b0) == 1) && (*(short *)(iVar1 + 0x17e) != 2)) {
    if (param_3 == 2) {
      if (*(char *)(iVar1 + 0xc0) != '\x01') {
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
    }
    else if (param_3 < 3) {
      if (param_3 != 1) {
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
      if (*(char *)(iVar1 + 0xc1) != -0xd) {
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
    }
    else if (param_3 == 3) {
      if (*(char *)(iVar1 + 0xc0) != '\x01') {
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
    }
    else {
      if (param_3 != 4) {
        halt_baddata();
      }
      if (*(char *)(iVar1 + 0xc0) != '\x01') {
        if (param_4 == -1) {
                    // WARNING: Bad instruction - Truncating control flow here
          halt_baddata();
        }
        if (param_4 < (longlong)(ulonglong)*(byte *)(iVar1 + 0xc3)) {
          halt_baddata();
        }
      }
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000447c(undefined8 param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)param_1 * 0x710 + param_2 * 0x1c4 + 0x8440;
  if ((*(char *)(iVar4 + 0xc0) != '\x01') && (*(short *)(iVar4 + 0x1b0) == 1)) {
    FUN_00002448(param_1,param_2,param_3);
    iVar3 = 0;
    iVar2 = iVar4;
    do {
      puVar1 = (undefined1 *)(param_3 + iVar3);
      iVar3 = iVar3 + 1;
      *(undefined1 *)(iVar2 + 0x16c) = *puVar1;
      iVar2 = iVar4 + iVar3;
    } while (iVar3 < 6);
    *(undefined2 *)(iVar4 + 0x174) = 6;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000453c(int param_1,int param_2,longlong param_3,undefined1 param_4)

{
  int iVar1;
  
  iVar1 = param_1 * 0x710 + param_2 * 0x1c4 + 0x8440;
  if (((*(short *)(iVar1 + 0x1b0) == 1) && (1 < *(byte *)(iVar1 + 0xc0))) &&
     (param_3 < (longlong)(ulonglong)*(byte *)(iVar1 + 0xc3))) {
    if (*(short *)(iVar1 + 0x17e) != 2) {
      *(char *)(iVar1 + 0x16a) = (char)param_3;
      *(undefined1 *)(iVar1 + 0x16b) = param_4;
      *(undefined2 *)(iVar1 + 0x1b2) = 4;
      *(undefined2 *)(iVar1 + 0x17e) = 2;
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000045ec(int param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_1 * 0x710 + param_2 * 0x1c4 + 0x8440;
  if (((*(short *)(iVar4 + 0x1b0) == 1) && (1 < *(byte *)(iVar4 + 0xc0))) &&
     (iVar3 = 0, iVar2 = iVar4, *(short *)(iVar4 + 0x17e) != 2)) {
    do {
      puVar1 = (undefined1 *)(param_3 + iVar3);
      iVar3 = iVar3 + 1;
      *(undefined1 *)(iVar2 + 0x176) = *puVar1;
      iVar2 = iVar4 + iVar3;
    } while (iVar3 < 6);
    *(undefined2 *)(iVar4 + 0x17e) = 2;
    *(undefined2 *)(iVar4 + 0x1b2) = 5;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000046a0(int param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_1 * 0x710 + param_2 * 0x1c4 + 0x8440;
  if ((((*(short *)(iVar4 + 0x1b0) == 1) && (1 < *(byte *)(iVar4 + 0xc0))) &&
      (1 < *(byte *)(iVar4 + 0xc2))) && (iVar3 = 0, iVar2 = iVar4, *(short *)(iVar4 + 0x17e) != 2))
  {
    do {
      puVar1 = (undefined1 *)(param_3 + iVar3);
      iVar3 = iVar3 + 1;
      *(undefined1 *)(iVar2 + 0xf8) = *puVar1;
      iVar2 = iVar4 + iVar3;
    } while (iVar3 < 0xc);
    *(undefined2 *)(iVar4 + 0x1b2) = 7;
    *(undefined2 *)(iVar4 + 0x17e) = 2;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00004768(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1 * 0x710 + param_2 * 0x1c4 + 0x8440;
  if ((((*(short *)(iVar3 + 0x1b0) == 1) && (1 < *(byte *)(iVar3 + 0xc0))) &&
      ((*(byte *)(iVar3 + 0xc2) & 2) != 0)) &&
     (param_3 = param_3 << 6, *(short *)(iVar3 + 0x17e) != 2)) {
    iVar2 = 0xb;
    iVar1 = iVar3 + 0xb;
    *(char *)(iVar3 + 0xf1) = (char)((uint)param_3 >> 8);
    *(char *)(iVar3 + 0xf2) = (char)((uint)param_3 >> 0x10);
    *(byte *)(iVar3 + 0xf0) = (byte)param_3 | 0x3f;
    *(char *)(iVar3 + 0xf3) = (char)((uint)param_3 >> 0x18);
    do {
      *(undefined1 *)(iVar1 + 0xf8) = 2;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + -1;
    } while (-1 < iVar2);
    *(undefined2 *)(iVar3 + 0x1b2) = 6;
    *(undefined2 *)(iVar3 + 0x17e) = 2;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000484c(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1 * 0x710 + param_2 * 0x1c4 + 0x8440;
  if (((*(short *)(iVar1 + 0x1b0) == 1) && (1 < *(byte *)(iVar1 + 0xc0))) &&
     (1 < *(byte *)(iVar1 + 0xc2))) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000048f8(void)

{
  FUN_00007db4();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00004918(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00004928(undefined4 param_1)

{
  DAT_000082f8 = param_1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00004938(undefined4 param_1)

{
  DAT_0000929c = param_1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00004950(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00004968(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = 0;
  do {
    iVar2 = 3;
    iVar1 = iVar3 + 0x138;
    do {
      *(undefined4 *)(iVar1 + 0x92b0) = 0;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + -0x68;
    } while (-1 < iVar2);
    *(undefined4 *)(iVar3 + 0x945c) = 0;
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 0x1a0;
  } while (iVar4 < 2);
  DAT_00009664 = &DAT_000096a8;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00004aa4(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_2 * 0x68 + param_1 * 0x1a0 + 0x92bc) = param_3;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00004af0(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00004b30(int param_1,uint param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 * 0x1a0 + param_3 * 0x68 + 0x92b0;
  FUN_00007fc4(DAT_00009664 + DAT_0000965c,iVar1 + 0x18,*(undefined4 *)(iVar1 + 0x10));
  DAT_0000965c = DAT_0000965c + *(int *)(iVar1 + 0x10);
  DAT_00009660 = DAT_00009660 + *(int *)(iVar1 + 0x14);
  *(undefined4 *)(param_2 * 4 + 0x95f4) = *(undefined4 *)(iVar1 + 0x58);
  *(undefined4 *)(param_2 * 4 + 0x9604) = *(undefined4 *)(iVar1 + 0x5c);
  *(uint *)(param_1 * 4 + 0x9618) = *(uint *)(iVar1 + 0x60) & 0xfffffffc | param_2 & 3;
  *(undefined4 *)((param_1 + 1) * 4 + 0x9618) = 0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00004c4c(undefined8 param_1,int param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  undefined1 *puVar3;
  int iVar4;
  
  if ((DAT_000095f0 >> 0xd & 1) == 1) {
    *(undefined4 *)(param_3 * 0x68 + param_2 * 0x1a0 + 0x9314) = 1;
  }
  else {
    lVar2 = FUN_00004950(param_1,&DAT_000095f0);
    if (lVar2 == 1) {
      *(undefined4 *)(param_3 * 0x68 + param_2 * 0x1a0 + 0x9314) = 1;
    }
    else {
      iVar1 = param_3 * 0x68 + param_2 * 0x1a0;
      *(undefined4 *)(iVar1 + 0x9314) = 0;
      iVar4 = 0;
      if (0 < *(int *)(iVar1 + 0x92c4)) {
        do {
          puVar3 = (undefined1 *)(DAT_00009668 + DAT_00009660);
          DAT_00009660 = DAT_00009660 + 1;
          *(undefined1 *)(iVar4 + param_3 * 0x68 + param_2 * 0x1a0 + 0x92e8) = *puVar3;
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(param_3 * 0x68 + param_2 * 0x1a0 + 0x92c4));
      }
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00004df8(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int aiStack_38 [14];
  
  lVar2 = 0;
  iVar4 = 0;
  iVar5 = (int)param_1;
  DAT_0000965c = 0;
  DAT_00009660 = 0;
  DAT_00009678 = 0;
  DAT_0000966c = 0;
  aiStack_38[1] = 0;
  aiStack_38[0] = 0;
  aiStack_38[3] = 0;
  aiStack_38[2] = 0;
  uVar3 = (uint)(*(int *)(iVar5 * 0x68 + 0x9454) == 99);
  uVar1 = uVar3;
  do {
    if ((*(int *)(iVar5 * 0x68 + uVar1 * 0x1a0 + 0x92b0) != 0) && ((&DAT_00009698)[uVar1] == 1)) {
      aiStack_38[uVar1] = 1;
      aiStack_38[uVar1 + 2] = (int)lVar2;
      lVar2 = FUN_00004b30(lVar2,uVar1,param_1);
    }
    iVar4 = iVar4 + 1;
    uVar1 = uVar1 ^ 1;
  } while (iVar4 < 2);
  if (param_1 != 0) {
    if ((*(int *)(iVar5 * 0x68 + 0x92b0) == 1) && (DAT_00009698 != 1)) {
      *(undefined4 *)(iVar5 * 0x68 + 0x9314) = 10;
    }
    if ((*(int *)(iVar5 * 0x68 + 0x9450) == 1) && (DAT_0000969c != 1)) {
      *(undefined4 *)(iVar5 * 0x68 + 0x94b4) = 10;
    }
  }
  if (lVar2 != 0) {
    FUN_00007d9c(&DAT_000095f0);
    DAT_00009660 = 0;
    iVar4 = 0;
    do {
      if (aiStack_38[uVar3] == 1) {
        FUN_00004c4c(aiStack_38[uVar3 + 2],uVar3,param_1);
        DAT_00009660 = *(undefined4 *)(iVar5 * 0x68 + uVar3 * 0x1a0 + 0x92c4);
      }
      iVar4 = iVar4 + 1;
      uVar3 = uVar3 ^ 1;
    } while (iVar4 < 2);
    uVar1 = FUN_00007d8c();
    FUN_00004aa4(0,param_1,uVar1 >> 4 & 1);
    FUN_00004aa4(1,param_1,uVar1 >> 5 & 1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000050b0(int param_1)

{
  DAT_00009688 = -1;
  DAT_0000968c = -1;
  DAT_00009690 = 0xffffffff;
  DAT_00009694 = 0xffffffff;
  if ((*(int *)(param_1 * 0x68 + 0x92b0) != 0) || (*(int *)(param_1 * 0x68 + 0x9450) != 0)) {
    if (*(int *)(param_1 * 0x68 + 0x92b0) == 1) {
      DAT_00009688 = param_1;
    }
    if (*(int *)(param_1 * 0x68 + 0x9450) == 1) {
      DAT_0000968c = param_1;
    }
    FUN_00007dac(&DAT_00009688);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00005194(void)

{
  int iVar1;
  int iVar2;
  
  FUN_00007d94();
  iVar1 = 0;
  iVar2 = 0;
  DAT_00008310 = DAT_00008310 + 1;
  do {
    if ((*(int *)(iVar2 + 0x92b0) == 1) || (*(int *)(iVar2 + 0x9450) == 1)) {
      if (0 < iVar1) {
        FUN_000050b0(iVar1);
      }
      FUN_00004df8(iVar1);
    }
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + 0x68;
  } while (iVar1 < 4);
  FUN_000050b0(0);
  FUN_00007da4();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00005250(ulonglong param_1,int param_2,undefined4 param_3)

{
  if (param_1 < 2) {
    *(undefined4 *)(param_2 * 0x68 + (int)param_1 * 0x1a0 + 0x9308) = param_3;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000052a0(ulonglong param_1,int param_2,undefined4 param_3)

{
  if (param_1 < 2) {
    *(undefined4 *)(param_2 * 0x68 + (int)param_1 * 0x1a0 + 0x930c) = param_3;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000052f0(ulonglong param_1,int param_2,undefined4 param_3)

{
  if (param_1 < 2) {
    *(undefined4 *)(param_2 * 0x68 + (int)param_1 * 0x1a0 + 0x9310) = param_3;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00005340(ulonglong param_1)

{
  if (param_1 < 2) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00005390(ulonglong param_1,int param_2,undefined4 param_3)

{
  if (param_1 < 2) {
    *(undefined4 *)(param_2 * 0x68 + (int)param_1 * 0x1a0 + 0x92c0) = param_3;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000053e0(ulonglong param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  
  if (param_1 < 2) {
    if (param_3 == 0) {
      param_3 = *(int *)(param_2 * 0x68 + (int)param_1 * 0x1a0 + 0x92c0);
    }
    iVar3 = 0;
    if (0 < param_3) {
      iVar1 = param_2 * 0x68;
      do {
        puVar2 = (undefined1 *)(param_4 + iVar3);
        iVar3 = iVar3 + 1;
        *(undefined1 *)(iVar1 + (int)param_1 * 0x1a0 + 0x92c8) = *puVar2;
        iVar1 = iVar3 + param_2 * 0x68;
      } while (iVar3 < param_3);
    }
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00005498(ulonglong param_1,int param_2,undefined4 param_3)

{
  if (param_1 < 2) {
    *(undefined4 *)(param_2 * 0x68 + (int)param_1 * 0x1a0 + 0x92c4) = param_3;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000055a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_30 [48];
  
  uVar1 = FUN_00005bf8(0,param_3,0);
  FUN_00005250(param_1,param_2,uVar1);
  uVar1 = FUN_00005c90(0,param_3);
  FUN_000052a0(param_1,param_2,uVar1);
  uVar1 = FUN_00005d64(0);
  FUN_000052f0(param_1,param_2,uVar1);
  uVar1 = FUN_00005d24(0);
  FUN_00005390(param_1,param_2,uVar1);
  uVar1 = FUN_00005d44(0);
  FUN_00005498(param_1,param_2,uVar1);
  FUN_00005b68(0,auStack_30);
  FUN_000053e0(param_1,param_2,0,auStack_30);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00005680(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  DAT_0000965c = 0;
  DAT_00009660 = 0;
  DAT_00009678 = 0;
  DAT_0000966c = 0;
  if ((&DAT_00009698)[iVar3] == 1) {
    uVar1 = FUN_00007d8c();
    if (param_1 == 0) {
      FUN_00004aa4(0,param_2,uVar1 >> 4 & 1);
    }
    if (param_1 == 1) {
      FUN_00004aa4(1,param_2,uVar1 >> 5 & 1);
    }
    FUN_00004b30(0,param_1,param_2);
    FUN_00007d9c(&DAT_000095f0);
    DAT_00009660 = 0;
    FUN_00004c4c(0,param_1,param_2);
    iVar2 = (int)param_2 * 0x68 + iVar3 * 0x1a0;
    DAT_00009660 = *(undefined4 *)(iVar2 + 0x92c4);
    if ((&DAT_00009698)[iVar3] != 1) {
      *(undefined4 *)(iVar2 + 0x9314) = 10;
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000057d4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_00007d94();
  DAT_00009690 = 0xffffffff;
  DAT_00009694 = 0xffffffff;
  DAT_00009688 = (undefined4)param_2;
  DAT_0000968c = DAT_00009688;
  FUN_00007dac(&DAT_00009688);
  uVar1 = FUN_00004af0(0,param_2);
  FUN_000055a0(0,param_2,uVar1);
  uVar1 = FUN_00004af0(1,param_2);
  FUN_000055a0(1,param_2,uVar1);
  FUN_00005680(param_1,param_2);
  DAT_00009690 = 0xffffffff;
  DAT_00009694 = 0xffffffff;
  DAT_00009688 = 0;
  DAT_0000968c = 0;
  FUN_00007dac();
  FUN_00007da4();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00005910(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0xf;
  iVar1 = 0x438;
  do {
    *(undefined1 *)(iVar1 + 0x98b0) = 0;
    iVar2 = iVar2 + -1;
    iVar1 = iVar1 + -0x48;
  } while (-1 < iVar2);
  DAT_00009d30 = 0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00005940(char *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((DAT_00009d30 + 1 < 0x10) && (param_1 != (char *)0x0)) {
    iVar1 = 0;
    if (0 < DAT_00009d30) {
      iVar2 = 0;
      do {
        iVar1 = iVar1 + 1;
        if (*param_1 == *(char *)(iVar2 + 0x98b0)) {
          halt_baddata();
        }
        iVar2 = iVar2 + 0x48;
      } while (iVar1 < DAT_00009d30);
    }
    *(char *)(DAT_00009d30 * 0x48 + 0x98b0) = *param_1;
    iVar1 = DAT_00009d30 * 0x48;
    *(undefined4 *)(iVar1 + 0x98b4) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(iVar1 + 0x98b8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(iVar1 + 0x98bc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(iVar1 + 0x98c0) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(iVar1 + 0x98c4) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(iVar1 + 0x98c8) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(iVar1 + 0x98cc) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(iVar1 + 0x98d0) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(iVar1 + 0x98d4) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(iVar1 + 0x98d8) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(iVar1 + 0x98dc) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(iVar1 + 0x98e0) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(iVar1 + 0x98e4) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(iVar1 + 0x98e8) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(iVar1 + 0x98ec) = *(undefined4 *)(param_1 + 0x3c);
    *(undefined4 *)(iVar1 + 0x98f0) = *(undefined4 *)(param_1 + 0x40);
    DAT_00009d30 = DAT_00009d30 + 1;
    *(undefined4 *)(iVar1 + 0x98f4) = *(undefined4 *)(param_1 + 0x44);
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00005b68(uint param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < DAT_00009d30) {
    iVar1 = 0;
    do {
      if (((param_1 & 0xff) >> 4 == (uint)*(byte *)(iVar1 + 0x98b0)) &&
         (*(code **)(iVar1 + 0x98b4) != FUN_00000000)) {
        (**(code **)(iVar1 + 0x98b4))(param_2);
        halt_baddata();
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x48;
    } while (iVar2 < DAT_00009d30);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00005bf8(uint param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < DAT_00009d30) {
    iVar1 = 0;
    do {
      if (((param_1 & 0xff) >> 4 == (uint)*(byte *)(iVar1 + 0x98b0)) &&
         (*(code **)(iVar1 + 0x98b8) != FUN_00000000)) {
        (**(code **)(iVar1 + 0x98b8))(param_2,param_3);
        halt_baddata();
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x48;
    } while (iVar2 < DAT_00009d30);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00005c90(uint param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < DAT_00009d30) {
    iVar1 = 0;
    do {
      if (((param_1 & 0xff) >> 4 == (uint)*(byte *)(iVar1 + 0x98b0)) &&
         (*(code **)(iVar1 + 0x98bc) != FUN_00000000)) {
        (**(code **)(iVar1 + 0x98bc))(param_2);
        halt_baddata();
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x48;
    } while (iVar2 < DAT_00009d30);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00005d24(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00005d44(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00005d64(undefined1 param_1)

{
  FUN_00005d24(param_1);
  FUN_00005d44(param_1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00005db4(uint param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < DAT_00009d30) {
    iVar1 = 0;
    do {
      if (((param_1 & 0xff) >> 4 == (uint)*(byte *)(iVar1 + 0x98b0)) &&
         (*(code **)(iVar1 + 0x98cc) != FUN_00000000)) {
        (**(code **)(iVar1 + 0x98cc))(param_2);
        halt_baddata();
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x48;
    } while (iVar2 < DAT_00009d30);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00005e48(uint param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < DAT_00009d30) {
    iVar1 = 0;
    do {
      if (((param_1 & 0xff) >> 4 == (uint)*(byte *)(iVar1 + 0x98b0)) &&
         (*(code **)(iVar1 + 0x98d0) != FUN_00000000)) {
        (**(code **)(iVar1 + 0x98d0))(param_2);
        halt_baddata();
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x48;
    } while (iVar2 < DAT_00009d30);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00005edc(uint param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < DAT_00009d30) {
    iVar1 = 0;
    do {
      if (((param_1 & 0xff) >> 4 == (uint)*(byte *)(iVar1 + 0x98b0)) &&
         (*(code **)(iVar1 + 0x98d4) != FUN_00000000)) {
        (**(code **)(iVar1 + 0x98d4))(param_2);
        halt_baddata();
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x48;
    } while (iVar2 < DAT_00009d30);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00005f70(uint param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < DAT_00009d30) {
    iVar1 = 0;
    do {
      if (((param_1 & 0xff) >> 4 == (uint)*(byte *)(iVar1 + 0x98b0)) &&
         (*(code **)(iVar1 + 0x98d8) != FUN_00000000)) {
        (**(code **)(iVar1 + 0x98d8))(param_2);
        halt_baddata();
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x48;
    } while (iVar2 < DAT_00009d30);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00006004(uint param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < DAT_00009d30) {
    iVar1 = 0;
    do {
      if (((param_1 & 0xff) >> 4 == (uint)*(byte *)(iVar1 + 0x98b0)) &&
         (*(code **)(iVar1 + 0x98dc) != FUN_00000000)) {
        (**(code **)(iVar1 + 0x98dc))(param_2);
        halt_baddata();
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x48;
    } while (iVar2 < DAT_00009d30);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00006098(uint param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < DAT_00009d30) {
    iVar1 = 0;
    do {
      if (((param_1 & 0xff) >> 4 == (uint)*(byte *)(iVar1 + 0x98b0)) &&
         (*(code **)(iVar1 + 0x98e0) != FUN_00000000)) {
        (**(code **)(iVar1 + 0x98e0))(param_2);
        halt_baddata();
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x48;
    } while (iVar2 < DAT_00009d30);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000612c(uint param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < DAT_00009d30) {
    iVar1 = 0;
    do {
      if (((param_1 & 0xff) >> 4 == (uint)*(byte *)(iVar1 + 0x98b0)) &&
         (*(code **)(iVar1 + 0x98e4) != FUN_00000000)) {
        (**(code **)(iVar1 + 0x98e4))(param_2);
        halt_baddata();
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x48;
    } while (iVar2 < DAT_00009d30);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000061c0(uint param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < DAT_00009d30) {
    iVar1 = 0;
    do {
      if (((param_1 & 0xff) >> 4 == (uint)*(byte *)(iVar1 + 0x98b0)) &&
         (*(code **)(iVar1 + 0x98e8) != FUN_00000000)) {
        (**(code **)(iVar1 + 0x98e8))(param_2);
        halt_baddata();
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x48;
    } while (iVar2 < DAT_00009d30);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00006254(uint param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < DAT_00009d30) {
    iVar1 = 0;
    do {
      if (((param_1 & 0xff) >> 4 == (uint)*(byte *)(iVar1 + 0x98b0)) &&
         (*(code **)(iVar1 + 0x98ec) != FUN_00000000)) {
        (**(code **)(iVar1 + 0x98ec))(param_2);
        halt_baddata();
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x48;
    } while (iVar2 < DAT_00009d30);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000062e8(uint param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < DAT_00009d30) {
    iVar1 = 0;
    do {
      if (((param_1 & 0xff) >> 4 == (uint)*(byte *)(iVar1 + 0x98b0)) &&
         (*(code **)(iVar1 + 0x98f0) != FUN_00000000)) {
        (**(code **)(iVar1 + 0x98f0))(param_2);
        halt_baddata();
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x48;
    } while (iVar2 < DAT_00009d30);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000637c(uint param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < DAT_00009d30) {
    iVar1 = 0;
    do {
      if (((param_1 & 0xff) >> 4 == (uint)*(byte *)(iVar1 + 0x98b0)) &&
         (*(code **)(iVar1 + 0x98f4) != FUN_00000000)) {
        (**(code **)(iVar1 + 0x98f4))(param_2);
        halt_baddata();
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x48;
    } while (iVar2 < DAT_00009d30);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00006480(void)

{
  FUN_00006470();
  FUN_00006478();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_000064c4(void)

{
  undefined1 auStack_50 [4];
  undefined *puStack_4c;
  undefined *puStack_48;
  undefined *puStack_44;
  code *pcStack_40;
  code *pcStack_3c;
  code *pcStack_38;
  undefined *puStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  puStack_4c = &UNK_00006410;
  puStack_48 = &UNK_00006430;
  puStack_44 = &UNK_00006450;
  pcStack_40 = FUN_00006480;
  pcStack_3c = FUN_00006470;
  pcStack_38 = FUN_00006478;
  auStack_50[0] = 0;
  puStack_34 = &UNK_000064bc;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
                    // WARNING: Subroutine does not return
  uStack_c = 0;
  FUN_00005940(auStack_50);
}



void FUN_00006620(void)

{
  undefined1 auStack_50 [4];
  undefined *puStack_4c;
  undefined *puStack_48;
  undefined *puStack_44;
  undefined *puStack_40;
  undefined *puStack_3c;
  undefined *puStack_38;
  undefined *puStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  auStack_50[0] = 1;
  puStack_4c = &UNK_00006570;
  puStack_48 = &UNK_00006598;
  puStack_44 = &UNK_000065b8;
  puStack_40 = &UNK_000065d8;
  puStack_3c = &UNK_000065e4;
  puStack_38 = &UNK_000065ec;
  puStack_34 = &UNK_000065f4;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
                    // WARNING: Subroutine does not return
  uStack_c = 0;
  FUN_00005940(auStack_50);
}



void FUN_00006770(void)

{
  undefined1 auStack_50 [4];
  undefined *puStack_4c;
  undefined *puStack_48;
  undefined *puStack_44;
  undefined *puStack_40;
  undefined *puStack_3c;
  undefined *puStack_38;
  undefined *puStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  auStack_50[0] = 4;
  puStack_4c = &UNK_000066d0;
  puStack_48 = &UNK_000066f0;
  puStack_44 = &UNK_00006710;
  puStack_40 = &UNK_00006730;
  puStack_3c = &UNK_0000673c;
  puStack_38 = &UNK_00006744;
  puStack_34 = &UNK_0000674c;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
                    // WARNING: Subroutine does not return
  uStack_c = 0;
  FUN_00005940(auStack_50);
}



void FUN_00006948(void)

{
  undefined1 auStack_50 [4];
  undefined *puStack_4c;
  undefined *puStack_48;
  undefined *puStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined *puStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  auStack_50[0] = 7;
  puStack_4c = &UNK_00006820;
  puStack_48 = &UNK_00006868;
  puStack_44 = &UNK_000068dc;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  puStack_34 = &UNK_000068fc;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
                    // WARNING: Subroutine does not return
  uStack_c = 0;
  FUN_00005940(auStack_50);
}



void FUN_00006aa0(void)

{
  undefined1 auStack_50 [4];
  undefined *puStack_4c;
  undefined *puStack_48;
  undefined *puStack_44;
  undefined *puStack_40;
  undefined *puStack_3c;
  undefined *puStack_38;
  undefined *puStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  auStack_50[0] = 2;
  puStack_4c = &UNK_000069e0;
  puStack_48 = &UNK_00006a10;
  puStack_44 = &UNK_00006a30;
  puStack_40 = &UNK_00006a50;
  puStack_3c = &UNK_00006a5c;
  puStack_38 = &UNK_00006a64;
  puStack_34 = &UNK_00006a6c;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
                    // WARNING: Subroutine does not return
  uStack_c = 0;
  FUN_00005940(auStack_50);
}



void FUN_00006c10(void)

{
  undefined1 auStack_50 [4];
  undefined *puStack_4c;
  undefined *puStack_48;
  undefined *puStack_44;
  undefined *puStack_40;
  undefined *puStack_3c;
  undefined *puStack_38;
  undefined *puStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  auStack_50[0] = 5;
  puStack_4c = &UNK_00006b50;
  puStack_48 = &UNK_00006b80;
  puStack_44 = &UNK_00006ba0;
  puStack_40 = &UNK_00006bc0;
  puStack_3c = &UNK_00006bcc;
  puStack_38 = &UNK_00006bd4;
  puStack_34 = &UNK_00006bdc;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
                    // WARNING: Subroutine does not return
  uStack_c = 0;
  FUN_00005940(auStack_50);
}



void FUN_00006d64(void)

{
  undefined1 auStack_50 [4];
  undefined *puStack_4c;
  undefined *puStack_48;
  undefined *puStack_44;
  undefined *puStack_40;
  undefined *puStack_3c;
  undefined *puStack_38;
  undefined *puStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  auStack_50[0] = 3;
  puStack_4c = &UNK_00006cc0;
  puStack_48 = &UNK_00006ce4;
  puStack_44 = &UNK_00006d04;
  puStack_40 = &UNK_00006d24;
  puStack_3c = &UNK_00006d30;
  puStack_38 = &UNK_00006d38;
  puStack_34 = &UNK_00006d40;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
                    // WARNING: Subroutine does not return
  uStack_c = 0;
  FUN_00005940(auStack_50);
}



void FUN_00006ed0(void)

{
  undefined1 auStack_50 [4];
  undefined *puStack_4c;
  undefined *puStack_48;
  undefined *puStack_44;
  undefined *puStack_40;
  undefined *puStack_3c;
  undefined *puStack_38;
  undefined *puStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  auStack_50[0] = 6;
  puStack_4c = &UNK_00006e10;
  puStack_48 = &UNK_00006e40;
  puStack_44 = &UNK_00006e60;
  puStack_40 = &UNK_00006e80;
  puStack_3c = &UNK_00006e8c;
  puStack_38 = &UNK_00006e94;
  puStack_34 = &UNK_00006e9c;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
                    // WARNING: Subroutine does not return
  uStack_c = 0;
  FUN_00005940(auStack_50);
}



void FUN_00007060(void)

{
  undefined1 auStack_50 [4];
  undefined *puStack_4c;
  undefined *puStack_48;
  undefined *puStack_44;
  undefined4 uStack_40;
  undefined *puStack_3c;
  undefined *puStack_38;
  undefined *puStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  auStack_50[0] = 0xe;
  puStack_4c = &UNK_00006f80;
  puStack_48 = &UNK_00006fc0;
  puStack_44 = &UNK_00006fe0;
  uStack_40 = 0x7000;
  puStack_3c = &UNK_0000700c;
  puStack_38 = &UNK_00007014;
  puStack_34 = &UNK_0000701c;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
                    // WARNING: Subroutine does not return
  uStack_c = 0;
  FUN_00005940(auStack_50);
}



void FUN_000073c0(void)

{
  undefined1 auStack_50 [4];
  undefined *puStack_4c;
  undefined *puStack_48;
  undefined *puStack_44;
  undefined *puStack_40;
  undefined *puStack_3c;
  undefined *puStack_38;
  undefined4 uStack_34;
  undefined *puStack_30;
  undefined *puStack_2c;
  undefined *puStack_28;
  undefined *puStack_24;
  undefined *puStack_20;
  undefined *puStack_1c;
  undefined *puStack_18;
  undefined *puStack_14;
  undefined *puStack_10;
  undefined *puStack_c;
  
  auStack_50[0] = 0xf;
  puStack_4c = &UNK_00007110;
  puStack_48 = &UNK_00007144;
  puStack_44 = &UNK_00007164;
  puStack_40 = &UNK_00007184;
  puStack_3c = &UNK_00007190;
  puStack_38 = &UNK_00007198;
  puStack_30 = &UNK_000071a0;
  puStack_2c = &UNK_000071d8;
  puStack_28 = &UNK_00007210;
  puStack_24 = &UNK_00007248;
  puStack_20 = &UNK_00007280;
  puStack_1c = &UNK_000072b8;
  puStack_18 = &UNK_000072f0;
  puStack_14 = &UNK_00007324;
  puStack_10 = &UNK_00007358;
  uStack_34 = 0;
                    // WARNING: Subroutine does not return
  puStack_c = &UNK_0000738c;
  FUN_00005940(auStack_50);
}



// WARNING: Control flow encountered bad instruction data

void FUN_000074b0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000035b0(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0xc) = uVar1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000074e8(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00003858();
  *(undefined4 *)(param_1 + 0xc) = uVar1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00007514(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00004928(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 8) = uVar1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00007548(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00004918();
  *(undefined4 *)(param_1 + 0xc) = uVar1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00007574(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000039cc(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                       *(undefined4 *)(param_1 + 0x10),param_1 + 0x14);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000075b0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00003c78(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                       *(undefined4 *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0xc) = uVar1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000075ec(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00004158(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                       *(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x14) = uVar1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000762c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00004258(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                       *(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x14) = uVar1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000766c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00004344(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                       *(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x14) = uVar1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000076ac(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0000453c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                       *(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x14) = uVar1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000076ec(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0000447c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00007724(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000045ec(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000775c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0000484c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 0xc) = uVar1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00007794(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00004768(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                       *(undefined4 *)(param_1 + 0xc));
  *(undefined4 *)(param_1 + 0x10) = uVar1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000077d0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000046a0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00007808(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000048f0();
  *(undefined4 *)(param_1 + 0xc) = uVar1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00007834(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000048f8(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 0xc) = uVar1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00007868(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00004938(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 8) = uVar1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000789c(undefined8 param_1,int *param_2)

{
  if (*param_2 - 1U < 0x18) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  FUN_00007d68("invalid function code (%03x)\n",*param_2);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00007a28(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00007f20();
  if (lVar1 == 0) {
    FUN_00007d68("yet sif hasn\'t been init\n");
    FUN_00007f08();
  }
  FUN_00007f4c(0);
  uVar2 = FUN_00007e00();
  FUN_00007f5c(&DAT_00009d44,uVar2);
  FUN_00007f54(&DAT_00009d5c,0xffffffff80000100,FUN_0000789c,&DAT_00009da0);
  FUN_00007f64(&DAT_00009d44);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00007abc(void)

{
  FUN_00007d68("Extend Service : this service is not support\n");
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00007aec(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00007f20();
  if (lVar1 == 0) {
    FUN_00007d68("yet sif hasn\'t been init\n");
    FUN_00007f08();
  }
  FUN_00007f4c(0);
  uVar2 = FUN_00007e00();
  FUN_00007f5c(&DAT_00009e24,uVar2);
  FUN_00007f54(&DAT_00009e3c,0xffffffff80000101,FUN_00007abc,&DAT_00009e80);
  FUN_00007f64(&DAT_00009e24);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00007b80(longlong param_1)

{
  longlong lVar1;
  undefined4 auStack_30 [2];
  code *pcStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  if (param_1 == 0) {
    param_1 = 0x2e;
  }
  auStack_30[0] = 0x2000000;
  pcStack_28 = FUN_00007a28;
  uStack_24 = 0x800;
  uStack_20 = (int)param_1;
  lVar1 = FUN_00007de0(auStack_30);
  DAT_00009d40 = (undefined4)lVar1;
  if (lVar1 != 0) {
    FUN_00007df0(lVar1,0);
    auStack_30[0] = 0x2000000;
    pcStack_28 = FUN_00007aec;
    uStack_24 = 0x800;
    uStack_20 = (int)param_1;
    lVar1 = FUN_00007de0(auStack_30);
    DAT_00009e20 = (undefined4)lVar1;
    if (lVar1 != 0) {
      FUN_00007df0(lVar1,0);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}


