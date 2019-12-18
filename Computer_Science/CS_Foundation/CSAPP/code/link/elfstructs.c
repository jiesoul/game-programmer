//
// Created by zhangyunjie on 2019/12/16.
//
typedef struct {
  int name;
  char type:4,
  binding:4,
  char reserved;
  short section;
  long value;
  long size;
} Elf64_Symbol;

typedef struct {
  long offset;
  long type:32,
  symbol:32;
  long addend;
} Elf64_Rela;
