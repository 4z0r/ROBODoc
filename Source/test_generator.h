#ifndef ROBODOC_TEST_GENERATOR_H
#define ROBODOC_TEST_GENERATOR_H

/*
 * This file is part of ROBODoc, See COPYING for the license.
*/

#include "headers.h"
#include "document.h"

#define MAX_SECTION_DEPTH 7

void                RB_TEST_Generate_Label(
    FILE *dest_doc,
    char *name );
void                RB_TEST_Generate_Item_Begin(
    FILE *dest_doc );
void                RB_TEST_Generate_Item_End(
    FILE *dest_doc );
void                RB_TEST_Generate_TOC_2(
    FILE *dest_doc,
    struct RB_header **headers,
    int count );
void                RB_TEST_Generate_BeginSection(
    FILE *dest_doc,
    int depth,
    char *name );
void                RB_TEST_Generate_EndSection(
    FILE *dest_doc,
    int depth,
    char *name );
char               *RB_TEST_Get_Default_Extension(
    void );
void                RB_TEST_Generate_Doc_Start(
    FILE *dest_doc,
    char *src_name,
    char *name,
    char toc );
void                RB_TEST_Generate_Doc_End(
    FILE *dest_doc,
    char *name );
void                RB_TEST_Generate_Header_Start(
    FILE *dest_doc,
    struct RB_header *cur_header );
void                RB_TEST_Generate_Header_End(
    FILE *dest_doc,
    struct RB_header *cur_header );
void                RB_TEST_Generate_Index(
    struct RB_Document *document,
    FILE *dest,
    char *dest_name );
void                RB_TEST_Generate_Index_Table(
    FILE *dest,
    char *dest_name,
    int type,
    char *title );
void                RB_TEST_Generate_Empty_Item(
    FILE *dest );
void                RB_TEST_Generate_Link(
    FILE *dest,
    char *dest_name,
    char *filename,
    char *labelname,
    char *linkname );
void                RB_TEST_Generate_Char(
    FILE *dest_doc,
    int c );
void                RB_TEST_Generate_Item_Name(
    FILE *dest_doc,
    char *name );
char               *RB_TEST_RelativeAddress(
    char *thisname,
    char *thatname );
int                 RB_TEST_Generate_Extra(
    FILE *dest_doc,
    int item_type,
    char *cur_char );
void                RB_TEST_Generate_False_Link(
    FILE *dest_doc,
    char *name );

void                TEST_Generate_Begin_Paragraph(
    FILE *dest_doc );
void                TEST_Generate_End_Paragraph(
    FILE *dest_doc );
void                TEST_Generate_Begin_Preformatted(
    FILE *dest_doc );
void                TEST_Generate_End_Preformatted(
    FILE *dest_doc );
void                TEST_Generate_Begin_List(
    FILE *dest_doc );
void                TEST_Generate_End_List(
    FILE *dest_doc );
void                TEST_Generate_Begin_List_Item(
    FILE *dest_doc );
void                TEST_Generate_End_List_Item(
    FILE *dest_doc );


#endif /* ROBODOC_TEST_GENERATOR_H */
