/*********************************************************
 **
 ** File  Operator1_UA_1.c
 **
 ** Automatically generated by SCADE Suite UA Adaptor
 ** Version 18.0 (build i12)
 ** 
 ** Date of generation: 2017-09-22T00:20:04
 ** Command line: C:/Program Files/ANSYS Inc/v180/SCADE/SCADE/bin/uaadaptor.exe -sdy C:\Users\Julhio\Documents\ITA\CE-237\stampstr\hospitais\Time3\US34\US34Project\US34Project.sdy -n C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Display\config\a661_description\a661.xml -outdir C:/Users/Julhio/Documents/ITA/CE-237/stampstr/hospitais/Time3/US34/US34Project/Simulation -k C:/Users/Julhio/Documents/ITA/CE-237/stampstr/hospitais/Time3/US34/US34Project/Simulation/kcg_trace.xml -o Operator1_UA_1 -i US34Project_interface.h -encoding ASCII C:\Users\Julhio\Documents\ITA\CE-237\stampstr\hospitais\Time3\US34\US34\US34.sgfx
 *********************************************************/
#include "kcg_sensors.h"
#include "Operator1_UA_1.h"
#include "Operator1_UA_1_constants.h"
#include "Operator1_UA_1_private.h"

/********************************************************************************************
 * Send messages to the A661 server                                                         *
 ********************************************************************************************/
 uaa_size Operator1_UA_1_send(buffer_el msg[], 
  outC_Operator1* scade_ctx,  extern_out_ctx_t * extern_ctx){
  uaa_size offset = 0;
  
  offset = offset + a661_com_layer_1(msg + offset, scade_ctx, extern_ctx);
  return offset ;
}

/********************************************************************************************
 * Receive notifications from the A661 server                                               *
 ********************************************************************************************/
uaa_size Operator1_UA_1_receive(buffer_el buffer[],  uaa_size buffer_size, 
  void* scade_ctx,  extern_in_ctx_t * extern_ctx){
  /*  No input in SCADE Suite model, function intentionally left empty */
  return 0 ;
}

/********************************************************************************************
 * Clear notifications                                                                      *
 ********************************************************************************************/
void Operator1_UA_1_receive_clear(void* scade_ctx, 
  extern_in_ctx_t * extern_ctx){
  
}

/*********************************************************
 ** End of file
 ** End of generation: 2017-09-22T00:20:04
 *********************************************************/

