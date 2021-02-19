
/* ================================================================ *
 *          Automatically generated by n-Blocks Studio 2.0          *
 *                                                                  *
 *                         www.n-blocks.net                         *
 * ================================================================ */
#include "nlib\nblocks.h"
#include "nlib\BSP\bsp.h"
// Custom nodes:
#include "nlib\Ticker\ticker.h"
#include "nlib\MAX7219PSU\max7219psu.h"
#include "nlib\FlipFlop\flipflop.h"
#include "nlib\GPOUT\gpout.h"
#include "nlib\StringFormat\stringformat.h"
#include "nlib\Counter\counter.h"
#include "nlib\OLEDisplay\OLEDisplay.h"

// -*-*- List of node objects -*-*-
nBlock_Ticker            nb_nBlockNode0_Ticker       (1000);
nBlock_MAX7219PSU        nb_nBlockNode1_MAX7219PSU   (p5, p6, p7, p8, 8, 7);
nBlock_Ticker            nb_nBlockNode2_Ticker       (250);
nBlock_FlipFlop          nb_nBlockNode3_FlipFlop     (0);
nBlock_GPOUT             nb_nBlockNode4_GPOUT        (LED1, PullNone, 1);
nBlock_StringFormat      nb_nBlockNode5_StringFormat ("Counter value=%d \r ");
nBlock_Counter           nb_nBlockNode6_Counter      (10000);
nBlock_OLEDisplay        nb_nBlockNode7_OLEDisplay   (p9, p10, p27);

// -*-*- List of connection objects -*-*-
nBlockConnection    n_conn0( &nb_nBlockNode5_StringFormat, 0,    &nb_nBlockNode7_OLEDisplay,   0);
nBlockConnection    n_conn1( &nb_nBlockNode3_FlipFlop,     0,    &nb_nBlockNode4_GPOUT,        0);
nBlockConnection    n_conn2( &nb_nBlockNode2_Ticker,       0,    &nb_nBlockNode3_FlipFlop,     0);
nBlockConnection    n_conn3( &nb_nBlockNode6_Counter,      0,    &nb_nBlockNode1_MAX7219PSU,   0);
nBlockConnection    n_conn4( &nb_nBlockNode6_Counter,      0,    &nb_nBlockNode1_MAX7219PSU,   1);
nBlockConnection    n_conn5( &nb_nBlockNode6_Counter,      0,    &nb_nBlockNode5_StringFormat, 0);
nBlockConnection    n_conn6( &nb_nBlockNode0_Ticker,       0,    &nb_nBlockNode6_Counter,      0);


// -*-*- Main function -*-*-
int main(void) {
    SetupWorkbench();
    while(1) {
        ProgressNodes();
        
        // Your custom code here!
    }
}
