# 1 "t1mc_mc.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "t1mc_mc.c"
typedef int int8_t __attribute__ ((__mode__ (__QI__)));
typedef int int64_t __attribute__ ((__mode__ (__DI__)));

inline unsigned int gnu_dev_minor (unsigned long long int __dev) ;

extern void abort (void) __attribute__ ((__noreturn__));

extern void absder (void) __attribute__ ((__const__));

extern double atof (__const char *__nptr) __attribute__ ((__pure__));

extern int snprintf (char *__restrict __s, int __maxlen, __const char *__restrict __format, ...) __attribute__ ((__format__ (__printf__, 3, 4)));




extern void foox(__const int * __restrict abc);
extern void fooy(__const int * __restrict);


int foo3() {
 printf("inside foo3\n");
 return 0;
}

int foo4() {
 printf("call foo3 inside foo4\n");
 foo3();
 printf("end of call foo3 inside foo4\n");
}


int main() {
 printf("call foo3 inside main\n");

 foo3();

 printf("end of calling foo3 inside main\n");

 foo4();

        return 0;
}
