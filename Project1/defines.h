#ifndef DEFINES_H
#define DEFINES_H


#define NULL 0
#define END 0
#define TRUE 1
#define FALSE 0
#define lenptr sizeof(object*)
#define StopIteration END

#define US_ASCII 0
#define WINDOWS_1251 1
#define UTF_8 2


#define __fl() __file = __FILE; __line = __LINE__
#define start_func_0()\
	if (__return_args_names)\
		return NULL;\
	__fl(); __start_func_0();
#define start_func(arr_index, ...)\
	static uint names[] = { __VA_ARGS__ };\
	if (__return_args_names)\
		return names;\
	object** __nextarg = (object **)&__func + 1; __fl();\
	__finarg(__func->n, names, arr_index, __func->start, __nextarg)
#define start_method() __open_access(self, __class_name, __class)
#define start_method2() __open_access(self, __class_name, __class); __open_access(self2, __class_name_2, __class_2)
#define returnf0(sth) __boofer_return = __enlon(sth); return __returnfm(__boofer_return, __clear clear)
#define returnf(sth) __boofer_return = __enlon(sth); return __returnfm(__boofer_return, __dap(__nextarg, __func->n), __clear clear)
#define returnf2(sth) __boofer_return = __enlon(sth); return __returnfm(__boofer_return, __dtp(self, self2), __clear clear)
#define __self_dop(sth) __dop_and_do(self, sth)
#define __self_dop_2(sth) __dop_and_do_2(self, self2, sth)

#define func(f, pos, nam, ...) __pf(f, pos, nam)(__boofer_func, __VA_ARGS__)
#define meth(sth, i, pos, nam, ...) __pm(sth, __##i##_var, pos, nam)(__boofer_func, __boofer_self, __VA_ARGS__)

#define if_bool(sth) if (meth(sth, to_bool, 0, 0)->flag)
#define not(self) cr__bool(meth(self, to_bool, 0, 0)->flag ^ 1)
#define and(self, self2) cr__bool(meth(self, to_bool, 0, 0)->flag && meth(self2, to_bool, 0, 0)->flag)
#define or(self, self2) cr__bool(meth(self, to_bool, 0, 0)->flag || meth(self2, to_bool, 0, 0)->flag)
#define is(self, self2) cr__bool(self == self2)

#define fr(sth, i) (*__from(sth, __##i##_var))  // !
#define frth(i) ((struct __class*)(*__nextarg)->start)->i  // !
#define frs(i) ((struct __class*)self->start)->i  // !
#define frscl(i) ((struct __class_name*)__class_name->start)->i
#define frs2(i) ((struct __class_2*)self2->start)->i  // !
#define frscl2(i) ((struct __class_name_2*)__class_name_2->start)->i  // !

#define var(name) __##name##_var
#define arg(name) __##name##_arg
#define crvar(name, len, ...) uint var(name)[] = {len, __VA_ARGS__}
#define field(class, number) class, number
#define method(class, number) class, number << 16

#define fast_module(sth, f) __fm(sth, sth->flag, sth->flag = 0, f)  // !
#define cr__noth() cr__noth
#define narg(name, sth) arg(name), sth
#define emarg __empty_arg()
#define ass(sth, sth2) __asn(&sth, sth2)

#define __fast_error(...) __error(__FILE, __LINE__, __VA_ARGS__)
#define type_arg_error(sth) __error(__FILE, __LINE__, __TYPE_ARG_ERROR, sth->name)  // !


#endif
