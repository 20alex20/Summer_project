#include "all.h"
const char* range_c = __FILE__;
#define __FILE range_c
#define __class RANGE
#define __class_name Range



object* __pr__range(object* __func) {
	start_func_0();
	return __prepare_class(Range);
}


#define clear (0)
object* __range(object* __func, object* self, object* start, object* stop, object* step, ...) {
	start_func(NULL, arg(self), 1, arg(start), 2, arg(step), 4, arg(stop), 3);
	ass(frs(current), start);
	ass(frs(stop), stop);
	ass(frs(step), step);
	ass(frs(numsign), meth(step, numsign, 0, 0));
	returnf(self);
}


#define clear (1, num)
object* __next__range(object* __func, object* self, ...) {
	start_func(NULL, arg(self), 1);
	object* num = NULL;
	ass(num, frs(current));
	if (frs(numsign)->flag) {
		if (not(meth(num, more, 1, 0, frs(stop)))->flag) {
			returnf(StopIteration);
		}
	}
	else {
		if (not(meth(num, less, 1, 0, frs(stop)))->flag) {
			returnf(StopIteration);
		}
	}
	ass(frs(current), meth(frs(current), add, 1, 0, frs(step)));
	returnf(num);
}
