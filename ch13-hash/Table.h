#ifndef __TABLE_H__
#define __TABLE_H__

#include "Slot.h"

#define MAX_TBL 100

typedef int HashFunc(Key k);

typedef struct _table
{
	Slot tbl[MAX_TBL];
	HashFunc *hf;
} Table;

// 테이블 초기화
void TBLInit (Table * pt, HashFunc * f);


Value TBLDelete(Table * pt, Key k);

Value TBLSearch(Table * pt, Key k);

#endif

