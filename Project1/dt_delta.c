#include "all.h"
#define __FILE dt_delta_c
char* dt_delta_c = "dt_delta.c";
#define __class DT_DELTA
#define __class_name Dt_delta


object* __pr__dt_delta(object* __func) {
    start_func_0();
    return __prepare_class(Dt_delta);
}


#define clear (0)
object* __dt_delta (object* __func, object* self, object* days, object* hours, object* minutes, object* seconds, ...) { start_func(NULL, arg(days), 2, arg(hours), 3, arg(minutes), 4, arg(seconds), 5, arg(self), 1); 
    ass(hours, meth(meth(days, multiply, 1, 0, cr__int(FALSE, 24)), add, 1, 0, hours));
    ass(minutes, meth(meth(hours, multiply, 1, 0, cr__int(FALSE, 60)), add, 1, 0, minutes));
    ass(frs(seconds), meth(meth(minutes, multiply, 1, 0, cr__int(FALSE, 60)), add, 1, 0, seconds));
    returnf(self);
}


#define __class_2 DT_DELTA
#define __class_name_2 Dt_delta
#define clear (0)
object* __add_dt_delta__dt_delta (object* self, object* self2, ...) {start_method2(); 
    returnf2(func(dt_delta, 1, 0, meth(frs(seconds), add, 1, 0, frs2(seconds))));
}

#define __class_2 DATE_TIME
#define __class_name_2 Date_time
#define clear (0)
object* __add_date_time__dt_delta (object* self, object* self2, ...) {start_method2(); 
    returnf2(func(date_time, 0, 6, narg(year, frs2(year)),  narg(month, frs2(month)),  narg(day, frs2(day)),  narg(hour, frs2(hour)),  narg(minute, frs2(minute)),  narg(second, meth(frs2(second), add, 1, 0, frs(seconds)))));
}

object* __add__dt_delta (object* __func, object* self, object* self2, ...) {
	start_func(NULL, arg(self), 1, arg(self2), 2);
	static uint class_names[] = { DT_DELTA, DATE_TIME };
	static object* (*functions[]) (object * self, object * self2) = { __add_dt_delta__dt_delta, __add_date_time__dt_delta };
	return __create_distribution(self, self2, class_names, sizeof(class_names), functions, __add_dt_delta__dt_delta);
}
