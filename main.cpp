
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
#include "nlib\Counter\counter.h"

// -*-*- List of node objects -*-*-
nBlock_Ticker          nb_nBlockNode0_Ticker     (10);
nBlock_MAX7219PSU      nb_nBlockNode1_MAX7219PSU (p5, p6, p7, p8, 8, 7);
nBlock_Ticker          nb_nBlockNode2_Ticker     (1000);
nBlock_FlipFlop        nb_nBlockNode3_FlipFlop   (0);
nBlock_GPOUT           nb_nBlockNode4_GPOUT      (P2_1, PullNone, 1);
nBlock_Counter         nb_nBlockNode5_Counter    (10000);

// -*-*- List of connection objects -*-*-
nBlockConnection    n_conn0( &nb_nBlockNode3_FlipFlop,   0,    &nb_nBlockNode4_GPOUT,      0);
nBlockConnection    n_conn1( &nb_nBlockNode2_Ticker,     0,    &nb_nBlockNode3_FlipFlop,   0);
nBlockConnection    n_conn2( &nb_nBlockNode5_Counter,    0,    &nb_nBlockNode1_MAX7219PSU, 0);
nBlockConnection    n_conn3( &nb_nBlockNode5_Counter,    0,    &nb_nBlockNode1_MAX7219PSU, 1);
nBlockConnection    n_conn4( &nb_nBlockNode0_Ticker,     0,    &nb_nBlockNode5_Counter,    0);


// -*-*- Main function -*-*-
int main(void) {
    SetupWorkbench();
    while(1) {
        ProgressNodes();
        
        // Your custom code here!
    }
}
