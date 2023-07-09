#include "all.h"
#define __FILE func_c
char* func_c = "func.c";


object* cr__func(object* (*f) (), bool flag, ushort len, ...) {
	object* self = (object*)calloc(1, sizeof(object));
	self->name = FUNC;
	self->nop = 0;
	self->len = f;
	self->flag = flag;
	self->n = len;
	ptrdiff_t* nextarg = (ptrdiff_t*)&len + 1;
	object** args = (object**)malloc(len * lenptr);
	self->start = args;
	for (ushort i = 0; i < len; i++)
		args[i] = __enlon(nextarg[i]);
	return self;
}


object* __change__func(object** __func, object* self, object* flag, ...) {  // правила вызова
	__enlon(self);
	object** nextarg = &__func + 3;
	if (__pos < 2)
		__fast_error(__ANOTHER_ERROR, "In this method the first two arguments must be positional");
	__pos -= 2;
	if (self == NULL)
		__fast_error(__NO_ARG_ERROR, 0);
	if (flag != NULL) {
		if (flag->name != BOOL)
			type_arg_error(flag);
		self->flag = flag->flag;
	}
	if (__pos + __nam == 0)
		return cr__noth;
	__return_args_names = TRUE;
	uint* names = func(self, __pos, __nam);
	__return_args_names = FALSE;
	if (!names)
		__fast_error(__ANOTHER_ERROR, "Have not got any arguments to change");
	object** sth = self->start;
	ushort len = self->n;
	self->start = __finarg2(len, names, sth, nextarg);
	for (ushort i = 0; i < len; i++)
		__dop(sth[i]);
	free(sth);
	__dop(self);
	return cr__noth;
}
