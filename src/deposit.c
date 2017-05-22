#include <stdio.h>
#include "deposit.h"

int calc_low_days(int vklad, int days)
{
        if (days>=0 && days <=30) {
            vklad=0.9*vklad;
        
       }
       return vklad;
}

int low_then_100000(int vklad, int days)
{       
     
            if(days>30 && days<=120) {
                vklad=1.02*vklad;
            }

            if(days> 120 && days<=240){
            vklad=1.06*vklad;
            }

            if(days>240 && days<=365){
            vklad=1.12*vklad;
            }
            return vklad;
}

int calc_more_100000(int vklad, int days)
{          

     
            if(days>30 && days<=120) {
                vklad=1.03*vklad;
            }

            if(days> 120 && days<=240){
            vklad=1.08*vklad;
            }

            if(days>240 && days<=365){
            vklad=1.15*vklad;
            }
            return vklad;
}