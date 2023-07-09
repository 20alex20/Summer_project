#ifndef GLOBAL_VARIABLES_H
#define GLOBAL_VARIABLES_H

typedef unsigned long long ull;
typedef unsigned int uint;
typedef unsigned short ushort;
typedef unsigned char uchar;
typedef uchar bool;


typedef struct {
	ushort name, nop, flag, n;  // number of pointers
	void* start;
	size_t len;
} object;


struct Int {
	object* to_int, * to_bool, * add, * subtract;
};

struct String {
	object* to_string, * to_bool, * to_int, * to_array, * reverse, * tabi, * slice, * add;
};

struct Bool {
	object* to_bool, * to_int, * to_string;
};

struct Func {
	object* to_func, * change;
};

struct Array {
	object* to_array, * to_bool, * to_string, * reverse, * tabi, * pubi, * slice;
};

struct TypeIterator {
	object* to_type_iterator, * next;
};

struct Range {
	object* to_range, * my, * next;
};
struct RANGE {
	object* current, * step, * stop, * numsign;
};

struct Date_time {
	object* arr_days, * today, * now, * to_string, * add;
};
struct DATE_TIME {
	object* second, * minute, * hour, * day, * month, * year;
};

struct Dt_delta {
	object* add;
};
struct DT_DELTA {
	object* seconds;
};


object* Noth, * Bool, * ClassName, * Array, * Date_time, * Dt_delta, * Func, * Int, * List, * Range, * String, * TypeIterator;
object* range, * print, * length, * copy, * type_of, * is_instance, * to_another_type, * end_program, * return_self, * input, * Int, * String, * Bool, * Noth, * ClassName, * Func, * Array, * TypeIterator, * Range, * is_leap, * add_0, * date_time, * date_time, * Date_time, * dt_delta, * dt_delta, * Dt_delta;


bool __only_usascii, __return_args_names; uint __line, __pos, __nam; const char* __file;
object* __boofer_func, * __boofer_self, * __boofer_return, * cr__noth, * __classes[14];
extern uint* __to_another_type_arr[];
extern uint var(today)[], var(reverse)[], var(to_range)[], var(tabi)[], var(day)[], var(add)[], var(current)[], var(seconds)[], var(to_bool)[], var(rod)[], var(arr_days)[], var(multiply)[], var(minute)[], var(to_int)[], var(to_type_iterator)[], var(less)[], var(hour)[], var(pubi)[], var(to_array)[], var(to_string)[], var(year)[], var(divide)[], var(month)[], var(equal)[], var(more)[], var(to_utf8)[], var(step)[], var(to_windows1251)[], var(bin)[], var(slice)[], var(now)[], var(subtract)[], var(next)[], var(second)[], var(numsign)[], var(my)[], var(stop)[], var(module)[], var(change)[], var(to_func)[];


typedef enum {
	__ANOTHER_ERROR, __TYPE_METHOD_ERROR, __TYPE_ARG_ERROR, __NAME_ARG_ERROR_2, __NAME_ARG_ERROR, __NO_ARG_ERROR, __MANY_VALUES_ARG_ERROR, __NO_ELEMENT_ARRAY_ERROR, __TOO_MANY_NAMED_ARGS_ERROR, __TOO_MANY_ARGS_ERROR, __INDEX_ERROR, __LONG_INT_ERROR, __W1251_ERROR
} errors;

typedef enum {
	NOTH, BOOL, CLASS_NAME, ARRAY, DATE_TIME, DT_DELTA, FUNC, INT, LIST, RANGE, STRING, TYPE_ITERATOR
} class_name;

enum named_args {
	arg(after), arg(arr), arg(before), arg(between), arg(day), arg(days), arg(hour), arg(hours), arg(minute), arg(minutes), arg(month), arg(n), arg(name), arg(num), arg(second), arg(seconds), arg(self2), arg(self), arg(start), arg(start_str), arg(step), arg(sth), arg(stop), arg(str), arg(year)
};


#endif
