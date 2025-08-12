typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
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



undefined s_PsIIlibsd_3100_00005490;
undefined4 DAT_00005650;
undefined DAT_00005680;
undefined DAT_00005688;
undefined DAT_00005690;
undefined DAT_00004db8;
undefined DAT_000055f4;
undefined DAT_000055fc;
undefined DAT_00005600;
undefined4 DAT_00005cd8;
undefined DAT_bf90019a;
undefined DAT_bf9002e0;
undefined DAT_bf9002e2;
undefined DAT_bf900764;
undefined DAT_bf900766;
undefined DAT_bf801404;
undefined DAT_bf80140c;
undefined DAT_bf8010f0;
undefined DAT_bf801570;
undefined DAT_bf900000;
undefined DAT_bf9007c0;
undefined DAT_bf90059a;
undefined DAT_bf900188;
undefined DAT_bf90018a;
undefined DAT_bf900190;
undefined DAT_bf900192;
undefined DAT_bf90018c;
undefined DAT_bf90018e;
undefined DAT_bf900194;
undefined DAT_bf900196;
undefined DAT_bf900588;
undefined DAT_bf90058a;
undefined DAT_bf900590;
undefined DAT_bf900592;
undefined DAT_bf90058c;
undefined DAT_bf90058e;
undefined DAT_bf900594;
undefined DAT_bf900596;
undefined DAT_bf900198;
undefined DAT_bf900598;
undefined DAT_bf900760;
undefined DAT_bf900762;
undefined DAT_bf900788;
undefined DAT_bf90078a;
undefined DAT_bf90078c;
undefined DAT_bf90078e;
undefined DAT_bf90033c;
undefined DAT_bf90073c;
undefined DAT_bf900768;
undefined DAT_bf90076a;
undefined DAT_bf900790;
undefined DAT_bf900792;
undefined DAT_bf90076c;
undefined DAT_bf90076e;
undefined DAT_bf900794;
undefined DAT_bf900796;
undefined4 DAT_000054a4;
undefined4 DAT_000054ac;
undefined4 DAT_00005618;
undefined4 DAT_00005620;
undefined4 DAT_00005640;
undefined4 DAT_00005644;
undefined4 DAT_00005658;
undefined DAT_bf9001b0;
undefined DAT_bf9005b0;
undefined DAT_bf900344;
undefined DAT_bf900744;
undefined DAT_bf9001a4;
undefined DAT_bf9001a6;
undefined DAT_bf9005a4;
undefined DAT_bf9005a6;
undefined DAT_bf900180;
undefined DAT_bf900182;
undefined DAT_bf900580;
undefined DAT_bf900582;
undefined DAT_bf900184;
undefined DAT_bf900186;
undefined DAT_bf900584;
undefined DAT_bf900586;
undefined DAT_bf9001ac;
undefined4 DAT_00005638;
undefined DAT_00005ca0;
undefined DAT_00005ca8;
undefined DAT_00005cb0;
undefined4 DAT_00005cd0;
undefined DAT_bf9007c6;
undefined DAT_bf9007c8;
uint DAT_000055e0;
undefined4 DAT_000055e0;
undefined4 DAT_0000565c;
undefined4 DAT_0000562c;
undefined4 DAT_00005630;
undefined4 DAT_00005634;
undefined *DAT_00005630;
undefined *DAT_0000562c;
undefined DAT_bf9007c2;
undefined DAT_bf9001a8;
undefined DAT_bf9001aa;
undefined DAT_bf9005a0;
undefined DAT_bf9001a0;
undefined DAT_bf9005a2;
undefined DAT_bf9001a2;
undefined DAT_bf900342;
undefined DAT_bf900340;
undefined DAT_bf900742;
undefined DAT_bf900740;
undefined2 DAT_00005668;
undefined DAT_bf9001c0;
undefined DAT_bf900400;
undefined DAT_bf9005c0;
undefined4 DAT_000054a8;
undefined4 DAT_000054b0;
undefined4 DAT_0000561c;
undefined4 DAT_0000563c;
undefined4 DAT_00005654;
undefined4 DAT_00005660;
undefined4 DAT_00005664;
undefined4 DAT_00005648;
undefined4 DAT_0000564c;
undefined4 DAT_00005cd4;
undefined4 DAT_00005cdc;
undefined DAT_bf9006e0;
undefined DAT_bf9006e2;
int DAT_00005620;
int DAT_00005624;
undefined FUN_000029ec;
undefined4 DAT_00005628;
undefined FUN_00004220;

void FUN_000000b0(void)

{
  undefined4 auStack_10 [4];
  
  FUN_00004ab4(auStack_10);
  FUN_00004af0(0);
                    // WARNING: Subroutine does not return
  FUN_00004abc(auStack_10[0]);
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00000110(int param_1,int param_2,int param_3)

{
  *(short *)((param_1 * 0x200 + param_2) * 2 + ram0x000054a0) =
       (short)((uint)(param_3 << 2) >> 0x10);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0000013c(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  
  uVar1 = *param_2;
  bVar2 = uVar1 == 0;
  if ((bVar2) || ((uVar1 & 1) != 0)) {
    FUN_00000110(param_1,0x172,(short)param_2[1]);
  }
  if ((bVar2) || ((uVar1 & 2) != 0)) {
    FUN_00000110(param_1,0x174,*(undefined2 *)((int)param_2 + 6));
  }
  iVar3 = (int)param_1;
  if ((bVar2) || ((uVar1 & 4) != 0)) {
    *(short *)(iVar3 * 0x28 + ram0x000054a0 + 0x774) = (short)param_2[2];
  }
  if ((bVar2) || ((uVar1 & 8) != 0)) {
    *(undefined2 *)(iVar3 * 0x28 + ram0x000054a0 + 0x776) = *(undefined2 *)((int)param_2 + 10);
  }
  if ((bVar2) || ((uVar1 & 0x10) != 0)) {
    *(short *)(iVar3 * 0x28 + ram0x000054a0 + 0x778) = (short)param_2[3];
  }
  if ((bVar2) || ((uVar1 & 0x20) != 0)) {
    *(undefined2 *)(iVar3 * 0x28 + ram0x000054a0 + 0x77a) = *(undefined2 *)((int)param_2 + 0xe);
  }
  if ((bVar2) || ((uVar1 & 0x40) != 0)) {
    *(short *)(iVar3 * 0x28 + ram0x000054a0 + 0x77c) = (short)param_2[4];
  }
  if ((bVar2) || ((uVar1 & 0x80) != 0)) {
    *(undefined2 *)(iVar3 * 0x28 + ram0x000054a0 + 0x77e) = *(undefined2 *)((int)param_2 + 0x12);
  }
  if ((bVar2) || ((uVar1 & 0x100) != 0)) {
    *(short *)(iVar3 * 0x28 + ram0x000054a0 + 0x780) = (short)param_2[5];
  }
  if ((bVar2) || ((uVar1 & 0x200) != 0)) {
    *(undefined2 *)(iVar3 * 0x28 + ram0x000054a0 + 0x782) = *(undefined2 *)((int)param_2 + 0x16);
  }
  if ((bVar2) || ((uVar1 & 0x400) != 0)) {
    FUN_00000110(param_1,0x176,(short)param_2[6]);
  }
  if ((bVar2) || ((uVar1 & 0x800) != 0)) {
    FUN_00000110(param_1,0x178,*(undefined2 *)((int)param_2 + 0x1a));
  }
  if ((bVar2) || ((uVar1 & 0x1000) != 0)) {
    FUN_00000110(param_1,0x17a,(short)param_2[7]);
  }
  if ((bVar2) || ((uVar1 & 0x2000) != 0)) {
    FUN_00000110(param_1,0x17c,*(undefined2 *)((int)param_2 + 0x1e));
  }
  if ((bVar2) || ((uVar1 & 0x4000) != 0)) {
    FUN_00000110(param_1,0x17e,(short)param_2[8]);
  }
  if ((bVar2) || ((uVar1 & 0x8000) != 0)) {
    FUN_00000110(param_1,0x180,*(undefined2 *)((int)param_2 + 0x22));
  }
  if ((bVar2) || ((uVar1 & 0x10000) != 0)) {
    FUN_00000110(param_1,0x182,(short)param_2[9]);
  }
  if ((bVar2) || ((uVar1 & 0x20000) != 0)) {
    FUN_00000110(param_1,0x184,*(undefined2 *)((int)param_2 + 0x26));
  }
  if ((bVar2) || ((uVar1 & 0x40000) != 0)) {
    FUN_00000110(param_1,0x186,(short)param_2[10]);
  }
  if ((bVar2) || ((uVar1 & 0x80000) != 0)) {
    FUN_00000110(param_1,0x188,*(undefined2 *)((int)param_2 + 0x2a));
  }
  if ((bVar2) || ((uVar1 & 0x100000) != 0)) {
    FUN_00000110(param_1,0x18a,(short)param_2[0xb]);
  }
  if ((bVar2) || ((uVar1 & 0x200000) != 0)) {
    FUN_00000110(param_1,0x18c,*(undefined2 *)((int)param_2 + 0x2e));
  }
  if ((bVar2) || ((uVar1 & 0x400000) != 0)) {
    FUN_00000110(param_1,0x18e,(short)param_2[0xc]);
  }
  if ((bVar2) || ((uVar1 & 0x800000) != 0)) {
    FUN_00000110(param_1,400,*(undefined2 *)((int)param_2 + 0x32));
  }
  if ((bVar2) || ((uVar1 & 0x1000000) != 0)) {
    FUN_00000110(param_1,0x192,(short)param_2[0xd]);
  }
  if ((bVar2) || ((uVar1 & 0x2000000) != 0)) {
    FUN_00000110(param_1,0x194,*(undefined2 *)((int)param_2 + 0x36));
  }
  if ((bVar2) || ((uVar1 & 0x4000000) != 0)) {
    FUN_00000110(param_1,0x196,(short)param_2[0xe]);
  }
  if ((bVar2) || ((uVar1 & 0x8000000) != 0)) {
    FUN_00000110(param_1,0x198,*(undefined2 *)((int)param_2 + 0x3a));
  }
  if ((bVar2) || ((uVar1 & 0x10000000) != 0)) {
    FUN_00000110(param_1,0x19a,(short)param_2[0xf]);
  }
  if ((bVar2) || ((uVar1 & 0x20000000) != 0)) {
    FUN_00000110(param_1,0x19c,*(undefined2 *)((int)param_2 + 0x3e));
  }
  if ((bVar2) || ((uVar1 & 0x40000000) != 0)) {
    *(short *)(iVar3 * 0x28 + ram0x000054a0 + 0x784) = (short)param_2[0x10];
  }
  if ((bVar2) || ((int)uVar1 < 0)) {
    *(undefined2 *)(iVar3 * 0x28 + ram0x000054a0 + 0x786) = *(undefined2 *)((int)param_2 + 0x42);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00000660(undefined8 param_1,int param_2,byte param_3)

{
  if ((param_3 < 10) && (param_3 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_00002358(param_2 << 4 | 4);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_00000888(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 * 4;
  *(int *)(&DAT_00005688 + iVar1) = *(int *)(&DAT_00005688 + iVar1) + 1;
  if (*(int *)(&DAT_00005680 + iVar1) + -1 <= *(int *)(&DAT_00005688 + iVar1)) {
    (&DAT_00005650)[param_1] = 0;
  }
                    // WARNING: Subroutine does not return
  FUN_00002358(param_1 << 4 | 2,
               *(undefined4 *)
                (&DAT_00005690 + *(int *)(&DAT_00005688 + iVar1) * 8 + param_1 * 0x308));
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000097c(undefined8 param_1,int param_2,byte param_3)

{
  if ((param_3 < 10) && (param_3 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_00002358(param_2 << 4 | 4);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00000b90(undefined1 *param_1,undefined1 *param_2,longlong param_3)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = (int)param_3 + -1;
  if (param_3 != 0) {
    do {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      iVar2 = iVar2 + -1;
      *param_1 = uVar1;
      param_1 = param_1 + 1;
    } while (iVar2 != -1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Removing unreachable block (ram,0x00000fa4)
// WARNING: Removing unreachable block (ram,0x00000df8)
// WARNING: Removing unreachable block (ram,0x00000ed0)
// WARNING: Removing unreachable block (ram,0x00000f20)
// WARNING: Removing unreachable block (ram,0x00000ee0)
// WARNING: Removing unreachable block (ram,0x00000f2c)
// WARNING: Removing unreachable block (ram,0x00000fac)
// WARNING: Removing unreachable block (ram,0x00000fb4)
// WARNING: Removing unreachable block (ram,0x00000fcc)

void FUN_00000c2c(undefined8 param_1,int param_2)

{
  bool bVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  ushort *puVar9;
  undefined4 uStack_88;
  short sStack_84;
  short sStack_82;
  short sStack_76;
  short sStack_70;
  short sStack_6e;
  short sStack_6c;
  short sStack_6a;
  short sStack_64;
  short sStack_62;
  short sStack_50;
  short sStack_4e;
  short sStack_4c;
  short sStack_4a;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  
  iVar8 = (int)param_1;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_88 = 0;
  uVar3 = *(uint *)(param_2 + 4);
  puVar9 = (ushort *)(&DAT_bf90019a + iVar8 * 0x400);
  bVar1 = (uVar3 & 0x100) != 0;
  if (bVar1) {
    uStack_38 = *(undefined4 *)(&DAT_000055f4 + iVar8 * 0x14);
  }
  uVar7 = uVar3 & 0xff;
  if (9 < uVar7) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  iVar6 = iVar8 * 0x14;
  iStack_34 = iVar8 << 9;
  *(uint *)(&DAT_000055f4 + iVar6) = uVar7;
  iVar5 = FUN_00001100(param_1);
  (&DAT_00005cd8)[iVar8] = iVar5 - (*(int *)(&DAT_00004db8 + uVar7 * 4) * 8 + -1);
  FUN_00000b90(&uStack_88,*(int *)(&DAT_000055f4 + iVar6) * 0x44 + 0x4de0,0x44);
  if (uVar7 == 7) {
    *(undefined4 *)(&DAT_00005600 + iVar6) = 0x80;
    *(undefined4 *)(&DAT_000055fc + iVar6) = 0x80;
  }
  else if (uVar7 == 8) {
    *(undefined4 *)(&DAT_00005600 + iVar6) = 0;
    *(undefined4 *)(&DAT_000055fc + iVar6) = 0x80;
  }
  else {
    *(undefined4 *)(&DAT_00005600 + iVar8 * 0x14) = 0;
    *(undefined4 *)(&DAT_000055fc + iVar8 * 0x14) = 0;
  }
  if (uVar7 < 9) {
    if (6 < uVar7) {
      uStack_30 = 1;
      uVar4 = *(undefined4 *)(param_2 + 0xc);
      *(undefined4 *)(&DAT_000055fc + iVar8 * 0x14) = uVar4;
      sStack_50 = (short)uVar4 + 1;
      sStack_70 = sStack_50 * 0x40 - sStack_84;
      sStack_50 = sStack_50 * 0x20;
      sStack_6e = sStack_50 - sStack_82;
      sStack_64 = sStack_62 + sStack_50;
      sStack_6c = sStack_6a + sStack_50;
      sStack_4e = sStack_4a + sStack_50;
      sStack_50 = sStack_4c + sStack_50;
    }
    if ((uVar7 < 9) && (6 < uVar7)) {
      uVar4 = *(undefined4 *)(param_2 + 0x10);
      *(undefined4 *)(&DAT_00005600 + iVar8 * 0x14) = uVar4;
      sStack_76 = (short)uVar4 * 0x102;
    }
  }
  uVar2 = *puVar9;
  if ((uVar2 >> 7 & 1) == 0) {
    *(undefined2 *)(&DAT_bf900764 + iVar8 * 0x28) = *(undefined2 *)(param_2 + 8);
    *(undefined2 *)(&DAT_bf900766 + iVar8 * 0x28) = *(undefined2 *)(param_2 + 10);
    FUN_0000013c(param_1,&uStack_88);
    *(ushort *)(&DAT_bf9002e0 + iStack_34 * 2) = (ushort)((uint)(&DAT_00005cd8)[iVar8] >> 0x11);
    *(ushort *)(&DAT_bf9002e2 + iStack_34 * 2) = (ushort)((uint)(&DAT_00005cd8)[iVar8] >> 1);
    uStack_40 = (uint)*(ushort *)(&DAT_bf9002e2 + iStack_34 * 2);
    if (bVar1) {
      FUN_00000660(param_1,bVar1 && (uVar3 & 0x200) != 0,uVar7);
    }
    if ((uVar2 >> 7 & 1) == 0) {
                    // WARNING: Subroutine does not return
      FUN_00002050();
    }
    FUN_00004ab4(&uStack_3c);
    *puVar9 = *puVar9 | 0x80;
    uStack_40 = (uint)*puVar9;
                    // WARNING: Subroutine does not return
    FUN_00004abc(uStack_3c);
  }
  FUN_00004ab4(&uStack_3c);
  *puVar9 = *puVar9 & 0xff7f;
                    // WARNING: Subroutine does not return
  FUN_00004abc(uStack_3c);
}



// WARNING: Control flow encountered bad instruction data

void FUN_00001100(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00001128(undefined8 param_1,int param_2)

{
  bool bVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  ushort *puVar11;
  int iVar12;
  undefined4 auStack_70 [19];
  undefined4 auStack_24 [9];
  
  iVar12 = (int)param_1;
  auStack_70[0] = 0;
  uVar3 = *(uint *)(param_2 + 4);
  puVar11 = (ushort *)(&DAT_bf90019a + iVar12 * 0x400);
  bVar1 = (uVar3 & 0x100) != 0;
  uVar10 = uVar3 & 0xff;
  if (uVar10 < 10) {
    iVar7 = iVar12 * 0x14;
    *(uint *)(&DAT_000055f4 + iVar7) = uVar10;
    *(undefined4 *)(&DAT_000055fc + iVar7) = 0;
    *(undefined4 *)(&DAT_00005600 + iVar7) = 0;
    iVar7 = FUN_00001100(param_1);
    puVar9 = auStack_70;
    puVar8 = (undefined4 *)(uVar10 * 0x44 + 0x4de0);
    (&DAT_00005cd8)[iVar12] = iVar7 - (*(int *)(&DAT_00004db8 + uVar10 * 4) * 8 + -1);
    do {
      uVar4 = puVar8[1];
      uVar5 = puVar8[2];
      uVar6 = puVar8[3];
      *puVar9 = *puVar8;
      puVar9[1] = uVar4;
      puVar9[2] = uVar5;
      puVar9[3] = uVar6;
      puVar8 = puVar8 + 4;
      puVar9 = puVar9 + 4;
    } while (puVar8 != (undefined4 *)(uVar10 * 0x44 + 20000));
    *puVar9 = *puVar8;
    uVar2 = *puVar11;
    if ((uVar2 >> 7 & 1) != 0) {
      FUN_00004ab4(auStack_24);
      *puVar11 = *puVar11 & 0xff7f;
                    // WARNING: Subroutine does not return
      FUN_00004abc(auStack_24[0]);
    }
    *(undefined2 *)(&DAT_bf900764 + iVar12 * 0x28) = 0;
    *(undefined2 *)(&DAT_bf900766 + iVar12 * 0x28) = 0;
    FUN_0000013c(param_1,auStack_70);
    *(ushort *)(&DAT_bf9002e0 + iVar12 * 0x400) = (ushort)((uint)(&DAT_00005cd8)[iVar12] >> 0x11);
    *(short *)(&DAT_bf9002e2 + iVar12 * 0x400) = (short)((uint)(&DAT_00005cd8)[iVar12] >> 1);
    if ((uVar2 >> 7 & 1) != 0) {
      FUN_00004ab4(auStack_24);
      *puVar11 = *puVar11 | 0x80;
                    // WARNING: Subroutine does not return
      FUN_00004abc(auStack_24[0]);
    }
    if (bVar1) {
      FUN_0000097c(param_1,bVar1 && (uVar3 & 0x200) != 0,uVar10);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00001380(undefined8 param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 uStack_58;
  short sStack_54;
  short sStack_52;
  undefined4 auStack_50 [2];
  short sStack_46;
  short sStack_40;
  short sStack_3e;
  short sStack_3c;
  short sStack_3a;
  short sStack_34;
  short sStack_32;
  short sStack_20;
  short sStack_1e;
  short sStack_1c;
  short sStack_1a;
  
  if (*(byte *)(param_2 + 4) < 10) {
    iVar8 = (int)param_1;
    uVar1 = *(uint *)(&DAT_000055f4 + iVar8 * 0x14);
    if (uVar1 == *(byte *)(param_2 + 4)) {
      if (((int)uVar1 < 9) && (puVar6 = &uStack_58, 6 < (int)uVar1)) {
        puVar5 = (undefined4 *)(uVar1 * 0x44 + 0x4de0);
        do {
          uVar2 = puVar5[1];
          uVar3 = puVar5[2];
          uVar4 = puVar5[3];
          *puVar6 = *puVar5;
          puVar6[1] = uVar2;
          puVar6[2] = uVar3;
          puVar6[3] = uVar4;
          puVar5 = puVar5 + 4;
          puVar6 = puVar6 + 4;
        } while (puVar5 != (undefined4 *)(uVar1 * 0x44 + 20000));
        *puVar6 = *puVar5;
        uStack_58 = 0xc011c80;
        iVar7 = iVar8 * 0x14;
        *(undefined4 *)(&DAT_000055fc + iVar7) = *(undefined4 *)(param_2 + 0xc);
        sStack_1e = (short)*(undefined4 *)(&DAT_000055fc + iVar7) + 1;
        *(undefined4 *)(&DAT_00005600 + iVar7) = *(undefined4 *)(param_2 + 0x10);
        sStack_40 = sStack_1e * 0x40 - sStack_54;
        sStack_1e = sStack_1e * 0x20;
        sStack_3e = sStack_1e - sStack_52;
        sStack_3c = sStack_3a + sStack_1e;
        sStack_34 = sStack_32 + sStack_1e;
        sStack_20 = sStack_1c + sStack_1e;
        sStack_1e = sStack_1a + sStack_1e;
        sStack_46 = (short)*(undefined4 *)(&DAT_00005600 + iVar7) * 0x102;
        FUN_0000013c(param_1,&uStack_58);
      }
      *(undefined2 *)(&DAT_bf900764 + iVar8 * 0x28) = *(undefined2 *)(param_2 + 8);
                    // WARNING: Subroutine does not return
      *(undefined2 *)(&DAT_bf900766 + iVar8 * 0x28) = *(undefined2 *)(param_2 + 10);
      FUN_00002050();
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00001550(void)

{
  undefined4 auStack_10 [4];
  
  _DAT_bf801404 = &DAT_bf900000;
  _DAT_bf80140c = 0xbf900800;
  FUN_00004ab4(auStack_10);
  _DAT_bf8010f0 = _DAT_bf8010f0 | 0x80000;
  _DAT_bf801570 = _DAT_bf801570 | 8;
                    // WARNING: Subroutine does not return
  FUN_00004abc(auStack_10[0]);
}



void FUN_000015e8(void)

{
                    // WARNING: Subroutine does not return
  FUN_00001550();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00001638(longlong param_1)

{
  _DAT_bf9007c0 = 0xc032;
  if (param_1 == 0) {
    _DAT_bf90019a = 0xc000;
    _DAT_bf90059a = 0xc001;
  }
  else {
    _DAT_bf90019a = 0xc080;
    _DAT_bf90059a = 0xc081;
  }
  _DAT_bf900188 = 0xffff;
  _DAT_bf90018a = 0xff;
  _DAT_bf900190 = 0xffff;
  _DAT_bf900192 = 0xff;
  _DAT_bf90018c = 0xffff;
  _DAT_bf90018e = 0xff;
  _DAT_bf900194 = 0xffff;
  _DAT_bf900196 = 0xff;
  _DAT_bf900588 = 0xffff;
  _DAT_bf90058a = 0xff;
  _DAT_bf900590 = 0xffff;
  _DAT_bf900592 = 0xff;
  _DAT_bf90058c = 0xffff;
  _DAT_bf90058e = 0xff;
  _DAT_bf900594 = 0xffff;
  _DAT_bf900596 = 0xff;
  _DAT_bf900198 = 0xff0;
  _DAT_bf900598 = 0xffc;
  if (param_1 == 0) {
    _DAT_bf900760 = 0;
    _DAT_bf900762 = 0;
    _DAT_bf900788 = 0;
    _DAT_bf90078a = 0;
    _DAT_bf900764 = 0;
    _DAT_bf900766 = 0;
    _DAT_bf90078c = 0;
    _DAT_bf90078e = 0;
    _DAT_bf90033c = 0xe;
    _DAT_bf90073c = 0xf;
  }
  _DAT_bf900768 = 0;
  _DAT_bf90076a = 0;
  _DAT_bf900790 = 0x7fff;
  _DAT_bf900792 = 0x7fff;
  _DAT_bf90076c = 0;
  _DAT_bf90076e = 0;
  _DAT_bf900794 = 0;
  _DAT_bf900796 = 0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00001890(uint param_1)

{
  int in_stack_00000010;
  
  if (in_stack_00000010 == 0) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Subroutine does not return
  FUN_00002358((param_1 & 1) << 4 | 4);
}



// WARNING: Control flow encountered bad instruction data

void FUN_00001b10(int param_1,short param_2)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_18 [24];
  
  iVar2 = (param_1 << 0x10) >> 0xe;
  if ((*(int *)((int)&DAT_000054a4 + iVar2) != 1) && (*(int *)((int)&DAT_000054ac + iVar2) != 1)) {
    if (param_2 == 0) {
      if (*(int *)((int)&DAT_00005618 + iVar2) == 0) {
        halt_baddata();
      }
    }
    else {
      if (param_2 != 1) {
        halt_baddata();
      }
      lVar1 = FUN_00004ac4();
      if (lVar1 != 0) {
        halt_baddata();
      }
      FUN_00004b94(*(undefined4 *)((int)&DAT_00005620 + iVar2),1,0,auStack_18);
    }
    *(undefined4 *)((int)&DAT_00005618 + iVar2) = 0;
    *(undefined4 *)((int)&DAT_000054ac + iVar2) = 1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_00001c08(uint param_1)

{
  param_1 = param_1 & 1;
  (&DAT_00005658)[param_1 * 2] = param_1;
  (&DAT_00005640)[param_1 * 2] = 0;
  (&DAT_00005644)[param_1 * 2] = 0;
                    // WARNING: Subroutine does not return
  FUN_00002358(param_1 << 4 | 10);
}



// WARNING: Control flow encountered bad instruction data

void FUN_00002024(undefined2 param_1)

{
  FUN_00002eb8(param_1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00002050(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0000206c(void)

{
  uint uVar1;
  
  _DAT_bf9007c0 = 0;
  FUN_00002310(2);
  _DAT_bf9007c0 = 0x8000;
  FUN_00002310(1);
  _DAT_bf900760 = 0;
  _DAT_bf900762 = 0;
  _DAT_bf900788 = 0;
  _DAT_bf90078a = 0;
  _DAT_bf9001b0 = 0;
  _DAT_bf9005b0 = 0;
  _DAT_bf90019a = 0;
  _DAT_bf90059a = 0;
  FUN_00002310(1);
  _DAT_bf90019a = 0x8000;
  _DAT_bf90059a = 0x8000;
  _DAT_bf900760 = 0;
  _DAT_bf900762 = 0;
  _DAT_bf900788 = 0;
  _DAT_bf90078a = 0;
  uVar1 = 0;
  while ((((_DAT_bf900344 & 0x7ff) != 0 || ((_DAT_bf900744 & 0x7ff) != 0)) &&
         (uVar1 = uVar1 + 1, uVar1 < 0xf01))) {
    FUN_00002310(1);
  }
  _DAT_bf9001a4 = 0xffff;
  _DAT_bf9001a6 = 0xff;
  _DAT_bf9005a4 = 0xffff;
  _DAT_bf9005a6 = 0xff;
  _DAT_bf900180 = 0;
  _DAT_bf900182 = 0;
  _DAT_bf900580 = 0;
  _DAT_bf900582 = 0;
  _DAT_bf900184 = 0;
  _DAT_bf900186 = 0;
  _DAT_bf900584 = 0;
  _DAT_bf900586 = 0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000022b4(void)

{
  undefined4 uStack_8;
  
  for (uStack_8 = 0; uStack_8 < 0x78; uStack_8 = uStack_8 + 1) {
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00002310(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_1) {
    do {
      FUN_000022b4(1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00002358(uint param_1)

{
  if ((param_1 & 0xf) - 2 < 9) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_0000280c(undefined2 *param_1,uint param_2,int param_3)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 auStack_2c [11];
  
  if (param_2 != 0) {
    uVar3 = 0x40;
    if (param_2 < 0x41) {
      uVar3 = param_2;
    }
    iVar2 = 0;
    if (0 < (int)uVar3) {
      do {
        uVar1 = *param_1;
        param_1 = param_1 + 1;
        iVar2 = iVar2 + 2;
        *(undefined2 *)(&DAT_bf9001ac + param_3 * 0x400) = uVar1;
      } while (iVar2 < (int)uVar3);
    }
    FUN_00004ab4(auStack_2c);
                    // WARNING: Subroutine does not return
    *(ushort *)(&DAT_bf90019a + param_3 * 0x400) =
         *(ushort *)(&DAT_bf90019a + param_3 * 0x400) & 0xffcf | 0x10;
    FUN_00004abc(auStack_2c[0]);
  }
  FUN_00004ab4(auStack_2c);
                    // WARNING: Subroutine does not return
  *(ushort *)(&DAT_bf90019a + param_3 * 0x400) =
       *(ushort *)(&DAT_bf90019a + param_3 * 0x400) & 0xffcf;
  FUN_00004abc(auStack_2c[0]);
}



// WARNING: Control flow encountered bad instruction data

void FUN_000029a8(undefined8 param_1,int param_2)

{
  *(ushort *)(&DAT_bf90019a + param_2 * 2) = *(ushort *)(&DAT_bf90019a + param_2 * 2) & 0xffcf;
  *(undefined2 *)(&DAT_bf9001b0 + param_2 * 2) = 0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000029ec(uint *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ushort *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uStack_2c;
  int aiStack_28 [10];
  
  if ((*param_1 & 0xc00) == 0x400) {
    uVar12 = 1;
  }
  else {
    if ((*param_1 & 0xc00) != 0x800) {
      halt_baddata();
    }
    uVar12 = 0;
  }
  uVar8 = *param_1;
  uVar11 = uVar8 & 1;
  if ((uVar8 & 0x300) == 0x100) {
    if ((*(ushort *)(&DAT_bf900344 + uVar11 * 0x400) & 0x80) == 0) {
      iVar7 = 1;
      do {
        if (0x1000000 < iVar7) break;
        iVar7 = iVar7 + 1;
      } while ((*(ushort *)(&DAT_bf900344 + uVar11 * 0x400) & 0x80) == 0);
    }
    puVar9 = (ushort *)(&DAT_bf90019a + uVar11 * 0x400);
    *puVar9 = *puVar9 & 0xffcf;
    if ((*puVar9 & 0x30) != 0) {
      uVar8 = 1;
      do {
        if (0xf00 < uVar8) break;
        uVar8 = uVar8 + 1;
      } while ((*puVar9 & 0x30) != 0);
    }
    if (uVar12 == 0) {
      FUN_00004ae8();
    }
    if ((&DAT_00005650)[uVar11] != 0) {
      (*(code *)(&DAT_00005650)[uVar11])(uVar11,0);
      halt_baddata();
    }
    FUN_00004b7c((&DAT_00005620)[uVar11],1);
    if ((&DAT_00005638)[uVar11] == 0) {
      if ((&DAT_00005cd0)[uVar11] == 0) {
        (&DAT_00005618)[uVar11] = 1;
        halt_baddata();
      }
      (&DAT_000054ac)[uVar11] = 1;
      pcVar1 = (code *)(&DAT_00005cd0)[uVar11];
LAB_00002e84:
      (*pcVar1)();
      halt_baddata();
    }
    (&DAT_000054ac)[uVar11] = 1;
    uVar12 = param_1[1];
    pcVar1 = (code *)(&DAT_00005638)[uVar11];
  }
  else {
    if ((uVar8 & 0x300) != 0x200) {
      halt_baddata();
    }
    if ((uVar8 & 0x8000) != 0) {
      if ((&DAT_00005640)[uVar11 * 2] == 0) {
        FUN_000029a8(uVar11,uVar11 << 9);
      }
      else {
        (*(code *)(&DAT_00005640)[uVar11 * 2])
                  (uVar11,(&DAT_00005644)[uVar11 * 2],&uStack_2c,aiStack_28);
        if (aiStack_28[0] < 1) {
          FUN_000029a8(uVar11,uVar11 << 9);
          (&DAT_00005640)[uVar11 * 2] = 0;
          (&DAT_00005644)[uVar11 * 2] = 0;
        }
        else {
          *(ushort *)(uVar11 * 0x440 + -0x407fef3a) =
               (short)(aiStack_28[0] >> 6) +
               (ushort)(0 < aiStack_28[0] + (aiStack_28[0] >> 6) * -0x40);
          *(undefined4 *)(uVar11 * 0x440 + -0x407fef40) = uStack_2c;
          *(uint *)(uVar11 * 0x440 + -0x407fef38) = uVar12 | 0x1000200;
        }
      }
      if (uVar12 != 0) {
        halt_baddata();
      }
      FUN_00004ae8();
      halt_baddata();
    }
    iVar7 = uVar11 * 4;
    if ((uVar8 & 0x1000) == 0) {
      FUN_000029a8(uVar11);
    }
    else {
      iVar2 = *(int *)(&DAT_00005ca0 + iVar7);
      iVar3 = *(int *)(&DAT_00005cb0 + iVar7);
      iVar4 = *(int *)(&DAT_00005ca8 + iVar7);
      iVar10 = *(int *)(&DAT_00005cb0 + iVar7);
      if (iVar10 < 0) {
        iVar10 = iVar10 + 0x3f;
      }
      iVar5 = *(int *)(&DAT_00005cb0 + iVar7);
      iVar6 = iVar5;
      if (iVar5 < 0) {
        iVar6 = iVar5 + 0x3f;
      }
      *(ushort *)(uVar11 * 0x440 + -0x407fef3a) =
           (short)(iVar10 >> 6) + (ushort)(0 < iVar5 + (iVar6 >> 6) * -0x40);
      *(int *)(&DAT_00005ca0 + iVar7) = 1 - iVar2;
      *(int *)(uVar11 * 0x440 + -0x407fef40) = iVar4 + (1 - iVar2) * iVar3;
      *(uint *)(uVar11 * 0x440 + -0x407fef38) = uVar12 | 0x1000200;
    }
    if (uVar12 == 0) {
      FUN_00004ae8();
    }
    if ((&DAT_00005638)[uVar11] == 0) {
      if ((&DAT_00005cd0)[uVar11] == 0) {
        halt_baddata();
      }
      pcVar1 = (code *)(&DAT_00005cd0)[uVar11];
      goto LAB_00002e84;
    }
    uVar12 = param_1[1];
    pcVar1 = (code *)(&DAT_00005638)[uVar11];
  }
  (*pcVar1)(uVar11,uVar12);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00002eb8(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00002f4c(int param_1,uint param_2,uint param_3,ulonglong param_4)

{
  int iVar1;
  int in_stack_00000010;
  undefined4 auStack_24 [9];
  
  iVar1 = (param_3 & 1) * 4;
  *(int *)(&DAT_00005ca8 + iVar1) = param_1;
  *(undefined4 *)(&DAT_00005ca0 + iVar1) = 0;
  *(uint *)(&DAT_00005cb0 + iVar1) = param_2;
  if ((in_stack_00000010 != 0) && (param_2 <= (uint)(in_stack_00000010 - param_1))) {
    if (((param_4 & 0x10) == 0) || (param_2 <= (in_stack_00000010 - param_1) - param_2)) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    *(int *)(&DAT_00005ca0 + iVar1) = *(int *)(&DAT_00005ca0 + iVar1) + 1;
  }
  FUN_00004ab4(auStack_24);
                    // WARNING: Subroutine does not return
  *(ushort *)(&DAT_bf90019a + (param_3 & 1) * 0x400) =
       *(ushort *)(&DAT_bf90019a + (param_3 & 1) * 0x400) & 0xffcf;
  FUN_00004abc(auStack_24[0]);
}



void FUN_00003174(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined4 auStack_24 [9];
  
  iVar1 = (param_3 & 1) * 4;
  *(undefined4 *)(&DAT_00005ca8 + iVar1) = param_1;
  *(undefined4 *)(&DAT_00005ca0 + iVar1) = 0;
  *(undefined4 *)(&DAT_00005cb0 + iVar1) = param_2;
  FUN_00004ab4(auStack_24);
                    // WARNING: Subroutine does not return
  *(ushort *)(&DAT_bf90019a + (param_3 & 1) * 0x400) =
       *(ushort *)(&DAT_bf90019a + (param_3 & 1) * 0x400) & 0xffcf;
  FUN_00004abc(auStack_24[0]);
}



void FUN_00003340(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 auStack_20 [8];
  
  uStack_24 = 0;
  uStack_30 = param_2;
  uStack_2c = param_1;
  uStack_28 = param_3;
  FUN_00004ab4(auStack_20);
  FUN_00004b14(&uStack_30,1);
                    // WARNING: Subroutine does not return
  FUN_00004abc(auStack_20[0]);
}



// WARNING: Control flow encountered bad instruction data

void FUN_000033fc(ushort *param_1,undefined8 param_2,longlong param_3)

{
  if ((param_3 != 0) && (*param_1 - 1 < 0x14)) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000035e8(ushort *param_1,undefined8 param_2,longlong param_3)

{
  if ((param_3 != 0) && (*param_1 - 1 < 0x14)) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000039a0(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000039fc(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00003e20(uint param_1)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  
  uVar1 = param_1 & 0xf;
  uVar2 = _DAT_bf9007c0 & 0xfe57;
  uVar3 = _DAT_bf9007c6 & 0xfff9;
  if (uVar1 == 1) {
    uVar2 = uVar2 | 0x100;
    uVar3 = uVar3 | 2;
  }
  else if (uVar1 < 2) {
    if ((param_1 & 0xf) != 0) {
      halt_baddata();
    }
    uVar2 = uVar2 | 0x20;
  }
  else if (uVar1 != 2) {
    if (uVar1 != 3) {
      halt_baddata();
    }
    uVar2 = uVar2 | 0x100;
  }
  if ((param_1 & 0x80) == 0) {
    uVar3 = uVar3 & 0x7fff;
  }
  else {
    uVar3 = uVar3 | 0x8000;
  }
  if ((param_1 & 0xf00) == 0x800) {
    _DAT_bf9007c8 = 0x200;
    _DAT_bf9007c6 = uVar3 & 0xc0ff | 0x1900;
  }
  else if ((param_1 & 0xf00) == 0x400) {
    _DAT_bf9007c8 = 0;
    _DAT_bf9007c6 = uVar3 & 0xc0ff | 0x100;
  }
  else {
    _DAT_bf9007c8 = 0x200;
    _DAT_bf9007c6 = uVar3 & 0xc0ff | 0x900;
  }
  DAT_000055e0 = param_1;
  _DAT_bf9007c0 = uVar2;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_00003f50(uint param_1,uint param_2)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 auStack_18 [6];
  
  sVar1 = *(short *)((int)&DAT_000055e0 + (param_1 & 0xe) + 2);
  FUN_00004ab4(auStack_18);
  uVar3 = param_1 & 1 | 0x2300;
  uVar2 = FUN_000039fc(uVar3);
  uVar4 = (uint)sVar1;
  FUN_000039a0(uVar3,(uVar2 & ~(1 << (uVar4 & 0x1f)) | (param_2 & 1) << (uVar4 & 0x1f)) & 0xffff);
                    // WARNING: Subroutine does not return
  FUN_00004abc(auStack_18[0]);
}



// WARNING: Control flow encountered bad instruction data

void FUN_00003fec(ushort param_1,uint param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined4 auStack_18 [6];
  
  if ((param_1 & 0xfffe) == 10) {
    FUN_00003e20(param_2 & 0xffff);
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  if ((param_1 & 0xfffe) == 8) {
    FUN_00004ab4(auStack_18);
    uVar2 = param_1 & 1 | 0x2300;
    uVar1 = FUN_000039fc(uVar2);
    FUN_000039a0(uVar2,uVar1 & 0xc0ff | (param_2 & 0x3f) << 8);
                    // WARNING: Subroutine does not return
    FUN_00004abc(auStack_18[0]);
  }
                    // WARNING: Subroutine does not return
  FUN_00003f50(param_1,param_2 & 0xffff);
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000416c(int param_1,undefined4 param_2,undefined4 param_3)

{
  (&DAT_00005638)[param_1] = param_2;
  (&DAT_0000565c)[param_1 * 2] = param_3;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000041c0(undefined4 param_1)

{
  DAT_0000562c = param_1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000041e0(undefined4 param_1,undefined4 param_2)

{
  DAT_00005630 = param_1;
  DAT_00005634 = param_2;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00004220(void)

{
  uint uVar1;
  
  if ((DAT_00005630 != (code *)0x0) || (DAT_0000562c != (code *)0x0)) {
    uVar1 = (uint)_DAT_bf9007c2;
    while (uVar1 = (uVar1 & 0xc) >> 2, uVar1 != 0) {
      if ((uVar1 & 1) != 0) {
        _DAT_bf90019a = _DAT_bf90019a & 0xffbf;
      }
      if ((uVar1 & 2) != 0) {
        _DAT_bf90059a = _DAT_bf90059a & 0xffbf;
      }
      if (DAT_00005630 == (code *)0x0) {
        if (DAT_0000562c != (code *)0x0) {
          (*DAT_0000562c)(0);
        }
      }
      else {
        (*DAT_00005630)(uVar1,DAT_00005634);
      }
      uVar1 = (uint)_DAT_bf9007c2;
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00004344(void)

{
  ushort uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  int iStack_28;
  
  puVar2 = &DAT_00005668;
  puVar4 = (undefined2 *)&DAT_bf900000;
  puVar3 = (undefined2 *)&DAT_bf900400;
  puVar6 = (undefined2 *)&DAT_bf9001c0;
  _DAT_bf9001a8 = 0;
  _DAT_bf9001aa = 0x2800;
  iStack_28 = 0;
  puVar5 = (undefined2 *)&DAT_bf9005c0;
  do {
    _DAT_bf9001ac = *puVar2;
    iStack_28 = iStack_28 + 1;
    puVar2 = puVar2 + 1;
  } while (iStack_28 < 8);
  _DAT_bf90019a = _DAT_bf90019a & 0xffcf | 0x10;
  iStack_28 = 0;
  uVar1 = _DAT_bf900344 & 0x400;
  while (uVar1 != 0) {
    FUN_00002310(1);
    iStack_28 = iStack_28 + 1;
    if (0x1000000 < iStack_28) break;
    uVar1 = _DAT_bf900344 & 0x400;
  }
  _DAT_bf90019a = _DAT_bf90019a & 0xffcf;
  iStack_28 = 0;
  do {
    *puVar3 = 0;
    *puVar4 = *puVar3;
    puVar3[1] = 0;
    puVar4[1] = puVar3[1];
    puVar3[2] = 0x3fff;
    puVar4[2] = puVar3[2];
    puVar3[3] = 0;
    puVar2 = puVar3 + 4;
    puVar4[3] = puVar3[3];
    *puVar2 = 0;
    puVar3 = puVar3 + 8;
    puVar4[4] = *puVar2;
    puVar4 = puVar4 + 8;
    *puVar5 = 0;
    *puVar6 = *puVar5;
    puVar5[1] = 0x2800;
    puVar6[1] = puVar5[1];
    puVar5 = puVar5 + 6;
    iStack_28 = iStack_28 + 1;
    puVar6 = puVar6 + 6;
  } while (iStack_28 < 0x18);
  _DAT_bf9005a0 = 0xffff;
  _DAT_bf9001a0 = 0xffff;
  _DAT_bf9005a2 = 0xff;
  _DAT_bf9001a2 = 0xff;
  FUN_00002310(3);
  _DAT_bf9005a4 = 0xffff;
  _DAT_bf9001a4 = 0xffff;
  _DAT_bf9005a6 = 0xff;
  _DAT_bf9001a6 = 0xff;
  FUN_00002310(3);
  _DAT_bf900342 = 0;
  _DAT_bf900340 = 0;
  _DAT_bf900742 = 0;
  _DAT_bf900740 = 0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00004644(ulonglong param_1)

{
  longlong lVar1;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 auStack_18 [24];
  
  FUN_00004aac(0x24,auStack_18);
  FUN_00004aac(0x28,auStack_18);
  FUN_00004aac(9,auStack_18);
  FUN_00004a9c(0x24);
  FUN_00004a9c(0x28);
  FUN_00004a9c(9);
  DAT_000054a4 = 0;
  DAT_000054a8 = 0;
  DAT_000054ac = 1;
  DAT_000054b0 = 1;
  DAT_00005618 = 0;
  DAT_0000561c = 0;
  DAT_00005630 = 0;
  DAT_00005638 = 0;
  DAT_0000563c = 0;
  DAT_00005650 = 0;
  DAT_00005654 = 0;
  DAT_00005658 = 0;
  DAT_00005660 = 1;
  DAT_0000565c = 0;
  DAT_00005664 = 0;
  DAT_00005640 = 0;
  DAT_00005648 = 0;
  DAT_00005644 = 0;
  DAT_0000564c = 0;
  DAT_00005634 = 0;
  DAT_0000562c = 0;
  DAT_00005cd0 = 0;
  DAT_00005cd4 = 0;
  if ((param_1 & 0xf) == 0) {
    FUN_00004b40(22000,0x28);
    DAT_00005cd8 = 0x1dfff0;
    DAT_00005cdc = 0x1ffff0;
    _DAT_bf9002e0 = 0xe;
    _DAT_bf9002e2 = 0xfff8;
    _DAT_bf9006e0 = 0xf;
    _DAT_bf9006e2 = 0xfff8;
  }
  uStack_28 = 2;
  uStack_20 = 1;
  uStack_24 = 0;
  if (DAT_00005620 < 1) {
    DAT_00005620 = FUN_00004b64(&uStack_28);
  }
  else {
    lVar1 = FUN_00004ac4();
    if (lVar1 == 0) {
      FUN_00004b74(DAT_00005620,1);
    }
    else {
      FUN_00004b7c(DAT_00005620,1);
    }
  }
  if (DAT_00005624 < 1) {
    DAT_00005624 = FUN_00004b64(&uStack_28);
  }
  else {
    lVar1 = FUN_00004ac4();
    if (lVar1 == 0) {
      FUN_00004b74(DAT_00005624,1);
    }
    else {
      FUN_00004b7c(DAT_00005624,1);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_000048e4(ulonglong param_1)

{
  FUN_000015e8();
  if ((param_1 & 0xf) == 0) {
    FUN_0000206c(0);
  }
  FUN_00004644(param_1);
  FUN_00004344();
  FUN_00001638(param_1 & 0xf);
  FUN_00004aa4(0x24);
  FUN_00004aa4(0x28);
  FUN_00004aa4(9);
  FUN_00004a94(0x24,1,FUN_000029ec,&DAT_00005658);
  FUN_00004a94(0x28,1,FUN_000029ec,&DAT_00005660);
  FUN_00004a94(9,1,FUN_00004220,DAT_00005634);
                    // WARNING: Subroutine does not return
  DAT_00005628 = 1;
  FUN_00002050();
}



void FUN_000049c4(void)

{
                    // WARNING: Subroutine does not return
  FUN_00002358(10);
}


