typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
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



undefined4 DAT_000037b8;
undefined UNK_00001328;
int DAT_0000381c;
int DAT_000037b8;
undefined4 DAT_0000381c;
ushort DAT_00001374;
undefined4 DAT_00001380;
uint DAT_00001384;
uint DAT_00001388;

// WARNING: Control flow encountered bad instruction data

void FUN_00000040(int param_1,int *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int iStack_20;
  
  if (param_1 < 0) {
    FUN_00000158(-param_1);
  }
  else {
    lVar1 = FUN_00001074(0);
    if (lVar1 == 0) {
      iStack_20 = 0x68;
      iVar4 = 0;
      iVar3 = 0x68;
      if (0 < param_1) {
        do {
          lVar1 = FUN_000010dc(&UNK_00001328,*param_2,6);
          iStack_20 = iVar3;
          if ((lVar1 == 0) && (iStack_20 = FUN_000010e4(*param_2 + 6,0,10), 0x72 < iStack_20 - 9U))
          {
            FUN_00001108("mcserv.irx: thread prority definition ignored.\n");
            iStack_20 = 0x68;
          }
          iVar4 = iVar4 + 1;
          param_2 = param_2 + 1;
          iVar3 = iStack_20;
        } while (iVar4 < param_1);
      }
      uStack_30 = 0x2000000;
      uStack_24 = 0x1000;
      uStack_2c = 0;
      uStack_28 = 0x280;
      uVar2 = FUN_000011bc(&uStack_30);
      DAT_000037b8 = (undefined4)uVar2;
      FUN_000011cc(uVar2,0);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00000158(void)

{
  longlong lVar1;
  undefined4 auStack_10 [4];
  
  if (DAT_0000381c == 0) {
    FUN_000010a0(auStack_10);
    lVar1 = FUN_0000107c(0);
    FUN_000010a8(auStack_10[0]);
    if ((lVar1 == 0) || (lVar1 == -0xd5)) {
      FUN_000011d4(DAT_000037b8);
      FUN_000011c4(DAT_000037b8);
      FUN_00001190(0x37d8,0x37c0);
      FUN_00001198(0x37c0);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00000200(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_50 [32];
  undefined4 uStack_30;
  
  if ((int)param_1 - 9U < 0x73) {
    FUN_000011ec(0,auStack_50);
    FUN_000011dc(0,8);
    if ((DAT_000037b8 < 1) || (lVar1 = FUN_000011dc(DAT_000037b8,param_1), -1 < lVar1)) {
      FUN_000011dc(0,uStack_30);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00000280(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_000010d4(0x37a8,0,0x10);
  lVar1 = FUN_00001144();
  if (lVar1 == 0) {
    FUN_0000112c();
  }
  FUN_00001168(0);
  uVar2 = FUN_000011e4();
  FUN_00001178(0x37c0,uVar2);
  FUN_00001170(0x37d8,0xffffffff80000400,0x324,0x3390);
  FUN_00001180(0x37c0);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00000324(ulonglong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_000012f4();
  FUN_00001220(uVar2);
  DAT_0000381c = 1;
  if (param_1 == 0xe) {
    DAT_00001380 = FUN_00000f64(0x3390);
  }
  else if (param_1 < 0xf) {
    if (param_1 == 5) {
      DAT_00001380 = FUN_000007ac(0x3390);
    }
    else if (param_1 < 6) {
      if (param_1 == 2) {
        DAT_00001380 = FUN_00000728(0x3390);
      }
      else if (param_1 < 3) {
        if (param_1 == 1) {
          DAT_00001380 = FUN_00000d8c(0x3390);
        }
      }
      else if (param_1 == 3) {
        DAT_00001380 = FUN_00000758(0x3390);
      }
      else if (param_1 == 4) {
        DAT_00001380 = FUN_0000077c(0x3390);
      }
    }
    else if (param_1 == 10) {
      DAT_00001380 = FUN_00000f40(0x3390);
    }
    else if (param_1 < 0xb) {
      if (param_1 == 6) {
        DAT_00001380 = FUN_00000a30(0x3390);
      }
    }
    else if (param_1 == 0xc) {
      DAT_00001380 = FUN_00000c94(0x3390);
    }
    else if (param_1 == 0xd) {
      DAT_00001380 = FUN_00000b3c(0x3390);
    }
  }
  else if (param_1 == 0x14) {
    DAT_00001380 = FUN_000006c8(0x3390);
  }
  else if (param_1 < 0x15) {
    if (param_1 == 0x10) {
      DAT_00001380 = FUN_00000d34(0x3390);
    }
    else if (param_1 < 0x10) {
      DAT_00001380 = FUN_00000f10(0x3390);
    }
    else if (param_1 == 0x11) {
      DAT_00001380 = FUN_00000d60(0x3390);
    }
    else if (param_1 == 0x12) {
      DAT_00001380 = FUN_00000ee4(0x3390);
    }
  }
  else if (param_1 == 0x1b) {
    DAT_00001380 = FUN_00001028(0x3390);
  }
  else if (param_1 < 0x1c) {
    if (param_1 == 0x15) {
      DAT_00001380 = FUN_00000704(0x3390);
    }
    else if (param_1 == 0x16) {
      DAT_00001380 = FUN_00000ff8(0x3390);
    }
  }
  else if (param_1 == 0x33) {
    DAT_00001380 = FUN_00000fc8(0x3390);
  }
  else if (param_1 == 0xfe) {
    DAT_00001380 = FUN_000006a4(0x3390);
    DAT_00001384 = (uint)DAT_00001374;
    iVar1 = FUN_000012e4();
    DAT_00001388 = (uint)*(ushort *)(iVar1 + 4);
    FUN_000012fc();
  }
  FUN_000012b4();
  uVar2 = FUN_000012f4();
  FUN_00001218(uVar2);
  DAT_0000381c = 0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000006a4(undefined4 *param_1)

{
  FUN_000012cc(*param_1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000006c8(int param_1)

{
  if (*(int *)(param_1 + 0x14) - 9U < 0x73) {
    FUN_000011dc(0);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00000704(int param_1)

{
  FUN_000012bc(*(undefined4 *)(param_1 + 4));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00000728(undefined4 *param_1)

{
  FUN_00001244(*param_1,param_1[1],param_1 + 5,param_1[2]);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00000758(undefined4 *param_1)

{
  FUN_0000124c(*param_1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000077c(undefined4 *param_1)

{
  FUN_00001264(*param_1,param_1[4],param_1[5]);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000007ac(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iStack_f8;
  uint uStack_f4;
  int iStack_f0;
  int iStack_ec;
  undefined1 auStack_e8 [64];
  undefined1 auStack_a8 [112];
  int *piStack_38;
  int iStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  undefined4 auStack_28 [10];
  
  iVar1 = param_1[6];
  iStack_f0 = 0;
  iStack_ec = 0;
  iVar9 = param_1[3];
  iStack_f8 = iVar9;
  if (0x40 < iVar9) {
    iStack_f8 = (iVar1 - 1U & 0xffffffc0) - (iVar1 + -0x40);
  }
  uStack_f4 = iVar9 - iStack_f8 & 0x3f;
  uVar8 = (iVar9 - iStack_f8) - uStack_f4;
  if (uStack_f4 != 0) {
    iStack_ec = iVar1 + iStack_f8 + uVar8;
  }
  iVar9 = iVar1;
  if (iStack_f8 == 0) {
joined_r0x00000898:
    do {
      if (uVar8 == 0) {
        if ((uStack_f4 != 0) &&
           (uStack_f4 = FUN_00001254(*param_1,auStack_a8), iVar3 = iStack_f8, (int)uStack_f4 < 0))
        goto LAB_0000086c;
        break;
      }
      uVar10 = uVar8;
      if (0x2000 < (int)uVar8) {
        uVar10 = 0x2000;
      }
      uVar4 = FUN_00001254(*param_1,0x1390,uVar10);
      iVar3 = iStack_f8;
      if ((int)uVar4 < 0) goto LAB_0000086c;
      uVar7 = uVar4 & 0x3f;
      uVar2 = uVar4;
      if (uVar4 == uVar10) {
LAB_00000934:
        uStack_30 = uVar2;
        piStack_38 = (int *)0x1390;
        uStack_2c = 0;
        iStack_34 = iVar9;
        FUN_000010a0(auStack_28);
        FUN_00001134(&piStack_38,1);
        FUN_000010a8(auStack_28[0]);
      }
      else {
        uStack_f4 = uVar7;
        if (uVar7 != 0) {
          iStack_ec = iVar9 + (uVar4 & 0xffffffc0);
          FUN_000010cc(auStack_a8,(uVar4 & 0xffffffc0) + 0x1390);
        }
        if (uVar4 != uStack_f4) {
          uVar2 = uVar4 - uStack_f4;
          goto LAB_00000934;
        }
      }
      uVar8 = uVar8 - uVar4;
      iVar9 = iVar9 + uVar4;
    } while (uVar4 == uVar10);
  }
  else {
    iVar3 = FUN_00001254(*param_1,auStack_e8);
    if (iVar3 < 0) {
      iStack_f8 = 0;
      iVar3 = iStack_f8;
    }
    else {
      iVar9 = iVar1 + iVar3;
      iStack_f0 = iVar1;
      if (iStack_f8 == iVar3) goto joined_r0x00000898;
    }
LAB_0000086c:
    iStack_f8 = iVar3;
    uStack_f4 = 0;
  }
  piStack_38 = &iStack_f8;
  iStack_34 = param_1[7];
  uStack_30 = 0xc0;
  uStack_2c = 0;
  FUN_000010a0(auStack_28);
  uVar5 = FUN_00001134(&piStack_38,1);
  FUN_000010a8(auStack_28[0]);
  while (lVar6 = FUN_0000113c(uVar5), -1 < lVar6) {
    FUN_000011f4(100);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00000a30(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_38 [56];
  
  if ((param_1[5] == 0) || (iVar1 = FUN_0000125c(*param_1,param_1 + 8), iVar1 == param_1[5])) {
    iVar1 = param_1[3];
    while (iVar1 != 0) {
      iVar2 = 0x2000;
      if ((int)param_1[3] < 0x2001) {
        iVar2 = param_1[3];
      }
      FUN_00001188(auStack_38,param_1[6],0x1390,iVar2);
      iVar1 = FUN_0000125c(*param_1,0x1390,iVar2);
      if (iVar1 != iVar2) {
        halt_baddata();
      }
      param_1[3] = param_1[3] - iVar2;
      iVar1 = param_1[3];
      param_1[6] = param_1[6] + iVar2;
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00000b3c(undefined4 *param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 auStack_28 [10];
  
  uVar3 = param_1[2];
  lVar4 = 0;
  if ((int)param_1[3] < 0) {
    FUN_00001274(*param_1,param_1[1],param_1 + 5,uVar3 & 0xffff);
  }
  else {
    iVar2 = param_1[3] + -1;
    param_1[3] = iVar2;
    while (iVar2 != -1) {
      lVar1 = FUN_00001274(*param_1,param_1[1],param_1 + 5,uVar3 & 0xffff);
      if (lVar1 < 0) {
        halt_baddata();
      }
      if (lVar1 == 0) break;
      uStack_38 = 0x1390;
      uStack_34 = param_1[4];
      uStack_30 = 0x40;
      uStack_2c = 0;
      FUN_000010a0(auStack_28);
      lVar4 = FUN_00001134(&uStack_38,1);
      FUN_000010a8(auStack_28[0]);
      uVar3 = 1;
      iVar2 = param_1[3] + -1;
      param_1[4] = param_1[4] + 0x40;
      param_1[3] = iVar2;
    }
    if (lVar4 != 0) {
      while (lVar1 = FUN_0000113c(lVar4), -1 < lVar1) {
        FUN_000011f4(100);
      }
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00000c94(undefined4 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 auStack_18 [6];
  
  FUN_0000128c(*param_1,param_1[1],param_1 + 5,0x1390);
  uStack_28 = 0x1390;
  uStack_24 = param_1[4];
  uStack_20 = 0x400;
  uStack_1c = 0;
  FUN_000010a0(auStack_18);
  uVar1 = FUN_00001134(&uStack_28,1);
  FUN_000010a8(auStack_18[0]);
  while (lVar2 = FUN_0000113c(uVar1), -1 < lVar2) {
    FUN_000011f4(100);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00000d34(int param_1)

{
  FUN_0000126c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00000d60(int param_1)

{
  FUN_000012c4(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00000d8c(int param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  uint uStack_58;
  undefined4 *puStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 auStack_18 [6];
  
  lVar3 = 0;
  lVar1 = FUN_0000129c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
  if (*(int *)(param_1 + 0x14) != 0) {
    uStack_e8 = FUN_000012dc(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
  }
  if (lVar1 < -1) {
    uStack_e4 = 0;
    uStack_58 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      lVar3 = FUN_000012d4(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
      if (lVar3 < 0) {
        lVar3 = -0xb;
        uStack_e4 = 0;
        uStack_e8 = 0;
        uStack_58 = 0;
      }
      else {
        uStack_e4 = (undefined4)lVar3;
      }
    }
    if ((*(int *)(param_1 + 0xc) != 0) && (-1 < lVar3)) {
      lVar1 = FUN_000012a4(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
      uStack_58 = (uint)(0 < lVar1);
    }
  }
  puStack_28 = &uStack_e8;
  uStack_24 = *(undefined4 *)(param_1 + 0x1c);
  uStack_20 = 0xc0;
  uStack_1c = 0;
  FUN_000010a0(auStack_18);
  uVar2 = FUN_00001134(&puStack_28,1);
  FUN_000010a8(auStack_18[0]);
  while (lVar1 = FUN_0000113c(uVar2), -1 < lVar1) {
    FUN_000011f4(100);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00000ee4(undefined4 *param_1)

{
  FUN_000012ac(*param_1,param_1[1],param_1 + 5);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00000f10(undefined4 *param_1)

{
  FUN_0000127c(*param_1,param_1[1],param_1 + 5,param_1[2]);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00000f40(undefined4 *param_1)

{
  FUN_00001284(*param_1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00000f64(undefined4 *param_1)

{
  undefined1 auStack_30 [48];
  
  FUN_00001188(auStack_30,param_1[4],0x1390,0x40);
  FUN_00001294(*param_1,param_1[1],param_1 + 5,0x1390);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00000fc8(int param_1)

{
  FUN_000012ec(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
               *(undefined4 *)(param_1 + 0x10));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00000ff8(undefined4 *param_1)

{
  FUN_00001304(*param_1,param_1[6],param_1[3]);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00001028(undefined4 *param_1)

{
  FUN_0000130c(*param_1,param_1[6],param_1[3]);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}


