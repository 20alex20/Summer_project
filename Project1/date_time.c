#include "all.h"
#define __FILE date_time_c
char* date_time_c = "date_time.c";
#define __class DATE_TIME
#define __class_name Date_time


object* __pr__date_time(object* __func) {
    start_func_0();
    return __prepare_class(Date_time);
}


#define clear (1, cur_days)
object* __date_time (object* __func, object* self, object* year, object* month, object* day, object* hour, object* minute, object* second, ...) { start_func(NULL, arg(day), 4, arg(hour), 5, arg(minute), 6, arg(month), 3, arg(second), 7, arg(self), 1, arg(year), 2); object* cur_days = NULL;
    ass(minute, meth(minute, add, 1, 0, meth(second, divide, 1, 0, cr__int(FALSE, 60))));
    ass(frs(second), meth(second, rod, 1, 0, cr__int(FALSE, 60)));
    ass(hour, meth(hour, add, 1, 0, meth(minute, divide, 1, 0, cr__int(FALSE, 60))));
    ass(frs(minute), meth(minute, rod, 1, 0, cr__int(FALSE, 60)));
    ass(day, meth(day, add, 1, 0, meth(hour, divide, 1, 0, cr__int(FALSE, 24))));
    ass(frs(hour), meth(day, rod, 1, 0, cr__int(FALSE, 24)));
    ass(year, meth(year, add, 1, 0, meth(meth(month, subtract, 1, 0, cr__int(FALSE, 1)), divide, 1, 0, cr__int(FALSE, 12))));
    ass(month, meth(meth(meth(month, subtract, 1, 0, cr__int(FALSE, 1)), rod, 1, 0, cr__int(FALSE, 12)), add, 1, 0, cr__int(FALSE, 1)));

    ass(cur_days, meth(meth(frscl(arr_days), tabi, 1, 0, meth(month, subtract, 1, 0, cr__int(FALSE, 1))), add, 1, 0, func(is_leap, 2, 0, year,  month)));
    while (meth(meth(day, more, 1, 0, cur_days), to_bool, 0, 0)->flag) {
        ass(day, meth(day, subtract, 1, 0, cur_days));
        ass(month, meth(month, add, 1, 0, cr__int(FALSE, 1)));
        if_bool (meth(month, equal, 1, 0, cr__int(FALSE, 13))) {
            ass(year, meth(year, add, 1, 0, cr__int(FALSE, 1)));
            ass(month, cr__int(FALSE, 1));
        }
        ass(cur_days, meth(meth(frscl(arr_days), tabi, 1, 0, meth(month, subtract, 1, 0, cr__int(FALSE, 1))), add, 1, 0, func(is_leap, 2, 0, year,  month)));
    }
    ass(frs(day), day);
    ass(frs(month), month);
    ass(frs(year), year);
    returnf(self);
}


#define clear (0)
object* __today__date_time (object* __func, object* self) { start_func(NULL, arg(self), 1); start_method(); 
    returnf(func(date_time, 0, 3, narg(year, cr__int(FALSE, 1970)),  narg(month, cr__int(FALSE, 1)),  narg(day, cr__int(FALSE, 1))));
}


#define clear (0)
object* __now__date_time (object* __func, object* self) { start_func(NULL, arg(self), 1); start_method(); 
    returnf(func(date_time, 0, 6, narg(year, cr__int(FALSE, 1970)),  narg(month, cr__int(FALSE, 1)),  narg(day, cr__int(FALSE, 1)),  narg(hour, cr__int(FALSE, 0)),  narg(minute, cr__int(FALSE, 0)),  narg(second, cr__int(FALSE, 0))));
}


#define clear (0)
object* __to_string__date_time (object* __func, object* self) { start_func(NULL, arg(self), 1); start_method(); 
    returnf(meth(meth(meth(meth(meth(meth(meth(meth(meth(meth(func(add_0, 1, 0, frs(day)), add, 1, 0, cr__string(".", UTF_8)), add, 1, 0, func(add_0, 1, 0, frs(month))), add, 1, 0, cr__string(".", UTF_8)), add, 1, 0, meth(frs(year), to_string, 0, 0)), add, 1, 0, cr__string(" ", UTF_8)), add, 1, 0, func(add_0, 1, 0, frs(hour))), add, 1, 0, cr__string(":", UTF_8)), add, 1, 0, func(add_0, 1, 0, frs(minute))), add, 1, 0, cr__string(":", UTF_8)), add, 1, 0, func(add_0, 1, 0, frs(second))));
}


#define __class_2 DT_DELTA
#define __class_name_2 Dt_delta
#define clear (0)
object* __add_dt_delta__date_time (object* self, object* self2, ...) {start_method2(); 
    returnf2(func(date_time, 0, 6, narg(year, frs(year)),  narg(month, frs(month)),  narg(day, frs(day)),  narg(hour, frs(hour)),  narg(minute, frs(minute)),  narg(second, meth(frs(second), add, 1, 0, frs2(seconds)))));
}

object* __add__date_time (object* __func, object* self, object* self2, ...) {
	start_func(NULL, arg(self), 1, arg(self2), 2);
	static uint class_names[] = { DT_DELTA };
	static object* (*functions[]) (object * self, object * self2) = { __add_dt_delta__date_time };
	return __create_distribution(self, self2, class_names, sizeof(class_names), functions, NULL);
}
