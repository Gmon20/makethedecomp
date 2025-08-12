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

typedef struct Elf32_Rel Elf32_Rel, *PElf32_Rel;

struct Elf32_Rel {
    dword r_offset; // location to apply the relocation action
    dword r_info; // the symbol table index and the type of relocation
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



char DAT_00017d08;
undefined4 DAT_00017d70;
undefined4 DAT_00017d74;
undefined1 DAT_0001b02c;
undefined1 DAT_00017d31;
undefined4 DAT_00017d60;
undefined FUN_000022c0;
undefined1 DAT_00017d09;
uint DAT_00017d78;
int DAT_00017d5c;
ushort DAT_00017d0a;
uint DAT_00017d3c;
undefined1 DAT_00017d58;
int DAT_00017d2c;
char DAT_00017d30;
int DAT_00017d60;
undefined4 *DAT_0001845c;
undefined4 *DAT_00018458;
byte DAT_00017d59;
undefined DAT_00017d44;
char DAT_00017d31;
uint DAT_00017d38;
int DAT_00017d54;
int DAT_00017d34;
char DAT_00017d64;
undefined UNK_00002800;
undefined UNK_00002c00;
undefined4 DAT_00019e3f;
undefined4 DAT_0001a03f;
char DAT_00017d58;
int DAT_00017d40;
undefined2 DAT_00017d0a;
undefined1 DAT_00017d59;
undefined4 DAT_00017d0c;
undefined1 DAT_0001a641;
int DAT_00017d50;
undefined4 DAT_00017d54;
undefined4 DAT_00018464;
undefined4 DAT_00018460;
undefined4 DAT_00017d48;
undefined1 DAT_00017d65;
undefined1 DAT_00017d66;
int DAT_00017d68;
int DAT_00018464;
int DAT_00018460;
int *DAT_00018464;
undefined4 *DAT_00018460;
undefined4 DAT_00017d68;
int DAT_00017d48;
int DAT_00017d70;
char DAT_00017fa8;
uint DAT_00017f9c;
char DAT_00017fa9;
uint DAT_00017f98;
undefined1 DAT_000183d4;
undefined1 DAT_000184dd;
undefined4 DAT_00018088;
undefined1 DAT_00018426;
undefined1 DAT_000183d5;
undefined1 DAT_0001b02e;
undefined4 DAT_00018044;
undefined4 DAT_00018048;
undefined4 DAT_0001804c;
undefined4 DAT_00018050;
undefined1 DAT_0001b4bc;
int DAT_00018058;
int DAT_00018054;
undefined DAT_00013d08;
undefined DAT_00018060;
undefined1 DAT_0001b54f;
undefined DAT_0001c440;
undefined4 DAT_0001c4c4;
uint DAT_0001806c;
undefined4 DAT_00018070;
char DAT_0001b011;
byte DAT_0001b010;
undefined1 DAT_000180a0;
undefined4 DAT_00018190;
undefined2 DAT_000182b0;
undefined1 DAT_0001c490;
undefined1 DAT_0001c491;
undefined1 DAT_0001c492;
undefined4 DAT_0001c4d4;
undefined1 DAT_0001c56f;
undefined4 DAT_0001c574;
undefined2 DAT_0001c5bc;
undefined2 DAT_0001c5ce;
undefined1 DAT_0001c668;
undefined1 DAT_0001c669;
undefined4 DAT_0001c688;
int DAT_00017fa0;
undefined1 DAT_00018041;
undefined4 DAT_000184b4;
uint DAT_00018410;
int *DAT_000184bc;
undefined2 DAT_000180d0;
undefined2 DAT_00018250;
undefined1 DAT_0001b520;
undefined4 DAT_0001c448;
undefined2 DAT_0001c49a;
undefined4 DAT_0001c4b0;
undefined4 DAT_0001c4b4;
undefined4 DAT_0001c4bc;
undefined1 DAT_0001c570;
undefined1 DAT_0001c5a8;
undefined1 DAT_0001c5ac;
undefined4 DAT_0001c5b0;
undefined1 DAT_0001c5dd;
undefined4 DAT_0001803c;
undefined1 DAT_00018040;
int DAT_00018400;
int DAT_000184fc;
undefined1 DAT_00018042;
int DAT_000184c0;
int DAT_00018474;
undefined4 DAT_0001c44c;
undefined4 DAT_0001c450;
undefined4 DAT_0001c460;
undefined4 DAT_0001c468;
undefined4 DAT_0001c470;
undefined1 DAT_0001c493;
undefined1 DAT_0001c494;
undefined1 DAT_0001c495;
undefined2 DAT_0001c496;
undefined2 DAT_0001c498;
undefined4 DAT_0001c49c;
undefined4 DAT_0001c4a4;
undefined4 DAT_0001c5d8;
undefined4 DAT_0001c5e0;
undefined4 DAT_0001c66c;
undefined4 DAT_0001c684;
int DAT_00018098;
undefined4 DAT_0001848c;
undefined4 DAT_0001850c;
undefined4 DAT_00018508;
undefined4 DAT_00018504;
undefined4 DAT_000184a8;
undefined4 DAT_00018500;
undefined4 DAT_00018488;
undefined4 DAT_00018494;
undefined4 DAT_000184a0;
int DAT_000184cc;
undefined4 DAT_000184f4;
undefined4 DAT_0001851c;
int DAT_00018524;
undefined4 DAT_00018090;
undefined4 DAT_0001808c;
int DAT_00018430;
int DAT_00018028;
char DAT_0001809c;
int DAT_0001842c;
char DAT_00018084;
int DAT_00018080;
uint DAT_0001807c;
uint DAT_00018090;
undefined4 DAT_00018058;
int *DAT_0001850c;
int DAT_00018034;
undefined4 DAT_0001c5b4;
int DAT_00018090;
uint DAT_000184cc;
int DAT_000184f4;
int DAT_00018488;
uint DAT_00018500;
int DAT_00018494;
undefined *DAT_0001850c;
uint DAT_0001848c;
int DAT_00018504;
uint DAT_00018508;
undefined4 DAT_00018430;
int DAT_000184a0;
undefined *DAT_00018580;
undefined1 DAT_0001809c;
undefined1 *DAT_00018584;
uint DAT_00018438;
int DAT_00018434;
int DAT_00017d78;
char DAT_0001b02c;
int DAT_0001802c;
undefined1 DAT_00018085;
byte DAT_000184f0;
undefined *DAT_0001851c;
undefined1 DAT_000184dc;
undefined DAT_00018dc0;
undefined DAT_00014680;
undefined DAT_000147d4;
undefined1 DAT_0001841c;
undefined1 DAT_0001841d;
char DAT_0001841c;
char DAT_00018414;
undefined2 DAT_0001830e;
undefined4 DAT_00017f90;
int DAT_00017f94;
undefined4 DAT_00018454;
undefined4 DAT_0001842c;
undefined4 DAT_00018434;
undefined4 DAT_00018438;
undefined4 DAT_00018580;
undefined4 DAT_00018584;
int DAT_0001808c;
int DAT_00018068;
int DAT_0001805c;
int DAT_00018070;
undefined4 DAT_00018020;
undefined4 DAT_00018024;
int DAT_00018064;
int DAT_0001806c;
int DAT_000183f8;
undefined4 DAT_000183fc;
int DAT_000184b4;
int DAT_0001803c;
int DAT_0001840c;
uint DAT_00018408;
uint DAT_00018418;
undefined4 DAT_0001806c;
char DAT_00018041;
char DAT_00018042;
undefined4 DAT_000184fc;
char DAT_00018040;
undefined1 DAT_0001846c;
undefined4 DAT_0001852c;
undefined4 DAT_000184ec;
undefined1 DAT_000184c8;
undefined1 DAT_000184a4;
undefined4 DAT_000184ac;
undefined2 DAT_000184d8;
undefined4 DAT_0001847c;
undefined4 DAT_00018470;
undefined4 DAT_000184c4;
undefined4 DAT_000184e0;
undefined4 DAT_00018480;
undefined1 DAT_00018484;
undefined1 DAT_000184d0;
undefined4 DAT_00018478;
char DAT_00018424;
int DAT_00018078;
int DAT_00018444;
int DAT_00018038;
int DAT_000183e0;
int DAT_00018024;
int DAT_00018020;
undefined4 DAT_000183dc;
undefined4 DAT_00018310;
undefined4 DAT_000184d4;
int DAT_000184a8;
char DAT_00018426;
char DAT_00018425;
char DAT_00018416;
uint DAT_00018404;
int DAT_00018408;
undefined *DAT_00018498;
undefined4 DAT_000183d8;
uint DAT_00018518;
uint DAT_00018520;
undefined4 DAT_00018514;
undefined4 DAT_0001afc0;
undefined4 DAT_00018468;
undefined4 DAT_0001bda0;
undefined4 DAT_0001bd70;
undefined4 DAT_0001b4f0;
uint DAT_000183e0;
char DAT_000183d5;
int DAT_000183dc;
int DAT_000184bc;
uint DAT_00018098;
int DAT_00018074;
uint DAT_00018448;
undefined4 DAT_0001b550;
int DAT_000184d4;
undefined4 DAT_000183e0;
undefined4 DAT_00018518;
undefined4 DAT_00018520;
undefined4 DAT_00018030;
int DAT_00018014;
int DAT_00018010;
undefined4 DAT_0001800c;
undefined4 DAT_00018008;
uint DAT_00018028;
byte DAT_00018085;
byte DAT_0001b02c;
undefined4 DAT_000183f4;
undefined4 DAT_000183f0;
undefined4 DAT_00018404;
int DAT_00018410;
undefined4 DAT_00018408;
byte DAT_00018414;
byte DAT_0001b4bc;
undefined4 DAT_00017d50;
char DAT_00017d09;
undefined4 *DAT_00017d48;
undefined4 DAT_00018080;
undefined4 DAT_00018018;
undefined4 DAT_0001801c;
undefined4 DAT_0001b560;
undefined4 DAT_0001b564;
undefined4 DAT_0001b568;
undefined4 DAT_0001b56c;
undefined4 DAT_0001b570;
undefined4 DAT_0001b574;
undefined4 DAT_0001c4a8;
int *DAT_00018510;
int DAT_000183ec;
char DAT_0001841d;
uint DAT_000184e8;
ushort DAT_000184e4;
undefined2 DAT_00018528;
uint DAT_0001849c;
undefined DAT_0001be40;
undefined4 DAT_00018098;
undefined4 DAT_00018068;
int DAT_00017f90;
undefined4 DAT_00017f94;
undefined4 DAT_000183e4;
undefined FUN_000159d4;
undefined FUN_0000526c;
undefined FUN_00015a50;
undefined DAT_00014730;
undefined DAT_00014784;
undefined FUN_00016350;
undefined DAT_0001482c;
int DAT_00018044;
int DAT_00017fc4;
undefined4 DAT_00017fc8;
undefined4 DAT_00017fbc;
undefined4 DAT_00017fcc;
undefined4 DAT_00017fd4;
uint DAT_00018014;
undefined1 DAT_00018084;
undefined4 DAT_00018010;
undefined DAT_00017cfc;
uint DAT_00018008;
uint DAT_0001800c;
uint DAT_00018010;
uint DAT_00017fa0;
uint *DAT_000184bc;
uint DAT_00018088;
char DAT_0001844c;
undefined FUN_000040a4;
undefined1 DAT_000184de;
undefined DAT_00001500;
undefined DAT_00001501;
undefined1 DAT_00018415;
char DAT_00018417;
undefined4 DAT_0001b4c0;
undefined4 DAT_0001b4c4;
undefined4 DAT_0001b4c8;
undefined4 DAT_0001b4cc;
undefined4 DAT_0001b4d0;
undefined4 DAT_0001b4d8;
int DAT_0001b4d4;
int DAT_0001bdd0;
int DAT_0001bde8;
undefined1 DAT_0001bdec;
undefined4 DAT_0001bdf0;
undefined4 DAT_0001bdf4;
int DAT_0001bdd8;
int DAT_0001bddc;
undefined4 DAT_0001bde0;
undefined4 DAT_0001bde4;
undefined4 DAT_0001bdd4;
undefined DAT_0001be10;
undefined DAT_0001c5e8;
undefined4 DAT_0001c624;
uint DAT_0001b00c;
uint DAT_0001b008;
int DAT_0001b000;
int DAT_0001b004;
uint DAT_000183d0;
char DAT_0001b013;
char DAT_0001b4bc;
uint DAT_0001b4b8;
int DAT_0001b4b4;
int DAT_0001b4b0;
undefined1 DAT_0001b013;
undefined4 DAT_0001b000;
undefined4 DAT_0001b004;
undefined1 DAT_0001b010;
undefined1 DAT_0001b011;
undefined4 DAT_0001c670;
undefined4 DAT_0001c674;
undefined4 DAT_0001c678;
undefined4 DAT_0001c67c;
undefined1 DAT_0001b038;
undefined1 DAT_0001b044;
undefined DAT_0000b000;
undefined1 DAT_000195c0;
undefined1 DAT_000195f0;
undefined4 DAT_0001805c;
undefined FUN_00013848;
int DAT_00018510;
undefined DAT_0001858c;
undefined FUN_00013c24;
undefined FUN_00005a1c;
uint DAT_00018030;
undefined4 DAT_00017f9c;
undefined4 DAT_00018510;
undefined4 *DAT_00018510;
int DAT_00018088;
undefined4 DAT_000184cc;
undefined4 DAT_00018034;
int DAT_00018450;
undefined4 DAT_0001b4b4;
undefined4 DAT_0001b4b0;
undefined4 DAT_0001b4b8;
undefined4 DAT_0001840c;
uint DAT_000184c0;
undefined4 DAT_00018474;
undefined1 DAT_00018425;
int DAT_0001be34;
undefined1 DAT_00018424;
undefined4 DAT_00018064;
undefined4 DAT_00017fc4;
int DAT_0001aff4;
undefined4 DAT_00018588;

// WARNING: Control flow encountered bad instruction data

void FUN_00000094(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined4 uStack_28;
  undefined4 uStack_24;
  code *pcStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if (DAT_00017d08 == '\0') {
    pcStack_20 = FUN_000022c0;
    uStack_28 = 0x2000000;
    uStack_1c = 0x4000;
    uStack_24 = 0;
    uStack_18 = param_2;
    lVar1 = FUN_00017694(&uStack_28);
    DAT_00017d70 = (undefined4)lVar1;
    DAT_00017d74 = 0;
    if (0 < lVar1) {
      FUN_000176a4(lVar1,0);
      DAT_0001b02c = 1;
      DAT_00017d31 = 0;
      DAT_00017d74 = 1;
      DAT_00017d08 = 1;
                    // WARNING: Subroutine does not return
      DAT_00017d60 = 0xffffffff;
      FUN_00017810(0,0,0);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_000001a4(int param_1)

{
  uint uVar1;
  
  uVar1 = (SUB164(SEXT416(param_1) * SEXT416(0x2aaaaaab),8) >> 2) - (param_1 >> 0x1f) & 0xffffU |
          0x800;
  FUN_000177a8(uVar1);
                    // WARNING: Subroutine does not return
  FUN_000177a0(uVar1,0);
}



// WARNING: Control flow encountered bad instruction data

void FUN_00000428(void)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  int iStack_2c;
  
  iStack_2c = 0;
  DAT_00017d09 = 1;
  uVar5 = FUN_000177f8(0,0);
  iVar11 = 1 - (uVar5 >> 0x18);
  iVar12 = iVar11 * 0x200;
  do {
    lVar7 = FUN_000177f0(1,0);
  } while (lVar7 == 0);
  if (((DAT_00017d78 & 1) != 0) || (DAT_00017d5c != 0)) {
    FUN_000177e0(1,1,iVar12 + 0x19640,&UNK_00002800 + iVar12);
    do {
      lVar7 = FUN_000177f0(1,0);
    } while (lVar7 == 0);
    FUN_000177e0(1,1,iVar12 + 0x19a40,&UNK_00002c00 + iVar12);
    iStack_2c = 1;
  }
  iVar11 = iVar11 * 0x400;
  if (((DAT_00017d78 & 2) != 0) || (DAT_00017d5c != 0)) {
    iStack_2c = iStack_2c + 1;
    do {
      lVar7 = FUN_000177f0(1,0);
    } while (lVar7 == 0);
    FUN_000177e0(1,1,iVar12 + 0x1a7c0,iVar12 + 0x3800);
    do {
      lVar7 = FUN_000177f0(1,0);
    } while (lVar7 == 0);
    FUN_000177e0(1,1,iVar12 + 0x1abc0,iVar12 + 0x3c00);
  }
  do {
    lVar7 = FUN_000177f0(1,0);
  } while (lVar7 == 0);
  puVar13 = (undefined4 *)(iVar12 + 0x19640);
  puVar14 = (undefined4 *)(iVar12 + 0x19a40);
  DAT_00017d3c = FUN_00002a2c();
  if (DAT_00017d3c == DAT_00017d0a) {
    DAT_00017d58 = 1;
  }
  else if (DAT_00017d3c == 0) {
    DAT_00017d58 = 0;
  }
  if ((DAT_00017d2c == 0) || (DAT_00017d30 != '\x01')) {
    if (DAT_00017d60 != -1) {
      puVar9 = (undefined4 *)((int)&DAT_00019e3f + DAT_00017d60 + 1);
      puVar6 = DAT_0001845c + 0x80;
      puVar8 = DAT_0001845c;
      if ((((uint)DAT_0001845c | (uint)puVar9) & 3) != 0) {
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
      do {
        uVar2 = puVar8[1];
        uVar3 = puVar8[2];
        uVar4 = puVar8[3];
        *puVar9 = *puVar8;
        puVar9[1] = uVar2;
        puVar9[2] = uVar3;
        puVar9[3] = uVar4;
        puVar8 = puVar8 + 4;
        puVar9 = puVar9 + 4;
      } while (puVar8 != puVar6);
      puVar9 = (undefined4 *)((int)&DAT_0001a03f + DAT_00017d60 + 1);
      puVar6 = DAT_00018458 + 0x80;
      puVar8 = DAT_00018458;
      if ((((uint)DAT_00018458 | (uint)puVar9) & 3) != 0) {
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
      do {
        uVar2 = puVar8[1];
        uVar3 = puVar8[2];
        uVar4 = puVar8[3];
        *puVar9 = *puVar8;
        puVar9[1] = uVar2;
        puVar9[2] = uVar3;
        puVar9[3] = uVar4;
        puVar8 = puVar8 + 4;
        puVar9 = puVar9 + 4;
      } while (puVar8 != puVar6);
    }
  }
  else {
    FUN_00000f04();
  }
  bVar1 = iStack_2c == 0;
  iVar10 = 0;
  DAT_00017d60 = iVar11;
  if (DAT_00017d59 != 0) {
    do {
      if ((!bVar1) && (iStack_2c == 0)) {
        lVar7 = FUN_000177f0(1,0);
        bVar1 = lVar7 == 1;
        if (bVar1) {
          FUN_000116e8(0xc00);
        }
      }
      if ((*(char *)(iVar10 * 0x30 + 0x1a642) == '\0') && (*(byte *)(iVar10 * 0x30 + 0x1a640) < 0xc)
         ) {
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < (int)(uint)DAT_00017d59);
  }
  if (DAT_00017d78 == 0) {
    iVar11 = 0xff;
    do {
      *(undefined2 *)puVar13 = 0;
      puVar13 = (undefined4 *)((int)puVar13 + 2);
      *(undefined2 *)puVar14 = 0;
      iVar11 = iVar11 + -1;
      puVar14 = (undefined4 *)((int)puVar14 + 2);
      DAT_00018458 = puVar14;
      DAT_0001845c = puVar13;
    } while (-1 < iVar11);
  }
  if ((((DAT_00017d78 & 1) == 0) && (DAT_00017d5c == 0)) &&
     (puVar14 = DAT_00018458, puVar13 = DAT_0001845c, (DAT_00017d78 & 2) != 0)) {
    puVar14 = (undefined4 *)(iVar12 + 0x1abc0);
    puVar13 = (undefined4 *)(iVar12 + 0x1a7c0);
  }
  DAT_0001845c = puVar13;
  DAT_00018458 = puVar14;
  DAT_00017d31 = DAT_00017d31 - (char)DAT_00017d44;
  DAT_00017d44 = 0;
  if (((DAT_00017d2c != 0) && (DAT_00017d30 == '\x01')) && (DAT_00017d38 < DAT_00017d0a)) {
    puVar14 = (undefined4 *)(DAT_00017d54 + DAT_00017d34 * 0x400);
    if ((((uint)DAT_0001845c | (uint)puVar14) & 3) != 0) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    puVar6 = DAT_0001845c + 0x100;
    puVar13 = DAT_0001845c;
    puVar8 = puVar14;
    do {
      uVar2 = puVar13[1];
      uVar3 = puVar13[2];
      uVar4 = puVar13[3];
      *puVar8 = *puVar13;
      puVar8[1] = uVar2;
      puVar8[2] = uVar3;
      puVar8[3] = uVar4;
      puVar13 = puVar13 + 4;
      puVar8 = puVar8 + 4;
    } while (puVar13 != puVar6);
    FUN_00002834(puVar14,DAT_00017d2c + DAT_00017d34 * 0x400,DAT_00017d34);
    DAT_00017d31 = DAT_00017d31 + '\x01';
    DAT_00017d34 = DAT_00017d34 + 1;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  if (!bVar1) {
    do {
      lVar7 = FUN_000177f0(1,0);
    } while (lVar7 == 0);
    lVar7 = FUN_000177f0(1,0);
    if (lVar7 == 1) {
      FUN_000116e8(0xc00);
    }
  }
  DAT_00017d64 = DAT_00017d64 + '\x01';
  DAT_00017d09 = 0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00000f04(void)

{
  longlong lVar1;
  
  if (((DAT_00017d58 == '\x01') && (DAT_00017d60 != -1)) &&
     (lVar1 = FUN_000029d8(DAT_00017d40), lVar1 == 0)) {
    DAT_00017d40 = DAT_00017d40 + 1;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000107c(undefined1 param_1,ulonglong param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 < 8) {
    iVar2 = (int)param_2 * 0x30;
    cVar1 = *(char *)(iVar2 + 0x1a640);
    *(char *)(iVar2 + 0x1a640) = '\0';
    *(undefined1 *)(iVar2 + 0x1a642) = 1;
    if (cVar1 == '\x02') {
      FUN_000023e8(param_2);
    }
    (&DAT_0001a641)[iVar2] = param_1;
    if (param_3 == 2) {
      FUN_000015b8(param_2,0,0);
    }
    else if (param_3 == 1) {
      FUN_000012b8(param_2);
    }
    else if (param_3 == 4) {
      FUN_000024b0(param_2);
    }
    else if (param_3 == 3) {
      FUN_000022e0(param_2);
    }
    else if (param_3 == 5) {
      FUN_000017ec(param_2);
    }
    else if (param_3 == 6) {
      FUN_000017ec(param_2);
      DAT_00017d5c = DAT_00017d5c + 1;
    }
    else if (param_3 == 8) {
      FUN_00002720(param_2);
    }
    else if (param_3 == 9) {
      FUN_00002760(param_2);
    }
    else if (param_3 == 0xb) {
      FUN_00002c68(param_2);
    }
    iVar2 = 0;
    if (cVar1 == '\x06') {
      DAT_00017d5c = DAT_00017d5c + -1;
    }
    iVar3 = (int)param_2 * 0x30;
    *(char *)(iVar3 + 0x1a640) = (char)param_3;
    *(undefined1 *)(iVar3 + 0x1a642) = 0;
    *(undefined1 *)(iVar3 + 0x1a643) = 3;
    iVar3 = 0;
    do {
      if (*(char *)((iVar3 + iVar2) * 0x10 + 0x1a640) == '\0') {
        (&DAT_00017d0c)[iVar2] = 0;
      }
      else {
        iVar4 = iVar2 + 1;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar2 * 2;
    } while (iVar2 < 8);
    DAT_00017d59 = (undefined1)iVar4;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000012b8(int param_1)

{
  param_1 = param_1 * 0x30;
  *(undefined4 *)(param_1 + 0x1a644) = 0x200;
  *(undefined4 *)(param_1 + 0x1a648) = 0x200;
  *(undefined4 *)(param_1 + 0x1a64c) = 0x100;
  *(undefined4 *)(param_1 + 0x1a650) = 0;
  *(undefined4 *)(param_1 + 0x1a654) = 0;
  *(undefined4 *)(param_1 + 0x1a658) = 0;
  *(undefined4 *)(param_1 + 0x1a65c) = 0;
  *(undefined4 *)(param_1 + 0x1a660) = 0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00001320(int param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 extraout_v1_lo;
  undefined4 extraout_v1_lo_00;
  undefined4 extraout_v1_lo_01;
  undefined4 extraout_v1_lo_02;
  undefined4 extraout_v1_lo_03;
  undefined4 uVar5;
  
  iVar4 = param_3 * 0x30;
  uVar5 = *(undefined4 *)((param_1 + 6) * 4 + iVar4 + 0x1a644);
  iVar1 = *(int *)(iVar4 + 0x1a648);
  uVar2 = *(uint *)(iVar4 + 0x1a64c);
  uVar3 = *(undefined4 *)((param_1 + 4) * 4 + iVar4 + 0x1a644);
  if (*(int *)(iVar4 + 0x1a650) == 0) {
    if (uVar2 == 0x100) {
      uVar3 = FUN_000172e4(uVar5,uVar3,param_2);
      uVar5 = extraout_v1_lo;
    }
    else {
      uVar3 = FUN_0001725c(uVar5,uVar3,param_2,uVar2 | iVar1 << 0x10);
      uVar5 = extraout_v1_lo_00;
    }
  }
  else if (*(int *)(iVar4 + 0x1a650) == 1) {
    if (uVar2 == 0x100) {
      uVar3 = FUN_000173e4(uVar5,uVar3,param_2);
      uVar5 = extraout_v1_lo_01;
    }
    else {
      uVar3 = FUN_0001735c(uVar5,uVar3,param_2,uVar2 | iVar1 << 0x10);
      uVar5 = extraout_v1_lo_02;
    }
  }
  else {
    uVar3 = FUN_0001745c(uVar5,uVar3,param_2,uVar2 | iVar1 << 0x10);
    uVar5 = extraout_v1_lo_03;
  }
  *(undefined4 *)((param_1 + 4) * 4 + param_3 * 0x30 + 0x1a644) = uVar5;
  *(undefined4 *)((param_1 + 6) * 4 + param_3 * 0x30 + 0x1a644) = uVar3;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_000015b8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 auStack_18 [6];
  
  iVar2 = param_1 * 0x30;
  *(undefined4 *)(iVar2 + 0x1a644) = 0x80;
  *(undefined4 *)(iVar2 + 0x1a648) = 1;
  *(undefined4 *)(iVar2 + 0x1a64c) = 0;
  *(undefined4 *)(iVar2 + 0x1a650) = param_2;
  (&DAT_00017d0c)[param_1] = 0;
  FUN_0001752c(auStack_18);
  uVar1 = FUN_000174f8(0,0x400,0);
                    // WARNING: Subroutine does not return
  *(undefined4 *)(iVar2 + 0x1a654) = uVar1;
  FUN_00017534(auStack_18[0]);
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000167c(int param_1,short *param_2,int param_3)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  short *psVar4;
  uint uVar5;
  short *psVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  iVar12 = 0x100;
  iVar2 = param_3 * 0x30;
  iVar9 = *(int *)(iVar2 + 0x1a644);
  iVar10 = *(int *)(iVar2 + 0x1a648);
  iVar11 = *(int *)(iVar2 + 0x1a64c);
  iVar8 = *(int *)(iVar2 + 0x1a650);
  bVar7 = *(byte *)(iVar2 + 0x1a658);
  psVar6 = (short *)(*(int *)(iVar2 + 0x1a654) + param_1 * 0x200);
  uVar5 = (uint)*(byte *)(iVar2 + 0x1a658) - iVar8 & 0xff;
  psVar4 = psVar6 + uVar5;
  psVar3 = psVar6 + bVar7;
  do {
    sVar1 = *param_2;
    iVar2 = (int)sVar1 + (int)*psVar4;
    if (iVar2 < 0x8000) {
      if (iVar2 < -0x7fff) {
        iVar2 = -0x7fff;
      }
    }
    else {
      iVar2 = 0x7fff;
    }
    *param_2 = (short)iVar2;
    param_2 = param_2 + 1;
    *psVar3 = sVar1;
    uVar5 = uVar5 + 1 & 0xff;
    psVar4 = psVar4 + 1;
    if (uVar5 == 0) {
      psVar4 = psVar6;
    }
    bVar7 = bVar7 + 1;
    psVar3 = psVar3 + 1;
    if (bVar7 == 0) {
      psVar3 = psVar6;
    }
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  *(uint *)(param_3 * 0x30 + 0x1a658) = uVar5 + iVar8;
  iVar11 = iVar11 + 1;
  if (6 < iVar11) {
    iVar8 = iVar8 + iVar10;
    if (iVar8 < 1) {
      iVar9 = 1;
    }
    else {
      iVar11 = 0;
      if (iVar8 <= iVar9) goto LAB_000017bc;
    }
    iVar10 = -iVar10;
    iVar11 = 0;
    iVar8 = iVar9;
  }
LAB_000017bc:
  param_3 = param_3 * 0x30;
  *(int *)(param_3 + 0x1a648) = iVar10;
  *(int *)(param_3 + 0x1a64c) = iVar11;
  *(int *)(param_3 + 0x1a650) = iVar8;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000017ec(int param_1)

{
  param_1 = param_1 * 0x30;
  *(undefined4 *)(param_1 + 0x1a644) = 0x10;
  *(undefined4 *)(param_1 + 0x1a648) = 0x400;
  *(undefined4 *)(param_1 + 0x1a64c) = 8;
  *(undefined4 *)(param_1 + 0x1a650) = 1;
  *(undefined4 *)(param_1 + 0x1a654) = 0;
  *(undefined4 *)(param_1 + 0x1a658) = 0;
  *(undefined4 *)(param_1 + 0x1a65c) = 0;
  *(undefined4 *)(param_1 + 0x1a660) = 0;
  *(undefined4 *)(param_1 + 0x1a664) = 0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000185c(int param_1,short *param_2,short *param_3,int param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  
  iVar5 = param_4 * 0x30;
  iVar9 = *(int *)((param_1 + 5) * 4 + iVar5 + 0x1a644);
  uVar11 = *(uint *)((param_1 + 7) * 4 + iVar5 + 0x1a644);
  lVar8 = (longlong)*(int *)(iVar5 + 0x1a644);
  iVar2 = *(int *)(iVar5 + 0x1a648);
  iVar3 = *(int *)(iVar5 + 0x1a64c);
  iVar4 = *(int *)(iVar5 + 0x1a650);
  if (lVar8 < 0x8000) {
    iVar12 = *(int *)(iVar5 + 0x1a654) + 0x800;
    iVar5 = 0x100;
    if (param_2 == param_3) {
      do {
        sVar1 = *param_2;
        lVar7 = (longlong)sVar1;
        if (lVar7 < 0) {
          lVar7 = (longlong)-(int)sVar1;
        }
        if (lVar8 < lVar7) {
          iVar6 = -iVar3;
LAB_00001a00:
          iVar10 = iVar9 + iVar6;
        }
        else {
          iVar10 = iVar9;
          iVar6 = iVar4;
          if (uVar11 == 0) goto LAB_00001a00;
        }
        iVar9 = iVar2;
        if ((iVar2 <= iVar10) && (iVar9 = iVar10, 0x800 < iVar10)) {
          iVar9 = 0x800;
        }
        iVar6 = (sVar1 * iVar9 >> 0xb) * iVar12 >> 0xb;
        if (iVar6 < 0x8000) {
          if (iVar6 < -0x7fff) {
            iVar6 = -0x7fff;
          }
        }
        else {
          iVar6 = 0x7fff;
        }
        *param_2 = (short)iVar6;
        param_2 = param_2 + 1;
        iVar5 = iVar5 + -1;
        uVar11 = uVar11 + 1 & 0x1f;
      } while (iVar5 != 0);
    }
    else {
      do {
        sVar1 = *param_3;
        lVar7 = (longlong)sVar1;
        param_3 = param_3 + 1;
        if (lVar7 < 0) {
          lVar7 = (longlong)-(int)sVar1;
        }
        if (lVar8 < lVar7) {
          iVar6 = -iVar3;
LAB_00001944:
          iVar9 = iVar9 + iVar6;
        }
        else {
          iVar6 = iVar4;
          if (uVar11 == 0) goto LAB_00001944;
        }
        iVar6 = iVar2;
        if ((iVar2 <= iVar9) && (iVar6 = iVar9, 0x800 < iVar9)) {
          iVar6 = 0x800;
        }
        iVar9 = iVar6;
        iVar6 = (*param_2 * iVar9 >> 0xb) * iVar12 >> 0xb;
        if (iVar6 < 0x8000) {
          if (iVar6 < -0x7fff) {
            iVar6 = -0x7fff;
          }
        }
        else {
          iVar6 = 0x7fff;
        }
        *param_2 = (short)iVar6;
        param_2 = param_2 + 1;
        iVar5 = iVar5 + -1;
        uVar11 = uVar11 + 1 & 0x1f;
      } while (iVar5 != 0);
    }
    *(uint *)((param_1 + 7) * 4 + param_4 * 0x30 + 0x1a644) = uVar11;
    *(int *)((param_1 + 5) * 4 + param_4 * 0x30 + 0x1a644) = iVar9;
    (&DAT_00017d0c)[param_4] = iVar9;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00001bb8(undefined8 param_1,longlong param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  
  iVar4 = (int)param_1;
  iVar3 = iVar4 * 0x30;
  bVar1 = *(byte *)(iVar3 + 0x1a640);
  if (param_2 == 0x11) {
    *(char *)(iVar3 + 0x1a642) = (char)param_3;
  }
  else if (param_2 == 2) {
    FUN_00000094(param_3,param_1);
  }
  else if (param_2 == 6) {
    if ((param_3 & 2) == 0) {
      DAT_00017d78 = DAT_00017d78 & ~((param_3 & 1) + 1);
    }
    else {
      DAT_00017d78 = DAT_00017d78 | (param_3 & 1) + 1;
    }
  }
  else if (param_2 == 7) {
    iVar3 = 0;
    pbVar5 = &DAT_0001a641;
    do {
      if (*pbVar5 == param_3) {
        FUN_0000107c(param_3,iVar3,0);
      }
      iVar3 = iVar3 + 1;
      pbVar5 = pbVar5 + 0x30;
    } while (iVar3 < 8);
  }
  else if (param_2 == 0x18) {
    *(char *)(iVar3 + 0x1a643) = (char)param_3;
  }
  else if (bVar1 == 1) {
    if (param_2 == 0) {
      *(uint *)(iVar3 + 0x1a644) = param_3;
      if (*(int *)(iVar3 + 0x1a650) == 1) {
        *(uint *)(iVar3 + 0x1a648) = 0x200 - param_3;
      }
      else {
        *(uint *)(iVar3 + 0x1a648) = param_3;
      }
    }
    else if (param_2 == 1) {
      *(uint *)(iVar3 + 0x1a64c) = 0x100 - param_3;
    }
    else if ((param_2 == 5) && (*(uint *)(iVar3 + 0x1a650) = param_3, param_3 == 1)) {
      *(int *)(iVar3 + 0x1a648) = 0x200 - *(int *)(iVar3 + 0x1a644);
    }
  }
  else if (bVar1 == 3) {
    if (param_2 == 4) {
      *(uint *)(iVar3 + 0x1a644) = param_3;
    }
  }
  else {
    if (bVar1 == 2) {
      if (param_2 != 8) {
        if (param_2 != 9) {
          halt_baddata();
        }
        uVar2 = *(uint *)(iVar3 + 0x1a648);
        if ((int)uVar2 < 0) {
          uVar2 = -uVar2;
        }
        if (param_3 == uVar2) {
          halt_baddata();
        }
        *(uint *)(iVar3 + 0x1a648) = param_3;
        halt_baddata();
      }
    }
    else {
      if (1 < bVar1 - 5) {
        if (bVar1 != 4) {
          if (bVar1 == 8) {
            if (param_2 != 0x13) {
              halt_baddata();
            }
            *(uint *)(iVar4 * 0x30 + 0x1a644) = param_3;
            halt_baddata();
          }
          uVar2 = (int)param_2 - 0x14;
          if (bVar1 != 0xb) {
            halt_baddata();
          }
          if (3 < uVar2) {
            halt_baddata();
          }
          if ((param_3 & 0x8000) != 0) {
            param_3 = param_3 | 0xffff0000;
          }
          *(uint *)(uVar2 * 4 + iVar4 * 0x30 + 0x1a644) = param_3;
          halt_baddata();
        }
        if (param_2 == 0xf) {
          *(uint *)(iVar3 + 0x1a644) = param_3;
          *(uint *)(iVar3 + 0x1a648) = param_3;
          halt_baddata();
        }
        if (param_2 != 0x10) {
          halt_baddata();
        }
        *(uint *)(iVar4 * 0x30 + 0x1a64c) = param_3;
        *(uint *)(iVar4 * 0x30 + 0x1a650) = param_3;
        halt_baddata();
      }
      if (param_2 != 10) {
        if (param_2 == 0xe) {
          *(uint *)(iVar4 * 0x30 + 0x1a648) = param_3;
          halt_baddata();
        }
        if (param_2 == 0xc) {
          *(uint *)(iVar4 * 0x30 + 0x1a64c) = param_3;
          halt_baddata();
        }
        if (param_2 == 0xd) {
          *(uint *)(iVar4 * 0x30 + 0x1a650) = param_3;
          halt_baddata();
        }
        if (param_2 != 0xb) {
          halt_baddata();
        }
        *(uint *)(iVar4 * 0x30 + 0x1a654) = param_3;
        halt_baddata();
      }
    }
    *(uint *)(iVar3 + 0x1a644) = param_3;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00001f28(longlong param_1,int param_2)

{
  undefined4 auStack_28 [10];
  
  if (param_1 == 1) {
    if (DAT_00017d50 == 0) {
      FUN_0001752c(auStack_28);
      FUN_000174f8(0,param_2 << 10,0);
      FUN_000174f8(0,param_2 << 10,0);
      FUN_000174f8(0,param_2 << 2,0);
      FUN_000174f8(0,param_2 << 2,0);
      FUN_000174f8(0,(longlong)param_2 * 0xc,0);
                    // WARNING: Subroutine does not return
      FUN_00017534(auStack_28[0]);
    }
  }
  else if ((param_1 == 0) && (DAT_00017d50 != 0)) {
    FUN_00017500();
    FUN_00017500(DAT_00017d54);
    FUN_00017500(DAT_00018464);
    FUN_00017500(DAT_00018460);
    FUN_00017500(DAT_00017d48);
    DAT_00017d50 = 0;
    DAT_00017d0a = 0;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00002250(void)

{
  DAT_00017d66 = DAT_00017d65;
  FUN_000176d4(DAT_00017d70);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00002288(void)

{
  longlong lVar1;
  
  do {
    lVar1 = FUN_000177f0(1,0);
  } while (lVar1 == 0);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_000022c0(void)

{
  do {
    FUN_000176c4();
    FUN_00000428();
  } while( true );
}



// WARNING: Control flow encountered bad instruction data

void FUN_000022e0(int param_1)

{
  *(undefined4 *)(param_1 * 0x30 + 0x1a644) = 0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00002314(undefined8 param_1,short *param_2,int param_3)

{
  short sVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(param_3 * 0x30 + 0x1a644);
  if (iVar4 != 0) {
    iVar4 = iVar4 * -0x100 + 0x6000;
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    iVar5 = 0xff;
    do {
      sVar1 = *param_2;
      iVar2 = FUN_00016e80(sVar1);
      if ((iVar4 < iVar2) && (iVar2 = iVar2 * 2 - iVar4, 0x7fff < iVar2)) {
        iVar2 = 0x7fff;
      }
      sVar3 = (short)iVar2;
      if (sVar1 < 0) {
        sVar3 = -sVar3;
      }
      *param_2 = sVar3;
      iVar5 = iVar5 + -1;
      param_2 = param_2 + 1;
    } while (-1 < iVar5);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000023e8(int param_1)

{
  int *piVar1;
  undefined4 auStack_10 [4];
  
  FUN_0000245c();
  piVar1 = (int *)(param_1 * 0x30 + 0x1a654);
  if (*piVar1 != 0) {
    FUN_0001752c(auStack_10);
    FUN_00017500(*piVar1);
                    // WARNING: Subroutine does not return
    FUN_00017534(auStack_10[0]);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000245c(void)

{
  char cVar1;
  
  cVar1 = DAT_00017d64;
  do {
    FUN_000176dc(0x28);
    FUN_000176dc(0x28);
  } while (cVar1 == DAT_00017d64);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000024b0(int param_1)

{
  param_1 = param_1 * 0x30;
  *(undefined4 *)(param_1 + 0x1a644) = 0;
  *(undefined4 *)(param_1 + 0x1a648) = 0;
  *(undefined4 *)(param_1 + 0x1a64c) = 4;
  *(undefined4 *)(param_1 + 0x1a650) = 4;
  *(undefined4 *)(param_1 + 0x1a654) = 0x400;
  *(undefined4 *)(param_1 + 0x1a658) = 0x400;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000026b4(ulonglong param_1)

{
  int iVar1;
  byte *pbVar2;
  
  iVar1 = 0;
  pbVar2 = &DAT_0001a641;
  do {
    if (*pbVar2 == param_1) {
      FUN_0000107c(param_1,iVar1,0);
    }
    iVar1 = iVar1 + 1;
    pbVar2 = pbVar2 + 0x30;
  } while (iVar1 < 8);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00002720(int param_1)

{
  *(undefined4 *)(param_1 * 0x30 + 0x1a644) = 1;
  *(undefined4 *)(param_1 * 0x30 + 0x1a648) = 0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00002760(int param_1)

{
  param_1 = param_1 * 0x30;
  *(undefined4 *)(param_1 + 0x1a644) = 0;
  *(undefined4 *)(param_1 + 0x1a648) = 0;
  *(undefined4 *)(param_1 + 0x1a64c) = 0;
  *(undefined4 *)(param_1 + 0x1a650) = 0;
  *(undefined4 *)(param_1 + 0x1a654) = 0;
  *(undefined4 *)(param_1 + 0x1a658) = 0;
  *(undefined4 *)(param_1 + 0x1a65c) = 0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00002834(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  
  if (DAT_00017d68 == 1) {
    do {
      FUN_000176dc(200);
    } while (DAT_00017d68 == 1);
  }
  puVar1 = (undefined4 *)(DAT_00018460 + param_3 * 4);
  *(undefined4 *)(DAT_00018464 + param_3 * 4) = param_2;
  *puVar1 = param_1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000028d0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  DAT_00017d68 = 1;
  iVar2 = 0;
  if (DAT_00017d0a != 0) {
    iVar4 = 0;
    piVar1 = DAT_00018464;
    puVar3 = DAT_00018460;
    do {
      if ((*piVar1 != 0) && (*(int *)(DAT_00017d48 + iVar4 + 8) == -1)) {
                    // WARNING: Subroutine does not return
        FUN_00014a30(*puVar3,*piVar1,0x400);
      }
      piVar1 = piVar1 + 1;
      puVar3 = puVar3 + 1;
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + 0xc;
    } while (iVar2 < (int)(uint)DAT_00017d0a);
  }
  DAT_00017d68 = 0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000029d8(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = DAT_00017d48;
  if (DAT_00017d0a != 0) {
    do {
      iVar2 = iVar2 + 1;
      if (*(int *)(iVar1 + 8) == param_1) {
        *(undefined4 *)(iVar1 + 8) = 0xffffffff;
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
      iVar1 = iVar1 + 0xc;
    } while (iVar2 < (int)(uint)DAT_00017d0a);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00002a2c(void)

{
  uint uVar1;
  
  for (uVar1 = (uint)DAT_00017d0a; uVar1 != 0; uVar1 = uVar1 - 1) {
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00002aa0(void)

{
  if (0 < DAT_00017d70) {
                    // WARNING: Subroutine does not return
    FUN_000177a0(0xf80,0);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00002c68(int param_1)

{
  param_1 = param_1 * 0x30;
  *(undefined4 *)(param_1 + 0x1a644) = 0x4000;
  *(undefined4 *)(param_1 + 0x1a648) = 0;
  *(undefined4 *)(param_1 + 0x1a64c) = 0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00002ca0(undefined8 param_1,undefined8 param_2)

{
  int iStack_18;
  undefined1 auStack_14 [4];
  int iStack_10;
  undefined1 auStack_c [12];
  
  FUN_000176ec(param_1,&iStack_18,auStack_14);
  FUN_000176ec(param_2,&iStack_10,auStack_c);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00002d3c(void)

{
  longlong lVar1;
  
  lVar1 = FUN_000177f0(1,0);
  if (lVar1 == 1) {
    FUN_000116e8(0xc00);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00002d78(void)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  
  if ((DAT_00017fa8 != '\0') && (DAT_00017f9c != 0)) {
    uVar2 = 1;
    do {
      bVar1 = uVar2 < DAT_00017f9c;
      uVar2 = uVar2 + 1;
    } while (bVar1);
  }
  if ((DAT_00017fa9 != '\0') && (DAT_00017f98 != 0)) {
    uVar2 = 1;
    do {
      bVar1 = uVar2 < DAT_00017f98;
      uVar2 = uVar2 + 1;
    } while (bVar1);
  }
  iVar3 = 0x2e;
  do {
    bVar1 = -1 < iVar3;
    iVar3 = iVar3 + -1;
  } while (bVar1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_00002e04(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined2 param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  undefined4 auStack_20 [2];
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  DAT_000184dd = 1;
  DAT_00018088 = 0;
  DAT_00018426 = 1;
  DAT_000183d5 = 1;
  DAT_000183d4 = param_1;
  FUN_00014180(param_2);
  FUN_000142b8(param_3);
  puVar3 = &DAT_0001c440;
  iVar5 = 0;
  iVar4 = 0x2f;
  DAT_0001b02e = 0;
  DAT_0001b02c = 0;
  DAT_00018044 = 0;
  DAT_00018048 = 0;
  DAT_0001804c = 0;
  DAT_00018050 = 0;
  DAT_0001b4bc = 0;
  do {
    *(undefined4 *)(puVar3 + 0x94) = 0;
    puVar3[0x50] = 0;
    *(undefined2 *)(puVar3 + 0x56) = 0;
    *(undefined2 *)(puVar3 + 0x58) = 0;
    *(undefined4 *)(puVar3 + 0xc) = 0;
    *(undefined4 *)(puVar3 + 0x10) = 0;
    puVar3[0x168] = 0;
    puVar3[0x53] = 0;
    puVar3[0x51] = 3;
    *(undefined4 *)(puVar3 + 0x134) = 0xffffffff;
    *(undefined4 *)((int)&DAT_0001c4c4 + iVar5) = 0;
    puVar3[0x16c] = 0;
    *(undefined4 *)(puVar3 + 0x170) = 0;
    puVar3 = puVar3 + 0x274;
    iVar4 = iVar4 + -1;
    iVar5 = iVar5 + 0x274;
  } while (-1 < iVar4);
  FUN_000165cc();
  iVar4 = 0x2f;
  puVar1 = &DAT_0001b54f;
  do {
    *puVar1 = 0;
    iVar4 = iVar4 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar4);
  if (DAT_00018058 == 0) {
    uStack_18 = 0;
    uStack_14 = 1;
    auStack_20[0] = 0;
    DAT_00018058 = FUN_00017710(auStack_20);
  }
  if (DAT_00018054 == 0) {
    uVar2 = FUN_00013cc4(param_4);
    DAT_00018054 = (int)uVar2;
    FUN_000176a4(uVar2,0);
  }
                    // WARNING: Subroutine does not return
  FUN_00017810(1,&DAT_00013d08,&DAT_00018060);
}



// WARNING: Control flow encountered bad instruction data

void FUN_00002fcc(uint param_1,longlong param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  
  if ((&DAT_0001c490)[param_1 * 0x274] != '\0') {
    if (DAT_0001806c == param_1) {
      DAT_0001806c = 0xffffffff;
      DAT_00018070 = 0;
    }
    uVar4 = FUN_00016b78(param_1);
    if ((DAT_0001b011 == '\x01') && (DAT_0001b010 == param_1)) {
      DAT_0001b011 = '\0';
    }
    iVar5 = param_1 * 0x274;
    *(undefined1 *)(iVar5 + 0x1c6b0) = 0;
    *(undefined1 *)(iVar5 + 0x1c698) = 0;
    *(undefined4 *)(iVar5 + 0x1c6a4) = 0;
    *(undefined1 *)(iVar5 + 0x1c608) = 0;
    *(undefined1 *)(iVar5 + 0x1c609) = 0;
    (&DAT_0001c668)[iVar5] = 0;
    (&DAT_0001c669)[iVar5] = 0;
    (&DAT_0001c490)[iVar5] = 0;
    (&DAT_0001c56f)[iVar5] = 0;
    (&DAT_0001c574)[param_1 * 0x9d] = 0xffffffff;
    (&DAT_0001c491)[iVar5] = 3;
    *(undefined1 *)(iVar5 + 0x1c580) = 0;
    *(undefined1 *)(iVar5 + 0x1c58c) = 0;
    (&DAT_0001c4d4)[param_1 * 0x9d] = 0;
    (&DAT_0001c688)[param_1 * 0x9d] = 0;
    if ((&DAT_0001c492)[iVar5] == '\0') {
      (&DAT_00018190)[(int)uVar4] = 0;
      if (param_2 == 0) {
        (&DAT_000182b0)[(int)uVar4] = 0;
        FUN_00013ec4(uVar4,0);
        uVar2 = FUN_000148a4(uVar4);
        uVar3 = FUN_00014884(uVar4);
        if ((&DAT_0001c5ce)[param_1 * 0x13a] != 0) {
          if ((&DAT_0001c5ce)[param_1 * 0x13a] != 0) {
            uVar1 = (&DAT_0001c5bc)[param_1 * 0x13a];
            (&DAT_000180a0)[uVar1] = 0;
            uVar2 = FUN_000148a4(uVar1);
            uVar3 = FUN_00014884(uVar1);
            FUN_000177b0(uVar3 & 0xffff | 0x1600,1 << (uVar2 & 0x1f));
                    // WARNING: Subroutine does not return
            FUN_000177a0((uVar3 | uVar2 << 1) & 0xffff | 0x400,0x1fc0);
          }
          (&DAT_0001c5ce)[param_1 * 0x13a] = 0;
        }
        FUN_000177b0(uVar3 & 0xffff | 0x1600,1 << (uVar2 & 0x1f));
                    // WARNING: Subroutine does not return
        FUN_000177a0(uVar3 & 0xffff | (uVar2 & 0x7fff) << 1 | 0x400,0x1fc0);
      }
    }
    else if ((&DAT_0001c492)[iVar5] == '\x01') {
      FUN_00015428();
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000032cc(uint param_1,undefined2 param_2,undefined2 param_3,int param_4)

{
  bool bVar1;
  undefined1 uVar2;
  longlong lVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined2 in_stack_00000010;
  int in_stack_00000014;
  uint in_stack_00000018;
  
  if (DAT_00017fa0 == 0) {
    halt_baddata();
  }
  uVar6 = (int)param_1 >> 8 & 0xff;
  param_1 = param_1 & 0xff;
  uVar9 = in_stack_00000018 >> 0xf & 1;
  iVar8 = uVar6 * 0x274;
  if ((&DAT_0001c5a8)[iVar8] == '\0') {
    halt_baddata();
  }
  lVar3 = FUN_000148d4(uVar6);
  if (lVar3 != 0) {
    halt_baddata();
  }
  FUN_0000f9ac(uVar6,uVar9);
  iVar7 = in_stack_00000014;
  if (in_stack_00000014 != 0x7f) {
    if ((in_stack_00000014 == 0x7e) || (in_stack_00000014 == 0x7b)) {
      param_1 = 0;
      (&DAT_0001c492)[iVar8] = 0x7e;
      DAT_00018041 = 0;
      (&DAT_0001c448)[uVar6 * 0x9d] = DAT_000184b4;
      if (in_stack_00000014 == 0x7b) {
        iVar7 = 0;
      }
      goto LAB_00003428;
    }
    if (in_stack_00000014 != 0x7d) {
      if (in_stack_00000014 == 2) {
        iVar7 = 0;
      }
      else {
        if (in_stack_00000014 != 3) {
          (&DAT_0001c492)[iVar8] = 0;
          goto LAB_00003428;
        }
        iVar7 = 1;
      }
      (&DAT_0001c492)[iVar8] = 1;
      DAT_00018410 = uVar6;
      goto LAB_00003428;
    }
  }
  (&DAT_0001c492)[iVar8] = (char)in_stack_00000014;
LAB_00003428:
  iVar8 = uVar6 * 0x274;
  (&DAT_0001c491)[iVar8] = 2;
  *(char *)(iVar8 + 0x1c5a9) = (char)uVar9;
  *(undefined1 *)(iVar8 + 0x1c56e) = 0;
  (&DAT_0001c4b0)[uVar6 * 0x9d] = param_1;
  *(undefined4 *)(iVar8 + 0x1c578) = 0;
  if (2 < in_stack_00000014 - 0x7dU) {
    (&DAT_000180d0)[param_1] = param_2;
    *(undefined2 *)(param_1 * 2 + 0x18130) = param_3;
  }
  (&DAT_0001c4b4)[uVar6 * 0x9d] = param_4;
  (&DAT_0001c4bc)[uVar6 * 0x9d] = iVar7;
  *(uint *)(iVar8 + 0x1c4c0) = in_stack_00000018 & 0x7fff;
  if ((&DAT_0001c492)[iVar8] == '\0') {
    if (uVar9 == 0) {
      (&DAT_0001c49a)[uVar6 * 0x13a] = in_stack_00000010;
      (&DAT_00018250)[param_1] = in_stack_00000010;
    }
    else {
      (&DAT_0001c49a)[uVar6 * 0x13a] = (&DAT_00018250)[param_1];
    }
  }
  piVar5 = DAT_000184bc;
  uVar4 = 0;
  iVar8 = uVar6 * 0x274;
  (&DAT_0001c5ac)[iVar8] = 0;
  (&DAT_0001c5b0)[uVar6 * 0x9d] = 0;
  (&DAT_0001c56f)[iVar8] = 0;
  (&DAT_0001c570)[iVar8] = 0;
  (&DAT_0001c574)[uVar6 * 0x9d] = 0xffffffff;
  *(undefined1 *)(iVar8 + 0x1c580) = 0;
  *(undefined1 *)(iVar8 + 0x1c58c) = 0;
  (&DAT_0001c4d4)[uVar6 * 0x9d] = 0;
  *(undefined4 *)(iVar8 + 0x1c48c) = 0;
  uVar9 = DAT_00017f98;
  bVar1 = DAT_00017f98 != 0;
  *(undefined4 *)(iVar8 + 0x1c458) = *(undefined4 *)(iVar8 + 0x1c4c8);
  if (bVar1) {
    do {
      if (*piVar5 == param_4) goto LAB_000035bc;
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 10;
    } while (uVar4 < uVar9);
  }
  uVar4 = 0xffffffff;
LAB_000035bc:
  if (((int)uVar4 < 0) || (lVar3 = FUN_00008958(uVar6,uVar4,0), lVar3 != 0)) {
    (&DAT_0001c490)[uVar6 * 0x274] = 0;
  }
  else {
    iVar8 = uVar6 * 0x274;
    if ((&DAT_0001c492)[iVar8] == '\0') {
      (&DAT_000180a0)[param_1] = 2;
      (&DAT_00018190)[param_1] = 0;
      (&DAT_0001b520)[param_1] = 0;
    }
    *(undefined1 *)(iVar8 + 0x1c5d4) = 1;
    (&DAT_0001c5ce)[uVar6 * 0x13a] = 0;
    *(undefined1 *)(iVar8 + 0x1c5dc) = 0;
    uVar2 = DAT_000183d4;
    (&DAT_0001c5dd)[iVar8] = 0x80;
    *(undefined1 *)(iVar8 + 0x1c5e4) = 0;
    (&DAT_0001c490)[iVar8] = 1;
    *(undefined1 *)(iVar8 + 0x1c5aa) = uVar2;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000036c4(undefined8 param_1,int param_2,int param_3,undefined1 param_4)

{
  byte bVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 uVar6;
  longlong lVar7;
  uint *puVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  undefined4 in_stack_00000010;
  
  lVar15 = 0;
  iVar14 = (int)param_1;
  iVar9 = iVar14 * 0x274;
  bVar1 = (&DAT_0001c492)[iVar9];
  if (bVar1 < 2) {
    if (bVar1 == 1) {
      if (DAT_00018400 == 0) {
        (&DAT_0001c490)[iVar9] = 0;
        halt_baddata();
      }
      (&DAT_0001c448)[iVar14 * 0x9d] = DAT_00018400;
    }
    else if ((&DAT_0001c56f)[iVar9] != '\x02') {
      (&DAT_0001c448)[iVar14 * 0x9d] = *(undefined4 *)(iVar9 + 0x1c4d0);
      (&DAT_0001c44c)[iVar14 * 0x9d] = (&DAT_0001c450)[iVar14 * 0x9d];
    }
  }
  else if (bVar1 == 0x7f) {
    DAT_00018040 = 0;
    (&DAT_0001c448)[iVar14 * 0x9d] = DAT_0001803c;
  }
  piVar10 = DAT_000184bc;
  uVar5 = DAT_00017f98;
  if ((&DAT_0001c492)[iVar14 * 0x274] == '}') {
    DAT_00018042 = 0;
    iVar9 = DAT_000184fc;
  }
  else {
    iVar9 = (&DAT_0001c44c)[iVar14 * 0x9d];
  }
  uVar12 = 0;
  if (iVar9 == 0) {
    (&DAT_0001c490)[iVar14 * 0x274] = 0;
    halt_baddata();
  }
  *(undefined4 *)(iVar14 * 0x274 + 0x1c454) = (&DAT_0001c4c4)[iVar14 * 0x9d];
  (&DAT_0001c49c)[iVar14 * 0x9d] = param_3;
  if (uVar5 != 0) {
    do {
      if (*piVar10 == param_3) goto LAB_0000389c;
      uVar12 = uVar12 + 1;
      piVar10 = piVar10 + 10;
    } while (uVar12 < uVar5);
  }
  uVar12 = 0xffffffff;
LAB_0000389c:
  if ((int)uVar12 < 0) goto LAB_00003b08;
  iVar13 = iVar14 * 0x274;
  *(undefined4 *)(iVar13 + 0x1c4ac) = in_stack_00000010;
  (&DAT_0001c493)[iVar13] = 0;
  sVar2 = *(short *)(param_2 * 2 + 0x18130);
  if ((&DAT_0001c492)[iVar13] == '\x01') {
    DAT_000184c0 = (int)(short)(&DAT_000180d0)[param_2];
    DAT_00018474 = (int)sVar2;
  }
  (&DAT_0001c496)[iVar14 * 0x13a] = (&DAT_000180d0)[param_2];
  (&DAT_0001c498)[iVar14 * 0x13a] = sVar2;
  *(undefined4 *)(iVar13 + 0x1c5d0) = 0;
  (&DAT_0001c5d8)[iVar14 * 0x9d] = 0;
  (&DAT_0001c460)[iVar14 * 0x9d] = iVar9;
  (&DAT_0001c494)[iVar13] = (char)param_2;
  *(undefined4 *)(iVar13 + 0x1c45c) = (&DAT_0001c4c4)[iVar14 * 0x9d];
  (&DAT_0001c495)[iVar13] = param_4;
  *(undefined4 *)(iVar13 + 0x1c584) = 0;
  *(undefined4 *)(iVar13 + 0x1c588) = 0;
  (&DAT_0001c4a4)[iVar14 * 0x9d] = 0;
  *(undefined1 *)(iVar13 + 0x1c444) = 0;
  lVar7 = FUN_00008958(param_1,uVar12,2);
  if (lVar7 != 0) {
    (&DAT_0001c490)[iVar13] = 0;
    halt_baddata();
  }
  piVar11 = &DAT_0001c470 + iVar14 * 0x9d;
  piVar10 = (int *)(iVar13 + 0x1c46c);
  *piVar11 = *(int *)(iVar13 + 0x1c59c);
  (&DAT_0001c468)[iVar14 * 0x9d] = *(int *)(iVar13 + 0x1c59c);
  puVar8 = (uint *)(iVar13 + 0x1c48c);
  *(int *)(iVar13 + 0x1c598) = *(int *)(iVar13 + 0x1c5a4);
  *piVar10 = *(int *)(iVar13 + 0x1c5a4);
  *(undefined4 *)(iVar13 + 0x1c464) = *(undefined4 *)(iVar13 + 0x1c5a0);
  *piVar10 = *piVar10 - *puVar8;
  *piVar11 = *piVar11 + *puVar8;
  if (((*puVar8 != 0) && ((&DAT_0001c495)[iVar13] == '\0')) &&
     ((uint)(*(int *)(iVar13 + 0x1c598) - (&DAT_0001c4c4)[iVar14 * 0x9d]) <= *puVar8)) {
    FUN_0000f9ac(param_1,0);
    halt_baddata();
  }
  iVar9 = iVar14 * 0x274;
  *(undefined1 *)(iVar9 + 0x1c5dc) = 1;
  *(undefined2 *)(iVar9 + 0x1c56c) = 0;
  *(int *)(iVar9 + 0x1c4dc) = param_3;
  *(undefined4 *)(iVar9 + 0x1c500) = (&DAT_0001c470)[iVar14 * 0x9d];
  *(undefined4 *)(iVar9 + 0x1c548) = *(undefined4 *)(iVar9 + 0x1c46c);
  *(undefined4 *)(iVar9 + 0x1c524) = *(undefined4 *)(iVar9 + 0x1c464);
  if ((&DAT_0001c492)[iVar9] == '\0') {
    uVar3 = (&DAT_0001c448)[iVar14 * 0x9d];
    uVar4 = (&DAT_0001c66c)[iVar14 * 0x9d];
LAB_00003af0:
    lVar15 = FUN_0000fb38(uVar3,uVar4);
  }
  else if ((&DAT_0001c492)[iVar9] == '\x7f') {
    uVar3 = (&DAT_0001c448)[iVar14 * 0x9d];
    uVar4 = *(undefined4 *)(iVar9 + 0x1c598);
    goto LAB_00003af0;
  }
  if (lVar15 != -1) {
    FUN_00012d48(param_1,0,0);
    iVar9 = iVar14 * 0x274;
    (&DAT_0001c684)[iVar14 * 0x9d] = (&DAT_0001c448)[iVar14 * 0x9d];
    (&DAT_0001c688)[iVar14 * 0x9d] = 0;
    *(undefined4 *)(iVar9 + 0x1c68c) = 0;
    if ((&DAT_0001c56f)[iVar9] == '\x02') {
      *(undefined1 *)(iVar9 + 0x1c5ab) =
           *(undefined1 *)((&DAT_0001c574)[iVar14 * 0x9d] * 0x274 + 0x1c5aa);
    }
    else {
      *(undefined1 *)(iVar9 + 0x1c5ab) = *(undefined1 *)(iVar9 + 0x1c5aa);
    }
    FUN_000114d4(param_1);
    iVar9 = iVar14 * 0x274;
    if (*(char *)(iVar9 + 0x1c5e4) != '\0') {
      halt_baddata();
    }
    uVar6 = 0x40;
    if (1 < (byte)(&DAT_0001c492)[iVar9]) {
      uVar6 = 0xc0;
    }
    (&DAT_0001c5dd)[iVar9] = uVar6;
    (&DAT_0001c5e0)[iVar14 * 0x9d] = 0xffffffff;
    halt_baddata();
  }
LAB_00003b08:
  (&DAT_0001c490)[iVar14 * 0x274] = 0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00003c78(undefined8 param_1,int param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = (int)param_1;
  if ((&DAT_0001c490)[iVar5 * 0x274] == '\x01') {
    uVar4 = 0;
    piVar1 = DAT_000184bc;
    if (DAT_00017f98 != 0) {
      do {
        if (*piVar1 == param_2) goto LAB_00003d18;
        uVar4 = uVar4 + 1;
        piVar1 = piVar1 + 10;
      } while (uVar4 < DAT_00017f98);
    }
    uVar4 = 0xffffffff;
LAB_00003d18:
    if ((-1 < (int)uVar4) && (lVar3 = FUN_00008958(param_1,uVar4,3), lVar3 == 0)) {
      if (param_3 == 1) {
        *(int *)(iVar5 * 0x274 + 0x1c484) = param_2;
        *(undefined1 *)(iVar5 * 0x274 + 0x1c6b0) = 1;
      }
      else if (param_3 == 0) {
        iVar2 = iVar5 * 0x274;
        (&DAT_0001c49c)[iVar5 * 0x9d] = param_2;
        (&DAT_0001c470)[iVar5 * 0x9d] = *(undefined4 *)(iVar2 + 0x1c478);
        *(undefined4 *)(iVar2 + 0x1c46c) = *(undefined4 *)(iVar2 + 0x1c488);
        *(undefined4 *)(iVar2 + 0x1c464) = *(undefined4 *)(iVar2 + 0x1c474);
        *(undefined2 *)(iVar2 + 0x1c56c) = 0;
        *(int *)(iVar2 + 0x1c4dc) = param_2;
        *(undefined4 *)(iVar2 + 0x1c500) = (&DAT_0001c470)[iVar5 * 0x9d];
        *(undefined4 *)(iVar2 + 0x1c548) = *(undefined4 *)(iVar2 + 0x1c46c);
        *(undefined4 *)(iVar2 + 0x1c524) = *(undefined4 *)(iVar2 + 0x1c464);
      }
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00003e24(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined4 in_stack_00000010;
  int in_stack_00000014;
  undefined4 in_stack_00000018;
  
  if (DAT_00018098 == 0) {
    DAT_00018500 = 0;
    DAT_00018488 = 0;
    DAT_00018494 = 0;
    DAT_00018098 = 1;
    DAT_000184a0 = 0;
    iVar5 = in_stack_00000014 * 0x274;
    DAT_00018524 = *(int *)(iVar5 + 0x1c4d8);
    DAT_0001848c = param_2;
    DAT_000184a8 = in_stack_00000010;
    DAT_000184cc = in_stack_00000014;
    DAT_000184f4 = param_1;
    DAT_00018504 = in_stack_00000010;
    DAT_00018508 = param_4;
    DAT_0001850c = param_3;
    DAT_0001851c = in_stack_00000018;
    *(undefined4 *)(iVar5 + 0x1c5b8) = param_3;
    piVar1 = DAT_000184bc;
    if (*(char *)(iVar5 + 0x1c5ab) == '\x01') {
      DAT_00018090 = 1;
      DAT_0001808c = 0;
    }
    else if (DAT_00018524 == 0) {
      uVar3 = 0;
      piVar4 = DAT_000184bc;
      if (DAT_00017f98 != 0) {
        do {
          if (*piVar4 == (&DAT_0001c49c)[in_stack_00000014 * 0x9d]) goto LAB_00003f90;
          uVar3 = uVar3 + 1;
          piVar4 = piVar4 + 10;
        } while (uVar3 < DAT_00017f98);
      }
      uVar3 = 0xffffffff;
LAB_00003f90:
      iVar5 = DAT_000184cc * 0x274;
      *(uint *)(iVar5 + 0x1c694) = uVar3;
      if (*(char *)((int)piVar1 + uVar3 * 0x28 + 0x22) == '\0') {
        uVar2 = FUN_00017558(piVar1[uVar3 * 10 + 7],1);
        *(undefined4 *)(DAT_000184cc * 0x274 + 0x1c4a0) = uVar2;
      }
      else {
        *(int *)(iVar5 + 0x1c4a0) = piVar1[uVar3 * 10 + 9];
      }
      DAT_000184f4 = *(undefined4 *)(DAT_000184cc * 0x274 + 0x1c4a0);
      DAT_00018090 = 1;
      DAT_0001808c = 0;
      FUN_000043e8();
    }
    else {
      DAT_00018090 = 1;
      DAT_0001808c = 0;
      FUN_000043e8();
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000040a4(void)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = DAT_0001809c;
  if (((DAT_00018430 != 0) && (DAT_00018430 = 0, DAT_00018028 != 1)) && (DAT_00018098 != 0)) {
    if ((DAT_00018524 != 0) && (DAT_0001809c == '\x01')) {
      DAT_0001809c = '\0';
      lVar2 = FUN_0001784c();
      if (lVar2 == 0) {
        DAT_00018084 = '\0';
      }
      else if (lVar2 == 0x30) {
        DAT_00018084 = cVar1;
        DAT_0001842c = 1;
      }
      else if (lVar2 == 0x31) {
        DAT_00018084 = '\x02';
        DAT_0001842c = 1;
      }
      else if (lVar2 == 1) {
        DAT_0001842c = 1;
        DAT_00018084 = '\x01';
      }
      else {
        DAT_00018084 = '\0';
      }
      if (DAT_00018084 == '\0') {
        DAT_00018080 = 0;
      }
      else {
        DAT_00018080 = (int)DAT_00018084;
        DAT_0001807c = DAT_0001807c + 1 & 0xffff;
      }
    }
    DAT_00018090 = (uint)(DAT_0001842c == 0);
    DAT_0001842c = 0;
    FUN_00017728(DAT_00018058);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00004224(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  uVar6 = 0;
  uVar5 = *(uint *)(param_1 * 0x274 + 0x1c690);
  if (uVar5 == 1) {
    bVar1 = false;
    piVar3 = DAT_0001850c;
    do {
      piVar3 = piVar3 + -4;
      if ((*piVar3 != 0) && (*piVar3 != 0x77770007)) goto LAB_000042cc;
      uVar6 = uVar6 + 1;
    } while (uVar6 <= *(uint *)(param_1 * 0x274 + 0x1c57c) >> 4);
    bVar1 = true;
LAB_000042cc:
    iVar7 = param_1 * 0x274;
    uVar5 = *(uint *)(iVar7 + 0x1c57c);
    if (!bVar1) {
      uVar5 = *(uint *)(iVar7 + 0x1c57c) + uVar6 * -0x10;
      uVar6 = *(uint *)(iVar7 + 0x1c458) >> 1;
      if ((uVar5 < uVar6) && ((&DAT_0001c495)[iVar7] == '\0')) {
        uVar5 = uVar6;
      }
    }
  }
  iVar7 = 0;
  if (0 < DAT_00018034) {
    puVar4 = &DAT_0001c5ac;
    puVar2 = &DAT_0001c5b4;
    do {
      if (param_1 == puVar2[-0x10]) {
        if ((&DAT_0001c495)[param_1 * 0x274] == '\0') {
          *puVar4 = 1;
        }
        else {
          *puVar4 = 2;
        }
        puVar2[-1] = uVar5;
        *puVar2 = *(undefined4 *)(param_1 * 0x274 + 0x1c5b8);
      }
      puVar2 = puVar2 + 0x9d;
      iVar7 = iVar7 + 1;
      puVar4 = puVar4 + 0x274;
    } while (iVar7 < DAT_00018034);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000043e8(void)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  ushort uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  longlong lVar13;
  undefined *puVar14;
  uint uVar15;
  uint uVar16;
  
  bVar3 = false;
  bVar4 = false;
  if (DAT_00018090 == 0) {
    halt_baddata();
  }
  DAT_00018090 = 0;
  iVar10 = DAT_000184cc * 0x274;
  if (((&DAT_0001c490)[iVar10] == '\0') || ((&DAT_0001c491)[iVar10] == '\x02')) {
    DAT_0001808c = 1;
    DAT_00018070 = 0;
    DAT_00018098 = 0;
    if (DAT_00018524 != 0) {
      DAT_00018070 = 0;
      DAT_0001808c = 1;
      DAT_00018090 = 0;
      DAT_00018098 = 0;
      halt_baddata();
    }
    if (*(char *)(iVar10 + 0x1c5ab) == '\x01') {
      DAT_00018070 = 0;
      DAT_0001808c = 1;
      DAT_00018090 = 0;
      DAT_00018098 = 0;
      halt_baddata();
    }
    if (*(char *)((int)DAT_000184bc + *(int *)(iVar10 + 0x1c694) * 0x28 + 0x22) != '\0') {
      DAT_00018070 = 0;
      DAT_0001808c = 1;
      DAT_00018090 = 0;
      DAT_00018098 = 0;
      halt_baddata();
    }
    FUN_00017560(DAT_000184f4);
    halt_baddata();
  }
  if (DAT_00018098 == 1) {
    DAT_00018098 = 2;
LAB_0000454c:
    if (*(char *)(DAT_000184cc * 0x274 + 0x1c444) != '\x01') {
      if (DAT_00018488 != 0) {
        FUN_00017640(DAT_0001850c,&DAT_00018dc0 + DAT_00018494,DAT_00018500);
      }
      uVar8 = DAT_00018500;
      uVar7 = DAT_000184cc;
      uVar15 = DAT_0001848c + DAT_00018500;
      iVar12 = DAT_000184cc * 0x274;
      piVar11 = (int *)(iVar12 + 0x1c46c);
      puVar14 = DAT_0001850c + DAT_00018500;
      iVar10 = DAT_000184cc * 0x9d;
      DAT_0001848c = uVar15;
      DAT_0001850c = puVar14;
      *piVar11 = *piVar11 - DAT_00018500;
      DAT_00018504 = DAT_00018504 - uVar8;
      bVar1 = DAT_00018504 != 0;
      (&DAT_0001c470)[iVar10] = (&DAT_0001c470)[iVar10] + uVar8;
      if (bVar1) {
        if ((*piVar11 == 0) || (uVar15 == DAT_00018508)) {
          cVar2 = (&DAT_0001c495)[iVar12];
          uVar5 = *(short *)(iVar12 + 0x1c56c) + 1;
          *(ushort *)(iVar12 + 0x1c56c) = uVar5;
          uVar15 = (uint)uVar5;
          iVar10 = *(int *)((uint)uVar5 * 4 + iVar12 + 0x1c4dc);
          if (((cVar2 == '\0') || (uVar15 <= *(byte *)(iVar12 + 0x1c56e))) &&
             (((&DAT_0001c492)[iVar12] == '\0' && (uVar8 != 0)))) {
            FUN_00016c80(uVar7,puVar14,0);
          }
          uVar7 = DAT_000184cc;
          piVar11 = DAT_000184bc;
          iVar12 = DAT_000184cc * 0x274;
          if (*(char *)(iVar12 + 0x1c6b0) == '\x01') {
            (&DAT_0001c468)[DAT_000184cc * 0x9d] = *(undefined4 *)(iVar12 + 0x1c478);
            *(undefined4 *)(iVar12 + 0x1c598) = *(undefined4 *)(iVar12 + 0x1c488);
            (&DAT_0001c49c)[uVar7 * 0x9d] = *(int *)(iVar12 + 0x1c484);
            (&DAT_0001c470)[uVar7 * 0x9d] = *(undefined4 *)(iVar12 + 0x1c480);
            *(undefined4 *)(iVar12 + 0x1c46c) = *(undefined4 *)(iVar12 + 0x1c47c);
            uVar8 = DAT_00017f98;
            *(undefined4 *)(iVar12 + 0x1c464) = *(undefined4 *)(iVar12 + 0x1c474);
            uVar16 = DAT_000184cc;
            uVar15 = 0;
            if (uVar8 != 0) {
              do {
                if (*piVar11 == (&DAT_0001c49c)[uVar7 * 0x9d]) goto LAB_00004828;
                uVar15 = uVar15 + 1;
                piVar11 = piVar11 + 10;
              } while (uVar15 < uVar8);
            }
            uVar15 = 0xffffffff;
LAB_00004828:
            *(undefined2 *)(DAT_000184cc * 0x274 + 0x1c56c) = 0;
            FUN_00008958(uVar16,uVar15,2);
            uVar7 = DAT_000184cc;
            if (((&DAT_0001c56f)[DAT_000184cc * 0x274] == '\x01') && (0 < DAT_00018034)) {
              puVar9 = &DAT_0001c49c;
              iVar12 = DAT_00018034;
              do {
                if (puVar9[0x36] == uVar7) {
                  *puVar9 = (&DAT_0001c49c)[puVar9[0x36] * 0x9d];
                }
                iVar12 = iVar12 + -1;
                puVar9 = puVar9 + 0x9d;
              } while (iVar12 != 0);
            }
          }
          else if (*(byte *)(iVar12 + 0x1c56e) < uVar15) {
            *(undefined2 *)(iVar12 + 0x1c56c) = 0;
            if (uVar15 == 1) {
              if (DAT_00018508 < (uint)(&DAT_0001c4c4)[uVar7 * 0x9d]) {
                *(char *)(iVar12 + 0x1c444) = (char)uVar5;
              }
              uVar7 = DAT_000184cc;
              iVar12 = DAT_000184cc * 0x274;
              DAT_00018508 = *(uint *)(iVar12 + 0x1c464);
              bVar3 = true;
              *(undefined4 *)(iVar12 + 0x1c46c) = *(undefined4 *)(iVar12 + 0x1c598);
              (&DAT_0001c470)[uVar7 * 0x9d] = (&DAT_0001c468)[uVar7 * 0x9d];
            }
            else {
              iVar10 = *(int *)(iVar12 + 0x1c4dc);
            }
          }
          if (!bVar3) {
            if (*(char *)(DAT_000184cc * 0x274 + 0x1c6b0) == '\0') {
              uVar15 = 0;
              piVar11 = DAT_000184bc;
              if (DAT_00017f98 != 0) {
                do {
                  if (*piVar11 == iVar10) goto LAB_00004a24;
                  uVar15 = uVar15 + 1;
                  piVar11 = piVar11 + 10;
                } while (uVar15 < DAT_00017f98);
              }
              uVar15 = 0xffffffff;
LAB_00004a24:
              FUN_00008958(DAT_000184cc,uVar15,1);
              uVar7 = DAT_000184cc;
              iVar12 = DAT_000184cc * 0x274;
              (&DAT_0001c49c)[DAT_000184cc * 0x9d] = iVar10;
              (&DAT_0001c470)[uVar7 * 0x9d] =
                   *(undefined4 *)((uint)*(ushort *)(iVar12 + 0x1c56c) * 4 + iVar12 + 0x1c500);
              *(undefined4 *)(iVar12 + 0x1c46c) =
                   *(undefined4 *)((uint)*(ushort *)(iVar12 + 0x1c56c) * 4 + iVar12 + 0x1c548);
              *(undefined4 *)(iVar12 + 0x1c464) =
                   *(undefined4 *)((uint)*(ushort *)(iVar12 + 0x1c56c) * 4 + iVar12 + 0x1c524);
            }
            iVar10 = DAT_000184cc * 0x274;
            *(undefined1 *)(iVar10 + 0x1c6b0) = 0;
            DAT_00018508 = *(uint *)(iVar10 + 0x1c464);
            DAT_00018524 = *(int *)(iVar10 + 0x1c4d8);
            if ((DAT_00018524 == 0) && (*(char *)(iVar10 + 0x1c5ab) != '\x01')) {
              if (*(char *)((int)DAT_000184bc + *(int *)(iVar10 + 0x1c694) * 0x28 + 0x22) == '\0') {
                FUN_00017560(DAT_000184f4);
              }
              piVar11 = DAT_000184bc;
              iVar10 = DAT_000184cc * 0x274;
              *(uint *)(iVar10 + 0x1c694) = uVar15;
              if (*(char *)((int)piVar11 + uVar15 * 0x28 + 0x22) == '\0') {
                uVar6 = FUN_00017558(piVar11[uVar15 * 10 + 7],1);
                *(undefined4 *)(DAT_000184cc * 0x274 + 0x1c4a0) = uVar6;
              }
              else {
                *(int *)(iVar10 + 0x1c4a0) = piVar11[uVar15 * 10 + 9];
              }
            }
            DAT_000184f4 = *(int *)(DAT_000184cc * 0x274 + 0x1c4a0);
          }
          DAT_0001848c = (&DAT_0001c470)[DAT_000184cc * 0x9d];
        }
        uVar8 = DAT_0001848c;
        uVar15 = DAT_0001848c + *(int *)(DAT_000184cc * 0x274 + 0x1c46c);
        uVar7 = DAT_0001848c + DAT_00018504;
        if (uVar15 < DAT_0001848c + DAT_00018504) {
          uVar7 = uVar15;
        }
        if ((DAT_0001848c & 0x7ff) == 0) {
          if ((int)DAT_00018508 < (int)uVar7) {
            uVar7 = DAT_00018508;
          }
          uVar15 = uVar7;
          if ((uVar7 & 0x7ff) != 0) {
            if ((int)(uVar7 - DAT_0001848c) < 0x801) {
              bVar4 = true;
            }
            else {
              if ((int)uVar7 < 0) {
                uVar7 = uVar7 + 0x7ff;
              }
              uVar15 = ((int)uVar7 >> 0xb) << 0xb;
            }
          }
LAB_00004d40:
          uVar16 = uVar15 - DAT_0001848c;
        }
        else {
          bVar4 = true;
          uVar15 = DAT_0001848c;
          if ((int)DAT_0001848c < 0) {
            uVar15 = DAT_0001848c + 0x7ff;
          }
          uVar15 = (((int)uVar15 >> 0xb) + 1) * 0x800;
          if ((int)uVar15 < (int)uVar7) {
            uVar7 = uVar15;
          }
          uVar16 = uVar7 - DAT_0001848c;
          uVar15 = DAT_00018508;
          if ((int)DAT_00018508 < (int)uVar7) goto LAB_00004d40;
        }
        iVar10 = DAT_000184cc * 0x274;
        DAT_00018500 = uVar16;
        if (*(char *)(iVar10 + 0x1c5ab) == '\x01') {
          DAT_00018430 = 1;
          FUN_000040a4(0);
          lVar13 = 1;
          DAT_00018488 = 0;
        }
        else if (bVar4) {
          uVar7 = DAT_0001848c;
          if ((int)DAT_0001848c < 0) {
            uVar7 = DAT_0001848c + 0x7ff;
          }
          iVar12 = (int)uVar7 >> 0xb;
          DAT_00018494 = DAT_0001848c + iVar12 * -0x800;
          if (DAT_00018524 == 0) {
            DAT_000184a0 = 0;
            FUN_00016ed4();
            FUN_00017570(DAT_000184f4,iVar12 * 0x800,0);
            FUN_00016f24();
            FUN_00016ed4();
            FUN_00017568(DAT_000184f4,&DAT_00018dc0,0x800);
            FUN_00016f24();
LAB_00004e7c:
            DAT_00018430 = 1;
            FUN_000040a4(0);
            lVar13 = 1;
          }
          else {
            if (DAT_000184f4 + iVar12 == DAT_000184a0) {
              if ((&DAT_0001c492)[iVar10] == '~') goto LAB_00004e7c;
            }
            else if ((&DAT_0001c492)[iVar10] == '~') {
              DAT_000184a0 = DAT_000184f4 + iVar12;
            }
            uVar7 = DAT_0001848c;
            if ((int)DAT_0001848c < 0) {
              uVar7 = DAT_0001848c + 0x7ff;
            }
            DAT_00018580 = &DAT_00018dc0;
            DAT_0001809c = 1;
            DAT_00018584 = &DAT_000184dc;
            DAT_00018438 = 1;
            DAT_00018434 = DAT_000184f4 + ((int)uVar7 >> 0xb);
            FUN_0001785c(0x10);
            DAT_00018430 = 1;
            lVar13 = FUN_00017844(DAT_00018434,DAT_00018438,DAT_00018580,DAT_00018584);
          }
          DAT_00018488 = 1;
        }
        else {
          if (DAT_00018524 == 0) {
            FUN_00016ed4();
            if ((int)uVar8 < 0) {
              uVar8 = uVar8 + 0x7ff;
            }
            FUN_00017570(DAT_000184f4,((int)uVar8 >> 0xb) << 0xb,0);
            FUN_00016f24();
            if (DAT_00017d78 == 0) {
              FUN_00017568(DAT_000184f4,DAT_0001850c,uVar16);
            }
            else {
              iVar10 = 0;
              if (DAT_0001b02c == '\0') {
                while( true ) {
                  uVar7 = uVar16;
                  if ((int)uVar16 < 0) {
                    uVar7 = uVar16 + 0x7ff;
                  }
                  if ((int)uVar7 >> 0xb <= iVar10) break;
                  FUN_00016ed4();
                  iVar12 = iVar10 * 0x800;
                  iVar10 = iVar10 + 1;
                  FUN_00017568(DAT_000184f4,DAT_0001850c + iVar12,0x800);
                  FUN_00016f24();
                }
              }
              else {
                FUN_00016ed4();
                while( true ) {
                  uVar7 = uVar16;
                  if ((int)uVar16 < 0) {
                    uVar7 = uVar16 + 0x7ff;
                  }
                  if ((int)uVar7 >> 0xb <= iVar10) break;
                  iVar12 = iVar10 * 0x800;
                  iVar10 = iVar10 + 1;
                  FUN_00017568(DAT_000184f4,DAT_0001850c + iVar12,0x800);
                }
                FUN_00016f24();
              }
            }
            DAT_00018430 = 1;
            FUN_000040a4(0);
            lVar13 = 1;
          }
          else {
            uVar7 = DAT_0001848c;
            if ((int)DAT_0001848c < 0) {
              uVar7 = DAT_0001848c + 0x7ff;
            }
            DAT_00018438 = uVar16 >> 0xb;
            DAT_00018584 = &DAT_000184dc;
            DAT_0001809c = 1;
            DAT_00018434 = DAT_000184f4 + ((int)uVar7 >> 0xb);
            DAT_00018580 = DAT_0001850c;
            FUN_0001785c(0x10);
            DAT_00018430 = 1;
            lVar13 = FUN_00017844(DAT_00018434,DAT_00018438,DAT_00018580,DAT_00018584);
          }
          DAT_00018488 = 0;
        }
        if (lVar13 == 0) {
          if (DAT_00018028 == 0) {
            FUN_00005310();
            DAT_00018028 = 1;
            DAT_0001802c = 1;
            DAT_00018085 = 1;
          }
          DAT_0001808c = 1;
          halt_baddata();
        }
        goto LAB_00005144;
      }
      if ((&DAT_0001c492)[iVar12] == '\0') {
        if (uVar8 != 0) {
          FUN_00016c2c(uVar7,puVar14,0);
        }
        if (((*(int *)(DAT_000184cc * 0x274 + 0x1c46c) == 0) || (DAT_0001848c == DAT_00018508)) &&
           ((&DAT_0001c574)[DAT_000184cc * 0x9d] != -1)) {
          FUN_00004224();
        }
      }
    }
  }
  else {
    if (DAT_00018098 < 2) {
      if (DAT_00018098 == 0) {
        DAT_0001808c = 1;
      }
      goto LAB_00005144;
    }
    if (DAT_00018098 == 2) goto LAB_0000454c;
    if (DAT_00018098 != 0xf4) goto LAB_00005144;
  }
  DAT_00018098 = 0;
LAB_00005144:
  if (DAT_00018098 == 0) {
    if (((DAT_00018524 == 0) && (*(char *)(DAT_000184cc * 0x274 + 0x1c5ab) != '\x01')) &&
       (*(char *)((int)DAT_000184bc + *(int *)(DAT_000184cc * 0x274 + 0x1c694) * 0x28 + 0x22) ==
        '\0')) {
      FUN_00017560(DAT_000184f4);
    }
    if (((DAT_00018028 == 0) && (DAT_0001802c == 1)) && (DAT_000184f0 == DAT_000184cc)) {
      DAT_0001802c = 0;
      FUN_000055f0(1);
    }
    DAT_0001808c = 1;
    (*DAT_0001851c)(1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000526c(void)

{
  if ((&DAT_0001c491)[DAT_000184cc * 0x274] == '\x05') {
    if ((&DAT_0001c56f)[DAT_000184cc * 0x274] == '\0') {
      FUN_00007aa4(DAT_000184cc,(&DAT_0001c4c4)[DAT_000184cc * 0x9d],2,&DAT_00014680);
    }
    else {
      FUN_00007aa4(DAT_000184cc,(&DAT_0001c4c4)[DAT_000184cc * 0x9d],2,&DAT_000147d4);
    }
  }
  else {
    DAT_00018070 = 0;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00005310(void)

{
  undefined2 uVar1;
  ushort uVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ushort *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  if (0 < DAT_00018034) {
    iVar4 = 0;
    iVar12 = 0;
    do {
      uVar3 = DAT_0001841c;
      iVar10 = iVar4 * 0x20 + iVar12 * 0x1d;
      iVar8 = iVar12 + 1;
      DAT_0001841c = uVar3;
      if ((&DAT_0001c490)[iVar10 * 4] == '\x01') {
        if ((&DAT_0001c492)[iVar10 * 4] == '\0') {
          iVar5 = FUN_00016b78(iVar12);
          uVar1 = (&DAT_0001c49a)[iVar10 * 2];
          if ((&DAT_0001b520)[iVar5] != '\x01') {
            (&DAT_000182b0)[iVar5] = 1;
            (&DAT_0001b520)[iVar5] = '\0';
            if ((&DAT_0001c5ce)[iVar10 * 2] != 0) {
              if ((&DAT_0001c5ce)[iVar10 * 2] != 0) {
                puVar7 = &DAT_0001c5bc + iVar10 * 2;
                uVar9 = (uint)(ushort)(&DAT_0001c5ce)[iVar10 * 2];
                do {
                  uVar2 = *puVar7;
                  puVar7 = puVar7 + 1;
                  uVar9 = uVar9 - 1;
                  (&DAT_0001b520)[uVar2] = 0;
                } while (uVar9 != 0);
              }
              iVar10 = 0;
              if ((&DAT_0001c5ce)[iVar12 * 0x3a + iVar4 * 0x40] != 0) {
                iVar6 = 0;
                do {
                  iVar11 = iVar4 * 0x20 + iVar12 * 0x1d;
                  FUN_00013ec4(*(undefined2 *)((int)&DAT_0001c5bc + iVar6 + iVar11 * 4),0);
                  iVar10 = iVar10 + 1;
                  iVar6 = iVar10 * 2;
                } while (iVar10 < (int)(uint)(ushort)(&DAT_0001c5ce)[iVar11 * 2]);
              }
            }
            FUN_00013ec4(iVar5,0);
            if (((&DAT_0001c5ce)[iVar12 * 0x3a + iVar4 * 0x40] != 0) &&
               (iVar10 = 0, (&DAT_0001c5ce)[iVar12 * 0x3a + iVar4 * 0x40] != 0)) {
              do {
                iVar11 = iVar10 + 1;
                iVar6 = iVar4 * 0x20 + iVar12 * 0x1d;
                uVar2 = (&DAT_0001c5ce)[iVar6 * 2];
                (&DAT_00018250)[(ushort)(&DAT_0001c5bc)[iVar6 * 2 + iVar10]] = uVar1;
                iVar10 = iVar11;
              } while (iVar11 < (int)(uint)uVar2);
            }
            (&DAT_00018250)[iVar5] = uVar1;
          }
        }
        else if ((&DAT_0001c492)[iVar10 * 4] == '\x01') {
          FUN_000154b0();
          DAT_0001841d = 1;
          DAT_0001841c = uVar3;
        }
      }
      iVar4 = iVar8 * 4;
      iVar12 = iVar8;
    } while (iVar8 < DAT_00018034);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000055f0(void)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined *puVar13;
  int iStack_30;
  
  if (0 < DAT_00018034) {
    iVar3 = 0;
    iVar11 = 0;
    do {
      iVar3 = iVar3 * 0x20 + iVar11 * 0x1d;
      iVar8 = iVar11 + 1;
      if (((&DAT_0001c56f)[iVar3 * 4] == '\x01') && ((&DAT_0001c490)[iVar3 * 4] == '\x01')) {
        uVar7 = FUN_00016b78(iVar11);
        sVar1 = FUN_000148a4(uVar7);
        uVar2 = FUN_00014884(uVar7);
        iVar4 = FUN_000177c8(uVar2 | sVar1 << 1 | 0x2240);
        iVar9 = (&DAT_0001c448)[iVar3];
        if (0 < DAT_00018034) {
          iVar5 = 0;
          iVar10 = 0;
          do {
            iVar5 = iVar5 * 0x20 + iVar10 * 0x1d;
            iVar12 = iVar10 + 1;
            if ((((&DAT_0001c574)[iVar5] == (&DAT_0001c574)[iVar3]) &&
                ((&DAT_0001c490)[iVar5 * 4] == '\x01')) && (iVar10 != iVar11)) {
              uVar7 = FUN_00016b78(iVar10);
              sVar1 = FUN_000148a4(uVar7);
              uVar2 = FUN_00014884(uVar7);
                    // WARNING: Subroutine does not return
              FUN_000177c0(uVar2 | sVar1 << 1 | 0x2240,(&DAT_0001c448)[iVar5] + (iVar4 - iVar9));
            }
            iVar5 = iVar12 * 4;
            iVar10 = iVar12;
          } while (iVar12 < DAT_00018034);
        }
      }
      iVar3 = iVar8 * 4;
      iVar11 = iVar8;
    } while (iVar8 < DAT_00018034);
  }
  iVar11 = 0;
  if (0 < DAT_00018034) {
    iStack_30 = 0;
    puVar13 = &DAT_0001c440;
    do {
      if (puVar13[0x50] == '\x01') {
        if (puVar13[0x52] == '\0') {
          uVar7 = FUN_00016b78(iVar11);
          iVar3 = (int)uVar7;
          if ((&DAT_000182b0)[iVar3] != 0) {
            if ((*(short *)(puVar13 + 0x18e) != 0) && (iVar8 = 0, *(short *)(puVar13 + 0x18e) != 0))
            {
              iVar9 = iStack_30;
              do {
                puVar6 = (undefined2 *)((int)&DAT_0001c5bc + iVar9);
                iVar9 = iVar9 + 2;
                FUN_00013ec4(*puVar6,(&DAT_00018250)[iVar3]);
                iVar8 = iVar8 + 1;
              } while (iVar8 < (int)(uint)*(ushort *)((int)&DAT_0001c5ce + iStack_30));
            }
            FUN_00013ec4(uVar7,(&DAT_00018250)[iVar3]);
            *(undefined2 *)(puVar13 + 0x5a) = (&DAT_00018250)[iVar3];
          }
        }
        else if (puVar13[0x52] == '\x01') {
          if (DAT_0001841c == '\0') {
            if (DAT_00018414 == '\0') {
LAB_00005988:
              if (DAT_0001841c != '\0') {
                FUN_0001089c();
              }
            }
            else {
              FUN_00015524();
            }
          }
          else if (DAT_00018414 == '\0') goto LAB_00005988;
          DAT_0001841d = 0;
        }
      }
      iStack_30 = iStack_30 + 0x274;
      iVar11 = iVar11 + 1;
      puVar13 = puVar13 + 0x274;
    } while (iVar11 < DAT_00018034);
  }
  iVar11 = 0x2f;
  puVar6 = &DAT_0001830e;
  do {
    *puVar6 = 0;
    iVar11 = iVar11 + -1;
    puVar6 = puVar6 + -1;
  } while (-1 < iVar11);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_00005a1c(void)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  
  do {
    do {
      DAT_00017f90 = 0;
      if (DAT_00017f94 == 1) {
        DAT_00017f94 = 0;
        FUN_000176cc(DAT_00018454);
      }
      FUN_00017730(DAT_00018058);
      if (DAT_00018084 == '\x01') {
        if ((&DAT_0001c4d4)
            [((uint)DAT_000184f0 * 0x28 - (uint)DAT_000184f0) * 4 + (uint)DAT_000184f0] == 1) {
          DAT_0001842c = 0;
          DAT_0001809c = 1;
          FUN_0001785c(0x10);
          DAT_00018430 = 1;
          FUN_00017844(DAT_00018434,DAT_00018438,DAT_00018580,DAT_00018584);
          FUN_00010ebc(DAT_000184f0,0,0,3);
          DAT_0001808c = 1;
        }
        DAT_00018084 = '\0';
      }
      DAT_00017f90 = 1;
      if (DAT_0001b02c != '\x01') {
        FUN_000116e8(0);
      }
    } while (DAT_00018068 != 0);
    if (DAT_0001805c == 1) {
      FUN_00012de4();
      FUN_0000d500();
      FUN_00016528();
      DAT_0001805c = 0;
    }
    lVar8 = 0;
    FUN_00006c44();
    FUN_0000d5e4();
    if (DAT_00018028 == 0) {
      if (DAT_0001802c == 0) {
        FUN_0000d35c(DAT_00018048,DAT_0001804c,DAT_00018050);
      }
      if (DAT_00018028 == 0) {
        DAT_00017f90 = 1;
        FUN_000043e8();
        lVar8 = FUN_00006848();
      }
    }
    DAT_00017f90 = 2;
    if ((((lVar8 == 0) && (DAT_00018028 == 0)) && (DAT_00018070 == 0)) && (DAT_00018034 != 0)) {
      if (DAT_00017d08 == '\x02') {
        FUN_00002aa0();
        DAT_0001b02c = '\0';
      }
      DAT_00018024 = DAT_00018020;
      if ((DAT_0001802c == 1) &&
         ((iVar3 = ((uint)DAT_000184f0 * 0x28 - (uint)DAT_000184f0) * 4 + (uint)DAT_000184f0,
          (&DAT_0001c490)[iVar3 * 4] != '\x01' || ((&DAT_0001c4d4)[iVar3] == 0)))) {
        DAT_0001802c = 0;
        FUN_000055f0();
      }
      iVar7 = 0;
      iVar3 = FUN_000135f4();
      if (0 < iVar3) {
        do {
          if (((DAT_0001808c == 1) && (DAT_00018064 == 0)) && (DAT_0001806c == -1)) {
            uVar5 = 0xffffffffffffffff;
            if (DAT_0001802c == 1) {
              uVar5 = (ulonglong)DAT_000184f0;
              iVar4 = ((uint)DAT_000184f0 * 0x28 - (uint)DAT_000184f0) * 4 + (uint)DAT_000184f0;
              if (((&DAT_0001c490)[iVar4 * 4] != '\x01') || ((&DAT_0001c4d4)[iVar4] == 0)) {
                DAT_0001802c = 0;
                FUN_000055f0();
                uVar5 = 0xffffffffffffffff;
              }
            }
            if (uVar5 == 0xffffffffffffffff) {
              uVar5 = FUN_0001686c(iVar7,iVar3);
            }
            iVar4 = (int)uVar5;
            iVar6 = iVar4 * 0x274;
            if ((&DAT_0001c490)[iVar6] == '\x01') {
              cVar1 = (&DAT_0001c491)[iVar6];
              DAT_00017f90 = 2;
              if (cVar1 == '\x02') {
                FUN_00006500(uVar5,0);
                FUN_00006748(uVar5);
              }
              else if (cVar1 == '\x06') {
LAB_00005fb4:
                FUN_00006500(uVar5,0);
                FUN_00006d70(uVar5);
              }
              else if (cVar1 == '\x01') {
                if (((&DAT_0001c492)[iVar6] == '\x7f') && ((&DAT_0001c495)[iVar6] == '\x02')) {
                  (&DAT_0001c491)[iVar6] = 0;
                }
                else {
                  cVar1 = *(char *)(iVar4 * 0x274 + 0x1c5dc);
joined_r0x00005fa8:
                  if (cVar1 == '\x01') goto LAB_00005fb4;
                }
              }
              else if (cVar1 == '\0') {
                bVar2 = (&DAT_0001c492)[iVar6];
                if (1 < bVar2) {
                  if ((&DAT_0001c493)[iVar6] == '\x03') {
                    if (bVar2 == 0x7d) {
                      FUN_00006428(uVar5);
LAB_00005f7c:
                      (&DAT_0001c492)[iVar6] = 0;
                      (&DAT_0001c490)[iVar6] = 0;
                      FUN_000060c8(uVar5);
                    }
                    else if (bVar2 == 0x7e) {
                      if ((&DAT_0001c494)[iVar6] == '\x03') {
                        FUN_00006428(uVar5);
                        goto LAB_00005f7c;
                      }
                    }
                    else if (*(int *)(&DAT_0001c440 + iVar6) == 2) {
                      *(int *)(&DAT_0001c440 + iVar6) = 0;
                      FUN_00006428(uVar5);
                      FUN_00010ebc(uVar5,(&DAT_0001c5d8)[iVar4 * 0x9d],
                                   *(undefined4 *)(iVar6 + 0x1c590),1);
                      goto LAB_00005f7c;
                    }
                    goto LAB_00005fe0;
                  }
                  if ((&DAT_0001c495)[iVar6] != '\x02') {
                    cVar1 = *(char *)(iVar6 + 0x1c5dc);
                    goto joined_r0x00005fa8;
                  }
                }
                FUN_000061d4(uVar5);
                FUN_0000602c(uVar5);
              }
            }
          }
LAB_00005fe0:
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar3);
      }
    }
    if (DAT_000183f8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_00014a30(&DAT_000183fc,DAT_000183f8,0x40);
    }
  } while( true );
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000602c(undefined8 param_1)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = (int)param_1 * 0x274;
  if ((&DAT_0001c492)[iVar3] != '\x01') {
    sVar1 = FUN_000148a4((&DAT_0001c494)[iVar3]);
    uVar2 = FUN_00014884((&DAT_0001c494)[iVar3]);
    lVar4 = FUN_000177a8(uVar2 | sVar1 << 1 | 0x500);
    if (lVar4 == 0) {
      FUN_0000f9ac(param_1,0);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000060c8(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = param_1 * 0x274;
  iVar2 = *(int *)(iVar6 + 0x1c6a4);
  if (iVar2 != 0) {
    FUN_00014558(iVar2 + -1,*(undefined4 *)(iVar6 + 0x1c6a8),*(undefined4 *)(iVar6 + 0x1c6ac));
    *(int *)(iVar6 + 0x1c6a4) = 0;
  }
  cVar1 = *(char *)(iVar6 + 0x1c698);
  if (cVar1 != '\0') {
    iVar2 = *(int *)(iVar6 + 0x1c6a0);
    *(undefined1 *)(iVar6 + 0x1c698) = 0;
    if ((iVar2 != 0) &&
       (((iVar3 = DAT_0001803c, iVar4 = iVar2, iVar5 = DAT_000184fc, cVar1 == '~' ||
         (iVar4 = DAT_000184b4, iVar5 = iVar2, cVar1 == '}')) ||
        (iVar3 = iVar2, iVar5 = DAT_000184fc, cVar1 == '\x7f')))) {
      DAT_000184fc = iVar5;
      DAT_000184b4 = iVar4;
      DAT_0001803c = iVar3;
      FUN_000032cc(param_1 << 8,0,0,*(undefined4 *)(iVar6 + 0x1c69c));
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000061d4(undefined8 param_1)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = (int)param_1;
  iVar4 = iVar5 * 0x274;
  if ((&DAT_0001c492)[iVar4] == '\x01') {
    uVar1 = DAT_00018408;
    if (DAT_0001840c == 0) {
      uVar1 = FUN_000177f8(0,0);
      DAT_00018408 = uVar1 & 0xffffff;
      uVar1 = (int)uVar1 >> 0x18;
    }
    if (DAT_00018414 == '\x01') {
      if (uVar1 != (byte)(&DAT_0001c493)[iVar5 * 0x274]) {
        FUN_00006500(param_1,0);
        FUN_00006d70(param_1);
      }
    }
    else if (DAT_00018414 == '\x02') {
      if (uVar1 != DAT_00018418) {
        FUN_00010d44(param_1);
        DAT_0001806c = 0xffffffff;
        DAT_00018070 = 0;
        DAT_00018414 = DAT_00018414 + '\x01';
      }
    }
    else if ((DAT_00018414 == '\x03') && (uVar1 == DAT_00018418)) {
      FUN_0000f9ac(param_1,0);
      DAT_00018070 = 0;
    }
  }
  else {
    if (((&DAT_0001c56f)[iVar4] == '\x01') && (iVar3 = 0, 0 < DAT_00018034)) {
      pcVar2 = &DAT_0001c570;
      do {
        if (((&DAT_0001c574)[iVar5 * 0x9d] == *(int *)(pcVar2 + 4)) &&
           ((&DAT_0001c570)[iVar4] != *pcVar2)) {
          halt_baddata();
        }
        iVar3 = iVar3 + 1;
        pcVar2 = pcVar2 + 0x274;
      } while (iVar3 < DAT_00018034);
    }
    if (((&DAT_0001c493)[iVar5 * 0x274] != '\x03') && (*(int *)(&DAT_0001c440 + iVar5 * 0x274) == 1)
       ) {
      FUN_00006500(param_1,0);
      FUN_00006d70(param_1);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00006428(int param_1)

{
  char cVar1;
  
  cVar1 = (&DAT_0001c492)[param_1 * 0x274];
  if (cVar1 == '~') {
    if (DAT_00018041 == '\0') {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
  }
  else if (cVar1 == '}') {
    if (DAT_00018042 == '\0') {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
  }
  else if ((cVar1 == '\x7f') && (DAT_00018040 == '\0')) {
    DAT_0001803c = DAT_0001803c + (*(int *)(param_1 * 0x274 + 0x1c5d0) + 0xfU & 0xfffffff0);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00006500(int param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  int iVar8;
  int iVar9;
  
  if (param_2 == 0) {
    DAT_000184f0 = (byte)param_1;
    iVar8 = param_1 * 0x274;
    DAT_0001846c = (&DAT_0001c494)[iVar8];
    DAT_0001852c = (&DAT_0001c470)[param_1 * 0x9d];
    DAT_000184ec = (&DAT_0001c448)[param_1 * 0x9d];
    DAT_000184c8 = (&DAT_0001c493)[iVar8];
    DAT_000184a4 = (&DAT_0001c491)[iVar8];
    DAT_000184ac = *(undefined4 *)(iVar8 + 0x1c46c);
    DAT_000184d8 = *(undefined2 *)(iVar8 + 0x1c56c);
    DAT_0001847c = (&DAT_0001c49c)[param_1 * 0x9d];
    DAT_00018470 = *(undefined4 *)(iVar8 + 0x1c464);
    DAT_000184c4 = *(undefined4 *)(iVar8 + 0x1c4a0);
    DAT_000184e0 = (&DAT_0001c460)[param_1 * 0x9d];
    DAT_00018480 = *(undefined4 *)(iVar8 + 0x1c45c);
    bVar1 = (&DAT_0001c570)[iVar8];
    bVar2 = (&DAT_0001c495)[iVar8];
    DAT_00018478 = *(undefined4 *)(&DAT_0001c440 + iVar8);
    (&DAT_0001c4d4)[param_1 * 0x9d] = 1;
    _DAT_00018484 = (uint)bVar1;
    _DAT_000184d0 = (uint)bVar2;
  }
  else if (param_2 == 1) {
    iVar8 = ((uint)DAT_000184f0 * 0x28 - (uint)DAT_000184f0) * 4 + (uint)DAT_000184f0;
    iVar9 = iVar8 * 4;
    (&DAT_0001c494)[iVar9] = DAT_0001846c;
    uVar3 = DAT_000184ec;
    (&DAT_0001c470)[iVar8] = DAT_0001852c;
    uVar6 = DAT_000184c8;
    uVar5 = DAT_000184a4;
    (&DAT_0001c448)[iVar8] = uVar3;
    (&DAT_0001c493)[iVar9] = uVar6;
    (&DAT_0001c491)[iVar9] = uVar5;
    uVar7 = DAT_000184d8;
    *(undefined4 *)(iVar9 + 0x1c46c) = DAT_000184ac;
    uVar3 = DAT_0001847c;
    *(undefined2 *)(iVar9 + 0x1c56c) = uVar7;
    (&DAT_0001c49c)[iVar8] = uVar3;
    *(undefined4 *)(iVar9 + 0x1c464) = DAT_00018470;
    *(undefined4 *)(iVar9 + 0x1c4a0) = DAT_000184c4;
    uVar4 = DAT_00018480;
    (&DAT_0001c460)[iVar8] = DAT_000184e0;
    uVar3 = DAT_00018478;
    uVar5 = DAT_00018484;
    uVar6 = DAT_000184d0;
    *(undefined4 *)(iVar9 + 0x1c45c) = uVar4;
    (&DAT_0001c570)[iVar9] = uVar5;
    (&DAT_0001c495)[iVar9] = uVar6;
    *(undefined4 *)(&DAT_0001c440 + iVar9) = uVar3;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00006748(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  int iVar4;
  
  if (DAT_0001806c == -1) {
    iVar4 = (int)param_1;
    iVar1 = iVar4 * 0x274;
    piVar3 = &DAT_0001c4b0 + iVar4 * 0x9d;
    (&DAT_0001c491)[iVar1] = 5;
    lVar2 = FUN_000036c4(param_1,*piVar3,(&DAT_0001c4b4)[iVar4 * 0x9d],(&DAT_0001c4bc)[iVar4 * 0x9d]
                        );
    if (lVar2 == -1) {
      if ((&DAT_0001c492)[iVar1] == '\0') {
        (&DAT_000180a0)[*piVar3] = 0;
      }
    }
    else {
      if ((&DAT_0001c492)[iVar1] == '\0') {
        (&DAT_000180a0)[*piVar3] = 2;
      }
      FUN_00006d70(param_1);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00006848(void)

{
  int iVar1;
  
  if (DAT_00018424 == '\x01') {
    FUN_000145e4();
  }
  if ((DAT_0001806c != -1) && (DAT_00018424 == '\x01')) {
    iVar1 = DAT_0001806c * 0x274;
    if (((&DAT_0001c492)[iVar1] == '~') && (*(char *)(iVar1 + 0x1c5dc) != '\x01')) {
      DAT_00018444 = 0;
      if ((&DAT_0001c491)[iVar1] == '\x05') {
        (&DAT_0001c491)[iVar1] = 2;
      }
      DAT_00018078 = 0xffff;
      DAT_0001806c = -1;
      DAT_00018070 = 0;
    }
    else if (*(char *)(iVar1 + 0x1c5ab) == '\0') {
      DAT_00018078 = DAT_0001806c;
    }
  }
  if (((DAT_00018078 != 0xffff) && (DAT_0001806c == DAT_00018078)) &&
     (((&DAT_0001c491)[DAT_0001806c * 0x274] == '\x02' ||
      ((&DAT_0001c490)[DAT_0001806c * 0x274] == '\0')))) {
    DAT_0001806c = -1;
    DAT_00018078 = 0xffff;
    DAT_00018070 = 0;
  }
  if ((((DAT_0001806c != -1) && (iVar1 = DAT_0001806c * 0x274, (&DAT_0001c492)[iVar1] == '~')) &&
      (DAT_00018078 != DAT_0001806c)) && (DAT_00018444 = DAT_00018444 + 1, 7 < DAT_00018444)) {
    DAT_00018444 = 0;
    if ((&DAT_0001c491)[iVar1] == '\x05') {
      (&DAT_0001c491)[iVar1] = 2;
    }
    DAT_0001806c = 0xffffffff;
    DAT_00018070 = 0;
    DAT_00018078 = 0xffff;
    halt_baddata();
  }
  if (DAT_00018078 != 0xffff) {
    if (((DAT_0001806c == DAT_00018078) && (*(char *)(DAT_0001806c * 0x274 + 0x1c5ab) != '\0')) &&
       (DAT_00018038 != DAT_000183e0)) {
      DAT_00018078 = 0xffff;
      halt_baddata();
    }
    if ((DAT_00018078 != 0xffff) && (DAT_0001806c == DAT_00018078)) {
      if (DAT_00018024 == DAT_00018020) {
        DAT_00018444 = 0;
        if (*(char *)(DAT_0001806c * 0x274 + 0x1c5ab) == '\0') {
          FUN_000145e4();
        }
        iVar1 = DAT_00018078;
        if (DAT_00018028 == 1) {
          DAT_0001806c = -1;
          DAT_00018078 = 0xffff;
        }
        else {
          DAT_00018078 = 0xffff;
          DAT_0001806c = -1;
          if (*(char *)(iVar1 * 0x274 + 0x1c5ab) == '\x01') {
            FUN_000085ec(iVar1,DAT_000183dc,0);
          }
          else {
            DAT_00017f90 = 4;
            FUN_0000cf58(iVar1,0);
            DAT_00017f90 = 5;
          }
          DAT_00018020 = DAT_00018020 + 1;
        }
      }
      if (DAT_00018070 != 2) {
        halt_baddata();
      }
      DAT_00018070 = 0;
      halt_baddata();
    }
  }
  if (DAT_00018070 == 2) {
    DAT_00018070 = 0;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00006c44(void)

{
  short sVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  
  iVar5 = 0;
  if (0 < DAT_00018034) {
    puVar6 = &DAT_0001c440;
    iVar7 = 0;
    do {
      if ((puVar6[0x50] == '\x01') && (puVar6[0x52] == '\0')) {
        sVar1 = FUN_000148a4(puVar6[0x54]);
        uVar2 = FUN_00014884(puVar6[0x54]);
        uVar2 = uVar2 | sVar1 << 1;
        uVar3 = FUN_000177c8(uVar2 | 0x2240);
        *(undefined4 *)((int)&DAT_0001c4a4 + iVar7) = uVar3;
        uVar3 = FUN_000177a8(uVar2 | 0x500);
        *(undefined4 *)(puVar6 + 0x68) = uVar3;
      }
      puVar6 = puVar6 + 0x274;
      iVar5 = iVar5 + 1;
      iVar7 = iVar7 + 0x274;
    } while (iVar5 < DAT_00018034);
  }
  iVar5 = 0;
  puVar4 = &DAT_00018310;
  do {
    uVar3 = FUN_000177c8(iVar5 << 1 & 0xfffeU | 0x2240);
    *puVar4 = uVar3;
    uVar3 = FUN_000177c8(iVar5 << 1 & 0xffffU | 0x2241);
    puVar4[0x18] = uVar3;
    iVar5 = iVar5 + 1;
    puVar4 = puVar4 + 1;
  } while (iVar5 < 0x18);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00006d70(undefined8 param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  
  uVar2 = DAT_00018058;
  iVar7 = (int)param_1;
  iVar5 = iVar7 * 0x274;
  if ((&DAT_0001c56f)[iVar5] == '\x02') {
    if ((((&DAT_0001c570)[iVar5] == (&DAT_0001c570)[(&DAT_0001c574)[iVar7 * 0x9d] * 0x274]) &&
        (cVar1 = (&DAT_0001c491)[iVar5], cVar1 != '\x01')) && (cVar1 != '\x06')) {
      if (cVar1 != '\x05') {
        halt_baddata();
      }
      (&DAT_0001c491)[iVar5] = 2;
      halt_baddata();
    }
LAB_00006ed0:
    FUN_0000cf58(param_1,1);
  }
  else {
    if ((&DAT_0001c56f)[iVar5] == '\x01') {
      iVar4 = 0;
      if (0 < DAT_00018034) {
        pcVar6 = &DAT_0001c570;
        do {
          if (((&DAT_0001c574)[iVar7 * 0x9d] == *(int *)(pcVar6 + 4)) &&
             ((&DAT_0001c570)[iVar5] != *pcVar6)) {
            halt_baddata();
          }
          iVar4 = iVar4 + 1;
          pcVar6 = pcVar6 + 0x274;
        } while (iVar4 < DAT_00018034);
      }
      if ((&DAT_0001c491)[iVar7 * 0x274] == '\x06') goto LAB_00006ed0;
      if (((&DAT_0001c56f)[iVar7 * 0x274] == '\x01') && (iVar5 = DAT_00018034, 0 < DAT_00018034)) {
        do {
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
    iVar5 = iVar7 * 0x274;
    *(undefined4 *)(&DAT_0001c440 + iVar5) = 0;
    DAT_0001806c = iVar7;
    FUN_00017720(uVar2);
    if (*(char *)(iVar5 + 0x1c5ab) == '\x01') {
      DAT_000183d5 = 0;
      lVar3 = FUN_0000cf58(param_1,0);
      if (lVar3 == -1) {
        DAT_0001806c = -1;
      }
      if ((&DAT_0001c493)[iVar5] == '\x03') {
        DAT_0001806c = -1;
      }
      if (*(char *)(iVar5 + 0x1c444) == '\x01') {
        DAT_0001806c = -1;
      }
      DAT_000183d5 = 1;
    }
    else {
      DAT_000184d4 = 0x7c;
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00006fd4(int param_1)

{
  int iVar1;
  
  if (((&DAT_0001c56f)[param_1 * 0x274] == '\x01') && ((&DAT_0001c491)[param_1 * 0x274] != '\x05'))
  {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  iVar1 = param_1 * 0x274;
  if (((&DAT_0001c56f)[iVar1] == '\x02') && ((&DAT_0001c491)[iVar1] != '\x05')) {
    (&DAT_0001c570)[iVar1] = (&DAT_0001c570)[(&DAT_0001c574)[param_1 * 0x9d] * 0x274];
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000070b0(ulonglong param_1,int param_2,int param_3,longlong param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  
  iVar2 = 0;
  iVar10 = (int)param_1;
  iVar9 = iVar10 * 0x274;
  DAT_000184cc = iVar10;
  if ((&DAT_0001c493)[iVar9] != '\x03') {
    bVar1 = (&DAT_0001c492)[iVar9];
    if (bVar1 < 2) {
      if ((param_4 == 1) || (param_4 == 3)) {
        iVar7 = *(int *)(iVar9 + 0x1c57c);
        iVar6 = (&DAT_0001c448)[iVar10 * 0x9d];
        puVar8 = (undefined4 *)((&DAT_0001c460)[iVar10 * 0x9d] + *(int *)(iVar9 + 0x1c578));
      }
      else if (param_4 == 2) {
        iVar7 = *(int *)(iVar9 + 0x1c57c);
        puVar8 = (undefined4 *)((&DAT_0001c460)[iVar10 * 0x9d] + *(int *)(iVar9 + 0x1c578));
        iVar6 = (&DAT_0001c448)[iVar10 * 0x9d] + iVar7 * param_2;
      }
      else {
        if (param_4 != 0) {
          halt_baddata();
        }
        puVar8 = (undefined4 *)(&DAT_0001c460)[iVar10 * 0x9d];
        iVar7 = *(int *)(iVar9 + 0x1c590);
        iVar2 = FUN_00007648(param_1,puVar8);
        iVar6 = (&DAT_0001c448)[iVar10 * 0x9d] + param_2 * *(int *)(iVar9 + 0x1c4c8);
      }
      iVar9 = (int)puVar8 + iVar2;
      if (param_4 != 1) {
        iVar4 = iVar10 * 0x274;
        if ((&DAT_0001c492)[iVar4] == '\0') {
          if ((&DAT_0001c5ac)[iVar4] == '\x02') {
            iVar7 = (&DAT_0001c5b0)[iVar10 * 0x9d];
          }
          else if (iVar7 == 0x10) {
            iVar7 = 0x20;
            *puVar8 = 0;
            puVar8[1] = 0;
            puVar8[2] = 0;
            puVar8[3] = 0;
          }
        }
        else if ((&DAT_0001c492)[iVar4] == '\x01') {
          uVar3 = (uint)(*(int *)(iVar4 + 0x1c594) - iVar7) >> 2;
          uVar5 = 0;
          if (uVar3 != 0) {
            do {
              *puVar8 = 0;
              uVar5 = uVar5 + 1;
              puVar8 = puVar8 + 1;
            } while (uVar5 < uVar3);
          }
        }
      }
      FUN_00014f44(param_1,iVar9,iVar6,iVar7 - iVar2);
    }
    else if (bVar1 == 0x7f) {
      iVar2 = FUN_00007648(param_1,(&DAT_0001c460)[iVar10 * 0x9d]);
      FUN_00014f44(param_1,(&DAT_0001c460)[iVar10 * 0x9d] + iVar2,(&DAT_0001c448)[iVar10 * 0x9d],
                   DAT_000184a8 - iVar2);
      (&DAT_0001c5d8)[iVar10 * 0x9d] = (&DAT_0001c5d8)[iVar10 * 0x9d] + (DAT_000184a8 - iVar2);
    }
    else if (bVar1 == 0x7e) {
      if (*(char *)(iVar9 + 0x1c5ab) == '\0') {
        if (DAT_00018426 == '\x01') {
          FUN_00010ebc(param_1 | 0x8000,(&DAT_0001c5d8)[iVar10 * 0x9d],
                       *(undefined4 *)(iVar9 + 0x1c590),1);
        }
                    // WARNING: Subroutine does not return
        FUN_00014a30((&DAT_0001c460)[iVar10 * 0x9d],(&DAT_0001c448)[iVar10 * 0x9d],
                     *(undefined4 *)(iVar9 + 0x1c590));
      }
      (&DAT_0001c4a4)[iVar10 * 0x9d] = param_3;
      if ((DAT_00018424 == '\x01') && (DAT_00018425 != '\0')) {
        (&DAT_0001c494)[iVar10 * 0x274] = 3;
      }
      else {
        (&DAT_0001c494)[iVar10 * 0x274] = 2;
      }
    }
    else if (bVar1 == 0x7d) {
      (&DAT_0001c5d8)[iVar10 * 0x9d] = (&DAT_0001c5d8)[iVar10 * 0x9d] + param_3;
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000074d0(undefined8 param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar4 = (int)param_1;
  iVar3 = iVar4 * 0x274;
  if ((&DAT_0001c495)[iVar3] != '\x02') {
    if ((&DAT_0001c56f)[iVar3] == '\0') {
      if ((&DAT_0001c492)[iVar3] == '\0') {
        iVar5 = (&DAT_0001c460)[iVar4 * 0x9d];
        iVar1 = FUN_00007648(param_1,iVar5,&DAT_0001c440 + iVar3,0);
        iVar5 = iVar5 + iVar1;
        uVar2 = *(uint *)(iVar3 + 0x1c590);
        if (param_2 < uVar2) {
          uVar2 = param_2 - iVar1;
        }
        else {
          (&DAT_0001c493)[iVar3] = 2;
          uVar2 = uVar2 - iVar1;
        }
      }
      else {
        uVar2 = 0;
        if ((&DAT_0001c492)[iVar3] == '\x01') {
          iVar5 = (&DAT_0001c460)[iVar4 * 0x9d];
          uVar2 = param_2;
        }
      }
    }
    else {
      iVar5 = (&DAT_0001c460)[iVar4 * 0x9d] + *(int *)(iVar3 + 0x1c578);
      uVar2 = *(uint *)(iVar3 + 0x1c57c);
    }
    FUN_00014f44(param_1,iVar5,(&DAT_0001c448)[iVar4 * 0x9d],uVar2);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00007648(int param_1,int *param_2)

{
  short sVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  
  if ((*param_2 != 0x70474156) && (*param_2 != 0x7056534d)) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  iVar4 = param_1 * 0x274;
  if (((*(char *)(iVar4 + 0x1c5d4) == '\x01') && (*(char *)(iVar4 + 0x1c5a9) == '\0')) &&
     ((&DAT_0001c492)[iVar4] == '\0')) {
    uVar2 = (undefined2)
            (SUB164(ZEXT416(((uint)param_2[4] >> 8 & 0xff00 | (uint)param_2[4] >> 0x18) << 0xc) *
                    ZEXT416(0x57619f1),8) >> 10);
    if ((&DAT_0001b520)[(byte)(&DAT_0001c494)[iVar4]] == '\0') {
      (&DAT_0001c49a)[param_1 * 0x13a] = uVar2;
    }
    sVar1 = (&DAT_0001c5ce)[param_1 * 0x13a];
    (&DAT_00018250)[(byte)(&DAT_0001c494)[iVar4]] = uVar2;
    if ((sVar1 != 0) && ((&DAT_0001c5ce)[param_1 * 0x13a] != 0)) {
      uVar3 = (uint)(ushort)(&DAT_0001c5ce)[param_1 * 0x13a];
      do {
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
      (&DAT_00018250)[(ushort)(&DAT_0001c5bc)[param_1 * 0x13b]] = uVar2;
    }
  }
  iVar4 = param_1 * 0x274;
  if ((&DAT_0001c492)[iVar4] == '\x7f') {
    *(int *)(iVar4 + 0x1c45c) = *(int *)(iVar4 + 0x1c45c) + -0x30;
  }
  *(int *)(iVar4 + 0x1c598) = *(int *)(iVar4 + 0x1c598) + -0x30;
  (&DAT_0001c468)[param_1 * 0x9d] = (&DAT_0001c468)[param_1 * 0x9d] + 0x30;
  *(int *)(iVar4 + 0x1c500) = *(int *)(iVar4 + 0x1c500) + 0x30;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00007814(int param_1)

{
  if ((&DAT_0001c5ac)[param_1 * 0x274] != '\0') {
    if ((&DAT_0001c460)[param_1 * 0x9d] == (&DAT_0001c5b4)[param_1 * 0x9d]) {
      (&DAT_0001c5ac)[param_1 * 0x274] = 0;
    }
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000787c(longlong param_1,int param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (int)param_1;
  iVar2 = iVar3 * 0x274;
  if ((&DAT_0001c56f)[iVar2] == '\0') {
    iVar4 = (&DAT_0001c460)[iVar3 * 0x9d];
    iVar2 = (&DAT_0001c448)[iVar3 * 0x9d] + (int)param_3 * *(int *)(iVar2 + 0x1c4c8);
  }
  else {
    param_2 = *(int *)(iVar2 + 0x1c57c);
    iVar4 = (&DAT_0001c460)[iVar3 * 0x9d] + *(int *)(iVar2 + 0x1c578);
    iVar2 = (&DAT_0001c448)[iVar3 * 0x9d] + (int)param_3 * param_2;
  }
  if (((&DAT_0001c492)[iVar3 * 0x274] == '\0') &&
     (((param_3 == 0 || (param_3 == 1)) && (iVar1 = FUN_00007814(param_1), iVar1 != 0)))) {
    param_2 = iVar1;
  }
  if (param_1 != -1) {
    if ((&DAT_0001c492)[iVar3 * 0x274] != '\x01') {
                    // WARNING: Subroutine does not return
      FUN_0001138c(param_1,iVar4,param_2,0);
    }
    DAT_00018408 = iVar2;
    if (((DAT_00018416 == '\0') || (DAT_00018416 == '\x02')) && (iVar2 != DAT_00018400)) {
      DAT_00018408 = DAT_00018400 + (DAT_00018404 >> 1);
    }
    FUN_00010990(iVar4,DAT_00018408,*(undefined4 *)(iVar3 * 0x274 + 0x1c594));
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00007aa4(ulonglong param_1,int param_2,longlong param_3,code *param_4)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  
  iVar12 = (int)param_1;
  iVar11 = iVar12 * 4;
  iVar9 = iVar12 * 0x274;
  FUN_00006fd4();
  if ((&DAT_0001c495)[iVar9] == '\x02') {
    if ((&DAT_0001c56f)[iVar9] == '\0') {
      if ((param_3 == 2) || (param_3 == 4)) {
        param_3 = 0;
      }
      FUN_000070b0(param_1,param_3,param_2,0);
      iVar11 = iVar12 << 2;
    }
    else if ((param_3 == 2) || (param_3 == 4)) {
      uVar2 = (&DAT_0001c574)[iVar12 * 0x9d];
      if (((&DAT_0001c56f)[iVar9] == '\x01') && (iVar5 = 0, 0 < DAT_00018034)) {
        puVar6 = &DAT_0001c4bc;
        do {
          if (uVar2 == puVar6[0x2e]) {
            *(undefined1 *)((int)puVar6 + -0x27) = (&DAT_0001c495)[iVar9];
            *puVar6 = (uint)(byte)(&DAT_0001c495)[iVar9];
          }
          iVar5 = iVar5 + 1;
          puVar6 = puVar6 + 0x9d;
        } while (iVar5 < DAT_00018034);
      }
      if (*(uint *)(uVar2 * 0x274 + 0x1c590) < (uint)(&DAT_0001c4c4)[uVar2 * 0x9d]) {
        if (param_3 == 2) {
          FUN_000070b0(param_1,0,param_2,3);
        }
      }
      else if (param_3 == 2) {
        puVar10 = (undefined4 *)(iVar12 * 0x274 + 0x1c57c);
        FUN_000070b0(param_1,0,*puVar10,1);
        (&DAT_0001c460)[iVar12 * 0x9d] =
             (&DAT_0001c460)[iVar12 * 0x9d] + *(int *)(uVar2 * 0x274 + 0x1c4c8);
        FUN_000070b0(param_1,1,*puVar10,2);
      }
    }
    else {
      FUN_000070b0(param_1,param_3,param_2,2);
      if (((&DAT_0001c56f)[iVar9] == '\x01') && (iVar5 = 0, 0 < DAT_00018034)) {
        puVar6 = &DAT_0001c4bc;
        do {
          if ((&DAT_0001c574)[iVar12 * 0x9d] == puVar6[0x2e]) {
            *(undefined1 *)((int)puVar6 + -0x27) = (&DAT_0001c495)[iVar9];
            *puVar6 = (uint)(byte)(&DAT_0001c495)[iVar9];
          }
          iVar5 = iVar5 + 1;
          puVar6 = puVar6 + 0x9d;
        } while (iVar5 < DAT_00018034);
      }
    }
    (&DAT_0001c493)[iVar11 * 0x80 + iVar12 * 0x74] = 3;
    DAT_00018070 = 0;
    (*param_4)(1);
  }
  else {
    bVar1 = (&DAT_0001c492)[iVar9];
    if (bVar1 < 2) {
      if (param_3 == 2) {
        FUN_000074d0(param_1,param_2);
      }
      else if (param_3 == 4) {
        iVar11 = *(int *)(iVar9 + 0x1c57c);
        iVar4 = (&DAT_0001c460)[iVar12 * 0x9d] + *(int *)(iVar9 + 0x1c578) + param_2 / 2;
        iVar5 = FUN_00007814();
        if (iVar5 != 0) {
          iVar11 = iVar5;
        }
        iVar5 = (&DAT_0001c448)[iVar12 * 0x9d] + iVar11;
        if (param_1 != 0xffffffffffffffff) {
          if ((&DAT_0001c492)[iVar9] != '\x01') {
                    // WARNING: Subroutine does not return
            FUN_0001138c(param_1,iVar4,iVar11,0);
          }
          DAT_00018408 = iVar5;
          if (((DAT_00018416 == '\0') || (DAT_00018416 == '\x02')) && (iVar5 != DAT_00018400)) {
            DAT_00018408 = DAT_00018400 + (DAT_00018404 >> 1);
          }
          FUN_00010990(iVar4,DAT_00018408,*(undefined4 *)(iVar12 * 0x274 + 0x1c594));
        }
      }
      else {
        FUN_0000787c(param_1,param_2,param_3);
      }
    }
    else if (bVar1 == 0x7f) {
      iVar5 = FUN_00007648(param_1,(&DAT_0001c460)[iVar12 * 0x9d]);
      param_2 = param_2 - iVar5;
      iVar11 = (&DAT_0001c448)[iVar12 * 0x9d];
      iVar5 = (&DAT_0001c460)[iVar12 * 0x9d] + iVar5;
      if (param_1 != 0xffffffffffffffff) {
        if ((&DAT_0001c492)[iVar9] != '\x01') {
                    // WARNING: Subroutine does not return
          FUN_0001138c(param_1,iVar5,param_2,3);
        }
        DAT_00018408 = iVar11;
        if (((DAT_00018416 == '\0') || (DAT_00018416 == '\x02')) && (iVar11 != DAT_00018400)) {
          DAT_00018408 = DAT_00018400 + (DAT_00018404 >> 1);
        }
        FUN_00010990(iVar5,DAT_00018408,*(undefined4 *)(iVar12 * 0x274 + 0x1c594));
      }
      (&DAT_0001c5d8)[iVar12 * 0x9d] = (&DAT_0001c5d8)[iVar12 * 0x9d] + param_2;
      (&DAT_0001c448)[iVar12 * 0x9d] = (&DAT_0001c448)[iVar12 * 0x9d] + param_2;
    }
    else if (bVar1 == 0x7e) {
      if (*(char *)(iVar9 + 0x1c5ab) == '\0') {
        if (DAT_00018426 == '\x01') {
          FUN_00010ebc(param_1 | 0x8000,(&DAT_0001c5d8)[iVar12 * 0x9d],param_2,1);
        }
                    // WARNING: Subroutine does not return
        FUN_00014a30((&DAT_0001c460)[iVar12 * 0x9d],(&DAT_0001c448)[iVar12 * 0x9d],param_2);
      }
      (&DAT_0001c448)[iVar12 * 0x9d] = (&DAT_0001c448)[iVar12 * 0x9d] + param_2;
      (&DAT_0001c4a4)[iVar12 * 0x9d] = param_2;
      (&DAT_0001c494)[iVar12 * 0x274] = (&DAT_0001c494)[iVar12 * 0x274] + 1 & 1;
    }
    else if (bVar1 == 0x7d) {
      (&DAT_0001c5d8)[iVar12 * 0x9d] = (&DAT_0001c5d8)[iVar12 * 0x9d] + param_2;
    }
    iVar9 = iVar12 * 0x274;
    cVar3 = (&DAT_0001c56f)[iVar9];
    if (cVar3 == '\x02') {
      (&DAT_0001c495)[iVar9] = (&DAT_0001c495)[(&DAT_0001c574)[iVar12 * 0x9d] * 0x274];
      cVar3 = (&DAT_0001c56f)[iVar9];
    }
    if ((cVar3 == '\0') || (param_3 != 2)) {
      piVar7 = &DAT_0001c460 + iVar12 * 0x9d;
      piVar8 = (int *)(iVar12 * 0x274 + 0x1c45c);
      *piVar7 = *piVar7 + param_2;
      iVar9 = *piVar8;
      *piVar8 = iVar9 - param_2;
      if (((&DAT_0001c492)[iVar12 * 0x274] != '}') && (iVar9 - param_2 == 0)) {
        *piVar8 = (&DAT_0001c4c4)[iVar12 * 0x9d];
        *piVar7 = (&DAT_0001c44c)[iVar12 * 0x9d];
      }
      if (((param_3 == 2) || (param_3 == 4)) || ((&DAT_0001c56f)[iVar12 * 0x274] == '\x02')) {
        (*param_4)(1);
      }
      else if (DAT_00018028 != 1) {
        (*param_4)(1);
      }
    }
    else {
      (*param_4)(1);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00008334(void)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = DAT_00018498;
  iVar2 = DAT_000184cc * 0x274;
  if ((byte)(&DAT_0001c492)[iVar2] < 2) {
    if ((&DAT_0001c495)[iVar2] == '\x01') {
      (&DAT_0001c495)[iVar2] = 2;
      (*pcVar1)(1);
    }
  }
  else {
    (&DAT_0001c495)[iVar2] = 2;
    (*pcVar1)(1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000083d4(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  
  uVar2 = DAT_00017f98;
  iVar7 = 1;
  iVar3 = param_1 * 0x274;
  DAT_000183d8 = (&DAT_0001c460)[param_1 * 0x9d];
  DAT_00018518 = (uint)*(byte *)(iVar3 + 0x1c56e);
  DAT_00018520 = (uint)*(ushort *)(iVar3 + 0x1c56c);
  DAT_00018514 = *(undefined4 *)(iVar3 + 0x1c46c);
  DAT_0001afc0 = *(undefined4 *)(iVar3 + 0x1c500);
  DAT_00018468 = (&DAT_0001c470)[param_1 * 0x9d];
  DAT_0001bda0 = *(undefined4 *)(iVar3 + 0x1c548);
  DAT_0001bd70 = *(undefined4 *)(iVar3 + 0x1c4dc);
  DAT_0001b4f0 = *(undefined4 *)(iVar3 + 0x1c4a0);
  if (1 < *(byte *)(iVar3 + 0x1c56e) + 1) {
    do {
      piVar6 = DAT_000184bc;
      uVar5 = 0;
      iVar4 = iVar7 * 4 + param_1 * 0x274;
      (&DAT_0001afc0)[iVar7] = *(undefined4 *)(iVar4 + 0x1c500);
      iVar3 = *(int *)(iVar4 + 0x1c4dc);
      (&DAT_0001bd70)[iVar7] = iVar3;
      (&DAT_0001bda0)[iVar7] = *(undefined4 *)(iVar4 + 0x1c548);
      iVar4 = iVar7 + 1;
      if (uVar2 != 0) {
        do {
          if (*piVar6 == iVar3) goto LAB_0000856c;
          uVar5 = uVar5 + 1;
          piVar6 = piVar6 + 10;
        } while (uVar5 < DAT_00017f98);
      }
      uVar5 = 0xffffffff;
LAB_0000856c:
      bVar1 = *(byte *)(param_1 * 0x274 + 0x1c56e);
      (&DAT_0001b4f0)[iVar7] = DAT_000184bc[uVar5 * 10 + 5];
      iVar7 = iVar4;
    } while (iVar4 < (int)(bVar1 + 1));
  }
  DAT_000183e0 = DAT_000183e0 + 1 & 0x3f;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000085ec(undefined8 param_1,int param_2,code *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = (int)param_1;
  if (*(char *)(iVar8 * 0x274 + 0x1c444) == '\x01') {
    DAT_000184cc = iVar8;
    (*param_3)(1);
  }
  else {
    if (DAT_000183d5 == '\0') {
      FUN_000083d4(param_1);
      if ((&DAT_0001c492)[iVar8 * 0x274] == '~') {
        DAT_000184d4 = 0x7e;
      }
      else {
        DAT_000184d4 = 0x7d;
      }
    }
    iVar5 = iVar8 * 0x274;
    if ((&DAT_0001c495)[iVar5] == '\x02') {
      (&DAT_0001c493)[iVar5] = 3;
      DAT_00018070 = 0;
      if (1 < (byte)(&DAT_0001c492)[iVar5]) {
        DAT_000184cc = iVar8;
        (*param_3)(1);
      }
    }
    else {
      iVar7 = *(int *)(iVar5 + 0x1c46c);
      uVar6 = (uint)*(ushort *)(iVar5 + 0x1c56c);
      uVar1 = (&DAT_0001c460)[iVar8 * 0x9d];
      if ((*(char *)(iVar5 + 0x1c5ab) == '\x01') && (DAT_000183d5 != '\0')) {
        iVar7 = *(int *)(iVar5 + 0x1c590);
      }
      else {
        *(int *)(iVar8 * 0x274 + 0x1c594) = param_2;
        if (uVar6 < *(byte *)(iVar8 * 0x274 + 0x1c56e)) {
          iVar5 = (uint)*(ushort *)(iVar5 + 0x1c56c) * 4;
          do {
            iVar5 = iVar5 + 4;
            uVar6 = uVar6 + 1;
            iVar7 = iVar7 + *(int *)(iVar5 + iVar8 * 0x274 + 0x1c548);
          } while ((int)uVar6 < (int)(uint)*(byte *)(iVar8 * 0x274 + 0x1c56e));
        }
        if (*(char *)(iVar8 * 0x274 + 0x1c6b0) == '\x01') {
          iVar7 = iVar7 + *(int *)(iVar8 * 0x274 + 0x1c47c);
        }
      }
      iVar5 = iVar8 * 0x274;
      *(int *)(iVar5 + 0x1c590) = iVar7;
      if (param_3 != (code *)0x0) {
        DAT_00018498 = param_3;
      }
      if ((param_2 < iVar7) || ((&DAT_0001c495)[iVar5] == '\0')) {
        if (DAT_000183d5 == '\0') {
          DAT_000183dc = param_2;
          halt_baddata();
        }
        uVar2 = *(undefined4 *)(iVar5 + 0x1c4a0);
        uVar3 = *(undefined4 *)(iVar5 + 0x1c464);
        uVar4 = (&DAT_0001c470)[iVar8 * 0x9d];
      }
      else {
        if (((&DAT_0001c495)[iVar5] != '\x01') && ((byte)(&DAT_0001c492)[iVar5] < 2)) {
          halt_baddata();
        }
        if (DAT_000183d5 == '\0') {
          DAT_000183dc = iVar7;
          halt_baddata();
        }
        uVar2 = *(undefined4 *)(iVar5 + 0x1c4a0);
        uVar3 = *(undefined4 *)(iVar5 + 0x1c464);
        uVar4 = (&DAT_0001c470)[iVar8 * 0x9d];
      }
      FUN_00003e24(uVar2,uVar4,uVar1,uVar3);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00008958(int param_1,int param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_000184bc + param_2 * 0x28;
  if (*(int *)(iVar2 + 4) != 0) {
    if (param_3 == 0) {
      iVar1 = param_1 * 0x274;
      *(undefined4 *)(iVar1 + 0x1c59c) = *(undefined4 *)(iVar2 + 0xc);
      *(undefined4 *)(iVar1 + 0x1c5a0) = *(undefined4 *)(iVar2 + 4);
      *(undefined4 *)(iVar1 + 0x1c5a4) = *(undefined4 *)(iVar2 + 0x10);
    }
    else if (param_3 == 1) {
      iVar1 = param_1 * 0x274;
      (&DAT_0001c470)[param_1 * 0x9d] = *(undefined4 *)(iVar2 + 0xc);
      (&DAT_0001c468)[param_1 * 0x9d] = *(undefined4 *)(iVar2 + 0xc);
      *(undefined4 *)(iVar1 + 0x1c598) = *(undefined4 *)(iVar2 + 0x10);
      *(undefined4 *)(iVar1 + 0x1c46c) = *(undefined4 *)(iVar2 + 0x10);
      *(undefined4 *)(iVar1 + 0x1c464) = *(undefined4 *)(iVar2 + 4);
    }
    if ((int)param_3 - 1U < 2) {
      *(undefined4 *)(param_1 * 0x274 + 0x1c4a0) = *(undefined4 *)(iVar2 + 0x14);
      *(undefined4 *)(param_1 * 0x274 + 0x1c4d8) = *(undefined4 *)(iVar2 + 0x18);
    }
    else if (param_3 == 3) {
      param_1 = param_1 * 0x274;
      *(undefined4 *)(param_1 + 0x1c478) = *(undefined4 *)(iVar2 + 0xc);
      *(undefined4 *)(param_1 + 0x1c488) = *(undefined4 *)(iVar2 + 0x10);
      *(undefined4 *)(param_1 + 0x1c480) = *(undefined4 *)(iVar2 + 0xc);
      *(undefined4 *)(param_1 + 0x1c47c) = *(undefined4 *)(iVar2 + 0x10);
      *(undefined4 *)(param_1 + 0x1c474) = *(undefined4 *)(iVar2 + 4);
      *(undefined4 *)(param_1 + 0x1c4a0) = *(undefined4 *)(iVar2 + 0x14);
      *(undefined4 *)(param_1 + 0x1c4d8) = *(undefined4 *)(iVar2 + 0x18);
    }
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00008bcc(int param_1,undefined4 param_2,longlong param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 auStack_28 [10];
  
  iVar2 = param_1 * 0x274;
  if ((&DAT_0001c5a8)[iVar2] == '\0') {
    if (param_3 != 0) {
      FUN_0001752c(auStack_28);
      uVar1 = FUN_000174f8(0,param_3,0);
                    // WARNING: Subroutine does not return
      (&DAT_0001c44c)[param_1 * 0x9d] = uVar1;
      FUN_00017534(auStack_28[0]);
    }
    *(undefined4 *)(iVar2 + 0x1c4cc) = 0;
    (&DAT_0001c4c4)[param_1 * 0x9d] = 0;
    *(undefined4 *)(iVar2 + 0x1c4c8) = 0;
    *(undefined4 *)(iVar2 + 0x1c4d0) = param_2;
    (&DAT_0001c66c)[param_1 * 0x9d] = 0;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00008cc8(undefined8 param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  lVar1 = FUN_000148d4();
  if (lVar1 == 0) {
    iVar3 = (int)param_1;
    iVar2 = iVar3 * 0x274;
    if ((param_2 <= (uint)(&DAT_0001c4c4)[iVar3 * 0x9d]) && ((&DAT_0001c56f)[iVar2] == '\0')) {
      if (((&DAT_0001c490)[iVar2] == '\x01') && ((&DAT_0001c492)[iVar2] == '\0')) {
        FUN_0000f9ac(param_1,0);
      }
      if (param_2 == 0) {
        (&DAT_0001c66c)[iVar3 * 0x9d] = (&DAT_0001c4c4)[iVar3 * 0x9d];
      }
      else {
        (&DAT_0001c66c)[iVar3 * 0x9d] = param_2;
      }
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00008ddc(undefined8 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  
  iVar1 = (int)param_1;
  iVar2 = iVar1 * 0x274;
  if ((((&DAT_0001c5a8)[iVar2] != '\0') && (param_2 <= *(uint *)(iVar2 + 0x1c4cc))) &&
     (puVar3 = &DAT_0001c4c4 + iVar1 * 0x9d, param_2 != *puVar3)) {
    FUN_0000f9ac(param_1,0);
    if (param_2 == 0) {
      param_2 = *(uint *)(iVar2 + 0x1c4cc);
    }
    *puVar3 = param_2;
    *(uint *)(iVar2 + 0x1c4c8) = param_2 >> 1;
    if (param_2 < (uint)(&DAT_0001c66c)[iVar1 * 0x9d]) {
      (&DAT_0001c66c)[iVar1 * 0x9d] = *puVar3;
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_00008ecc(void)

{
  FUN_00017798(0);
                    // WARNING: Subroutine does not return
  FUN_000177d0(10,0x800);
}



// WARNING: Control flow encountered bad instruction data

void FUN_00008f94(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  byte *pbVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  uint *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  uint uVar19;
  uint *puVar20;
  uint *puVar21;
  undefined *puVar22;
  undefined4 *puVar23;
  undefined4 *puVar24;
  int *piVar25;
  
  iVar11 = 0;
  iVar9 = 0;
  if (0 < DAT_00018034) {
    iVar10 = 0;
    puVar22 = &DAT_0001c440;
    puVar24 = &DAT_0001b574;
    puVar20 = &DAT_0001b570;
    puVar23 = &DAT_0001b56c;
    piVar25 = &DAT_0001b568;
    puVar17 = &DAT_0001b564;
    puVar14 = &DAT_0001b560;
    puVar21 = puVar20;
    puVar18 = puVar17;
    do {
      if (puVar22[0x50] == '\x01') {
        if ((puVar22[0x52] != '~') || (uVar19 = 0x800, puVar22[0x54] != '\x03')) {
          uVar19 = (uint)(byte)puVar22[0x54] << 10;
        }
        uVar5 = (uint)(byte)(&DAT_0001c493)[iVar10];
        if ((&DAT_0001c493)[iVar10] == 2) {
          uVar5 = 0;
        }
        uVar19 = uVar19 | iVar9 << 4 | uVar5 << 2;
        if (DAT_000184cc == iVar9) {
          uVar19 = uVar19 | DAT_00018098;
        }
        (&DAT_0001b550)[iVar11 + 1] = uVar19 | *(int *)((int)&DAT_0001c4a8 + iVar10) << 0x10;
        cVar1 = (&DAT_0001c491)[iVar10];
        (&DAT_0001b550)[iVar11 + 2] = *(undefined4 *)((int)&DAT_0001c4a4 + iVar10);
        if (cVar1 == '\x02') {
          uVar7 = *(undefined4 *)((int)&DAT_0001c4b4 + iVar10);
        }
        else {
          uVar7 = *(undefined4 *)((int)&DAT_0001c49c + iVar10);
        }
        (&DAT_0001b550)[iVar11 + 3] = uVar7;
        cVar1 = puVar22[0x51];
        *puVar14 = (uint)(byte)puVar22[0x52];
        if (((cVar1 == '\0') || (cVar1 == '\a')) || ((cVar1 == '\x01' && (1 < (byte)puVar22[0x52])))
           ) {
          *puVar14 = *puVar14 | 0x80000000;
        }
        if ((&DAT_0001c492)[iVar10] == '}') {
          *puVar17 = *(undefined4 *)((int)&DAT_0001c460 + iVar10);
        }
        else {
          *puVar18 = *(undefined4 *)((int)&DAT_0001c448 + iVar10);
        }
        uVar7 = *(undefined4 *)((int)&DAT_0001c5d8 + iVar10);
        cVar1 = puVar22[0x52];
        *piVar25 = *(int *)((int)&DAT_0001c470 + iVar10) - *(int *)((int)&DAT_0001c468 + iVar10);
        *puVar23 = uVar7;
        if ((cVar1 == '~') && (puVar22[0x54] == '\x02')) {
          puVar22[0x54] = 3;
        }
        if ((puVar22[0x51] == '\0') || (puVar22[0x51] == '\a')) {
          *puVar21 = (uint)(ushort)(&DAT_00018250)[(byte)puVar22[0x54]];
        }
        else {
          *puVar20 = (int)*(short *)(puVar22 + 0x5a);
        }
        puVar20 = puVar20 + 9;
        iVar8 = iVar11 + 8;
        puVar21 = puVar21 + 9;
        puVar23 = puVar23 + 9;
        piVar25 = piVar25 + 9;
        puVar17 = puVar17 + 9;
        puVar18 = puVar18 + 9;
        puVar14 = puVar14 + 9;
        iVar11 = iVar11 + 9;
        uVar7 = *(undefined4 *)(puVar22 + 0x248);
        (&DAT_0001b550)[iVar8] = (&DAT_0001b550)[iVar8] | (uint)(byte)puVar22[0x19d] << 0x10;
        *puVar24 = uVar7;
        puVar24 = puVar24 + 9;
      }
      iVar10 = iVar10 + 0x274;
      iVar9 = iVar9 + 1;
      puVar22 = puVar22 + 0x274;
    } while (iVar9 < DAT_00018034);
  }
  DAT_00018074 = DAT_00018074 + 1;
  DAT_0001b550 = (SUB164(SEXT416(iVar11) * SEXT416(0x38e38e39),8) >> 1) - (iVar11 >> 0x1f) |
                 DAT_00018448 << 8;
  (&DAT_0001b550)[iVar11 + 1] = DAT_00018074;
  if (DAT_00018070 == 2) {
    (&DAT_0001b550)[iVar11 + 2] = 0xffffffff;
  }
  else if ((DAT_00018424 == '\x01') && (DAT_000184d4 != 0x7c)) {
    (&DAT_0001b550)[iVar11 + 2] = DAT_0001806c;
  }
  else {
    iVar9 = DAT_0001806c;
    if (DAT_00018424 != '\0') {
      iVar9 = -1;
    }
    (&DAT_0001b550)[iVar11 + 2] = iVar9;
  }
  if (DAT_00018070 == 0) {
    (&DAT_0001b550)[iVar11 + 3] = 0;
  }
  else {
    (&DAT_0001b550)[iVar11 + 3] = 1;
  }
  if ((DAT_0001806c != -1) && (*(char *)(DAT_0001806c * 0x274 + 0x1c444) == '\x01')) {
    (&DAT_0001b550)[iVar11 + 3] = 0;
  }
  iVar10 = 0;
  iVar9 = 2;
  puVar21 = &DAT_0001b550 + iVar11 + 6;
  (&DAT_0001b550)[iVar11 + 4] = DAT_0001803c;
  (&DAT_0001b550)[iVar11 + 5] = DAT_00018044;
  do {
    uVar19 = 0;
    pbVar6 = &DAT_000180a0 + iVar10;
    iVar8 = 0xf;
    do {
      uVar5 = (uint)*pbVar6;
      if (uVar5 == 4) {
        uVar5 = 1;
      }
      uVar19 = uVar19 << 2 | uVar5;
      iVar8 = iVar8 + -1;
      pbVar6 = pbVar6 + 1;
    } while (-1 < iVar8);
    *puVar21 = uVar19;
    puVar21 = puVar21 + 1;
    iVar9 = iVar9 + -1;
    iVar10 = iVar10 + 0x10;
  } while (-1 < iVar9);
  puVar16 = &DAT_0001b4f0;
  puVar15 = &DAT_0001bda0;
  puVar13 = &DAT_0001bd70;
  puVar12 = &DAT_0001afc0;
  puVar24 = &DAT_0001b550 + iVar11 + 0xc;
  iVar9 = 8;
  puVar23 = &DAT_0001b550 + iVar11 + 0x15;
  puVar17 = &DAT_0001b550 + iVar11 + 0x1e;
  puVar18 = &DAT_0001b550 + iVar11 + 0x27;
  (&DAT_0001b550)[iVar11 + 9] = DAT_000183d8;
  (&DAT_0001b550)[iVar11 + 10] = DAT_000183dc;
  (&DAT_0001b550)[iVar11 + 0xb] = DAT_000183e0;
  do {
    uVar7 = *puVar16;
    puVar16 = puVar16 + 1;
    uVar2 = *puVar15;
    puVar15 = puVar15 + 1;
    uVar3 = *puVar13;
    puVar13 = puVar13 + 1;
    uVar4 = *puVar12;
    puVar12 = puVar12 + 1;
    iVar9 = iVar9 + -1;
    *puVar24 = uVar4;
    *puVar23 = uVar3;
    *puVar17 = uVar2;
    *puVar18 = uVar7;
    puVar18 = puVar18 + 1;
    puVar17 = puVar17 + 1;
    puVar23 = puVar23 + 1;
    puVar24 = puVar24 + 1;
  } while (-1 < iVar9);
  (&DAT_0001b550)[iVar11 + 0x30] = DAT_00018518;
  (&DAT_0001b550)[iVar11 + 0x31] = DAT_00018520;
  (&DAT_0001b550)[iVar11 + 0x32] = DAT_00018030;
  (&DAT_0001b550)[iVar11 + 0x33] = DAT_00018014 * 0x100 + DAT_00018010;
  puVar21 = &DAT_0001b550 + iVar11 + 0x3a;
  (&DAT_0001b550)[iVar11 + 0x34] = DAT_0001800c;
  (&DAT_0001b550)[iVar11 + 0x35] = DAT_00018008;
  (&DAT_0001b550)[iVar11 + 0x36] = DAT_00018514;
  (&DAT_0001b550)[iVar11 + 0x37] = DAT_00018468;
  (&DAT_0001b550)[iVar11 + 0x38] = DAT_000184b4;
  (&DAT_0001b550)[iVar11 + 0x39] = DAT_000184fc;
  iVar9 = DAT_0001802c;
  *puVar21 = DAT_00018028;
  *puVar21 = *puVar21 | iVar9 << 1;
  *puVar21 = *puVar21 | (uint)DAT_00018085 << 2;
  (&DAT_0001b550)[iVar11 + 0x3b] = DAT_000184d4;
  (&DAT_0001b550)[iVar11 + 0x3c] = (uint)DAT_0001b02c;
  (&DAT_0001b550)[iVar11 + 0x3d] = DAT_000183f4;
  (&DAT_0001b550)[iVar11 + 0x3e] = DAT_000183f0;
  (&DAT_0001b550)[iVar11 + 0x3f] = DAT_00018400;
  iVar9 = DAT_0001840c;
  (&DAT_0001b550)[iVar11 + 0x40] = DAT_00018404;
  if ((iVar9 == 0) && (DAT_00018410 == -1)) {
    uVar19 = FUN_000177f8(0,0);
    (&DAT_0001b550)[iVar11 + 0x41] = uVar19 & 0xffffff;
  }
  else {
    (&DAT_0001b550)[iVar11 + 0x41] = DAT_00018408;
  }
  if (DAT_00018400 == 0) {
    (&DAT_0001b550)[iVar11 + 0x42] = 2;
  }
  else {
    (&DAT_0001b550)[iVar11 + 0x42] = (uint)DAT_00018414;
  }
  iVar9 = DAT_00018034;
  (&DAT_0001b550)[iVar11 + 0x43] = DAT_00018034;
  iVar10 = 0;
  if (0 < iVar9) {
    puVar17 = &DAT_0001c44c;
    puVar18 = &DAT_0001b550 + iVar11 + 0x44;
    iVar8 = iVar9;
    do {
      uVar7 = *puVar17;
      puVar17 = puVar17 + 0x9d;
      iVar8 = iVar8 + -1;
      *puVar18 = uVar7;
      puVar18 = puVar18 + 1;
      iVar10 = iVar9;
    } while (iVar8 != 0);
  }
  iVar10 = iVar11 + 0x30 + iVar10;
  puVar17 = &DAT_00018310;
  iVar9 = 0x2f;
  puVar18 = &DAT_0001b550 + iVar10 + 0x16;
  (&DAT_0001b550)[iVar10 + 0x15] = (uint)DAT_0001b4bc;
  do {
    uVar7 = *puVar17;
    puVar17 = puVar17 + 1;
    iVar9 = iVar9 + -1;
    *puVar18 = uVar7;
    puVar18 = puVar18 + 1;
  } while (-1 < iVar9);
  puVar17 = &DAT_00017d0c;
  iVar9 = 7;
  puVar18 = &DAT_0001b550 + iVar10 + 0x49;
  (&DAT_0001b550)[iVar10 + 0x47] = DAT_00018448;
  DAT_00018448 = DAT_00018448 + 1 & 0xff;
  (&DAT_0001b550)[iVar10 + 0x48] = 0;
  do {
    uVar7 = *puVar17;
    puVar17 = puVar17 + 1;
    iVar9 = iVar9 + -1;
    *puVar18 = uVar7;
    puVar18 = puVar18 + 1;
  } while (-1 < iVar9);
  (&DAT_0001b550)[iVar10 + 0x51] = DAT_00017d50;
  while (DAT_00017d09 != '\0') {
    FUN_000176dc(0x14);
  }
  FUN_000028d0();
  uVar19 = (uint)DAT_00017d0a;
  iVar9 = 0;
  if (uVar19 != 0) {
    puVar21 = &DAT_0001b550 + iVar10 + 0x53;
    puVar23 = &DAT_0001b550 + iVar10 + 0x54;
    puVar17 = &DAT_0001b550 + iVar10 + 0x55;
    puVar18 = DAT_00017d48;
    do {
      if (0x7fff < (int)puVar18[2]) {
        *puVar21 = puVar18[2] & 0x7fff;
        puVar21 = puVar21 + 3;
        iVar9 = iVar9 + 3;
        *puVar23 = *puVar18;
        puVar23 = puVar23 + 3;
        *puVar17 = puVar18[1];
        puVar17 = puVar17 + 3;
      }
      uVar19 = uVar19 - 1;
      puVar18 = puVar18 + 3;
    } while (uVar19 != 0);
  }
  iVar11 = iVar10 + 0x53 + iVar9;
  (&DAT_0001b550)[iVar10 + 0x52] = SUB164(SEXT416(iVar9) * SEXT416(0x55555556),8) - (iVar9 >> 0x1f);
  (&DAT_0001b550)[iVar11] = (int)DAT_00017d08;
  (&DAT_0001b550)[iVar11 + 1] = DAT_00018080;
  (&DAT_0001b550)[iVar11 + 2] = DAT_00018018;
  (&DAT_0001b550)[iVar11 + 3] = DAT_0001801c;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00009b00(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  short sVar2;
  ushort uVar3;
  uint uVar4;
  int *piVar5;
  undefined4 in_stack_00000010;
  uint in_stack_00000014;
  undefined4 in_stack_00000018;
  
  uVar4 = 0;
  piVar5 = DAT_00018510;
  if (DAT_00017f9c != 0) {
    do {
      uVar4 = uVar4 + 1;
      if (*piVar5 == param_1) goto LAB_00009b78;
      piVar5 = piVar5 + 4;
    } while (uVar4 < DAT_00017f9c);
  }
  piVar5 = (int *)0x0;
LAB_00009b78:
  if (piVar5 == (int *)0x0) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  iVar1 = piVar5[1];
  FUN_0000f9ac(param_2 + 0x40,0);
  (&DAT_000180a0)[param_2] = 4;
  (&DAT_00018190)[param_2] = in_stack_00000018;
  sVar2 = FUN_000148a4(param_2);
  uVar3 = FUN_00014884(param_2);
  if (DAT_000183ec != 0) {
    sVar2 = FUN_000148a4(param_2,iVar1);
    uVar3 = FUN_00014884(param_2);
    FUN_00009e50(param_2,param_3,param_4,0);
    FUN_00013ec4(param_2,in_stack_00000010);
                    // WARNING: Subroutine does not return
    FUN_000177a0(uVar3 | sVar2 << 1 | 0x300,(in_stack_00000014 & 0xff) << 8 | 0xff);
  }
                    // WARNING: Subroutine does not return
  FUN_000177a0(uVar3 | sVar2 << 1 | 0x400,0x1fc0);
}



void FUN_00009e50(undefined8 param_1,undefined2 param_2,undefined2 param_3)

{
  short sVar1;
  ushort uVar2;
  
  sVar1 = FUN_000148a4();
  uVar2 = FUN_00014884(param_1);
  (&DAT_000180d0)[(int)param_1] = param_2;
  *(undefined2 *)((int)param_1 * 2 + 0x18130) = param_3;
  FUN_000165f4(param_1);
                    // WARNING: Subroutine does not return
  FUN_000177a0(uVar2 | sVar1 << 1,param_2);
}



void FUN_00009f6c(void)

{
  char cVar1;
  short sVar2;
  ushort uVar3;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  ushort *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  undefined4 auStack_30 [12];
  
  FUN_000165cc();
  FUN_0001752c(auStack_30);
  iVar9 = 0;
  if (0 < DAT_00018034) {
    iVar10 = 0;
    puVar8 = &DAT_0001c440;
    do {
      if (puVar8[0x50] == '\x01') {
        cVar1 = puVar8[0x52];
        if (cVar1 == '\x01') {
          if (DAT_0001841c == '\0') {
            FUN_000154b0();
          }
          cVar1 = puVar8[0x52];
        }
        if (cVar1 == '\0') {
          iVar5 = FUN_00016b78(iVar9);
          if (DAT_0001802c == 0) {
            if ((*(short *)(puVar8 + 0x18e) != 0) && (*(short *)(puVar8 + 0x18e) != 0)) {
              puVar7 = (ushort *)((int)&DAT_0001c5bc + iVar10);
              uVar6 = (uint)*(ushort *)((int)&DAT_0001c5ce + iVar10);
              do {
                uVar3 = *puVar7;
                puVar7 = puVar7 + 1;
                uVar6 = uVar6 - 1;
                (&DAT_0001b520)[uVar3] = 1;
              } while (uVar6 != 0);
            }
            *(undefined2 *)(puVar8 + 0x5a) = 0;
            (&DAT_0001b520)[iVar5] = 1;
          }
          else if ((&DAT_0001b520)[iVar5] != '\x02') {
            if ((*(short *)(puVar8 + 0x18e) != 0) && (*(short *)(puVar8 + 0x18e) != 0)) {
              puVar7 = (ushort *)((int)&DAT_0001c5bc + iVar10);
              uVar6 = (uint)*(ushort *)((int)&DAT_0001c5ce + iVar10);
              do {
                uVar3 = *puVar7;
                puVar7 = puVar7 + 1;
                uVar6 = uVar6 - 1;
                (&DAT_0001b520)[uVar3] = 2;
              } while (uVar6 != 0);
            }
            *(undefined2 *)(puVar8 + 0x5a) = 0;
            (&DAT_0001b520)[iVar5] = 2;
          }
        }
      }
      iVar10 = iVar10 + 0x274;
      iVar9 = iVar9 + 1;
      puVar8 = puVar8 + 0x274;
    } while (iVar9 < DAT_00018034);
  }
  iVar9 = 0;
  if ((DAT_0001841c == '\0') && (DAT_00018414 == '\x01')) {
    FUN_000154b0();
  }
  puVar12 = &DAT_000182b0;
  puVar11 = &DAT_00018250;
  do {
    sVar2 = FUN_000148a4(iVar9);
    uVar3 = FUN_00014884(iVar9);
    if ((&DAT_0001b520)[iVar9] == '\0') {
      uVar4 = FUN_000177a8(uVar3 | sVar2 << 1 | 0x200);
      *puVar11 = uVar4;
    }
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
    iVar9 = iVar9 + 1;
    puVar11 = puVar11 + 1;
  } while (iVar9 < 0x30);
  FUN_0000a1f0();
                    // WARNING: Subroutine does not return
  FUN_00017534(auStack_30[0]);
}



void FUN_0000a1f0(void)

{
                    // WARNING: Subroutine does not return
  FUN_000177a0(0x200,0);
}



void FUN_0000a4a8(uint param_1,uint param_2)

{
  int iVar1;
  short sVar2;
  ushort uVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  ushort *puVar7;
  undefined1 *puVar8;
  undefined2 *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined2 *puVar13;
  undefined *puVar14;
  int iVar15;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined2 *puStack_30;
  undefined *puStack_2c;
  
  uVar11 = param_1;
  if ((int)param_1 <= (int)param_2) {
    do {
      FUN_000165f4(uVar11);
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 <= (int)param_2);
  }
  FUN_0001752c(&uStack_38);
  if (0 < DAT_00018034) {
    puVar8 = &DAT_0001b520;
    puVar14 = &DAT_0001c440;
    puVar9 = &DAT_0001c5bc;
    iVar5 = 0;
    iVar12 = 0;
    do {
      iVar1 = iVar5 * 0x20 + iVar12 * 0x1d;
      iVar10 = iVar1 * 4;
      iVar15 = iVar12 + 1;
      if (((((&DAT_0001c490)[iVar10] == '\x01') && ((&DAT_0001c492)[iVar10] == '\0')) &&
          (param_1 <= (byte)(&DAT_0001c494)[iVar10])) && ((byte)(&DAT_0001c494)[iVar10] <= param_2))
      {
        puStack_34 = puVar8;
        puStack_30 = puVar9;
        puStack_2c = puVar14;
        iVar6 = FUN_00016b78(iVar12);
        puVar14 = puStack_2c;
        puVar9 = puStack_30;
        puVar8 = puStack_34;
        if (DAT_0001802c == 0) {
          if (((&DAT_0001c5ce)[iVar1 * 2] != 0) && ((&DAT_0001c5ce)[iVar1 * 2] != 0)) {
            puVar7 = puStack_30 + iVar1 * 2;
            uVar11 = (uint)*(ushort *)(puStack_2c + iVar10 + 0x18e);
            do {
              uVar3 = *puVar7;
              puVar7 = puVar7 + 1;
              uVar11 = uVar11 - 1;
              (&DAT_0001b520)[uVar3] = 1;
            } while (uVar11 != 0);
          }
          (&DAT_0001c49a)[iVar12 * 0x3a + iVar5 * 0x40] = 0;
          puStack_34[iVar6] = 1;
        }
        else if (puStack_34[iVar6] != '\x02') {
          if (((&DAT_0001c5ce)[iVar1 * 2] != 0) && ((&DAT_0001c5ce)[iVar1 * 2] != 0)) {
            puVar7 = puStack_30 + iVar1 * 2;
            uVar11 = (uint)*(ushort *)(puStack_2c + iVar10 + 0x18e);
            do {
              uVar3 = *puVar7;
              puVar7 = puVar7 + 1;
              uVar11 = uVar11 - 1;
              (&DAT_0001b520)[uVar3] = 2;
            } while (uVar11 != 0);
          }
          (&DAT_0001c49a)[iVar12 * 0x3a + iVar5 * 0x40] = 0;
          puStack_34[iVar6] = 2;
        }
      }
      iVar5 = iVar15 * 4;
      iVar12 = iVar15;
    } while (iVar15 < DAT_00018034);
  }
  if ((int)param_1 <= (int)param_2) {
    puVar13 = &DAT_000182b0 + param_1;
    puVar9 = &DAT_00018250 + param_1;
    uVar11 = param_1;
    do {
      sVar2 = FUN_000148a4(uVar11);
      uVar3 = FUN_00014884(uVar11);
      if ((&DAT_0001b520)[uVar11] == '\0') {
        uVar4 = FUN_000177a8(uVar3 | sVar2 << 1 | 0x200);
        *puVar9 = uVar4;
      }
      *puVar13 = 0;
      puVar13 = puVar13 + 1;
      uVar11 = uVar11 + 1;
      puVar9 = puVar9 + 1;
    } while ((int)uVar11 <= (int)param_2);
  }
  if ((int)param_2 < (int)param_1) {
    if ((int)param_2 < (int)param_1) {
                    // WARNING: Subroutine does not return
      FUN_00017534(uStack_38);
    }
    uVar11 = param_1 * -0x55555555 >> 4;
                    // WARNING: Subroutine does not return
    FUN_000177a0((uVar11 | (param_1 + uVar11 * -0x18) * 2) & 0xffff,0);
  }
  uVar11 = param_1 * -0x55555555 >> 4;
                    // WARNING: Subroutine does not return
  FUN_000177a0((uVar11 | (param_1 + uVar11 * -0x18) * 2) & 0xffff | 0x200,0);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0000a86c(void)

{
  ushort uVar1;
  undefined2 uVar2;
  uint uVar3;
  short sVar4;
  ushort uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  undefined2 *puVar9;
  int iVar10;
  int iVar11;
  undefined2 *puVar12;
  int iVar13;
  int iVar14;
  undefined *puVar15;
  int iStack_40;
  int iStack_3c;
  int iStack_30;
  
  puVar12 = &DAT_00018250;
  iVar10 = 0;
  iStack_3c = 0;
  iStack_40 = 0;
  do {
    if ((&DAT_0001b520)[iStack_40] == '\0') {
      if (((&DAT_0001c490)[iVar10] != '\x01') || (DAT_00018034 <= iStack_40)) {
LAB_0000a940:
        sVar4 = FUN_000148a4(iStack_40);
        uVar5 = FUN_00014884(iStack_40);
                    // WARNING: Subroutine does not return
        FUN_000177a0(uVar5 | sVar4 << 1 | 0x200,*puVar12);
      }
      if ((&DAT_0001c491)[iVar10] == '\x02') {
        uVar6 = *(uint *)((int)&DAT_0001c4b0 + iVar10);
      }
      else {
        uVar6 = (uint)(byte)(&DAT_0001c494)[iVar10];
      }
      if ((&DAT_000182b0)[uVar6] == 0) goto LAB_0000a940;
    }
    puVar12 = puVar12 + 1;
    iVar10 = iVar10 + 0x274;
    iStack_40 = iStack_40 + 1;
  } while (iStack_40 < 0x30);
  iStack_40 = 0;
  if (0 < DAT_00018034) {
    iVar10 = 0;
    puVar15 = &DAT_0001c440;
    do {
      if ((puVar15[0x12f] == '\x01') && (puVar15[0x50] == '\x01')) {
        uVar6 = FUN_00015e14(iStack_40);
        if ((*(uint *)(puVar15 + 8) <= uVar6) &&
           (uVar6 < *(uint *)(puVar15 + 8) + *(int *)((int)&DAT_0001c66c + iVar10))) {
          if (puVar15[0x51] == '\x02') {
            uVar6 = *(uint *)(puVar15 + 0x70);
          }
          else {
            uVar6 = (uint)(byte)puVar15[0x54];
          }
          sVar4 = FUN_000148a4(uVar6);
          uVar5 = FUN_00014884(uVar6);
          uVar7 = FUN_000177c8(uVar5 | sVar4 << 1 | 0x2240);
          iVar13 = *(int *)(puVar15 + 8);
          if ((*(short *)(puVar15 + 0x18e) != 0) && (*(short *)(puVar15 + 0x18e) != 0)) {
            sVar4 = FUN_000148a4(*(undefined2 *)((int)&DAT_0001c5bc + iVar10));
            uVar5 = FUN_00014884(*(undefined2 *)((int)&DAT_0001c5bc + iVar10));
                    // WARNING: Subroutine does not return
            FUN_000177c0(uVar5 | sVar4 << 1 | 0x2240,uVar7 & 0xfffffffffffffff0);
          }
          if (0 < DAT_00018034) {
            iVar8 = 1;
            iVar11 = 0;
            do {
              iVar14 = iVar8;
              iVar8 = iVar11 * 0x274;
              if ((((&DAT_0001c574)[iVar11 * 0x9d] == *(int *)((int)&DAT_0001c574 + iVar10)) &&
                  ((&DAT_0001c490)[iVar8] == '\x01')) && (iVar11 != iStack_40)) {
                if ((&DAT_0001c491)[iVar8] == '\x02') {
                  uVar6 = (&DAT_0001c4b0)[iVar11 * 0x9d];
                }
                else {
                  uVar6 = (uint)(byte)(&DAT_0001c494)[iVar8];
                }
                sVar4 = FUN_000148a4(uVar6);
                uVar5 = FUN_00014884(uVar6);
                    // WARNING: Subroutine does not return
                FUN_000177c0(uVar5 | sVar4 << 1 | 0x2240,
                             (&DAT_0001c448)[iVar11 * 0x9d] +
                             ((int)(uVar7 & 0xfffffffffffffff0) - iVar13));
              }
              iVar8 = iVar14 + 1;
              iVar11 = iVar14;
            } while (iVar14 < DAT_00018034);
          }
        }
      }
      iVar10 = iVar10 + 0x274;
      puVar15 = puVar15 + 0x274;
      iStack_40 = iStack_40 + 1;
    } while (iStack_40 < DAT_00018034);
  }
  iStack_40 = 0;
  if (0 < DAT_00018034) {
    puVar15 = &DAT_0001c440;
    iStack_30 = 0;
    puVar12 = (undefined2 *)&DAT_0001be40;
    do {
      if (puVar15[0x50] == '\x01') {
        if (puVar15[0x52] == '\x01') {
          if (DAT_0001841d == '\0') {
            if (DAT_00018414 == '\0') {
              if (DAT_0001841c == '\0') goto LAB_0000ad54;
              FUN_0001089c();
            }
            else {
              FUN_00015524();
            }
          }
          else {
LAB_0000ad54:
            DAT_0001841c = '\0';
          }
        }
        else if (puVar15[0x52] == '\0') {
          if (puVar15[0x51] == '\x02') {
            uVar6 = *(uint *)(puVar15 + 0x70);
          }
          else {
            uVar6 = (uint)(byte)puVar15[0x54];
          }
          if (DAT_0001802c == 1) {
            (&DAT_000182b0)[uVar6] = 1;
          }
          else if ((&DAT_0001b520)[uVar6] != '\0') {
            DAT_000184e8 = FUN_00014884(uVar6);
            iVar10 = FUN_000148a4(uVar6);
            DAT_0001849c = iVar10 << 1;
            uVar5 = (&DAT_00018250)[uVar6];
            iStack_3c = iStack_3c + 1;
            _DAT_00018528 = DAT_000184e8 | DAT_0001849c | 0x200;
            uVar2 = DAT_00018528;
            DAT_000184e4 = uVar5;
            *puVar12 = 1;
            puVar12[1] = uVar2;
            *(uint *)(puVar12 + 2) = (uint)uVar5;
            puVar12 = puVar12 + 4;
            if ((*(short *)(puVar15 + 0x18e) != 0) && (iVar10 = 0, *(short *)(puVar15 + 0x18e) != 0)
               ) {
              puVar9 = (undefined2 *)(&DAT_0001be40 + iStack_3c * 8);
              iVar13 = iStack_30;
              do {
                puVar12 = puVar12 + 4;
                iStack_3c = iStack_3c + 1;
                uVar5 = *(ushort *)((int)&DAT_0001c5bc + iVar13);
                iVar10 = iVar10 + 1;
                DAT_000184e8 = FUN_00014884(uVar5);
                iVar8 = FUN_000148a4(uVar5);
                uVar3 = DAT_000184e8;
                uVar1 = (&DAT_00018250)[uVar6];
                DAT_0001849c = iVar8 << 1;
                *puVar9 = 1;
                _DAT_00018528 = uVar3 | iVar8 << 1 | 0x200;
                uVar2 = DAT_00018528;
                DAT_000184e4 = uVar1;
                (&DAT_0001b520)[uVar5] = 0;
                *(uint *)(puVar9 + 2) = (uint)uVar1;
                puVar9[1] = uVar2;
                puVar9 = puVar9 + 4;
                iVar13 = iVar13 + 2;
              } while (iVar10 < (int)(uint)*(ushort *)((int)&DAT_0001c5ce + iStack_30));
            }
            uVar2 = (&DAT_00018250)[uVar6];
            (&DAT_0001b520)[uVar6] = 0;
            *(undefined2 *)(puVar15 + 0x5a) = uVar2;
          }
        }
      }
      puVar15 = puVar15 + 0x274;
      iStack_30 = iStack_30 + 0x274;
      iStack_40 = iStack_40 + 1;
    } while (iStack_40 < DAT_00018034);
  }
  if (iStack_3c != 0) {
    FUN_000177d8(&DAT_0001be40,0,iStack_3c);
  }
                    // WARNING: Subroutine does not return
  FUN_000177a0(0,DAT_000180d0);
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0000b080(uint param_1,uint param_2)

{
  ushort uVar1;
  int iVar2;
  undefined2 uVar3;
  short sVar4;
  ushort uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined2 *puVar12;
  uint uVar13;
  uint uVar14;
  undefined2 *puVar15;
  int iStack_50;
  int iStack_3c;
  
  iStack_50 = 0;
  if ((int)param_1 <= (int)param_2) {
    puVar15 = &DAT_00018250 + param_1;
    iVar10 = param_1 * 0x274;
    uVar14 = param_1;
    do {
      if ((&DAT_0001b520)[uVar14] == '\0') {
        if (((&DAT_0001c490)[iVar10] != '\x01') || (DAT_00018034 <= (int)uVar14)) {
LAB_0000b17c:
          sVar4 = FUN_000148a4(uVar14);
          uVar5 = FUN_00014884(uVar14);
                    // WARNING: Subroutine does not return
          FUN_000177a0(uVar5 | sVar4 << 1 | 0x200,*puVar15);
        }
        if ((&DAT_0001c491)[iVar10] == '\x02') {
          uVar13 = *(uint *)((int)&DAT_0001c4b0 + iVar10);
        }
        else {
          uVar13 = (uint)(byte)(&DAT_0001c494)[iVar10];
        }
        if ((&DAT_000182b0)[uVar13] == 0) goto LAB_0000b17c;
      }
      puVar15 = puVar15 + 1;
      uVar14 = uVar14 + 1;
      iVar10 = iVar10 + 0x274;
    } while ((int)uVar14 <= (int)param_2);
  }
  iStack_3c = 0;
  if (0 < DAT_00018034) {
    iVar10 = 0;
    do {
      iVar2 = iVar10 * 0x20 + iStack_3c * 0x1d;
      iVar11 = iVar2 * 4;
      if (((&DAT_0001c56f)[iVar11] == '\x01') && ((&DAT_0001c490)[iVar11] == '\x01')) {
        uVar14 = FUN_00015e14(iStack_3c);
        if (((uint)(&DAT_0001c448)[iVar2] <= uVar14) &&
           (uVar14 < (uint)((&DAT_0001c448)[iVar2] + (&DAT_0001c66c)[iVar2]))) {
          if ((&DAT_0001c491)[iVar11] == '\x02') {
            uVar14 = (&DAT_0001c4b0)[iVar2];
          }
          else {
            uVar14 = (uint)(byte)(&DAT_0001c494)[iVar11];
          }
          if ((param_1 <= uVar14) && (uVar14 <= param_2)) {
            sVar4 = FUN_000148a4(uVar14);
            uVar5 = FUN_00014884(uVar14);
            uVar6 = FUN_000177c8(uVar5 | sVar4 << 1 | 0x2240);
            iVar11 = iVar10 * 0x20 + iStack_3c * 0x1d;
            iVar2 = (&DAT_0001c448)[iVar11];
            if (((&DAT_0001c5ce)[iVar11 * 2] != 0) && ((&DAT_0001c5ce)[iVar11 * 2] != 0)) {
              sVar4 = FUN_000148a4((&DAT_0001c5bc)[(iVar10 * 0x20 + iStack_3c * 0x1d) * 2]);
              uVar5 = FUN_00014884((&DAT_0001c5bc)[(iVar10 * 0x20 + iStack_3c * 0x1d) * 2]);
                    // WARNING: Subroutine does not return
              FUN_000177c0(uVar5 | sVar4 << 1 | 0x2240,uVar6);
            }
            if (0 < DAT_00018034) {
              iVar7 = 0;
              iVar11 = 0;
              do {
                iVar8 = iVar7 * 0x20 + iVar11 * 0x1d;
                iVar9 = iVar8 * 4;
                if ((&DAT_0001c491)[iVar9] == '\x02') {
                  uVar14 = (&DAT_0001c4b0)[iVar8];
                }
                else {
                  uVar14 = (uint)(byte)(&DAT_0001c494)[iVar9];
                }
                iVar7 = iVar7 * 0x20 + iVar11 * 0x1d;
                iVar8 = iVar11 + 1;
                if ((((&DAT_0001c574)[iVar7] == (&DAT_0001c574)[iVar10 * 0x20 + iStack_3c * 0x1d])
                    && ((&DAT_0001c490)[iVar7 * 4] == '\x01')) && (iVar11 != iStack_3c)) {
                  sVar4 = FUN_000148a4(uVar14);
                  uVar5 = FUN_00014884(uVar14);
                    // WARNING: Subroutine does not return
                  FUN_000177c0(uVar5 | sVar4 << 1 | 0x2240,
                               (&DAT_0001c448)[iVar7] + ((int)uVar6 - iVar2));
                }
                iVar7 = iVar8 * 4;
                iVar11 = iVar8;
              } while (iVar8 < DAT_00018034);
            }
          }
        }
      }
      iStack_3c = iStack_3c + 1;
      iVar10 = iStack_3c * 4;
    } while (iStack_3c < DAT_00018034);
  }
  iStack_3c = 0;
  if (0 < DAT_00018034) {
    puVar15 = (undefined2 *)&DAT_0001be40;
    iVar10 = 0;
    do {
      iVar2 = iVar10 * 0x20 + iStack_3c * 0x1d;
      iVar11 = iVar2 * 4;
      if ((&DAT_0001c490)[iVar11] == '\x01') {
        if ((&DAT_0001c491)[iVar11] == '\x02') {
          uVar14 = (&DAT_0001c4b0)[iVar2];
        }
        else {
          uVar14 = (uint)(byte)(&DAT_0001c494)[iVar11];
        }
        iVar2 = iVar10 * 0x20 + iStack_3c * 0x1d;
        iVar11 = iVar2 * 4;
        if ((((&DAT_0001c492)[iVar11] == '\0') && (param_1 <= uVar14)) && (uVar14 <= param_2)) {
          if (DAT_0001802c == 1) {
            (&DAT_000182b0)[uVar14] = 1;
          }
          else if ((&DAT_0001b520)[uVar14] != '\0') {
            DAT_000184e8 = FUN_00014884(uVar14);
            iVar7 = FUN_000148a4(uVar14);
            uVar5 = (&DAT_00018250)[uVar14];
            DAT_0001849c = iVar7 << 1;
            iStack_50 = iStack_50 + 1;
            _DAT_00018528 = DAT_000184e8 | DAT_0001849c | 0x200;
            uVar3 = DAT_00018528;
            DAT_000184e4 = uVar5;
            *puVar15 = 1;
            puVar15[1] = uVar3;
            *(uint *)(puVar15 + 2) = (uint)uVar5;
            puVar15 = puVar15 + 4;
            if (((&DAT_0001c5ce)[iVar2 * 2] != 0) && (iVar7 = 0, (&DAT_0001c5ce)[iVar2 * 2] != 0)) {
              puVar12 = (undefined2 *)(&DAT_0001be40 + iStack_50 * 8);
              do {
                puVar15 = puVar15 + 4;
                iStack_50 = iStack_50 + 1;
                uVar5 = *(ushort *)((int)&DAT_0001c5bc + iVar11);
                iVar11 = iVar11 + 2;
                DAT_000184e8 = FUN_00014884(uVar5);
                iVar8 = FUN_000148a4(uVar5);
                DAT_0001849c = iVar8 << 1;
                uVar1 = (&DAT_00018250)[uVar14];
                _DAT_00018528 = DAT_000184e8 | DAT_0001849c | 0x200;
                *puVar12 = 1;
                uVar3 = DAT_00018528;
                DAT_000184e4 = uVar1;
                (&DAT_0001b520)[uVar5] = 0;
                puVar12[1] = uVar3;
                *(uint *)(puVar12 + 2) = (uint)uVar1;
                iVar7 = iVar7 + 1;
                puVar12 = puVar12 + 4;
              } while (iVar7 < (int)(uint)(ushort)(&DAT_0001c5ce)[iVar2 * 2]);
            }
            (&DAT_0001b520)[uVar14] = 0;
            (&DAT_0001c49a)[iStack_3c * 0x3a + iVar10 * 0x40] = (&DAT_00018250)[uVar14];
          }
        }
      }
      iStack_3c = iStack_3c + 1;
      iVar10 = iStack_3c * 4;
    } while (iStack_3c < DAT_00018034);
  }
  if (iStack_50 != 0) {
    FUN_000177d8(&DAT_0001be40,0,iStack_50);
  }
  if ((int)param_2 < (int)param_1) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  uVar14 = param_1 * -0x55555555 >> 4;
                    // WARNING: Subroutine does not return
  FUN_000177a0((uVar14 | (param_1 + uVar14 * -0x18) * 2) & 0xffff,(&DAT_000180d0)[param_1]);
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000b9a4(int param_1)

{
  int iVar1;
  undefined4 auStack_20 [8];
  
  iVar1 = param_1 * 0x274;
  if ((&DAT_0001c5a8)[iVar1] != '\0') {
    FUN_0000f9ac(param_1,0);
    if (((param_1 == DAT_000184cc) && (DAT_00018524 == 0)) && (*(char *)(iVar1 + 0x1c5ab) != '\x01')
       ) {
      if (*(char *)(DAT_000184bc + *(int *)(iVar1 + 0x1c694) * 0x28 + 0x22) == '\0') {
        FUN_00017560(DAT_000184f4);
      }
      DAT_00018098 = 0;
    }
    if ((&DAT_0001c5a8)[param_1 * 0x274] == '\x01') {
      while (DAT_00018430 != 0) {
        FUN_000176dc(0x14);
      }
      FUN_0001752c(auStack_20);
      FUN_00017500((&DAT_0001c450)[param_1 * 0x9d]);
                    // WARNING: Subroutine does not return
      FUN_00017534(auStack_20[0]);
    }
    (&DAT_0001c44c)[param_1 * 0x9d] = 0;
    (&DAT_0001c450)[param_1 * 0x9d] = 0;
    (&DAT_0001c5a8)[param_1 * 0x274] = 0;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000bb78(ushort *param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  longlong lVar4;
  int iVar5;
  ushort *puVar6;
  uint uVar7;
  longlong lVar8;
  int *piVar9;
  int iVar10;
  ushort auStack_228 [276];
  
  DAT_00018068 = 1;
  if (DAT_00017d09 != '\0') {
    do {
      FUN_000176dc(0x14);
    } while (DAT_00017d09 != '\0');
  }
  if (DAT_00017f90 != 0) {
    DAT_00017f94 = 1;
    FUN_000176c4();
  }
  uVar2 = *param_1;
  iVar10 = (int)((uint)uVar2 << 0x10) >> 0x10;
  if (iVar10 == 0x49) {
    uVar2 = param_1[1];
    param_1 = param_1 + 2;
    lVar8 = 0;
    if (0 < (longlong)(short)uVar2) {
      do {
        uVar1 = *param_1;
        lVar4 = (longlong)(short)param_1[1];
        param_1 = param_1 + 2;
        lVar8 = (longlong)((int)lVar8 + 1);
        if (0 < lVar4) {
          puVar6 = auStack_228;
          do {
            uVar3 = *param_1;
            param_1 = param_1 + 1;
            lVar4 = (longlong)((int)lVar4 + -1);
            *puVar6 = uVar3;
            puVar6 = puVar6 + 1;
          } while (lVar4 != 0);
        }
        if (uVar1 < 0x74) {
                    // WARNING: Bad instruction - Truncating control flow here
          halt_baddata();
        }
      } while (lVar8 < (short)uVar2);
    }
    iVar10 = 0;
    if (DAT_00018054 != 0) {
      uVar7 = 0;
      piVar9 = &DAT_000183e4;
      do {
        if (*piVar9 != 0) {
          FUN_000177b0(uVar7 & 0xffff | 0x1500);
          *piVar9 = 0;
          FUN_000176dc(0x28);
          iVar10 = iVar10 + 1;
        }
        uVar7 = uVar7 + 1;
        piVar9 = piVar9 + 1;
      } while ((int)uVar7 < 2);
      if (iVar10 != 0) {
        FUN_00016528();
      }
    }
    DAT_00018068 = 0;
    FUN_00017720(DAT_00018058);
  }
  else {
    FUN_0001761c("---------------------------------\n");
    FUN_0001761c("MULTISTREAM ERROR\n");
    FUN_0001761c("EE and IOP versions do not match\n");
    iVar5 = (SUB164(SEXT416(iVar10) * SEXT416(0x66666667),8) >> 2) -
            ((int)((uint)uVar2 << 0x10) >> 0x1f);
    FUN_0001761c("EE version  = %d.%d\n",iVar5,iVar10 + iVar5 * -10);
    FUN_0001761c("IOP version = %d.%d\n",7,3);
    if (iVar10 < 0x4a) {
      FUN_0001761c("(EE Sound.C file is older than IOP Stream.C)\n");
    }
    else {
      FUN_0001761c("(IOP Stream.C file is older than EE Sound.C)\n");
    }
    FUN_0001761c("---------------------------------\n");
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000ce3c(int param_1,int param_2,undefined2 param_3,undefined2 param_4)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_1 * 0x274;
  if ((((&DAT_0001c490)[iVar4] == '\x01') && ((ushort)(&DAT_0001c5ce)[param_1 * 0x13a] < 3)) &&
     ((&DAT_0001c492)[iVar4] == '\0')) {
    uVar2 = (&DAT_0001c5ce)[param_1 * 0x13a];
    FUN_0000f9ac(param_2 + 0x40,0);
    (&DAT_000180a0)[param_2] = 2;
    iVar3 = (uint)uVar2 * 2 + iVar4;
    (&DAT_0001c5bc)[param_1 * 0x13a + (uint)uVar2] = (short)param_2;
    *(undefined2 *)(iVar3 + 0x1c5c2) = param_3;
    *(undefined2 *)(iVar3 + 0x1c5c8) = param_4;
    cVar1 = *(char *)(iVar4 + 0x1c5a9);
    (&DAT_0001c5ce)[param_1 * 0x13a] = (&DAT_0001c5ce)[param_1 * 0x13a] + 1;
    if (cVar1 == '\0') {
      (&DAT_00018250)[param_2] = (&DAT_0001c49a)[param_1 * 0x13a];
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000cf58(undefined8 param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = (int)param_1;
  iVar4 = iVar5 * 0x274;
  if (param_2 == 1) {
    DAT_000184cc = iVar5;
  }
  if ((&DAT_0001c490)[iVar4] != '\x01') {
    halt_baddata();
  }
  DAT_00018070 = 1;
  cVar1 = (&DAT_0001c491)[iVar4];
  if (cVar1 == '\x05') {
    if (param_2 != 1) {
      FUN_000085ec(param_1,(&DAT_0001c4c4)[iVar5 * 0x9d],FUN_0000526c);
      halt_baddata();
    }
    FUN_00007aa4(DAT_000184cc,(&DAT_0001c4c4)[(&DAT_0001c574)[iVar5 * 0x9d] * 0x9d],2,&DAT_000147d4)
    ;
    halt_baddata();
  }
  if (cVar1 != '\x06') {
    if (cVar1 == '\x01') {
      if (1 < (byte)(&DAT_0001c492)[iVar4]) {
        DAT_000184cc = iVar5;
        (&DAT_0001c491)[iVar4] = 0;
        DAT_0001806c = 0xffffffff;
        DAT_00018070 = 0;
        halt_baddata();
      }
      if ((*(int *)(iVar4 + 0x1c610) == 0) && ((&DAT_0001c492)[iVar4] == 0)) {
        DAT_00018070 = 0;
        halt_baddata();
      }
      lVar3 = FUN_0000e76c(param_1);
      if (lVar3 == -1) {
        if (*(char *)(iVar5 * 0x274 + 0x1c5ab) == '\x01') {
          DAT_0001806c = 0xffffffff;
        }
      }
      else {
        iVar4 = iVar5 * 0x274;
        if ((&DAT_0001c492)[iVar4] == '\0') {
          (&DAT_000180a0)[(byte)(&DAT_0001c494)[iVar4]] = 1;
        }
        if ((byte)(&DAT_0001c493)[iVar4] - 2 < 2) {
          (&DAT_0001c491)[iVar4] = 0;
        }
        else {
          DAT_000184cc = iVar5;
          (&DAT_0001c491)[iVar4] = 0;
          DAT_0001806c = 0xffffffff;
        }
      }
    }
    else {
      if (cVar1 != '\0') {
        DAT_00018070 = 0;
        halt_baddata();
      }
      if (1 < (byte)(&DAT_0001c492)[iVar4]) {
        DAT_00017f90 = 0;
        FUN_000085ec(param_1,(&DAT_0001c4c4)[iVar5 * 0x9d],FUN_00016350);
        halt_baddata();
      }
      cVar1 = (&DAT_0001c493)[iVar4];
      if (cVar1 == '\0') {
        if (param_2 == 1) {
          FUN_00007aa4(param_1,*(undefined4 *)(iVar4 + 0x1c4c8),0,&DAT_00014730);
        }
        else {
          FUN_000085ec(param_1,*(undefined4 *)(iVar4 + 0x1c4c8),FUN_00015a50);
        }
      }
      else if (cVar1 == '\x01') {
        if (param_2 == 1) {
          FUN_00007aa4(param_1,*(undefined4 *)(iVar4 + 0x1c4c8),1,&DAT_00014784);
        }
        else {
          FUN_000085ec(param_1,*(undefined4 *)(iVar4 + 0x1c4c8),FUN_000159d4);
        }
      }
      else if (((cVar1 == '\x03') && ((&DAT_0001c492)[iVar4] == 1)) && (DAT_00018414 == '\x01')) {
        DAT_00018414 = '\x02';
        uVar2 = FUN_000177f8(0,0);
        DAT_00018418 = uVar2 >> 0x18;
      }
      if (1 < (byte)(&DAT_0001c493)[iVar5 * 0x274] - 2) {
        halt_baddata();
      }
    }
    DAT_00018070 = 0;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  DAT_000184cc = iVar5;
  FUN_00007aa4(param_1,(&DAT_0001c4c4)[iVar5 * 0x9d],4,&DAT_0001482c);
  DAT_0001806c = 0xffffffff;
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000d35c(ulonglong param_1,ulonglong param_2,undefined2 param_3)

{
  short sVar1;
  ushort uVar2;
  undefined *puVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  
  bVar5 = false;
  bVar6 = false;
  if (DAT_00018044 != 0) {
    if (0 < DAT_00018034) {
      puVar3 = &DAT_0001c440;
      iVar4 = DAT_00018034;
      do {
        if ((puVar3[0x50] != '\0') && (puVar3[0x51] == '\0')) {
          if (((byte)puVar3[0x54] == param_1) && (puVar3[0x52] == '\0')) {
            bVar5 = true;
          }
          else if (((puVar3[0x51] == '\0') && ((byte)puVar3[0x54] == param_2)) &&
                  (puVar3[0x52] == '\0')) {
            bVar6 = true;
          }
        }
        iVar4 = iVar4 + -1;
        puVar3 = puVar3 + 0x274;
      } while (iVar4 != 0);
    }
    if ((bVar5) && (bVar6)) {
      sVar1 = FUN_000148a4(param_1);
      uVar2 = FUN_00014884(param_1);
                    // WARNING: Subroutine does not return
      FUN_000177a0(uVar2 | sVar1 << 1 | 0x200,param_3);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000d500(void)

{
  short sVar1;
  ushort uVar2;
  longlong lVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  
  if (DAT_0001805c != 0) {
    iVar5 = 0;
    puVar6 = &DAT_00018190;
    do {
      pcVar4 = &DAT_000180a0 + iVar5;
      if (*pcVar4 != '\x02') {
        if (*pcVar4 != '\x04') {
          sVar1 = FUN_000148a4(iVar5);
          uVar2 = FUN_00014884(iVar5);
          lVar3 = FUN_000177a8(uVar2 | sVar1 << 1 | 0x500);
          if (lVar3 == 0) {
            if (*pcVar4 != '\0') {
              *pcVar4 = '\0';
              *puVar6 = 0;
            }
            goto LAB_0000d5b0;
          }
        }
        *pcVar4 = '\x01';
      }
LAB_0000d5b0:
      iVar5 = iVar5 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar5 < 0x30);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Removing unreachable block (ram,0x0000d700)

void FUN_0000d5e4(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = 0;
  do {
    iVar2 = FUN_000177b8(uVar5 & 0xffff | 0x1700);
    uVar4 = 0;
    uVar6 = uVar5 + 1;
    piVar3 = &DAT_00018190 + uVar5 * 0x18;
    do {
      if (((&DAT_000180a0)[uVar5 * 0x18 + uVar4] == '\x01') && (iVar1 = *piVar3, iVar1 != 0)) {
        if (iVar1 == 1) {
                    // WARNING: Subroutine does not return
          FUN_000177c0((uVar5 | uVar4 << 1) & 0xffff | 0x2140,0x5000);
        }
        if ((iVar2 >> (uVar4 & 0x1f) & 1U) == 1) {
          if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
            FUN_000177a0((uVar5 | uVar4 << 1) & 0xffff | 0x400,0x1fc0);
          }
          *piVar3 = iVar1 + -1;
        }
      }
      uVar4 = uVar4 + 1;
      piVar3 = piVar3 + 1;
    } while ((int)uVar4 < 0x18);
    FUN_000177b0(uVar5 & 0xffff | 0x1700,0);
    uVar5 = uVar6;
  } while ((int)uVar6 < 2);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_0000d760(uint param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = param_1 + 1 & 1;
  if ((&DAT_00017fbc)[uVar1] == 0) {
    (&DAT_00017fcc)[param_1] = DAT_00017fc4;
  }
  else if ((&DAT_00017fcc)[uVar1] == DAT_00017fc4) {
    (&DAT_00017fcc)[param_1] = DAT_00017fc8;
  }
  else {
    (&DAT_00017fcc)[param_1] = DAT_00017fc4;
  }
  (&DAT_00017fbc)[param_1] = param_2;
                    // WARNING: Subroutine does not return
  (&DAT_00017fd4)[param_1] = *(undefined4 *)(param_2 * 4 + 0x17fdc);
  FUN_000177c0(param_1 & 0xffff | 0x1d00,(&DAT_00017fcc)[param_1]);
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000d914(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  undefined4 auStack_20 [8];
  
  uVar1 = FUN_00014884();
  uVar2 = FUN_000148a4(param_1);
  puVar6 = (uint *)(uVar1 * 4 + 0x17fb4);
  *puVar6 = *puVar6 | 1 << (uVar2 & 0x1f);
  lVar4 = FUN_0001752c(auStack_20);
  uVar5 = uVar1 & 0xffff | 0x1900;
  uVar3 = FUN_000177b8(uVar5);
  puVar7 = (uint *)(uVar1 * 4 + 0x17f7c);
  uVar2 = *puVar7;
  FUN_000177b0(uVar5,uVar3 & ~uVar2 | *puVar6 & uVar2);
  uVar3 = uVar1 & 0xffff | 0x1b00;
  uVar1 = FUN_000177b8(uVar3);
  uVar2 = *puVar7;
  FUN_000177b0(uVar3,uVar1 & ~uVar2 | *puVar6 & uVar2);
  if (lVar4 == 0) {
                    // WARNING: Subroutine does not return
    FUN_00017534(auStack_20[0]);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000da14(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  undefined4 auStack_20 [8];
  
  uVar1 = FUN_00014884();
  uVar2 = FUN_000148a4(param_1);
  puVar6 = (uint *)(uVar1 * 4 + 0x17fb4);
  *puVar6 = *puVar6 & ~(1 << (uVar2 & 0x1f));
  lVar4 = FUN_0001752c(auStack_20);
  uVar5 = uVar1 & 0xffff | 0x1900;
  uVar3 = FUN_000177b8(uVar5);
  puVar7 = (uint *)(uVar1 * 4 + 0x17f7c);
  uVar2 = *puVar7;
  FUN_000177b0(uVar5,uVar3 & ~uVar2 | *puVar6 & uVar2);
  uVar3 = uVar1 & 0xffff | 0x1b00;
  uVar1 = FUN_000177b8(uVar3);
  uVar2 = *puVar7;
  FUN_000177b0(uVar3,uVar1 & ~uVar2 | *puVar6 & uVar2);
  if (lVar4 == 0) {
                    // WARNING: Subroutine does not return
    FUN_00017534(auStack_20[0]);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000db18(int param_1,int param_2,ushort *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ushort *puVar9;
  ushort *puVar10;
  ushort *puVar11;
  ushort *puVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  
  uVar3 = DAT_00017f98;
  iVar6 = param_1 * 0x274;
  if ((&DAT_0001c495)[iVar6] != '\x7f') {
    iVar15 = 0;
    if (0 < param_2) {
      piVar14 = (int *)(iVar6 + 0x1c504);
      iVar2 = iVar6;
      do {
        piVar4 = DAT_000184bc;
        puVar9 = param_3 + 2;
        uVar5 = 0;
        iVar13 = (uint)*param_3 * 0x10000 + (uint)param_3[1];
        piVar1 = DAT_000184bc;
        if (uVar3 != 0) {
          do {
            if (*piVar1 == iVar13) goto LAB_0000dbf0;
            uVar5 = uVar5 + 1;
            piVar1 = piVar1 + 10;
          } while (uVar5 < DAT_00017f98);
        }
        uVar5 = 0xffffffff;
LAB_0000dbf0:
        if (uVar5 == 0xffffffff) {
LAB_0000dbfc:
          *(undefined1 *)(iVar6 + 0x1c56e) = 0;
          halt_baddata();
        }
        puVar10 = param_3 + 3;
        puVar11 = param_3 + 4;
        puVar12 = param_3 + 5;
        param_3 = param_3 + 6;
        iVar8 = (uint)*puVar9 * 0x10000 + (uint)*puVar10;
        iVar7 = (uint)*puVar11 * 0x10000 + (uint)*puVar12;
        if (iVar8 == 0) {
          iVar8 = DAT_000184bc[uVar5 * 10 + 4];
          iVar7 = DAT_000184bc[uVar5 * 10 + 3];
        }
        if ((uint)DAT_000184bc[uVar5 * 10 + 1] < (uint)(iVar8 + iVar7)) goto LAB_0000dbfc;
        *(int *)(iVar2 + 0x1c4e0) = iVar13;
        *(int *)(iVar2 + 0x1c54c) = iVar8;
        iVar15 = iVar15 + 1;
        *(int *)(iVar2 + 0x1c528) = piVar4[uVar5 * 10 + 1];
        *piVar14 = iVar7;
        piVar14 = piVar14 + 1;
        iVar2 = iVar2 + 4;
      } while (iVar15 < param_2);
    }
    *(char *)(param_1 * 0x274 + 0x1c56e) = (char)param_2;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000dcd0(uint param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  iVar3 = 0;
  DAT_00018014 = param_1 & 0xffff;
  DAT_0001800c = 0;
  lVar1 = FUN_00017668(param_2,"host0:",6);
  if ((lVar1 == 0) || (lVar1 = FUN_00017668(param_2,"atfile:",7), lVar1 == 0)) {
    uVar2 = 0;
    lVar1 = FUN_00017558(param_2,1);
    if (lVar1 < 0) {
      halt_baddata();
    }
    uStack_40 = 0;
    uStack_3c = FUN_00017570(lVar1,0,2);
    FUN_00017560(lVar1);
  }
  else {
    lVar1 = FUN_00017668(param_2,"cdrom0:",7);
    if (lVar1 == 0) {
      iVar3 = 7;
    }
    lVar1 = FUN_00017670(param_2,&DAT_00017cfc);
    if (lVar1 == 0) {
      FUN_00017650(param_2,&DAT_00017cfc);
    }
    uVar2 = 1;
    FUN_0001785c(0x10);
    lVar1 = FUN_00017854(&uStack_40,(int)param_2 + iVar3);
    if (lVar1 == 0) {
      lVar1 = FUN_00017864();
      if (lVar1 != 0) {
        halt_baddata();
      }
      DAT_00018084 = 2;
      halt_baddata();
    }
  }
  DAT_00018010 = uVar2;
  DAT_0001800c = uStack_3c;
  DAT_00018008 = uStack_40;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000dfc0(uint param_1,uint param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 auStack_20 [8];
  
  lVar4 = FUN_0000dcd0(param_1 & 0xffff,param_3);
  uVar2 = DAT_00018010;
  uVar1 = DAT_0001800c;
  uVar6 = DAT_00018008;
  if (lVar4 != 0) {
    halt_baddata();
  }
  if ((DAT_00017f98 != 0) && (DAT_00017fa0 != DAT_00017f98)) {
    uVar7 = 0;
    puVar5 = DAT_000184bc;
    if (DAT_00017f98 != 0) {
      do {
        if (*puVar5 == 0xffffffff) goto LAB_0000e08c;
        if (*puVar5 == param_1) break;
        uVar7 = uVar7 + 1;
        puVar5 = puVar5 + 10;
      } while (uVar7 < DAT_00017f98);
    }
    puVar5 = (uint *)0x0;
LAB_0000e08c:
    if (puVar5 != (uint *)0x0) {
      lVar4 = -1;
      if (param_2 <= DAT_0001800c) {
        *(undefined1 *)((int)puVar5 + 0x22) = 0;
        puVar5[4] = uVar1 - param_2;
        puVar5[5] = uVar6;
        puVar5[1] = uVar1;
        puVar5[6] = uVar2;
        puVar5[7] = 0;
        puVar5[2] = param_2;
        puVar5[3] = param_2;
        *puVar5 = param_1;
        DAT_00017fa0 = DAT_00017fa0 + 1;
        if (uVar2 == 1) {
          DAT_00018088 = uVar2;
        }
        lVar4 = 0;
      }
      goto LAB_0000e0e4;
    }
  }
  lVar4 = -1;
LAB_0000e0e4:
  if (((lVar4 == 0) && (DAT_00018010 == 0)) && (uVar6 = 0, puVar5 = DAT_000184bc, DAT_00017f98 != 0)
     ) {
    do {
      if (*puVar5 == param_1) {
        if (puVar5[7] != 0) {
          halt_baddata();
        }
        iVar3 = FUN_00017660(param_3);
        FUN_0001752c(auStack_20);
        FUN_000174f8(0,iVar3 + 1,0);
                    // WARNING: Subroutine does not return
        FUN_00017534(auStack_20[0]);
      }
      uVar6 = uVar6 + 1;
      puVar5 = puVar5 + 10;
    } while (uVar6 < DAT_00017f98);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000e300(short param_1)

{
  longlong lVar1;
  
  if (param_1 != 3) {
    if ((param_1 != 1) && (param_1 != 2)) {
      if (param_1 == 4) {
        DAT_0001844c = 1;
        DAT_000184dd = 1;
        halt_baddata();
      }
      if (param_1 == 5) {
        DAT_0001844c = 1;
        DAT_000184dd = 0;
        halt_baddata();
      }
      if (param_1 != 6) {
        halt_baddata();
      }
      FUN_00002d78();
      halt_baddata();
    }
    DAT_000184dc = 0;
    if (DAT_0001844c == '\0') {
      DAT_000184dd = 1;
    }
    DAT_000184de = 0;
    FUN_0001783c(0);
    FUN_0001787c(param_1);
    if (param_1 != 3) goto LAB_0000e3f0;
  }
  if (DAT_0001844c == '\0') {
    DAT_000184dd = 1;
  }
  DAT_000184dc = 0;
  DAT_000184de = 0;
  FUN_0001785c(0x10);
LAB_0000e3f0:
  FUN_0001786c(0);
  do {
    lVar1 = FUN_00017874(FUN_000040a4);
  } while (lVar1 == 0);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000e41c(uint param_1,int param_2,int param_3,undefined2 param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined2 in_stack_00000010;
  int in_stack_00000014;
  
  iVar8 = (int)param_1 >> 8;
  param_1 = param_1 & 0xff;
  cVar3 = FUN_000148d4(iVar8);
  if ((cVar3 == '\0') && (cVar3 = FUN_000148d4(param_1), cVar3 == '\0')) {
    iVar7 = param_1 * 0x274;
    if (((&DAT_0001c490)[iVar7] != '\0') &&
       (((&DAT_0001c56f)[iVar7] == '\x01' && (*(char *)(iVar7 + 0x1c580) == '\0')))) {
      if ((uint)(*(int *)(iVar7 + 0x1c57c) * param_3 + *(int *)(iVar7 + 0x1c57c)) <=
          (uint)(&DAT_0001c4c4)[param_1 * 0x9d]) {
        FUN_00015944();
        FUN_0000f9ac(iVar8,0);
        (&DAT_000180d0)[param_2] = param_4;
        *(undefined2 *)(param_2 * 2 + 0x18130) = in_stack_00000010;
        (&DAT_0001c4bc)[iVar8 * 0x9d] = (&DAT_0001c4bc)[param_1 * 0x9d];
        (&DAT_0001c4b4)[iVar8 * 0x9d] = (&DAT_0001c4b4)[param_1 * 0x9d];
        (&DAT_0001c44c)[iVar8 * 0x9d] = (&DAT_0001c44c)[param_1 * 0x9d];
        *(undefined4 *)(iVar8 * 0x274 + 0x1c4c0) = *(undefined4 *)(iVar7 + 0x1c4c0);
        (&DAT_0001c4b0)[iVar8 * 0x9d] = param_2;
        if (in_stack_00000014 == 0) {
          if ((&DAT_0001c450)[iVar8 * 0x9d] == 0) {
                    // WARNING: Subroutine does not return
            FUN_00015934();
          }
          (&DAT_0001c448)[iVar8 * 0x9d] = *(undefined4 *)(iVar8 * 0x274 + 0x1c4d0);
        }
        else {
          (&DAT_0001c448)[iVar8 * 0x9d] = in_stack_00000014;
        }
        iVar5 = iVar8 * 0x274;
        iVar4 = param_1 * 0x274;
        (&DAT_0001c4c4)[iVar8 * 0x9d] = (&DAT_0001c4c4)[param_1 * 0x9d];
        *(undefined4 *)(iVar5 + 0x1c4c8) = *(undefined4 *)(iVar4 + 0x1c4c8);
        (&DAT_0001c5ac)[iVar5] = 0;
        (&DAT_0001c5b0)[iVar8 * 0x9d] = 0;
        piVar6 = (int *)(iVar4 + 0x1c57c);
        (&DAT_0001c49a)[iVar8 * 0x13a] = (&DAT_0001c49a)[param_1 * 0x13a];
        uVar2 = (&DAT_0001c49a)[param_1 * 0x13a];
        (&DAT_0001c491)[iVar5] = 2;
        (&DAT_0001c492)[iVar5] = 0;
        (&DAT_0001c56f)[iVar5] = 2;
        (&DAT_0001c570)[iVar5] = 0;
        (&DAT_0001c574)[iVar8 * 0x9d] = param_1;
        iVar7 = *piVar6;
        (&DAT_000180a0)[param_2] = 2;
        *(int *)(iVar5 + 0x1c578) = param_3 * iVar7;
        *(int *)(iVar5 + 0x1c57c) = *piVar6;
        *(int *)(iVar5 + 0x1c458) = *piVar6;
        uVar1 = *(undefined1 *)(iVar4 + 0x1c5a9);
        (&DAT_0001b520)[param_2] = 0;
        *(undefined1 *)(iVar5 + 0x1c5a9) = uVar1;
        (&DAT_0001c66c)[iVar8 * 0x9d] = (&DAT_0001c66c)[param_1 * 0x9d];
        uVar1 = (&DAT_0001c5dd)[iVar4];
        (&DAT_00018250)[param_2] = uVar2;
        (&DAT_0001c5dd)[iVar5] = uVar1;
        (&DAT_0001c5e0)[iVar8 * 0x9d] = 0xffffffff;
                    // WARNING: Subroutine does not return
        (&DAT_0001c490)[iVar5] = 1;
        FUN_00015934();
      }
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000e76c(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  byte bVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  short sVar7;
  ushort uVar8;
  int iVar9;
  ushort *puVar10;
  int iVar11;
  int iVar12;
  undefined2 *puVar13;
  undefined *puVar14;
  int iVar15;
  int iStackY_b0;
  uint uStackY_a4;
  uint uVar16;
  uint uVar17;
  undefined4 uVar18;
  
  uVar17 = 0xffffffff;
  puVar14 = &DAT_0001c440;
  iVar12 = param_1 * 0x274;
  uStackY_a4 = 0;
  uVar16 = 0;
  uVar18 = 0;
  iVar9 = (&DAT_0001c574)[param_1 * 0x9d];
  if (iVar9 == -1) {
    cVar2 = (&DAT_0001c492)[iVar12];
    *(undefined1 *)(iVar12 + 0x1c580) = 1;
    if (cVar2 == '\0') {
      iVar9 = FUN_00014884((&DAT_0001c494)[iVar12]);
      FUN_000148a4((&DAT_0001c494)[iVar12]);
      if ((&DAT_0001c5ce)[param_1 * 0x13a] != 0) {
        iVar12 = 0;
        if ((&DAT_0001c5ce)[param_1 * 0x13a] != 0) {
          puVar13 = &DAT_0001c5bc + param_1 * 0x13a;
          do {
            uVar4 = *puVar13;
            FUN_00014884(uVar4);
            FUN_000148a4(uVar4);
            iVar12 = iVar12 + 1;
            puVar13 = puVar13 + 1;
          } while (iVar12 < (int)(uint)(ushort)(&DAT_0001c5ce)[param_1 * 0x13a]);
        }
        uVar17 = iVar9 + 1U & 1;
      }
    }
    iVar9 = param_1 * 0x274;
    if (*(char *)(iVar9 + 0x1c58c) == '\x01') {
      if ((&DAT_0001c492)[iVar9] == '\0') {
        bVar3 = (&DAT_0001c494)[iVar9];
        uVar4 = (&DAT_00018250)[bVar3];
        sVar7 = FUN_000148a4(bVar3);
        uVar8 = FUN_00014884(bVar3);
        FUN_00009e50(bVar3,0,0,1,uVar16,uVar17);
        FUN_00013ec4(bVar3,uVar4);
                    // WARNING: Subroutine does not return
        FUN_000177a0(uVar8 | sVar7 << 1 | 0x300,0xff);
      }
    }
    else if ((&DAT_0001c492)[iVar9] == '\x01') {
      if (DAT_0001841c == '\0') {
        FUN_0001089c();
      }
    }
    else if ((&DAT_0001c492)[iVar9] == '\0') {
      bVar3 = (&DAT_0001c494)[iVar9];
      if (*(char *)(iVar9 + 0x1c5a9) != '\0') {
        uVar8 = FUN_00014884(bVar3);
        sVar7 = FUN_000148a4((&DAT_0001c494)[iVar9]);
                    // WARNING: Subroutine does not return
        FUN_000177c0(uVar8 | sVar7 << 1 | 0x2140,(&DAT_0001c448)[param_1 * 0x9d]);
      }
      if ((&DAT_0001b520)[bVar3] == '\0') {
        (&DAT_0001c49a)[param_1 * 0x13a] = (&DAT_00018250)[bVar3];
      }
      uVar16 = *(uint *)(iVar9 + 0x1c4ac);
      uVar1 = (&DAT_0001c494)[iVar9];
      uVar4 = (&DAT_0001c49a)[param_1 * 0x13a];
      uVar5 = (&DAT_0001c496)[param_1 * 0x13a];
      uVar6 = (&DAT_0001c498)[param_1 * 0x13a];
      sVar7 = FUN_000148a4(uVar1);
      uVar8 = FUN_00014884(uVar1);
      FUN_00009e50(uVar1,uVar5,uVar6,0);
      FUN_00013ec4(uVar1,uVar4);
                    // WARNING: Subroutine does not return
      FUN_000177a0(uVar8 | sVar7 << 1 | 0x300,(uVar16 & 0xff) << 8 | 0xff);
    }
  }
  else if (*(char *)(iVar9 * 0x274 + 0x1c580) != '\x01') {
    iStackY_b0 = 0;
    if (0 < DAT_00018034) {
      iVar11 = 0;
      do {
        if (*(int *)(puVar14 + 0x134) == iVar9) {
          if (puVar14[0x130] != (&DAT_0001c570)[iVar12]) {
            halt_baddata();
          }
          if (puVar14[0x130] == '\0') {
            halt_baddata();
          }
          if ((byte)puVar14[0x54] < 0x18) {
            uStackY_a4 = uStackY_a4 | 1 << ((byte)puVar14[0x54] & 0x1f);
          }
          else {
            uVar16 = uVar16 | 1 << ((byte)puVar14[0x54] - 0x18 & 0x1f);
          }
          if ((*(short *)(puVar14 + 0x18e) != 0) && (iVar15 = 0, *(short *)(puVar14 + 0x18e) != 0))
          {
            puVar10 = (ushort *)((int)&DAT_0001c5bc + iVar11);
            do {
              uVar8 = *puVar10;
              if (uVar8 < 0x18) {
                uStackY_a4 = uStackY_a4 | 1 << (uVar8 & 0x1f);
              }
              else {
                uVar16 = uVar16 | 1 << (uVar8 - 0x18 & 0x1f);
              }
              iVar15 = iVar15 + 1;
              puVar10 = puVar10 + 1;
            } while (iVar15 < (int)(uint)*(ushort *)((int)&DAT_0001c5ce + iVar11));
          }
        }
        puVar14 = puVar14 + 0x274;
        iVar11 = iVar11 + 0x274;
        iStackY_b0 = iStackY_b0 + 1;
      } while (iStackY_b0 < DAT_00018034);
    }
    iVar9 = iVar9 * 0x274;
    *(undefined1 *)(iVar9 + 0x1c580) = 1;
    *(uint *)(iVar9 + 0x1c584) = uStackY_a4;
    *(uint *)(iVar9 + 0x1c588) = uVar16;
    if (*(char *)(iVar9 + 0x1c58c) == '\x01') {
      iStackY_b0 = 0;
      if (0 < DAT_00018034) {
        do {
          iVar9 = iStackY_b0 + 1;
          if ((&DAT_0001c574)[iStackY_b0 * 0x9d] == (&DAT_0001c574)[param_1 * 0x9d]) {
            if ((&DAT_0001b520)[(byte)(&DAT_0001c494)[param_1 * 0x274]] == '\0') {
              (&DAT_0001c49a)[iStackY_b0 * 0x13a] =
                   (&DAT_00018250)[(byte)(&DAT_0001c494)[param_1 * 0x274]];
            }
            uVar1 = (&DAT_0001c494)[iStackY_b0 * 0x274];
            uVar4 = (&DAT_0001c49a)[iStackY_b0 * 0x13a];
            sVar7 = FUN_000148a4(uVar1);
            uVar8 = FUN_00014884(uVar1);
            FUN_00009e50(uVar1,0,0,1,uVar16,uVar17,uVar18);
            FUN_00013ec4(uVar1,uVar4);
                    // WARNING: Subroutine does not return
            FUN_000177a0(uVar8 | sVar7 << 1 | 0x300,0xff);
          }
          iStackY_b0 = iVar9;
        } while (iVar9 < DAT_00018034);
      }
    }
    else {
      iStackY_b0 = 0;
      if (0 < DAT_00018034) {
        do {
          iVar9 = iStackY_b0 * 0x274;
          iVar12 = iStackY_b0 + 1;
          if ((&DAT_0001c574)[iStackY_b0 * 0x9d] == (&DAT_0001c574)[param_1 * 0x9d]) {
            if (*(char *)(param_1 * 0x274 + 0x1c5a9) != '\0') {
              uVar8 = FUN_00014884((&DAT_0001c494)[iVar9]);
              sVar7 = FUN_000148a4((&DAT_0001c494)[iVar9]);
                    // WARNING: Subroutine does not return
              FUN_000177c0(uVar8 | sVar7 << 1 | 0x2140,(&DAT_0001c448)[iStackY_b0 * 0x9d]);
            }
            if ((&DAT_0001b520)[(byte)(&DAT_0001c494)[param_1 * 0x274]] == '\0') {
              (&DAT_0001c49a)[param_1 * 0x13a] =
                   (&DAT_00018250)[(byte)(&DAT_0001c494)[param_1 * 0x274]];
            }
            uVar16 = *(uint *)(iVar9 + 0x1c4ac);
            uVar1 = (&DAT_0001c494)[iVar9];
            uVar4 = (&DAT_0001c49a)[param_1 * 0x13a];
            uVar5 = (&DAT_0001c496)[iStackY_b0 * 0x13a];
            uVar6 = (&DAT_0001c498)[iStackY_b0 * 0x13a];
            sVar7 = FUN_000148a4(uVar1);
            uVar8 = FUN_00014884(uVar1);
            FUN_00009e50(uVar1,uVar5,uVar6,0);
            FUN_00013ec4(uVar1,uVar4);
                    // WARNING: Subroutine does not return
            FUN_000177a0(uVar8 | sVar7 << 1 | 0x300,(uVar16 & 0xff) << 8 | 0xff);
          }
          iStackY_b0 = iVar12;
        } while (iVar12 < DAT_00018034);
      }
    }
    if (*(char *)(param_1 * 0x274 + 0x1c5a9) == '\0') {
      if (uStackY_a4 != 0) {
        FUN_000177b0(&DAT_00001500,uStackY_a4);
      }
      if (uVar16 != 0) {
        FUN_000177b0(&DAT_00001501,uVar16);
      }
      FUN_000176dc(0x28);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000f9ac(uint param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  
  uVar1 = param_1;
  if (0x3f < (int)param_1) {
    uVar4 = 0;
    uVar1 = 0xffffffff;
    if (0 < DAT_00018034) {
      puVar2 = &DAT_0001c440;
      do {
        if (puVar2[0x50] == '\x01') {
          if (puVar2[0x51] == '\x02') {
            uVar1 = *(uint *)(puVar2 + 0x70);
          }
          else {
            uVar1 = (uint)(byte)puVar2[0x54];
          }
          if ((uVar1 == (param_1 & 0x3f)) && (uVar1 = uVar4, puVar2[0x52] == '\0')) break;
        }
        uVar4 = uVar4 + 1;
        puVar2 = puVar2 + 0x274;
        uVar1 = 0xffffffff;
      } while ((int)uVar4 < DAT_00018034);
    }
  }
  if (-1 < (int)uVar1) {
    puVar3 = &DAT_0001c574;
    iVar5 = 0;
    if ((&DAT_0001c574)[uVar1 * 0x9d] == uVar1) {
      if (0 < DAT_00018034) {
        do {
          if (uVar1 == *puVar3) {
            FUN_00002fcc(iVar5,param_2);
          }
          iVar5 = iVar5 + 1;
          puVar3 = puVar3 + 0x9d;
        } while (iVar5 < DAT_00018034);
      }
    }
    else {
      FUN_00002fcc(uVar1,param_2);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000fb38(uint param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  bool bVar3;
  uint uVar4;
  int *piVar5;
  
  uVar4 = param_1 + param_2;
  bVar3 = false;
  if ((uVar4 < 0x200001) && (0x500f < param_1)) {
    puVar2 = &DAT_00017fcc;
    piVar5 = &DAT_00017fd4;
    do {
      if ((!bVar3) && (*piVar5 != 0)) {
        uVar1 = (*puVar2 - *piVar5) + 1;
        if (((param_1 <= uVar1) && (uVar1 < uVar4)) || ((uVar1 <= param_1 && (param_1 <= *puVar2))))
        {
          bVar3 = true;
        }
        if ((param_1 <= uVar1) && (*puVar2 < uVar4)) {
          bVar3 = true;
        }
      }
      puVar2 = puVar2 + 1;
      piVar5 = piVar5 + 1;
    } while ((int)puVar2 < 0x17fd4);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000fccc(int param_1)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  int iVar5;
  short sVar6;
  ushort uVar7;
  uint *puVar8;
  int iVar9;
  ushort *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  
  iVar13 = param_1 * 0x274;
  iVar11 = (&DAT_0001c574)[param_1 * 0x9d];
  if (iVar11 == -1) {
    if ((*(char *)(iVar13 + 0x1c58c) != '\0') &&
       (*(undefined1 *)(iVar13 + 0x1c58c) = 0, *(char *)(iVar13 + 0x1c580) != '\0')) {
      if ((&DAT_0001c492)[iVar13] != '\x01') {
        if ((((&DAT_0001b520)[(byte)(&DAT_0001c494)[iVar13]] == '\x01') &&
            (sVar6 = (&DAT_0001c5ce)[param_1 * 0x13a],
            (&DAT_0001b520)[(byte)(&DAT_0001c494)[iVar13]] = '\0', sVar6 != 0)) &&
           (uVar15 = (uint)(ushort)(&DAT_0001c5ce)[param_1 * 0x13a], uVar15 != 0)) {
          puVar10 = &DAT_0001c5bc + param_1 * 0x13a;
          do {
            uVar7 = *puVar10;
            puVar10 = puVar10 + 1;
            uVar15 = uVar15 - 1;
            (&DAT_0001b520)[uVar7] = 0;
          } while (uVar15 != 0);
        }
        iVar11 = param_1 * 0x274;
        uVar4 = (&DAT_00018250)[(byte)(&DAT_0001c494)[iVar11]];
        (&DAT_0001c49a)[param_1 * 0x13a] = uVar4;
        uVar15 = *(uint *)(iVar11 + 0x1c4ac);
        uVar1 = (&DAT_0001c494)[iVar11];
        uVar2 = (&DAT_0001c496)[param_1 * 0x13a];
        uVar3 = (&DAT_0001c498)[param_1 * 0x13a];
        sVar6 = FUN_000148a4(uVar1);
        uVar7 = FUN_00014884(uVar1);
        FUN_00009e50(uVar1,uVar2,uVar3,0);
        FUN_00013ec4(uVar1,uVar4);
                    // WARNING: Subroutine does not return
        FUN_000177a0(uVar7 | sVar6 << 1 | 0x300,(uVar15 & 0xff) << 8 | 0xff);
      }
      FUN_0001089c();
    }
  }
  else {
    iVar13 = iVar11 * 0x274;
    if ((*(char *)(iVar13 + 0x1c58c) != '\0') &&
       (*(undefined1 *)(iVar13 + 0x1c58c) = 0, *(char *)(iVar13 + 0x1c580) == '\x01')) {
      if (0 < DAT_00018034) {
        iVar12 = 0;
        iVar13 = 0;
        do {
          iVar5 = iVar12 * 0x20 + iVar13 * 0x1d;
          iVar14 = iVar5 * 4;
          iVar9 = iVar13 + 1;
          if ((&DAT_0001c574)[iVar5] == (&DAT_0001c574)[param_1 * 0x9d]) {
            if ((((&DAT_0001b520)[(byte)(&DAT_0001c494)[iVar14]] == '\x01') &&
                (sVar6 = (&DAT_0001c5ce)[param_1 * 0x13a],
                (&DAT_0001b520)[(byte)(&DAT_0001c494)[iVar14]] = '\0', sVar6 != 0)) &&
               ((&DAT_0001c5ce)[param_1 * 0x13a] != 0)) {
              uVar15 = (uint)(ushort)(&DAT_0001c5ce)[param_1 * 0x13a];
              do {
                puVar10 = (ushort *)((int)&DAT_0001c5bc + iVar14);
                iVar14 = iVar14 + 2;
                uVar15 = uVar15 - 1;
                (&DAT_0001b520)[*puVar10] = 0;
              } while (uVar15 != 0);
            }
            iVar11 = iVar12 * 0x20 + iVar13 * 0x1d;
            iVar13 = iVar11 * 4;
            uVar3 = (&DAT_00018250)[(byte)(&DAT_0001c494)[iVar13]];
            (&DAT_0001c49a)[iVar11 * 2] = uVar3;
            puVar8 = (uint *)(iVar13 + 0x1c4ac);
            uVar1 = (&DAT_0001c494)[iVar13];
            uVar15 = *puVar8;
            uVar2 = (&DAT_0001c496)[iVar11 * 2];
            iVar11 = (int)(short)(&DAT_0001c498)[iVar11 * 2];
            sVar6 = FUN_000148a4(uVar1);
            uVar7 = FUN_00014884(uVar1);
            FUN_00009e50(uVar1,uVar2,iVar11,0,iVar11,puVar8);
            FUN_00013ec4(uVar1,uVar3);
                    // WARNING: Subroutine does not return
            FUN_000177a0(uVar7 | sVar6 << 1 | 0x300,(uVar15 & 0xff) << 8 | 0xff);
          }
          iVar12 = iVar9 * 4;
          iVar13 = iVar9;
        } while (iVar9 < DAT_00018034);
      }
      iVar11 = iVar11 * 0x274;
      if (*(char *)(iVar11 + 0x1c5a9) == '\0') {
        iVar13 = *(int *)(iVar11 + 0x1c588);
        if (*(int *)(iVar11 + 0x1c584) != 0) {
          FUN_000177b0(&DAT_00001500);
        }
        if (iVar13 != 0) {
          FUN_000177b0(&DAT_00001501,iVar13);
        }
        FUN_000176dc(0x28);
      }
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00010600(int param_1,int param_2,uint param_3)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = 0;
  if (DAT_00018034 <= param_1) {
    lVar1 = -1;
  }
  if ((((lVar1 == 0) && (iVar2 = param_1 * 0x274, (&DAT_0001c5a8)[iVar2] != '\0')) &&
      ((&DAT_0001c490)[iVar2] != '\0')) &&
     (((&DAT_0001c56f)[iVar2] != '\x02' && ((&DAT_0001c492)[iVar2] == '\0')))) {
    if (*(char *)(iVar2 + 0x1c580) == '\0') {
      if ((ulonglong)((longlong)(int)param_3 * (longlong)((param_2 + 1) * 2)) <=
          (ulonglong)(longlong)(int)(&DAT_0001c4c4)[param_1 * 0x9d]) {
        FUN_00015944();
        (&DAT_0001c574)[param_1 * 0x9d] = param_1;
        (&DAT_0001c56f)[iVar2] = 1;
        *(uint *)(iVar2 + 0x1c578) = param_2 * param_3;
        *(uint *)(iVar2 + 0x1c57c) = param_3;
        *(uint *)(iVar2 + 0x1c458) = param_3;
        *(undefined4 *)(iVar2 + 0x1c690) = 1;
        if (param_3 < (uint)(&DAT_0001c66c)[param_1 * 0x9d]) {
          (&DAT_0001c66c)[param_1 * 0x9d] = param_3;
        }
                    // WARNING: Subroutine does not return
        FUN_00015934();
      }
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00010768(int param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  undefined4 auStack_20 [8];
  
  if ((DAT_00018400 == 0) && ((&DAT_0001c5a8)[param_1 * 0x274] != '\0')) {
    uVar1 = (&DAT_0001c4c4)[param_1 * 0x9d];
    if ((0x7ff < uVar1) && ((uVar1 & 0x7ff) == 0)) {
      if ((param_3 == 0) || (param_3 == 2)) {
        DAT_00018415 = 1;
        uVar1 = uVar1 << 1;
      }
      else {
        DAT_00018415 = 0;
      }
      FUN_0001752c(auStack_20);
      DAT_00018400 = FUN_000174f8(0,uVar1,0);
                    // WARNING: Subroutine does not return
      FUN_00017534(auStack_20[0]);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0001089c(void)

{
  if (DAT_00018400 == 0) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  if (DAT_00018416 == '\x02') {
                    // WARNING: Subroutine does not return
    FUN_000177d0(10,1);
  }
                    // WARNING: Subroutine does not return
  FUN_000177d0(10,0);
}



// WARNING: Control flow encountered bad instruction data

void FUN_00010990(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  
  if (DAT_00018416 == '\0') {
    if (param_3 >> 9 != 0) {
      iVar4 = 0;
      uVar9 = 0;
      do {
        puVar7 = (undefined4 *)(iVar4 + (int)param_2);
        puVar6 = param_1 + uVar9 * 0x80;
        if ((((uint)puVar6 | (uint)puVar7) & 3) != 0) {
                    // WARNING: Bad instruction - Truncating control flow here
          halt_baddata();
        }
        puVar5 = puVar6 + 0x80;
        uVar8 = uVar9 + 1;
        do {
          uVar1 = puVar6[1];
          uVar2 = puVar6[2];
          uVar3 = puVar6[3];
          *puVar7 = *puVar6;
          puVar7[1] = uVar1;
          puVar7[2] = uVar2;
          puVar7[3] = uVar3;
          puVar6 = puVar6 + 4;
          puVar7 = puVar7 + 4;
        } while (puVar6 != puVar5);
        puVar5 = (undefined4 *)((int)param_2 + iVar4 + 0x200);
        puVar7 = param_1 + uVar9 * 0x80;
        puVar6 = puVar7 + 0x80;
        if ((((uint)puVar7 | (uint)puVar5) & 3) != 0) {
                    // WARNING: Bad instruction - Truncating control flow here
          halt_baddata();
        }
        do {
          uVar1 = puVar7[1];
          uVar2 = puVar7[2];
          uVar3 = puVar7[3];
          *puVar5 = *puVar7;
          puVar5[1] = uVar1;
          puVar5[2] = uVar2;
          puVar5[3] = uVar3;
          puVar7 = puVar7 + 4;
          puVar5 = puVar5 + 4;
        } while (puVar7 != puVar6);
        iVar4 = uVar8 * 0x400;
        uVar9 = uVar8;
      } while (uVar8 < param_3 >> 9);
    }
  }
  else if (DAT_00018416 == '\x02') {
    uVar9 = 0;
    if (param_3 >> 9 != 0) {
      iVar4 = 0;
      do {
        puVar7 = (undefined4 *)(iVar4 + (int)param_2);
        puVar6 = param_1 + uVar9 * 0x80;
        if ((((uint)puVar6 | (uint)puVar7) & 3) != 0) {
                    // WARNING: Bad instruction - Truncating control flow here
          halt_baddata();
        }
        puVar5 = puVar6 + 0x80;
        uVar9 = uVar9 + 1;
        do {
          uVar1 = puVar6[1];
          uVar2 = puVar6[2];
          uVar3 = puVar6[3];
          *puVar7 = *puVar6;
          puVar7[1] = uVar1;
          puVar7[2] = uVar2;
          puVar7[3] = uVar3;
          puVar6 = puVar6 + 4;
          puVar7 = puVar7 + 4;
        } while (puVar6 != puVar5);
        FUN_00017648((int)param_2 + iVar4 + 0x200,0,0x200);
        iVar4 = uVar9 * 0x400;
      } while (uVar9 < param_3 >> 9);
    }
  }
  else if (DAT_00018417 == '\x01') {
    FUN_00017120(param_1,param_2,param_3 >> 10);
  }
  else {
    uVar9 = 0;
    if (param_3 >> 6 != 0) {
      do {
        uVar1 = param_1[1];
        uVar9 = uVar9 + 1;
        *param_2 = *param_1;
        param_2[1] = uVar1;
        uVar1 = param_1[3];
        param_2[2] = param_1[2];
        param_2[3] = uVar1;
        uVar1 = param_1[5];
        param_2[4] = param_1[4];
        param_2[5] = uVar1;
        uVar1 = param_1[7];
        param_2[6] = param_1[6];
        param_2[7] = uVar1;
        uVar1 = param_1[9];
        param_2[8] = param_1[8];
        param_2[9] = uVar1;
        uVar1 = param_1[0xb];
        param_2[10] = param_1[10];
        param_2[0xb] = uVar1;
        uVar1 = param_1[0xd];
        puVar6 = param_1 + 0xe;
        param_2[0xc] = param_1[0xc];
        param_2[0xd] = uVar1;
        uVar1 = param_1[0xf];
        param_1 = param_1 + 0x10;
        param_2[0xe] = *puVar6;
        param_2[0xf] = uVar1;
        param_2 = param_2 + 0x10;
      } while (uVar9 < param_3 >> 6);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00010d44(longlong param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = 0;
  iVar5 = (int)param_1;
  uVar1 = *(uint *)(iVar5 * 0x274 + 0x1c594);
  puVar2 = (undefined4 *)(&DAT_0001c44c)[iVar5 * 0x9d];
  uVar3 = uVar1 >> 2;
  if (uVar3 != 0) {
    do {
      *puVar2 = 0;
      uVar4 = uVar4 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar4 < uVar3);
  }
  if (param_1 != -1) {
    if ((&DAT_0001c492)[iVar5 * 0x274] != '\x01') {
                    // WARNING: Subroutine does not return
      FUN_0001138c(param_1,(&DAT_0001c44c)[iVar5 * 0x9d],uVar1,0);
    }
    if (((DAT_00018416 == '\0') || (DAT_00018416 == '\x02')) && (DAT_00018408 != DAT_00018400)) {
      DAT_00018408 = DAT_00018400 + (DAT_00018404 >> 1);
    }
    FUN_00010990((&DAT_0001c44c)[iVar5 * 0x9d],DAT_00018408,*(undefined4 *)(iVar5 * 0x274 + 0x1c594)
                );
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00010ebc(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (uint)param_1 & 0x7fff;
  iVar2 = uVar1 * 0x274;
  DAT_0001b4d8 = (&DAT_0001c49c)[uVar1 * 0x9d];
  DAT_0001b4d0 = (&DAT_0001c448)[uVar1 * 0x9d];
  DAT_0001b4c0 = uVar1;
  DAT_0001b4c4 = param_2;
  DAT_0001b4c8 = param_3;
  DAT_0001b4cc = param_4;
  if ((DAT_00018424 == '\x01') && (DAT_00018425 != '\0')) {
    if (param_1 < 0x8000) {
      DAT_0001b4d4 = *(int *)(iVar2 + 0x1c68c) + 1;
      *(int *)(iVar2 + 0x1c68c) = DAT_0001b4d4;
      FUN_000175a4(&DAT_0001be10,0,0,&DAT_0001b4c0,0);
      if (DAT_0001bdd0 == 1) {
        *(undefined1 *)(iVar2 + 0x1c5dc) = 1;
      }
      else {
        *(undefined1 *)(iVar2 + 0x1c5dc) = 0;
      }
      if (DAT_0001bde8 == 1) {
        iVar2 = uVar1 * 0x274;
        *(undefined1 *)(iVar2 + 0x1c698) = DAT_0001bdec;
        *(undefined4 *)(iVar2 + 0x1c69c) = DAT_0001bdf0;
        *(undefined4 *)(iVar2 + 0x1c6a0) = DAT_0001bdf4;
      }
      if (DAT_0001bdd8 == 1) {
        iVar2 = uVar1 * 0x274;
        *(int *)(iVar2 + 0x1c6a4) = DAT_0001bddc + 1;
        *(undefined4 *)(iVar2 + 0x1c6a8) = DAT_0001bde0;
        *(undefined4 *)(iVar2 + 0x1c6ac) = DAT_0001bde4;
      }
      FUN_00017720(DAT_00018058);
    }
    else {
      DAT_0001b4c0 = 999;
      FUN_000175a4(&DAT_0001be10,0,0,&DAT_0001b4c0,0);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00011150(int param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  undefined4 auStack_20 [8];
  
  uVar4 = (SUB164(SEXT416(param_1) * SEXT416(0x2aaaaaab),8) >> 2) - (param_1 >> 0x1f);
  puVar6 = (uint *)(uVar4 * 4 + 0x17fac);
  *puVar6 = *puVar6 | 1 << (param_1 + uVar4 * -0x18 & 0x1f);
  lVar3 = FUN_0001752c(auStack_20);
  uVar5 = uVar4 & 0xffff | 0x1800;
  uVar2 = FUN_000177b8(uVar5);
  puVar7 = (uint *)(uVar4 * 4 + 0x17f7c);
  uVar1 = *puVar7;
  FUN_000177b0(uVar5,uVar2 & ~uVar1 | *puVar6 & uVar1);
  uVar4 = uVar4 & 0xffff | 0x1a00;
  uVar2 = FUN_000177b8(uVar4);
  uVar1 = *puVar7;
  FUN_000177b0(uVar4,uVar2 & ~uVar1 | *puVar6 & uVar1);
  if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
    FUN_00017534(auStack_20[0]);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0001126c(int param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  undefined4 auStack_20 [8];
  
  uVar4 = (SUB164(SEXT416(param_1) * SEXT416(0x2aaaaaab),8) >> 2) - (param_1 >> 0x1f);
  puVar6 = (uint *)(uVar4 * 4 + 0x17fac);
  *puVar6 = *puVar6 & ~(1 << (param_1 + uVar4 * -0x18 & 0x1f));
  lVar3 = FUN_0001752c(auStack_20);
  uVar5 = uVar4 & 0xffff | 0x1800;
  uVar2 = FUN_000177b8(uVar5);
  puVar7 = (uint *)(uVar4 * 4 + 0x17f7c);
  uVar1 = *puVar7;
  FUN_000177b0(uVar5,uVar2 & ~uVar1 | *puVar6 & uVar1);
  uVar4 = uVar4 & 0xffff | 0x1a00;
  uVar2 = FUN_000177b8(uVar4);
  uVar1 = *puVar7;
  FUN_000177b0(uVar4,uVar2 & ~uVar1 | *puVar6 & uVar1);
  if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
    FUN_00017534(auStack_20[0]);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0001138c(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  
  iVar1 = param_1 * 0x274;
  piVar2 = (int *)(iVar1 + 0x1c614);
  iVar5 = *(int *)(iVar1 + 0x1c620);
  *(char *)(iVar1 + 0x1c60c) = (char)param_1;
  iVar3 = iVar5 * 4 + iVar1;
  *(undefined4 *)(&DAT_0001c5e8 + iVar3) = param_2;
  iVar5 = iVar5 + iVar1;
  *piVar2 = *piVar2 + param_3;
  *(uint *)(iVar3 + 0x1c5f0) = param_3;
  *(int *)(iVar3 + 0x1c618) = param_4;
  *(undefined1 *)(iVar5 + 0x1c608) = 1;
  *(undefined4 *)(iVar1 + 0x1c630) = param_2;
  *(uint *)(iVar1 + 0x1c634) = param_3;
  puVar4 = (uint *)(iVar3 + 0x1c63c);
  *(int *)(iVar1 + 0x1c638) = *piVar2;
  *puVar4 = param_3;
  *(undefined1 *)(iVar5 + 0x1c60a) = (&DAT_0001c492)[iVar1];
  if (*(int *)(iVar3 + 0x1c618) == 3) {
    *(undefined1 *)(iVar5 + 0x1c644) = 3;
  }
  else if (*(char *)(iVar1 + 0x1c660) == '\0') {
    *(undefined1 *)(iVar5 + 0x1c644) = 2;
    if ((&DAT_0001c56f)[iVar1] == '\0') {
      *puVar4 = *puVar4 >> 1;
    }
  }
  else {
    *(undefined1 *)(iVar5 + 0x1c644) = 0;
  }
  *(undefined1 *)(param_1 * 0x274 + 0x1c660) = 1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000114d4(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 * 0x274;
  *(undefined1 *)(iVar1 + 0x1c608) = 0;
  *(undefined1 *)(iVar1 + 0x1c609) = 0;
  *(undefined4 *)(iVar1 + 0x1c620) = 0;
  (&DAT_0001c624)[param_1 * 0x9d] = 0;
  *(undefined4 *)(iVar1 + 0x1c5f8) = (&DAT_0001c448)[param_1 * 0x9d];
  *(undefined4 *)(iVar1 + 0x1c5fc) = (&DAT_0001c66c)[param_1 * 0x9d];
  *(undefined4 *)(iVar1 + 0x1c610) = 0;
  *(undefined4 *)(iVar1 + 0x1c628) = 0;
  *(undefined4 *)(iVar1 + 0x1c62c) = 0;
  *(undefined4 *)(iVar1 + 0x1c614) = 0;
  (&DAT_0001c668)[iVar1] = 0;
  (&DAT_0001c669)[iVar1] = 0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0001154c(void)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = FUN_000177f0(1,0);
  if ((lVar1 != 0) && (DAT_0001b011 == '\x01')) {
    if ((&DAT_0001c490)
        [(((uint)DAT_0001b010 * 0x28 - (uint)DAT_0001b010) * 4 + (uint)DAT_0001b010) * 4] == '\x01')
    {
      if (DAT_0001b008 < DAT_0001b00c) {
        DAT_0001b00c = DAT_0001b008;
      }
      FUN_000177e0(1,0,DAT_0001b000,DAT_0001b004);
      DAT_0001b008 = DAT_0001b008 - DAT_0001b00c;
      DAT_0001b004 = DAT_0001b004 + DAT_0001b00c;
      DAT_0001b000 = DAT_0001b000 + DAT_0001b00c;
      if (DAT_0001b02c == '\x01') {
        do {
          lVar1 = FUN_000177f0(1,0);
        } while (lVar1 == 0);
      }
      else {
        FUN_000177f0(1,1);
      }
      if (DAT_0001b008 == 0) {
        DAT_0001b011 = '\0';
        iVar2 = ((uint)DAT_0001b010 * 0x28 - (uint)DAT_0001b010) * 4 + (uint)DAT_0001b010;
        FUN_000161ac(DAT_0001b010,(&DAT_0001c624)[iVar2],&DAT_0001c5e8 + iVar2 * 4);
      }
    }
    else {
      DAT_0001b011 = '\0';
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000116e8(uint param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  
  DAT_000183d0 = param_1;
  lVar2 = FUN_0001154c();
  if (((DAT_0001b02c != '\x01') || (lVar2 != 2)) && (iVar4 = 0, lVar2 != 1)) {
    DAT_0001b013 = '\0';
    if (0 < DAT_00018034) {
      iVar7 = 0x1c608;
      iVar6 = 0x1c60a;
      puVar5 = &DAT_0001c5e8;
      do {
        if (puVar5[-0x158] == '\x01') {
          iVar1 = *(int *)(puVar5 + 0x3c);
          if ((*(char *)(iVar6 + iVar1) == '\0') || (*(char *)(iVar6 + iVar1) == '\x7f')) {
            if (*(char *)(iVar7 + iVar1) == '\x01') {
              lVar2 = FUN_00011900(iVar4,iVar1,puVar5);
              if (lVar2 == 1) {
                halt_baddata();
              }
            }
            else if (puVar5[-0x156] == '\0') {
              FUN_00012030(iVar4,puVar5);
            }
          }
        }
        iVar6 = iVar6 + 0x274;
        iVar7 = iVar7 + 0x274;
        iVar4 = iVar4 + 1;
        puVar5 = puVar5 + 0x274;
      } while (iVar4 < DAT_00018034);
    }
    if ((DAT_0001b013 == '\0') && (DAT_0001b4bc == '\x01')) {
      uVar3 = DAT_0001b4b8;
      if ((DAT_0001b02c == '\x01') && (DAT_000183d0 < DAT_0001b4b8)) {
        uVar3 = DAT_000183d0;
      }
      FUN_000177f0(1,1);
      FUN_000177e0(1,0,DAT_0001b4b4,DAT_0001b4b0);
      DAT_0001b4b4 = DAT_0001b4b4 + uVar3;
      DAT_0001b4b0 = DAT_0001b4b0 + uVar3;
      DAT_0001b4b8 = DAT_0001b4b8 - uVar3;
      if (DAT_0001b4b8 == 0) {
        DAT_0001b4bc = '\0';
      }
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00011900(undefined8 param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  cVar1 = *(char *)(param_3 + param_2 + 0x5c);
  if (cVar1 == '\x03') {
    lVar3 = FUN_00016024();
    if (lVar3 == 0) {
      iVar2 = FUN_0001154c();
      if (iVar2 - 1U < 2) {
        halt_baddata();
      }
      FUN_000161ac(param_1,param_2,param_3);
      halt_baddata();
    }
  }
  else if ((cVar1 == '\x02') && (lVar3 = FUN_00011d30(param_1,param_2,param_3), lVar3 == 0)) {
    FUN_0001154c();
    halt_baddata();
  }
  if ((*(char *)(param_3 + 0x5c + param_2) == '\0') &&
     (lVar3 = FUN_000160ac(param_1,param_2,param_3), lVar3 == 0)) {
    FUN_0001154c();
  }
  else if (*(char *)(param_3 + 0x5c + param_2) == '\x01') {
    FUN_00012628(param_1,param_2,param_3);
    FUN_0001154c();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00011a98(undefined8 param_1,int param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  undefined *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  
  iVar1 = *(int *)(param_3 + 0x60);
  iVar9 = (int)param_1;
  if (*(int *)(param_3 + 0x74) == 1) {
    *(undefined4 *)(param_3 + 0x28) = 1;
    *(undefined1 *)(param_2 + iVar9 * 0x274 + 0x1c608) = 0;
  }
  iVar5 = iVar9 * 0x274;
  iVar8 = param_2 * 4;
  if ((&DAT_0001c56f)[iVar5] != '\0') {
    bVar2 = false;
    (&DAT_0001c669)[iVar5] = 1;
    (&DAT_0001c668)[iVar5] = (&DAT_0001c668)[iVar5] + '\x01';
    if (0 < DAT_00018034) {
      pcVar7 = &DAT_0001c668;
      iVar6 = DAT_00018034;
      do {
        if (((&DAT_0001c574)[iVar9 * 0x9d] == *(int *)(pcVar7 + -0xf4)) &&
           ((&DAT_0001c668)[iVar5] != *pcVar7)) {
          (&DAT_0001c669)[iVar5] = 1;
          bVar2 = true;
        }
        iVar6 = iVar6 + -1;
        pcVar7 = pcVar7 + 0x274;
      } while (iVar6 != 0);
    }
    if ((!bVar2) && (0 < DAT_00018034)) {
      puVar3 = &DAT_0001c440;
      iVar5 = DAT_00018034;
      do {
        if ((&DAT_0001c574)[iVar9 * 0x9d] == *(int *)(puVar3 + 0x134)) {
          puVar3[0x229] = 0;
          puVar3[0x228] = 0;
        }
        iVar5 = iVar5 + -1;
        puVar3 = puVar3 + 0x274;
      } while (iVar5 != 0);
    }
  }
  iVar5 = *(int *)(param_3 + iVar8);
  *(int *)(param_3 + iVar8) = iVar5 + iVar1;
  piVar4 = (int *)(param_3 + 8 + iVar8);
  *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + iVar1;
  *(int *)(param_3 + 0x2c) = *(int *)(param_3 + 0x2c) - iVar1;
  *piVar4 = *piVar4 - iVar1;
  iVar6 = *(int *)(param_3 + 0x28) + 1;
  *(int *)(param_3 + 0x28) = iVar6;
  if ((*piVar4 == 0) && (iVar6 != 2)) {
    *(undefined1 *)(param_2 + iVar9 * 0x274 + 0x1c608) = 0;
    *(uint *)(param_3 + 0x3c) = *(int *)(param_3 + 0x3c) + 1U & 1;
  }
  else {
    *(undefined1 *)(param_3 + param_2 + 0x5c) = 0;
    if ((*(int *)(param_3 + iVar8 + 0x30) == 1) && (*(int *)(param_3 + 0x74) != 1)) {
      if (DAT_0001b02c != '\x01') {
        FUN_000177f0(1,1);
      }
      FUN_00016bdc(param_1,iVar5,iVar1);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00011d30(undefined8 param_1,int param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  if (*(int *)(param_3 + 0x28) != 0) {
    halt_baddata();
  }
  *(undefined4 *)(param_3 + 0x74) = 0;
  lVar2 = FUN_00011efc();
  if (lVar2 == 1) {
    halt_baddata();
  }
  FUN_00015f40(param_2,param_3);
  iVar3 = param_2 * 4;
  iVar1 = *(int *)(param_3 + iVar3 + 0x30);
  if (iVar1 == 2) {
    if (*(int *)(param_3 + 0x2c) == *(int *)(param_3 + 0x60)) {
      FUN_00016d74(param_1,*(undefined4 *)(param_3 + iVar3));
      *(undefined1 *)(param_2 + (int)param_1 * 0x274 + 0x1c608) = 0;
      goto LAB_00011e58;
    }
  }
  else if (iVar1 == 1) {
    FUN_00016d2c(param_1,*(undefined4 *)(param_3 + iVar3));
    FUN_00016cd4(param_1,*(undefined4 *)(param_3 + iVar3),*(undefined4 *)(param_3 + 0x60));
    if (*(int *)(param_3 + 0x2c) == *(int *)(param_3 + 0x60)) {
      *(undefined4 *)(param_3 + 0x74) = 1;
    }
    goto LAB_00011e58;
  }
  FUN_00016d2c(param_1,*(undefined4 *)(param_3 + iVar3));
  FUN_00016cd4(param_1,*(undefined4 *)(param_3 + iVar3),*(undefined4 *)(param_3 + 0x60));
LAB_00011e58:
  DAT_0001b008 = *(uint *)(param_3 + 0x14);
  DAT_0001b00c = DAT_0001b008;
  if ((DAT_0001b02c == '\x01') && (DAT_000183d0 < DAT_0001b008)) {
    DAT_0001b00c = DAT_000183d0;
  }
  DAT_0001b013 = 1;
  DAT_0001b011 = 1;
  DAT_0001b010 = (char)param_1;
  DAT_0001b004 = *(undefined4 *)(param_3 + 0x10);
  DAT_0001b000 = *(undefined4 *)(param_3 + iVar3);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00011efc(int param_1)

{
  char *pcVar1;
  byte *pbVar2;
  int iVar3;
  
  if (((&DAT_0001c56f)[param_1 * 0x274] == '\x01') && (iVar3 = 0, 0 < DAT_00018034)) {
    pcVar1 = &DAT_0001c669;
    do {
      if ((((&DAT_0001c574)[param_1 * 0x9d] == *(int *)(pcVar1 + -0xf5)) && (*pcVar1 == '\0')) &&
         (iVar3 != param_1)) {
        halt_baddata();
      }
      iVar3 = iVar3 + 1;
      pcVar1 = pcVar1 + 0x274;
    } while (iVar3 < DAT_00018034);
  }
  if (((&DAT_0001c56f)[param_1 * 0x274] == '\x02') && (iVar3 = 0, 0 < DAT_00018034)) {
    pbVar2 = &DAT_0001c668;
    do {
      if (((&DAT_0001c574)[param_1 * 0x9d] == *(int *)(pbVar2 + -0xf4)) &&
         (*pbVar2 < (byte)(&DAT_0001c668)[param_1 * 0x274])) {
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
      iVar3 = iVar3 + 1;
      pbVar2 = pbVar2 + 0x274;
    } while (iVar3 < DAT_00018034);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00012030(int param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  
  uVar2 = FUN_00015e14();
  if (((*(int *)(param_2 + 0x28) == 2) || (uVar2 < *(uint *)(param_2 + 0x10))) ||
     (*(uint *)(param_2 + 0x10) + *(int *)(param_2 + 0x14) < uVar2)) {
    bVar1 = true;
  }
  else {
    bVar1 = (&DAT_0001c491)[param_1 * 0x274] != '\0';
  }
  if ((!bVar1) && (DAT_0001806c != param_1)) {
    if (*(int *)(&DAT_0001c440 + param_1 * 0x274) != 1) {
      uVar2 = SUB164(SEXT416((int)(uint)(byte)(&DAT_0001c494)[param_1 * 0x274]) *
                     SEXT416(0x2aaaaaab),8) >> 2;
      uVar2 = FUN_000177c8((uVar2 | ((uint)(byte)(&DAT_0001c494)[param_1 * 0x274] + uVar2 * -0x18) *
                                    2) & 0xffff | 0x2240);
      if ((*(int *)(param_2 + 0x44) == 0) && (*(uint *)(param_2 + 0x68) < uVar2)) {
        *(int *)(&DAT_0001c440 + param_1 * 0x274) = 1;
      }
      else if ((*(int *)(param_2 + 0x44) == 1) && (uVar2 < *(uint *)(param_2 + 0x68))) {
        *(undefined4 *)(&DAT_0001c440 + param_1 * 0x274) = 1;
      }
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00012200(int param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (DAT_0001806c != param_1) {
    iVar2 = param_1 * 0x274;
    iVar1 = *(int *)(param_3 + 0x44);
    uVar3 = SUB164(SEXT416((int)(uint)(byte)(&DAT_0001c494)[iVar2]) * SEXT416(0x2aaaaaab),8) >> 2;
    uVar3 = FUN_000177c8((uVar3 | ((uint)(byte)(&DAT_0001c494)[iVar2] + uVar3 * -0x18) * 2) & 0xffff
                         | 0x2240);
    if ((iVar1 == 0) && (*(uint *)(param_3 + 0x68) < uVar3)) {
      (&DAT_0001c668)[iVar2] = (&DAT_0001c668)[iVar2] + '\x01';
    }
    else {
      if (iVar1 != 1) {
        halt_baddata();
      }
      if (*(uint *)(param_3 + 0x68) <= uVar3) {
        halt_baddata();
      }
      (&DAT_0001c668)[param_1 * 0x274] = (&DAT_0001c668)[param_1 * 0x274] + '\x01';
    }
    FUN_000124b0(param_1,param_2,param_3);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00012374(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  
  *(uint *)(param_3 + 0x44) = *(int *)(param_3 + 0x44) + 1U & 1;
  if (*(int *)(param_3 + 0x6c) == 1) {
    param_2 = param_2 + 1 & 1;
  }
  uVar1 = *(uint *)(param_3 + param_2 * 4 + 0x54);
  if (((uVar1 != 0) && (uVar1 <= *(uint *)(param_3 + 0x40))) &&
     (*(char *)(param_1 * 0x274 + 0x1c444) == '\0')) {
    *(undefined4 *)(&DAT_0001c440 + param_1 * 0x274) = 1;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  piVar2 = (int *)(param_3 + 8 + param_2 * 4);
  if (*piVar2 < 0) {
    *piVar2 = 0;
  }
  if ((*piVar2 == 0) || (*(int *)(param_3 + 0x6c) == 1)) {
    if (*(int *)(param_3 + 0x6c) != 1) {
      *(undefined1 *)(param_2 + param_1 * 0x274 + 0x1c608) = 0;
    }
    *(uint *)(param_3 + 0x3c) = *(int *)(param_3 + 0x3c) + 1U & 1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000124b0(undefined8 param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  uVar1 = *(uint *)(param_3 + 0x14);
  iVar2 = *(int *)(param_3 + 0x44);
  uVar4 = *(uint *)(param_3 + 0x60);
  puVar5 = (undefined4 *)(param_3 + param_2 * 4);
  *(undefined4 *)(param_3 + 0x6c) = 0;
  iVar3 = *(int *)(param_3 + 100);
  FUN_00016d2c(param_1,*puVar5);
  if (iVar3 == 0) {
    FUN_00016cd4(param_1,*puVar5,uVar4);
  }
  if (*(uint *)(param_3 + 0x2c) <= *(uint *)(param_3 + 0x14) >> 1) {
    iVar3 = *(int *)(param_3 + param_2 * 4 + 0x30);
    if (iVar3 == 2) {
      if (uVar4 < 0x20) {
        uVar4 = 0x20;
      }
      FUN_00016d74(param_1,*puVar5,uVar4);
    }
    else if (iVar3 == 1) {
      *(undefined4 *)(param_3 + 0x6c) = 1;
    }
  }
  DAT_0001b00c = uVar4;
  DAT_0001b013 = 1;
  DAT_0001b008 = DAT_0001b00c;
  DAT_0001b000 = *(undefined4 *)(param_3 + param_2 * 4);
  DAT_0001b004 = *(int *)(param_3 + 0x10) + iVar2 * (uVar1 >> 1);
  if ((DAT_0001b02c == '\x01') && (DAT_000183d0 < DAT_0001b00c)) {
    DAT_0001b00c = DAT_000183d0;
  }
  DAT_0001b010 = (char)param_1;
  DAT_0001b011 = 1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00012628(undefined8 param_1,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = param_3[5];
  iVar2 = param_3[0x11];
  uVar3 = param_3[0x19];
  iVar4 = param_3[0x18];
  if (uVar3 != 0) {
    param_3[0x10] = param_3[0x10] + iVar4;
    param_3[0xb] = param_3[0xb] - iVar4;
    if (param_3[0x1b] == 0) {
      *(undefined1 *)(param_2 + (int)param_1 * 0x274 + 0x1c608) = 0;
      param_3[param_2 + 2] = 0;
      param_2 = param_2 + 1 & 1;
    }
    else {
      param_3[0x10] = 0;
      *param_3 = param_3[0x12];
      param_3[2] = param_3[0x13];
      param_3[0xb] = param_3[0x14];
    }
    FUN_00016cd4(param_1,param_3[param_2],uVar3);
    DAT_0001b000 = param_3[param_2];
    DAT_0001b013 = 1;
    DAT_0001b004 = param_3[4] + iVar4 + iVar2 * (uVar1 >> 1);
    DAT_0001b00c = uVar3;
    if ((DAT_0001b02c == '\x01') && (DAT_000183d0 < uVar3)) {
      DAT_0001b00c = DAT_000183d0;
    }
    DAT_0001b010 = (undefined1)param_1;
    DAT_0001b011 = 1;
    DAT_0001b008 = uVar3;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_000127a8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 auStack_20 [8];
  
  FUN_0001752c(auStack_20);
  uVar3 = SUB164(SEXT416((int)(uint)(byte)(&DAT_0001c494)[param_1 * 0x274]) * SEXT416(0x2aaaaaab),8)
          >> 2;
  iVar4 = FUN_000177c8((uVar3 | ((uint)(byte)(&DAT_0001c494)[param_1 * 0x274] + uVar3 * -0x18) * 2)
                       & 0xffff | 0x2240);
  if (*(int *)(param_2 + 0x44) == 0) {
    iVar5 = *(int *)(param_2 + 0x68);
    iVar1 = *(int *)(param_2 + 0x10);
    iVar2 = iVar5;
  }
  else {
    iVar1 = *(int *)(param_2 + 0x10);
    iVar5 = *(int *)(param_2 + 0x68);
    iVar2 = iVar1;
  }
  if (0xff < (uint)((iVar5 - iVar1) - (iVar4 - iVar2))) {
                    // WARNING: Subroutine does not return
    FUN_00017534(auStack_20[0]);
  }
                    // WARNING: Subroutine does not return
  FUN_00017534(auStack_20[0]);
}



// WARNING: Control flow encountered bad instruction data

void FUN_000128e8(undefined8 param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uStack_38;
  int *piStack_34;
  int iStack_30;
  int iStack_2c;
  
  iVar2 = (int)param_1;
  iVar6 = iVar2 * 0x274;
  uStack_38 = 0;
  iVar7 = *(int *)(param_3 + 0x44) * (*(uint *)(param_3 + 0x14) >> 1);
  bVar1 = false;
  if ((&DAT_0001c56f)[iVar6] == '\0') {
    uVar3 = SUB164(SEXT416((int)(uint)(byte)(&DAT_0001c494)[iVar6]) * SEXT416(0x2aaaaaab),8) >> 2;
                    // WARNING: Subroutine does not return
    FUN_000177c0((uVar3 | ((uint)(byte)(&DAT_0001c494)[iVar6] + uVar3 * -0x18) * 2) & 0xffff |
                 0x2140,*(int *)(param_3 + 0x10) + iVar7);
  }
  iStack_30 = param_3 + 8;
  iStack_2c = param_2 * 4;
  if (0 < DAT_00018034) {
    pcVar4 = &DAT_0001c668;
    iVar5 = DAT_00018034;
    do {
      if (((&DAT_0001c574)[iVar2 * 0x9d] == *(int *)(pcVar4 + -0xf4)) &&
         ((&DAT_0001c668)[iVar6] != *pcVar4)) {
        (&DAT_0001c669)[iVar6] = 1;
        bVar1 = true;
      }
      iVar5 = iVar5 + -1;
      pcVar4 = pcVar4 + 0x274;
    } while (iVar5 != 0);
  }
  if (!bVar1) {
    FUN_000127a8(param_1,param_3);
    FUN_0001752c(&uStack_38);
    iVar6 = 0;
    if (0 < DAT_00018034) {
      piStack_34 = &DAT_0001c574 + iVar2 * 0x9d;
      iVar2 = 0;
      do {
        iVar2 = iVar2 * 0x20 + iVar6 * 0x1d;
        iVar5 = iVar2 * 4;
        iVar6 = iVar6 + 1;
        if (*piStack_34 == (&DAT_0001c574)[iVar2]) {
          (&DAT_0001c669)[iVar5] = 0;
          (&DAT_0001c668)[iVar5] = 0;
          uVar3 = SUB164(SEXT416((int)(uint)(byte)(&DAT_0001c494)[iVar5]) * SEXT416(0x2aaaaaab),8)
                  >> 2;
                    // WARNING: Subroutine does not return
          FUN_000177c0((uVar3 | ((uint)(byte)(&DAT_0001c494)[iVar5] + uVar3 * -0x18) * 2) & 0xffff |
                       0x2140,*(int *)(iVar5 + 0x1c5f8) + iVar7);
        }
        iVar2 = iVar6 * 4;
      } while (iVar6 < DAT_00018034);
    }
                    // WARNING: Subroutine does not return
    FUN_00017534(uStack_38);
  }
  *(int *)(param_3 + iStack_2c) = *(int *)(param_3 + iStack_2c) + *(int *)(param_3 + 0x60);
  iVar6 = *(int *)(param_3 + 0x60);
  *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + iVar6;
  *(int *)(param_3 + 0x2c) = *(int *)(param_3 + 0x2c) - iVar6;
  *(int *)(iStack_30 + iStack_2c) = *(int *)(iStack_30 + iStack_2c) - iVar6;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00012d48(int param_1,longlong param_2)

{
  if (param_2 == 0) {
    (&DAT_0001c670)[param_1 * 0x9d] = 0;
    (&DAT_0001c674)[param_1 * 0x9d] = 0x200000;
  }
  (&DAT_0001c678)[param_1 * 0x9d] = (&DAT_0001c670)[param_1 * 0x9d];
  (&DAT_0001c67c)[param_1 * 0x9d] = (&DAT_0001c674)[param_1 * 0x9d];
  (&DAT_0001c670)[param_1 * 0x9d] = (int)param_2;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00012de4(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  
  iVar2 = 0;
  if (0 < DAT_00018034) {
    iVar3 = 0;
    puVar4 = &DAT_0001c684;
    do {
      if (((char)puVar4[-0x7d] == '\x01') && (*(char *)((int)puVar4 + -499) == '\0')) {
        if (*(char *)((int)puVar4 + -0x1f2) == '\0') {
          uVar1 = SUB164(SEXT416((int)(uint)(byte)puVar4[-0x7c]) * SEXT416(0x2aaaaaab),8) >> 2;
          uVar1 = FUN_000177c8((uVar1 | ((uint)(byte)puVar4[-0x7c] + uVar1 * -0x18) * 2) & 0xffff |
                               0x2240);
          if ((*(uint *)((int)&DAT_0001c670 + iVar3) < uVar1) &&
             (uVar1 < *(uint *)((int)&DAT_0001c674 + iVar3))) {
            if ((*puVar4 <= uVar1) && (*puVar4 = uVar1, *(short *)((int)puVar4 + -0x1ea) != 0)) {
LAB_00012f6c:
              FUN_00016b14(iVar2);
            }
          }
          else if ((*(uint *)((int)&DAT_0001c678 + iVar3) < uVar1) &&
                  (uVar1 < *(uint *)((int)&DAT_0001c67c + iVar3))) {
            if (*(short *)((int)&DAT_0001c49a + iVar3) != 0) {
              FUN_00016b14(iVar2);
            }
            *(undefined4 *)((int)&DAT_0001c684 + iVar3) = 0;
          }
        }
        else if (*(char *)((int)puVar4 + -0x1f2) == '\x01') {
          if (DAT_0001841c == '\0') goto LAB_00012f6c;
        }
        else {
          *puVar4 = 0;
        }
      }
      else {
        *puVar4 = 0;
        puVar4[1] = 0;
      }
      iVar3 = iVar3 + 0x274;
      iVar2 = iVar2 + 1;
      puVar4 = puVar4 + 0x9d;
    } while (iVar2 < DAT_00018034);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00012fcc(ulonglong param_1,int param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  
  iVar3 = (int)param_1;
  (&DAT_000180d0)[iVar3] = (short)param_2;
  iVar8 = DAT_00018034;
  bVar1 = 0 < DAT_00018034;
  *(short *)(iVar3 * 2 + 0x18130) = (short)param_3;
  if (bVar1) {
    puVar4 = &DAT_0001c440;
    do {
      if ((puVar4[0x50] == '\x01') && (param_1 == (byte)puVar4[0x54])) {
        *(short *)(puVar4 + 0x56) = (short)param_2;
        *(short *)(puVar4 + 0x58) = (short)param_3;
      }
      iVar8 = iVar8 + -1;
      puVar4 = puVar4 + 0x274;
    } while (iVar8 != 0);
  }
  uVar7 = (SUB164(SEXT416(iVar3) * SEXT416(0x2aaaaaab),8) >> 2) - (iVar3 >> 0x1f);
  uVar7 = uVar7 | (iVar3 + uVar7 * -0x18) * 2;
  uVar2 = FUN_000177a8(uVar7 & 0xffff | 0x600);
  uVar7 = FUN_000177a8(uVar7 & 0xffff | 0x700);
  uVar6 = 0xff;
  if ((int)(uVar2 >> 1 & 0xffff) < param_2) {
    uVar6 = 1;
  }
  uVar5 = 0xff;
  if ((int)(uVar7 >> 1 & 0xffff) < param_3) {
    uVar5 = 1;
  }
  iVar3 = iVar3 * 0x18;
  *(bool *)(iVar3 + 0x1b039) = 0x3fff < param_2;
  *(bool *)(iVar3 + 0x1b045) = 0x3fff < param_3;
  *(undefined1 *)(iVar3 + 0x1b03a) = uVar6;
  *(undefined1 *)(iVar3 + 0x1b046) = uVar5;
  *(int *)(iVar3 + 0x1b034) = param_2;
  *(int *)(iVar3 + 0x1b040) = param_3;
  (&DAT_0001b038)[iVar3] = 1;
  (&DAT_0001b044)[iVar3] = 1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_00013168(int param_1,longlong param_2)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  char cVar12;
  uint uStack_38;
  
  uVar6 = (SUB164(SEXT416(param_1) * SEXT416(0x2aaaaaab),8) >> 2) - (param_1 >> 0x1f);
  if (param_2 == 0) {
    uVar7 = 0x600;
    uStack_38 = 0;
  }
  else {
    uVar7 = 0x700;
    uStack_38 = 0x100;
  }
  uVar10 = (param_1 + uVar6 * -0x18) * 2;
  uVar4 = uVar6 | uVar10;
  iVar8 = (int)param_2 * 0xc + param_1 * 0x18;
  cVar12 = *(char *)(iVar8 + 0x1b039);
  bVar1 = *(byte *)(iVar8 + 0x1b03a);
  uVar2 = *(uint *)(iVar8 + 0x1b034);
  iVar8 = FUN_000177a8(uVar4 & 0xffff | uVar7);
  iVar11 = uVar2 * 2;
  if (cVar12 == '\x01') {
    cVar12 = '\x02';
    if (iVar8 < 0x8000) {
                    // WARNING: Subroutine does not return
      FUN_000177a0(uVar4 & 0xffff | uStack_38,0xa000);
    }
  }
  else if ((cVar12 == '\0') && (0x7fff < iVar8)) {
                    // WARNING: Subroutine does not return
    FUN_000177a0(uVar4 & 0xffff | uStack_38,&DAT_0000b000);
  }
  iVar9 = iVar8 + uVar2 * -2;
  if ((cVar12 == '\x02') && (iVar8 == 0)) {
    iVar8 = 0xffff;
    iVar9 = uVar2 * -2 + 0xffff;
  }
  if (iVar9 < 0) {
    iVar9 = -iVar9;
  }
  if ((iVar8 > iVar11) && ((ulonglong)bVar1 == 1)) {
    iVar9 = 0;
  }
  bVar3 = iVar11 <= iVar8;
  if ((!bVar3) && ((ulonglong)bVar1 == 0xffffffffffffffff)) {
    iVar9 = 0;
  }
  if (0x400 < iVar9) {
    uVar5 = FUN_000164d8();
    if (cVar12 == '\0') {
      if (bVar3) {
        uVar5 = uVar5 | 0xa000;
      }
      else {
        uVar5 = uVar5 | 0x8000;
      }
    }
    else if (iVar8 <= iVar11) {
      if (!bVar3) {
        uVar5 = uVar5 & 0xfff | 0xb000;
      }
    }
    else {
      uVar5 = uVar5 & 0xfff | 0x9000;
    }
                    // WARNING: Subroutine does not return
    FUN_000177a0((uVar6 | uVar10) & 0xffff | uStack_38,uVar5);
  }
                    // WARNING: Subroutine does not return
  FUN_000177a0((uVar6 | uVar10) & 0xffff | uStack_38,uVar2 & 0xffff);
}



// WARNING: Control flow encountered bad instruction data

void FUN_000135f4(void)

{
  undefined1 uVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  
  iVar8 = DAT_00018034;
  iVar7 = 0;
  iVar9 = 0;
  if (0 < DAT_00018034) {
    puVar6 = &DAT_0001c440;
    do {
      if (puVar6[0x50] == '\x01') {
        uVar1 = puVar6[0x19d];
        (&DAT_000195f0)[iVar9] = (char)iVar7;
        iVar4 = *(int *)(puVar6 + 0x1a0);
        (&DAT_000195c0)[iVar9] = uVar1;
        if (iVar4 != 0) {
          *(int *)(puVar6 + 0x1a0) = iVar4 + -1;
        }
        iVar9 = iVar9 + 1;
      }
      iVar7 = iVar7 + 1;
      puVar6 = puVar6 + 0x274;
    } while (iVar7 < iVar8);
  }
  if (iVar9 != 0) {
    do {
      bVar5 = false;
      if (0 < iVar9 + -1) {
        pbVar10 = &DAT_000195c0;
        iVar8 = 0;
        do {
          iVar7 = iVar8 + 1;
          bVar2 = *pbVar10;
          bVar3 = *(byte *)(iVar8 + 0x195c1);
          if (bVar3 < bVar2) {
            *pbVar10 = bVar3;
            *(byte *)(iVar8 + 0x195c1) = bVar2;
            uVar1 = (&DAT_000195f0)[iVar8];
            bVar5 = true;
            (&DAT_000195f0)[iVar8] = *(undefined1 *)(iVar8 + 0x195f1);
            *(undefined1 *)(iVar8 + 0x195f1) = uVar1;
          }
          pbVar10 = (byte *)(iVar8 + 0x195c1);
          iVar8 = iVar7;
        } while (iVar7 < iVar9 + -1);
      }
    } while (bVar5);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00013714(int param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  
  iVar6 = 0;
  uVar4 = 0;
  piVar5 = DAT_000184bc;
  if (DAT_00017f98 == 0) {
    halt_baddata();
  }
  while (*piVar5 != param_1) {
    uVar4 = uVar4 + 1;
    piVar5 = piVar5 + 10;
    if (DAT_00017f98 <= uVar4) {
      halt_baddata();
    }
  }
  iVar1 = piVar5[7];
  if (iVar1 == 0) {
    halt_baddata();
  }
  iVar3 = *(byte *)((int)piVar5 + 0x22) + 1;
  if (iVar3 == 0) {
    halt_baddata();
  }
  if (*(byte *)((int)piVar5 + 0x22) != 0) {
    *(char *)((int)piVar5 + 0x22) = (char)iVar3;
    halt_baddata();
  }
  do {
    lVar2 = FUN_00017558(iVar1,1);
    piVar5[9] = (int)lVar2;
    if ((lVar2 != -0x1f8) && (lVar2 != -0x1fe)) {
      if (lVar2 < 0) {
        DAT_00018018 = 0;
        halt_baddata();
      }
      break;
    }
    FUN_000176dc(0x50);
    iVar6 = iVar6 + 1;
    if (4000 < iVar6) {
      DAT_00018018 = 0;
      halt_baddata();
    }
  } while (piVar5[9] < 0);
  *(undefined1 *)((int)piVar5 + 0x22) = 1;
  DAT_00018018 = 1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00013848(void)

{
  DAT_0001805c = 1;
  FUN_00017728(DAT_00018058);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00013884(int param_1)

{
  FUN_00017774(*(undefined4 *)(param_1 + 4));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000138a8(int param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 auStack_18 [6];
  
  FUN_000176e4(0x411a,auStack_18);
  *(undefined4 *)(param_1 + 8) = auStack_18[0];
  lVar1 = FUN_00017754(1,0x20,1);
  if (0 < lVar1) {
    *(int *)(param_1 + 4) = (int)lVar1;
    lVar2 = FUN_00017764(lVar1,*(undefined4 *)(param_1 + 8),FUN_00013848,param_1);
    if (lVar2 == 0) {
      FUN_0001776c(lVar1,1,0,1);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_00013930(ulonglong param_1)

{
  FUN_0000d760(param_1,0,0,0);
                    // WARNING: Subroutine does not return
  (&DAT_00017fd4)[(int)param_1] = 0;
  FUN_000177d0(param_1 & 0xffff | 2,0);
}



void FUN_0001398c(ushort param_1,undefined2 param_2)

{
                    // WARNING: Subroutine does not return
  FUN_000177a0(param_1 | 0xb80,param_2);
}



// WARNING: Control flow encountered bad instruction data

void FUN_000139d8(uint param_1)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 auStack_20 [8];
  
  *(undefined4 *)(param_1 * 4 + 0x17fb4) = 0;
  lVar2 = FUN_0001752c(auStack_20);
  uVar3 = param_1 & 0xffff | 0x1900;
  uVar1 = FUN_000177b8(uVar3);
  puVar4 = (uint *)(param_1 * 4 + 0x17f7c);
  FUN_000177b0(uVar3,uVar1 & ~*puVar4);
  uVar3 = param_1 & 0xffff | 0x1b00;
  uVar1 = FUN_000177b8(uVar3);
  FUN_000177b0(uVar3,uVar1 & ~*puVar4);
  if (lVar2 == 0) {
                    // WARNING: Subroutine does not return
    FUN_00017534(auStack_20[0]);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00013a98(uint param_1)

{
  uint uVar1;
  longlong lVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 auStack_20 [8];
  
  puVar3 = (uint *)(param_1 * 4 + 0x17f7c);
  *(uint *)(param_1 * 4 + 0x17fb4) = *puVar3;
  lVar2 = FUN_0001752c(auStack_20);
  uVar4 = param_1 & 0xffff | 0x1900;
  uVar1 = FUN_000177b8(uVar4);
  FUN_000177b0(uVar4,uVar1 | *puVar3);
  uVar4 = param_1 & 0xffff | 0x1b00;
  uVar1 = FUN_000177b8(uVar4);
  FUN_000177b0(uVar4,uVar1 | *puVar3);
  if (lVar2 == 0) {
                    // WARNING: Subroutine does not return
    FUN_00017534(auStack_20[0]);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00013b54(undefined4 param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  lVar1 = FUN_000143e4();
  if (-1 < lVar1) {
    puVar2 = (undefined4 *)(DAT_00018510 + (int)lVar1 * 0x10);
    *puVar2 = param_1;
    puVar2[1] = param_2;
    puVar2[2] = 0;
    *(undefined2 *)(puVar2 + 3) = 1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00013bb0(void)

{
  undefined8 uVar1;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [80];
  
  FUN_00017594(0);
  uVar1 = FUN_000176bc();
  FUN_000175b4(auStack_68,uVar1);
  FUN_000175ac(auStack_50,0x12345,FUN_00013c24,&DAT_0001858c);
  FUN_000175bc(auStack_68);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00013c24(longlong param_1,undefined8 param_2)

{
  if (param_1 == 0) {
    FUN_0000bb78(param_2);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_00013c4c(ushort param_1,undefined2 param_2)

{
  undefined1 auStack_18 [24];
  
  FUN_0001752c(auStack_18);
                    // WARNING: Subroutine does not return
  FUN_000177a0(param_1 | 0x980,param_2);
}



// WARNING: Control flow encountered bad instruction data

void FUN_00013cc4(undefined4 param_1)

{
  undefined4 uStack_20;
  undefined4 uStack_1c;
  code *pcStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_20 = 0x2000000;
  pcStack_18 = FUN_00005a1c;
  uStack_14 = 0x4000;
  uStack_1c = 0;
  uStack_10 = param_1;
  FUN_00017694(&uStack_20);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_00013d34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  short sVar1;
  ushort uVar2;
  uint in_stack_00000014;
  undefined4 in_stack_00000018;
  
  sVar1 = FUN_000148a4();
  uVar2 = FUN_00014884(param_1);
  FUN_00009e50(param_1,param_3,param_4,in_stack_00000018);
  FUN_00013ec4(param_1,param_2);
                    // WARNING: Subroutine does not return
  FUN_000177a0(uVar2 | sVar1 << 1 | 0x300,(in_stack_00000014 & 0xff) << 8 | 0xff);
}



void FUN_00013ec4(undefined8 param_1,undefined2 param_2)

{
  short sVar1;
  ushort uVar2;
  
  sVar1 = FUN_000148a4();
  uVar2 = FUN_00014884(param_1);
                    // WARNING: Subroutine does not return
  FUN_000177a0(uVar2 | sVar1 << 1 | 0x200,param_2);
}



// WARNING: Control flow encountered bad instruction data

void FUN_00013f68(void)

{
  uint uVar1;
  
  uVar1 = FUN_00017508();
  if (0x200000 < uVar1) {
    uVar1 = uVar1 - 0x600000;
  }
  DAT_00018030 = uVar1 & 0xffffffc0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00014180(longlong param_1)

{
  undefined4 auStack_18 [6];
  
  if ((param_1 != 0) && (DAT_00017fa9 == '\0')) {
    FUN_0001752c(auStack_18);
    FUN_000174f8(0,(longlong)(int)param_1 * 0x28,0);
                    // WARNING: Subroutine does not return
    FUN_00017534(auStack_18[0]);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00014254(void)

{
  undefined4 auStack_10 [4];
  
  if (DAT_00017fa8 != '\0') {
    FUN_00014348();
    DAT_00017fa8 = 0;
    DAT_00017f9c = 0;
    FUN_0001752c(auStack_10);
    FUN_00017500(DAT_00018510);
                    // WARNING: Subroutine does not return
    FUN_00017534(auStack_10[0]);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000142b8(longlong param_1)

{
  undefined4 auStack_18 [6];
  
  if ((param_1 != 0) && (DAT_00017fa8 == '\0')) {
    FUN_0001752c(auStack_18);
    FUN_000174f8(0,(int)param_1 << 4,0);
                    // WARNING: Subroutine does not return
    FUN_00017534(auStack_18[0]);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00014348(void)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = DAT_00017f9c;
  if ((DAT_00017fa8 != '\0') && (uVar3 = 0, puVar1 = DAT_00018510, DAT_00017f9c != 0)) {
    do {
      *puVar1 = 0xffffffff;
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 4;
    } while (uVar3 < uVar2);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000143e4(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0xfffffffe;
  if (DAT_00017fa8 == '\0') {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  uVar2 = 0;
  piVar1 = DAT_00018510;
  if (DAT_00017f9c != 0) {
    do {
      if (*piVar1 == param_1) {
        uVar3 = 0xffffffff;
        break;
      }
      if ((*piVar1 == -1) && (uVar3 == 0xfffffffe)) {
        uVar3 = uVar2;
      }
      uVar2 = uVar2 + 1;
      piVar1 = piVar1 + 4;
    } while (uVar2 < DAT_00017f9c);
  }
  if ((uVar3 != 0xffffffff) && (uVar3 != 0xfffffffe)) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00014488(int param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 auStack_18 [6];
  
  uVar2 = 0;
  piVar3 = DAT_000184bc;
  if (DAT_00017f98 != 0) {
    do {
      if (*piVar3 == param_1) {
        if (piVar3[7] != 0) {
          halt_baddata();
        }
        iVar1 = FUN_00017660(param_2);
        FUN_0001752c(auStack_18);
        FUN_000174f8(0,iVar1 + 1,0);
                    // WARNING: Subroutine does not return
        FUN_00017534(auStack_18[0]);
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 10;
    } while (uVar2 < DAT_00017f98);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00014558(int param_1,int param_2,longlong param_3)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = 0;
  if (DAT_00017f98 != 0) {
    piVar2 = DAT_000184bc;
    do {
      if (*piVar2 == param_1) {
        if ((uint)piVar2[1] < (uint)(param_2 + (int)param_3)) {
          halt_baddata();
        }
        if (param_3 != 0) {
          piVar2[3] = param_2;
                    // WARNING: Bad instruction - Truncating control flow here
          halt_baddata();
        }
        piVar2[4] = piVar2[1] - piVar2[2];
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 10;
    } while (uVar1 < DAT_00017f98);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000145e4(void)

{
  int iVar1;
  
  iVar1 = DAT_00018088;
  if ((((DAT_00018088 == 1) && (DAT_00018064 == 0)) && (DAT_00018084 == '\x02')) &&
     (DAT_0001808c = 0, DAT_00018028 == 0)) {
    FUN_00005310();
    DAT_00018085 = 1;
    DAT_0001802c = iVar1;
    DAT_00018028 = iVar1;
    FUN_00010ebc(DAT_000184cc,0,0,2);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00014884(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000148a4(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000148d4(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000148f8(int param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = 0;
  if (DAT_00018034 <= param_1) {
    lVar2 = -1;
  }
  if (lVar2 == 0) {
    iVar1 = (&DAT_0001c574)[param_1 * 0x9d];
    if (iVar1 != -1) {
      FUN_00015944();
                    // WARNING: Subroutine does not return
      *(int *)(param_1 * 0x274 + 0x1c578) = param_2 * *(int *)(iVar1 * 0x274 + 0x1c57c);
      FUN_00015934();
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_00014a30(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 auStack_20 [8];
  
  if (DAT_00018450 != 0) {
    FUN_0001752c(auStack_20);
    lVar1 = FUN_000175f0(DAT_00018450);
    if (lVar1 < 0) {
                    // WARNING: Subroutine does not return
      FUN_00017534(auStack_20[0]);
    }
                    // WARNING: Subroutine does not return
    FUN_00017534(auStack_20[0]);
  }
  FUN_0001752c(auStack_20);
  uStack_24 = 0;
  uStack_30 = param_1;
  uStack_2c = param_2;
  uStack_28 = param_3;
  lVar1 = FUN_000175e8(&uStack_30,1);
  DAT_00018450 = (int)lVar1;
  if (lVar1 == 0) {
                    // WARNING: Subroutine does not return
    FUN_00017534(auStack_20[0]);
  }
  lVar1 = FUN_000175f0(DAT_00018450);
  if (lVar1 < 0) {
                    // WARNING: Subroutine does not return
    FUN_00017534(auStack_20[0]);
  }
                    // WARNING: Subroutine does not return
  FUN_00017534(auStack_20[0]);
}



// WARNING: Control flow encountered bad instruction data

void FUN_00014c10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_0000fb38(param_2,param_3);
  if (lVar1 != -1) {
    if (DAT_0001b02c == '\x01') {
      DAT_0001b4b4 = (undefined4)param_1;
      DAT_0001b4b0 = (undefined4)param_2;
      DAT_0001b4bc = DAT_0001b02c;
      DAT_0001b4b8 = (int)param_3;
    }
    else {
      FUN_000177f0(0,1);
      FUN_000177e0(0,0,param_1,param_2);
      FUN_000177f0(0,1);
      DAT_0001b4bc = '\0';
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00014cd0(void)

{
  int iVar1;
  
  if ((DAT_0001802c == 1) &&
     ((iVar1 = ((uint)DAT_000184f0 * 0x28 - (uint)DAT_000184f0) * 4 + (uint)DAT_000184f0,
      (&DAT_0001c490)[iVar1 * 4] != '\x01' || ((&DAT_0001c4d4)[iVar1] == 0)))) {
    DAT_0001802c = 0;
    FUN_000055f0();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00014dec(void)

{
  longlong lVar1;
  
  lVar1 = FUN_0001786c(1);
  DAT_00018085 = lVar1 == 6;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00014e2c(void)

{
  if (DAT_00018028 == 0) {
    FUN_00015944();
    FUN_00005310();
                    // WARNING: Subroutine does not return
    DAT_00018028 = 1;
    FUN_00015934();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00014e74(void)

{
  if (DAT_00018028 != 0) {
    FUN_000055f0();
    DAT_00018028 = 0;
    DAT_00018070 = 0;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00014eb4(void)

{
  FUN_00017874(0);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_00014ed4(void)

{
  FUN_000177f0(1,1);
                    // WARNING: Subroutine does not return
  FUN_00017810(1,0,0);
}



void FUN_00014f08(void)

{
  FUN_000177f0(1,1);
                    // WARNING: Subroutine does not return
  FUN_00017810(1,&DAT_00013d08,&DAT_00018060);
}



// WARNING: Control flow encountered bad instruction data

void FUN_00014f44(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined4 in_stack_00000010;
  
  if (param_1 != -1) {
    if ((&DAT_0001c492)[(int)param_1 * 0x274] != '\x01') {
                    // WARNING: Subroutine does not return
      FUN_0001138c(param_1,param_2,param_4,in_stack_00000010);
    }
    DAT_00018408 = param_3;
    if (((DAT_00018416 == '\0') || (DAT_00018416 == '\x02')) && (param_3 != DAT_00018400)) {
      DAT_00018408 = DAT_00018400 + (DAT_00018404 >> 1);
    }
    FUN_00010990(param_2,DAT_00018408,*(undefined4 *)((int)param_1 * 0x274 + 0x1c594));
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0001506c(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_000148a4();
  iVar2 = FUN_00014884(param_1);
  (&DAT_000183e4)[iVar2] = (&DAT_000183e4)[iVar2] | 1 << (uVar1 & 0x1f);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000150c8(void)

{
  FUN_0001761c("ERROR: SOUND_StopDTS\n");
  FUN_0001761c("DTS Not supported\n");
  FUN_0001761c("Set SOUND_DTS_ENABLE to 1\n");
  FUN_0001761c("Also requires DTS Middleware solution\n");
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00015110(void)

{
  FUN_0001761c("ERROR: SOUND_SetDTSMode\n");
  FUN_0001761c("DTS Not supported\n");
  FUN_0001761c("Set SOUND_DTS_ENABLE to 1\n");
  FUN_0001761c("Also requires DTS Middleware solution\n");
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00015158(longlong param_1)

{
  if (param_1 == 0) {
                    // WARNING: Subroutine does not return
    FUN_000151c0();
  }
  if (param_1 == 1) {
    FUN_000151e4();
    DAT_0001840c = 0;
  }
  else if (param_1 == 2) {
                    // WARNING: Subroutine does not return
    FUN_000151c0();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_000151c0(void)

{
                    // WARNING: Subroutine does not return
  FUN_000177d0(10,0);
}



void FUN_000151e4(void)

{
                    // WARNING: Subroutine does not return
  FUN_000177d0(10,1);
}



// WARNING: Control flow encountered bad instruction data

void FUN_00015208(int param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_000148d4();
  if (((lVar1 == 0) && ((&DAT_0001c490)[param_1 * 0x274] == '\x01')) &&
     ((&DAT_0001c492)[param_1 * 0x274] == '~')) {
    (&DAT_0001c448)[param_1 * 0x9d] = param_2;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000153a4(void)

{
  undefined4 auStack_10 [4];
  
  if (DAT_00018400 != 0) {
    if ((DAT_00018414 != '\0') && (DAT_00018410 != -1)) {
      FUN_0000f9ac(DAT_00018410,0);
    }
    FUN_00015428();
    FUN_0001752c(auStack_10);
    FUN_00017500(DAT_00018400);
                    // WARNING: Subroutine does not return
    FUN_00017534(auStack_10[0]);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00015428(void)

{
  if (DAT_00018400 != 0) {
                    // WARNING: Subroutine does not return
    FUN_000177a0(0xf80,0);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_000154b0(void)

{
                    // WARNING: Subroutine does not return
  DAT_0001841c = 1;
  FUN_000177a0(0xf80,0);
}



void FUN_00015524(void)

{
  DAT_0001841c = 0;
  if (DAT_00018414 == '\0') {
    DAT_00018414 = '\x01';
  }
                    // WARNING: Subroutine does not return
  FUN_000177a0(0xf80,DAT_000184c0 & 0xffff);
}



void FUN_000155e0(undefined2 param_1)

{
                    // WARNING: Subroutine does not return
  FUN_000177a0(0xf80,param_1);
}



// WARNING: Control flow encountered bad instruction data

void FUN_00015634(void)

{
  if (DAT_000183f8 != 0) {
                    // WARNING: Subroutine does not return
    FUN_00014a30(&DAT_000183fc,DAT_000183f8,0x40);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000156f0(undefined8 param_1)

{
  undefined4 auStack_18 [6];
  
  if (DAT_00018400 == 0) {
    FUN_0001752c(auStack_18);
    DAT_00018400 = FUN_000174f8(0,param_1,0);
                    // WARNING: Subroutine does not return
    FUN_00017534(auStack_18[0]);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0001581c(void)

{
  FUN_000176dc(0x28);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0001583c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    DAT_00018425 = 0;
    do {
      lVar1 = FUN_0001759c(&DAT_0001be10,0x12344321,0);
      if (lVar1 < 0) {
        halt_baddata();
      }
    } while (DAT_0001be34 == 0);
    DAT_00018425 = 1;
  }
  else if (param_1 == 1) {
    if (param_2 == 7) {
      DAT_00018426 = 1;
    }
    else if (param_2 == 6) {
      DAT_00018426 = 0;
    }
    else {
      DAT_00018424 = (undefined1)param_2;
    }
  }
  else if (param_1 == 5) {
    *(undefined1 *)((int)param_2 * 0x274 + 0x1c5dc) = 1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00015934(void)

{
  DAT_00018064 = 0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00015944(void)

{
  DAT_00018064 = 1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00015958(int param_1,undefined8 param_2)

{
  if ((byte)(&DAT_0001c492)[param_1 * 0x274] < 2) {
    FUN_000085ec(param_1,*(undefined4 *)(param_1 * 0x274 + 0x1c4c8),param_2);
  }
  else {
    FUN_000085ec(param_1,(&DAT_0001c4c4)[param_1 * 0x9d],param_2);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000159d4(void)

{
  if ((&DAT_0001c491)[DAT_000184cc * 0x274] == '\0') {
    FUN_00007aa4(DAT_000184cc,*(undefined4 *)(DAT_000184cc * 0x274 + 0x1c4c8),1,&DAT_00014784);
  }
  else {
    DAT_00018070 = 0;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00015a50(void)

{
  if ((&DAT_0001c491)[DAT_000184cc * 0x274] == '\0') {
    FUN_00007aa4(DAT_000184cc,*(undefined4 *)(DAT_000184cc * 0x274 + 0x1c4c8),0,&DAT_00014730);
  }
  else {
    DAT_00018070 = 0;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00015acc(uint param_1)

{
  uint uVar1;
  longlong lVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 auStack_20 [8];
  
  puVar3 = (uint *)(param_1 * 4 + 0x17f7c);
  *(uint *)(param_1 * 4 + 0x17fac) = *puVar3;
  lVar2 = FUN_0001752c(auStack_20);
  uVar4 = param_1 & 0xffff | 0x1800;
  uVar1 = FUN_000177b8(uVar4);
  FUN_000177b0(uVar4,uVar1 | *puVar3);
  uVar4 = param_1 & 0xffff | 0x1a00;
  uVar1 = FUN_000177b8(uVar4);
  FUN_000177b0(uVar4,uVar1 | *puVar3);
  if (lVar2 == 0) {
                    // WARNING: Subroutine does not return
    FUN_00017534(auStack_20[0]);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00015b88(uint param_1)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 auStack_20 [8];
  
  *(undefined4 *)(param_1 * 4 + 0x17fac) = 0;
  lVar2 = FUN_0001752c(auStack_20);
  uVar3 = param_1 & 0xffff | 0x1800;
  uVar1 = FUN_000177b8(uVar3);
  puVar4 = (uint *)(param_1 * 4 + 0x17f7c);
  FUN_000177b0(uVar3,uVar1 & ~*puVar4);
  uVar3 = param_1 & 0xffff | 0x1a00;
  uVar1 = FUN_000177b8(uVar3);
  FUN_000177b0(uVar3,uVar1 & ~*puVar4);
  if (lVar2 == 0) {
                    // WARNING: Subroutine does not return
    FUN_00017534(auStack_20[0]);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_00015c48(void)

{
                    // WARNING: Subroutine does not return
  FUN_000177a0(0x800,0xff0);
}



void FUN_00015c78(void)

{
                    // WARNING: Subroutine does not return
  FUN_000177a0(0x800,0);
}



// WARNING: Control flow encountered bad instruction data

void FUN_00015ca8(undefined8 param_1,int param_2,int param_3)

{
  if (*(int *)(param_3 + 0x6c) == 1) {
    if (DAT_0001b02c != '\x01') {
      FUN_000177f0(1,1);
    }
    FUN_00016bdc(param_1,*(undefined4 *)(param_3 + param_2 * 4),*(undefined4 *)(param_3 + 100));
    *(undefined1 *)(param_3 + 0x5c) = 0;
  }
  *(undefined4 *)(param_3 + 0x60) = *(undefined4 *)(param_3 + 100);
  *(int *)(param_3 + 0x6c) = *(int *)(param_3 + 0x6c) + 1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00015d38(undefined8 param_1,int param_2,undefined4 *param_3)

{
  longlong lVar1;
  
  if (DAT_0001b02c == '\x01') {
    do {
      lVar1 = FUN_000177f0(1,0);
    } while (lVar1 == 0);
  }
  else {
    FUN_000177f0(1,1);
  }
  FUN_00016bdc(param_1,param_3[param_2],param_3[0x18]);
  if ((param_3[0x1b] == 1) &&
     (FUN_00016bdc(param_1,param_3[param_2],param_3[0x18]), param_3[0x19] == 0)) {
    param_3[0x10] = 0;
    param_3[0x18] = 0;
    param_3[0x1b] = 0;
    *param_3 = param_3[0x12];
    param_3[2] = param_3[0x13];
    param_3[0xb] = param_3[0x14];
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00015e14(int param_1)

{
  uint uVar1;
  
  uVar1 = SUB164(SEXT416((int)(uint)(byte)(&DAT_0001c494)[param_1 * 0x274]) * SEXT416(0x2aaaaaab),8)
          >> 2;
  FUN_000177c8((uVar1 | ((uint)(byte)(&DAT_0001c494)[param_1 * 0x274] + uVar1 * -0x18) * 2) & 0xffff
               | 0x2240);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00015e9c(void)

{
  FUN_00015e14();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00015f40(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(param_2 + 0x14) >> 1;
  *(uint *)(param_2 + 0x68) = *(int *)(param_2 + 0x10) + uVar5;
  uVar4 = *(uint *)(param_2 + 0x14);
  if (*(int *)(param_2 + 0x28) != 0) {
    uVar4 = uVar5;
  }
  iVar2 = param_1 * 4;
  uVar5 = *(uint *)(param_2 + 8 + iVar2);
  if (uVar5 < uVar4) {
    uVar3 = uVar4 - uVar5;
    piVar1 = (int *)(param_2 + 0x30 + iVar2);
    uVar4 = uVar5;
    if (*(int *)(param_2 + 0x30 + iVar2) != 1) {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
    piVar1 = (int *)(param_2 + 0x30 + iVar2);
  }
  if (*piVar1 == 2) {
    uVar3 = 0;
  }
  if (*piVar1 != 1) {
    uVar5 = *(uint *)(param_2 + 8 + (1 - param_1) * 4);
    if ((uVar5 < uVar3) && (uVar3 = uVar5, *(char *)(param_2 + (1 - param_1) + 0x20) == '\0')) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
  }
  *(uint *)(param_2 + 0x60) = uVar4;
  *(uint *)(param_2 + 100) = uVar3;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00016024(undefined8 param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_3 + param_2 * 4);
  DAT_0001b00c = puVar1[2];
  DAT_0001b013 = 1;
  DAT_0001b000 = *puVar1;
  DAT_0001b004 = *(undefined4 *)(param_3 + 0x10);
  DAT_0001b008 = DAT_0001b00c;
  if ((DAT_0001b02c == '\x01') && (DAT_000183d0 < DAT_0001b00c)) {
    DAT_0001b00c = DAT_000183d0;
  }
  DAT_0001b011 = 1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000160ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_00011efc();
  if (((lVar1 != 1) && (lVar1 = FUN_00015e9c(param_1,param_3), lVar1 != 1)) &&
     (lVar1 = FUN_00015f40(param_2,param_3), lVar1 != -1)) {
    FUN_00012200(param_1,param_2,param_3);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00016138(int param_1,int param_2,int param_3)

{
  *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + *(int *)(param_3 + param_2 * 4 + 8);
  *(undefined1 *)(param_3 + param_2 + 0x20) = 0;
  *(uint *)(param_3 + 0x3c) = *(int *)(param_3 + 0x3c) + 1U & 1;
  if ((&DAT_0001c495)[param_1 * 0x274] == '\x02') {
    *(undefined4 *)(&DAT_0001c440 + param_1 * 0x274) = 2;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000161ac(undefined8 param_1,uint param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  
  DAT_0001b011 = 0;
  pcVar2 = (char *)(param_3 + 0x5c + param_2);
  cVar1 = *pcVar2;
  if (cVar1 == '\x03') {
    FUN_00016138();
  }
  else if (cVar1 == '\x02') {
    FUN_00011a98(param_1,param_2,param_3);
  }
  else if (cVar1 == '\0') {
    FUN_00015d38(param_1,param_2,param_3);
    if (*(int *)(param_3 + 100) == 0) {
      FUN_000128e8(param_1,param_2,param_3);
      FUN_00012374(param_1,param_2,param_3);
    }
    else {
      *pcVar2 = '\x01';
    }
  }
  else if (cVar1 == '\x01') {
    FUN_00015ca8(param_1,param_2,param_3);
    if (*(int *)(param_3 + param_2 * 4 + 0x30) != 1) {
      param_2 = param_2 + 1 & 1;
    }
    FUN_000128e8(param_1,param_2,param_3);
    FUN_00012374(param_1,param_2,param_3);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00016350(void)

{
  if ((&DAT_0001c491)[DAT_000184cc * 0x274] == '\0') {
    FUN_00007aa4(DAT_000184cc,(&DAT_0001c4c4)[DAT_000184cc * 0x9d],1,&DAT_00014784);
  }
  else {
    DAT_00018070 = 0;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00016418(undefined2 param_1)

{
  FUN_000177b0(param_1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_00016438(undefined2 param_1,undefined2 param_2)

{
                    // WARNING: Subroutine does not return
  FUN_000177a0(param_1,param_2);
}



void FUN_0001645c(undefined2 param_1)

{
                    // WARNING: Subroutine does not return
  FUN_000177c0(param_1);
}



void FUN_0001647c(undefined2 param_1,undefined2 param_2)

{
                    // WARNING: Subroutine does not return
  FUN_000177d0(param_1,param_2);
}



void FUN_000164a0(undefined2 param_1,undefined2 param_2)

{
                    // WARNING: Subroutine does not return
  FUN_000177e8(param_1,param_2);
}



// WARNING: Control flow encountered bad instruction data

void FUN_000164d8(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  if ((param_1 / 2 & 0x2000U) == 0) {
    uVar2 = 1;
    do {
      uVar1 = uVar2 & 0x1f;
      if (3 < (int)uVar2) {
        halt_baddata();
      }
      uVar2 = uVar2 + 1;
    } while ((param_1 / 2 & 0x2000 >> uVar1) == 0);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00016528(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0x1b030;
  do {
    if ((&DAT_000180a0)[iVar2] == '\0') {
      *(undefined1 *)(iVar1 + 8) = 0;
      *(undefined1 *)(iVar1 + 0x14) = 0;
    }
    if (*(char *)(iVar1 + 8) == '\x01') {
      FUN_00013168(iVar2,0);
    }
    if (*(char *)(iVar1 + 0x14) == '\x01') {
      FUN_00013168(iVar2,1);
    }
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 0x18;
  } while (iVar2 < 0x30);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000165cc(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0x1b030;
  iVar2 = 0x2f;
  do {
    *(undefined1 *)(iVar1 + 8) = 0;
    *(undefined1 *)(iVar1 + 0x14) = 0;
    iVar2 = iVar2 + -1;
    iVar1 = iVar1 + 0x18;
  } while (-1 < iVar2);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000165f4(int param_1)

{
  (&DAT_0001b038)[param_1 * 0x18] = 0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00016618(undefined2 param_1,uint param_2,uint param_3)

{
  uint uVar1;
  byte bVar2;
  undefined2 *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  byte abStack_78 [48];
  byte abStack_48 [72];
  
  iVar7 = 0;
  pbVar5 = abStack_78;
  pbVar4 = abStack_48;
  uVar6 = 0;
  puVar3 = &DAT_00018250;
  bVar2 = 0;
  do {
    uVar1 = 1 << (uVar6 & 0x1f);
    if ((param_2 & uVar1) != 0) {
      *puVar3 = param_1;
      *pbVar5 = bVar2;
      pbVar5 = pbVar5 + 1;
      *pbVar4 = 0;
      pbVar4 = pbVar4 + 1;
      iVar7 = iVar7 + 1;
    }
    if ((param_3 & uVar1) != 0) {
      puVar3[0x18] = param_1;
      *pbVar5 = bVar2;
      pbVar5 = pbVar5 + 1;
      *pbVar4 = 1;
      pbVar4 = pbVar4 + 1;
      iVar7 = iVar7 + 1;
    }
    puVar3 = puVar3 + 1;
    uVar6 = uVar6 + 1;
    bVar2 = bVar2 + 2;
  } while ((int)uVar6 < 0x18);
  if (iVar7 != 0) {
                    // WARNING: Subroutine does not return
    FUN_000177a0((ulonglong)(abStack_48[0] | abStack_78[0]) | 0x200,param_1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0001671c(undefined8 param_1)

{
  if (DAT_00018054 != 0) {
    FUN_000176b4(DAT_00018054,param_1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000167ac(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  uVar1 = 0;
  puVar3 = &DAT_00017fd4;
  piVar2 = &DAT_00017fbc;
  do {
    if (*piVar2 != 0) {
      FUN_0000d760(uVar1,0,0,0);
                    // WARNING: Subroutine does not return
      *puVar3 = 0;
      FUN_000177d0(uVar1 & 0xffff | 2,0);
    }
    puVar3 = puVar3 + 1;
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 1;
  } while ((int)uVar1 < 2);
  DAT_00017fc4 = param_1;
  DAT_00017fc8 = param_2;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0001686c(uint param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_2 != 0) {
    pcVar3 = &DAT_000195c0;
    uVar4 = 0;
    do {
      if (((*pcVar3 == (&DAT_000195c0)[param_1]) && (param_1 != uVar4)) &&
         (bVar1 = (&DAT_000195f0)[uVar4], bVar2 = (&DAT_000195f0)[param_1],
         (uint)(&DAT_0001c5e0)[((uint)bVar1 * 0x28 - (uint)bVar1) * 4 + (uint)bVar1] <
         (uint)(&DAT_0001c5e0)[((uint)bVar2 * 0x28 - (uint)bVar2) * 4 + (uint)bVar2])) {
        param_1 = uVar4;
      }
      uVar5 = uVar4 + 1;
      pcVar3 = (char *)(uVar4 + 0x195c1);
      uVar4 = uVar5;
    } while (uVar5 < param_2);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00016974(int param_1)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  
  uVar3 = 0;
  piVar2 = DAT_000184bc;
  if (DAT_00017f98 != 0) {
    do {
      if (*piVar2 == param_1) {
        cVar1 = *(char *)((int)piVar2 + 0x22) + -1;
        if (*(char *)((int)piVar2 + 0x22) == '\0') {
          halt_baddata();
        }
        *(char *)((int)piVar2 + 0x22) = cVar1;
        if (cVar1 != '\0') {
          halt_baddata();
        }
        FUN_00017560(piVar2[9]);
        halt_baddata();
      }
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 10;
    } while (uVar3 < DAT_00017f98);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00016a00(void)

{
  (*DAT_00018498)(1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00016a88(void)

{
  if (0 < DAT_0001aff4) {
    FUN_0001775c();
    DAT_0001aff4 = 0;
  }
  if (DAT_00018058 != 0) {
    FUN_00017718();
    DAT_00018058 = 0;
  }
  if (DAT_00018054 != 0) {
    FUN_000176ac();
    FUN_0001769c(DAT_00018054);
    DAT_00018054 = 0;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00016b14(int param_1)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = &DAT_0001c688 + param_1 * 0x9d;
  uVar1 = *puVar2;
  *puVar2 = uVar1 + 1;
  if (0x4dab < SUB164(ZEXT416(uVar1 + 1 >> 6) * ZEXT416(0x26d60dd),8) >> 5) {
    *puVar2 = 0;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00016b78(int param_1)

{
  if ((&DAT_0001c491)[param_1 * 0x274] != '\x02') {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00016bdc(undefined8 param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_00016e38();
  lVar2 = FUN_00016dd0(uVar1,param_2 + param_3 + -0xf);
  if (lVar2 == 0) {
    *(undefined1 *)(param_2 + param_3 + -0xf) = 0;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00016c2c(undefined8 param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_00016e38();
  param_2 = param_2 + param_3;
  lVar2 = FUN_00016dd0(uVar1,param_2 + -0x1f);
  if (lVar2 == 0) {
    *(undefined1 *)(param_2 + -0xf) = 0;
    *(undefined1 *)(param_2 + -0x1f) = 0;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00016c80(undefined8 param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_00016e38();
  param_2 = param_2 + param_3;
  lVar2 = FUN_00016dd0(uVar1,param_2 + -0x1f);
  if (lVar2 == 0) {
    *(undefined1 *)(param_2 + -0xf) = 0;
    *(undefined1 *)(param_2 + -0x1f) = 0;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00016cd4(undefined8 param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_00016e38();
  lVar2 = FUN_00016dd0(uVar1,param_2 + param_3 + -0xf);
  if (lVar2 == 0) {
    *(undefined1 *)(param_2 + param_3 + -0xf) = 3;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00016d2c(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_00016e38();
  lVar2 = FUN_00016dd0(uVar1,param_2 + 1);
  if (lVar2 == 0) {
    *(undefined1 *)(param_2 + 1) = 6;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00016d74(undefined8 param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_00016e38();
  param_2 = param_2 + param_3;
  lVar2 = FUN_00016dd0(uVar1,param_2 + -0x1f);
  if (lVar2 == 0) {
    *(undefined1 *)(param_2 + -0xf) = 7;
    *(undefined1 *)(param_2 + -0x1f) = 1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00016dd0(int param_1,uint param_2)

{
  if (((uint)(&DAT_0001c44c)[param_1 * 0x9d] <= param_2) &&
     (param_2 < (uint)((&DAT_0001c44c)[param_1 * 0x9d] + *(int *)(param_1 * 0x274 + 0x1c4cc)))) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00016e38(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00016e80(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00016e98(void)

{
  if (DAT_00017f94 == 1) {
    DAT_00017f94 = 0;
    FUN_000176cc(DAT_00018454);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00016ed4(void)

{
  DAT_00018588 = DAT_00017f90;
  DAT_00017f90 = 0;
  if (DAT_00017f94 == 1) {
    DAT_00017f94 = 0;
    FUN_000176cc(DAT_00018454);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00016f24(void)

{
  DAT_00017f90 = DAT_00018588;
  if (DAT_00018068 == 1) {
    do {
      if (DAT_00017f94 == 1) {
        DAT_00017f94 = 0;
        FUN_000176cc(DAT_00018454);
      }
    } while (DAT_00018068 == 1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00016fb8(char param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 in_stack_00000010;
  
  if (param_1 == '\0') {
    DAT_00018434 = param_2;
    DAT_00018438 = param_3;
    DAT_00018580 = param_4;
    DAT_00018584 = in_stack_00000010;
  }
  DAT_0001809c = 1;
  FUN_0001785c(0x10);
  DAT_00018430 = 1;
  FUN_00017844(DAT_00018434,DAT_00018438,DAT_00018580,DAT_00018584);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x0001722c) overlaps instruction at (ram,0x00017228)
// 

void FUN_00017120(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  longlong lVar10;
  undefined1 auVar11 [16];
  longlong lVar12;
  ulonglong uVar13;
  uint *extraout_a0_lo;
  uint *puVar14;
  undefined4 extraout_a0_hi;
  undefined4 uVar15;
  uint *extraout_a1_lo;
  uint *puVar16;
  undefined4 extraout_a1_hi;
  undefined4 uVar17;
  longlong extraout_a2;
  longlong extraout_a3;
  undefined1 auVar18 [16];
  
  uVar17 = (undefined4)((ulonglong)param_2 >> 0x20);
  puVar16 = (uint *)param_2;
  uVar15 = (undefined4)((ulonglong)param_1 >> 0x20);
  puVar14 = (uint *)param_1;
  auVar18 = ZEXT816(0);
  if (param_4 < 1) {
    auVar18 = FUN_00017550();
    puVar14 = extraout_a0_lo;
    uVar15 = extraout_a0_hi;
    puVar16 = extraout_a1_lo;
    uVar17 = extraout_a1_hi;
    param_3 = extraout_a2;
    param_4 = extraout_a3;
  }
  do {
    do {
      lVar12 = auVar18._8_8_;
      uVar13 = auVar18._0_8_;
      uVar1 = *puVar14;
      uVar2 = puVar14[1];
      uVar3 = puVar14[2];
      uVar4 = puVar14[3];
      uVar5 = puVar14[4];
      uVar6 = puVar14[5];
      uVar7 = puVar14[6];
      uVar8 = puVar14[7];
      if (((((0x7fffffff < (longlong)(int)puVar14 + (longlong)(int)puVar14 ||
             (longlong)(int)puVar14 + (longlong)(int)puVar14 < -0x80000000) ||
            0x7fffffff < CONCAT44(uVar15,puVar14)) || CONCAT44(uVar15,puVar14) < -0x80000000) ||
          0x7fffffff < CONCAT44(uVar15,puVar14)) || CONCAT44(uVar15,puVar14) < -0x80000000) {
        halt_baddata();
      }
      *puVar16 = uVar1 & 0xffff | uVar2 << 0x10;
      puVar16[1] = uVar3 & 0xffff | uVar4 << 0x10;
      puVar16[0x80] = uVar1 >> 0x10 | uVar2 & 0xffff0000;
      puVar16[0x81] = uVar3 >> 0x10 | uVar4 & 0xffff0000;
      puVar16[2] = uVar5 & 0xffff | uVar6 << 0x10;
      puVar16[3] = uVar7 & 0xffff | uVar8 << 0x10;
      puVar16[0x82] = uVar5 >> 0x10 | uVar6 & 0xffff0000;
      puVar16[0x83] = uVar7 >> 0x10 | uVar8 & 0xffff0000;
      if (((((0x7fffffff < (longlong)(int)puVar16 + (longlong)(int)puVar16 ||
             (longlong)(int)puVar16 + (longlong)(int)puVar16 < -0x80000000) ||
            0x7fffffff < CONCAT44(uVar17,puVar16)) || CONCAT44(uVar17,puVar16) < -0x80000000) ||
          0x7fffffff < CONCAT44(uVar17,puVar16)) || CONCAT44(uVar17,puVar16) < -0x80000000) {
        halt_baddata();
      }
      lVar10 = (longlong)auVar18._8_4_ + (longlong)auVar18._8_4_;
      if (((((0x7fffffff < lVar10 || lVar10 < -0x80000000) || 0x7fffffff < lVar12) ||
           lVar12 < -0x80000000) || 0x7fffffff < lVar12) || lVar12 < -0x80000000) {
        halt_baddata();
      }
      bVar9 = lVar12 < param_4;
    } while (bVar9);
    if (((((0x7fffffff < (longlong)(int)puVar16 + (longlong)(int)puVar16 ||
           (longlong)(int)puVar16 + (longlong)(int)puVar16 < -0x80000000) ||
          0x7fffffff < CONCAT44(uVar17,puVar16)) || CONCAT44(uVar17,puVar16) < -0x80000000) ||
        0x7fffffff < CONCAT44(uVar17,puVar16)) || CONCAT44(uVar17,puVar16) < -0x80000000) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar13;
    lVar12 = (longlong)auVar18._0_4_ + (longlong)auVar18._0_4_;
    if (((((lVar12 < 0x80000000 && -0x80000001 < lVar12) && (longlong)uVar13 < 0x80000000) &&
         -0x80000001 < (longlong)uVar13) && (longlong)uVar13 < 0x80000000) &&
        -0x80000001 < (longlong)uVar13) {
      bVar9 = (longlong)uVar13 < param_3;
    }
    auVar18 = auVar11;
  } while (bVar9);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0001725c(int param_1,int param_2,short *param_3,uint param_4)

{
  bool bVar1;
  short *psVar2;
  short *psVar3;
  
  psVar2 = param_3;
  do {
    psVar3 = psVar2 + 1;
    param_1 = param_1 + ((int)((param_4 >> 0x10) * param_2) >> 9);
    param_2 = param_2 + ((int)((param_4 >> 0x10) *
                              ((*psVar2 - param_1) - ((int)((param_4 & 0xffff) * param_2) >> 8))) >>
                        9);
    bVar1 = 0x7ffe < param_1;
    if (param_1 < -0x7fff) {
      param_1 = -0x8000;
    }
    if (bVar1) {
      param_1 = 0x7fff;
    }
    *psVar2 = (short)param_1;
    psVar2 = psVar3;
  } while (param_3 + 0x100 != psVar3);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000172e4(int param_1,int param_2,short *param_3,int param_4)

{
  bool bVar1;
  short *psVar2;
  short *psVar3;
  
  psVar2 = param_3;
  do {
    psVar3 = psVar2 + 1;
    param_1 = param_1 + (param_4 * param_2 >> 9);
    param_2 = param_2 + (param_4 * ((*psVar2 - param_1) - param_2) >> 9);
    bVar1 = 0x7ffe < param_1;
    if (param_1 < -0x7fff) {
      param_1 = -0x8000;
    }
    if (bVar1) {
      param_1 = 0x7fff;
    }
    *psVar2 = (short)param_1;
    psVar2 = psVar3;
  } while (param_3 + 0x100 != psVar3);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0001735c(int param_1,int param_2,short *param_3,uint param_4)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  
  psVar4 = param_3;
  do {
    psVar5 = psVar4 + 1;
    param_1 = param_1 + ((int)((param_4 >> 0x10) * param_2) >> 9);
    iVar3 = (*psVar4 - param_1) - ((int)((param_4 & 0xffff) * param_2) >> 8);
    param_2 = param_2 + ((int)((param_4 >> 0x10) * iVar3) >> 9);
    bVar1 = 0x7ffe < iVar3;
    if (iVar3 < -0x7fff) {
      iVar3 = -0x8000;
    }
    sVar2 = (short)iVar3;
    if (bVar1) {
      sVar2 = 0x7fff;
    }
    *psVar4 = sVar2;
    psVar4 = psVar5;
  } while (param_3 + 0x100 != psVar5);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_000173e4(int param_1,int param_2,short *param_3,int param_4)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  
  psVar4 = param_3;
  do {
    psVar5 = psVar4 + 1;
    param_1 = param_1 + (param_4 * param_2 >> 9);
    iVar3 = (*psVar4 - param_1) - param_2;
    param_2 = param_2 + (param_4 * iVar3 >> 9);
    bVar1 = 0x7ffe < iVar3;
    if (iVar3 < -0x7fff) {
      iVar3 = -0x8000;
    }
    sVar2 = (short)iVar3;
    if (bVar1) {
      sVar2 = 0x7fff;
    }
    *psVar4 = sVar2;
    psVar4 = psVar5;
  } while (param_3 + 0x100 != psVar5);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0001745c(int param_1,int param_2,short *param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  short *psVar3;
  short *psVar4;
  
  psVar3 = param_3;
  iVar2 = param_2;
  do {
    psVar4 = psVar3 + 1;
    param_1 = param_1 + ((int)((param_4 >> 0x10) * iVar2) >> 9);
    iVar2 = param_2 + ((int)((param_4 >> 0x10) *
                            ((*psVar3 - param_1) - ((int)((param_4 & 0xffff) * param_2) >> 8))) >> 9
                      );
    bVar1 = 0x7ffe < iVar2;
    if (iVar2 < -0x7fff) {
      iVar2 = -0x8000;
    }
    param_2 = iVar2;
    if (bVar1) {
      param_2 = 0x7fff;
    }
    *psVar3 = (short)param_2;
    psVar3 = psVar4;
  } while (param_3 + 0x100 != psVar4);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_00017550(void)

{
  longlong in_t3;
  longlong in_t5;
  
  if (in_t3 == in_t5) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}


