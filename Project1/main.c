#include "all.h"
#define __FILE main_c
char* main_c = "main.c";

int main() { start_program(); object* dt = NULL, * num = NULL, * date = NULL;
    ass(dt, func(date_time, 0, 0));
    __(func(print, 1, 0, meth(dt, now, 0, 0)));
    
    ass(num, meth(func(input, 0, 0), to_int, 0, 0));
    ass(date, meth(dt, today, 0, 0));
    while (meth(meth(fr(date, year), less, 1, 0, cr__int(FALSE, 2030)), to_bool, 0, 0)->flag) {
        __(func(print, 6, 1, cr__string("year: ", UTF_8), fr(date, year), cr__string(",\tmonth: ", UTF_8),
            fr(date, month), cr__string(",\tday: ", UTF_8), fr(date, day), narg(between, cr__string("", UTF_8))));
        ass(date, meth(date, add, 1, 0, func(dt_delta, 2, 0,  emarg,  num)));
    }
	printf("\n"); system("pause"); return END;
} 
