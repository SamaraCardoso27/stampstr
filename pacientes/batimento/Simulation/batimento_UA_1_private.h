/*********************************************************
 **
 ** File  batimento_UA_1_private.h
 **
 ** Automatically generated by SCADE Suite UA Adaptor
 ** Version R17 (build i15)
 ** 
 ** Date of generation: 2017-10-26T20:32:25
 ** Command line: C:/Program Files (x86)/Esterel Technologies/SCADE R17/SCADE/bin/uaadaptor.exe -sdy C:\Users\victo\SCADE\batimento\batimento.sdy -n C:\Program Files (x86)\Esterel Technologies\SCADE R17\SCADE Display\config\a661_description\a661.xml -outdir C:/Users/victo/SCADE/batimento/Simulation -k C:/Users/victo/SCADE/batimento/Simulation/kcg_trace.xml -o batimento_UA_1 -i batimento_interface.h -encoding ASCII C:\Users\victo\display_saude\UADF.sgfx
 *********************************************************/
#ifndef _BATIMENTO_UA_1_PRIVATE_H_
#define _BATIMENTO_UA_1_PRIVATE_H_ 

/********************************************************************************************
 * Macros Definitions : types, functions and A661 constants                                 *
 ********************************************************************************************/

/* Types Definitions */
#ifndef A661_INTERNAL
#define A661_INTERNAL static
#endif

/* Functions Definitions */
#ifndef GET_BYTE
#define GET_BYTE(n,d) (buffer_el)((((unsigned int)d)>>((n)*8)) & 0xFF)
#endif

#ifndef GET_BYTE_0
#define GET_BYTE_0(d) GET_BYTE(0,d)
#endif

#ifndef GET_BYTE_1
#define GET_BYTE_1(d) GET_BYTE(1,d)
#endif

#ifndef GET_BYTE_2
#define GET_BYTE_2(d) GET_BYTE(2,d)
#endif

#ifndef GET_BYTE_3
#define GET_BYTE_3(d) GET_BYTE(3,d)
#endif

#ifndef WRITE_USHORT
#define WRITE_USHORT(msg,d)  do { *(msg) = (unsigned char)(GET_BYTE_1((unsigned short)(d))); *(msg+1) = (unsigned char)(GET_BYTE_0((unsigned short)(d))); } while (0)
#endif

#ifndef WRITE_ULONG
#define WRITE_ULONG(msg,d)  do { *(msg) = (unsigned char)(GET_BYTE_3((unsigned long)(d))); *(msg+1) = (unsigned char)(GET_BYTE_2((unsigned long)(d))); *(msg+2) = (unsigned char)(GET_BYTE_1((unsigned long)d)); *(msg+3) = (unsigned char)(GET_BYTE_0((unsigned long)d)); } while (0)
#endif

#ifndef READ_BYTE
#define READ_BYTE(n,s,buffer) ( (*((buffer) + n) ) << 8*(s) ) 
#endif

#ifndef READ_USHORT
#define READ_USHORT(buffer)  ( READ_BYTE(0,1,buffer) + READ_BYTE(1,0,buffer) )
#endif

#ifndef READ_ULONG
#define READ_ULONG(buffer) ( READ_BYTE(0,3,buffer) + READ_BYTE(1,2,buffer) + READ_BYTE(2,1,buffer) + READ_BYTE(3,0,buffer) )
#endif

#ifndef a661_assign_string
#define a661_assign_string kcg_assign
#endif


/********************************************************************************************
 * Code for Simulation time : runtime check of string length                                *
 ********************************************************************************************/
#ifdef SIM
#include "batimento_interface.h"
#include <stdio.h>
extern char * layerstring;
extern char * widgetstring;
extern char * parameterstring;
extern void check_string_access (const char * fieldname, uaa_size stringsize, uaa_size arraysize);

#define CHECK_STRING_SIZE(fieldname, stringsize, arraysize)  check_string_access ((fieldname), (stringsize), (arraysize))
#define LAYER(s) (layerstring=(s))
#define WIDGET(s) (widgetstring=(s))
#define PARAMETER(s) (parameterstring=(s))

#else /* SIM */
#define CHECK_STRING_SIZE(fieldname, stringsize, arraysize)
#define LAYER(s)
#define WIDGET(s)
#define PARAMETER(s)
#endif /* SIM */

/* Functions to write and read float values */
void WRITE_FLOAT(buffer_el msg[], float d);
float READ_FLOAT(const buffer_el buffer[]);

/* Functions to manage the Block Structure exchanger between UA and A661 server at Run Time */
uaa_size a661_msg_cmd_header(buffer_el msg[], uaa_uint8 layer_id, uaa_uint16 context_number);
uaa_size a661_msg_csp_header(buffer_el msg[], uaa_uint16 wid);
uaa_size any_true (uaa_bool input[], uaa_size size);
uaa_size a661_com_A661_CMD_UA_REQUEST_8(buffer_el msg[], uaa_uint16 data1, uaa_uint16 data2);

/* Functions to pack messages for widgets */
uaa_size a661_com_csp_widget_NumericReadout(buffer_el msg[], uaa_uint16 wid, uaa_bool A661_VALUE__emit__, uaa_float32 A661_VALUE_Value_);
uaa_size a661_com_csp_widget_GpRectangle(buffer_el msg[], uaa_uint16 wid, uaa_bool A661_SIZE_Y__emit__, uaa_uint32 A661_SIZE_Y_SizeY_);

/* Functions to pack messages for layers */
uaa_size a661_com_layer_1(buffer_el msg[], outC_batimento* scade_ctx,  extern_out_ctx_t* extern_ctx);
#endif /* _BATIMENTO_UA_1_PRIVATE_H_ */

/*********************************************************
 ** End of file
 ** End of generation: 2017-10-26T20:32:25
 *********************************************************/
