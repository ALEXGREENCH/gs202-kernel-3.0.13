/*******************************************************************************
 *
 * Filename:
 * ---------
 * aud_hd_record_custom.h
 *
 * Project:
 * --------
 *   ALPS
 *
 * Description:
 * ------------
 * This file is the header of audio customization related function or definition.
 *
 * Author:
 * -------
 * Charlie Lu.
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by CC/CQ. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * $Revision:$
 * $Modtime:$
 * $Log:$
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by CC/CQ. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef AUDIO_HD_RECORD_CUSTOM_H
#define AUDIO_HD_RECORD_CUSTOM_H

//hd_rec_fir
#define DEFAULT_HD_RECORD_FIR_Coeff \
32767,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0

#define DUMMY_HD_RECORD_FIR_Coeff_FOR_3_FIR \
32767,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
32767,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
32767,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0    


#define DEFAULT_HD_RECORD_MODE_FIR_MAPPING_CH1 \
    0, 1, 3, \
    0, 1, 3, \
    0, 1, 3, \
    0, 1, 3, \
    0, 1, 3, \
    0, 1, 3, \
    0, 1, 3, \
    0, 1, 3

#define DUMMY_HD_RECORD_MODE_FIR_MAPPING_CH1_FOR_6_MODE \
    0, 0, 0, 0, 0, 0

#define DEFAULT_HD_RECORD_MODE_FIR_MAPPING_CH2 \
    6, 6, 6, \
    6, 6, 6, \
    6, 6, 6, \
    6, 6, 6, \
    6, 6, 6, \
    6, 6, 6, \
    6, 6, 6, \
    6, 6, 6
    
#define DUMMY_HD_RECORD_MODE_FIR_MAPPING_CH2_FOR_6_MODE \
    6, 6, 6, 6, 6, 6


#endif
