#include "all.h"
#define __FILE array_c
char* array_c = "array.c";


object* cr__array(size_t len, ...) {
	object* self = (object*)calloc(1, sizeof(object));
	self->name = ARRAY;
	self->len = len;
	if (len == 0)
		return self;
	object** ar = self->start = malloc(len * lenptr), **nextarg = &len + 1;
	if (!*nextarg)  // Если второй аргумент FALSE
		for (size_t i = 0; i < len; i++)
			ar[i] = cr__noth;
	else
		for (size_t i = 0; i < len; i++)
			ar[i] = __enlon(nextarg[i]);
	return self;
}



#define __class_name String
#define clear (4, iterator, element, string, flag)
object* __to_string__array(object* __func, object* self, ...) {
	start_func(NULL, arg(self), 1);
	object* iterator = NULL, * element = NULL, * string = NULL, * flag = NULL;
	ass(flag, cr__bool(FALSE));
	ass(string, cr__string("array[", US_ASCII));
	ass(iterator, cr__type_iterator(self));
	while (ass(element, meth(iterator, next, 0, 0))) {
		if (flag->flag) {
			ass(string, cr__string(", ", US_ASCII));
		}
		else {
			ass(flag, cr__bool(TRUE));
		}
		ass(string, func(frscl(add), 2, 0, string, meth(element, to_string, 0, 0)));
	}
	returnf(func(frscl(add), 2, 0, string, cr__string("]", US_ASCII)));
}



#define clear (0)
object* __tabi__array(object* __func, object* self, object* num, ...) {
	start_func(NULL, arg(num), 2, arg(self), 1);
	size_t n = __module_index2(num, self->len); // получение реального индекса
	returnf(*((object**)self->start + n));
}


#define clear (0)
object* __pubi__array(object* __func, object* self, object* num, object* sth, ...) {
	start_func(NULL, arg(num), 2, arg(self), 1, arg(sth), 3);
	object** n = (object**)self->start + __module_index2(num, self->len);
	__dop(*n);
	*n = __enlon(sth);
	returnf(sth);
}


#define clear (0)
object* __slice__array(object* __func, object* self, object* start, object* stop, object* step, ...) {
	start_func(NULL, arg(self), 1, arg(start), 2, arg(step), 4, arg(stop), 3);
	long long len = self->len, start_index = __module_index(start, len), end_index = __module_index(stop, len), e = to_c_size_t(step);
	bool flag = step->flag;
	if (start_index == end_index || (start_index > end_index) ^ flag)
		return cr__array(0);
	object** arr = self->start;
	len = abs(end_index - start_index);
	len = len / e + (len % e != 0);
	object** newarray = (object**)malloc(len * lenptr);
	e *= 1 - 2 * self->flag;  // !!!
	while ((start_index < end_index) ^ flag && start_index != end_index && start_index >= 0) {
		*newarray++ = __enlon(arr[start_index]);
		start_index += e;
	}
	object* sth = (object*)calloc(1, sizeof(object));
	sth->name = ARRAY;
	sth->len = len;
	sth->start = newarray;
	returnf(sth);
}



#define clear (0)
object* __reverse__array(object* __func, object* self, ...) {
	start_func(NULL, arg(self), 1);
	size_t len = self->len;
	object** arr = (object**)malloc(len * lenptr), ** arrstart = arr, ** old = self->start;
	for (size_t i = 1; i <= len; i++)
		*arr++ = __enlon(old[len - i]);
	object* sth = (object*)calloc(1, sizeof(object));
	sth->name = ARRAY;
	sth->len = len;
	sth->start = arrstart;
	returnf(sth);
}
