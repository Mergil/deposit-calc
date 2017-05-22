#include "../thirdparty/ctest.h"
#include "../src/deposit.h"
#include <stdio.h>
#include <stdlib.h>

CTEST(percent, percent_test1)
{
    int days = 1;
    int vklad = 10000;
    int expected = 0.9*vklad;
    int result = calc_low_days(vklad,days);
    ASSERT_EQUAL(expected, result);
}


CTEST(percent, percent_test2)
{
    int days = 120;
    int vklad = 100000;
    int expected = 1.02*vklad ;
    int result = low_then_100000(vklad,days);
    ASSERT_EQUAL(expected, result);
}


CTEST(percent, percent_test3)
{
    int days = 121;
    int vklad  = 100001;
    int expected = 1.08*vklad;
    int result = calc_more_100000(vklad,days);
    ASSERT_EQUAL(expected, result);
}