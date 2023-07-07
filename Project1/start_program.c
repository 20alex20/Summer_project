#include "all.h"
#define __FILE start_program_c
char* start_program_c = "start_program.c";


uint * __to_another_type_arr[] = {NULL, var(to_bool), NULL, var(to_array), NULL, NULL, var(to_func), var(to_int), NULL, var(to_range), var(to_string), var(to_type_iterator)};
object __const_noth = { NOTH, NULL, NULL, NULL, NULL, NULL };


void start_program() {
	SetConsoleOutputCP(65001);
	SetConsoleCP(1251);
	__flag = FALSE;
	cr__noth = &__const_noth;
	return_self = __enlon(cr__func(__return_self, FALSE, 1, NULL));

	Int = cr__class_name(INT, "int", 0, 14, return_self,
		cr__func(__to_bool__int, FALSE, 1, NULL), cr__func(__to_string__int, FALSE, 1, NULL),
		cr__func(__add__int, FALSE, 2, NULL, NULL), cr__func(__subtract__int, FALSE, 2, NULL, NULL),
		cr__func(__multiply__int, FALSE, 2, NULL, NULL), cr__func(__divide__int, FALSE, 2, NULL, NULL),
		cr__func(__rod__int, FALSE, 2, NULL, NULL), cr__func(__equal__int, FALSE, 2, NULL, NULL),
		cr__func(__more__int, FALSE, 2, NULL, NULL), cr__func(__less__int, FALSE, 2, NULL, NULL),
		cr__func(__module__int, FALSE, 2, NULL, NULL), cr__func(__bin__int, FALSE, 1, NULL),
		cr__func(__numsign__int, FALSE, 1, NULL));
	String = cr__class_name(STRING, "string", 0, 13, return_self,
		cr__func(__to_bool__string, FALSE, 1, NULL), cr__func(__to_int__string, FALSE, 1, NULL),
		cr__func(__to_array__string, FALSE, 1, NULL), cr__func(__tabi__string, FALSE, 2, NULL, NULL),
		cr__func(__slice__string, FALSE, 4, NULL, cr__int(FALSE, 0), NULL, cr__int(FALSE, 1)),
		cr__func(__add__string, FALSE, 2, NULL, NULL), cr__func(__equal__string, FALSE, 2, NULL, NULL),
		cr__func(__more__string, FALSE, 2, NULL, NULL), cr__func(__less__string, FALSE, 2, NULL, NULL),
		cr__func(__reverse__string, FALSE, 1, NULL), cr__func(__to_utf8__string, FALSE, 1, NULL),
		cr__func(__to_windows1251__string, FALSE, 1, NULL));
	Bool = cr__class_name(BOOL, "bool", 0, 6, return_self,
		cr__func(__to_int__bool, FALSE, 1, NULL), cr__func(__to_string__bool, FALSE, 1, NULL),
		cr__func(__equal__bool, FALSE, 2, NULL, NULL), cr__func(__more__bool, FALSE, 2, NULL, NULL),
		cr__func(__less__bool, FALSE, 2, NULL, NULL));
	Noth = cr__class_name(NOTH, "noth", NULL, NULL);
	ClassName = cr__class_name(CLASS_NAME, "class_name", 0, 2, return_self,
		cr__func(__equal__class_name, FALSE, 2, NULL, NULL));
	Func = cr__class_name(FUNC, "func", 0, 2, return_self,
		cr__func(__change__func, FALSE, 2, NULL, NULL));
	Array = cr__class_name(ARRAY, "array", 0, 7, return_self,
		cr__func(__to_bool__string, FALSE, 1, NULL), cr__func(__to_string__array, FALSE, 1, NULL),
		cr__func(__reverse__array, FALSE, 1, NULL), cr__func(__tabi__array, FALSE, 2, NULL, NULL),
		cr__func(__pubi__array, FALSE, 2, NULL, NULL), cr__func(__slice__array, FALSE, 4, NULL, cr__int(FALSE, 0), NULL, cr__int(FALSE, 1)));
	TypeIterator = cr__class_name(TYPE_ITERATOR, "type_iterator", 0, 2, return_self, cr__func(__next__type_iterator, FALSE, 1, NULL));
	Range = cr__class_name(RANGE, "range", 4, 2, return_self, cr__func(__next__range, FALSE, 1, NULL));

	range = __enlon(cr__func(__range, TRUE, 4, cr__func(__pr__range, TRUE, 0), cr__int(FALSE, 0), NULL, cr__int(FALSE, 1)));
	print = __enlon(cr__func(__print, FALSE, 4, cr__array(0), cr__string("", US_ASCII), cr__string(" ", US_ASCII), cr__string("\n", US_ASCII)));
	length = __enlon(cr__func(__length, FALSE, 1, NULL));
	copy = __enlon(cr__func(__copy, FALSE, 1, NULL));
	type_of = __enlon(cr__func(__type_of, FALSE, 1, NULL));
	is_instance = __enlon(cr__func(__is_instance, FALSE, 2, NULL, NULL));
	to_another_type = __enlon(cr__func(__to_another_type, FALSE, 2, NULL, NULL));
	end_program = __enlon(cr__func(__end_program, FALSE, 0));
	input = __enlon(cr__func(__input, FALSE, 1, cr__string("", US_ASCII)));

	Date_time = __enlon(cr__class_name(DATE_TIME, "Date_time", 6, 5, cr__array(12, cr__int(FALSE, 31),  cr__int(FALSE, 28),  cr__int(FALSE, 31),  cr__int(FALSE, 30),  cr__int(FALSE, 31),  cr__int(FALSE, 30),  cr__int(FALSE, 31),  cr__int(FALSE, 31),  cr__int(FALSE, 30),  cr__int(FALSE, 31),  cr__int(FALSE, 30),  cr__int(FALSE, 31)), cr__func(__today__date_time, FALSE, 1,NULL), cr__func(__now__date_time, FALSE, 1,NULL), cr__func(__to_string__date_time, FALSE, 1,NULL), cr__func(__add__date_time, FALSE, 2, NULL, NULL)));
	Dt_delta = __enlon(cr__class_name(DT_DELTA, "Dt_delta", 1, 1, cr__func(__add__dt_delta, FALSE, 2, NULL, NULL)));


	is_leap = __enlon(cr__func(__is_leap, FALSE, 2, NULL, NULL));
	add_0 = __enlon(cr__func(__add_0, FALSE, 1,NULL));
	date_time = __enlon(cr__func(__date_time, FALSE, 7,cr__func(__pr__date_time, TRUE, 0), cr__int(FALSE, 1970), cr__int(FALSE, 1), cr__int(FALSE, 1), cr__int(FALSE, 0), cr__int(FALSE, 0), cr__int(FALSE, 0)));
	dt_delta = __enlon(cr__func(__dt_delta, FALSE, 5,cr__func(__pr__dt_delta, TRUE, 0), cr__int(FALSE, 0), cr__int(FALSE, 0), cr__int(FALSE, 0), cr__int(FALSE, 0)));
}


crvar(add, 4, method(DATE_TIME, 5), method(DT_DELTA, 1), method(INT, 4), method(STRING, 7));
crvar(bin, 1, method(INT, 13));
crvar(change, 1, method(FUNC, 2));
crvar(current, 1, field(RANGE, 1));
crvar(divide, 1, method(INT, 7));
crvar(equal, 3, method(BOOL, 4), method(INT, 9), method(STRING, 8));
crvar(less, 3, method(BOOL, 6), method(INT, 11), method(STRING, 10));
crvar(module, 1, method(INT, 12));
crvar(more, 3, method(BOOL, 5), method(INT, 10), method(STRING, 9));
crvar(multiply, 1, method(INT, 6));
crvar(next, 2, method(RANGE, 2), method(TYPE_ITERATOR, 2));
crvar(numsign, 1, method(INT, 14));
crvar(pubi, 1, method(ARRAY, 6));
crvar(reverse, 2, method(ARRAY, 4), method(STRING, 11));
crvar(rod, 1, method(INT, 8));
crvar(slice, 2, method(ARRAY, 7), method(STRING, 6));
crvar(step, 1, field(RANGE, 2));
crvar(stop, 1, field(RANGE, 3));
crvar(subtract, 1, method(INT, 5));
crvar(tabi, 2, method(ARRAY, 5), method(STRING, 5));
crvar(to_array, 2, method(ARRAY, 1), method(STRING, 4));
crvar(to_bool, 4, method(BOOL, 1), method(ARRAY, 2), method(INT, 2), method(STRING, 2));
crvar(to_func, 1, method(FUNC, 1));
crvar(to_int, 3, method(BOOL, 2), method(INT, 1), method(STRING, 3));
crvar(to_range, 1, method(RANGE, 1));
crvar(to_string, 5, method(BOOL, 3), method(ARRAY, 3), method(DATE_TIME, 4), method(INT, 3), method(STRING, 1));
crvar(to_type_iterator, 1, method(TYPE_ITERATOR, 1));
crvar(to_utf8, 1, method(STRING, 12));
crvar(to_windows1251, 1, method(STRING, 13));
crvar(arr_days, 1, method(DATE_TIME, 1));
crvar(today, 1, method(DATE_TIME, 2));
crvar(now, 1, method(DATE_TIME, 3));
crvar(second, 1, field(DATE_TIME, 1));
crvar(minute, 1, field(DATE_TIME, 2));
crvar(hour, 1, field(DATE_TIME, 3));
crvar(day, 1, field(DATE_TIME, 4));
crvar(month, 1, field(DATE_TIME, 5));
crvar(year, 1, field(DATE_TIME, 6));
crvar(seconds, 1, field(DT_DELTA, 1));
