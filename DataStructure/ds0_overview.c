/**
 * @file ds0_overview.c
 *
 * @brief This file contains macro definitions used in this project.
 *
 * $Id: ds_common.h 2012-02-01 17:21 $
 *
 * @author    Archie: http://lewtsi.github.com
 * @author    Email: archiex.archie@gmail.com
 *
 *
 * Copyright (c) 2012, I.M.G.
 *
 */


#include "ds_common.h"

struct DS0_STU{
	char name[20];
	char stunumb[10];
	int age;
	int score;
};

struct DS0_LIST{
	struct DS0_STU stu[50];
	int length;
};

struct DS0_LIST LSTU;


/*! \brief  Print all the infomation in list.
 *        
 *  \note	This function won't print warning if the length of list is 0.
 *
 *  \ingroup ds0
 */
void ds_printlist(struct DS0_LIST *L)
{
	int i;
	printf("name \t stunumb \t age \t score \n");
	for(i=0; i<L->length; i++)
		printf("%s \t %s \t %d \t %d \n", 
				L->stu[i].name, L->stu[i].stunumb, 
				L->stu[i].age, L->stu[i].score);
}

/*! \brief  Insert a item to list.
 *        
 *  \retval OPT_FAILURE		The position to insert item is illegal. 
 *  \retval OPT_SUCCESS  	Operation doing success. 
 *
 *  \ingroup ds0
 */

opt_result_t ds_listInsert(struct DS0_LIST *L, int i, struct DS0_STU e)
{
	struct DS0_STU *p, *q;
	if(i<1 || i>L->length+1) return OPT_FAILURE;
	q = &(L->stu[i-1]);
	for(p=&L->stu[L->length-1]; p>=q; --p)
		*(p+1) = *p;
	*q=e;
	++L->length;
	return OPT_SUCCESS;
}

int main(void)
{
	struct DS0_STU e;
	LSTU.length = 0;

	strcpy(e.name, "Archie");
	strcpy(e.stunumb, "07201207");
	e.age = 18;
	e.score = 80;

	ds_listInsert(&LSTU, 1, e);
	ds_printlist(&LSTU);
	printf("List length now is %d .\n\n", LSTU.length);

	return 0;
}



