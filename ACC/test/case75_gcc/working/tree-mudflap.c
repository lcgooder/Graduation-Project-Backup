
# 1 "../.././gcc/tree-mudflap.c" 
# 1 "/home/czhang/gcc-4.1.1/host-i686-pc-linux-gnu/gcc//" 
# 1 "<built-in>" 
# 1 "<command line>" 
# 1 "../.././gcc/tree-mudflap.c" 
# 24 "../.././gcc/tree-mudflap.c" 
# 1 "./config.h" 1
# 1 "./auto-host.h" 1
# 4 "./config.h" 2
# 1 "../.././gcc/../include/ansidecl.h" 1
# 6 "./config.h" 2
# 25 "../.././gcc/tree-mudflap.c" 2
# 1 "../.././gcc/system.h" 1
# 28 "../.././gcc/system.h" 
# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.0/include/stdarg.h" 1 3 4
# 43 "/usr/lib/gcc/i386-redhat-linux/4.1.0/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list; 
#line 105 "/usr/lib/gcc/i386-redhat-linux/4.1.0/include/stdarg.h"
typedef  __gnuc_va_list va_list; 
# 105 "/usr/lib/gcc/i386-redhat-linux/4.1.0/include/stdarg.h" 3 4
# 29 "../.././gcc/system.h" 2
# 39 "../.././gcc/system.h" 
# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.0/include/stddef.h" 1 3 4
# 152 "/usr/lib/gcc/i386-redhat-linux/4.1.0/include/stddef.h" 3 4
typedef int ptrdiff_t; 
#line 214 "/usr/lib/gcc/i386-redhat-linux/4.1.0/include/stddef.h"
typedef unsigned int size_t; 
# 214 "/usr/lib/gcc/i386-redhat-linux/4.1.0/include/stddef.h" 3 4
# 326 "/usr/lib/gcc/i386-redhat-linux/4.1.0/include/stddef.h" 3 4
typedef long int wchar_t; 
# 40 "../.././gcc/system.h" 2
# 1 "/usr/include/stdio.h" 1 3 4
# 28 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 329 "/usr/include/features.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 313 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 314 "/usr/include/sys/cdefs.h" 2 3 4
# 330 "/usr/include/features.h" 2 3 4
# 352 "/usr/include/features.h" 3 4
# 1 "/usr/include/gnu/stubs.h" 1 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 5 "/usr/include/gnu/stubs.h" 2 3 4
# 1 "/usr/include/gnu/stubs-32.h" 1 3 4
# 8 "/usr/include/gnu/stubs.h" 2 3 4
# 353 "/usr/include/features.h" 2 3 4
# 29 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.0/include/stddef.h" 1 3 4
# 35 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/bits/types.h" 1 3 4
# 28 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 29 "/usr/include/bits/types.h" 2 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.0/include/stddef.h" 1 3 4
# 34 "/usr/include/bits/types.h" 2 3 4
typedef unsigned char __u_char; 
#line 35 "/usr/include/bits/types.h"
typedef unsigned short int __u_short; 
#line 36 "/usr/include/bits/types.h"
typedef unsigned int __u_int; 
#line 37 "/usr/include/bits/types.h"
typedef unsigned long int __u_long; 
#line 40 "/usr/include/bits/types.h"
typedef signed char __int8_t; 
#line 41 "/usr/include/bits/types.h"
typedef unsigned char __uint8_t; 
#line 42 "/usr/include/bits/types.h"
typedef signed short int __int16_t; 
#line 43 "/usr/include/bits/types.h"
typedef unsigned short int __uint16_t; 
#line 44 "/usr/include/bits/types.h"
typedef signed int __int32_t; 
#line 45 "/usr/include/bits/types.h"
typedef unsigned int __uint32_t; 
#line 50 "/usr/include/bits/types.h"
 __extension__ typedef signed long long int __int64_t; 
#line 51 "/usr/include/bits/types.h"
 __extension__ typedef unsigned long long int __uint64_t; 
#line 59 "/usr/include/bits/types.h"
 __extension__ typedef long long int __quad_t; 
#line 60 "/usr/include/bits/types.h"
 __extension__ typedef unsigned long long int __u_quad_t; 
# 134 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/typesizes.h" 1 3 4
# 137 "/usr/include/bits/types.h" 2 3 4
 __extension__ typedef  __u_quad_t __dev_t; 
#line 138 "/usr/include/bits/types.h"
 __extension__ typedef unsigned int __uid_t; 
#line 139 "/usr/include/bits/types.h"
 __extension__ typedef unsigned int __gid_t; 
#line 140 "/usr/include/bits/types.h"
 __extension__ typedef unsigned long int __ino_t; 
#line 141 "/usr/include/bits/types.h"
 __extension__ typedef  __u_quad_t __ino64_t; 
#line 142 "/usr/include/bits/types.h"
 __extension__ typedef unsigned int __mode_t; 
#line 143 "/usr/include/bits/types.h"
 __extension__ typedef unsigned int __nlink_t; 
#line 144 "/usr/include/bits/types.h"
 __extension__ typedef long int __off_t; 
#line 145 "/usr/include/bits/types.h"
 __extension__ typedef  __quad_t __off64_t; 
#line 146 "/usr/include/bits/types.h"
 __extension__ typedef int __pid_t; 
#line 147 "/usr/include/bits/types.h"
 __extension__ typedef struct {int __val[2]; }__fsid_t; 
#line 148 "/usr/include/bits/types.h"
 __extension__ typedef long int __clock_t; 
#line 149 "/usr/include/bits/types.h"
 __extension__ typedef unsigned long int __rlim_t; 
#line 150 "/usr/include/bits/types.h"
 __extension__ typedef  __u_quad_t __rlim64_t; 
#line 151 "/usr/include/bits/types.h"
 __extension__ typedef unsigned int __id_t; 
#line 152 "/usr/include/bits/types.h"
 __extension__ typedef long int __time_t; 
#line 153 "/usr/include/bits/types.h"
 __extension__ typedef unsigned int __useconds_t; 
#line 154 "/usr/include/bits/types.h"
 __extension__ typedef long int __suseconds_t; 
#line 156 "/usr/include/bits/types.h"
 __extension__ typedef int __daddr_t; 
#line 157 "/usr/include/bits/types.h"
 __extension__ typedef long int __swblk_t; 
#line 158 "/usr/include/bits/types.h"
 __extension__ typedef int __key_t; 
#line 161 "/usr/include/bits/types.h"
 __extension__ typedef int __clockid_t; 
#line 164 "/usr/include/bits/types.h"
 __extension__ typedef void *__timer_t; 
#line 167 "/usr/include/bits/types.h"
 __extension__ typedef long int __blksize_t; 
#line 172 "/usr/include/bits/types.h"
 __extension__ typedef long int __blkcnt_t; 
#line 173 "/usr/include/bits/types.h"
 __extension__ typedef  __quad_t __blkcnt64_t; 
#line 176 "/usr/include/bits/types.h"
 __extension__ typedef unsigned long int __fsblkcnt_t; 
#line 177 "/usr/include/bits/types.h"
 __extension__ typedef  __u_quad_t __fsblkcnt64_t; 
#line 180 "/usr/include/bits/types.h"
 __extension__ typedef unsigned long int __fsfilcnt_t; 
#line 181 "/usr/include/bits/types.h"
 __extension__ typedef  __u_quad_t __fsfilcnt64_t; 
#line 183 "/usr/include/bits/types.h"
 __extension__ typedef int __ssize_t; 
#line 187 "/usr/include/bits/types.h"
typedef  __off64_t __loff_t; 
#line 188 "/usr/include/bits/types.h"
typedef  __quad_t *__qaddr_t; 
#line 189 "/usr/include/bits/types.h"
typedef char *__caddr_t; 
#line 192 "/usr/include/bits/types.h"
 __extension__ typedef int __intptr_t; 
#line 195 "/usr/include/bits/types.h"
 __extension__ typedef unsigned int __socklen_t; 
#line 46 "/usr/include/stdio.h"
typedef struct _IO_FILE FILE; 
# 37 "/usr/include/stdio.h" 2 3 4
# 62 "/usr/include/stdio.h" 3 4
typedef struct _IO_FILE __FILE; 
# 72 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/libio.h" 1 3 4
# 32 "/usr/include/libio.h" 3 4
# 1 "/usr/include/_G_config.h" 1 3 4
# 14 "/usr/include/_G_config.h" 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.0/include/stddef.h" 1 3 4
# 355 "/usr/lib/gcc/i386-redhat-linux/4.1.0/include/stddef.h" 3 4
typedef unsigned int wint_t; 
# 15 "/usr/include/_G_config.h" 2 3 4
# 24 "/usr/include/_G_config.h" 3 4
# 1 "/usr/include/wchar.h" 1 3 4
# 48 "/usr/include/wchar.h" 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.0/include/stddef.h" 1 3 4
# 49 "/usr/include/wchar.h" 2 3 4
# 1 "/usr/include/bits/wchar.h" 1 3 4
# 51 "/usr/include/wchar.h" 2 3 4
# 84 "/usr/include/wchar.h" 3 4
typedef struct {int __count; union { wint_t __wch; char __wchb[4]; }__value; }__mbstate_t; 
#line 30 "/usr/include/_G_config.h"
typedef struct { __off_t __pos;  __mbstate_t __state; }_G_fpos_t; 
#line 35 "/usr/include/_G_config.h"
typedef struct { __off64_t __pos;  __mbstate_t __state; }_G_fpos64_t; 
# 25 "/usr/include/_G_config.h" 2 3 4
# 44 "/usr/include/_G_config.h" 3 4
# 1 "/usr/include/gconv.h" 1 3 4
# 28 "/usr/include/gconv.h" 3 4
# 1 "/usr/include/wchar.h" 1 3 4
# 48 "/usr/include/wchar.h" 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.0/include/stddef.h" 1 3 4
# 49 "/usr/include/wchar.h" 2 3 4
# 29 "/usr/include/gconv.h" 2 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.0/include/stddef.h" 1 3 4
# 51 "/usr/include/gconv.h" 2 3 4
enum {__GCONV_OK=0,__GCONV_NOCONV,__GCONV_NODB,__GCONV_NOMEM,__GCONV_EMPTY_INPUT,__GCONV_FULL_OUTPUT,__GCONV_ILLEGAL_INPUT,__GCONV_INCOMPLETE_INPUT,__GCONV_ILLEGAL_DESCRIPTOR,__GCONV_INTERNAL_ERROR}; 
#line 59 "/usr/include/gconv.h"
enum {__GCONV_IS_LAST=0x0001,__GCONV_IGNORE_ERRORS=0x0002}; 
#line 63 "/usr/include/gconv.h"
struct __gconv_step ; 
#line 64 "/usr/include/gconv.h"
struct __gconv_step_data ; 
#line 65 "/usr/include/gconv.h"
struct __gconv_loaded_object ; 
#line 66 "/usr/include/gconv.h"
struct __gconv_trans_data ; 
#line 72 "/usr/include/gconv.h"
typedef int (*__gconv_fct)(struct __gconv_step *, struct __gconv_step_data *, __const unsigned char **, __const unsigned char *, unsigned char **,  size_t *, int , int ); 
#line 75 "/usr/include/gconv.h"
typedef  wint_t (*__gconv_btowc_fct)(struct __gconv_step *, unsigned char ); 
#line 78 "/usr/include/gconv.h"
typedef int (*__gconv_init_fct)(struct __gconv_step *); 
#line 79 "/usr/include/gconv.h"
typedef void (*__gconv_end_fct)(struct __gconv_step *); 
#line 88 "/usr/include/gconv.h"
typedef int (*__gconv_trans_fct)(struct __gconv_step *, struct __gconv_step_data *, void *, __const unsigned char *, __const unsigned char **, __const unsigned char *, unsigned char **,  size_t *); 
#line 93 "/usr/include/gconv.h"
typedef int (*__gconv_trans_context_fct)(void *, __const unsigned char *, __const unsigned char *, unsigned char *, unsigned char *); 
#line 97 "/usr/include/gconv.h"
typedef int (*__gconv_trans_query_fct)(__const char *, __const char ***,  size_t *); 
#line 100 "/usr/include/gconv.h"
typedef int (*__gconv_trans_init_fct)(void **, const char *); 
#line 101 "/usr/include/gconv.h"
typedef void (*__gconv_trans_end_fct)(void *); 
#line 111 "/usr/include/gconv.h"
struct __gconv_trans_data { __gconv_trans_fct __trans_fct;  __gconv_trans_context_fct __trans_context_fct;  __gconv_trans_end_fct __trans_end_fct; void *__data; struct __gconv_trans_data *__next; }; 
#line 141 "/usr/include/gconv.h"
struct __gconv_step {struct __gconv_loaded_object *__shlib_handle; __const char *__modname; int __counter; char *__from_name; char *__to_name;  __gconv_fct __fct;  __gconv_btowc_fct __btowc_fct;  __gconv_init_fct __init_fct;  __gconv_end_fct __end_fct; int __min_needed_from; int __max_needed_from; int __min_needed_to; int __max_needed_to; int __stateful; void *__data; }; 
#line 168 "/usr/include/gconv.h"
struct __gconv_step_data {unsigned char *__outbuf; unsigned char *__outbufend; int __flags; int __invocation_counter; int __internal_use;  __mbstate_t *__statep;  __mbstate_t __state; struct __gconv_trans_data *__trans; }; 
#line 177 "/usr/include/gconv.h"
typedef struct __gconv_info { size_t __nsteps; struct __gconv_step *__steps;  __extension__ struct __gconv_step_data __data[]; }*__gconv_t; 
#line 53 "/usr/include/_G_config.h"
typedef union {struct __gconv_info __cd; struct {struct __gconv_info __cd; struct __gconv_step_data __data; }__combined; }_G_iconv_t; 
#line 55 "/usr/include/_G_config.h"
typedef int _G_int16_t __attribute__  (( __mode__ ( __HI__ )  )) ; 
#line 56 "/usr/include/_G_config.h"
typedef int _G_int32_t __attribute__  (( __mode__ ( __SI__ )  )) ; 
#line 57 "/usr/include/_G_config.h"
typedef unsigned int _G_uint16_t __attribute__  (( __mode__ ( __HI__ )  )) ; 
#line 58 "/usr/include/_G_config.h"
typedef unsigned int _G_uint32_t __attribute__  (( __mode__ ( __SI__ )  )) ; 
# 45 "/usr/include/_G_config.h" 2 3 4
# 33 "/usr/include/libio.h" 2 3 4
# 166 "/usr/include/libio.h" 3 4
struct _IO_jump_t ; 
#line 166 "/usr/include/libio.h"
struct _IO_FILE ; 
#line 176 "/usr/include/libio.h"
typedef void _IO_lock_t; 
# 176 "/usr/include/libio.h" 3 4
# 199 "/usr/include/libio.h" 3 4
struct _IO_marker {struct _IO_marker *_next; struct _IO_FILE *_sbuf; int _pos; }; 
#line 208 "/usr/include/libio.h"
enum __codecvt_result {__codecvt_ok,__codecvt_partial,__codecvt_error,__codecvt_noconv}; 
# 267 "/usr/include/libio.h" 3 4
# 315 "/usr/include/libio.h" 3 4
# 334 "/usr/include/libio.h" 3 4
struct _IO_FILE {int _flags; char *_IO_read_ptr; char *_IO_read_end; char *_IO_read_base; char *_IO_write_base; char *_IO_write_ptr; char *_IO_write_end; char *_IO_buf_base; char *_IO_buf_end; char *_IO_save_base; char *_IO_backup_base; char *_IO_save_end; struct _IO_marker *_markers; struct _IO_FILE *_chain; int _fileno; int _flags2;  __off_t _old_offset; unsigned short _cur_column; signed char _vtable_offset; char _shortbuf[1];  _IO_lock_t *_lock;  __off64_t _offset; void *__pad1; void *__pad2; void *__pad3; void *__pad4;  size_t __pad5; int _mode; char _unused2[15 * sizeof (int ) - 4 * sizeof (void *) - sizeof ( size_t )]; }; 
#line 337 "/usr/include/libio.h"
typedef struct _IO_FILE _IO_FILE; 
#line 340 "/usr/include/libio.h"
struct _IO_FILE_plus ; 
#line 342 "/usr/include/libio.h"
extern struct _IO_FILE_plus _IO_2_1_stdin_; 
#line 343 "/usr/include/libio.h"
extern struct _IO_FILE_plus _IO_2_1_stdout_; 
#line 344 "/usr/include/libio.h"
extern struct _IO_FILE_plus _IO_2_1_stderr_; 
#line 360 "/usr/include/libio.h"
typedef  __ssize_t __io_read_fn(void *__cookie, char *__buf,  size_t __nbytes); 
#line 369 "/usr/include/libio.h"
typedef  __ssize_t __io_write_fn(void *__cookie, __const char *__buf,  size_t __n); 
#line 377 "/usr/include/libio.h"
typedef int __io_seek_fn(void *__cookie,  __off64_t *__pos, int __w); 
#line 380 "/usr/include/libio.h"
typedef int __io_close_fn(void *__cookie); 
#line 385 "/usr/include/libio.h"
typedef  __io_read_fn cookie_read_function_t; 
#line 386 "/usr/include/libio.h"
typedef  __io_write_fn cookie_write_function_t; 
#line 387 "/usr/include/libio.h"
typedef  __io_seek_fn cookie_seek_function_t; 
#line 388 "/usr/include/libio.h"
typedef  __io_close_fn cookie_close_function_t; 
#line 397 "/usr/include/libio.h"
typedef struct { __io_read_fn *read;  __io_write_fn *write;  __io_seek_fn *seek;  __io_close_fn *close; }_IO_cookie_io_functions_t; 
#line 398 "/usr/include/libio.h"
typedef  _IO_cookie_io_functions_t cookie_io_functions_t; 
#line 400 "/usr/include/libio.h"
struct _IO_cookie_file ; 
#line 404 "/usr/include/libio.h"
extern void _IO_cookie_init(struct _IO_cookie_file *__cfile, int __read_write, void *__cookie,  _IO_cookie_io_functions_t __fns); 
#line 412 "/usr/include/libio.h"
extern int __underflow( _IO_FILE *) __attribute__  (( __nothrow__ )) ; 
#line 413 "/usr/include/libio.h"
extern int __uflow( _IO_FILE *) __attribute__  (( __nothrow__ )) ; 
#line 414 "/usr/include/libio.h"
extern int __overflow( _IO_FILE *, int ) __attribute__  (( __nothrow__ )) ; 
#line 415 "/usr/include/libio.h"
extern  wint_t __wunderflow( _IO_FILE *) __attribute__  (( __nothrow__ )) ; 
#line 416 "/usr/include/libio.h"
extern  wint_t __wuflow( _IO_FILE *) __attribute__  (( __nothrow__ )) ; 
#line 417 "/usr/include/libio.h"
extern  wint_t __woverflow( _IO_FILE *,  wint_t ) __attribute__  (( __nothrow__ )) ; 
# 360 "/usr/include/libio.h" 3 4
# 450 "/usr/include/libio.h" 3 4
extern int _IO_getc( _IO_FILE *__fp) __attribute__  (( __nothrow__ )) ; 
#line 451 "/usr/include/libio.h"
extern int _IO_putc(int __c,  _IO_FILE *__fp) __attribute__  (( __nothrow__ )) ; 
#line 452 "/usr/include/libio.h"
extern int _IO_feof( _IO_FILE *__fp) __attribute__  (( __nothrow__ )) ; 
#line 453 "/usr/include/libio.h"
extern int _IO_ferror( _IO_FILE *__fp) __attribute__  (( __nothrow__ )) ; 
#line 455 "/usr/include/libio.h"
extern int _IO_peekc_locked( _IO_FILE *__fp) __attribute__  (( __nothrow__ )) ; 
#line 461 "/usr/include/libio.h"
extern void _IO_flockfile( _IO_FILE *) __attribute__  (( __nothrow__ )) ; 
#line 462 "/usr/include/libio.h"
extern void _IO_funlockfile( _IO_FILE *) __attribute__  (( __nothrow__ )) ; 
#line 463 "/usr/include/libio.h"
extern int _IO_ftrylockfile( _IO_FILE *) __attribute__  (( __nothrow__ )) ; 
#line 481 "/usr/include/libio.h"
extern int _IO_vfscanf( _IO_FILE *__restrict , const char *__restrict ,  __gnuc_va_list , int *__restrict ); 
#line 483 "/usr/include/libio.h"
extern int _IO_vfprintf( _IO_FILE *__restrict , const char *__restrict ,  __gnuc_va_list ); 
#line 484 "/usr/include/libio.h"
extern  __ssize_t _IO_padn( _IO_FILE *, int ,  __ssize_t ) __attribute__  (( __nothrow__ )) ; 
#line 485 "/usr/include/libio.h"
extern  size_t _IO_sgetn( _IO_FILE *, void *,  size_t ) __attribute__  (( __nothrow__ )) ; 
#line 487 "/usr/include/libio.h"
extern  __off64_t _IO_seekoff( _IO_FILE *,  __off64_t , int , int ) __attribute__  (( __nothrow__ )) ; 
#line 488 "/usr/include/libio.h"
extern  __off64_t _IO_seekpos( _IO_FILE *,  __off64_t , int ) __attribute__  (( __nothrow__ )) ; 
#line 490 "/usr/include/libio.h"
extern void _IO_free_backup_area( _IO_FILE *) __attribute__  (( __nothrow__ )) ; 
# 480 "/usr/include/libio.h" 3 4
# 73 "/usr/include/stdio.h" 2 3 4
# 88 "/usr/include/stdio.h" 3 4
typedef  _G_fpos_t fpos_t; 
#line 94 "/usr/include/stdio.h"
typedef  _G_fpos64_t fpos64_t; 
# 138 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/bits/stdio_lim.h" 1 3 4
# 142 "/usr/include/stdio.h" 2 3 4
extern struct _IO_FILE *stdin; 
#line 143 "/usr/include/stdio.h"
extern struct _IO_FILE *stdout; 
#line 144 "/usr/include/stdio.h"
extern struct _IO_FILE *stderr; 
#line 154 "/usr/include/stdio.h"
extern int remove(__const char *__filename) __attribute__  (( __nothrow__ )) ; 
#line 156 "/usr/include/stdio.h"
extern int rename(__const char *__old, __const char *__new) __attribute__  (( __nothrow__ )) ; 
#line 162 "/usr/include/stdio.h"
extern int renameat(int __oldfd, __const char *__old, int __newfd, __const char *__new) __attribute__  (( __nothrow__ )) ; 
#line 171 "/usr/include/stdio.h"
extern  FILE *tmpfile(void ); 
#line 181 "/usr/include/stdio.h"
extern  FILE *tmpfile64(void ); 
#line 185 "/usr/include/stdio.h"
extern char *tmpnam(char *__s) __attribute__  (( __nothrow__ )) ; 
#line 191 "/usr/include/stdio.h"
extern char *tmpnam_r(char *__s) __attribute__  (( __nothrow__ )) ; 
# 181 "/usr/include/stdio.h" 3 4
# 204 "/usr/include/stdio.h" 3 4
extern char *tempnam(__const char *__dir, __const char *__pfx) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ )) ; 
#line 213 "/usr/include/stdio.h"
extern int fclose( FILE *__stream); 
#line 218 "/usr/include/stdio.h"
extern int fflush( FILE *__stream); 
#line 228 "/usr/include/stdio.h"
extern int fflush_unlocked( FILE *__stream); 
# 228 "/usr/include/stdio.h" 3 4
# 238 "/usr/include/stdio.h" 3 4
extern int fcloseall(void ); 
#line 249 "/usr/include/stdio.h"
extern  FILE *fopen(__const char *__restrict __filename, __const char *__restrict __modes); 
#line 256 "/usr/include/stdio.h"
extern  FILE *freopen(__const char *__restrict __filename, __const char *__restrict __modes,  FILE *__restrict __stream); 
#line 272 "/usr/include/stdio.h"
extern  FILE *fopen64(__const char *__restrict __filename, __const char *__restrict __modes); 
#line 275 "/usr/include/stdio.h"
extern  FILE *freopen64(__const char *__restrict __filename, __const char *__restrict __modes,  FILE *__restrict __stream); 
#line 280 "/usr/include/stdio.h"
extern  FILE *fdopen(int __fd, __const char *__modes) __attribute__  (( __nothrow__ )) ; 
#line 288 "/usr/include/stdio.h"
extern  FILE *fopencookie(void *__restrict __magic_cookie, __const char *__restrict __modes,  _IO_cookie_io_functions_t __io_funcs) __attribute__  (( __nothrow__ )) ; 
#line 291 "/usr/include/stdio.h"
extern  FILE *fmemopen(void *__s,  size_t __len, __const char *__modes) __attribute__  (( __nothrow__ )) ; 
#line 297 "/usr/include/stdio.h"
extern  FILE *open_memstream(char **__restrict __bufloc,  size_t *__restrict __sizeloc) __attribute__  (( __nothrow__ )) ; 
#line 302 "/usr/include/stdio.h"
extern  FILE *open_wmemstream( wchar_t **__restrict __bufloc,  size_t *__restrict __sizeloc) __attribute__  (( __nothrow__ )) ; 
#line 309 "/usr/include/stdio.h"
extern void setbuf( FILE *__restrict __stream, char *__restrict __buf) __attribute__  (( __nothrow__ )) ; 
#line 314 "/usr/include/stdio.h"
extern int setvbuf( FILE *__restrict __stream, char *__restrict __buf, int __modes,  size_t __n) __attribute__  (( __nothrow__ )) ; 
#line 321 "/usr/include/stdio.h"
extern void setbuffer( FILE *__restrict __stream, char *__restrict __buf,  size_t __size) __attribute__  (( __nothrow__ )) ; 
#line 324 "/usr/include/stdio.h"
extern void setlinebuf( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 334 "/usr/include/stdio.h"
extern int fprintf( FILE *__restrict __stream, __const char *__restrict __format, ...); 
#line 339 "/usr/include/stdio.h"
extern int printf(__const char *__restrict __format, ...); 
#line 342 "/usr/include/stdio.h"
extern int sprintf(char *__restrict __s, __const char *__restrict __format, ...) __attribute__  (( __nothrow__ )) ; 
#line 349 "/usr/include/stdio.h"
extern int vfprintf( FILE *__restrict __s, __const char *__restrict __format,  __gnuc_va_list __arg); 
#line 354 "/usr/include/stdio.h"
extern int vprintf(__const char *__restrict __format,  __gnuc_va_list __arg); 
#line 357 "/usr/include/stdio.h"
extern int vsprintf(char *__restrict __s, __const char *__restrict __format,  __gnuc_va_list __arg) __attribute__  (( __nothrow__ )) ; 
#line 365 "/usr/include/stdio.h"
extern int snprintf(char *__restrict __s,  size_t __maxlen, __const char *__restrict __format, ...) __attribute__  (( __nothrow__ ))  __attribute__  (( __format__ ( __printf__, 3, 4 )  )) ; 
#line 369 "/usr/include/stdio.h"
extern int vsnprintf(char *__restrict __s,  size_t __maxlen, __const char *__restrict __format,  __gnuc_va_list __arg) __attribute__  (( __nothrow__ ))  __attribute__  (( __format__ ( __printf__, 3, 0 )  )) ; 
#line 378 "/usr/include/stdio.h"
extern int vasprintf(char **__restrict __ptr, __const char *__restrict __f,  __gnuc_va_list __arg) __attribute__  (( __nothrow__ ))  __attribute__  (( __format__ ( __printf__, 2, 0 )  )) ; 
#line 381 "/usr/include/stdio.h"
extern int __asprintf(char **__restrict __ptr, __const char *__restrict __fmt, ...) __attribute__  (( __nothrow__ ))  __attribute__  (( __format__ ( __printf__, 2, 3 )  )) ; 
#line 384 "/usr/include/stdio.h"
extern int asprintf(char **__restrict __ptr, __const char *__restrict __fmt, ...) __attribute__  (( __nothrow__ ))  __attribute__  (( __format__ ( __printf__, 2, 3 )  )) ; 
#line 394 "/usr/include/stdio.h"
extern int vdprintf(int __fd, __const char *__restrict __fmt,  __gnuc_va_list __arg) __attribute__  (( __format__ ( __printf__, 2, 0 )  )) ; 
#line 396 "/usr/include/stdio.h"
extern int dprintf(int __fd, __const char *__restrict __fmt, ...) __attribute__  (( __format__ ( __printf__, 2, 3 )  )) ; 
#line 406 "/usr/include/stdio.h"
extern int fscanf( FILE *__restrict __stream, __const char *__restrict __format, ...); 
#line 411 "/usr/include/stdio.h"
extern int scanf(__const char *__restrict __format, ...); 
#line 414 "/usr/include/stdio.h"
extern int sscanf(__const char *__restrict __s, __const char *__restrict __format, ...) __attribute__  (( __nothrow__ )) ; 
#line 425 "/usr/include/stdio.h"
extern int vfscanf( FILE *__restrict __s, __const char *__restrict __format,  __gnuc_va_list __arg) __attribute__  (( __format__ ( __scanf__, 2, 0 )  )) ; 
#line 432 "/usr/include/stdio.h"
extern int vscanf(__const char *__restrict __format,  __gnuc_va_list __arg) __attribute__  (( __format__ ( __scanf__, 1, 0 )  )) ; 
#line 437 "/usr/include/stdio.h"
extern int vsscanf(__const char *__restrict __s, __const char *__restrict __format,  __gnuc_va_list __arg) __attribute__  (( __nothrow__ ))  __attribute__  (( __format__ ( __scanf__, 2, 0 )  )) ; 
#line 447 "/usr/include/stdio.h"
extern int fgetc( FILE *__stream); 
#line 448 "/usr/include/stdio.h"
extern int getc( FILE *__stream); 
#line 454 "/usr/include/stdio.h"
extern int getchar(void ); 
# 269 "/usr/include/stdio.h" 3 4
# 466 "/usr/include/stdio.h" 3 4
extern int getc_unlocked( FILE *__stream); 
#line 467 "/usr/include/stdio.h"
extern int getchar_unlocked(void ); 
#line 477 "/usr/include/stdio.h"
extern int fgetc_unlocked( FILE *__stream); 
#line 489 "/usr/include/stdio.h"
extern int fputc(int __c,  FILE *__stream); 
#line 490 "/usr/include/stdio.h"
extern int putc(int __c,  FILE *__stream); 
#line 496 "/usr/include/stdio.h"
extern int putchar(int __c); 
# 477 "/usr/include/stdio.h" 3 4
# 510 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked(int __c,  FILE *__stream); 
#line 518 "/usr/include/stdio.h"
extern int putc_unlocked(int __c,  FILE *__stream); 
#line 519 "/usr/include/stdio.h"
extern int putchar_unlocked(int __c); 
#line 526 "/usr/include/stdio.h"
extern int getw( FILE *__stream); 
#line 529 "/usr/include/stdio.h"
extern int putw(int __w,  FILE *__stream); 
#line 539 "/usr/include/stdio.h"
extern char *fgets(char *__restrict __s, int __n,  FILE *__restrict __stream); 
#line 546 "/usr/include/stdio.h"
extern char *gets(char *__s); 
#line 557 "/usr/include/stdio.h"
extern char *fgets_unlocked(char *__restrict __s, int __n,  FILE *__restrict __stream); 
# 556 "/usr/include/stdio.h" 3 4
# 574 "/usr/include/stdio.h" 3 4
extern  __ssize_t __getdelim(char **__restrict __lineptr,  size_t *__restrict __n, int __delimiter,  FILE *__restrict __stream); 
#line 577 "/usr/include/stdio.h"
extern  __ssize_t getdelim(char **__restrict __lineptr,  size_t *__restrict __n, int __delimiter,  FILE *__restrict __stream); 
#line 587 "/usr/include/stdio.h"
extern  __ssize_t getline(char **__restrict __lineptr,  size_t *__restrict __n,  FILE *__restrict __stream); 
#line 596 "/usr/include/stdio.h"
extern int fputs(__const char *__restrict __s,  FILE *__restrict __stream); 
#line 602 "/usr/include/stdio.h"
extern int puts(__const char *__s); 
#line 609 "/usr/include/stdio.h"
extern int ungetc(int __c,  FILE *__stream); 
#line 617 "/usr/include/stdio.h"
extern  size_t fread(void *__restrict __ptr,  size_t __size,  size_t __n,  FILE *__restrict __stream); 
#line 623 "/usr/include/stdio.h"
extern  size_t fwrite(__const void *__restrict __ptr,  size_t __size,  size_t __n,  FILE *__restrict __s); 
#line 634 "/usr/include/stdio.h"
extern int fputs_unlocked(__const char *__restrict __s,  FILE *__restrict __stream); 
# 633 "/usr/include/stdio.h" 3 4
# 645 "/usr/include/stdio.h" 3 4
extern  size_t fread_unlocked(void *__restrict __ptr,  size_t __size,  size_t __n,  FILE *__restrict __stream); 
#line 647 "/usr/include/stdio.h"
extern  size_t fwrite_unlocked(__const void *__restrict __ptr,  size_t __size,  size_t __n,  FILE *__restrict __stream); 
#line 656 "/usr/include/stdio.h"
extern int fseek( FILE *__stream, long int __off, int __whence); 
#line 661 "/usr/include/stdio.h"
extern long int ftell( FILE *__stream); 
#line 666 "/usr/include/stdio.h"
extern void rewind( FILE *__stream); 
#line 680 "/usr/include/stdio.h"
extern int fseeko( FILE *__stream,  __off_t __off, int __whence); 
#line 685 "/usr/include/stdio.h"
extern  __off_t ftello( FILE *__stream); 
# 680 "/usr/include/stdio.h" 3 4
# 705 "/usr/include/stdio.h" 3 4
extern int fgetpos( FILE *__restrict __stream,  fpos_t *__restrict __pos); 
#line 710 "/usr/include/stdio.h"
extern int fsetpos( FILE *__stream, __const  fpos_t *__pos); 
#line 725 "/usr/include/stdio.h"
extern int fseeko64( FILE *__stream,  __off64_t __off, int __whence); 
#line 726 "/usr/include/stdio.h"
extern  __off64_t ftello64( FILE *__stream); 
#line 727 "/usr/include/stdio.h"
extern int fgetpos64( FILE *__restrict __stream,  fpos64_t *__restrict __pos); 
#line 728 "/usr/include/stdio.h"
extern int fsetpos64( FILE *__stream, __const  fpos64_t *__pos); 
#line 733 "/usr/include/stdio.h"
extern void clearerr( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 735 "/usr/include/stdio.h"
extern int feof( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 737 "/usr/include/stdio.h"
extern int ferror( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 742 "/usr/include/stdio.h"
extern void clearerr_unlocked( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 743 "/usr/include/stdio.h"
extern int feof_unlocked( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 744 "/usr/include/stdio.h"
extern int ferror_unlocked( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 753 "/usr/include/stdio.h"
extern void perror(__const char *__s); 
# 722 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/bits/sys_errlist.h" 1 3 4
# 27 "/usr/include/bits/sys_errlist.h" 3 4
extern int sys_nerr; 
#line 28 "/usr/include/bits/sys_errlist.h"
extern __const char *__const sys_errlist[]; 
#line 31 "/usr/include/bits/sys_errlist.h"
extern int _sys_nerr; 
#line 32 "/usr/include/bits/sys_errlist.h"
extern __const char *__const _sys_errlist[]; 
#line 765 "/usr/include/stdio.h"
extern int fileno( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 770 "/usr/include/stdio.h"
extern int fileno_unlocked( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
# 761 "/usr/include/stdio.h" 2 3 4
# 780 "/usr/include/stdio.h" 3 4
extern  FILE *popen(__const char *__command, __const char *__modes); 
#line 786 "/usr/include/stdio.h"
extern int pclose( FILE *__stream); 
#line 792 "/usr/include/stdio.h"
extern char *ctermid(char *__s) __attribute__  (( __nothrow__ )) ; 
#line 798 "/usr/include/stdio.h"
extern char *cuserid(char *__s); 
#line 803 "/usr/include/stdio.h"
struct obstack ; 
#line 808 "/usr/include/stdio.h"
extern int obstack_printf(struct obstack *__restrict __obstack, __const char *__restrict __format, ...) __attribute__  (( __nothrow__ ))  __attribute__  (( __format__ ( __printf__, 2, 3 )  )) ; 
#line 812 "/usr/include/stdio.h"
extern int obstack_vprintf(struct obstack *__restrict __obstack, __const char *__restrict __format,  __gnuc_va_list __args) __attribute__  (( __nothrow__ ))  __attribute__  (( __format__ ( __printf__, 2, 0 )  )) ; 
#line 820 "/usr/include/stdio.h"
extern void flockfile( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 824 "/usr/include/stdio.h"
extern int ftrylockfile( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 827 "/usr/include/stdio.h"
extern void funlockfile( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
# 841 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/bits/stdio.h" 1 3 4
# 35 "/usr/include/bits/stdio.h" 3 4
extern __inline int vprintf(__const char *__restrict __fmt,  __gnuc_va_list __arg)  {

#line 36 "/usr/include/bits/stdio.h"
return vfprintf(stdout, __fmt, __arg); }
 
#line 42 "/usr/include/bits/stdio.h"
extern __inline int getchar(void )  {

#line 43 "/usr/include/bits/stdio.h"
return _IO_getc(stdin); }
 
#line 51 "/usr/include/bits/stdio.h"
extern __inline int getc_unlocked( FILE *__fp)  {

#line 52 "/usr/include/bits/stdio.h"
return ((__builtin_expect((((__fp)->_IO_read_ptr) >= ((__fp)->_IO_read_end)), 0)?__uflow(__fp):(*((unsigned char *)((__fp)->_IO_read_ptr)++)))); }
 
#line 58 "/usr/include/bits/stdio.h"
extern __inline int getchar_unlocked(void )  {

#line 59 "/usr/include/bits/stdio.h"
return ((__builtin_expect((((stdin)->_IO_read_ptr) >= ((stdin)->_IO_read_end)), 0)?__uflow(stdin):(*((unsigned char *)((stdin)->_IO_read_ptr)++)))); }
 
#line 67 "/usr/include/bits/stdio.h"
extern __inline int putchar(int __c)  {

#line 68 "/usr/include/bits/stdio.h"
return _IO_putc(__c, stdout); }
 
#line 76 "/usr/include/bits/stdio.h"
extern __inline int fputc_unlocked(int __c,  FILE *__stream)  {

#line 77 "/usr/include/bits/stdio.h"
return ((__builtin_expect((((__stream)->_IO_write_ptr) >= ((__stream)->_IO_write_end)), 0)?__overflow(__stream, ((unsigned char )(__c))):((unsigned char )((*((__stream)->_IO_write_ptr)++) = (__c))))); }
 
#line 86 "/usr/include/bits/stdio.h"
extern __inline int putc_unlocked(int __c,  FILE *__stream)  {

#line 87 "/usr/include/bits/stdio.h"
return ((__builtin_expect((((__stream)->_IO_write_ptr) >= ((__stream)->_IO_write_end)), 0)?__overflow(__stream, ((unsigned char )(__c))):((unsigned char )((*((__stream)->_IO_write_ptr)++) = (__c))))); }
 
#line 93 "/usr/include/bits/stdio.h"
extern __inline int putchar_unlocked(int __c)  {

#line 94 "/usr/include/bits/stdio.h"
return ((__builtin_expect((((stdout)->_IO_write_ptr) >= ((stdout)->_IO_write_end)), 0)?__overflow(stdout, ((unsigned char )(__c))):((unsigned char )((*((stdout)->_IO_write_ptr)++) = (__c))))); }
 
#line 102 "/usr/include/bits/stdio.h"
extern __inline  __ssize_t getline(char **__lineptr,  size_t *__n,  FILE *__stream)  {

#line 103 "/usr/include/bits/stdio.h"
return __getdelim(__lineptr, __n, '\n', __stream); }
 
#line 112 "/usr/include/bits/stdio.h"
extern __inline int  __attribute__  (( __nothrow__ )) feof_unlocked( FILE *__stream)  {

#line 113 "/usr/include/bits/stdio.h"
return ((((__stream)->_flags) & 0x10) != 0); }
 
#line 119 "/usr/include/bits/stdio.h"
extern __inline int  __attribute__  (( __nothrow__ )) ferror_unlocked( FILE *__stream)  {

#line 120 "/usr/include/bits/stdio.h"
return ((((__stream)->_flags) & 0x20) != 0); }
 
# 842 "/usr/include/stdio.h" 2 3 4
# 850 "/usr/include/stdio.h" 3 4
# 43 "../.././gcc/system.h" 2
# 180 "../.././gcc/system.h" 
# 1 "../.././gcc/../include/safe-ctype.h" 1
# 86 "../.././gcc/../include/safe-ctype.h" 
enum {_sch_isblank=0x0001,_sch_iscntrl=0x0002,_sch_isdigit=0x0004,_sch_islower=0x0008,_sch_isprint=0x0010,_sch_ispunct=0x0020,_sch_isspace=0x0040,_sch_isupper=0x0080,_sch_isxdigit=0x0100,_sch_isidst=0x0200,_sch_isvsp=0x0400,_sch_isnvsp=0x0800,_sch_isalpha=_sch_isupper | _sch_islower,_sch_isalnum=_sch_isalpha | _sch_isdigit,_sch_isidnum=_sch_isidst | _sch_isdigit,_sch_isgraph=_sch_isalnum | _sch_ispunct,_sch_iscppsp=_sch_isvsp | _sch_isnvsp,_sch_isbasic=_sch_isprint | _sch_iscppsp}; 
#line 89 "../.././gcc/../include/safe-ctype.h"
extern const unsigned short _sch_istable[256]; 
#line 114 "../.././gcc/../include/safe-ctype.h"
extern const unsigned char _sch_toupper[256]; 
#line 115 "../.././gcc/../include/safe-ctype.h"
extern const unsigned char _sch_tolower[256]; 
# 114 "../.././gcc/../include/safe-ctype.h" 
# 181 "../.././gcc/system.h" 2
# 1 "/usr/include/sys/types.h" 1 3 4
# 35 "/usr/include/sys/types.h" 3 4
typedef  __u_char u_char; 
#line 36 "/usr/include/sys/types.h"
typedef  __u_short u_short; 
#line 37 "/usr/include/sys/types.h"
typedef  __u_int u_int; 
#line 38 "/usr/include/sys/types.h"
typedef  __u_long u_long; 
#line 39 "/usr/include/sys/types.h"
typedef  __quad_t quad_t; 
#line 40 "/usr/include/sys/types.h"
typedef  __u_quad_t u_quad_t; 
#line 41 "/usr/include/sys/types.h"
typedef  __fsid_t fsid_t; 
#line 46 "/usr/include/sys/types.h"
typedef  __loff_t loff_t; 
#line 50 "/usr/include/sys/types.h"
typedef  __ino_t ino_t; 
#line 57 "/usr/include/sys/types.h"
typedef  __ino64_t ino64_t; 
#line 62 "/usr/include/sys/types.h"
typedef  __dev_t dev_t; 
#line 67 "/usr/include/sys/types.h"
typedef  __gid_t gid_t; 
#line 72 "/usr/include/sys/types.h"
typedef  __mode_t mode_t; 
#line 77 "/usr/include/sys/types.h"
typedef  __nlink_t nlink_t; 
#line 82 "/usr/include/sys/types.h"
typedef  __uid_t uid_t; 
#line 88 "/usr/include/sys/types.h"
typedef  __off_t off_t; 
#line 95 "/usr/include/sys/types.h"
typedef  __off64_t off64_t; 
#line 100 "/usr/include/sys/types.h"
typedef  __pid_t pid_t; 
#line 105 "/usr/include/sys/types.h"
typedef  __id_t id_t; 
#line 110 "/usr/include/sys/types.h"
typedef  __ssize_t ssize_t; 
#line 116 "/usr/include/sys/types.h"
typedef  __daddr_t daddr_t; 
#line 117 "/usr/include/sys/types.h"
typedef  __caddr_t caddr_t; 
#line 123 "/usr/include/sys/types.h"
typedef  __key_t key_t; 
# 133 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 61 "/usr/include/time.h" 3 4
typedef  __clock_t clock_t; 
#line 77 "/usr/include/time.h"
typedef  __time_t time_t; 
# 75 "/usr/include/time.h" 3 4
# 93 "/usr/include/time.h" 3 4
typedef  __clockid_t clockid_t; 
#line 105 "/usr/include/time.h"
typedef  __timer_t timer_t; 
# 105 "/usr/include/time.h" 3 4
# 137 "/usr/include/sys/types.h" 2 3 4
typedef  __useconds_t useconds_t; 
#line 141 "/usr/include/sys/types.h"
typedef  __suseconds_t suseconds_t; 
# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.0/include/stddef.h" 1 3 4
# 151 "/usr/include/sys/types.h" 2 3 4
typedef unsigned long int ulong; 
#line 152 "/usr/include/sys/types.h"
typedef unsigned short int ushort; 
#line 153 "/usr/include/sys/types.h"
typedef unsigned int uint; 
#line 195 "/usr/include/sys/types.h"
typedef int int8_t __attribute__  (( __mode__ ( __QI__ )  )) ; 
#line 196 "/usr/include/sys/types.h"
typedef int int16_t __attribute__  (( __mode__ ( __HI__ )  )) ; 
#line 197 "/usr/include/sys/types.h"
typedef int int32_t __attribute__  (( __mode__ ( __SI__ )  )) ; 
#line 198 "/usr/include/sys/types.h"
typedef int int64_t __attribute__  (( __mode__ ( __DI__ )  )) ; 
#line 201 "/usr/include/sys/types.h"
typedef unsigned int u_int8_t __attribute__  (( __mode__ ( __QI__ )  )) ; 
#line 202 "/usr/include/sys/types.h"
typedef unsigned int u_int16_t __attribute__  (( __mode__ ( __HI__ )  )) ; 
#line 203 "/usr/include/sys/types.h"
typedef unsigned int u_int32_t __attribute__  (( __mode__ ( __SI__ )  )) ; 
#line 204 "/usr/include/sys/types.h"
typedef unsigned int u_int64_t __attribute__  (( __mode__ ( __DI__ )  )) ; 
#line 206 "/usr/include/sys/types.h"
typedef int register_t __attribute__  (( __mode__ ( __word__ )  )) ; 
# 195 "/usr/include/sys/types.h" 3 4
# 217 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/endian.h" 1 3 4
# 38 "/usr/include/endian.h" 2 3 4
# 218 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/sys/select.h" 1 3 4
# 31 "/usr/include/sys/select.h" 3 4
# 1 "/usr/include/bits/select.h" 1 3 4
# 32 "/usr/include/sys/select.h" 2 3 4
# 1 "/usr/include/bits/sigset.h" 1 3 4
# 23 "/usr/include/bits/sigset.h" 3 4
typedef int __sig_atomic_t; 
#line 31 "/usr/include/bits/sigset.h"
typedef struct {unsigned long int __val[(1024 / (8 * sizeof (unsigned long int )))]; }__sigset_t; 
#line 38 "/usr/include/sys/select.h"
typedef  __sigset_t sigset_t; 
# 35 "/usr/include/sys/select.h" 2 3 4
# 1 "/usr/include/time.h" 1 3 4
# 125 "/usr/include/time.h" 3 4
struct timespec { __time_t tv_sec; long int tv_nsec; }; 
# 45 "/usr/include/sys/select.h" 2 3 4
# 1 "/usr/include/bits/time.h" 1 3 4
# 73 "/usr/include/bits/time.h" 3 4
struct timeval { __time_t tv_sec;  __suseconds_t tv_usec; }; 
# 47 "/usr/include/sys/select.h" 2 3 4
# 55 "/usr/include/sys/select.h" 3 4
typedef long int __fd_mask; 
#line 78 "/usr/include/sys/select.h"
typedef struct { __fd_mask fds_bits[1024 / (8 * sizeof ( __fd_mask ))]; }fd_set; 
#line 85 "/usr/include/sys/select.h"
typedef  __fd_mask fd_mask; 
# 67 "/usr/include/sys/select.h" 3 4
# 99 "/usr/include/sys/select.h" 3 4
# 112 "/usr/include/sys/select.h" 3 4
extern int select(int __nfds,  fd_set *__restrict __readfds,  fd_set *__restrict __writefds,  fd_set *__restrict __exceptfds, struct timeval *__restrict __timeout); 
#line 125 "/usr/include/sys/select.h"
extern int pselect(int __nfds,  fd_set *__restrict __readfds,  fd_set *__restrict __writefds,  fd_set *__restrict __exceptfds, const struct timespec *__restrict __timeout, const  __sigset_t *__restrict __sigmask); 
# 121 "/usr/include/sys/select.h" 3 4
# 221 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/sys/sysmacros.h" 1 3 4
# 31 "/usr/include/sys/sysmacros.h" 3 4
 __extension__ extern __inline unsigned int gnu_dev_major(unsigned long long int __dev) __attribute__  (( __nothrow__ )) ; 
#line 34 "/usr/include/sys/sysmacros.h"
 __extension__ extern __inline unsigned int gnu_dev_minor(unsigned long long int __dev) __attribute__  (( __nothrow__ )) ; 
#line 38 "/usr/include/sys/sysmacros.h"
 __extension__ extern __inline unsigned long long int gnu_dev_makedev(unsigned int __major, unsigned int __minor) __attribute__  (( __nothrow__ )) ; 
#line 43 "/usr/include/sys/sysmacros.h"
 __extension__ extern __inline unsigned int  __attribute__  (( __nothrow__ )) gnu_dev_major(unsigned long long int __dev)  {

#line 44 "/usr/include/sys/sysmacros.h"
return ((__dev >> 8) & 0xfff) | (((unsigned int )(__dev >> 32)) & (~0xfff)); }
 
#line 49 "/usr/include/sys/sysmacros.h"
 __extension__ extern __inline unsigned int  __attribute__  (( __nothrow__ )) gnu_dev_minor(unsigned long long int __dev)  {

#line 50 "/usr/include/sys/sysmacros.h"
return (__dev & 0xff) | (((unsigned int )(__dev >> 12)) & (~0xff)); }
 
#line 55 "/usr/include/sys/sysmacros.h"
 __extension__ extern __inline unsigned long long int  __attribute__  (( __nothrow__ )) gnu_dev_makedev(unsigned int __major, unsigned int __minor)  {

#line 58 "/usr/include/sys/sysmacros.h"
return ((__minor & 0xff) | ((__major & 0xfff) << 8) | ((((unsigned long long int )(__minor & (~0xff)))) << 12) | ((((unsigned long long int )(__major & (~0xfff)))) << 32)); }
 
#line 228 "/usr/include/sys/types.h"
typedef  __blksize_t blksize_t; 
#line 235 "/usr/include/sys/types.h"
typedef  __blkcnt_t blkcnt_t; 
#line 239 "/usr/include/sys/types.h"
typedef  __fsblkcnt_t fsblkcnt_t; 
#line 243 "/usr/include/sys/types.h"
typedef  __fsfilcnt_t fsfilcnt_t; 
# 224 "/usr/include/sys/types.h" 2 3 4
# 262 "/usr/include/sys/types.h" 3 4
typedef  __blkcnt64_t blkcnt64_t; 
#line 263 "/usr/include/sys/types.h"
typedef  __fsblkcnt64_t fsblkcnt64_t; 
#line 264 "/usr/include/sys/types.h"
typedef  __fsfilcnt64_t fsfilcnt64_t; 
# 1 "/usr/include/bits/pthreadtypes.h" 1 3 4
# 36 "/usr/include/bits/pthreadtypes.h" 3 4
typedef unsigned long int pthread_t; 
#line 43 "/usr/include/bits/pthreadtypes.h"
typedef union {char __size[36]; long int __align; }pthread_attr_t; 
#line 49 "/usr/include/bits/pthreadtypes.h"
typedef struct __pthread_internal_slist {struct __pthread_internal_slist *__next; }__pthread_slist_t; 
#line 73 "/usr/include/bits/pthreadtypes.h"
typedef union {struct __pthread_mutex_s {int __lock; unsigned int __count; int __owner; int __kind; unsigned int __nusers;  __extension__ union {int __spins;  __pthread_slist_t __list; }; }__data; char __size[24]; long int __align; }pthread_mutex_t; 
#line 79 "/usr/include/bits/pthreadtypes.h"
typedef union {char __size[4]; long int __align; }pthread_mutexattr_t; 
#line 99 "/usr/include/bits/pthreadtypes.h"
typedef union {struct {int __lock; unsigned int __futex;  __extension__ unsigned long long int __total_seq;  __extension__ unsigned long long int __wakeup_seq;  __extension__ unsigned long long int __woken_seq; void *__mutex; unsigned int __nwaiters; unsigned int __broadcast_seq; }__data; char __size[48];  __extension__ long long int __align; }pthread_cond_t; 
#line 105 "/usr/include/bits/pthreadtypes.h"
typedef union {char __size[4]; long int __align; }pthread_condattr_t; 
#line 109 "/usr/include/bits/pthreadtypes.h"
typedef unsigned int pthread_key_t; 
#line 113 "/usr/include/bits/pthreadtypes.h"
typedef int pthread_once_t; 
#line 136 "/usr/include/bits/pthreadtypes.h"
typedef union {struct {int __lock; unsigned int __nr_readers; unsigned int __readers_wakeup; unsigned int __writer_wakeup; unsigned int __nr_readers_queued; unsigned int __nr_writers_queued; unsigned int __flags; int __writer; }__data; char __size[32]; long int __align; }pthread_rwlock_t; 
#line 142 "/usr/include/bits/pthreadtypes.h"
typedef union {char __size[8]; long int __align; }pthread_rwlockattr_t; 
#line 148 "/usr/include/bits/pthreadtypes.h"
typedef volatile int pthread_spinlock_t; 
#line 157 "/usr/include/bits/pthreadtypes.h"
typedef union {char __size[20]; long int __align; }pthread_barrier_t; 
#line 163 "/usr/include/bits/pthreadtypes.h"
typedef union {char __size[4]; int __align; }pthread_barrierattr_t; 
# 271 "/usr/include/sys/types.h" 2 3 4
# 183 "../.././gcc/system.h" 2
# 1 "/usr/include/errno.h" 1 3 4
# 32 "/usr/include/errno.h" 3 4
# 1 "/usr/include/bits/errno.h" 1 3 4
# 25 "/usr/include/bits/errno.h" 3 4
# 1 "/usr/include/linux/errno.h" 1 3 4
# 1 "/usr/include/asm/errno.h" 1 3 4
# 5 "/usr/include/linux/errno.h" 2 3 4
# 26 "/usr/include/bits/errno.h" 2 3 4
# 43 "/usr/include/bits/errno.h" 3 4
extern int *__errno_location(void ) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
# 37 "/usr/include/errno.h" 2 3 4
# 55 "/usr/include/errno.h" 3 4
extern char *program_invocation_name,*program_invocation_short_name; 
#line 69 "/usr/include/errno.h"
typedef int error_t; 
# 69 "/usr/include/errno.h" 3 4
# 185 "../.././gcc/system.h" 2
# 195 "../.././gcc/system.h" 
# 1 "/usr/include/string.h" 1 3 4
# 28 "/usr/include/string.h" 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.0/include/stddef.h" 1 3 4
# 40 "/usr/include/string.h" 2 3 4
extern void *memcpy(void *__restrict __dest, __const void *__restrict __src,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 44 "/usr/include/string.h"
extern void *memmove(void *__dest, __const void *__src,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 53 "/usr/include/string.h"
extern void *memccpy(void *__restrict __dest, __const void *__restrict __src, int __c,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 59 "/usr/include/string.h"
extern void *memset(void *__s, int __c,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 63 "/usr/include/string.h"
extern int memcmp(__const void *__s1, __const void *__s2,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 67 "/usr/include/string.h"
extern void *memchr(__const void *__s, int __c,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 74 "/usr/include/string.h"
extern void *rawmemchr(__const void *__s, int __c) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 78 "/usr/include/string.h"
extern void *memrchr(__const void *__s, int __c,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 85 "/usr/include/string.h"
extern char *strcpy(char *__restrict __dest, __const char *__restrict __src) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 89 "/usr/include/string.h"
extern char *strncpy(char *__restrict __dest, __const char *__restrict __src,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 93 "/usr/include/string.h"
extern char *strcat(char *__restrict __dest, __const char *__restrict __src) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 96 "/usr/include/string.h"
extern char *strncat(char *__restrict __dest, __const char *__restrict __src,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 100 "/usr/include/string.h"
extern int strcmp(__const char *__s1, __const char *__s2) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 103 "/usr/include/string.h"
extern int strncmp(__const char *__s1, __const char *__s2,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 107 "/usr/include/string.h"
extern int strcoll(__const char *__s1, __const char *__s2) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 111 "/usr/include/string.h"
extern  size_t strxfrm(char *__restrict __dest, __const char *__restrict __src,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
# 1 "/usr/include/xlocale.h" 1 3 4
# 40 "/usr/include/xlocale.h" 3 4
typedef struct __locale_struct {struct locale_data *__locales[13]; const unsigned short int *__ctype_b; const int *__ctype_tolower; const int *__ctype_toupper; const char *__names[13]; }*__locale_t; 
#line 122 "/usr/include/string.h"
extern int strcoll_l(__const char *__s1, __const char *__s2,  __locale_t __l) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2, 3 )  )) ; 
#line 125 "/usr/include/string.h"
extern  size_t strxfrm_l(char *__dest, __const char *__src,  size_t __n,  __locale_t __l) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 4 )  )) ; 
#line 131 "/usr/include/string.h"
extern char *strdup(__const char *__s) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 139 "/usr/include/string.h"
extern char *strndup(__const char *__string,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 119 "/usr/include/string.h" 2 3 4
# 168 "/usr/include/string.h" 3 4
extern char *strchr(__const char *__s, int __c) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 171 "/usr/include/string.h"
extern char *strrchr(__const char *__s, int __c) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 178 "/usr/include/string.h"
extern char *strchrnul(__const char *__s, int __c) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 185 "/usr/include/string.h"
extern  size_t strcspn(__const char *__s, __const char *__reject) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 189 "/usr/include/string.h"
extern  size_t strspn(__const char *__s, __const char *__accept) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 192 "/usr/include/string.h"
extern char *strpbrk(__const char *__s, __const char *__accept) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 195 "/usr/include/string.h"
extern char *strstr(__const char *__haystack, __const char *__needle) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 200 "/usr/include/string.h"
extern char *strtok(char *__restrict __s, __const char *__restrict __delim) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 208 "/usr/include/string.h"
extern char *__strtok_r(char *__restrict __s, __const char *__restrict __delim, char **__restrict __save_ptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 3 )  )) ; 
#line 212 "/usr/include/string.h"
extern char *strtok_r(char *__restrict __s, __const char *__restrict __delim, char **__restrict __save_ptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 3 )  )) ; 
#line 218 "/usr/include/string.h"
extern char *strcasestr(__const char *__haystack, __const char *__needle) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 227 "/usr/include/string.h"
extern void *memmem(__const void *__haystack,  size_t __haystacklen, __const void *__needle,  size_t __needlelen) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 3 )  )) ; 
#line 233 "/usr/include/string.h"
extern void *__mempcpy(void *__restrict __dest, __const void *__restrict __src,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 236 "/usr/include/string.h"
extern void *mempcpy(void *__restrict __dest, __const void *__restrict __src,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 243 "/usr/include/string.h"
extern  size_t strlen(__const char *__s) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 250 "/usr/include/string.h"
extern  size_t strnlen(__const char *__string,  size_t __maxlen) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 256 "/usr/include/string.h"
extern char *strerror(int __errnum) __attribute__  (( __nothrow__ )) ; 
#line 282 "/usr/include/string.h"
extern char *strerror_r(int __errnum, char *__buf,  size_t __buflen) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 288 "/usr/include/string.h"
extern void __bzero(void *__s,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 293 "/usr/include/string.h"
extern void bcopy(__const void *__src, void *__dest,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 296 "/usr/include/string.h"
extern void bzero(void *__s,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 300 "/usr/include/string.h"
extern int bcmp(__const void *__s1, __const void *__s2,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 304 "/usr/include/string.h"
extern char *index(__const char *__s, int __c) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 308 "/usr/include/string.h"
extern char *rindex(__const char *__s, int __c) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 312 "/usr/include/string.h"
extern int ffs(int __i) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 317 "/usr/include/string.h"
extern int ffsl(long int __l) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 320 "/usr/include/string.h"
 __extension__ extern int ffsll(long long int __ll) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 326 "/usr/include/string.h"
extern int strcasecmp(__const char *__s1, __const char *__s2) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 330 "/usr/include/string.h"
extern int strncasecmp(__const char *__s1, __const char *__s2,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 338 "/usr/include/string.h"
extern int strcasecmp_l(__const char *__s1, __const char *__s2,  __locale_t __loc) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2, 3 )  )) ; 
#line 342 "/usr/include/string.h"
extern int strncasecmp_l(__const char *__s1, __const char *__s2,  size_t __n,  __locale_t __loc) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2, 4 )  )) ; 
#line 350 "/usr/include/string.h"
extern char *strsep(char **__restrict __stringp, __const char *__restrict __delim) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 356 "/usr/include/string.h"
extern int strverscmp(__const char *__s1, __const char *__s2) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 359 "/usr/include/string.h"
extern char *strsignal(int __sig) __attribute__  (( __nothrow__ )) ; 
#line 363 "/usr/include/string.h"
extern char *__stpcpy(char *__restrict __dest, __const char *__restrict __src) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 365 "/usr/include/string.h"
extern char *stpcpy(char *__restrict __dest, __const char *__restrict __src) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 371 "/usr/include/string.h"
extern char *__stpncpy(char *__restrict __dest, __const char *__restrict __src,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 374 "/usr/include/string.h"
extern char *stpncpy(char *__restrict __dest, __const char *__restrict __src,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 377 "/usr/include/string.h"
extern char *strfry(char *__string) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 380 "/usr/include/string.h"
extern void *memfrob(void *__s,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 387 "/usr/include/string.h"
extern char *basename(__const char *__filename) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 281 "/usr/include/string.h" 3 4
# 414 "/usr/include/string.h" 3 4
# 1 "/usr/include/bits/string.h" 1 3 4
# 415 "/usr/include/string.h" 2 3 4
# 1 "/usr/include/bits/string2.h" 1 3 4
# 418 "/usr/include/string.h" 2 3 4
# 426 "/usr/include/string.h" 3 4
# 196 "../.././gcc/system.h" 2
# 1 "/usr/include/strings.h" 1 3 4
# 197 "../.././gcc/system.h" 2
# 208 "../.././gcc/system.h" 
# 1 "/usr/include/stdlib.h" 1 3 4
# 33 "/usr/include/stdlib.h" 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.0/include/stddef.h" 1 3 4
# 34 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/bits/waitflags.h" 1 3 4
# 43 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/bits/waitstatus.h" 1 3 4
# 98 "/usr/include/bits/waitstatus.h" 3 4
union wait {int w_status; struct {unsigned int __w_termsig:7; unsigned int __w_coredump:1; unsigned int __w_retcode:8; unsigned int :16; }__wait_terminated; struct {unsigned int __w_stopval:8; unsigned int __w_stopsig:8; unsigned int :16; }__wait_stopped; }; 
# 44 "/usr/include/stdlib.h" 2 3 4
# 72 "/usr/include/stdlib.h" 3 4
typedef union {union wait *__uptr; int *__iptr; }__WAIT_STATUS __attribute__  (( __transparent_union__ )) ; 
#line 102 "/usr/include/stdlib.h"
typedef struct {int quot; int rem; }div_t; 
#line 110 "/usr/include/stdlib.h"
typedef struct {long int quot; long int rem; }ldiv_t; 
#line 122 "/usr/include/stdlib.h"
 __extension__ typedef struct {long long int quot; long long int rem; }lldiv_t; 
# 96 "/usr/include/stdlib.h" 3 4
# 140 "/usr/include/stdlib.h" 3 4
extern  size_t __ctype_get_mb_cur_max(void ) __attribute__  (( __nothrow__ )) ; 
#line 146 "/usr/include/stdlib.h"
extern double atof(__const char *__nptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 149 "/usr/include/stdlib.h"
extern int atoi(__const char *__nptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 152 "/usr/include/stdlib.h"
extern long int atol(__const char *__nptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 159 "/usr/include/stdlib.h"
 __extension__ extern long long int atoll(__const char *__nptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 167 "/usr/include/stdlib.h"
extern double strtod(__const char *__restrict __nptr, char **__restrict __endptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 174 "/usr/include/stdlib.h"
extern float strtof(__const char *__restrict __nptr, char **__restrict __endptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 178 "/usr/include/stdlib.h"
extern long double strtold(__const char *__restrict __nptr, char **__restrict __endptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 186 "/usr/include/stdlib.h"
extern long int strtol(__const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 190 "/usr/include/stdlib.h"
extern unsigned long int strtoul(__const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 198 "/usr/include/stdlib.h"
 __extension__ extern long long int strtoq(__const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 203 "/usr/include/stdlib.h"
 __extension__ extern unsigned long long int strtouq(__const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 212 "/usr/include/stdlib.h"
 __extension__ extern long long int strtoll(__const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 217 "/usr/include/stdlib.h"
 __extension__ extern unsigned long long int strtoull(__const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 242 "/usr/include/stdlib.h"
extern long int strtol_l(__const char *__restrict __nptr, char **__restrict __endptr, int __base,  __locale_t __loc) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 4 )  )) ; 
#line 247 "/usr/include/stdlib.h"
extern unsigned long int strtoul_l(__const char *__restrict __nptr, char **__restrict __endptr, int __base,  __locale_t __loc) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 4 )  )) ; 
#line 253 "/usr/include/stdlib.h"
 __extension__ extern long long int strtoll_l(__const char *__restrict __nptr, char **__restrict __endptr, int __base,  __locale_t __loc) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 4 )  )) ; 
#line 259 "/usr/include/stdlib.h"
 __extension__ extern unsigned long long int strtoull_l(__const char *__restrict __nptr, char **__restrict __endptr, int __base,  __locale_t __loc) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 4 )  )) ; 
#line 263 "/usr/include/stdlib.h"
extern double strtod_l(__const char *__restrict __nptr, char **__restrict __endptr,  __locale_t __loc) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 3 )  )) ; 
#line 267 "/usr/include/stdlib.h"
extern float strtof_l(__const char *__restrict __nptr, char **__restrict __endptr,  __locale_t __loc) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 3 )  )) ; 
#line 272 "/usr/include/stdlib.h"
extern long double strtold_l(__const char *__restrict __nptr, char **__restrict __endptr,  __locale_t __loc) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 3 )  )) ; 
#line 281 "/usr/include/stdlib.h"
extern double __strtod_internal(__const char *__restrict __nptr, char **__restrict __endptr, int __group) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 284 "/usr/include/stdlib.h"
extern float __strtof_internal(__const char *__restrict __nptr, char **__restrict __endptr, int __group) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 288 "/usr/include/stdlib.h"
extern long double __strtold_internal(__const char *__restrict __nptr, char **__restrict __endptr, int __group) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 293 "/usr/include/stdlib.h"
extern long int __strtol_internal(__const char *__restrict __nptr, char **__restrict __endptr, int __base, int __group) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 300 "/usr/include/stdlib.h"
extern unsigned long int __strtoul_internal(__const char *__restrict __nptr, char **__restrict __endptr, int __base, int __group) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 309 "/usr/include/stdlib.h"
 __extension__ extern long long int __strtoll_internal(__const char *__restrict __nptr, char **__restrict __endptr, int __base, int __group) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 318 "/usr/include/stdlib.h"
 __extension__ extern unsigned long long int __strtoull_internal(__const char *__restrict __nptr, char **__restrict __endptr, int __base, int __group) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 329 "/usr/include/stdlib.h"
extern __inline double  __attribute__  (( __nothrow__ )) strtod(__const char *__restrict __nptr, char **__restrict __endptr)  {

#line 330 "/usr/include/stdlib.h"
return __strtod_internal(__nptr, __endptr, 0); }
 
#line 335 "/usr/include/stdlib.h"
extern __inline long int  __attribute__  (( __nothrow__ )) strtol(__const char *__restrict __nptr, char **__restrict __endptr, int __base)  {

#line 336 "/usr/include/stdlib.h"
return __strtol_internal(__nptr, __endptr, __base, 0); }
 
#line 341 "/usr/include/stdlib.h"
extern __inline unsigned long int  __attribute__  (( __nothrow__ )) strtoul(__const char *__restrict __nptr, char **__restrict __endptr, int __base)  {

#line 342 "/usr/include/stdlib.h"
return __strtoul_internal(__nptr, __endptr, __base, 0); }
 
#line 350 "/usr/include/stdlib.h"
extern __inline float  __attribute__  (( __nothrow__ )) strtof(__const char *__restrict __nptr, char **__restrict __endptr)  {

#line 351 "/usr/include/stdlib.h"
return __strtof_internal(__nptr, __endptr, 0); }
 
#line 356 "/usr/include/stdlib.h"
extern __inline long double  __attribute__  (( __nothrow__ )) strtold(__const char *__restrict __nptr, char **__restrict __endptr)  {

#line 357 "/usr/include/stdlib.h"
return __strtold_internal(__nptr, __endptr, 0); }
 
#line 367 "/usr/include/stdlib.h"
 __extension__ extern __inline long long int  __attribute__  (( __nothrow__ )) strtoq(__const char *__restrict __nptr, char **__restrict __endptr, int __base)  {

#line 368 "/usr/include/stdlib.h"
return __strtoll_internal(__nptr, __endptr, __base, 0); }
 
#line 373 "/usr/include/stdlib.h"
 __extension__ extern __inline unsigned long long int  __attribute__  (( __nothrow__ )) strtouq(__const char *__restrict __nptr, char **__restrict __endptr, int __base)  {

#line 374 "/usr/include/stdlib.h"
return __strtoull_internal(__nptr, __endptr, __base, 0); }
 
#line 383 "/usr/include/stdlib.h"
 __extension__ extern __inline long long int  __attribute__  (( __nothrow__ )) strtoll(__const char *__restrict __nptr, char **__restrict __endptr, int __base)  {

#line 384 "/usr/include/stdlib.h"
return __strtoll_internal(__nptr, __endptr, __base, 0); }
 
#line 389 "/usr/include/stdlib.h"
 __extension__ extern __inline unsigned long long int  __attribute__  (( __nothrow__ )) strtoull(__const char *__restrict __nptr, char **__restrict __endptr, int __base)  {

#line 390 "/usr/include/stdlib.h"
return __strtoull_internal(__nptr, __endptr, __base, 0); }
 
#line 398 "/usr/include/stdlib.h"
extern __inline double  __attribute__  (( __nothrow__ )) atof(__const char *__nptr)  {

#line 399 "/usr/include/stdlib.h"
return strtod(__nptr, ((char **)(((void *)0)))); }
 
#line 403 "/usr/include/stdlib.h"
extern __inline int  __attribute__  (( __nothrow__ )) atoi(__const char *__nptr)  {

#line 404 "/usr/include/stdlib.h"
return ((int )strtol(__nptr, ((char **)(((void *)0))), 10)); }
 
#line 408 "/usr/include/stdlib.h"
extern __inline long int  __attribute__  (( __nothrow__ )) atol(__const char *__nptr)  {

#line 409 "/usr/include/stdlib.h"
return strtol(__nptr, ((char **)(((void *)0))), 10); }
 
#line 417 "/usr/include/stdlib.h"
 __extension__ extern __inline long long int  __attribute__  (( __nothrow__ )) atoll(__const char *__nptr)  {

#line 418 "/usr/include/stdlib.h"
return strtoll(__nptr, ((char **)(((void *)0))), 10); }
 
# 240 "/usr/include/stdlib.h" 3 4
# 429 "/usr/include/stdlib.h" 3 4
extern char *l64a(long int __n) __attribute__  (( __nothrow__ )) ; 
#line 433 "/usr/include/stdlib.h"
extern long int a64l(__const char *__s) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 445 "/usr/include/stdlib.h"
extern long int random(void ) __attribute__  (( __nothrow__ )) ; 
#line 448 "/usr/include/stdlib.h"
extern void srandom(unsigned int __seed) __attribute__  (( __nothrow__ )) ; 
#line 455 "/usr/include/stdlib.h"
extern char *initstate(unsigned int __seed, char *__statebuf,  size_t __statelen) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 459 "/usr/include/stdlib.h"
extern char *setstate(char *__statebuf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 476 "/usr/include/stdlib.h"
struct random_data { int32_t *fptr;  int32_t *rptr;  int32_t *state; int rand_type; int rand_deg; int rand_sep;  int32_t *end_ptr; }; 
#line 479 "/usr/include/stdlib.h"
extern int random_r(struct random_data *__restrict __buf,  int32_t *__restrict __result) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 482 "/usr/include/stdlib.h"
extern int srandom_r(unsigned int __seed, struct random_data *__buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 487 "/usr/include/stdlib.h"
extern int initstate_r(unsigned int __seed, char *__restrict __statebuf,  size_t __statelen, struct random_data *__restrict __buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 4 )  )) ; 
#line 491 "/usr/include/stdlib.h"
extern int setstate_r(char *__restrict __statebuf, struct random_data *__restrict __buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 498 "/usr/include/stdlib.h"
extern int rand(void ) __attribute__  (( __nothrow__ )) ; 
#line 500 "/usr/include/stdlib.h"
extern void srand(unsigned int __seed) __attribute__  (( __nothrow__ )) ; 
#line 505 "/usr/include/stdlib.h"
extern int rand_r(unsigned int *__seed) __attribute__  (( __nothrow__ )) ; 
#line 513 "/usr/include/stdlib.h"
extern double drand48(void ) __attribute__  (( __nothrow__ )) ; 
#line 514 "/usr/include/stdlib.h"
extern double erand48(unsigned short int __xsubi[3]) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 517 "/usr/include/stdlib.h"
extern long int lrand48(void ) __attribute__  (( __nothrow__ )) ; 
#line 519 "/usr/include/stdlib.h"
extern long int nrand48(unsigned short int __xsubi[3]) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 522 "/usr/include/stdlib.h"
extern long int mrand48(void ) __attribute__  (( __nothrow__ )) ; 
#line 524 "/usr/include/stdlib.h"
extern long int jrand48(unsigned short int __xsubi[3]) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 527 "/usr/include/stdlib.h"
extern void srand48(long int __seedval) __attribute__  (( __nothrow__ )) ; 
#line 529 "/usr/include/stdlib.h"
extern unsigned short int *seed48(unsigned short int __seed16v[3]) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 530 "/usr/include/stdlib.h"
extern void lcong48(unsigned short int __param[7]) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 543 "/usr/include/stdlib.h"
struct drand48_data {unsigned short int __x[3]; unsigned short int __old_x[3]; unsigned short int __c; unsigned short int __init; unsigned long long int __a; }; 
#line 547 "/usr/include/stdlib.h"
extern int drand48_r(struct drand48_data *__restrict __buffer, double *__restrict __result) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 550 "/usr/include/stdlib.h"
extern int erand48_r(unsigned short int __xsubi[3], struct drand48_data *__restrict __buffer, double *__restrict __result) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 555 "/usr/include/stdlib.h"
extern int lrand48_r(struct drand48_data *__restrict __buffer, long int *__restrict __result) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 559 "/usr/include/stdlib.h"
extern int nrand48_r(unsigned short int __xsubi[3], struct drand48_data *__restrict __buffer, long int *__restrict __result) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 564 "/usr/include/stdlib.h"
extern int mrand48_r(struct drand48_data *__restrict __buffer, long int *__restrict __result) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 568 "/usr/include/stdlib.h"
extern int jrand48_r(unsigned short int __xsubi[3], struct drand48_data *__restrict __buffer, long int *__restrict __result) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 572 "/usr/include/stdlib.h"
extern int srand48_r(long int __seedval, struct drand48_data *__buffer) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 575 "/usr/include/stdlib.h"
extern int seed48_r(unsigned short int __seed16v[3], struct drand48_data *__buffer) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 579 "/usr/include/stdlib.h"
extern int lcong48_r(unsigned short int __param[7], struct drand48_data *__buffer) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 589 "/usr/include/stdlib.h"
extern void *malloc( size_t __size) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ )) ; 
#line 592 "/usr/include/stdlib.h"
extern void *calloc( size_t __nmemb,  size_t __size) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ )) ; 
#line 601 "/usr/include/stdlib.h"
extern void *realloc(void *__ptr,  size_t __size) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 603 "/usr/include/stdlib.h"
extern void free(void *__ptr) __attribute__  (( __nothrow__ )) ; 
#line 608 "/usr/include/stdlib.h"
extern void cfree(void *__ptr) __attribute__  (( __nothrow__ )) ; 
# 445 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/alloca.h" 1 3 4
# 25 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.0/include/stddef.h" 1 3 4
# 33 "/usr/include/alloca.h" 2 3 4
extern void *alloca( size_t __size) __attribute__  (( __nothrow__ )) ; 
#line 617 "/usr/include/stdlib.h"
extern void *valloc( size_t __size) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ )) ; 
#line 623 "/usr/include/stdlib.h"
extern int posix_memalign(void **__memptr,  size_t __alignment,  size_t __size) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 628 "/usr/include/stdlib.h"
extern void abort(void ) __attribute__  (( __nothrow__ ))  __attribute__  (( __noreturn__ )) ; 
#line 632 "/usr/include/stdlib.h"
extern int atexit(void (*__func)(void )) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 639 "/usr/include/stdlib.h"
extern int on_exit(void (*__func)(int __status, void *__arg), void *__arg) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 646 "/usr/include/stdlib.h"
extern void exit(int __status) __attribute__  (( __nothrow__ ))  __attribute__  (( __noreturn__ )) ; 
#line 653 "/usr/include/stdlib.h"
extern void _Exit(int __status) __attribute__  (( __nothrow__ ))  __attribute__  (( __noreturn__ )) ; 
#line 660 "/usr/include/stdlib.h"
extern char *getenv(__const char *__name) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 666 "/usr/include/stdlib.h"
extern char *__secure_getenv(__const char *__name) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 672 "/usr/include/stdlib.h"
extern int putenv(char *__string) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 679 "/usr/include/stdlib.h"
extern int setenv(__const char *__name, __const char *__value, int __replace) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 682 "/usr/include/stdlib.h"
extern int unsetenv(__const char *__name) __attribute__  (( __nothrow__ )) ; 
#line 689 "/usr/include/stdlib.h"
extern int clearenv(void ) __attribute__  (( __nothrow__ )) ; 
# 613 "/usr/include/stdlib.h" 2 3 4
# 698 "/usr/include/stdlib.h" 3 4
extern char *mktemp(char *__template) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 709 "/usr/include/stdlib.h"
extern int mkstemp(char *__template) __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 709 "/usr/include/stdlib.h" 3 4
# 719 "/usr/include/stdlib.h" 3 4
extern int mkstemp64(char *__template) __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 729 "/usr/include/stdlib.h"
extern char *mkdtemp(char *__template) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 738 "/usr/include/stdlib.h"
extern int system(__const char *__command); 
#line 747 "/usr/include/stdlib.h"
extern char *canonicalize_file_name(__const char *__name) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 729 "/usr/include/stdlib.h" 3 4
# 758 "/usr/include/stdlib.h" 3 4
extern char *realpath(__const char *__restrict __name, char *__restrict __resolved) __attribute__  (( __nothrow__ )) ; 
#line 765 "/usr/include/stdlib.h"
typedef int (*__compar_fn_t)(__const void *, __const void *); 
#line 768 "/usr/include/stdlib.h"
typedef  __compar_fn_t comparison_fn_t; 
#line 777 "/usr/include/stdlib.h"
extern void *bsearch(__const void *__key, __const void *__base,  size_t __nmemb,  size_t __size,  __compar_fn_t __compar) __attribute__  (( __nonnull__ ( 1, 2, 5 )  )) ; 
#line 782 "/usr/include/stdlib.h"
extern void qsort(void *__base,  size_t __nmemb,  size_t __size,  __compar_fn_t __compar) __attribute__  (( __nonnull__ ( 1, 4 )  )) ; 
#line 786 "/usr/include/stdlib.h"
extern int abs(int __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 787 "/usr/include/stdlib.h"
extern long int labs(long int __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 792 "/usr/include/stdlib.h"
 __extension__ extern long long int llabs(long long int __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 801 "/usr/include/stdlib.h"
extern  div_t div(int __numer, int __denom) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 803 "/usr/include/stdlib.h"
extern  ldiv_t ldiv(long int __numer, long int __denom) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 810 "/usr/include/stdlib.h"
 __extension__ extern  lldiv_t lldiv(long long int __numer, long long int __denom) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 823 "/usr/include/stdlib.h"
extern char *ecvt(double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4 )  )) ; 
#line 829 "/usr/include/stdlib.h"
extern char *fcvt(double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4 )  )) ; 
#line 835 "/usr/include/stdlib.h"
extern char *gcvt(double __value, int __ndigit, char *__buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3 )  )) ; 
#line 842 "/usr/include/stdlib.h"
extern char *qecvt(long double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4 )  )) ; 
#line 845 "/usr/include/stdlib.h"
extern char *qfcvt(long double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4 )  )) ; 
#line 847 "/usr/include/stdlib.h"
extern char *qgcvt(long double __value, int __ndigit, char *__buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3 )  )) ; 
#line 854 "/usr/include/stdlib.h"
extern int ecvt_r(double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign, char *__restrict __buf,  size_t __len) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4, 5 )  )) ; 
#line 857 "/usr/include/stdlib.h"
extern int fcvt_r(double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign, char *__restrict __buf,  size_t __len) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4, 5 )  )) ; 
#line 862 "/usr/include/stdlib.h"
extern int qecvt_r(long double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign, char *__restrict __buf,  size_t __len) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4, 5 )  )) ; 
#line 866 "/usr/include/stdlib.h"
extern int qfcvt_r(long double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign, char *__restrict __buf,  size_t __len) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4, 5 )  )) ; 
#line 874 "/usr/include/stdlib.h"
extern int mblen(__const char *__s,  size_t __n) __attribute__  (( __nothrow__ )) ; 
#line 878 "/usr/include/stdlib.h"
extern int mbtowc( wchar_t *__restrict __pwc, __const char *__restrict __s,  size_t __n) __attribute__  (( __nothrow__ )) ; 
#line 881 "/usr/include/stdlib.h"
extern int wctomb(char *__s,  wchar_t __wchar) __attribute__  (( __nothrow__ )) ; 
#line 886 "/usr/include/stdlib.h"
extern  size_t mbstowcs( wchar_t *__restrict __pwcs, __const char *__restrict __s,  size_t __n) __attribute__  (( __nothrow__ )) ; 
#line 890 "/usr/include/stdlib.h"
extern  size_t wcstombs(char *__restrict __s, __const  wchar_t *__restrict __pwcs,  size_t __n) __attribute__  (( __nothrow__ )) ; 
#line 899 "/usr/include/stdlib.h"
extern int rpmatch(__const char *__response) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 822 "/usr/include/stdlib.h" 3 4
# 913 "/usr/include/stdlib.h" 3 4
extern int getsubopt(char **__restrict __optionp, char *__const *__restrict __tokens, char **__restrict __valuep) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2, 3 )  )) ; 
#line 919 "/usr/include/stdlib.h"
extern void setkey(__const char *__key) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 927 "/usr/include/stdlib.h"
extern int posix_openpt(int __oflag); 
#line 935 "/usr/include/stdlib.h"
extern int grantpt(int __fd) __attribute__  (( __nothrow__ )) ; 
#line 939 "/usr/include/stdlib.h"
extern int unlockpt(int __fd) __attribute__  (( __nothrow__ )) ; 
#line 944 "/usr/include/stdlib.h"
extern char *ptsname(int __fd) __attribute__  (( __nothrow__ )) ; 
#line 952 "/usr/include/stdlib.h"
extern int ptsname_r(int __fd, char *__buf,  size_t __buflen) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 955 "/usr/include/stdlib.h"
extern int getpt(void ); 
#line 963 "/usr/include/stdlib.h"
extern int getloadavg(double __loadavg[], int __nelem) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 978 "/usr/include/stdlib.h" 3 4
# 209 "../.././gcc/system.h" 2
# 231 "../.././gcc/system.h" 
# 1 "/usr/include/unistd.h" 1 3 4
# 28 "/usr/include/unistd.h" 3 4
# 171 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/bits/posix_opt.h" 1 3 4
# 172 "/usr/include/unistd.h" 2 3 4
# 1 "/usr/include/bits/environments.h" 1 3 4
# 176 "/usr/include/unistd.h" 2 3 4
# 195 "/usr/include/unistd.h" 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.0/include/stddef.h" 1 3 4
# 196 "/usr/include/unistd.h" 2 3 4
# 236 "/usr/include/unistd.h" 3 4
typedef  __intptr_t intptr_t; 
#line 243 "/usr/include/unistd.h"
typedef  __socklen_t socklen_t; 
#line 256 "/usr/include/unistd.h"
extern int access(__const char *__name, int __type) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 262 "/usr/include/unistd.h"
extern int euidaccess(__const char *__name, int __type) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 266 "/usr/include/unistd.h"
extern int eaccess(__const char *__name, int __type) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 274 "/usr/include/unistd.h"
extern int faccessat(int __fd, __const char *__file, int __type, int __flag) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
# 256 "/usr/include/unistd.h" 3 4
# 299 "/usr/include/unistd.h" 3 4
extern  __off_t lseek(int __fd,  __off_t __offset, int __whence) __attribute__  (( __nothrow__ )) ; 
#line 311 "/usr/include/unistd.h"
extern  __off64_t lseek64(int __fd,  __off64_t __offset, int __whence) __attribute__  (( __nothrow__ )) ; 
#line 318 "/usr/include/unistd.h"
extern int close(int __fd); 
#line 325 "/usr/include/unistd.h"
extern  ssize_t read(int __fd, void *__buf,  size_t __nbytes); 
#line 331 "/usr/include/unistd.h"
extern  ssize_t write(int __fd, __const void *__buf,  size_t __n); 
# 310 "/usr/include/unistd.h" 3 4
# 342 "/usr/include/unistd.h" 3 4
extern  ssize_t pread(int __fd, void *__buf,  size_t __nbytes,  __off_t __offset); 
#line 350 "/usr/include/unistd.h"
extern  ssize_t pwrite(int __fd, __const void *__buf,  size_t __n,  __off_t __offset); 
#line 370 "/usr/include/unistd.h"
extern  ssize_t pread64(int __fd, void *__buf,  size_t __nbytes,  __off64_t __offset); 
#line 374 "/usr/include/unistd.h"
extern  ssize_t pwrite64(int __fd, __const void *__buf,  size_t __n,  __off64_t __offset); 
#line 382 "/usr/include/unistd.h"
extern int pipe(int __pipedes[2]) __attribute__  (( __nothrow__ )) ; 
# 369 "/usr/include/unistd.h" 3 4
# 391 "/usr/include/unistd.h" 3 4
extern unsigned int alarm(unsigned int __seconds) __attribute__  (( __nothrow__ )) ; 
#line 403 "/usr/include/unistd.h"
extern unsigned int sleep(unsigned int __seconds); 
#line 411 "/usr/include/unistd.h"
extern  __useconds_t ualarm( __useconds_t __value,  __useconds_t __interval) __attribute__  (( __nothrow__ )) ; 
#line 418 "/usr/include/unistd.h"
extern int usleep( __useconds_t __useconds); 
# 403 "/usr/include/unistd.h" 3 4
# 427 "/usr/include/unistd.h" 3 4
extern int pause(void ); 
#line 432 "/usr/include/unistd.h"
extern int chown(__const char *__file,  __uid_t __owner,  __gid_t __group) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 436 "/usr/include/unistd.h"
extern int fchown(int __fd,  __uid_t __owner,  __gid_t __group) __attribute__  (( __nothrow__ )) ; 
#line 442 "/usr/include/unistd.h"
extern int lchown(__const char *__file,  __uid_t __owner,  __gid_t __group) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 451 "/usr/include/unistd.h"
extern int fchownat(int __fd, __const char *__file,  __uid_t __owner,  __gid_t __group, int __flag) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 455 "/usr/include/unistd.h"
extern int chdir(__const char *__path) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 459 "/usr/include/unistd.h"
extern int fchdir(int __fd) __attribute__  (( __nothrow__ )) ; 
#line 469 "/usr/include/unistd.h"
extern char *getcwd(char *__buf,  size_t __size) __attribute__  (( __nothrow__ )) ; 
#line 475 "/usr/include/unistd.h"
extern char *get_current_dir_name(void ) __attribute__  (( __nothrow__ )) ; 
#line 483 "/usr/include/unistd.h"
extern char *getwd(char *__buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __deprecated__ )) ; 
#line 488 "/usr/include/unistd.h"
extern int dup(int __fd) __attribute__  (( __nothrow__ )) ; 
#line 491 "/usr/include/unistd.h"
extern int dup2(int __fd, int __fd2) __attribute__  (( __nothrow__ )) ; 
#line 494 "/usr/include/unistd.h"
extern char **__environ; 
#line 496 "/usr/include/unistd.h"
extern char **environ; 
#line 503 "/usr/include/unistd.h"
extern int execve(__const char *__path, char *__const __argv[], char *__const __envp[]) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 509 "/usr/include/unistd.h"
extern int fexecve(int __fd, char *__const __argv[], char *__const __envp[]) __attribute__  (( __nothrow__ )) ; 
#line 515 "/usr/include/unistd.h"
extern int execv(__const char *__path, char *__const __argv[]) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 520 "/usr/include/unistd.h"
extern int execle(__const char *__path, __const char *__arg, ...) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 525 "/usr/include/unistd.h"
extern int execl(__const char *__path, __const char *__arg, ...) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 530 "/usr/include/unistd.h"
extern int execvp(__const char *__file, char *__const __argv[]) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 536 "/usr/include/unistd.h"
extern int execlp(__const char *__file, __const char *__arg, ...) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 541 "/usr/include/unistd.h"
extern int nice(int __inc) __attribute__  (( __nothrow__ )) ; 
#line 546 "/usr/include/unistd.h"
extern void _exit(int __status) __attribute__  (( __noreturn__ )) ; 
# 469 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/bits/confname.h" 1 3 4
# 70 "/usr/include/bits/confname.h" 3 4
enum {_PC_LINK_MAX,_PC_MAX_CANON,_PC_MAX_INPUT,_PC_NAME_MAX,_PC_PATH_MAX,_PC_PIPE_BUF,_PC_CHOWN_RESTRICTED,_PC_NO_TRUNC,_PC_VDISABLE,_PC_SYNC_IO,_PC_ASYNC_IO,_PC_PRIO_IO,_PC_SOCK_MAXBUF,_PC_FILESIZEBITS,_PC_REC_INCR_XFER_SIZE,_PC_REC_MAX_XFER_SIZE,_PC_REC_MIN_XFER_SIZE,_PC_REC_XFER_ALIGN,_PC_ALLOC_SIZE_MIN,_PC_SYMLINK_MAX,_PC_2_SYMLINKS}; 
#line 503 "/usr/include/bits/confname.h"
enum {_SC_ARG_MAX,_SC_CHILD_MAX,_SC_CLK_TCK,_SC_NGROUPS_MAX,_SC_OPEN_MAX,_SC_STREAM_MAX,_SC_TZNAME_MAX,_SC_JOB_CONTROL,_SC_SAVED_IDS,_SC_REALTIME_SIGNALS,_SC_PRIORITY_SCHEDULING,_SC_TIMERS,_SC_ASYNCHRONOUS_IO,_SC_PRIORITIZED_IO,_SC_SYNCHRONIZED_IO,_SC_FSYNC,_SC_MAPPED_FILES,_SC_MEMLOCK,_SC_MEMLOCK_RANGE,_SC_MEMORY_PROTECTION,_SC_MESSAGE_PASSING,_SC_SEMAPHORES,_SC_SHARED_MEMORY_OBJECTS,_SC_AIO_LISTIO_MAX,_SC_AIO_MAX,_SC_AIO_PRIO_DELTA_MAX,_SC_DELAYTIMER_MAX,_SC_MQ_OPEN_MAX,_SC_MQ_PRIO_MAX,_SC_VERSION,_SC_PAGESIZE,_SC_RTSIG_MAX,_SC_SEM_NSEMS_MAX,_SC_SEM_VALUE_MAX,_SC_SIGQUEUE_MAX,_SC_TIMER_MAX,_SC_BC_BASE_MAX,_SC_BC_DIM_MAX,_SC_BC_SCALE_MAX,_SC_BC_STRING_MAX,_SC_COLL_WEIGHTS_MAX,_SC_EQUIV_CLASS_MAX,_SC_EXPR_NEST_MAX,_SC_LINE_MAX,_SC_RE_DUP_MAX,_SC_CHARCLASS_NAME_MAX,_SC_2_VERSION,_SC_2_C_BIND,_SC_2_C_DEV,_SC_2_FORT_DEV,_SC_2_FORT_RUN,_SC_2_SW_DEV,_SC_2_LOCALEDEF,_SC_PII,_SC_PII_XTI,_SC_PII_SOCKET,_SC_PII_INTERNET,_SC_PII_OSI,_SC_POLL,_SC_SELECT,_SC_UIO_MAXIOV,_SC_IOV_MAX=_SC_UIO_MAXIOV,_SC_PII_INTERNET_STREAM,_SC_PII_INTERNET_DGRAM,_SC_PII_OSI_COTS,_SC_PII_OSI_CLTS,_SC_PII_OSI_M,_SC_T_IOV_MAX,_SC_THREADS,_SC_THREAD_SAFE_FUNCTIONS,_SC_GETGR_R_SIZE_MAX,_SC_GETPW_R_SIZE_MAX,_SC_LOGIN_NAME_MAX,_SC_TTY_NAME_MAX,_SC_THREAD_DESTRUCTOR_ITERATIONS,_SC_THREAD_KEYS_MAX,_SC_THREAD_STACK_MIN,_SC_THREAD_THREADS_MAX,_SC_THREAD_ATTR_STACKADDR,_SC_THREAD_ATTR_STACKSIZE,_SC_THREAD_PRIORITY_SCHEDULING,_SC_THREAD_PRIO_INHERIT,_SC_THREAD_PRIO_PROTECT,_SC_THREAD_PROCESS_SHARED,_SC_NPROCESSORS_CONF,_SC_NPROCESSORS_ONLN,_SC_PHYS_PAGES,_SC_AVPHYS_PAGES,_SC_ATEXIT_MAX,_SC_PASS_MAX,_SC_XOPEN_VERSION,_SC_XOPEN_XCU_VERSION,_SC_XOPEN_UNIX,_SC_XOPEN_CRYPT,_SC_XOPEN_ENH_I18N,_SC_XOPEN_SHM,_SC_2_CHAR_TERM,_SC_2_C_VERSION,_SC_2_UPE,_SC_XOPEN_XPG2,_SC_XOPEN_XPG3,_SC_XOPEN_XPG4,_SC_CHAR_BIT,_SC_CHAR_MAX,_SC_CHAR_MIN,_SC_INT_MAX,_SC_INT_MIN,_SC_LONG_BIT,_SC_WORD_BIT,_SC_MB_LEN_MAX,_SC_NZERO,_SC_SSIZE_MAX,_SC_SCHAR_MAX,_SC_SCHAR_MIN,_SC_SHRT_MAX,_SC_SHRT_MIN,_SC_UCHAR_MAX,_SC_UINT_MAX,_SC_ULONG_MAX,_SC_USHRT_MAX,_SC_NL_ARGMAX,_SC_NL_LANGMAX,_SC_NL_MSGMAX,_SC_NL_NMAX,_SC_NL_SETMAX,_SC_NL_TEXTMAX,_SC_XBS5_ILP32_OFF32,_SC_XBS5_ILP32_OFFBIG,_SC_XBS5_LP64_OFF64,_SC_XBS5_LPBIG_OFFBIG,_SC_XOPEN_LEGACY,_SC_XOPEN_REALTIME,_SC_XOPEN_REALTIME_THREADS,_SC_ADVISORY_INFO,_SC_BARRIERS,_SC_BASE,_SC_C_LANG_SUPPORT,_SC_C_LANG_SUPPORT_R,_SC_CLOCK_SELECTION,_SC_CPUTIME,_SC_THREAD_CPUTIME,_SC_DEVICE_IO,_SC_DEVICE_SPECIFIC,_SC_DEVICE_SPECIFIC_R,_SC_FD_MGMT,_SC_FIFO,_SC_PIPE,_SC_FILE_ATTRIBUTES,_SC_FILE_LOCKING,_SC_FILE_SYSTEM,_SC_MONOTONIC_CLOCK,_SC_MULTI_PROCESS,_SC_SINGLE_PROCESS,_SC_NETWORKING,_SC_READER_WRITER_LOCKS,_SC_SPIN_LOCKS,_SC_REGEXP,_SC_REGEX_VERSION,_SC_SHELL,_SC_SIGNALS,_SC_SPAWN,_SC_SPORADIC_SERVER,_SC_THREAD_SPORADIC_SERVER,_SC_SYSTEM_DATABASE,_SC_SYSTEM_DATABASE_R,_SC_TIMEOUTS,_SC_TYPED_MEMORY_OBJECTS,_SC_USER_GROUPS,_SC_USER_GROUPS_R,_SC_2_PBS,_SC_2_PBS_ACCOUNTING,_SC_2_PBS_LOCATE,_SC_2_PBS_MESSAGE,_SC_2_PBS_TRACK,_SC_SYMLOOP_MAX,_SC_STREAMS,_SC_2_PBS_CHECKPOINT,_SC_V6_ILP32_OFF32,_SC_V6_ILP32_OFFBIG,_SC_V6_LP64_OFF64,_SC_V6_LPBIG_OFFBIG,_SC_HOST_NAME_MAX,_SC_TRACE,_SC_TRACE_EVENT_FILTER,_SC_TRACE_INHERIT,_SC_TRACE_LOG,_SC_LEVEL1_ICACHE_SIZE,_SC_LEVEL1_ICACHE_ASSOC,_SC_LEVEL1_ICACHE_LINESIZE,_SC_LEVEL1_DCACHE_SIZE,_SC_LEVEL1_DCACHE_ASSOC,_SC_LEVEL1_DCACHE_LINESIZE,_SC_LEVEL2_CACHE_SIZE,_SC_LEVEL2_CACHE_ASSOC,_SC_LEVEL2_CACHE_LINESIZE,_SC_LEVEL3_CACHE_SIZE,_SC_LEVEL3_CACHE_ASSOC,_SC_LEVEL3_CACHE_LINESIZE,_SC_LEVEL4_CACHE_SIZE,_SC_LEVEL4_CACHE_ASSOC,_SC_LEVEL4_CACHE_LINESIZE,_SC_IPV6=_SC_LEVEL1_ICACHE_SIZE + 50,_SC_RAW_SOCKETS}; 
#line 601 "/usr/include/bits/confname.h"
enum {_CS_PATH,_CS_V6_WIDTH_RESTRICTED_ENVS,_CS_GNU_LIBC_VERSION,_CS_GNU_LIBPTHREAD_VERSION,_CS_LFS_CFLAGS=1000,_CS_LFS_LDFLAGS,_CS_LFS_LIBS,_CS_LFS_LINTFLAGS,_CS_LFS64_CFLAGS,_CS_LFS64_LDFLAGS,_CS_LFS64_LIBS,_CS_LFS64_LINTFLAGS,_CS_XBS5_ILP32_OFF32_CFLAGS=1100,_CS_XBS5_ILP32_OFF32_LDFLAGS,_CS_XBS5_ILP32_OFF32_LIBS,_CS_XBS5_ILP32_OFF32_LINTFLAGS,_CS_XBS5_ILP32_OFFBIG_CFLAGS,_CS_XBS5_ILP32_OFFBIG_LDFLAGS,_CS_XBS5_ILP32_OFFBIG_LIBS,_CS_XBS5_ILP32_OFFBIG_LINTFLAGS,_CS_XBS5_LP64_OFF64_CFLAGS,_CS_XBS5_LP64_OFF64_LDFLAGS,_CS_XBS5_LP64_OFF64_LIBS,_CS_XBS5_LP64_OFF64_LINTFLAGS,_CS_XBS5_LPBIG_OFFBIG_CFLAGS,_CS_XBS5_LPBIG_OFFBIG_LDFLAGS,_CS_XBS5_LPBIG_OFFBIG_LIBS,_CS_XBS5_LPBIG_OFFBIG_LINTFLAGS,_CS_POSIX_V6_ILP32_OFF32_CFLAGS,_CS_POSIX_V6_ILP32_OFF32_LDFLAGS,_CS_POSIX_V6_ILP32_OFF32_LIBS,_CS_POSIX_V6_ILP32_OFF32_LINTFLAGS,_CS_POSIX_V6_ILP32_OFFBIG_CFLAGS,_CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS,_CS_POSIX_V6_ILP32_OFFBIG_LIBS,_CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS,_CS_POSIX_V6_LP64_OFF64_CFLAGS,_CS_POSIX_V6_LP64_OFF64_LDFLAGS,_CS_POSIX_V6_LP64_OFF64_LIBS,_CS_POSIX_V6_LP64_OFF64_LINTFLAGS,_CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS,_CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS,_CS_POSIX_V6_LPBIG_OFFBIG_LIBS,_CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS}; 
#line 556 "/usr/include/unistd.h"
extern long int pathconf(__const char *__path, int __name) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 559 "/usr/include/unistd.h"
extern long int fpathconf(int __fd, int __name) __attribute__  (( __nothrow__ )) ; 
#line 562 "/usr/include/unistd.h"
extern long int sysconf(int __name) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 566 "/usr/include/unistd.h"
extern  size_t confstr(int __name, char *__buf,  size_t __len) __attribute__  (( __nothrow__ )) ; 
#line 571 "/usr/include/unistd.h"
extern  __pid_t getpid(void ) __attribute__  (( __nothrow__ )) ; 
#line 574 "/usr/include/unistd.h"
extern  __pid_t getppid(void ) __attribute__  (( __nothrow__ )) ; 
#line 579 "/usr/include/unistd.h"
extern  __pid_t getpgrp(void ) __attribute__  (( __nothrow__ )) ; 
# 553 "/usr/include/unistd.h" 2 3 4
# 589 "/usr/include/unistd.h" 3 4
extern  __pid_t __getpgid( __pid_t __pid) __attribute__  (( __nothrow__ )) ; 
#line 591 "/usr/include/unistd.h"
extern  __pid_t getpgid( __pid_t __pid) __attribute__  (( __nothrow__ )) ; 
#line 598 "/usr/include/unistd.h"
extern int setpgid( __pid_t __pid,  __pid_t __pgid) __attribute__  (( __nothrow__ )) ; 
#line 615 "/usr/include/unistd.h"
extern int setpgrp(void ) __attribute__  (( __nothrow__ )) ; 
# 615 "/usr/include/unistd.h" 3 4
# 632 "/usr/include/unistd.h" 3 4
extern  __pid_t setsid(void ) __attribute__  (( __nothrow__ )) ; 
#line 636 "/usr/include/unistd.h"
extern  __pid_t getsid( __pid_t __pid) __attribute__  (( __nothrow__ )) ; 
#line 640 "/usr/include/unistd.h"
extern  __uid_t getuid(void ) __attribute__  (( __nothrow__ )) ; 
#line 643 "/usr/include/unistd.h"
extern  __uid_t geteuid(void ) __attribute__  (( __nothrow__ )) ; 
#line 646 "/usr/include/unistd.h"
extern  __gid_t getgid(void ) __attribute__  (( __nothrow__ )) ; 
#line 649 "/usr/include/unistd.h"
extern  __gid_t getegid(void ) __attribute__  (( __nothrow__ )) ; 
#line 654 "/usr/include/unistd.h"
extern int getgroups(int __size,  __gid_t __list[]) __attribute__  (( __nothrow__ )) ; 
#line 658 "/usr/include/unistd.h"
extern int group_member( __gid_t __gid) __attribute__  (( __nothrow__ )) ; 
#line 665 "/usr/include/unistd.h"
extern int setuid( __uid_t __uid) __attribute__  (( __nothrow__ )) ; 
#line 670 "/usr/include/unistd.h"
extern int setreuid( __uid_t __ruid,  __uid_t __euid) __attribute__  (( __nothrow__ )) ; 
#line 675 "/usr/include/unistd.h"
extern int seteuid( __uid_t __uid) __attribute__  (( __nothrow__ )) ; 
#line 682 "/usr/include/unistd.h"
extern int setgid( __gid_t __gid) __attribute__  (( __nothrow__ )) ; 
#line 687 "/usr/include/unistd.h"
extern int setregid( __gid_t __rgid,  __gid_t __egid) __attribute__  (( __nothrow__ )) ; 
#line 692 "/usr/include/unistd.h"
extern int setegid( __gid_t __gid) __attribute__  (( __nothrow__ )) ; 
#line 699 "/usr/include/unistd.h"
extern int getresuid( __uid_t *__ruid,  __uid_t *__euid,  __uid_t *__suid) __attribute__  (( __nothrow__ )) ; 
#line 704 "/usr/include/unistd.h"
extern int getresgid( __gid_t *__rgid,  __gid_t *__egid,  __gid_t *__sgid) __attribute__  (( __nothrow__ )) ; 
#line 709 "/usr/include/unistd.h"
extern int setresuid( __uid_t __ruid,  __uid_t __euid,  __uid_t __suid) __attribute__  (( __nothrow__ )) ; 
#line 714 "/usr/include/unistd.h"
extern int setresgid( __gid_t __rgid,  __gid_t __egid,  __gid_t __sgid) __attribute__  (( __nothrow__ )) ; 
#line 721 "/usr/include/unistd.h"
extern  __pid_t fork(void ) __attribute__  (( __nothrow__ )) ; 
#line 728 "/usr/include/unistd.h"
extern  __pid_t vfork(void ) __attribute__  (( __nothrow__ )) ; 
#line 734 "/usr/include/unistd.h"
extern char *ttyname(int __fd) __attribute__  (( __nothrow__ )) ; 
#line 739 "/usr/include/unistd.h"
extern int ttyname_r(int __fd, char *__buf,  size_t __buflen) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 743 "/usr/include/unistd.h"
extern int isatty(int __fd) __attribute__  (( __nothrow__ )) ; 
#line 749 "/usr/include/unistd.h"
extern int ttyslot(void ) __attribute__  (( __nothrow__ )) ; 
#line 755 "/usr/include/unistd.h"
extern int link(__const char *__from, __const char *__to) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 762 "/usr/include/unistd.h"
extern int linkat(int __fromfd, __const char *__from, int __tofd, __const char *__to, int __flags) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 4 )  )) ; 
#line 768 "/usr/include/unistd.h"
extern int symlink(__const char *__from, __const char *__to) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 774 "/usr/include/unistd.h"
extern int readlink(__const char *__restrict __path, char *__restrict __buf,  size_t __len) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 780 "/usr/include/unistd.h"
extern int symlinkat(__const char *__from, int __tofd, __const char *__to) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 3 )  )) ; 
#line 785 "/usr/include/unistd.h"
extern int readlinkat(int __fd, __const char *__restrict __path, char *__restrict __buf,  size_t __len) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 3 )  )) ; 
#line 789 "/usr/include/unistd.h"
extern int unlink(__const char *__name) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 794 "/usr/include/unistd.h"
extern int unlinkat(int __fd, __const char *__name, int __flag) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 798 "/usr/include/unistd.h"
extern int rmdir(__const char *__path) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 802 "/usr/include/unistd.h"
extern  __pid_t tcgetpgrp(int __fd) __attribute__  (( __nothrow__ )) ; 
#line 805 "/usr/include/unistd.h"
extern int tcsetpgrp(int __fd,  __pid_t __pgrp_id) __attribute__  (( __nothrow__ )) ; 
#line 812 "/usr/include/unistd.h"
extern char *getlogin(void ); 
#line 820 "/usr/include/unistd.h"
extern int getlogin_r(char *__name,  size_t __name_len) __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 825 "/usr/include/unistd.h"
extern int setlogin(__const char *__name) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 834 "/usr/include/unistd.h" 3 4
# 1 "../.././gcc/../include/getopt.h" 1 3 4
# 36 "../.././gcc/../include/getopt.h" 3 4
extern char *optarg; 
#line 50 "../.././gcc/../include/getopt.h"
extern int optind; 
#line 55 "../.././gcc/../include/getopt.h"
extern int opterr; 
#line 59 "../.././gcc/../include/getopt.h"
extern int optopt; 
# 50 "../.././gcc/../include/getopt.h" 3 4
# 94 "../.././gcc/../include/getopt.h" 3 4
struct option {const char *name; int has_arg; int *flag; int val; }; 
#line 113 "../.././gcc/../include/getopt.h"
extern int getopt(int argc, char *const *argv, const char *shortopts); 
#line 122 "../.././gcc/../include/getopt.h"
extern int getopt_long(int argc, char *const *argv, const char *shortopts, const struct option *longopts, int *longind); 
#line 125 "../.././gcc/../include/getopt.h"
extern int getopt_long_only(int argc, char *const *argv, const char *shortopts, const struct option *longopts, int *longind); 
#line 131 "../.././gcc/../include/getopt.h"
extern int _getopt_internal(int argc, char *const *argv, const char *shortopts, const struct option *longopts, int *longind, int long_only); 
# 113 "../.././gcc/../include/getopt.h" 3 4
# 842 "/usr/include/unistd.h" 2 3 4
extern int gethostname(char *__name,  size_t __len) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 850 "/usr/include/unistd.h"
extern int sethostname(__const char *__name,  size_t __len) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 854 "/usr/include/unistd.h"
extern int sethostid(long int __id) __attribute__  (( __nothrow__ )) ; 
#line 861 "/usr/include/unistd.h"
extern int getdomainname(char *__name,  size_t __len) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 863 "/usr/include/unistd.h"
extern int setdomainname(__const char *__name,  size_t __len) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 869 "/usr/include/unistd.h"
extern int vhangup(void ) __attribute__  (( __nothrow__ )) ; 
#line 872 "/usr/include/unistd.h"
extern int revoke(__const char *__file) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 882 "/usr/include/unistd.h"
extern int profil(unsigned short int *__sample_buffer,  size_t __size,  size_t __offset, unsigned int __scale) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 888 "/usr/include/unistd.h"
extern int acct(__const char *__name) __attribute__  (( __nothrow__ )) ; 
#line 892 "/usr/include/unistd.h"
extern char *getusershell(void ) __attribute__  (( __nothrow__ )) ; 
#line 893 "/usr/include/unistd.h"
extern void endusershell(void ) __attribute__  (( __nothrow__ )) ; 
#line 894 "/usr/include/unistd.h"
extern void setusershell(void ) __attribute__  (( __nothrow__ )) ; 
#line 900 "/usr/include/unistd.h"
extern int daemon(int __nochdir, int __noclose) __attribute__  (( __nothrow__ )) ; 
#line 907 "/usr/include/unistd.h"
extern int chroot(__const char *__path) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 911 "/usr/include/unistd.h"
extern char *getpass(__const char *__prompt) __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 920 "/usr/include/unistd.h"
extern int fsync(int __fd); 
#line 927 "/usr/include/unistd.h"
extern long int gethostid(void ); 
#line 930 "/usr/include/unistd.h"
extern void sync(void ) __attribute__  (( __nothrow__ )) ; 
#line 935 "/usr/include/unistd.h"
extern int getpagesize(void ) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 940 "/usr/include/unistd.h"
extern int getdtablesize(void ) __attribute__  (( __nothrow__ )) ; 
#line 946 "/usr/include/unistd.h"
extern int truncate(__const char *__file,  __off_t __length) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 920 "/usr/include/unistd.h" 3 4
# 958 "/usr/include/unistd.h" 3 4
extern int truncate64(__const char *__file,  __off64_t __length) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 967 "/usr/include/unistd.h"
extern int ftruncate(int __fd,  __off_t __length) __attribute__  (( __nothrow__ )) ; 
# 967 "/usr/include/unistd.h" 3 4
# 977 "/usr/include/unistd.h" 3 4
extern int ftruncate64(int __fd,  __off64_t __length) __attribute__  (( __nothrow__ )) ; 
#line 987 "/usr/include/unistd.h"
extern int brk(void *__addr) __attribute__  (( __nothrow__ )) ; 
#line 993 "/usr/include/unistd.h"
extern void *sbrk( intptr_t __delta) __attribute__  (( __nothrow__ )) ; 
# 987 "/usr/include/unistd.h" 3 4
# 1008 "/usr/include/unistd.h" 3 4
extern long int syscall(long int __sysno, ...) __attribute__  (( __nothrow__ )) ; 
#line 1031 "/usr/include/unistd.h"
extern int lockf(int __fd, int __cmd,  __off_t __len); 
# 1031 "/usr/include/unistd.h" 3 4
# 1041 "/usr/include/unistd.h" 3 4
extern int lockf64(int __fd, int __cmd,  __off64_t __len); 
#line 1062 "/usr/include/unistd.h"
extern int fdatasync(int __fildes) __attribute__  (( __nothrow__ )) ; 
#line 1071 "/usr/include/unistd.h"
extern char *crypt(__const char *__key, __const char *__salt) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 1075 "/usr/include/unistd.h"
extern void encrypt(char *__block, int __edflag) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 1083 "/usr/include/unistd.h"
extern void swab(__const void *__restrict __from, void *__restrict __to,  ssize_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 1091 "/usr/include/unistd.h"
extern char *ctermid(char *__s) __attribute__  (( __nothrow__ )) ; 
# 1062 "/usr/include/unistd.h" 3 4
# 1100 "/usr/include/unistd.h" 3 4
# 232 "../.././gcc/system.h" 2
# 1 "/usr/include/sys/param.h" 1 3 4
# 22 "/usr/include/sys/param.h" 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.0/include/limits.h" 1 3 4
# 11 "/usr/lib/gcc/i386-redhat-linux/4.1.0/include/limits.h" 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.0/include/syslimits.h" 1 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.0/include/limits.h" 1 3 4
# 122 "/usr/lib/gcc/i386-redhat-linux/4.1.0/include/limits.h" 3 4
# 1 "/usr/include/limits.h" 1 3 4
# 145 "/usr/include/limits.h" 3 4
# 1 "/usr/include/bits/posix1_lim.h" 1 3 4
# 153 "/usr/include/bits/posix1_lim.h" 3 4
# 1 "/usr/include/bits/local_lim.h" 1 3 4
# 36 "/usr/include/bits/local_lim.h" 3 4
# 1 "/usr/include/linux/limits.h" 1 3 4
# 37 "/usr/include/bits/local_lim.h" 2 3 4
# 154 "/usr/include/bits/posix1_lim.h" 2 3 4
# 146 "/usr/include/limits.h" 2 3 4
# 1 "/usr/include/bits/posix2_lim.h" 1 3 4
# 150 "/usr/include/limits.h" 2 3 4
# 1 "/usr/include/bits/xopen_lim.h" 1 3 4
# 34 "/usr/include/bits/xopen_lim.h" 3 4
# 1 "/usr/include/bits/stdio_lim.h" 1 3 4
# 35 "/usr/include/bits/xopen_lim.h" 2 3 4
# 154 "/usr/include/limits.h" 2 3 4
# 123 "/usr/lib/gcc/i386-redhat-linux/4.1.0/include/limits.h" 2 3 4
# 8 "/usr/lib/gcc/i386-redhat-linux/4.1.0/include/syslimits.h" 2 3 4
# 12 "/usr/lib/gcc/i386-redhat-linux/4.1.0/include/limits.h" 2 3 4
# 23 "/usr/include/sys/param.h" 2 3 4
# 1 "/usr/include/linux/param.h" 1 3 4
# 1 "/usr/include/asm/param.h" 1 3 4
# 5 "/usr/include/linux/param.h" 2 3 4
# 25 "/usr/include/sys/param.h" 2 3 4
# 236 "../.././gcc/system.h" 2
# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.0/include/limits.h" 1 3 4
# 242 "../.././gcc/system.h" 2
# 1 "../.././gcc/hwint.h" 1
# 246 "../.././gcc/system.h" 2
# 274 "../.././gcc/system.h" 
# 1 "/usr/include/sys/time.h" 1 3 4
# 27 "/usr/include/sys/time.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 28 "/usr/include/sys/time.h" 2 3 4
# 1 "/usr/include/bits/time.h" 1 3 4
# 30 "/usr/include/sys/time.h" 2 3 4
# 39 "/usr/include/sys/time.h" 3 4
# 61 "/usr/include/sys/time.h" 3 4
struct timezone {int tz_minuteswest; int tz_dsttime; }; 
#line 63 "/usr/include/sys/time.h"
typedef struct timezone *__restrict __timezone_ptr_t; 
#line 74 "/usr/include/sys/time.h"
extern int gettimeofday(struct timeval *__restrict __tv,  __timezone_ptr_t __tz) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 81 "/usr/include/sys/time.h"
extern int settimeofday(__const struct timeval *__tv, __const struct timezone *__tz) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 88 "/usr/include/sys/time.h"
extern int adjtime(__const struct timeval *__delta, struct timeval *__olddelta) __attribute__  (( __nothrow__ )) ; 
#line 105 "/usr/include/sys/time.h"
enum __itimer_which {ITIMER_REAL=0,ITIMER_VIRTUAL=1,ITIMER_PROF=2}; 
#line 115 "/usr/include/sys/time.h"
struct itimerval {struct timeval it_interval; struct timeval it_value; }; 
#line 120 "/usr/include/sys/time.h"
typedef enum __itimer_which __itimer_which_t; 
#line 128 "/usr/include/sys/time.h"
extern int getitimer( __itimer_which_t __which, struct itimerval *__value) __attribute__  (( __nothrow__ )) ; 
#line 135 "/usr/include/sys/time.h"
extern int setitimer( __itimer_which_t __which, __const struct itimerval *__restrict __new, struct itimerval *__restrict __old) __attribute__  (( __nothrow__ )) ; 
#line 141 "/usr/include/sys/time.h"
extern int utimes(__const char *__file, __const struct timeval __tvp[2]) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 146 "/usr/include/sys/time.h"
extern int lutimes(__const char *__file, __const struct timeval __tvp[2]) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 149 "/usr/include/sys/time.h"
extern int futimes(int __fd, __const struct timeval __tvp[2]) __attribute__  (( __nothrow__ )) ; 
#line 157 "/usr/include/sys/time.h"
extern int futimesat(int __fd, __const char *__file, __const struct timeval __tvp[2]) __attribute__  (( __nothrow__ )) ; 
# 73 "/usr/include/sys/time.h" 3 4
# 191 "/usr/include/sys/time.h" 3 4
# 275 "../.././gcc/system.h" 2
# 1 "/usr/include/time.h" 1 3 4
# 31 "/usr/include/time.h" 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.0/include/stddef.h" 1 3 4
# 40 "/usr/include/time.h" 2 3 4
# 1 "/usr/include/bits/time.h" 1 3 4
# 44 "/usr/include/time.h" 2 3 4
# 153 "/usr/include/time.h" 3 4
struct tm {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; int tm_year; int tm_wday; int tm_yday; int tm_isdst; long int tm_gmtoff; __const char *tm_zone; }; 
#line 166 "/usr/include/time.h"
struct itimerspec {struct timespec it_interval; struct timespec it_value; }; 
#line 169 "/usr/include/time.h"
struct sigevent ; 
#line 184 "/usr/include/time.h"
extern  clock_t clock(void ) __attribute__  (( __nothrow__ )) ; 
#line 187 "/usr/include/time.h"
extern  time_t time( time_t *__timer) __attribute__  (( __nothrow__ )) ; 
#line 191 "/usr/include/time.h"
extern double difftime( time_t __time1,  time_t __time0) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 194 "/usr/include/time.h"
extern  time_t mktime(struct tm *__tp) __attribute__  (( __nothrow__ )) ; 
#line 202 "/usr/include/time.h"
extern  size_t strftime(char *__restrict __s,  size_t __maxsize, __const char *__restrict __format, __const struct tm *__restrict __tp) __attribute__  (( __nothrow__ )) ; 
#line 210 "/usr/include/time.h"
extern char *strptime(__const char *__restrict __s, __const char *__restrict __fmt, struct tm *__tp) __attribute__  (( __nothrow__ )) ; 
#line 221 "/usr/include/time.h"
extern  size_t strftime_l(char *__restrict __s,  size_t __maxsize, __const char *__restrict __format, __const struct tm *__restrict __tp,  __locale_t __loc) __attribute__  (( __nothrow__ )) ; 
#line 225 "/usr/include/time.h"
extern char *strptime_l(__const char *__restrict __s, __const char *__restrict __fmt, struct tm *__tp,  __locale_t __loc) __attribute__  (( __nothrow__ )) ; 
#line 232 "/usr/include/time.h"
extern struct tm *gmtime(__const  time_t *__timer) __attribute__  (( __nothrow__ )) ; 
#line 236 "/usr/include/time.h"
extern struct tm *localtime(__const  time_t *__timer) __attribute__  (( __nothrow__ )) ; 
#line 243 "/usr/include/time.h"
extern struct tm *gmtime_r(__const  time_t *__restrict __timer, struct tm *__restrict __tp) __attribute__  (( __nothrow__ )) ; 
#line 248 "/usr/include/time.h"
extern struct tm *localtime_r(__const  time_t *__restrict __timer, struct tm *__restrict __tp) __attribute__  (( __nothrow__ )) ; 
#line 254 "/usr/include/time.h"
extern char *asctime(__const struct tm *__tp) __attribute__  (( __nothrow__ )) ; 
#line 257 "/usr/include/time.h"
extern char *ctime(__const  time_t *__timer) __attribute__  (( __nothrow__ )) ; 
#line 266 "/usr/include/time.h"
extern char *asctime_r(__const struct tm *__restrict __tp, char *__restrict __buf) __attribute__  (( __nothrow__ )) ; 
#line 270 "/usr/include/time.h"
extern char *ctime_r(__const  time_t *__restrict __timer, char *__restrict __buf) __attribute__  (( __nothrow__ )) ; 
#line 275 "/usr/include/time.h"
extern char *__tzname[2]; 
#line 276 "/usr/include/time.h"
extern int __daylight; 
#line 277 "/usr/include/time.h"
extern long int __timezone; 
#line 282 "/usr/include/time.h"
extern char *tzname[2]; 
#line 286 "/usr/include/time.h"
extern void tzset(void ) __attribute__  (( __nothrow__ )) ; 
#line 290 "/usr/include/time.h"
extern int daylight; 
#line 291 "/usr/include/time.h"
extern long int timezone; 
#line 297 "/usr/include/time.h"
extern int stime(__const  time_t *__when) __attribute__  (( __nothrow__ )) ; 
# 181 "/usr/include/time.h" 3 4
# 312 "/usr/include/time.h" 3 4
extern  time_t timegm(struct tm *__tp) __attribute__  (( __nothrow__ )) ; 
#line 315 "/usr/include/time.h"
extern  time_t timelocal(struct tm *__tp) __attribute__  (( __nothrow__ )) ; 
#line 318 "/usr/include/time.h"
extern int dysize(int __year) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 328 "/usr/include/time.h"
extern int nanosleep(__const struct timespec *__requested_time, struct timespec *__remaining); 
#line 332 "/usr/include/time.h"
extern int clock_getres( clockid_t __clock_id, struct timespec *__res) __attribute__  (( __nothrow__ )) ; 
#line 335 "/usr/include/time.h"
extern int clock_gettime( clockid_t __clock_id, struct timespec *__tp) __attribute__  (( __nothrow__ )) ; 
#line 339 "/usr/include/time.h"
extern int clock_settime( clockid_t __clock_id, __const struct timespec *__tp) __attribute__  (( __nothrow__ )) ; 
#line 348 "/usr/include/time.h"
extern int clock_nanosleep( clockid_t __clock_id, int __flags, __const struct timespec *__req, struct timespec *__rem); 
#line 351 "/usr/include/time.h"
extern int clock_getcpuclockid( pid_t __pid,  clockid_t *__clock_id) __attribute__  (( __nothrow__ )) ; 
#line 358 "/usr/include/time.h"
extern int timer_create( clockid_t __clock_id, struct sigevent *__restrict __evp,  timer_t *__restrict __timerid) __attribute__  (( __nothrow__ )) ; 
#line 361 "/usr/include/time.h"
extern int timer_delete( timer_t __timerid) __attribute__  (( __nothrow__ )) ; 
#line 366 "/usr/include/time.h"
extern int timer_settime( timer_t __timerid, int __flags, __const struct itimerspec *__restrict __value, struct itimerspec *__restrict __ovalue) __attribute__  (( __nothrow__ )) ; 
#line 370 "/usr/include/time.h"
extern int timer_gettime( timer_t __timerid, struct itimerspec *__value) __attribute__  (( __nothrow__ )) ; 
#line 373 "/usr/include/time.h"
extern int timer_getoverrun( timer_t __timerid) __attribute__  (( __nothrow__ )) ; 
# 327 "/usr/include/time.h" 3 4
# 389 "/usr/include/time.h" 3 4
extern int getdate_err; 
#line 398 "/usr/include/time.h"
extern struct tm *getdate(__const char *__string); 
# 398 "/usr/include/time.h" 3 4
# 413 "/usr/include/time.h" 3 4
extern int getdate_r(__const char *__restrict __string, struct tm *__restrict __resbufp); 
# 276 "../.././gcc/system.h" 2
# 287 "../.././gcc/system.h" 
# 1 "/usr/include/fcntl.h" 1 3 4
# 30 "/usr/include/fcntl.h" 3 4
# 1 "/usr/include/bits/fcntl.h" 1 3 4
# 150 "/usr/include/bits/fcntl.h" 3 4
struct flock {short int l_type; short int l_whence;  __off_t l_start;  __off_t l_len;  __pid_t l_pid; }; 
#line 160 "/usr/include/bits/fcntl.h"
struct flock64 {short int l_type; short int l_whence;  __off64_t l_start;  __off64_t l_len;  __pid_t l_pid; }; 
#line 187 "/usr/include/bits/fcntl.h"
extern  ssize_t readahead(int __fd,  __off64_t __offset,  size_t __count) __attribute__  (( __nothrow__ )) ; 
# 183 "/usr/include/bits/fcntl.h" 3 4
# 35 "/usr/include/fcntl.h" 2 3 4
# 1 "/usr/include/sys/stat.h" 1 3 4
# 103 "/usr/include/sys/stat.h" 3 4
# 1 "/usr/include/bits/stat.h" 1 3 4
# 36 "/usr/include/bits/stat.h" 3 4
# 70 "/usr/include/bits/stat.h" 3 4
# 90 "/usr/include/bits/stat.h" 3 4
struct stat { __dev_t st_dev; unsigned short int __pad1;  __ino_t st_ino;  __mode_t st_mode;  __nlink_t st_nlink;  __uid_t st_uid;  __gid_t st_gid;  __dev_t st_rdev; unsigned short int __pad2;  __off_t st_size;  __blksize_t st_blksize;  __blkcnt_t st_blocks; struct timespec st_atim; struct timespec st_mtim; struct timespec st_ctim; unsigned long int __unused4; unsigned long int __unused5; }; 
#line 128 "/usr/include/bits/stat.h"
struct stat64 { __dev_t st_dev; unsigned int __pad1;  __ino_t __st_ino;  __mode_t st_mode;  __nlink_t st_nlink;  __uid_t st_uid;  __gid_t st_gid;  __dev_t st_rdev; unsigned int __pad2;  __off64_t st_size;  __blksize_t st_blksize;  __blkcnt64_t st_blocks; struct timespec st_atim; struct timespec st_mtim; struct timespec st_ctim;  __ino64_t st_ino; }; 
# 127 "/usr/include/bits/stat.h" 3 4
# 106 "/usr/include/sys/stat.h" 2 3 4
# 208 "/usr/include/sys/stat.h" 3 4
extern int stat(__const char *__restrict __file, struct stat *__restrict __buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 212 "/usr/include/sys/stat.h"
extern int fstat(int __fd, struct stat *__buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 227 "/usr/include/sys/stat.h"
extern int stat64(__const char *__restrict __file, struct stat64 *__restrict __buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 228 "/usr/include/sys/stat.h"
extern int fstat64(int __fd, struct stat64 *__buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 238 "/usr/include/sys/stat.h"
extern int fstatat(int __fd, __const char *__restrict __file, struct stat *__restrict __buf, int __flag) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 3 )  )) ; 
# 226 "/usr/include/sys/stat.h" 3 4
# 252 "/usr/include/sys/stat.h" 3 4
extern int fstatat64(int __fd, __const char *__restrict __file, struct stat64 *__restrict __buf, int __flag) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 3 )  )) ; 
#line 260 "/usr/include/sys/stat.h"
extern int lstat(__const char *__restrict __file, struct stat *__restrict __buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 274 "/usr/include/sys/stat.h"
extern int lstat64(__const char *__restrict __file, struct stat64 *__restrict __buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 281 "/usr/include/sys/stat.h"
extern int chmod(__const char *__file,  __mode_t __mode) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 288 "/usr/include/sys/stat.h"
extern int lchmod(__const char *__file,  __mode_t __mode) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 293 "/usr/include/sys/stat.h"
extern int fchmod(int __fd,  __mode_t __mode) __attribute__  (( __nothrow__ )) ; 
#line 300 "/usr/include/sys/stat.h"
extern int fchmodat(int __fd, __const char *__file,  __mode_t mode, int __flag) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 307 "/usr/include/sys/stat.h"
extern  __mode_t umask( __mode_t __mask) __attribute__  (( __nothrow__ )) ; 
#line 312 "/usr/include/sys/stat.h"
extern  __mode_t getumask(void ) __attribute__  (( __nothrow__ )) ; 
#line 317 "/usr/include/sys/stat.h"
extern int mkdir(__const char *__path,  __mode_t __mode) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 324 "/usr/include/sys/stat.h"
extern int mkdirat(int __fd, __const char *__path,  __mode_t __mode) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 332 "/usr/include/sys/stat.h"
extern int mknod(__const char *__path,  __mode_t __mode,  __dev_t __dev) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 340 "/usr/include/sys/stat.h"
extern int mknodat(int __fd, __const char *__path,  __mode_t __mode,  __dev_t __dev) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 346 "/usr/include/sys/stat.h"
extern int mkfifo(__const char *__path,  __mode_t __mode) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 353 "/usr/include/sys/stat.h"
extern int mkfifoat(int __fd, __const char *__path,  __mode_t __mode) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
# 272 "/usr/include/sys/stat.h" 3 4
# 381 "/usr/include/sys/stat.h" 3 4
extern int __fxstat(int __ver, int __fildes, struct stat *__stat_buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3 )  )) ; 
#line 383 "/usr/include/sys/stat.h"
extern int __xstat(int __ver, __const char *__filename, struct stat *__stat_buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 3 )  )) ; 
#line 385 "/usr/include/sys/stat.h"
extern int __lxstat(int __ver, __const char *__filename, struct stat *__stat_buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 3 )  )) ; 
#line 388 "/usr/include/sys/stat.h"
extern int __fxstatat(int __ver, int __fildes, __const char *__filename, struct stat *__stat_buf, int __flag) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4 )  )) ; 
#line 414 "/usr/include/sys/stat.h"
extern int __fxstat64(int __ver, int __fildes, struct stat64 *__stat_buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3 )  )) ; 
#line 416 "/usr/include/sys/stat.h"
extern int __xstat64(int __ver, __const char *__filename, struct stat64 *__stat_buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 3 )  )) ; 
#line 418 "/usr/include/sys/stat.h"
extern int __lxstat64(int __ver, __const char *__filename, struct stat64 *__stat_buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 3 )  )) ; 
#line 421 "/usr/include/sys/stat.h"
extern int __fxstatat64(int __ver, int __fildes, __const char *__filename, struct stat64 *__stat_buf, int __flag) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4 )  )) ; 
#line 424 "/usr/include/sys/stat.h"
extern int __xmknod(int __ver, __const char *__path,  __mode_t __mode,  __dev_t *__dev) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 4 )  )) ; 
#line 428 "/usr/include/sys/stat.h"
extern int __xmknodat(int __ver, int __fd, __const char *__path,  __mode_t __mode,  __dev_t *__dev) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 5 )  )) ; 
#line 435 "/usr/include/sys/stat.h"
extern __inline__ int  __attribute__  (( __nothrow__ )) stat(__const char *__path, struct stat *__statbuf)  {

#line 436 "/usr/include/sys/stat.h"
return __xstat(3, __path, __statbuf); }
 
#line 442 "/usr/include/sys/stat.h"
extern __inline__ int  __attribute__  (( __nothrow__ )) lstat(__const char *__path, struct stat *__statbuf)  {

#line 443 "/usr/include/sys/stat.h"
return __lxstat(3, __path, __statbuf); }
 
#line 449 "/usr/include/sys/stat.h"
extern __inline__ int  __attribute__  (( __nothrow__ )) fstat(int __fd, struct stat *__statbuf)  {

#line 450 "/usr/include/sys/stat.h"
return __fxstat(3, __fd, __statbuf); }
 
#line 457 "/usr/include/sys/stat.h"
extern __inline__ int  __attribute__  (( __nothrow__ )) fstatat(int __fd, __const char *__filename, struct stat *__statbuf, int __flag)  {

#line 458 "/usr/include/sys/stat.h"
return __fxstatat(3, __fd, __filename, __statbuf, __flag); }
 
#line 465 "/usr/include/sys/stat.h"
extern __inline__ int  __attribute__  (( __nothrow__ )) mknod(__const char *__path,  __mode_t __mode,  __dev_t __dev)  {

#line 466 "/usr/include/sys/stat.h"
return __xmknod(1, __path, __mode, (&__dev)); }
 
#line 474 "/usr/include/sys/stat.h"
extern __inline__ int  __attribute__  (( __nothrow__ )) mknodat(int __fd, __const char *__path,  __mode_t __mode,  __dev_t __dev)  {

#line 475 "/usr/include/sys/stat.h"
return __xmknodat(1, __fd, __path, __mode, (&__dev)); }
 
#line 484 "/usr/include/sys/stat.h"
extern __inline__ int  __attribute__  (( __nothrow__ )) stat64(__const char *__path, struct stat64 *__statbuf)  {

#line 485 "/usr/include/sys/stat.h"
return __xstat64(3, __path, __statbuf); }
 
#line 491 "/usr/include/sys/stat.h"
extern __inline__ int  __attribute__  (( __nothrow__ )) lstat64(__const char *__path, struct stat64 *__statbuf)  {

#line 492 "/usr/include/sys/stat.h"
return __lxstat64(3, __path, __statbuf); }
 
#line 498 "/usr/include/sys/stat.h"
extern __inline__ int  __attribute__  (( __nothrow__ )) fstat64(int __fd, struct stat64 *__statbuf)  {

#line 499 "/usr/include/sys/stat.h"
return __fxstat64(3, __fd, __statbuf); }
 
#line 506 "/usr/include/sys/stat.h"
extern __inline__ int  __attribute__  (( __nothrow__ )) fstatat64(int __fd, __const char *__filename, struct stat64 *__statbuf, int __flag)  {

#line 507 "/usr/include/sys/stat.h"
return __fxstatat64(3, __fd, __filename, __statbuf, __flag); }
 
# 413 "/usr/include/sys/stat.h" 3 4
# 39 "/usr/include/fcntl.h" 2 3 4
# 76 "/usr/include/fcntl.h" 3 4
extern int fcntl(int __fd, int __cmd, ...); 
#line 85 "/usr/include/fcntl.h"
extern int open(__const char *__file, int __oflag, ...) __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 85 "/usr/include/fcntl.h" 3 4
# 95 "/usr/include/fcntl.h" 3 4
extern int open64(__const char *__file, int __oflag, ...) __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 110 "/usr/include/fcntl.h"
extern int openat(int __fd, __const char *__file, int __oflag, ...) __attribute__  (( __nonnull__ ( 2 )  )) ; 
# 109 "/usr/include/fcntl.h" 3 4
# 121 "/usr/include/fcntl.h" 3 4
extern int openat64(int __fd, __const char *__file, int __oflag, ...) __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 130 "/usr/include/fcntl.h"
extern int creat(__const char *__file,  __mode_t __mode) __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 130 "/usr/include/fcntl.h" 3 4
# 140 "/usr/include/fcntl.h" 3 4
extern int creat64(__const char *__file,  __mode_t __mode) __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 177 "/usr/include/fcntl.h"
extern int posix_fadvise(int __fd,  __off_t __offset,  __off_t __len, int __advise) __attribute__  (( __nothrow__ )) ; 
# 176 "/usr/include/fcntl.h" 3 4
# 189 "/usr/include/fcntl.h" 3 4
extern int posix_fadvise64(int __fd,  __off64_t __offset,  __off64_t __len, int __advise) __attribute__  (( __nothrow__ )) ; 
#line 198 "/usr/include/fcntl.h"
extern int posix_fallocate(int __fd,  __off_t __offset,  __off_t __len); 
# 198 "/usr/include/fcntl.h" 3 4
# 209 "/usr/include/fcntl.h" 3 4
extern int posix_fallocate64(int __fd,  __off64_t __offset,  __off64_t __len); 
# 288 "../.././gcc/system.h" 2
# 325 "../.././gcc/system.h" 
# 1 "/usr/include/sys/wait.h" 1 3 4
# 29 "/usr/include/sys/wait.h" 3 4
# 1 "/usr/include/signal.h" 1 3 4
# 31 "/usr/include/signal.h" 3 4
# 1 "/usr/include/bits/sigset.h" 1 3 4
# 103 "/usr/include/bits/sigset.h" 3 4
extern int __sigismember(__const  __sigset_t *, int ); 
#line 104 "/usr/include/bits/sigset.h"
extern int __sigaddset( __sigset_t *, int ); 
#line 105 "/usr/include/bits/sigset.h"
extern int __sigdelset( __sigset_t *, int ); 
#line 117 "/usr/include/bits/sigset.h"
extern __inline int __sigismember(__const  __sigset_t *__set, int __sig)  {

#line 117 "/usr/include/bits/sigset.h"

#line 117 "/usr/include/bits/sigset.h"
unsigned long int __mask = ((((unsigned long int )1)) << (((__sig) - 1) % (8 * sizeof (unsigned long int ))));
#line 117 "/usr/include/bits/sigset.h"

#line 117 "/usr/include/bits/sigset.h"
unsigned long int __word = (((__sig) - 1) / (8 * sizeof (unsigned long int )));
#line 117 "/usr/include/bits/sigset.h"
return (((__set->__val)[__word] & __mask)?1:0); }
 
#line 118 "/usr/include/bits/sigset.h"
extern __inline int __sigaddset( __sigset_t *__set, int __sig)  {

#line 118 "/usr/include/bits/sigset.h"

#line 118 "/usr/include/bits/sigset.h"
unsigned long int __mask = ((((unsigned long int )1)) << (((__sig) - 1) % (8 * sizeof (unsigned long int ))));
#line 118 "/usr/include/bits/sigset.h"

#line 118 "/usr/include/bits/sigset.h"
unsigned long int __word = (((__sig) - 1) / (8 * sizeof (unsigned long int )));
#line 118 "/usr/include/bits/sigset.h"
return (((__set->__val)[__word] |= __mask) , 0); }
 
#line 119 "/usr/include/bits/sigset.h"
extern __inline int __sigdelset( __sigset_t *__set, int __sig)  {

#line 119 "/usr/include/bits/sigset.h"

#line 119 "/usr/include/bits/sigset.h"
unsigned long int __mask = ((((unsigned long int )1)) << (((__sig) - 1) % (8 * sizeof (unsigned long int ))));
#line 119 "/usr/include/bits/sigset.h"

#line 119 "/usr/include/bits/sigset.h"
unsigned long int __word = (((__sig) - 1) / (8 * sizeof (unsigned long int )));
#line 119 "/usr/include/bits/sigset.h"
return (((__set->__val)[__word] &= (~__mask)) , 0); }
 
# 117 "/usr/include/bits/sigset.h" 3 4
# 41 "/usr/include/signal.h" 2 3 4
typedef  __sig_atomic_t sig_atomic_t; 
# 58 "/usr/include/signal.h" 3 4
# 1 "/usr/include/bits/signum.h" 1 3 4
# 59 "/usr/include/signal.h" 2 3 4
# 75 "/usr/include/signal.h" 3 4
typedef void (*__sighandler_t)(int ); 
#line 81 "/usr/include/signal.h"
extern  __sighandler_t __sysv_signal(int __sig,  __sighandler_t __handler) __attribute__  (( __nothrow__ )) ; 
#line 84 "/usr/include/signal.h"
extern  __sighandler_t sysv_signal(int __sig,  __sighandler_t __handler) __attribute__  (( __nothrow__ )) ; 
#line 93 "/usr/include/signal.h"
extern  __sighandler_t signal(int __sig,  __sighandler_t __handler) __attribute__  (( __nothrow__ )) ; 
#line 110 "/usr/include/signal.h"
extern  __sighandler_t bsd_signal(int __sig,  __sighandler_t __handler) __attribute__  (( __nothrow__ )) ; 
#line 117 "/usr/include/signal.h"
extern int kill( __pid_t __pid, int __sig) __attribute__  (( __nothrow__ )) ; 
#line 124 "/usr/include/signal.h"
extern int killpg( __pid_t __pgrp, int __sig) __attribute__  (( __nothrow__ )) ; 
#line 129 "/usr/include/signal.h"
extern int raise(int __sig) __attribute__  (( __nothrow__ )) ; 
#line 135 "/usr/include/signal.h"
extern  __sighandler_t ssignal(int __sig,  __sighandler_t __handler) __attribute__  (( __nothrow__ )) ; 
#line 136 "/usr/include/signal.h"
extern int gsignal(int __sig) __attribute__  (( __nothrow__ )) ; 
#line 141 "/usr/include/signal.h"
extern void psignal(int __sig, __const char *__s); 
# 104 "/usr/include/signal.h" 3 4
# 153 "/usr/include/signal.h" 3 4
extern int __sigpause(int __sig_or_mask, int __is_sig); 
#line 162 "/usr/include/signal.h"
extern int sigpause(int __sig) __asm__ ("__xpg_sigpause"); 
# 162 "/usr/include/signal.h" 3 4
# 181 "/usr/include/signal.h" 3 4
extern int sigblock(int __mask) __attribute__  (( __nothrow__ ))  __attribute__  (( __deprecated__ )) ; 
#line 184 "/usr/include/signal.h"
extern int sigsetmask(int __mask) __attribute__  (( __nothrow__ ))  __attribute__  (( __deprecated__ )) ; 
#line 187 "/usr/include/signal.h"
extern int siggetmask(void ) __attribute__  (( __nothrow__ ))  __attribute__  (( __deprecated__ )) ; 
#line 196 "/usr/include/signal.h"
typedef  __sighandler_t sighandler_t; 
#line 201 "/usr/include/signal.h"
typedef  __sighandler_t sig_t; 
# 196 "/usr/include/signal.h" 3 4
# 212 "/usr/include/signal.h" 3 4
# 1 "/usr/include/bits/siginfo.h" 1 3 4
# 25 "/usr/include/bits/siginfo.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 37 "/usr/include/bits/siginfo.h" 2 3 4
typedef union sigval {int sival_int; void *sival_ptr; }sigval_t; 
#line 108 "/usr/include/bits/siginfo.h"
typedef struct siginfo {int si_signo; int si_errno; int si_code; union {int _pad[((128 / sizeof (int )) - 3)]; struct { __pid_t si_pid;  __uid_t si_uid; }_kill; struct {int si_tid; int si_overrun;  sigval_t si_sigval; }_timer; struct { __pid_t si_pid;  __uid_t si_uid;  sigval_t si_sigval; }_rt; struct { __pid_t si_pid;  __uid_t si_uid; int si_status;  __clock_t si_utime;  __clock_t si_stime; }_sigchld; struct {void *si_addr; }_sigfault; struct {long int si_band; int si_fd; }_sigpoll; }_sifields; }siginfo_t; 
# 51 "/usr/include/bits/siginfo.h" 3 4
# 149 "/usr/include/bits/siginfo.h" 3 4
enum {SI_ASYNCNL=(-60),SI_TKILL=(-6),SI_SIGIO,SI_ASYNCIO,SI_MESGQ,SI_TIMER,SI_QUEUE,SI_USER,SI_KERNEL=0x80}; 
#line 171 "/usr/include/bits/siginfo.h"
enum {ILL_ILLOPC=1,ILL_ILLOPN,ILL_ILLADR,ILL_ILLTRP,ILL_PRVOPC,ILL_PRVREG,ILL_COPROC,ILL_BADSTK}; 
#line 192 "/usr/include/bits/siginfo.h"
enum {FPE_INTDIV=1,FPE_INTOVF,FPE_FLTDIV,FPE_FLTOVF,FPE_FLTUND,FPE_FLTRES,FPE_FLTINV,FPE_FLTSUB}; 
#line 201 "/usr/include/bits/siginfo.h"
enum {SEGV_MAPERR=1,SEGV_ACCERR}; 
#line 212 "/usr/include/bits/siginfo.h"
enum {BUS_ADRALN=1,BUS_ADRERR,BUS_OBJERR}; 
#line 221 "/usr/include/bits/siginfo.h"
enum {TRAP_BRKPT=1,TRAP_TRACE}; 
#line 238 "/usr/include/bits/siginfo.h"
enum {CLD_EXITED=1,CLD_KILLED,CLD_DUMPED,CLD_TRAPPED,CLD_STOPPED,CLD_CONTINUED}; 
#line 255 "/usr/include/bits/siginfo.h"
enum {POLL_IN=1,POLL_OUT,POLL_MSG,POLL_ERR,POLL_PRI,POLL_HUP}; 
#line 293 "/usr/include/bits/siginfo.h"
typedef struct sigevent { sigval_t sigev_value; int sigev_signo; int sigev_notify; union {int _pad[((64 / sizeof (int )) - 3)];  __pid_t _tid; struct {void (*_function)( sigval_t ); void *_attribute; }_sigev_thread; }_sigev_un; }sigevent_t; 
#line 311 "/usr/include/bits/siginfo.h"
enum {SIGEV_SIGNAL=0,SIGEV_NONE,SIGEV_THREAD,SIGEV_THREAD_ID=4}; 
# 273 "/usr/include/bits/siginfo.h" 3 4
# 216 "/usr/include/signal.h" 2 3 4
extern int sigemptyset( sigset_t *__set) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 219 "/usr/include/signal.h"
extern int sigfillset( sigset_t *__set) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 222 "/usr/include/signal.h"
extern int sigaddset( sigset_t *__set, int __signo) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 225 "/usr/include/signal.h"
extern int sigdelset( sigset_t *__set, int __signo) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 229 "/usr/include/signal.h"
extern int sigismember(__const  sigset_t *__set, int __signo) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 233 "/usr/include/signal.h"
extern int sigisemptyset(__const  sigset_t *__set) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 237 "/usr/include/signal.h"
extern int sigandset( sigset_t *__set, __const  sigset_t *__left, __const  sigset_t *__right) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2, 3 )  )) ; 
#line 241 "/usr/include/signal.h"
extern int sigorset( sigset_t *__set, __const  sigset_t *__left, __const  sigset_t *__right) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2, 3 )  )) ; 
# 1 "/usr/include/bits/sigaction.h" 1 3 4
# 51 "/usr/include/bits/sigaction.h" 3 4
struct sigaction {union { __sighandler_t sa_handler; void (*sa_sigaction)(int ,  siginfo_t *, void *); }__sigaction_handler;  __sigset_t sa_mask; int sa_flags; void (*sa_restorer)(void ); }; 
#line 250 "/usr/include/signal.h"
extern int sigprocmask(int __how, __const  sigset_t *__restrict __set,  sigset_t *__restrict __oset) __attribute__  (( __nothrow__ )) ; 
#line 257 "/usr/include/signal.h"
extern int sigsuspend(__const  sigset_t *__set) __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 261 "/usr/include/signal.h"
extern int sigaction(int __sig, __const struct sigaction *__restrict __act, struct sigaction *__restrict __oact) __attribute__  (( __nothrow__ )) ; 
#line 264 "/usr/include/signal.h"
extern int sigpending( sigset_t *__set) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 272 "/usr/include/signal.h"
extern int sigwait(__const  sigset_t *__restrict __set, int *__restrict __sig) __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 280 "/usr/include/signal.h"
extern int sigwaitinfo(__const  sigset_t *__restrict __set,  siginfo_t *__restrict __info) __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 290 "/usr/include/signal.h"
extern int sigtimedwait(__const  sigset_t *__restrict __set,  siginfo_t *__restrict __info, __const struct timespec *__restrict __timeout) __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 295 "/usr/include/signal.h"
extern int sigqueue( __pid_t __pid, int __sig, __const union sigval __val) __attribute__  (( __nothrow__ )) ; 
# 247 "/usr/include/signal.h" 2 3 4
# 304 "/usr/include/signal.h" 3 4
extern __const char *__const _sys_siglist[65]; 
#line 305 "/usr/include/signal.h"
extern __const char *__const sys_siglist[65]; 
#line 315 "/usr/include/signal.h"
struct sigvec { __sighandler_t sv_handler; int sv_mask; int sv_flags; }; 
#line 329 "/usr/include/signal.h"
extern int sigvec(int __sig, __const struct sigvec *__vec, struct sigvec *__ovec) __attribute__  (( __nothrow__ )) ; 
# 328 "/usr/include/signal.h" 3 4
# 1 "/usr/include/bits/sigcontext.h" 1 3 4
# 28 "/usr/include/bits/sigcontext.h" 3 4
# 1 "/usr/include/asm/sigcontext.h" 1 3 4
# 21 "/usr/include/asm/sigcontext.h" 3 4
struct _fpreg {unsigned short significand[4]; unsigned short exponent; }; 
#line 27 "/usr/include/asm/sigcontext.h"
struct _fpxreg {unsigned short significand[4]; unsigned short exponent; unsigned short padding[3]; }; 
#line 31 "/usr/include/asm/sigcontext.h"
struct _xmmreg {unsigned long element[4]; }; 
#line 53 "/usr/include/asm/sigcontext.h"
struct _fpstate {unsigned long cw; unsigned long sw; unsigned long tag; unsigned long ipoff; unsigned long cssel; unsigned long dataoff; unsigned long datasel; struct _fpreg _st[8]; unsigned short status; unsigned short magic; unsigned long _fxsr_env[6]; unsigned long mxcsr; unsigned long reserved; struct _fpxreg _fxsr_st[8]; struct _xmmreg _xmm[8]; unsigned long padding[56]; }; 
#line 80 "/usr/include/asm/sigcontext.h"
struct sigcontext {unsigned short gs,__gsh; unsigned short fs,__fsh; unsigned short es,__esh; unsigned short ds,__dsh; unsigned long edi; unsigned long esi; unsigned long ebp; unsigned long esp; unsigned long ebx; unsigned long edx; unsigned long ecx; unsigned long eax; unsigned long trapno; unsigned long err; unsigned long eip; unsigned short cs,__csh; unsigned long eflags; unsigned long esp_at_signal; unsigned short ss,__ssh; struct _fpstate *fpstate; unsigned long oldmask; unsigned long cr2; }; 
# 29 "/usr/include/bits/sigcontext.h" 2 3 4
# 336 "/usr/include/signal.h" 2 3 4
extern int sigreturn(struct sigcontext *__scp) __attribute__  (( __nothrow__ )) ; 
#line 346 "/usr/include/signal.h"
extern int siginterrupt(int __sig, int __interrupt) __attribute__  (( __nothrow__ )) ; 
# 346 "/usr/include/signal.h" 3 4
# 1 "/usr/include/bits/sigstack.h" 1 3 4
# 30 "/usr/include/bits/sigstack.h" 3 4
struct sigstack {void *ss_sp; int ss_onstack; }; 
#line 40 "/usr/include/bits/sigstack.h"
enum {SS_ONSTACK=1,SS_DISABLE}; 
#line 55 "/usr/include/bits/sigstack.h"
typedef struct sigaltstack {void *ss_sp; int ss_flags;  size_t ss_size; }stack_t; 
# 50 "/usr/include/bits/sigstack.h" 3 4
# 349 "/usr/include/signal.h" 2 3 4
# 1 "/usr/include/sys/ucontext.h" 1 3 4
# 23 "/usr/include/sys/ucontext.h" 3 4
# 1 "/usr/include/signal.h" 1 3 4
# 24 "/usr/include/sys/ucontext.h" 2 3 4
# 1 "/usr/include/bits/sigcontext.h" 1 3 4
# 31 "/usr/include/sys/ucontext.h" 2 3 4
typedef int greg_t; 
#line 37 "/usr/include/sys/ucontext.h"
typedef  greg_t gregset_t[19]; 
#line 81 "/usr/include/sys/ucontext.h"
enum {REG_GS=0,REG_FS,REG_ES,REG_DS,REG_EDI,REG_ESI,REG_EBP,REG_ESP,REG_EBX,REG_EDX,REG_ECX,REG_EAX,REG_TRAPNO,REG_ERR,REG_EIP,REG_CS,REG_EFL,REG_UESP,REG_SS}; 
#line 89 "/usr/include/sys/ucontext.h"
struct _libc_fpreg {unsigned short int significand[4]; unsigned short int exponent; }; 
#line 102 "/usr/include/sys/ucontext.h"
struct _libc_fpstate {unsigned long int cw; unsigned long int sw; unsigned long int tag; unsigned long int ipoff; unsigned long int cssel; unsigned long int dataoff; unsigned long int datasel; struct _libc_fpreg _st[8]; unsigned long int status; }; 
#line 105 "/usr/include/sys/ucontext.h"
typedef struct _libc_fpstate *fpregset_t; 
#line 116 "/usr/include/sys/ucontext.h"
typedef struct { gregset_t gregs;  fpregset_t fpregs; unsigned long int oldmask; unsigned long int cr2; }mcontext_t; 
#line 127 "/usr/include/sys/ucontext.h"
typedef struct ucontext {unsigned long int uc_flags; struct ucontext *uc_link;  stack_t uc_stack;  mcontext_t uc_mcontext;  __sigset_t uc_sigmask; struct _libc_fpstate __fpregs_mem; }ucontext_t; 
#line 358 "/usr/include/signal.h"
extern int sigstack(struct sigstack *__ss, struct sigstack *__oss) __attribute__  (( __nothrow__ ))  __attribute__  (( __deprecated__ )) ; 
#line 363 "/usr/include/signal.h"
extern int sigaltstack(__const struct sigaltstack *__restrict __ss, struct sigaltstack *__restrict __oss) __attribute__  (( __nothrow__ )) ; 
#line 371 "/usr/include/signal.h"
extern int sighold(int __sig) __attribute__  (( __nothrow__ )) ; 
#line 374 "/usr/include/signal.h"
extern int sigrelse(int __sig) __attribute__  (( __nothrow__ )) ; 
#line 377 "/usr/include/signal.h"
extern int sigignore(int __sig) __attribute__  (( __nothrow__ )) ; 
#line 380 "/usr/include/signal.h"
extern  __sighandler_t sigset(int __sig,  __sighandler_t __disp) __attribute__  (( __nothrow__ )) ; 
# 352 "/usr/include/signal.h" 2 3 4
# 1 "/usr/include/bits/sigthread.h" 1 3 4
# 33 "/usr/include/bits/sigthread.h" 3 4
extern int pthread_sigmask(int __how, __const  __sigset_t *__restrict __newmask,  __sigset_t *__restrict __oldmask) __attribute__  (( __nothrow__ )) ; 
#line 36 "/usr/include/bits/sigthread.h"
extern int pthread_kill( pthread_t __threadid, int __signo) __attribute__  (( __nothrow__ )) ; 
#line 394 "/usr/include/signal.h"
extern int __libc_current_sigrtmin(void ) __attribute__  (( __nothrow__ )) ; 
#line 396 "/usr/include/signal.h"
extern int __libc_current_sigrtmax(void ) __attribute__  (( __nothrow__ )) ; 
# 388 "/usr/include/signal.h" 2 3 4
# 32 "/usr/include/sys/wait.h" 2 3 4
# 1 "/usr/include/sys/resource.h" 1 3 4
# 25 "/usr/include/sys/resource.h" 3 4
# 1 "/usr/include/bits/resource.h" 1 3 4
# 107 "/usr/include/bits/resource.h" 3 4
enum __rlimit_resource {RLIMIT_CPU=0,RLIMIT_FSIZE=1,RLIMIT_DATA=2,RLIMIT_STACK=3,RLIMIT_CORE=4,__RLIMIT_RSS=5,RLIMIT_NOFILE=7,__RLIMIT_OFILE=RLIMIT_NOFILE,RLIMIT_AS=9,__RLIMIT_NPROC=6,__RLIMIT_MEMLOCK=8,__RLIMIT_LOCKS=10,__RLIMIT_SIGPENDING=11,__RLIMIT_MSGQUEUE=12,__RLIMIT_NICE=13,__RLIMIT_RTPRIO=14,__RLIMIT_NLIMITS=15,__RLIM_NLIMITS=__RLIMIT_NLIMITS}; 
#line 127 "/usr/include/bits/resource.h"
typedef  __rlim_t rlim_t; 
#line 132 "/usr/include/bits/resource.h"
typedef  __rlim64_t rlim64_t; 
#line 141 "/usr/include/bits/resource.h"
struct rlimit { rlim_t rlim_cur;  rlim_t rlim_max; }; 
#line 150 "/usr/include/bits/resource.h"
struct rlimit64 { rlim64_t rlim_cur;  rlim64_t rlim_max; }; 
#line 163 "/usr/include/bits/resource.h"
enum __rusage_who {RUSAGE_SELF=0,RUSAGE_CHILDREN=(-1)}; 
# 127 "/usr/include/bits/resource.h" 3 4
# 1 "/usr/include/bits/time.h" 1 3 4
# 209 "/usr/include/bits/resource.h" 2 3 4
struct rusage {struct timeval ru_utime; struct timeval ru_stime; long int ru_maxrss; long int ru_ixrss; long int ru_idrss; long int ru_isrss; long int ru_minflt; long int ru_majflt; long int ru_nswap; long int ru_inblock; long int ru_oublock; long int ru_msgsnd; long int ru_msgrcv; long int ru_nsignals; long int ru_nvcsw; long int ru_nivcsw; }; 
#line 225 "/usr/include/bits/resource.h"
enum __priority_which {PRIO_PROCESS=0,PRIO_PGRP=1,PRIO_USER=2}; 
#line 39 "/usr/include/sys/resource.h"
typedef enum __rlimit_resource __rlimit_resource_t; 
#line 40 "/usr/include/sys/resource.h"
typedef enum __rusage_who __rusage_who_t; 
#line 41 "/usr/include/sys/resource.h"
typedef enum __priority_which __priority_which_t; 
# 26 "/usr/include/sys/resource.h" 2 3 4
# 52 "/usr/include/sys/resource.h" 3 4
extern int getrlimit( __rlimit_resource_t __resource, struct rlimit *__rlimits) __attribute__  (( __nothrow__ )) ; 
#line 63 "/usr/include/sys/resource.h"
extern int getrlimit64( __rlimit_resource_t __resource, struct rlimit64 *__rlimits) __attribute__  (( __nothrow__ )) ; 
#line 71 "/usr/include/sys/resource.h"
extern int setrlimit( __rlimit_resource_t __resource, __const struct rlimit *__rlimits) __attribute__  (( __nothrow__ )) ; 
# 62 "/usr/include/sys/resource.h" 3 4
# 83 "/usr/include/sys/resource.h" 3 4
extern int setrlimit64( __rlimit_resource_t __resource, __const struct rlimit64 *__rlimits) __attribute__  (( __nothrow__ )) ; 
#line 88 "/usr/include/sys/resource.h"
extern int getrusage( __rusage_who_t __who, struct rusage *__usage) __attribute__  (( __nothrow__ )) ; 
#line 94 "/usr/include/sys/resource.h"
extern int getpriority( __priority_which_t __which,  id_t __who) __attribute__  (( __nothrow__ )) ; 
#line 99 "/usr/include/sys/resource.h"
extern int setpriority( __priority_which_t __which,  id_t __who, int __prio) __attribute__  (( __nothrow__ )) ; 
# 33 "/usr/include/sys/wait.h" 2 3 4
# 107 "/usr/include/sys/wait.h" 3 4
typedef enum {P_ALL,P_PID,P_PGID}idtype_t; 
#line 116 "/usr/include/sys/wait.h"
extern  __pid_t wait( __WAIT_STATUS __stat_loc); 
# 116 "/usr/include/sys/wait.h" 3 4
# 139 "/usr/include/sys/wait.h" 3 4
extern  __pid_t waitpid( __pid_t __pid, int *__stat_loc, int __options); 
# 1 "/usr/include/bits/siginfo.h" 1 3 4
# 25 "/usr/include/bits/siginfo.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 26 "/usr/include/bits/siginfo.h" 2 3 4
# 144 "/usr/include/sys/wait.h" 2 3 4
# 156 "/usr/include/sys/wait.h" 3 4
extern int waitid( idtype_t __idtype,  __id_t __id,  siginfo_t *__infop, int __options); 
#line 162 "/usr/include/sys/wait.h"
struct rusage ; 
#line 170 "/usr/include/sys/wait.h"
extern  __pid_t wait3( __WAIT_STATUS __stat_loc, int __options, struct rusage *__usage) __attribute__  (( __nothrow__ )) ; 
#line 176 "/usr/include/sys/wait.h"
struct rusage ; 
#line 180 "/usr/include/sys/wait.h"
extern  __pid_t wait4( __pid_t __pid,  __WAIT_STATUS __stat_loc, int __options, struct rusage *__usage) __attribute__  (( __nothrow__ )) ; 
# 326 "../.././gcc/system.h" 2
# 376 "../.././gcc/system.h" 
extern int getopt(int , char *const *, const char *); 
# 396 "../.././gcc/system.h" 
# 1 "/usr/include/malloc.h" 1 3 4
# 24 "/usr/include/malloc.h" 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.0/include/stddef.h" 1 3 4
# 25 "/usr/include/malloc.h" 2 3 4
# 49 "/usr/include/malloc.h" 3 4
extern void *malloc( size_t __size) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ )) ; 
#line 53 "/usr/include/malloc.h"
extern void *calloc( size_t __nmemb,  size_t __size) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ )) ; 
#line 58 "/usr/include/malloc.h"
extern void *realloc(void *__ptr,  size_t __size) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 61 "/usr/include/malloc.h"
extern void free(void *__ptr) __attribute__  (( __nothrow__ )) ; 
#line 64 "/usr/include/malloc.h"
extern void cfree(void *__ptr) __attribute__  (( __nothrow__ )) ; 
#line 68 "/usr/include/malloc.h"
extern void *memalign( size_t __alignment,  size_t __size) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ )) ; 
#line 72 "/usr/include/malloc.h"
extern void *valloc( size_t __size) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ )) ; 
#line 77 "/usr/include/malloc.h"
extern void *pvalloc( size_t __size) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ )) ; 
#line 81 "/usr/include/malloc.h"
extern void *(*__morecore)( ptrdiff_t __size); 
#line 85 "/usr/include/malloc.h"
extern void *__default_morecore( ptrdiff_t __size) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ )) ; 
#line 100 "/usr/include/malloc.h"
struct mallinfo {int arena; int ordblks; int smblks; int hblks; int hblkhd; int usmblks; int fsmblks; int uordblks; int fordblks; int keepcost; }; 
#line 103 "/usr/include/malloc.h"
extern struct mallinfo mallinfo(void ) __attribute__  (( __nothrow__ )) ; 
#line 128 "/usr/include/malloc.h"
extern int mallopt(int __param, int __val) __attribute__  (( __nothrow__ )) ; 
#line 132 "/usr/include/malloc.h"
extern int malloc_trim( size_t __pad) __attribute__  (( __nothrow__ )) ; 
#line 136 "/usr/include/malloc.h"
extern  size_t malloc_usable_size(void *__ptr) __attribute__  (( __nothrow__ )) ; 
#line 139 "/usr/include/malloc.h"
extern void malloc_stats(void ) __attribute__  (( __nothrow__ )) ; 
#line 142 "/usr/include/malloc.h"
extern void *malloc_get_state(void ) __attribute__  (( __nothrow__ )) ; 
#line 146 "/usr/include/malloc.h"
extern int malloc_set_state(void *__ptr) __attribute__  (( __nothrow__ )) ; 
#line 151 "/usr/include/malloc.h"
extern void (*__malloc_initialize_hook)(void ); 
#line 153 "/usr/include/malloc.h"
extern void (*__free_hook)(void *__ptr, __const void *); 
#line 155 "/usr/include/malloc.h"
extern void *(*__malloc_hook)( size_t __size, __const void *); 
#line 157 "/usr/include/malloc.h"
extern void *(*__realloc_hook)(void *__ptr,  size_t __size, __const void *); 
#line 159 "/usr/include/malloc.h"
extern void *(*__memalign_hook)( size_t __alignment,  size_t __size, __const void *); 
#line 162 "/usr/include/malloc.h"
extern void (*__after_morecore_hook)(void ); 
#line 165 "/usr/include/malloc.h"
extern void __malloc_check_init(void ) __attribute__  (( __nothrow__ )) ; 
# 128 "/usr/include/malloc.h" 3 4
# 397 "../.././gcc/system.h" 2
# 520 "../.././gcc/system.h" 
# 1 "../.././gcc/../include/filenames.h" 1
# 521 "../.././gcc/system.h" 2
# 531 "../.././gcc/system.h" 
# 1 "../.././gcc/../include/libiberty.h" 1
# 42 "../.././gcc/../include/libiberty.h" 
# 1 "../.././gcc/../include/ansidecl.h" 1
# 43 "../.././gcc/../include/libiberty.h" 2
# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.0/include/stddef.h" 1 3 4
# 46 "../.././gcc/../include/libiberty.h" 2
# 55 "../.././gcc/../include/libiberty.h" 
extern void unlock_stream( FILE *); 
#line 61 "../.././gcc/../include/libiberty.h"
extern void unlock_std_streams(void ); 
#line 67 "../.././gcc/../include/libiberty.h"
extern  FILE *fopen_unlocked(const char *, const char *); 
#line 68 "../.././gcc/../include/libiberty.h"
extern  FILE *fdopen_unlocked(int , const char *); 
#line 69 "../.././gcc/../include/libiberty.h"
extern  FILE *freopen_unlocked(const char *, const char *,  FILE *); 
#line 74 "../.././gcc/../include/libiberty.h"
extern char **buildargv(const char *) __attribute__  (( __malloc__ )) ; 
#line 78 "../.././gcc/../include/libiberty.h"
extern void freeargv(char **); 
#line 83 "../.././gcc/../include/libiberty.h"
extern char **dupargv(char **) __attribute__  (( __malloc__ )) ; 
#line 87 "../.././gcc/../include/libiberty.h"
extern void expandargv(int *, char ***); 
#line 112 "../.././gcc/../include/libiberty.h"
extern const char *lbasename(const char *); 
#line 116 "../.././gcc/../include/libiberty.h"
extern char *lrealpath(const char *); 
#line 122 "../.././gcc/../include/libiberty.h"
extern char *concat(const char *, ...) __attribute__  (( __malloc__ ))  __attribute__  (( __sentinel__ )) ; 
# 112 "../.././gcc/../include/libiberty.h" 
# 131 "../.././gcc/../include/libiberty.h" 
extern char *reconcat(char *, const char *, ...) __attribute__  (( __malloc__ ))  __attribute__  (( __sentinel__ )) ; 
#line 137 "../.././gcc/../include/libiberty.h"
extern unsigned long concat_length(const char *, ...) __attribute__  (( __sentinel__ )) ; 
#line 144 "../.././gcc/../include/libiberty.h"
extern char *concat_copy(char *, const char *, ...) __attribute__  (( __sentinel__ )) ; 
#line 151 "../.././gcc/../include/libiberty.h"
extern char *concat_copy2(const char *, ...) __attribute__  (( __sentinel__ )) ; 
#line 155 "../.././gcc/../include/libiberty.h"
extern char *libiberty_concat_ptr; 
#line 167 "../.././gcc/../include/libiberty.h"
extern int fdmatch(int fd1, int fd2); 
# 167 "../.././gcc/../include/libiberty.h" 
# 179 "../.././gcc/../include/libiberty.h" 
extern char *getpwd(void ); 
#line 192 "../.././gcc/../include/libiberty.h"
extern long get_run_time(void ); 
#line 198 "../.././gcc/../include/libiberty.h"
extern char *make_relative_prefix(const char *, const char *, const char *) __attribute__  (( __malloc__ )) ; 
#line 202 "../.././gcc/../include/libiberty.h"
extern char *choose_temp_base(void ) __attribute__  (( __malloc__ )) ; 
#line 206 "../.././gcc/../include/libiberty.h"
extern char *make_temp_file(const char *) __attribute__  (( __malloc__ )) ; 
#line 210 "../.././gcc/../include/libiberty.h"
extern int unlink_if_ordinary(const char *); 
#line 214 "../.././gcc/../include/libiberty.h"
extern const char *spaces(int count); 
#line 219 "../.././gcc/../include/libiberty.h"
extern int errno_max(void ); 
#line 224 "../.././gcc/../include/libiberty.h"
extern const char *strerrno(int ); 
#line 228 "../.././gcc/../include/libiberty.h"
extern int strtoerrno(const char *); 
#line 232 "../.././gcc/../include/libiberty.h"
extern char *xstrerror(int ); 
#line 237 "../.././gcc/../include/libiberty.h"
extern int signo_max(void ); 
# 192 "../.././gcc/../include/libiberty.h" 
# 249 "../.././gcc/../include/libiberty.h" 
extern const char *strsigno(int ); 
#line 253 "../.././gcc/../include/libiberty.h"
extern int strtosigno(const char *); 
#line 257 "../.././gcc/../include/libiberty.h"
extern int xatexit(void (*fn)(void )); 
#line 261 "../.././gcc/../include/libiberty.h"
extern void xexit(int status) __attribute__  (( __noreturn__ )) ; 
#line 265 "../.././gcc/../include/libiberty.h"
extern void xmalloc_set_program_name(const char *); 
#line 268 "../.././gcc/../include/libiberty.h"
extern void xmalloc_failed( size_t ) __attribute__  (( __noreturn__ )) ; 
#line 274 "../.././gcc/../include/libiberty.h"
extern void *xmalloc( size_t ) __attribute__  (( __malloc__ )) ; 
#line 280 "../.././gcc/../include/libiberty.h"
extern void *xrealloc(void *,  size_t ); 
#line 285 "../.././gcc/../include/libiberty.h"
extern void *xcalloc( size_t ,  size_t ) __attribute__  (( __malloc__ )) ; 
#line 289 "../.././gcc/../include/libiberty.h"
extern char *xstrdup(const char *) __attribute__  (( __malloc__ )) ; 
#line 293 "../.././gcc/../include/libiberty.h"
extern char *xstrndup(const char *,  size_t ) __attribute__  (( __malloc__ )) ; 
#line 297 "../.././gcc/../include/libiberty.h"
extern void *xmemdup(const void *,  size_t ,  size_t ) __attribute__  (( __malloc__ )) ; 
#line 300 "../.././gcc/../include/libiberty.h"
extern double physmem_total(void ); 
#line 301 "../.././gcc/../include/libiberty.h"
extern double physmem_available(void ); 
#line 338 "../.././gcc/../include/libiberty.h"
extern const unsigned char _hex_value[256]; 
#line 339 "../.././gcc/../include/libiberty.h"
extern void hex_init(void ); 
# 338 "../.././gcc/../include/libiberty.h" 
# 365 "../.././gcc/../include/libiberty.h" 
extern struct pex_obj *pex_init(int flags, const char *pname, const char *tempbase); 
#line 449 "../.././gcc/../include/libiberty.h"
extern const char *pex_run(struct pex_obj *obj, int flags, const char *executable, char *const *argv, const char *outname, const char *errname, int *err); 
#line 457 "../.././gcc/../include/libiberty.h"
extern  FILE *pex_read_output(struct pex_obj *, int binary); 
#line 463 "../.././gcc/../include/libiberty.h"
extern int pex_get_status(struct pex_obj *, int count, int *vector); 
#line 476 "../.././gcc/../include/libiberty.h"
struct pex_time {unsigned long user_seconds; unsigned long user_microseconds; unsigned long system_seconds; unsigned long system_microseconds; }; 
#line 479 "../.././gcc/../include/libiberty.h"
extern int pex_get_times(struct pex_obj *, int count, struct pex_time *vector); 
#line 483 "../.././gcc/../include/libiberty.h"
extern void pex_free(struct pex_obj *); 
# 446 "../.././gcc/../include/libiberty.h" 
# 499 "../.././gcc/../include/libiberty.h" 
extern const char *pex_one(int flags, const char *executable, char *const *argv, const char *pname, const char *outname, const char *errname, int *status, int *err); 
#line 516 "../.././gcc/../include/libiberty.h"
extern int pexecute(const char *, char *const *, const char *, const char *, char **, char **, int ); 
#line 520 "../.././gcc/../include/libiberty.h"
extern int pwait(int , int *, int ); 
# 515 "../.././gcc/../include/libiberty.h" 
# 559 "../.././gcc/../include/libiberty.h" 
extern void *C_alloca( size_t ) __attribute__  (( __malloc__ )) ; 
# 532 "../.././gcc/system.h" 2
# 569 "../.././gcc/system.h" 
extern void fancy_abort(const char *, int , const char *) __attribute__  (( __noreturn__ )) ; 
# 647 "../.././gcc/system.h" 
# 688 "../.././gcc/system.h" 
# 734 "../.././gcc/system.h" 
# 750 "../.././gcc/system.h" 
# 760 "../.././gcc/system.h" 
# 26 "../.././gcc/tree-mudflap.c" 2
# 1 "../.././gcc/coretypes.h" 1
# 40 "../.././gcc/coretypes.h" 
struct rtx_def ; 
#line 41 "../.././gcc/coretypes.h"
typedef struct rtx_def *rtx; 
#line 42 "../.././gcc/coretypes.h"
struct rtvec_def ; 
#line 43 "../.././gcc/coretypes.h"
typedef struct rtvec_def *rtvec; 
#line 44 "../.././gcc/coretypes.h"
union tree_node ; 
#line 45 "../.././gcc/coretypes.h"
typedef union tree_node *tree; 
#line 51 "../.././gcc/coretypes.h"
struct cpp_reader ; 
#line 62 "../.././gcc/coretypes.h"
enum tls_model {TLS_MODEL_NONE,TLS_MODEL_GLOBAL_DYNAMIC,TLS_MODEL_LOCAL_DYNAMIC,TLS_MODEL_INITIAL_EXEC,TLS_MODEL_LOCAL_EXEC}; 
# 27 "../.././gcc/tree-mudflap.c" 2
# 1 "./tm.h" 1
# 6 "./options.h" 1
extern int target_flags; 
#line 8 "./options.h"
extern int warn_abi; 
#line 9 "./options.h"
extern int warn_aggregate_return; 
#line 10 "./options.h"
extern int warn_assign_intercept; 
#line 11 "./options.h"
extern int warn_attributes; 
#line 12 "./options.h"
extern int warn_bad_function_cast; 
#line 13 "./options.h"
extern int warn_cxx_compat; 
#line 14 "./options.h"
extern int warn_cast_align; 
#line 15 "./options.h"
extern int warn_cast_qual; 
#line 16 "./options.h"
extern int warn_char_subscripts; 
#line 17 "./options.h"
extern int warn_conversion; 
#line 18 "./options.h"
extern int warn_ctor_dtor_privacy; 
#line 19 "./options.h"
extern int warn_declaration_after_statement; 
#line 20 "./options.h"
extern int warn_deprecated; 
#line 21 "./options.h"
extern int warn_deprecated; 
#line 22 "./options.h"
extern int warn_deprecated_decl; 
#line 23 "./options.h"
extern int warn_disabled_optimization; 
#line 24 "./options.h"
extern int warn_div_by_zero; 
#line 25 "./options.h"
extern int warn_ecpp; 
#line 26 "./options.h"
extern int warnings_are_errors; 
#line 27 "./options.h"
extern int flag_extraneous_semicolon; 
#line 28 "./options.h"
extern int flag_fatal_errors; 
#line 29 "./options.h"
extern int warn_float_equal; 
#line 30 "./options.h"
extern int warn_format_extra_args; 
#line 31 "./options.h"
extern int warn_format_nonliteral; 
#line 32 "./options.h"
extern int warn_format_security; 
#line 33 "./options.h"
extern int warn_format_y2k; 
#line 34 "./options.h"
extern int warn_format_zero_length; 
#line 35 "./options.h"
extern int mesg_implicit_function_declaration; 
#line 36 "./options.h"
extern int warn_implicit_int; 
#line 37 "./options.h"
extern int warn_init_self; 
#line 38 "./options.h"
extern int warn_inline; 
#line 39 "./options.h"
extern int warn_int_to_pointer_cast; 
#line 40 "./options.h"
extern int warn_invalid_offsetof; 
#line 41 "./options.h"
extern int warn_long_long; 
#line 42 "./options.h"
extern int warn_missing_braces; 
#line 43 "./options.h"
extern int warn_missing_declarations; 
#line 44 "./options.h"
extern int warn_missing_field_initializers; 
#line 45 "./options.h"
extern int warn_missing_format_attribute; 
#line 46 "./options.h"
extern int warn_missing_noreturn; 
#line 47 "./options.h"
extern int warn_missing_prototypes; 
#line 48 "./options.h"
extern int warn_nested_externs; 
#line 49 "./options.h"
extern int warn_nontemplate_friend; 
#line 50 "./options.h"
extern int warn_nonvdtor; 
#line 51 "./options.h"
extern int warn_nonnull; 
#line 52 "./options.h"
extern int warn_old_style_cast; 
#line 53 "./options.h"
extern int warn_old_style_definition; 
#line 54 "./options.h"
extern int flag_newer; 
#line 55 "./options.h"
extern int warn_overloaded_virtual; 
#line 56 "./options.h"
extern int warn_packed; 
#line 57 "./options.h"
extern int warn_padded; 
#line 58 "./options.h"
extern int warn_parentheses; 
#line 59 "./options.h"
extern int warn_pmf2ptr; 
#line 60 "./options.h"
extern int warn_pointer_arith; 
#line 61 "./options.h"
extern int warn_pointer_sign; 
#line 62 "./options.h"
extern int warn_pointer_to_int_cast; 
#line 63 "./options.h"
extern int warn_pragmas; 
#line 64 "./options.h"
extern int warn_protocol; 
#line 65 "./options.h"
extern int warn_redundant_decls; 
#line 66 "./options.h"
extern int flag_redundant; 
#line 67 "./options.h"
extern int warn_reorder; 
#line 68 "./options.h"
extern int warn_return_type; 
#line 69 "./options.h"
extern int warn_selector; 
#line 70 "./options.h"
extern int warn_sequence_point; 
#line 71 "./options.h"
extern int warn_shadow; 
#line 72 "./options.h"
extern int warn_sign_compare; 
#line 73 "./options.h"
extern int warn_sign_promo; 
#line 74 "./options.h"
extern int warn_stack_protect; 
#line 75 "./options.h"
extern int warn_strict_prototypes; 
#line 76 "./options.h"
extern int warn_strict_selector_match; 
#line 77 "./options.h"
extern int warn_switch; 
#line 78 "./options.h"
extern int warn_switch_default; 
#line 79 "./options.h"
extern int warn_switch_enum; 
#line 80 "./options.h"
extern int warn_synth; 
#line 81 "./options.h"
extern int warn_system_headers; 
#line 82 "./options.h"
extern int warn_traditional; 
#line 83 "./options.h"
extern int warn_undeclared_selector; 
#line 84 "./options.h"
extern int warn_uninitialized; 
#line 85 "./options.h"
extern int warn_notreached; 
#line 86 "./options.h"
extern int warn_unsafe_loop_optimizations; 
#line 87 "./options.h"
extern int warn_unused_function; 
#line 88 "./options.h"
extern int warn_unused_label; 
#line 89 "./options.h"
extern int warn_unused_parameter; 
#line 90 "./options.h"
extern int warn_unused_value; 
#line 91 "./options.h"
extern int warn_unused_variable; 
#line 92 "./options.h"
extern int warn_register_var; 
#line 93 "./options.h"
extern int flag_pic; 
#line 94 "./options.h"
extern int flag_pie; 
#line 95 "./options.h"
extern int flag_abi_version; 
#line 96 "./options.h"
extern int align_functions; 
#line 97 "./options.h"
extern int align_jumps; 
#line 98 "./options.h"
extern int align_labels; 
#line 99 "./options.h"
extern int align_loops; 
#line 100 "./options.h"
extern int flag_argument_noalias; 
#line 101 "./options.h"
extern int flag_argument_noalias; 
#line 102 "./options.h"
extern int flag_argument_noalias; 
#line 103 "./options.h"
extern int flag_assert; 
#line 104 "./options.h"
extern int flag_asynchronous_unwind_tables; 
#line 105 "./options.h"
extern int flag_bootstrap_classes; 
#line 106 "./options.h"
extern int flag_bounds_check; 
#line 107 "./options.h"
extern int flag_branch_on_count_reg; 
#line 108 "./options.h"
extern int flag_branch_probabilities; 
#line 109 "./options.h"
extern int flag_branch_target_load_optimize; 
#line 110 "./options.h"
extern int flag_branch_target_load_optimize2; 
#line 111 "./options.h"
extern int flag_btr_bb_exclusive; 
#line 112 "./options.h"
extern int flag_caller_saves; 
#line 113 "./options.h"
extern int flag_check_references; 
#line 114 "./options.h"
extern int flag_no_common; 
#line 115 "./options.h"
extern int flag_cprop_registers; 
#line 116 "./options.h"
extern int flag_crossjumping; 
#line 117 "./options.h"
extern int flag_cse_follow_jumps; 
#line 118 "./options.h"
extern int flag_cse_skip_blocks; 
#line 119 "./options.h"
extern int flag_cx_limited_range; 
#line 120 "./options.h"
extern int flag_data_sections; 
#line 121 "./options.h"
extern int flag_defer_pop; 
#line 122 "./options.h"
extern int flag_delayed_branch; 
#line 123 "./options.h"
extern int flag_delete_null_pointer_checks; 
#line 124 "./options.h"
extern int flag_dump_unnumbered; 
#line 125 "./options.h"
extern int flag_early_inlining; 
#line 126 "./options.h"
extern int flag_eliminate_dwarf2_dups; 
#line 127 "./options.h"
extern int flag_debug_only_used_symbols; 
#line 128 "./options.h"
extern int flag_eliminate_unused_debug_types; 
#line 129 "./options.h"
extern int flag_emit_class_files; 
#line 130 "./options.h"
extern int flag_emit_class_files; 
#line 131 "./options.h"
extern int flag_exceptions; 
#line 132 "./options.h"
extern int flag_expensive_optimizations; 
#line 133 "./options.h"
extern int flag_filelist_file; 
#line 134 "./options.h"
extern int flag_finite_math_only; 
#line 135 "./options.h"
extern int flag_float_store; 
#line 136 "./options.h"
extern int flag_force_addr; 
#line 137 "./options.h"
extern int flag_force_classes_archive_check; 
#line 138 "./options.h"
extern int flag_force_mem; 
#line 139 "./options.h"
extern int flag_friend_injection; 
#line 140 "./options.h"
extern int flag_no_function_cse; 
#line 141 "./options.h"
extern int flag_function_sections; 
#line 142 "./options.h"
extern int flag_gcse; 
#line 143 "./options.h"
extern int flag_gcse_after_reload; 
#line 144 "./options.h"
extern int flag_gcse_las; 
#line 145 "./options.h"
extern int flag_gcse_lm; 
#line 146 "./options.h"
extern int flag_gcse_sm; 
#line 147 "./options.h"
extern int flag_guess_branch_prob; 
#line 148 "./options.h"
extern int flag_hash_synchronization; 
#line 149 "./options.h"
extern int flag_no_ident; 
#line 150 "./options.h"
extern int flag_if_conversion; 
#line 151 "./options.h"
extern int flag_if_conversion2; 
#line 152 "./options.h"
extern int flag_indirect_dispatch; 
#line 153 "./options.h"
extern int flag_inhibit_size_directive; 
#line 154 "./options.h"
extern int flag_no_inline; 
#line 155 "./options.h"
extern int flag_inline_functions; 
#line 156 "./options.h"
extern int flag_inline_functions_called_once; 
#line 157 "./options.h"
extern int flag_instrument_function_entry_exit; 
#line 158 "./options.h"
extern int flag_ipa_cp; 
#line 159 "./options.h"
extern int flag_ipa_pure_const; 
#line 160 "./options.h"
extern int flag_ipa_reference; 
#line 161 "./options.h"
extern int flag_ipa_type_escape; 
#line 162 "./options.h"
extern int flag_ivopts; 
#line 163 "./options.h"
extern int flag_jni; 
#line 164 "./options.h"
extern int flag_jump_tables; 
#line 165 "./options.h"
extern int flag_keep_inline_functions; 
#line 166 "./options.h"
extern int flag_keep_static_consts; 
#line 167 "./options.h"
extern int flag_leading_underscore; 
#line 168 "./options.h"
extern int flag_loop_optimize; 
#line 169 "./options.h"
extern int flag_loop_optimize2; 
#line 170 "./options.h"
extern int flag_errno_math; 
#line 171 "./options.h"
extern int mem_report; 
#line 172 "./options.h"
extern int flag_merge_constants; 
#line 173 "./options.h"
extern int flag_merge_constants; 
#line 174 "./options.h"
extern int flag_modulo_sched; 
#line 175 "./options.h"
extern int flag_move_loop_invariants; 
#line 176 "./options.h"
extern int flag_mudflap; 
#line 177 "./options.h"
extern int flag_mudflap_ignore_reads; 
#line 178 "./options.h"
extern int flag_mudflap_threads; 
#line 179 "./options.h"
extern int flag_non_call_exceptions; 
#line 180 "./options.h"
extern int flag_objc_call_cxx_cdtors; 
#line 181 "./options.h"
extern int flag_objc_direct_dispatch; 
#line 182 "./options.h"
extern int flag_objc_exceptions; 
#line 183 "./options.h"
extern int flag_objc_gc; 
#line 184 "./options.h"
extern int flag_objc_sjlj_exceptions; 
#line 185 "./options.h"
extern int flag_omit_frame_pointer; 
#line 186 "./options.h"
extern int flag_regmove; 
#line 187 "./options.h"
extern int flag_optimize_sibling_calls; 
#line 188 "./options.h"
extern int flag_optimize_sci; 
#line 189 "./options.h"
extern int flag_pack_struct; 
#line 190 "./options.h"
extern int flag_pcc_struct_return; 
#line 191 "./options.h"
extern int flag_peel_loops; 
#line 192 "./options.h"
extern int flag_no_peephole; 
#line 193 "./options.h"
extern int flag_peephole2; 
#line 194 "./options.h"
extern int flag_pic; 
#line 195 "./options.h"
extern int flag_pie; 
#line 196 "./options.h"
extern int flag_prefetch_loop_arrays; 
#line 197 "./options.h"
extern int profile_flag; 
#line 198 "./options.h"
extern int profile_arc_flag; 
#line 199 "./options.h"
extern int flag_profile_values; 
#line 200 "./options.h"
extern int flag_pcc_struct_return; 
#line 201 "./options.h"
extern int flag_regmove; 
#line 202 "./options.h"
extern int flag_rename_registers; 
#line 203 "./options.h"
extern int flag_reorder_blocks; 
#line 204 "./options.h"
extern int flag_reorder_blocks_and_partition; 
#line 205 "./options.h"
extern int flag_reorder_functions; 
#line 206 "./options.h"
extern int flag_rerun_cse_after_loop; 
#line 207 "./options.h"
extern int flag_rerun_loop_opt; 
#line 208 "./options.h"
extern int flag_resched_modulo_sched; 
#line 209 "./options.h"
extern int flag_rounding_math; 
#line 210 "./options.h"
extern int flag_schedule_interblock; 
#line 211 "./options.h"
extern int flag_schedule_speculative; 
#line 212 "./options.h"
extern int flag_schedule_speculative_load; 
#line 213 "./options.h"
extern int flag_schedule_speculative_load_dangerous; 
#line 214 "./options.h"
extern int flag_sched_stalled_insns; 
#line 215 "./options.h"
extern int flag_sched_stalled_insns_dep; 
#line 216 "./options.h"
extern int flag_sched2_use_superblocks; 
#line 217 "./options.h"
extern int flag_sched2_use_traces; 
#line 218 "./options.h"
extern int flag_schedule_insns; 
#line 219 "./options.h"
extern int flag_schedule_insns_after_reload; 
#line 220 "./options.h"
extern int flag_shared_data; 
#line 221 "./options.h"
extern int flag_show_column; 
#line 222 "./options.h"
extern int flag_signaling_nans; 
#line 223 "./options.h"
extern int flag_single_precision_constant; 
#line 224 "./options.h"
extern int flag_split_ivs_in_unroller; 
#line 225 "./options.h"
extern int flag_stack_check; 
#line 226 "./options.h"
extern int flag_stack_protect; 
#line 227 "./options.h"
extern int flag_stack_protect; 
#line 228 "./options.h"
extern int flag_store_check; 
#line 229 "./options.h"
extern int flag_strength_reduce; 
#line 230 "./options.h"
extern int flag_strict_aliasing; 
#line 231 "./options.h"
extern int flag_syntax_only; 
#line 232 "./options.h"
extern int flag_test_coverage; 
#line 233 "./options.h"
extern int flag_thread_jumps; 
#line 234 "./options.h"
extern int time_report; 
#line 235 "./options.h"
extern int flag_tracer; 
#line 236 "./options.h"
extern int flag_trapping_math; 
#line 237 "./options.h"
extern int flag_trapv; 
#line 238 "./options.h"
extern int flag_tree_ccp; 
#line 239 "./options.h"
extern int flag_tree_ch; 
#line 240 "./options.h"
extern int flag_tree_combine_temps; 
#line 241 "./options.h"
extern int flag_tree_copy_prop; 
#line 242 "./options.h"
extern int flag_tree_copyrename; 
#line 243 "./options.h"
extern int flag_tree_dce; 
#line 244 "./options.h"
extern int flag_tree_dom; 
#line 245 "./options.h"
extern int flag_tree_dse; 
#line 246 "./options.h"
extern int flag_tree_fre; 
#line 247 "./options.h"
extern int flag_tree_loop_im; 
#line 248 "./options.h"
extern int flag_tree_loop_ivcanon; 
#line 249 "./options.h"
extern int flag_tree_loop_linear; 
#line 250 "./options.h"
extern int flag_tree_loop_optimize; 
#line 251 "./options.h"
extern int flag_tree_live_range_split; 
#line 252 "./options.h"
extern int flag_tree_pre; 
#line 253 "./options.h"
extern int flag_tree_salias; 
#line 254 "./options.h"
extern int flag_tree_sink; 
#line 255 "./options.h"
extern int flag_tree_sra; 
#line 256 "./options.h"
extern int flag_tree_store_ccp; 
#line 257 "./options.h"
extern int flag_tree_store_copy_prop; 
#line 258 "./options.h"
extern int flag_tree_ter; 
#line 259 "./options.h"
extern int flag_tree_vect_loop_version; 
#line 260 "./options.h"
extern int flag_tree_vectorize; 
#line 261 "./options.h"
extern int flag_tree_vrp; 
#line 262 "./options.h"
extern int flag_unit_at_a_time; 
#line 263 "./options.h"
extern int flag_unroll_all_loops; 
#line 264 "./options.h"
extern int flag_unroll_loops; 
#line 265 "./options.h"
extern int flag_unsafe_loop_optimizations; 
#line 266 "./options.h"
extern int flag_unsafe_math_optimizations; 
#line 267 "./options.h"
extern int flag_unswitch_loops; 
#line 268 "./options.h"
extern int flag_unwind_tables; 
#line 269 "./options.h"
extern int flag_use_boehm_gc; 
#line 270 "./options.h"
extern int flag_use_divide_subroutine; 
#line 271 "./options.h"
extern int flag_var_tracking; 
#line 272 "./options.h"
extern int flag_variable_expansion_in_unroller; 
#line 273 "./options.h"
extern int flag_verbose_asm; 
#line 274 "./options.h"
extern int flag_value_profile_transformations; 
#line 275 "./options.h"
extern int flag_web; 
#line 276 "./options.h"
extern int flag_whole_program; 
#line 277 "./options.h"
extern int flag_wrapv; 
#line 278 "./options.h"
extern int flag_zero_initialized_in_bss; 
#line 279 "./options.h"
extern const char *ix86_align_funcs_string; 
#line 280 "./options.h"
extern const char *ix86_align_jumps_string; 
#line 281 "./options.h"
extern const char *ix86_align_loops_string; 
#line 282 "./options.h"
extern const char *ix86_arch_string; 
#line 283 "./options.h"
extern const char *ix86_asm_string; 
#line 284 "./options.h"
extern const char *ix86_branch_cost_string; 
#line 285 "./options.h"
extern const char *ix86_cmodel_string; 
#line 286 "./options.h"
extern int TARGET_DEBUG_ADDR; 
#line 287 "./options.h"
extern int TARGET_DEBUG_ARG; 
#line 288 "./options.h"
extern const char *ix86_fpmath_string; 
#line 289 "./options.h"
extern const char *ix86_section_threshold_string; 
#line 290 "./options.h"
extern const char *ix86_preferred_stack_boundary_string; 
#line 291 "./options.h"
extern const char *ix86_regparm_string; 
#line 292 "./options.h"
extern const char *ix86_tls_dialect_string; 
#line 293 "./options.h"
extern const char *ix86_tune_string; 
#line 294 "./options.h"
extern int profile_flag; 
#line 295 "./options.h"
extern int pedantic; 
#line 296 "./options.h"
extern int quiet_flag; 
#line 297 "./options.h"
extern int version_flag; 
#line 298 "./options.h"
extern int inhibit_warnings; 
#line 962 "./options.h"
enum opt_code {OPT__help,OPT__output_pch_,OPT__param,OPT__target_help,OPT__version,OPT_A,OPT_C,OPT_CC,OPT_D,OPT_E,OPT_F,OPT_G,OPT_H,OPT_I,OPT_J,OPT_M,OPT_MD,OPT_MD_,OPT_MF,OPT_MG,OPT_MM,OPT_MMD,OPT_MMD_,OPT_MP,OPT_MQ,OPT_MT,OPT_O,OPT_Os,OPT_P,OPT_U,OPT_W,OPT_Wabi,OPT_Waggregate_return,OPT_Waliasing,OPT_Wall,OPT_Wampersand,OPT_Wassign_intercept,OPT_Wattributes,OPT_Wbad_function_cast,OPT_Wc___compat,OPT_Wcast_align,OPT_Wcast_qual,OPT_Wchar_subscripts,OPT_Wcomment,OPT_Wcomments,OPT_Wconversion,OPT_Wctor_dtor_privacy,OPT_Wdeclaration_after_statement,OPT_Wdeprecated,OPT_Wdeprecated_declarations,OPT_Wdisabled_optimization,OPT_Wdiv_by_zero,OPT_Weffc__,OPT_Wendif_labels,OPT_Werror,OPT_Werror_implicit_function_declaration,OPT_Wextra,OPT_Wextraneous_semicolon,OPT_Wfatal_errors,OPT_Wfloat_equal,OPT_Wformat,OPT_Wformat_extra_args,OPT_Wformat_nonliteral,OPT_Wformat_security,OPT_Wformat_y2k,OPT_Wformat_zero_length,OPT_Wformat_,OPT_Wimplicit,OPT_Wimplicit_function_declaration,OPT_Wimplicit_int,OPT_Wimplicit_interface,OPT_Wimport,OPT_Winit_self,OPT_Winline,OPT_Wint_to_pointer_cast,OPT_Winvalid_offsetof,OPT_Winvalid_pch,OPT_Wlarger_than_,OPT_Wline_truncation,OPT_Wlong_long,OPT_Wmain,OPT_Wmissing_braces,OPT_Wmissing_declarations,OPT_Wmissing_field_initializers,OPT_Wmissing_format_attribute,OPT_Wmissing_include_dirs,OPT_Wmissing_noreturn,OPT_Wmissing_prototypes,OPT_Wmultichar,OPT_Wnested_externs,OPT_Wnon_template_friend,OPT_Wnon_virtual_dtor,OPT_Wnonnull,OPT_Wnonstd_intrinsics,OPT_Wnormalized_,OPT_Wold_style_cast,OPT_Wold_style_definition,OPT_Wout_of_date,OPT_Woverloaded_virtual,OPT_Wpacked,OPT_Wpadded,OPT_Wparentheses,OPT_Wpmf_conversions,OPT_Wpointer_arith,OPT_Wpointer_sign,OPT_Wpointer_to_int_cast,OPT_Wpragmas,OPT_Wprotocol,OPT_Wredundant_decls,OPT_Wredundant_modifiers,OPT_Wreorder,OPT_Wreturn_type,OPT_Wselector,OPT_Wsequence_point,OPT_Wshadow,OPT_Wsign_compare,OPT_Wsign_promo,OPT_Wstack_protector,OPT_Wstrict_aliasing,OPT_Wstrict_aliasing_,OPT_Wstrict_null_sentinel,OPT_Wstrict_prototypes,OPT_Wstrict_selector_match,OPT_Wsurprising,OPT_Wswitch,OPT_Wswitch_default,OPT_Wswitch_enum,OPT_Wsynth,OPT_Wsystem_headers,OPT_Wtraditional,OPT_Wtrigraphs,OPT_Wundeclared_selector,OPT_Wundef,OPT_Wunderflow,OPT_Wuninitialized,OPT_Wunknown_pragmas,OPT_Wunreachable_code,OPT_Wunsafe_loop_optimizations,OPT_Wunused,OPT_Wunused_function,OPT_Wunused_label,OPT_Wunused_labels,OPT_Wunused_macros,OPT_Wunused_parameter,OPT_Wunused_value,OPT_Wunused_variable,OPT_Wvariadic_macros,OPT_Wvolatile_register_var,OPT_Wwrite_strings,OPT_ansi,OPT_aux_info,OPT_aux_info_,OPT_auxbase,OPT_auxbase_strip,OPT_d,OPT_dumpbase,OPT_fCLASSPATH_,OPT_fPIC,OPT_fPIE,OPT_fabi_version_,OPT_faccess_control,OPT_falign_functions,OPT_falign_functions_,OPT_falign_jumps,OPT_falign_jumps_,OPT_falign_labels,OPT_falign_labels_,OPT_falign_loops,OPT_falign_loops_,OPT_fall_virtual,OPT_falt_external_templates,OPT_fargument_alias,OPT_fargument_noalias,OPT_fargument_noalias_global,OPT_fasm,OPT_fassert,OPT_fassume_compiled,OPT_fassume_compiled_,OPT_fasynchronous_unwind_tables,OPT_fautomatic,OPT_fbackslash,OPT_fbootclasspath_,OPT_fbootstrap_classes,OPT_fbounds_check,OPT_fbranch_count_reg,OPT_fbranch_probabilities,OPT_fbranch_target_load_optimize,OPT_fbranch_target_load_optimize2,OPT_fbtr_bb_exclusive,OPT_fbuiltin,OPT_fbuiltin_,OPT_fcall_saved_,OPT_fcall_used_,OPT_fcaller_saves,OPT_fcheck_new,OPT_fcheck_references,OPT_fclasspath_,OPT_fcommon,OPT_fcompile_resource_,OPT_fcond_mismatch,OPT_fconserve_space,OPT_fconst_strings,OPT_fconstant_string_class_,OPT_fconvert_big_endian,OPT_fconvert_little_endian,OPT_fconvert_native,OPT_fconvert_swap,OPT_fcprop_registers,OPT_fcray_pointer,OPT_fcrossjumping,OPT_fcse_follow_jumps,OPT_fcse_skip_blocks,OPT_fcx_limited_range,OPT_fd_lines_as_code,OPT_fd_lines_as_comments,OPT_fdata_sections,OPT_fdefault_double_8,OPT_fdefault_inline,OPT_fdefault_integer_8,OPT_fdefault_real_8,OPT_fdefer_pop,OPT_fdelayed_branch,OPT_fdelete_null_pointer_checks,OPT_fdiagnostics_show_location_,OPT_fdiagnostics_show_option,OPT_fdisable_assertions,OPT_fdisable_assertions_,OPT_fdollar_ok,OPT_fdollars_in_identifiers,OPT_fdump_,OPT_fdump_parse_tree,OPT_fdump_unnumbered,OPT_fearly_inlining,OPT_felide_constructors,OPT_feliminate_dwarf2_dups,OPT_feliminate_unused_debug_symbols,OPT_feliminate_unused_debug_types,OPT_femit_class_file,OPT_femit_class_files,OPT_fenable_assertions,OPT_fenable_assertions_,OPT_fencoding_,OPT_fenforce_eh_specs,OPT_fenum_int_equiv,OPT_fexceptions,OPT_fexec_charset_,OPT_fexpensive_optimizations,OPT_fextdirs_,OPT_fextended_identifiers,OPT_fexternal_templates,OPT_ff2c,OPT_ffast_math,OPT_ffilelist_file,OPT_ffinite_math_only,OPT_ffixed_,OPT_ffixed_form,OPT_ffixed_line_length_,OPT_ffixed_line_length_none,OPT_ffloat_store,OPT_ffor_scope,OPT_fforce_addr,OPT_fforce_classes_archive_check,OPT_fforce_mem,OPT_ffpe_trap_,OPT_ffree_form,OPT_ffree_line_length_,OPT_ffree_line_length_none,OPT_ffreestanding,OPT_ffriend_injection,OPT_ffunction_cse,OPT_ffunction_sections,OPT_fgcse,OPT_fgcse_after_reload,OPT_fgcse_las,OPT_fgcse_lm,OPT_fgcse_sm,OPT_fgnu_keywords,OPT_fgnu_runtime,OPT_fguess_branch_probability,OPT_fguiding_decls,OPT_fhandle_exceptions,OPT_fhash_synchronization,OPT_fhonor_std,OPT_fhosted,OPT_fhuge_objects,OPT_fident,OPT_fif_conversion,OPT_fif_conversion2,OPT_fimplement_inlines,OPT_fimplicit_inline_templates,OPT_fimplicit_none,OPT_fimplicit_templates,OPT_findirect_dispatch,OPT_finhibit_size_directive,OPT_finline,OPT_finline_functions,OPT_finline_functions_called_once,OPT_finline_limit_,OPT_finline_limit_eq,OPT_finput_charset_,OPT_finstrument_functions,OPT_fipa_cp,OPT_fipa_pure_const,OPT_fipa_reference,OPT_fipa_type_escape,OPT_fivopts,OPT_fjni,OPT_fjump_tables,OPT_fkeep_inline_functions,OPT_fkeep_static_consts,OPT_flabels_ok,OPT_fleading_underscore,OPT_floop_optimize,OPT_floop_optimize2,OPT_fmath_errno,OPT_fmax_identifier_length_,OPT_fmax_stack_var_size_,OPT_fmem_report,OPT_fmerge_all_constants,OPT_fmerge_constants,OPT_fmessage_length_,OPT_fmodule_private,OPT_fmodulo_sched,OPT_fmove_loop_invariants,OPT_fms_extensions,OPT_fmudflap,OPT_fmudflapir,OPT_fmudflapth,OPT_fname_mangling_version_,OPT_fnew_abi,OPT_fnext_runtime,OPT_fnil_receivers,OPT_fno_backend,OPT_fnon_call_exceptions,OPT_fnonansi_builtins,OPT_fnonnull_objects,OPT_fobjc_call_cxx_cdtors,OPT_fobjc_direct_dispatch,OPT_fobjc_exceptions,OPT_fobjc_gc,OPT_fobjc_sjlj_exceptions,OPT_fomit_frame_pointer,OPT_foperator_names,OPT_foptimize_register_move,OPT_foptimize_sibling_calls,OPT_foptimize_static_class_initialization,OPT_foptional_diags,OPT_foutput_class_dir_,OPT_fpack_derived,OPT_fpack_struct,OPT_fpack_struct_,OPT_fpcc_struct_return,OPT_fpch_deps,OPT_fpch_preprocess,OPT_fpeel_loops,OPT_fpeephole,OPT_fpeephole2,OPT_fpermissive,OPT_fpic,OPT_fpie,OPT_fprefetch_loop_arrays,OPT_fpreprocessed,OPT_fprofile,OPT_fprofile_arcs,OPT_fprofile_generate,OPT_fprofile_use,OPT_fprofile_values,OPT_frandom_seed,OPT_frandom_seed_,OPT_frecord_marker_4,OPT_frecord_marker_8,OPT_freg_struct_return,OPT_fregmove,OPT_frename_registers,OPT_freorder_blocks,OPT_freorder_blocks_and_partition,OPT_freorder_functions,OPT_frepack_arrays,OPT_freplace_objc_classes,OPT_frepo,OPT_frerun_cse_after_loop,OPT_frerun_loop_opt,OPT_freschedule_modulo_scheduled_loops,OPT_frounding_math,OPT_frtti,OPT_fsched_interblock,OPT_fsched_spec,OPT_fsched_spec_load,OPT_fsched_spec_load_dangerous,OPT_fsched_stalled_insns,OPT_fsched_stalled_insns_dep,OPT_fsched_stalled_insns_dep_,OPT_fsched_stalled_insns_,OPT_fsched_verbose_,OPT_fsched2_use_superblocks,OPT_fsched2_use_traces,OPT_fschedule_insns,OPT_fschedule_insns2,OPT_fsecond_underscore,OPT_fshared_data,OPT_fshort_double,OPT_fshort_enums,OPT_fshort_wchar,OPT_fshow_column,OPT_fsignaling_nans,OPT_fsigned_bitfields,OPT_fsigned_char,OPT_fsingle_precision_constant,OPT_fsplit_ivs_in_unroller,OPT_fsquangle,OPT_fstack_check,OPT_fstack_limit,OPT_fstack_limit_register_,OPT_fstack_limit_symbol_,OPT_fstack_protector,OPT_fstack_protector_all,OPT_fstats,OPT_fstore_check,OPT_fstrength_reduce,OPT_fstrict_aliasing,OPT_fstrict_prototype,OPT_fsyntax_only,OPT_ftabstop_,OPT_ftemplate_depth_,OPT_ftest_coverage,OPT_fthis_is_variable,OPT_fthread_jumps,OPT_fthreadsafe_statics,OPT_ftime_report,OPT_ftls_model_,OPT_ftracer,OPT_ftrapping_math,OPT_ftrapv,OPT_ftree_ccp,OPT_ftree_ch,OPT_ftree_combine_temps,OPT_ftree_copy_prop,OPT_ftree_copyrename,OPT_ftree_dce,OPT_ftree_dominator_opts,OPT_ftree_dse,OPT_ftree_fre,OPT_ftree_loop_im,OPT_ftree_loop_ivcanon,OPT_ftree_loop_linear,OPT_ftree_loop_optimize,OPT_ftree_lrs,OPT_ftree_pre,OPT_ftree_salias,OPT_ftree_sink,OPT_ftree_sra,OPT_ftree_store_ccp,OPT_ftree_store_copy_prop,OPT_ftree_ter,OPT_ftree_vect_loop_version,OPT_ftree_vectorize,OPT_ftree_vectorizer_verbose_,OPT_ftree_vrp,OPT_funderscoring,OPT_funit_at_a_time,OPT_funroll_all_loops,OPT_funroll_loops,OPT_funsafe_loop_optimizations,OPT_funsafe_math_optimizations,OPT_funsigned_bitfields,OPT_funsigned_char,OPT_funswitch_loops,OPT_funwind_tables,OPT_fuse_boehm_gc,OPT_fuse_cxa_atexit,OPT_fuse_divide_subroutine,OPT_fvar_tracking,OPT_fvariable_expansion_in_unroller,OPT_fverbose_asm,OPT_fvisibility_inlines_hidden,OPT_fvisibility_,OPT_fvpt,OPT_fvtable_gc,OPT_fvtable_thunks,OPT_fweak,OPT_fweb,OPT_fwhole_program,OPT_fwide_exec_charset_,OPT_fworking_directory,OPT_fwrapv,OPT_fxref,OPT_fzero_initialized_in_bss,OPT_fzero_link,OPT_g,OPT_gcoff,OPT_gdwarf_2,OPT_gen_decls,OPT_ggdb,OPT_gstabs,OPT_gstabs_,OPT_gvms,OPT_gxcoff,OPT_gxcoff_,OPT_idirafter,OPT_imacros,OPT_include,OPT_iprefix,OPT_iquote,OPT_isysroot,OPT_isystem,OPT_iwithprefix,OPT_iwithprefixbefore,OPT_lang_asm,OPT_lang_fortran,OPT_lang_objc,OPT_m128bit_long_double,OPT_m32,OPT_m386,OPT_m3dnow,OPT_m486,OPT_m64,OPT_m80387,OPT_m96bit_long_double,OPT_maccumulate_outgoing_args,OPT_malign_double,OPT_malign_functions_,OPT_malign_jumps_,OPT_malign_loops_,OPT_malign_stringops,OPT_march_,OPT_masm_,OPT_mbranch_cost_,OPT_mcmodel_,OPT_mdebug_addr,OPT_mdebug_arg,OPT_mfancy_math_387,OPT_mfp_ret_in_387,OPT_mfpmath_,OPT_mhard_float,OPT_mieee_fp,OPT_minline_all_stringops,OPT_mintel_syntax,OPT_mlarge_data_threshold_,OPT_mmmx,OPT_mms_bitfields,OPT_mno_align_stringops,OPT_mno_fancy_math_387,OPT_mno_push_args,OPT_mno_red_zone,OPT_momit_leaf_frame_pointer,OPT_mpentium,OPT_mpentiumpro,OPT_mpreferred_stack_boundary_,OPT_mpush_args,OPT_mred_zone,OPT_mregparm_,OPT_mrtd,OPT_msoft_float,OPT_msse,OPT_msse2,OPT_msse3,OPT_msseregparm,OPT_mstack_arg_probe,OPT_msvr3_shlib,OPT_mtls_dialect_,OPT_mtls_direct_seg_refs,OPT_mtune_,OPT_nostdinc,OPT_nostdinc__,OPT_o,OPT_p,OPT_pedantic,OPT_pedantic_errors,OPT_print_objc_runtime_info,OPT_print_pch_checksum,OPT_qkind_,OPT_quiet,OPT_remap,OPT_std_c__98,OPT_std_c89,OPT_std_c99,OPT_std_c9x,OPT_std_f2003,OPT_std_f95,OPT_std_gnu,OPT_std_gnu__98,OPT_std_gnu89,OPT_std_gnu99,OPT_std_gnu9x,OPT_std_iso9899_1990,OPT_std_iso9899_199409,OPT_std_iso9899_1999,OPT_std_iso9899_199x,OPT_std_legacy,OPT_traditional_cpp,OPT_trigraphs,OPT_undef,OPT_v,OPT_version,OPT_w,N_OPTS}; 
# 364 "./options.h" 
# 5 "./tm.h" 2
# 1 "../.././gcc/config/i386/i386.h" 1
# 87 "../.././gcc/config/i386/i386.h" 
struct processor_costs {const int add; const int lea; const int shift_var; const int shift_const; const int mult_init[5]; const int mult_bit; const int divide[5]; int movsx; int movzx; const int large_insn; const int move_ratio; const int movzbl_load; const int int_load[3]; const int int_store[3]; const int fp_move; const int fp_load[3]; const int fp_store[3]; const int mmx_move; const int mmx_load[2]; const int mmx_store[2]; const int sse_move; const int sse_load[3]; const int sse_store[3]; const int mmxsse_to_integer; const int prefetch_block; const int simultaneous_prefetches; const int branch_cost; const int fadd; const int fmul; const int fdiv; const int fabs; const int fchs; const int fsqrt; }; 
#line 89 "../.././gcc/config/i386/i386.h"
extern const struct processor_costs *ix86_cost; 
#line 145 "../.././gcc/config/i386/i386.h"
extern const int x86_use_leave,x86_push_memory,x86_zero_extend_with_and; 
#line 146 "../.././gcc/config/i386/i386.h"
extern const int x86_use_bit_test,x86_cmove,x86_fisttp,x86_deep_branch; 
#line 147 "../.././gcc/config/i386/i386.h"
extern const int x86_branch_hints,x86_unroll_strlen; 
#line 148 "../.././gcc/config/i386/i386.h"
extern const int x86_double_with_add,x86_partial_reg_stall,x86_movx; 
#line 149 "../.././gcc/config/i386/i386.h"
extern const int x86_use_himode_fiop,x86_use_simode_fiop; 
#line 150 "../.././gcc/config/i386/i386.h"
extern const int x86_use_mov0,x86_use_cltd,x86_read_modify_write; 
#line 151 "../.././gcc/config/i386/i386.h"
extern const int x86_read_modify,x86_split_long_moves; 
#line 152 "../.././gcc/config/i386/i386.h"
extern const int x86_promote_QImode,x86_single_stringop,x86_fast_prefix; 
#line 153 "../.././gcc/config/i386/i386.h"
extern const int x86_himode_math,x86_qimode_math,x86_promote_qi_regs; 
#line 154 "../.././gcc/config/i386/i386.h"
extern const int x86_promote_hi_regs,x86_integer_DFmode_moves; 
#line 155 "../.././gcc/config/i386/i386.h"
extern const int x86_add_esp_4,x86_add_esp_8,x86_sub_esp_4,x86_sub_esp_8; 
#line 156 "../.././gcc/config/i386/i386.h"
extern const int x86_partial_reg_dependency,x86_memory_mismatch_stall; 
#line 157 "../.././gcc/config/i386/i386.h"
extern const int x86_accumulate_outgoing_args,x86_prologue_using_move; 
#line 158 "../.././gcc/config/i386/i386.h"
extern const int x86_epilogue_using_move,x86_decompose_lea; 
#line 159 "../.././gcc/config/i386/i386.h"
extern const int x86_arch_always_fancy_math_387,x86_shift1; 
#line 160 "../.././gcc/config/i386/i386.h"
extern const int x86_sse_partial_reg_dependency,x86_sse_split_regs; 
#line 161 "../.././gcc/config/i386/i386.h"
extern const int x86_sse_typeless_stores,x86_sse_load0_by_pxor; 
#line 162 "../.././gcc/config/i386/i386.h"
extern const int x86_use_ffreep; 
#line 163 "../.././gcc/config/i386/i386.h"
extern const int x86_inter_unit_moves,x86_schedule; 
#line 164 "../.././gcc/config/i386/i386.h"
extern const int x86_use_bt; 
#line 165 "../.././gcc/config/i386/i386.h"
extern const int x86_cmpxchg,x86_xadd; 
#line 166 "../.././gcc/config/i386/i386.h"
extern int x86_prefetch_sse; 
# 145 "../.././gcc/config/i386/i386.h" 
# 1045 "../.././gcc/config/i386/i386.h" 
enum reg_class {NO_REGS,AREG,DREG,CREG,BREG,SIREG,DIREG,AD_REGS,Q_REGS,NON_Q_REGS,INDEX_REGS,LEGACY_REGS,GENERAL_REGS,FP_TOP_REG,FP_SECOND_REG,FLOAT_REGS,SSE_REGS,MMX_REGS,FP_TOP_SSE_REGS,FP_SECOND_SSE_REGS,FLOAT_SSE_REGS,FLOAT_INT_REGS,INT_SSE_REGS,FLOAT_INT_SSE_REGS,ALL_REGS,LIM_REG_CLASSES}; 
#line 1481 "../.././gcc/config/i386/i386.h"
typedef struct ix86_args {int words; int nregs; int regno; int fastcall; int sse_words; int sse_nregs; int warn_sse; int warn_mmx; int sse_regno; int mmx_words; int mmx_nregs; int mmx_regno; int maybe_vaarg; int float_in_sse; }CUMULATIVE_ARGS; 
# 1465 "../.././gcc/config/i386/i386.h" 
# 1994 "../.././gcc/config/i386/i386.h" 
extern int const dbx_register_map[53]; 
#line 1995 "../.././gcc/config/i386/i386.h"
extern int const dbx64_register_map[53]; 
#line 1996 "../.././gcc/config/i386/i386.h"
extern int const svr4_dbx_register_map[53]; 
#line 2120 "../.././gcc/config/i386/i386.h"
enum processor_type {PROCESSOR_I386,PROCESSOR_I486,PROCESSOR_PENTIUM,PROCESSOR_PENTIUMPRO,PROCESSOR_K6,PROCESSOR_ATHLON,PROCESSOR_PENTIUM4,PROCESSOR_K8,PROCESSOR_NOCONA,PROCESSOR_max}; 
#line 2122 "../.././gcc/config/i386/i386.h"
extern enum processor_type ix86_tune; 
#line 2123 "../.././gcc/config/i386/i386.h"
extern enum processor_type ix86_arch; 
#line 2129 "../.././gcc/config/i386/i386.h"
enum fpmath_unit {FPMATH_387=1,FPMATH_SSE=2}; 
#line 2131 "../.././gcc/config/i386/i386.h"
extern enum fpmath_unit ix86_fpmath; 
#line 2137 "../.././gcc/config/i386/i386.h"
enum tls_dialect {TLS_DIALECT_GNU,TLS_DIALECT_SUN}; 
#line 2139 "../.././gcc/config/i386/i386.h"
extern enum tls_dialect ix86_tls_dialect; 
#line 2149 "../.././gcc/config/i386/i386.h"
enum cmodel {CM_32,CM_SMALL,CM_KERNEL,CM_MEDIUM,CM_LARGE,CM_SMALL_PIC,CM_MEDIUM_PIC}; 
#line 2151 "../.././gcc/config/i386/i386.h"
extern enum cmodel ix86_cmodel; 
#line 2161 "../.././gcc/config/i386/i386.h"
enum asm_dialect {ASM_ATT,ASM_INTEL}; 
#line 2163 "../.././gcc/config/i386/i386.h"
extern enum asm_dialect ix86_asm_dialect; 
#line 2164 "../.././gcc/config/i386/i386.h"
extern unsigned int ix86_preferred_stack_boundary; 
#line 2165 "../.././gcc/config/i386/i386.h"
extern int ix86_branch_cost,ix86_section_threshold; 
#line 2168 "../.././gcc/config/i386/i386.h"
extern enum reg_class const regclass_map[53]; 
#line 2170 "../.././gcc/config/i386/i386.h"
extern  rtx ix86_compare_op0; 
#line 2171 "../.././gcc/config/i386/i386.h"
extern  rtx ix86_compare_op1; 
#line 2172 "../.././gcc/config/i386/i386.h"
extern  rtx ix86_compare_emitted; 
# 2108 "../.././gcc/config/i386/i386.h" 
# 2196 "../.././gcc/config/i386/i386.h" 
enum ix86_entity {I387_TRUNC=0,I387_FLOOR,I387_CEIL,I387_MASK_PM,MAX_386_ENTITIES}; 
#line 2207 "../.././gcc/config/i386/i386.h"
enum ix86_stack_slot {SLOT_TEMP=0,SLOT_CW_STORED,SLOT_CW_TRUNC,SLOT_CW_FLOOR,SLOT_CW_CEIL,SLOT_CW_MASK_PM,MAX_386_STACK_LOCALS}; 
#line 2277 "../.././gcc/config/i386/i386.h"
struct machine_function {struct stack_local_entry *stack_locals; const char *some_ld_name;  rtx force_align_arg_pointer; int save_varrargs_registers; int accesses_prev_frame; int optimize_mode_switching[MAX_386_ENTITIES]; int use_fast_prologue_epilogue; int use_fast_prologue_epilogue_nregs; }; 
# 2263 "../.././gcc/config/i386/i386.h" 
# 6 "./tm.h" 2
# 1 "../.././gcc/config/i386/unix.h" 1
# 7 "./tm.h" 2
# 1 "../.././gcc/config/i386/att.h" 1
# 8 "./tm.h" 2
# 1 "../.././gcc/config/dbxelf.h" 1
# 9 "./tm.h" 2
# 1 "../.././gcc/config/elfos.h" 1
# 10 "./tm.h" 2
# 1 "../.././gcc/config/svr4.h" 1
# 11 "./tm.h" 2
# 1 "../.././gcc/config/linux.h" 1
# 12 "./tm.h" 2
# 1 "../.././gcc/config/i386/linux.h" 1
# 13 "./tm.h" 2
# 1 "../.././gcc/defaults.h" 1
# 14 "./tm.h" 2
# 1 "./insn-constants.h" 1
# 17 "./tm.h" 2
# 1 "./insn-flags.h" 1
# 1095 "./insn-flags.h" 
static __inline__  rtx gen_cmpdi_ccno_1_rex64( rtx ,  rtx ); 
#line 1097 "./insn-flags.h"
static __inline__  rtx gen_cmpdi_ccno_1_rex64( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1098 "./insn-flags.h"
return 0; }
 
#line 1100 "./insn-flags.h"
static __inline__  rtx gen_cmpdi_1_insn_rex64( rtx ,  rtx ); 
#line 1102 "./insn-flags.h"
static __inline__  rtx gen_cmpdi_1_insn_rex64( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1103 "./insn-flags.h"
return 0; }
 
#line 1105 "./insn-flags.h"
extern  rtx gen_cmpqi_ext_3_insn( rtx ,  rtx ); 
#line 1106 "./insn-flags.h"
static __inline__  rtx gen_cmpqi_ext_3_insn_rex64( rtx ,  rtx ); 
#line 1108 "./insn-flags.h"
static __inline__  rtx gen_cmpqi_ext_3_insn_rex64( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1109 "./insn-flags.h"
return 0; }
 
#line 1111 "./insn-flags.h"
extern  rtx gen_x86_fnstsw_1( rtx ); 
#line 1112 "./insn-flags.h"
extern  rtx gen_x86_sahf_1( rtx ); 
#line 1113 "./insn-flags.h"
extern  rtx gen_popsi1( rtx ); 
#line 1114 "./insn-flags.h"
extern  rtx gen_movsi_insv_1( rtx ,  rtx ); 
#line 1115 "./insn-flags.h"
static __inline__  rtx gen_movdi_insv_1_rex64( rtx ,  rtx ); 
#line 1117 "./insn-flags.h"
static __inline__  rtx gen_movdi_insv_1_rex64( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1118 "./insn-flags.h"
return 0; }
 
#line 1120 "./insn-flags.h"
static __inline__  rtx gen_popdi1( rtx ); 
#line 1122 "./insn-flags.h"
static __inline__  rtx gen_popdi1( rtx a __attribute__  (( __unused__ )) )  {

#line 1123 "./insn-flags.h"
return 0; }
 
#line 1125 "./insn-flags.h"
extern  rtx gen_swapxf( rtx ,  rtx ); 
#line 1126 "./insn-flags.h"
extern  rtx gen_zero_extendhisi2_and( rtx ,  rtx ); 
#line 1127 "./insn-flags.h"
extern  rtx gen_zero_extendsidi2_32( rtx ,  rtx ); 
#line 1128 "./insn-flags.h"
static __inline__  rtx gen_zero_extendsidi2_rex64( rtx ,  rtx ); 
#line 1130 "./insn-flags.h"
static __inline__  rtx gen_zero_extendsidi2_rex64( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1131 "./insn-flags.h"
return 0; }
 
#line 1133 "./insn-flags.h"
static __inline__  rtx gen_zero_extendhidi2( rtx ,  rtx ); 
#line 1135 "./insn-flags.h"
static __inline__  rtx gen_zero_extendhidi2( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1136 "./insn-flags.h"
return 0; }
 
#line 1138 "./insn-flags.h"
static __inline__  rtx gen_zero_extendqidi2( rtx ,  rtx ); 
#line 1140 "./insn-flags.h"
static __inline__  rtx gen_zero_extendqidi2( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1141 "./insn-flags.h"
return 0; }
 
#line 1143 "./insn-flags.h"
static __inline__  rtx gen_extendsidi2_rex64( rtx ,  rtx ); 
#line 1145 "./insn-flags.h"
static __inline__  rtx gen_extendsidi2_rex64( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1146 "./insn-flags.h"
return 0; }
 
#line 1148 "./insn-flags.h"
static __inline__  rtx gen_extendhidi2( rtx ,  rtx ); 
#line 1150 "./insn-flags.h"
static __inline__  rtx gen_extendhidi2( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1151 "./insn-flags.h"
return 0; }
 
#line 1153 "./insn-flags.h"
static __inline__  rtx gen_extendqidi2( rtx ,  rtx ); 
#line 1155 "./insn-flags.h"
static __inline__  rtx gen_extendqidi2( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1156 "./insn-flags.h"
return 0; }
 
#line 1158 "./insn-flags.h"
extern  rtx gen_extendhisi2( rtx ,  rtx ); 
#line 1159 "./insn-flags.h"
extern  rtx gen_extendqihi2( rtx ,  rtx ); 
#line 1160 "./insn-flags.h"
extern  rtx gen_extendqisi2( rtx ,  rtx ); 
#line 1161 "./insn-flags.h"
extern  rtx gen_truncxfsf2_i387_noop( rtx ,  rtx ); 
#line 1162 "./insn-flags.h"
extern  rtx gen_truncxfdf2_i387_noop( rtx ,  rtx ); 
#line 1163 "./insn-flags.h"
static __inline__  rtx gen_fix_truncsfdi_sse( rtx ,  rtx ); 
#line 1165 "./insn-flags.h"
static __inline__  rtx gen_fix_truncsfdi_sse( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1166 "./insn-flags.h"
return 0; }
 
#line 1168 "./insn-flags.h"
static __inline__  rtx gen_fix_truncdfdi_sse( rtx ,  rtx ); 
#line 1170 "./insn-flags.h"
static __inline__  rtx gen_fix_truncdfdi_sse( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1171 "./insn-flags.h"
return 0; }
 
#line 1173 "./insn-flags.h"
extern  rtx gen_fix_truncsfsi_sse( rtx ,  rtx ); 
#line 1174 "./insn-flags.h"
extern  rtx gen_fix_truncdfsi_sse( rtx ,  rtx ); 
#line 1175 "./insn-flags.h"
extern  rtx gen_fix_trunchi_fisttp_i387_1( rtx ,  rtx ); 
#line 1176 "./insn-flags.h"
extern  rtx gen_fix_truncsi_fisttp_i387_1( rtx ,  rtx ); 
#line 1177 "./insn-flags.h"
extern  rtx gen_fix_truncdi_fisttp_i387_1( rtx ,  rtx ); 
#line 1178 "./insn-flags.h"
extern  rtx gen_fix_trunchi_i387_fisttp( rtx ,  rtx ); 
#line 1179 "./insn-flags.h"
extern  rtx gen_fix_truncsi_i387_fisttp( rtx ,  rtx ); 
#line 1180 "./insn-flags.h"
extern  rtx gen_fix_truncdi_i387_fisttp( rtx ,  rtx ); 
#line 1181 "./insn-flags.h"
extern  rtx gen_fix_trunchi_i387_fisttp_with_temp( rtx ,  rtx ,  rtx ); 
#line 1182 "./insn-flags.h"
extern  rtx gen_fix_truncsi_i387_fisttp_with_temp( rtx ,  rtx ,  rtx ); 
#line 1183 "./insn-flags.h"
extern  rtx gen_fix_truncdi_i387_fisttp_with_temp( rtx ,  rtx ,  rtx ); 
#line 1184 "./insn-flags.h"
extern  rtx gen_fix_truncdi_i387( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1185 "./insn-flags.h"
extern  rtx gen_fix_truncdi_i387_with_temp( rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 1186 "./insn-flags.h"
extern  rtx gen_fix_trunchi_i387( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1187 "./insn-flags.h"
extern  rtx gen_fix_truncsi_i387( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1188 "./insn-flags.h"
extern  rtx gen_fix_trunchi_i387_with_temp( rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 1189 "./insn-flags.h"
extern  rtx gen_fix_truncsi_i387_with_temp( rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 1190 "./insn-flags.h"
extern  rtx gen_x86_fnstcw_1( rtx ); 
#line 1191 "./insn-flags.h"
extern  rtx gen_x86_fldcw_1( rtx ); 
#line 1192 "./insn-flags.h"
extern  rtx gen_floathixf2( rtx ,  rtx ); 
#line 1193 "./insn-flags.h"
extern  rtx gen_floatsixf2( rtx ,  rtx ); 
#line 1194 "./insn-flags.h"
extern  rtx gen_floatdixf2( rtx ,  rtx ); 
#line 1195 "./insn-flags.h"
static __inline__  rtx gen_adddi3_carry_rex64( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1197 "./insn-flags.h"
static __inline__  rtx gen_adddi3_carry_rex64( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) ,  rtx d __attribute__  (( __unused__ )) )  {

#line 1198 "./insn-flags.h"
return 0; }
 
#line 1200 "./insn-flags.h"
extern  rtx gen_addqi3_carry( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1201 "./insn-flags.h"
extern  rtx gen_addhi3_carry( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1202 "./insn-flags.h"
extern  rtx gen_addsi3_carry( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1203 "./insn-flags.h"
extern  rtx gen_addqi3_cc( rtx ,  rtx ,  rtx ); 
#line 1204 "./insn-flags.h"
static __inline__  rtx gen_addsi_1_zext( rtx ,  rtx ,  rtx ); 
#line 1206 "./insn-flags.h"
static __inline__  rtx gen_addsi_1_zext( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) )  {

#line 1207 "./insn-flags.h"
return 0; }
 
#line 1209 "./insn-flags.h"
extern  rtx gen_addqi_ext_1( rtx ,  rtx ,  rtx ); 
#line 1210 "./insn-flags.h"
static __inline__  rtx gen_subdi3_carry_rex64( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1212 "./insn-flags.h"
static __inline__  rtx gen_subdi3_carry_rex64( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) ,  rtx d __attribute__  (( __unused__ )) )  {

#line 1213 "./insn-flags.h"
return 0; }
 
#line 1215 "./insn-flags.h"
extern  rtx gen_subqi3_carry( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1216 "./insn-flags.h"
extern  rtx gen_subhi3_carry( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1217 "./insn-flags.h"
extern  rtx gen_subsi3_carry( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1218 "./insn-flags.h"
static __inline__  rtx gen_subsi3_carry_zext( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1220 "./insn-flags.h"
static __inline__  rtx gen_subsi3_carry_zext( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) ,  rtx d __attribute__  (( __unused__ )) )  {

#line 1221 "./insn-flags.h"
return 0; }
 
#line 1223 "./insn-flags.h"
extern  rtx gen_divqi3( rtx ,  rtx ,  rtx ); 
#line 1224 "./insn-flags.h"
extern  rtx gen_udivqi3( rtx ,  rtx ,  rtx ); 
#line 1225 "./insn-flags.h"
extern  rtx gen_divmodhi4( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1226 "./insn-flags.h"
static __inline__  rtx gen_udivmoddi4( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1228 "./insn-flags.h"
static __inline__  rtx gen_udivmoddi4( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) ,  rtx d __attribute__  (( __unused__ )) )  {

#line 1229 "./insn-flags.h"
return 0; }
 
#line 1231 "./insn-flags.h"
extern  rtx gen_udivmodsi4( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1232 "./insn-flags.h"
extern  rtx gen_testsi_1( rtx ,  rtx ); 
#line 1233 "./insn-flags.h"
extern  rtx gen_andqi_ext_0( rtx ,  rtx ,  rtx ); 
#line 1234 "./insn-flags.h"
extern  rtx gen_iorqi_ext_0( rtx ,  rtx ,  rtx ); 
#line 1235 "./insn-flags.h"
extern  rtx gen_xorqi_ext_0( rtx ,  rtx ,  rtx ); 
#line 1236 "./insn-flags.h"
extern  rtx gen_copysignsf3_const( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1237 "./insn-flags.h"
extern  rtx gen_copysignsf3_var( rtx ,  rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 1238 "./insn-flags.h"
extern  rtx gen_copysigndf3_const( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1239 "./insn-flags.h"
extern  rtx gen_copysigndf3_var( rtx ,  rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 1240 "./insn-flags.h"
static __inline__  rtx gen_ashlti3_1( rtx ,  rtx ,  rtx ); 
#line 1242 "./insn-flags.h"
static __inline__  rtx gen_ashlti3_1( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) )  {

#line 1243 "./insn-flags.h"
return 0; }
 
#line 1245 "./insn-flags.h"
static __inline__  rtx gen_x86_64_shld( rtx ,  rtx ,  rtx ); 
#line 1247 "./insn-flags.h"
static __inline__  rtx gen_x86_64_shld( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) )  {

#line 1248 "./insn-flags.h"
return 0; }
 
#line 1250 "./insn-flags.h"
extern  rtx gen_x86_shld_1( rtx ,  rtx ,  rtx ); 
#line 1251 "./insn-flags.h"
static __inline__  rtx gen_ashrti3_1( rtx ,  rtx ,  rtx ); 
#line 1253 "./insn-flags.h"
static __inline__  rtx gen_ashrti3_1( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) )  {

#line 1254 "./insn-flags.h"
return 0; }
 
#line 1256 "./insn-flags.h"
static __inline__  rtx gen_x86_64_shrd( rtx ,  rtx ,  rtx ); 
#line 1258 "./insn-flags.h"
static __inline__  rtx gen_x86_64_shrd( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) )  {

#line 1259 "./insn-flags.h"
return 0; }
 
#line 1261 "./insn-flags.h"
extern  rtx gen_x86_shrd_1( rtx ,  rtx ,  rtx ); 
#line 1262 "./insn-flags.h"
extern  rtx gen_ashrsi3_31( rtx ,  rtx ,  rtx ); 
#line 1263 "./insn-flags.h"
static __inline__  rtx gen_lshrti3_1( rtx ,  rtx ,  rtx ); 
#line 1265 "./insn-flags.h"
static __inline__  rtx gen_lshrti3_1( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) )  {

#line 1266 "./insn-flags.h"
return 0; }
 
#line 1268 "./insn-flags.h"
extern  rtx gen_ix86_rotldi3( rtx ,  rtx ,  rtx ); 
#line 1269 "./insn-flags.h"
extern  rtx gen_ix86_rotrdi3( rtx ,  rtx ,  rtx ); 
#line 1270 "./insn-flags.h"
extern  rtx gen_jump( rtx ); 
#line 1271 "./insn-flags.h"
extern  rtx gen_blockage( rtx ); 
#line 1272 "./insn-flags.h"
extern  rtx gen_return_internal(void ); 
#line 1273 "./insn-flags.h"
extern  rtx gen_return_internal_long(void ); 
#line 1274 "./insn-flags.h"
extern  rtx gen_return_pop_internal( rtx ); 
#line 1275 "./insn-flags.h"
extern  rtx gen_return_indirect_internal( rtx ); 
#line 1276 "./insn-flags.h"
extern  rtx gen_nop(void ); 
#line 1277 "./insn-flags.h"
extern  rtx gen_align( rtx ); 
#line 1278 "./insn-flags.h"
extern  rtx gen_set_got( rtx ); 
#line 1279 "./insn-flags.h"
static __inline__  rtx gen_set_got_rex64( rtx ); 
#line 1281 "./insn-flags.h"
static __inline__  rtx gen_set_got_rex64( rtx a __attribute__  (( __unused__ )) )  {

#line 1282 "./insn-flags.h"
return 0; }
 
#line 1284 "./insn-flags.h"
extern  rtx gen_eh_return_si( rtx ); 
#line 1285 "./insn-flags.h"
static __inline__  rtx gen_eh_return_di( rtx ); 
#line 1287 "./insn-flags.h"
static __inline__  rtx gen_eh_return_di( rtx a __attribute__  (( __unused__ )) )  {

#line 1288 "./insn-flags.h"
return 0; }
 
#line 1290 "./insn-flags.h"
extern  rtx gen_leave(void ); 
#line 1291 "./insn-flags.h"
static __inline__  rtx gen_leave_rex64(void ); 
#line 1293 "./insn-flags.h"
static __inline__  rtx gen_leave_rex64(void )  {

#line 1294 "./insn-flags.h"
return 0; }
 
#line 1296 "./insn-flags.h"
extern  rtx gen_ctzsi2( rtx ,  rtx ); 
#line 1297 "./insn-flags.h"
static __inline__  rtx gen_ctzdi2( rtx ,  rtx ); 
#line 1299 "./insn-flags.h"
static __inline__  rtx gen_ctzdi2( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1300 "./insn-flags.h"
return 0; }
 
#line 1302 "./insn-flags.h"
extern  rtx gen_sqrtxf2( rtx ,  rtx ); 
#line 1303 "./insn-flags.h"
extern  rtx gen_fpremxf4( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1304 "./insn-flags.h"
extern  rtx gen_fprem1xf4( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1305 "./insn-flags.h"
extern  rtx gen_sincosdf3( rtx ,  rtx ,  rtx ); 
#line 1306 "./insn-flags.h"
extern  rtx gen_sincossf3( rtx ,  rtx ,  rtx ); 
#line 1307 "./insn-flags.h"
extern  rtx gen_sincosxf3( rtx ,  rtx ,  rtx ); 
#line 1308 "./insn-flags.h"
extern  rtx gen_atan2df3_1( rtx ,  rtx ,  rtx ); 
#line 1309 "./insn-flags.h"
extern  rtx gen_atan2sf3_1( rtx ,  rtx ,  rtx ); 
#line 1310 "./insn-flags.h"
extern  rtx gen_atan2xf3_1( rtx ,  rtx ,  rtx ); 
#line 1311 "./insn-flags.h"
extern  rtx gen_fyl2x_xf3( rtx ,  rtx ,  rtx ); 
#line 1312 "./insn-flags.h"
extern  rtx gen_fyl2xp1_xf3( rtx ,  rtx ,  rtx ); 
#line 1313 "./insn-flags.h"
extern  rtx gen_frndintxf2( rtx ,  rtx ); 
#line 1314 "./insn-flags.h"
extern  rtx gen_fistdi2( rtx ,  rtx ); 
#line 1315 "./insn-flags.h"
extern  rtx gen_fistdi2_with_temp( rtx ,  rtx ,  rtx ); 
#line 1316 "./insn-flags.h"
extern  rtx gen_fisthi2( rtx ,  rtx ); 
#line 1317 "./insn-flags.h"
extern  rtx gen_fistsi2( rtx ,  rtx ); 
#line 1318 "./insn-flags.h"
extern  rtx gen_fisthi2_with_temp( rtx ,  rtx ,  rtx ); 
#line 1319 "./insn-flags.h"
extern  rtx gen_fistsi2_with_temp( rtx ,  rtx ,  rtx ); 
#line 1320 "./insn-flags.h"
extern  rtx gen_frndintxf2_floor( rtx ,  rtx ); 
#line 1321 "./insn-flags.h"
extern  rtx gen_frndintxf2_floor_i387( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1322 "./insn-flags.h"
extern  rtx gen_fistdi2_floor( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1323 "./insn-flags.h"
extern  rtx gen_fistdi2_floor_with_temp( rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 1324 "./insn-flags.h"
extern  rtx gen_fisthi2_floor( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1325 "./insn-flags.h"
extern  rtx gen_fistsi2_floor( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1326 "./insn-flags.h"
extern  rtx gen_fisthi2_floor_with_temp( rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 1327 "./insn-flags.h"
extern  rtx gen_fistsi2_floor_with_temp( rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 1328 "./insn-flags.h"
extern  rtx gen_frndintxf2_ceil( rtx ,  rtx ); 
#line 1329 "./insn-flags.h"
extern  rtx gen_frndintxf2_ceil_i387( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1330 "./insn-flags.h"
extern  rtx gen_fistdi2_ceil( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1331 "./insn-flags.h"
extern  rtx gen_fistdi2_ceil_with_temp( rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 1332 "./insn-flags.h"
extern  rtx gen_fisthi2_ceil( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1333 "./insn-flags.h"
extern  rtx gen_fistsi2_ceil( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1334 "./insn-flags.h"
extern  rtx gen_fisthi2_ceil_with_temp( rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 1335 "./insn-flags.h"
extern  rtx gen_fistsi2_ceil_with_temp( rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 1336 "./insn-flags.h"
extern  rtx gen_frndintxf2_trunc( rtx ,  rtx ); 
#line 1337 "./insn-flags.h"
extern  rtx gen_frndintxf2_trunc_i387( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1338 "./insn-flags.h"
extern  rtx gen_frndintxf2_mask_pm( rtx ,  rtx ); 
#line 1339 "./insn-flags.h"
extern  rtx gen_frndintxf2_mask_pm_i387( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1340 "./insn-flags.h"
extern  rtx gen_cld(void ); 
#line 1341 "./insn-flags.h"
static __inline__  rtx gen_x86_movdicc_0_m1_rex64( rtx ,  rtx ); 
#line 1343 "./insn-flags.h"
static __inline__  rtx gen_x86_movdicc_0_m1_rex64( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1344 "./insn-flags.h"
return 0; }
 
#line 1346 "./insn-flags.h"
extern  rtx gen_x86_movsicc_0_m1( rtx ,  rtx ); 
#line 1347 "./insn-flags.h"
extern  rtx gen_sminsf3( rtx ,  rtx ,  rtx ); 
#line 1348 "./insn-flags.h"
extern  rtx gen_smaxsf3( rtx ,  rtx ,  rtx ); 
#line 1349 "./insn-flags.h"
extern  rtx gen_smindf3( rtx ,  rtx ,  rtx ); 
#line 1350 "./insn-flags.h"
extern  rtx gen_smaxdf3( rtx ,  rtx ,  rtx ); 
#line 1351 "./insn-flags.h"
extern  rtx gen_pro_epilogue_adjust_stack_1( rtx ,  rtx ,  rtx ); 
#line 1352 "./insn-flags.h"
static __inline__  rtx gen_pro_epilogue_adjust_stack_rex64( rtx ,  rtx ,  rtx ); 
#line 1354 "./insn-flags.h"
static __inline__  rtx gen_pro_epilogue_adjust_stack_rex64( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) )  {

#line 1355 "./insn-flags.h"
return 0; }
 
#line 1357 "./insn-flags.h"
static __inline__  rtx gen_pro_epilogue_adjust_stack_rex64_2( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1359 "./insn-flags.h"
static __inline__  rtx gen_pro_epilogue_adjust_stack_rex64_2( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) ,  rtx d __attribute__  (( __unused__ )) )  {

#line 1360 "./insn-flags.h"
return 0; }
 
#line 1362 "./insn-flags.h"
extern  rtx gen_allocate_stack_worker_1( rtx ); 
#line 1363 "./insn-flags.h"
static __inline__  rtx gen_allocate_stack_worker_rex64( rtx ); 
#line 1365 "./insn-flags.h"
static __inline__  rtx gen_allocate_stack_worker_rex64( rtx a __attribute__  (( __unused__ )) )  {

#line 1366 "./insn-flags.h"
return 0; }
 
#line 1368 "./insn-flags.h"
extern  rtx gen_trap(void ); 
#line 1369 "./insn-flags.h"
extern  rtx gen_stack_protect_set_si( rtx ,  rtx ); 
#line 1370 "./insn-flags.h"
static __inline__  rtx gen_stack_protect_set_di( rtx ,  rtx ); 
#line 1372 "./insn-flags.h"
static __inline__  rtx gen_stack_protect_set_di( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1373 "./insn-flags.h"
return 0; }
 
#line 1375 "./insn-flags.h"
extern  rtx gen_stack_tls_protect_set_si( rtx ,  rtx ); 
#line 1376 "./insn-flags.h"
static __inline__  rtx gen_stack_tls_protect_set_di( rtx ,  rtx ); 
#line 1378 "./insn-flags.h"
static __inline__  rtx gen_stack_tls_protect_set_di( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1379 "./insn-flags.h"
return 0; }
 
#line 1381 "./insn-flags.h"
extern  rtx gen_stack_protect_test_si( rtx ,  rtx ,  rtx ); 
#line 1382 "./insn-flags.h"
static __inline__  rtx gen_stack_protect_test_di( rtx ,  rtx ,  rtx ); 
#line 1384 "./insn-flags.h"
static __inline__  rtx gen_stack_protect_test_di( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) )  {

#line 1385 "./insn-flags.h"
return 0; }
 
#line 1387 "./insn-flags.h"
extern  rtx gen_stack_tls_protect_test_si( rtx ,  rtx ,  rtx ); 
#line 1388 "./insn-flags.h"
static __inline__  rtx gen_stack_tls_protect_test_di( rtx ,  rtx ,  rtx ); 
#line 1390 "./insn-flags.h"
static __inline__  rtx gen_stack_tls_protect_test_di( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) )  {

#line 1391 "./insn-flags.h"
return 0; }
 
#line 1393 "./insn-flags.h"
extern  rtx gen_sse_movups( rtx ,  rtx ); 
#line 1394 "./insn-flags.h"
extern  rtx gen_sse2_movupd( rtx ,  rtx ); 
#line 1395 "./insn-flags.h"
extern  rtx gen_sse2_movdqu( rtx ,  rtx ); 
#line 1396 "./insn-flags.h"
extern  rtx gen_sse_movntv4sf( rtx ,  rtx ); 
#line 1397 "./insn-flags.h"
extern  rtx gen_sse2_movntv2df( rtx ,  rtx ); 
#line 1398 "./insn-flags.h"
extern  rtx gen_sse2_movntv2di( rtx ,  rtx ); 
#line 1399 "./insn-flags.h"
extern  rtx gen_sse2_movntsi( rtx ,  rtx ); 
#line 1400 "./insn-flags.h"
extern  rtx gen_sse3_lddqu( rtx ,  rtx ); 
#line 1401 "./insn-flags.h"
extern  rtx gen_sse_vmaddv4sf3( rtx ,  rtx ,  rtx ); 
#line 1402 "./insn-flags.h"
extern  rtx gen_sse_vmsubv4sf3( rtx ,  rtx ,  rtx ); 
#line 1403 "./insn-flags.h"
extern  rtx gen_sse_vmmulv4sf3( rtx ,  rtx ,  rtx ); 
#line 1404 "./insn-flags.h"
extern  rtx gen_sse_vmdivv4sf3( rtx ,  rtx ,  rtx ); 
#line 1405 "./insn-flags.h"
extern  rtx gen_sse_rcpv4sf2( rtx ,  rtx ); 
#line 1406 "./insn-flags.h"
extern  rtx gen_sse_vmrcpv4sf2( rtx ,  rtx ,  rtx ); 
#line 1407 "./insn-flags.h"
extern  rtx gen_sse_rsqrtv4sf2( rtx ,  rtx ); 
#line 1408 "./insn-flags.h"
extern  rtx gen_sse_vmrsqrtv4sf2( rtx ,  rtx ,  rtx ); 
#line 1409 "./insn-flags.h"
extern  rtx gen_sqrtv4sf2( rtx ,  rtx ); 
#line 1410 "./insn-flags.h"
extern  rtx gen_sse_vmsqrtv4sf2( rtx ,  rtx ,  rtx ); 
#line 1411 "./insn-flags.h"
extern  rtx gen_sse_vmsmaxv4sf3( rtx ,  rtx ,  rtx ); 
#line 1412 "./insn-flags.h"
extern  rtx gen_sse_vmsminv4sf3( rtx ,  rtx ,  rtx ); 
#line 1413 "./insn-flags.h"
extern  rtx gen_sse3_addsubv4sf3( rtx ,  rtx ,  rtx ); 
#line 1414 "./insn-flags.h"
extern  rtx gen_sse3_haddv4sf3( rtx ,  rtx ,  rtx ); 
#line 1415 "./insn-flags.h"
extern  rtx gen_sse3_hsubv4sf3( rtx ,  rtx ,  rtx ); 
#line 1416 "./insn-flags.h"
extern  rtx gen_sse_maskcmpv4sf3( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1417 "./insn-flags.h"
extern  rtx gen_sse_vmmaskcmpv4sf3( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1418 "./insn-flags.h"
extern  rtx gen_sse_comi( rtx ,  rtx ); 
#line 1419 "./insn-flags.h"
extern  rtx gen_sse_ucomi( rtx ,  rtx ); 
#line 1420 "./insn-flags.h"
extern  rtx gen_sse_nandv4sf3( rtx ,  rtx ,  rtx ); 
#line 1421 "./insn-flags.h"
extern  rtx gen_sse_cvtpi2ps( rtx ,  rtx ,  rtx ); 
#line 1422 "./insn-flags.h"
extern  rtx gen_sse_cvtps2pi( rtx ,  rtx ); 
#line 1423 "./insn-flags.h"
extern  rtx gen_sse_cvttps2pi( rtx ,  rtx ); 
#line 1424 "./insn-flags.h"
extern  rtx gen_sse_cvtsi2ss( rtx ,  rtx ,  rtx ); 
#line 1425 "./insn-flags.h"
static __inline__  rtx gen_sse_cvtsi2ssq( rtx ,  rtx ,  rtx ); 
#line 1427 "./insn-flags.h"
static __inline__  rtx gen_sse_cvtsi2ssq( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) )  {

#line 1428 "./insn-flags.h"
return 0; }
 
#line 1430 "./insn-flags.h"
extern  rtx gen_sse_cvtss2si( rtx ,  rtx ); 
#line 1431 "./insn-flags.h"
static __inline__  rtx gen_sse_cvtss2siq( rtx ,  rtx ); 
#line 1433 "./insn-flags.h"
static __inline__  rtx gen_sse_cvtss2siq( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1434 "./insn-flags.h"
return 0; }
 
#line 1436 "./insn-flags.h"
extern  rtx gen_sse_cvttss2si( rtx ,  rtx ); 
#line 1437 "./insn-flags.h"
static __inline__  rtx gen_sse_cvttss2siq( rtx ,  rtx ); 
#line 1439 "./insn-flags.h"
static __inline__  rtx gen_sse_cvttss2siq( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1440 "./insn-flags.h"
return 0; }
 
#line 1442 "./insn-flags.h"
extern  rtx gen_sse2_cvtdq2ps( rtx ,  rtx ); 
#line 1443 "./insn-flags.h"
extern  rtx gen_sse2_cvtps2dq( rtx ,  rtx ); 
#line 1444 "./insn-flags.h"
extern  rtx gen_sse2_cvttps2dq( rtx ,  rtx ); 
#line 1445 "./insn-flags.h"
extern  rtx gen_sse_movhlps( rtx ,  rtx ,  rtx ); 
#line 1446 "./insn-flags.h"
extern  rtx gen_sse_movlhps( rtx ,  rtx ,  rtx ); 
#line 1447 "./insn-flags.h"
extern  rtx gen_sse_unpckhps( rtx ,  rtx ,  rtx ); 
#line 1448 "./insn-flags.h"
extern  rtx gen_sse_unpcklps( rtx ,  rtx ,  rtx ); 
#line 1449 "./insn-flags.h"
extern  rtx gen_sse3_movshdup( rtx ,  rtx ); 
#line 1450 "./insn-flags.h"
extern  rtx gen_sse3_movsldup( rtx ,  rtx ); 
#line 1451 "./insn-flags.h"
extern  rtx gen_sse_shufps_1( rtx ,  rtx ,  rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 1452 "./insn-flags.h"
extern  rtx gen_sse_storehps( rtx ,  rtx ); 
#line 1453 "./insn-flags.h"
extern  rtx gen_sse_loadhps( rtx ,  rtx ,  rtx ); 
#line 1454 "./insn-flags.h"
extern  rtx gen_sse_storelps( rtx ,  rtx ); 
#line 1455 "./insn-flags.h"
extern  rtx gen_sse_loadlps( rtx ,  rtx ,  rtx ); 
#line 1456 "./insn-flags.h"
extern  rtx gen_sse_movss( rtx ,  rtx ,  rtx ); 
#line 1457 "./insn-flags.h"
extern  rtx gen_sse2_vmaddv2df3( rtx ,  rtx ,  rtx ); 
#line 1458 "./insn-flags.h"
extern  rtx gen_sse2_vmsubv2df3( rtx ,  rtx ,  rtx ); 
#line 1459 "./insn-flags.h"
extern  rtx gen_sse2_vmmulv2df3( rtx ,  rtx ,  rtx ); 
#line 1460 "./insn-flags.h"
extern  rtx gen_sse2_vmdivv2df3( rtx ,  rtx ,  rtx ); 
#line 1461 "./insn-flags.h"
extern  rtx gen_sqrtv2df2( rtx ,  rtx ); 
#line 1462 "./insn-flags.h"
extern  rtx gen_sse2_vmsqrtv2df2( rtx ,  rtx ,  rtx ); 
#line 1463 "./insn-flags.h"
extern  rtx gen_sse2_vmsmaxv2df3( rtx ,  rtx ,  rtx ); 
#line 1464 "./insn-flags.h"
extern  rtx gen_sse2_vmsminv2df3( rtx ,  rtx ,  rtx ); 
#line 1465 "./insn-flags.h"
extern  rtx gen_sse3_addsubv2df3( rtx ,  rtx ,  rtx ); 
#line 1466 "./insn-flags.h"
extern  rtx gen_sse3_haddv2df3( rtx ,  rtx ,  rtx ); 
#line 1467 "./insn-flags.h"
extern  rtx gen_sse3_hsubv2df3( rtx ,  rtx ,  rtx ); 
#line 1468 "./insn-flags.h"
extern  rtx gen_sse2_maskcmpv2df3( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1469 "./insn-flags.h"
extern  rtx gen_sse2_vmmaskcmpv2df3( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1470 "./insn-flags.h"
extern  rtx gen_sse2_comi( rtx ,  rtx ); 
#line 1471 "./insn-flags.h"
extern  rtx gen_sse2_ucomi( rtx ,  rtx ); 
#line 1472 "./insn-flags.h"
extern  rtx gen_sse2_nandv2df3( rtx ,  rtx ,  rtx ); 
#line 1473 "./insn-flags.h"
extern  rtx gen_sse2_cvtpi2pd( rtx ,  rtx ); 
#line 1474 "./insn-flags.h"
extern  rtx gen_sse2_cvtpd2pi( rtx ,  rtx ); 
#line 1475 "./insn-flags.h"
extern  rtx gen_sse2_cvttpd2pi( rtx ,  rtx ); 
#line 1476 "./insn-flags.h"
extern  rtx gen_sse2_cvtsi2sd( rtx ,  rtx ,  rtx ); 
#line 1477 "./insn-flags.h"
static __inline__  rtx gen_sse2_cvtsi2sdq( rtx ,  rtx ,  rtx ); 
#line 1479 "./insn-flags.h"
static __inline__  rtx gen_sse2_cvtsi2sdq( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) )  {

#line 1480 "./insn-flags.h"
return 0; }
 
#line 1482 "./insn-flags.h"
extern  rtx gen_sse2_cvtsd2si( rtx ,  rtx ); 
#line 1483 "./insn-flags.h"
static __inline__  rtx gen_sse2_cvtsd2siq( rtx ,  rtx ); 
#line 1485 "./insn-flags.h"
static __inline__  rtx gen_sse2_cvtsd2siq( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1486 "./insn-flags.h"
return 0; }
 
#line 1488 "./insn-flags.h"
extern  rtx gen_sse2_cvttsd2si( rtx ,  rtx ); 
#line 1489 "./insn-flags.h"
static __inline__  rtx gen_sse2_cvttsd2siq( rtx ,  rtx ); 
#line 1491 "./insn-flags.h"
static __inline__  rtx gen_sse2_cvttsd2siq( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1492 "./insn-flags.h"
return 0; }
 
#line 1494 "./insn-flags.h"
extern  rtx gen_sse2_cvtdq2pd( rtx ,  rtx ); 
#line 1495 "./insn-flags.h"
extern  rtx gen_sse2_cvtsd2ss( rtx ,  rtx ,  rtx ); 
#line 1496 "./insn-flags.h"
extern  rtx gen_sse2_cvtss2sd( rtx ,  rtx ,  rtx ); 
#line 1497 "./insn-flags.h"
extern  rtx gen_sse2_cvtps2pd( rtx ,  rtx ); 
#line 1498 "./insn-flags.h"
extern  rtx gen_sse2_unpckhpd( rtx ,  rtx ,  rtx ); 
#line 1499 "./insn-flags.h"
extern  rtx gen_sse2_unpcklpd( rtx ,  rtx ,  rtx ); 
#line 1500 "./insn-flags.h"
extern  rtx gen_sse2_shufpd_1( rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 1501 "./insn-flags.h"
extern  rtx gen_sse2_storehpd( rtx ,  rtx ); 
#line 1502 "./insn-flags.h"
extern  rtx gen_sse2_storelpd( rtx ,  rtx ); 
#line 1503 "./insn-flags.h"
extern  rtx gen_sse2_loadhpd( rtx ,  rtx ,  rtx ); 
#line 1504 "./insn-flags.h"
extern  rtx gen_sse2_loadlpd( rtx ,  rtx ,  rtx ); 
#line 1505 "./insn-flags.h"
extern  rtx gen_sse2_movsd( rtx ,  rtx ,  rtx ); 
#line 1506 "./insn-flags.h"
extern  rtx gen_sse2_ssaddv16qi3( rtx ,  rtx ,  rtx ); 
#line 1507 "./insn-flags.h"
extern  rtx gen_sse2_ssaddv8hi3( rtx ,  rtx ,  rtx ); 
#line 1508 "./insn-flags.h"
extern  rtx gen_sse2_usaddv16qi3( rtx ,  rtx ,  rtx ); 
#line 1509 "./insn-flags.h"
extern  rtx gen_sse2_usaddv8hi3( rtx ,  rtx ,  rtx ); 
#line 1510 "./insn-flags.h"
extern  rtx gen_sse2_sssubv16qi3( rtx ,  rtx ,  rtx ); 
#line 1511 "./insn-flags.h"
extern  rtx gen_sse2_sssubv8hi3( rtx ,  rtx ,  rtx ); 
#line 1512 "./insn-flags.h"
extern  rtx gen_sse2_ussubv16qi3( rtx ,  rtx ,  rtx ); 
#line 1513 "./insn-flags.h"
extern  rtx gen_sse2_ussubv8hi3( rtx ,  rtx ,  rtx ); 
#line 1514 "./insn-flags.h"
extern  rtx gen_sse2_smulv8hi3_highpart( rtx ,  rtx ,  rtx ); 
#line 1515 "./insn-flags.h"
extern  rtx gen_sse2_umulv8hi3_highpart( rtx ,  rtx ,  rtx ); 
#line 1516 "./insn-flags.h"
extern  rtx gen_sse2_umulv2siv2di3( rtx ,  rtx ,  rtx ); 
#line 1517 "./insn-flags.h"
extern  rtx gen_sse2_pmaddwd( rtx ,  rtx ,  rtx ); 
#line 1518 "./insn-flags.h"
extern  rtx gen_ashrv8hi3( rtx ,  rtx ,  rtx ); 
#line 1519 "./insn-flags.h"
extern  rtx gen_ashrv4si3( rtx ,  rtx ,  rtx ); 
#line 1520 "./insn-flags.h"
extern  rtx gen_lshrv8hi3( rtx ,  rtx ,  rtx ); 
#line 1521 "./insn-flags.h"
extern  rtx gen_lshrv4si3( rtx ,  rtx ,  rtx ); 
#line 1522 "./insn-flags.h"
extern  rtx gen_lshrv2di3( rtx ,  rtx ,  rtx ); 
#line 1523 "./insn-flags.h"
extern  rtx gen_ashlv8hi3( rtx ,  rtx ,  rtx ); 
#line 1524 "./insn-flags.h"
extern  rtx gen_ashlv4si3( rtx ,  rtx ,  rtx ); 
#line 1525 "./insn-flags.h"
extern  rtx gen_ashlv2di3( rtx ,  rtx ,  rtx ); 
#line 1526 "./insn-flags.h"
extern  rtx gen_sse2_ashlti3( rtx ,  rtx ,  rtx ); 
#line 1527 "./insn-flags.h"
extern  rtx gen_sse2_lshrti3( rtx ,  rtx ,  rtx ); 
#line 1528 "./insn-flags.h"
extern  rtx gen_sse2_eqv16qi3( rtx ,  rtx ,  rtx ); 
#line 1529 "./insn-flags.h"
extern  rtx gen_sse2_eqv8hi3( rtx ,  rtx ,  rtx ); 
#line 1530 "./insn-flags.h"
extern  rtx gen_sse2_eqv4si3( rtx ,  rtx ,  rtx ); 
#line 1531 "./insn-flags.h"
extern  rtx gen_sse2_gtv16qi3( rtx ,  rtx ,  rtx ); 
#line 1532 "./insn-flags.h"
extern  rtx gen_sse2_gtv8hi3( rtx ,  rtx ,  rtx ); 
#line 1533 "./insn-flags.h"
extern  rtx gen_sse2_gtv4si3( rtx ,  rtx ,  rtx ); 
#line 1534 "./insn-flags.h"
extern  rtx gen_sse2_nandv16qi3( rtx ,  rtx ,  rtx ); 
#line 1535 "./insn-flags.h"
extern  rtx gen_sse2_nandv8hi3( rtx ,  rtx ,  rtx ); 
#line 1536 "./insn-flags.h"
extern  rtx gen_sse2_nandv4si3( rtx ,  rtx ,  rtx ); 
#line 1537 "./insn-flags.h"
extern  rtx gen_sse2_nandv2di3( rtx ,  rtx ,  rtx ); 
#line 1538 "./insn-flags.h"
extern  rtx gen_sse2_packsswb( rtx ,  rtx ,  rtx ); 
#line 1539 "./insn-flags.h"
extern  rtx gen_sse2_packssdw( rtx ,  rtx ,  rtx ); 
#line 1540 "./insn-flags.h"
extern  rtx gen_sse2_packuswb( rtx ,  rtx ,  rtx ); 
#line 1541 "./insn-flags.h"
extern  rtx gen_sse2_punpckhbw( rtx ,  rtx ,  rtx ); 
#line 1542 "./insn-flags.h"
extern  rtx gen_sse2_punpcklbw( rtx ,  rtx ,  rtx ); 
#line 1543 "./insn-flags.h"
extern  rtx gen_sse2_punpckhwd( rtx ,  rtx ,  rtx ); 
#line 1544 "./insn-flags.h"
extern  rtx gen_sse2_punpcklwd( rtx ,  rtx ,  rtx ); 
#line 1545 "./insn-flags.h"
extern  rtx gen_sse2_punpckhdq( rtx ,  rtx ,  rtx ); 
#line 1546 "./insn-flags.h"
extern  rtx gen_sse2_punpckldq( rtx ,  rtx ,  rtx ); 
#line 1547 "./insn-flags.h"
extern  rtx gen_sse2_punpckhqdq( rtx ,  rtx ,  rtx ); 
#line 1548 "./insn-flags.h"
extern  rtx gen_sse2_punpcklqdq( rtx ,  rtx ,  rtx ); 
#line 1549 "./insn-flags.h"
extern  rtx gen_sse2_pextrw( rtx ,  rtx ,  rtx ); 
#line 1550 "./insn-flags.h"
extern  rtx gen_sse2_pshufd_1( rtx ,  rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 1551 "./insn-flags.h"
extern  rtx gen_sse2_pshuflw_1( rtx ,  rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 1552 "./insn-flags.h"
extern  rtx gen_sse2_pshufhw_1( rtx ,  rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 1553 "./insn-flags.h"
extern  rtx gen_sse2_loadld( rtx ,  rtx ,  rtx ); 
#line 1554 "./insn-flags.h"
extern  rtx gen_sse2_stored( rtx ,  rtx ); 
#line 1555 "./insn-flags.h"
extern  rtx gen_sse2_uavgv16qi3( rtx ,  rtx ,  rtx ); 
#line 1556 "./insn-flags.h"
extern  rtx gen_sse2_uavgv8hi3( rtx ,  rtx ,  rtx ); 
#line 1557 "./insn-flags.h"
extern  rtx gen_sse2_psadbw( rtx ,  rtx ,  rtx ); 
#line 1558 "./insn-flags.h"
extern  rtx gen_sse_movmskps( rtx ,  rtx ); 
#line 1559 "./insn-flags.h"
extern  rtx gen_sse2_movmskpd( rtx ,  rtx ); 
#line 1560 "./insn-flags.h"
extern  rtx gen_sse2_pmovmskb( rtx ,  rtx ); 
#line 1561 "./insn-flags.h"
extern  rtx gen_sse_ldmxcsr( rtx ); 
#line 1562 "./insn-flags.h"
extern  rtx gen_sse_stmxcsr( rtx ); 
#line 1563 "./insn-flags.h"
extern  rtx gen_sse2_clflush( rtx ); 
#line 1564 "./insn-flags.h"
extern  rtx gen_sse3_mwait( rtx ,  rtx ); 
#line 1565 "./insn-flags.h"
extern  rtx gen_sse3_monitor( rtx ,  rtx ,  rtx ); 
#line 1566 "./insn-flags.h"
extern  rtx gen_sse_movntdi( rtx ,  rtx ); 
#line 1567 "./insn-flags.h"
extern  rtx gen_mmx_addv2sf3( rtx ,  rtx ,  rtx ); 
#line 1568 "./insn-flags.h"
extern  rtx gen_mmx_subv2sf3( rtx ,  rtx ,  rtx ); 
#line 1569 "./insn-flags.h"
extern  rtx gen_mmx_mulv2sf3( rtx ,  rtx ,  rtx ); 
#line 1570 "./insn-flags.h"
extern  rtx gen_mmx_smaxv2sf3( rtx ,  rtx ,  rtx ); 
#line 1571 "./insn-flags.h"
extern  rtx gen_mmx_sminv2sf3( rtx ,  rtx ,  rtx ); 
#line 1572 "./insn-flags.h"
extern  rtx gen_mmx_rcpv2sf2( rtx ,  rtx ); 
#line 1573 "./insn-flags.h"
extern  rtx gen_mmx_rcpit1v2sf3( rtx ,  rtx ,  rtx ); 
#line 1574 "./insn-flags.h"
extern  rtx gen_mmx_rcpit2v2sf3( rtx ,  rtx ,  rtx ); 
#line 1575 "./insn-flags.h"
extern  rtx gen_mmx_rsqrtv2sf2( rtx ,  rtx ); 
#line 1576 "./insn-flags.h"
extern  rtx gen_mmx_rsqit1v2sf3( rtx ,  rtx ,  rtx ); 
#line 1577 "./insn-flags.h"
extern  rtx gen_mmx_haddv2sf3( rtx ,  rtx ,  rtx ); 
#line 1578 "./insn-flags.h"
extern  rtx gen_mmx_hsubv2sf3( rtx ,  rtx ,  rtx ); 
#line 1579 "./insn-flags.h"
extern  rtx gen_mmx_addsubv2sf3( rtx ,  rtx ,  rtx ); 
#line 1580 "./insn-flags.h"
extern  rtx gen_mmx_gtv2sf3( rtx ,  rtx ,  rtx ); 
#line 1581 "./insn-flags.h"
extern  rtx gen_mmx_gev2sf3( rtx ,  rtx ,  rtx ); 
#line 1582 "./insn-flags.h"
extern  rtx gen_mmx_eqv2sf3( rtx ,  rtx ,  rtx ); 
#line 1583 "./insn-flags.h"
extern  rtx gen_mmx_pf2id( rtx ,  rtx ); 
#line 1584 "./insn-flags.h"
extern  rtx gen_mmx_pf2iw( rtx ,  rtx ); 
#line 1585 "./insn-flags.h"
extern  rtx gen_mmx_pi2fw( rtx ,  rtx ); 
#line 1586 "./insn-flags.h"
extern  rtx gen_mmx_floatv2si2( rtx ,  rtx ); 
#line 1587 "./insn-flags.h"
extern  rtx gen_mmx_pswapdv2sf2( rtx ,  rtx ); 
#line 1588 "./insn-flags.h"
extern  rtx gen_mmx_addv8qi3( rtx ,  rtx ,  rtx ); 
#line 1589 "./insn-flags.h"
extern  rtx gen_mmx_addv4hi3( rtx ,  rtx ,  rtx ); 
#line 1590 "./insn-flags.h"
extern  rtx gen_mmx_addv2si3( rtx ,  rtx ,  rtx ); 
#line 1591 "./insn-flags.h"
extern  rtx gen_mmx_adddi3( rtx ,  rtx ,  rtx ); 
#line 1592 "./insn-flags.h"
extern  rtx gen_mmx_ssaddv8qi3( rtx ,  rtx ,  rtx ); 
#line 1593 "./insn-flags.h"
extern  rtx gen_mmx_ssaddv4hi3( rtx ,  rtx ,  rtx ); 
#line 1594 "./insn-flags.h"
extern  rtx gen_mmx_usaddv8qi3( rtx ,  rtx ,  rtx ); 
#line 1595 "./insn-flags.h"
extern  rtx gen_mmx_usaddv4hi3( rtx ,  rtx ,  rtx ); 
#line 1596 "./insn-flags.h"
extern  rtx gen_mmx_subv8qi3( rtx ,  rtx ,  rtx ); 
#line 1597 "./insn-flags.h"
extern  rtx gen_mmx_subv4hi3( rtx ,  rtx ,  rtx ); 
#line 1598 "./insn-flags.h"
extern  rtx gen_mmx_subv2si3( rtx ,  rtx ,  rtx ); 
#line 1599 "./insn-flags.h"
extern  rtx gen_mmx_subdi3( rtx ,  rtx ,  rtx ); 
#line 1600 "./insn-flags.h"
extern  rtx gen_mmx_sssubv8qi3( rtx ,  rtx ,  rtx ); 
#line 1601 "./insn-flags.h"
extern  rtx gen_mmx_sssubv4hi3( rtx ,  rtx ,  rtx ); 
#line 1602 "./insn-flags.h"
extern  rtx gen_mmx_ussubv8qi3( rtx ,  rtx ,  rtx ); 
#line 1603 "./insn-flags.h"
extern  rtx gen_mmx_ussubv4hi3( rtx ,  rtx ,  rtx ); 
#line 1604 "./insn-flags.h"
extern  rtx gen_mmx_mulv4hi3( rtx ,  rtx ,  rtx ); 
#line 1605 "./insn-flags.h"
extern  rtx gen_mmx_smulv4hi3_highpart( rtx ,  rtx ,  rtx ); 
#line 1606 "./insn-flags.h"
extern  rtx gen_mmx_umulv4hi3_highpart( rtx ,  rtx ,  rtx ); 
#line 1607 "./insn-flags.h"
extern  rtx gen_mmx_pmaddwd( rtx ,  rtx ,  rtx ); 
#line 1608 "./insn-flags.h"
extern  rtx gen_mmx_pmulhrwv4hi3( rtx ,  rtx ,  rtx ); 
#line 1609 "./insn-flags.h"
extern  rtx gen_sse2_umulsidi3( rtx ,  rtx ,  rtx ); 
#line 1610 "./insn-flags.h"
extern  rtx gen_mmx_umaxv8qi3( rtx ,  rtx ,  rtx ); 
#line 1611 "./insn-flags.h"
extern  rtx gen_mmx_smaxv4hi3( rtx ,  rtx ,  rtx ); 
#line 1612 "./insn-flags.h"
extern  rtx gen_mmx_uminv8qi3( rtx ,  rtx ,  rtx ); 
#line 1613 "./insn-flags.h"
extern  rtx gen_mmx_sminv4hi3( rtx ,  rtx ,  rtx ); 
#line 1614 "./insn-flags.h"
extern  rtx gen_mmx_ashrv4hi3( rtx ,  rtx ,  rtx ); 
#line 1615 "./insn-flags.h"
extern  rtx gen_mmx_ashrv2si3( rtx ,  rtx ,  rtx ); 
#line 1616 "./insn-flags.h"
extern  rtx gen_mmx_lshrv4hi3( rtx ,  rtx ,  rtx ); 
#line 1617 "./insn-flags.h"
extern  rtx gen_mmx_lshrv2si3( rtx ,  rtx ,  rtx ); 
#line 1618 "./insn-flags.h"
extern  rtx gen_mmx_lshrdi3( rtx ,  rtx ,  rtx ); 
#line 1619 "./insn-flags.h"
extern  rtx gen_mmx_ashlv4hi3( rtx ,  rtx ,  rtx ); 
#line 1620 "./insn-flags.h"
extern  rtx gen_mmx_ashlv2si3( rtx ,  rtx ,  rtx ); 
#line 1621 "./insn-flags.h"
extern  rtx gen_mmx_ashldi3( rtx ,  rtx ,  rtx ); 
#line 1622 "./insn-flags.h"
extern  rtx gen_mmx_eqv8qi3( rtx ,  rtx ,  rtx ); 
#line 1623 "./insn-flags.h"
extern  rtx gen_mmx_eqv4hi3( rtx ,  rtx ,  rtx ); 
#line 1624 "./insn-flags.h"
extern  rtx gen_mmx_eqv2si3( rtx ,  rtx ,  rtx ); 
#line 1625 "./insn-flags.h"
extern  rtx gen_mmx_gtv8qi3( rtx ,  rtx ,  rtx ); 
#line 1626 "./insn-flags.h"
extern  rtx gen_mmx_gtv4hi3( rtx ,  rtx ,  rtx ); 
#line 1627 "./insn-flags.h"
extern  rtx gen_mmx_gtv2si3( rtx ,  rtx ,  rtx ); 
#line 1628 "./insn-flags.h"
extern  rtx gen_mmx_andv8qi3( rtx ,  rtx ,  rtx ); 
#line 1629 "./insn-flags.h"
extern  rtx gen_mmx_andv4hi3( rtx ,  rtx ,  rtx ); 
#line 1630 "./insn-flags.h"
extern  rtx gen_mmx_andv2si3( rtx ,  rtx ,  rtx ); 
#line 1631 "./insn-flags.h"
extern  rtx gen_mmx_nandv8qi3( rtx ,  rtx ,  rtx ); 
#line 1632 "./insn-flags.h"
extern  rtx gen_mmx_nandv4hi3( rtx ,  rtx ,  rtx ); 
#line 1633 "./insn-flags.h"
extern  rtx gen_mmx_nandv2si3( rtx ,  rtx ,  rtx ); 
#line 1634 "./insn-flags.h"
extern  rtx gen_mmx_iorv8qi3( rtx ,  rtx ,  rtx ); 
#line 1635 "./insn-flags.h"
extern  rtx gen_mmx_iorv4hi3( rtx ,  rtx ,  rtx ); 
#line 1636 "./insn-flags.h"
extern  rtx gen_mmx_iorv2si3( rtx ,  rtx ,  rtx ); 
#line 1637 "./insn-flags.h"
extern  rtx gen_mmx_xorv8qi3( rtx ,  rtx ,  rtx ); 
#line 1638 "./insn-flags.h"
extern  rtx gen_mmx_xorv4hi3( rtx ,  rtx ,  rtx ); 
#line 1639 "./insn-flags.h"
extern  rtx gen_mmx_xorv2si3( rtx ,  rtx ,  rtx ); 
#line 1640 "./insn-flags.h"
extern  rtx gen_mmx_packsswb( rtx ,  rtx ,  rtx ); 
#line 1641 "./insn-flags.h"
extern  rtx gen_mmx_packssdw( rtx ,  rtx ,  rtx ); 
#line 1642 "./insn-flags.h"
extern  rtx gen_mmx_packuswb( rtx ,  rtx ,  rtx ); 
#line 1643 "./insn-flags.h"
extern  rtx gen_mmx_punpckhbw( rtx ,  rtx ,  rtx ); 
#line 1644 "./insn-flags.h"
extern  rtx gen_mmx_punpcklbw( rtx ,  rtx ,  rtx ); 
#line 1645 "./insn-flags.h"
extern  rtx gen_mmx_punpckhwd( rtx ,  rtx ,  rtx ); 
#line 1646 "./insn-flags.h"
extern  rtx gen_mmx_punpcklwd( rtx ,  rtx ,  rtx ); 
#line 1647 "./insn-flags.h"
extern  rtx gen_mmx_punpckhdq( rtx ,  rtx ,  rtx ); 
#line 1648 "./insn-flags.h"
extern  rtx gen_mmx_punpckldq( rtx ,  rtx ,  rtx ); 
#line 1649 "./insn-flags.h"
extern  rtx gen_mmx_pextrw( rtx ,  rtx ,  rtx ); 
#line 1650 "./insn-flags.h"
extern  rtx gen_mmx_pshufw_1( rtx ,  rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 1651 "./insn-flags.h"
extern  rtx gen_mmx_pswapdv2si2( rtx ,  rtx ); 
#line 1652 "./insn-flags.h"
extern  rtx gen_mmx_uavgv8qi3( rtx ,  rtx ,  rtx ); 
#line 1653 "./insn-flags.h"
extern  rtx gen_mmx_uavgv4hi3( rtx ,  rtx ,  rtx ); 
#line 1654 "./insn-flags.h"
extern  rtx gen_mmx_psadbw( rtx ,  rtx ,  rtx ); 
#line 1655 "./insn-flags.h"
extern  rtx gen_mmx_pmovmskb( rtx ,  rtx ); 
#line 1656 "./insn-flags.h"
extern  rtx gen_mmx_emms(void ); 
#line 1657 "./insn-flags.h"
extern  rtx gen_mmx_femms(void ); 
#line 1658 "./insn-flags.h"
extern  rtx gen_sync_compare_and_swapqi( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1659 "./insn-flags.h"
extern  rtx gen_sync_compare_and_swaphi( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1660 "./insn-flags.h"
extern  rtx gen_sync_compare_and_swapsi( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1661 "./insn-flags.h"
static __inline__  rtx gen_sync_compare_and_swapdi( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1663 "./insn-flags.h"
static __inline__  rtx gen_sync_compare_and_swapdi( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) ,  rtx d __attribute__  (( __unused__ )) )  {

#line 1664 "./insn-flags.h"
return 0; }
 
#line 1666 "./insn-flags.h"
extern  rtx gen_sync_old_addqi( rtx ,  rtx ,  rtx ); 
#line 1667 "./insn-flags.h"
extern  rtx gen_sync_old_addhi( rtx ,  rtx ,  rtx ); 
#line 1668 "./insn-flags.h"
extern  rtx gen_sync_old_addsi( rtx ,  rtx ,  rtx ); 
#line 1669 "./insn-flags.h"
static __inline__  rtx gen_sync_old_adddi( rtx ,  rtx ,  rtx ); 
#line 1671 "./insn-flags.h"
static __inline__  rtx gen_sync_old_adddi( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) )  {

#line 1672 "./insn-flags.h"
return 0; }
 
#line 1674 "./insn-flags.h"
extern  rtx gen_sync_lock_test_and_setqi( rtx ,  rtx ,  rtx ); 
#line 1675 "./insn-flags.h"
extern  rtx gen_sync_lock_test_and_sethi( rtx ,  rtx ,  rtx ); 
#line 1676 "./insn-flags.h"
extern  rtx gen_sync_lock_test_and_setsi( rtx ,  rtx ,  rtx ); 
#line 1677 "./insn-flags.h"
static __inline__  rtx gen_sync_lock_test_and_setdi( rtx ,  rtx ,  rtx ); 
#line 1679 "./insn-flags.h"
static __inline__  rtx gen_sync_lock_test_and_setdi( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) )  {

#line 1680 "./insn-flags.h"
return 0; }
 
#line 1682 "./insn-flags.h"
extern  rtx gen_sync_addqi( rtx ,  rtx ); 
#line 1683 "./insn-flags.h"
extern  rtx gen_sync_addhi( rtx ,  rtx ); 
#line 1684 "./insn-flags.h"
extern  rtx gen_sync_addsi( rtx ,  rtx ); 
#line 1685 "./insn-flags.h"
static __inline__  rtx gen_sync_adddi( rtx ,  rtx ); 
#line 1687 "./insn-flags.h"
static __inline__  rtx gen_sync_adddi( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1688 "./insn-flags.h"
return 0; }
 
#line 1690 "./insn-flags.h"
extern  rtx gen_sync_subqi( rtx ,  rtx ); 
#line 1691 "./insn-flags.h"
extern  rtx gen_sync_subhi( rtx ,  rtx ); 
#line 1692 "./insn-flags.h"
extern  rtx gen_sync_subsi( rtx ,  rtx ); 
#line 1693 "./insn-flags.h"
static __inline__  rtx gen_sync_subdi( rtx ,  rtx ); 
#line 1695 "./insn-flags.h"
static __inline__  rtx gen_sync_subdi( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1696 "./insn-flags.h"
return 0; }
 
#line 1698 "./insn-flags.h"
extern  rtx gen_sync_iorqi( rtx ,  rtx ); 
#line 1699 "./insn-flags.h"
extern  rtx gen_sync_iorhi( rtx ,  rtx ); 
#line 1700 "./insn-flags.h"
extern  rtx gen_sync_iorsi( rtx ,  rtx ); 
#line 1701 "./insn-flags.h"
static __inline__  rtx gen_sync_iordi( rtx ,  rtx ); 
#line 1703 "./insn-flags.h"
static __inline__  rtx gen_sync_iordi( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1704 "./insn-flags.h"
return 0; }
 
#line 1706 "./insn-flags.h"
extern  rtx gen_sync_andqi( rtx ,  rtx ); 
#line 1707 "./insn-flags.h"
extern  rtx gen_sync_andhi( rtx ,  rtx ); 
#line 1708 "./insn-flags.h"
extern  rtx gen_sync_andsi( rtx ,  rtx ); 
#line 1709 "./insn-flags.h"
static __inline__  rtx gen_sync_anddi( rtx ,  rtx ); 
#line 1711 "./insn-flags.h"
static __inline__  rtx gen_sync_anddi( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1712 "./insn-flags.h"
return 0; }
 
#line 1714 "./insn-flags.h"
extern  rtx gen_sync_xorqi( rtx ,  rtx ); 
#line 1715 "./insn-flags.h"
extern  rtx gen_sync_xorhi( rtx ,  rtx ); 
#line 1716 "./insn-flags.h"
extern  rtx gen_sync_xorsi( rtx ,  rtx ); 
#line 1717 "./insn-flags.h"
static __inline__  rtx gen_sync_xordi( rtx ,  rtx ); 
#line 1719 "./insn-flags.h"
static __inline__  rtx gen_sync_xordi( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1720 "./insn-flags.h"
return 0; }
 
#line 1722 "./insn-flags.h"
static __inline__  rtx gen_cmpti( rtx ,  rtx ); 
#line 1724 "./insn-flags.h"
static __inline__  rtx gen_cmpti( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1725 "./insn-flags.h"
return 0; }
 
#line 1727 "./insn-flags.h"
extern  rtx gen_cmpdi( rtx ,  rtx ); 
#line 1728 "./insn-flags.h"
extern  rtx gen_cmpsi( rtx ,  rtx ); 
#line 1729 "./insn-flags.h"
extern  rtx gen_cmphi( rtx ,  rtx ); 
#line 1730 "./insn-flags.h"
extern  rtx gen_cmpqi( rtx ,  rtx ); 
#line 1731 "./insn-flags.h"
static __inline__  rtx gen_cmpdi_1_rex64( rtx ,  rtx ); 
#line 1733 "./insn-flags.h"
static __inline__  rtx gen_cmpdi_1_rex64( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1734 "./insn-flags.h"
return 0; }
 
#line 1736 "./insn-flags.h"
extern  rtx gen_cmpsi_1( rtx ,  rtx ); 
#line 1737 "./insn-flags.h"
extern  rtx gen_cmpqi_ext_3( rtx ,  rtx ); 
#line 1738 "./insn-flags.h"
extern  rtx gen_cmpxf( rtx ,  rtx ); 
#line 1739 "./insn-flags.h"
extern  rtx gen_cmpdf( rtx ,  rtx ); 
#line 1740 "./insn-flags.h"
extern  rtx gen_cmpsf( rtx ,  rtx ); 
#line 1741 "./insn-flags.h"
extern  rtx gen_movsi( rtx ,  rtx ); 
#line 1742 "./insn-flags.h"
extern  rtx gen_movhi( rtx ,  rtx ); 
#line 1743 "./insn-flags.h"
extern  rtx gen_movstricthi( rtx ,  rtx ); 
#line 1744 "./insn-flags.h"
extern  rtx gen_movqi( rtx ,  rtx ); 
#line 1745 "./insn-flags.h"
extern  rtx gen_reload_outqi( rtx ,  rtx ,  rtx ); 
#line 1746 "./insn-flags.h"
extern  rtx gen_movstrictqi( rtx ,  rtx ); 
#line 1747 "./insn-flags.h"
extern  rtx gen_movdi( rtx ,  rtx ); 
#line 1748 "./insn-flags.h"
extern  rtx gen_movti( rtx ,  rtx ); 
#line 1749 "./insn-flags.h"
extern  rtx gen_movsf( rtx ,  rtx ); 
#line 1750 "./insn-flags.h"
extern  rtx gen_movdf( rtx ,  rtx ); 
#line 1751 "./insn-flags.h"
extern  rtx gen_movxf( rtx ,  rtx ); 
#line 1752 "./insn-flags.h"
static __inline__  rtx gen_movtf( rtx ,  rtx ); 
#line 1754 "./insn-flags.h"
static __inline__  rtx gen_movtf( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1755 "./insn-flags.h"
return 0; }
 
#line 1757 "./insn-flags.h"
extern  rtx gen_zero_extendhisi2( rtx ,  rtx ); 
#line 1758 "./insn-flags.h"
extern  rtx gen_zero_extendqihi2( rtx ,  rtx ); 
#line 1759 "./insn-flags.h"
extern  rtx gen_zero_extendqisi2( rtx ,  rtx ); 
#line 1760 "./insn-flags.h"
extern  rtx gen_zero_extendsidi2( rtx ,  rtx ); 
#line 1761 "./insn-flags.h"
extern  rtx gen_extendsidi2( rtx ,  rtx ); 
#line 1762 "./insn-flags.h"
extern  rtx gen_extendsfdf2( rtx ,  rtx ); 
#line 1763 "./insn-flags.h"
extern  rtx gen_extendsfxf2( rtx ,  rtx ); 
#line 1764 "./insn-flags.h"
extern  rtx gen_extenddfxf2( rtx ,  rtx ); 
#line 1765 "./insn-flags.h"
extern  rtx gen_truncdfsf2( rtx ,  rtx ); 
#line 1766 "./insn-flags.h"
extern  rtx gen_truncdfsf2_with_temp( rtx ,  rtx ,  rtx ); 
#line 1767 "./insn-flags.h"
extern  rtx gen_truncxfsf2( rtx ,  rtx ); 
#line 1768 "./insn-flags.h"
extern  rtx gen_truncxfdf2( rtx ,  rtx ); 
#line 1769 "./insn-flags.h"
extern  rtx gen_fix_truncxfdi2( rtx ,  rtx ); 
#line 1770 "./insn-flags.h"
extern  rtx gen_fix_truncsfdi2( rtx ,  rtx ); 
#line 1771 "./insn-flags.h"
extern  rtx gen_fix_truncdfdi2( rtx ,  rtx ); 
#line 1772 "./insn-flags.h"
extern  rtx gen_fix_truncxfsi2( rtx ,  rtx ); 
#line 1773 "./insn-flags.h"
extern  rtx gen_fix_truncsfsi2( rtx ,  rtx ); 
#line 1774 "./insn-flags.h"
extern  rtx gen_fix_truncdfsi2( rtx ,  rtx ); 
#line 1775 "./insn-flags.h"
extern  rtx gen_fix_truncsfhi2( rtx ,  rtx ); 
#line 1776 "./insn-flags.h"
extern  rtx gen_fix_truncdfhi2( rtx ,  rtx ); 
#line 1777 "./insn-flags.h"
extern  rtx gen_fix_truncxfhi2( rtx ,  rtx ); 
#line 1778 "./insn-flags.h"
extern  rtx gen_floathisf2( rtx ,  rtx ); 
#line 1779 "./insn-flags.h"
extern  rtx gen_floatsisf2( rtx ,  rtx ); 
#line 1780 "./insn-flags.h"
extern  rtx gen_floatdisf2( rtx ,  rtx ); 
#line 1781 "./insn-flags.h"
extern  rtx gen_floathidf2( rtx ,  rtx ); 
#line 1782 "./insn-flags.h"
extern  rtx gen_floatsidf2( rtx ,  rtx ); 
#line 1783 "./insn-flags.h"
extern  rtx gen_floatdidf2( rtx ,  rtx ); 
#line 1784 "./insn-flags.h"
extern  rtx gen_floatunssisf2( rtx ,  rtx ); 
#line 1785 "./insn-flags.h"
static __inline__  rtx gen_floatunsdisf2( rtx ,  rtx ); 
#line 1787 "./insn-flags.h"
static __inline__  rtx gen_floatunsdisf2( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1788 "./insn-flags.h"
return 0; }
 
#line 1790 "./insn-flags.h"
static __inline__  rtx gen_floatunsdidf2( rtx ,  rtx ); 
#line 1792 "./insn-flags.h"
static __inline__  rtx gen_floatunsdidf2( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1793 "./insn-flags.h"
return 0; }
 
#line 1795 "./insn-flags.h"
static __inline__  rtx gen_addti3( rtx ,  rtx ,  rtx ); 
#line 1797 "./insn-flags.h"
static __inline__  rtx gen_addti3( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) )  {

#line 1798 "./insn-flags.h"
return 0; }
 
#line 1800 "./insn-flags.h"
extern  rtx gen_adddi3( rtx ,  rtx ,  rtx ); 
#line 1801 "./insn-flags.h"
extern  rtx gen_addsi3( rtx ,  rtx ,  rtx ); 
#line 1802 "./insn-flags.h"
extern  rtx gen_addhi3( rtx ,  rtx ,  rtx ); 
#line 1803 "./insn-flags.h"
extern  rtx gen_addqi3( rtx ,  rtx ,  rtx ); 
#line 1804 "./insn-flags.h"
extern  rtx gen_addxf3( rtx ,  rtx ,  rtx ); 
#line 1805 "./insn-flags.h"
extern  rtx gen_adddf3( rtx ,  rtx ,  rtx ); 
#line 1806 "./insn-flags.h"
extern  rtx gen_addsf3( rtx ,  rtx ,  rtx ); 
#line 1807 "./insn-flags.h"
static __inline__  rtx gen_subti3( rtx ,  rtx ,  rtx ); 
#line 1809 "./insn-flags.h"
static __inline__  rtx gen_subti3( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) )  {

#line 1810 "./insn-flags.h"
return 0; }
 
#line 1812 "./insn-flags.h"
extern  rtx gen_subdi3( rtx ,  rtx ,  rtx ); 
#line 1813 "./insn-flags.h"
extern  rtx gen_subsi3( rtx ,  rtx ,  rtx ); 
#line 1814 "./insn-flags.h"
extern  rtx gen_subhi3( rtx ,  rtx ,  rtx ); 
#line 1815 "./insn-flags.h"
extern  rtx gen_subqi3( rtx ,  rtx ,  rtx ); 
#line 1816 "./insn-flags.h"
extern  rtx gen_subxf3( rtx ,  rtx ,  rtx ); 
#line 1817 "./insn-flags.h"
extern  rtx gen_subdf3( rtx ,  rtx ,  rtx ); 
#line 1818 "./insn-flags.h"
extern  rtx gen_subsf3( rtx ,  rtx ,  rtx ); 
#line 1819 "./insn-flags.h"
static __inline__  rtx gen_muldi3( rtx ,  rtx ,  rtx ); 
#line 1821 "./insn-flags.h"
static __inline__  rtx gen_muldi3( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) )  {

#line 1822 "./insn-flags.h"
return 0; }
 
#line 1824 "./insn-flags.h"
extern  rtx gen_mulsi3( rtx ,  rtx ,  rtx ); 
#line 1825 "./insn-flags.h"
extern  rtx gen_mulhi3( rtx ,  rtx ,  rtx ); 
#line 1826 "./insn-flags.h"
extern  rtx gen_mulqi3( rtx ,  rtx ,  rtx ); 
#line 1827 "./insn-flags.h"
extern  rtx gen_umulqihi3( rtx ,  rtx ,  rtx ); 
#line 1828 "./insn-flags.h"
extern  rtx gen_mulqihi3( rtx ,  rtx ,  rtx ); 
#line 1829 "./insn-flags.h"
static __inline__  rtx gen_umulditi3( rtx ,  rtx ,  rtx ); 
#line 1831 "./insn-flags.h"
static __inline__  rtx gen_umulditi3( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) )  {

#line 1832 "./insn-flags.h"
return 0; }
 
#line 1834 "./insn-flags.h"
extern  rtx gen_umulsidi3( rtx ,  rtx ,  rtx ); 
#line 1835 "./insn-flags.h"
static __inline__  rtx gen_mulditi3( rtx ,  rtx ,  rtx ); 
#line 1837 "./insn-flags.h"
static __inline__  rtx gen_mulditi3( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) )  {

#line 1838 "./insn-flags.h"
return 0; }
 
#line 1840 "./insn-flags.h"
extern  rtx gen_mulsidi3( rtx ,  rtx ,  rtx ); 
#line 1841 "./insn-flags.h"
static __inline__  rtx gen_umuldi3_highpart( rtx ,  rtx ,  rtx ); 
#line 1843 "./insn-flags.h"
static __inline__  rtx gen_umuldi3_highpart( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) )  {

#line 1844 "./insn-flags.h"
return 0; }
 
#line 1846 "./insn-flags.h"
extern  rtx gen_umulsi3_highpart( rtx ,  rtx ,  rtx ); 
#line 1847 "./insn-flags.h"
static __inline__  rtx gen_smuldi3_highpart( rtx ,  rtx ,  rtx ); 
#line 1849 "./insn-flags.h"
static __inline__  rtx gen_smuldi3_highpart( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) )  {

#line 1850 "./insn-flags.h"
return 0; }
 
#line 1852 "./insn-flags.h"
extern  rtx gen_smulsi3_highpart( rtx ,  rtx ,  rtx ); 
#line 1853 "./insn-flags.h"
extern  rtx gen_mulxf3( rtx ,  rtx ,  rtx ); 
#line 1854 "./insn-flags.h"
extern  rtx gen_muldf3( rtx ,  rtx ,  rtx ); 
#line 1855 "./insn-flags.h"
extern  rtx gen_mulsf3( rtx ,  rtx ,  rtx ); 
#line 1856 "./insn-flags.h"
extern  rtx gen_divxf3( rtx ,  rtx ,  rtx ); 
#line 1857 "./insn-flags.h"
extern  rtx gen_divdf3( rtx ,  rtx ,  rtx ); 
#line 1858 "./insn-flags.h"
extern  rtx gen_divsf3( rtx ,  rtx ,  rtx ); 
#line 1859 "./insn-flags.h"
static __inline__  rtx gen_divmoddi4( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1861 "./insn-flags.h"
static __inline__  rtx gen_divmoddi4( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) ,  rtx d __attribute__  (( __unused__ )) )  {

#line 1862 "./insn-flags.h"
return 0; }
 
#line 1864 "./insn-flags.h"
extern  rtx gen_divmodsi4( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1865 "./insn-flags.h"
extern  rtx gen_udivmodhi4( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1866 "./insn-flags.h"
extern  rtx gen_testsi_ccno_1( rtx ,  rtx ); 
#line 1867 "./insn-flags.h"
extern  rtx gen_testqi_ccz_1( rtx ,  rtx ); 
#line 1868 "./insn-flags.h"
extern  rtx gen_testqi_ext_ccno_0( rtx ,  rtx ); 
#line 1869 "./insn-flags.h"
static __inline__  rtx gen_anddi3( rtx ,  rtx ,  rtx ); 
#line 1871 "./insn-flags.h"
static __inline__  rtx gen_anddi3( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) )  {

#line 1872 "./insn-flags.h"
return 0; }
 
#line 1874 "./insn-flags.h"
extern  rtx gen_andsi3( rtx ,  rtx ,  rtx ); 
#line 1875 "./insn-flags.h"
extern  rtx gen_andhi3( rtx ,  rtx ,  rtx ); 
#line 1876 "./insn-flags.h"
extern  rtx gen_andqi3( rtx ,  rtx ,  rtx ); 
#line 1877 "./insn-flags.h"
static __inline__  rtx gen_iordi3( rtx ,  rtx ,  rtx ); 
#line 1879 "./insn-flags.h"
static __inline__  rtx gen_iordi3( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) )  {

#line 1880 "./insn-flags.h"
return 0; }
 
#line 1882 "./insn-flags.h"
extern  rtx gen_iorsi3( rtx ,  rtx ,  rtx ); 
#line 1883 "./insn-flags.h"
extern  rtx gen_iorhi3( rtx ,  rtx ,  rtx ); 
#line 1884 "./insn-flags.h"
extern  rtx gen_iorqi3( rtx ,  rtx ,  rtx ); 
#line 1885 "./insn-flags.h"
static __inline__  rtx gen_xordi3( rtx ,  rtx ,  rtx ); 
#line 1887 "./insn-flags.h"
static __inline__  rtx gen_xordi3( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) )  {

#line 1888 "./insn-flags.h"
return 0; }
 
#line 1890 "./insn-flags.h"
extern  rtx gen_xorsi3( rtx ,  rtx ,  rtx ); 
#line 1891 "./insn-flags.h"
extern  rtx gen_xorhi3( rtx ,  rtx ,  rtx ); 
#line 1892 "./insn-flags.h"
extern  rtx gen_xorqi3( rtx ,  rtx ,  rtx ); 
#line 1893 "./insn-flags.h"
extern  rtx gen_xorqi_cc_ext_1( rtx ,  rtx ,  rtx ); 
#line 1894 "./insn-flags.h"
static __inline__  rtx gen_negti2( rtx ,  rtx ); 
#line 1896 "./insn-flags.h"
static __inline__  rtx gen_negti2( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1897 "./insn-flags.h"
return 0; }
 
#line 1899 "./insn-flags.h"
extern  rtx gen_negdi2( rtx ,  rtx ); 
#line 1900 "./insn-flags.h"
extern  rtx gen_negsi2( rtx ,  rtx ); 
#line 1901 "./insn-flags.h"
extern  rtx gen_neghi2( rtx ,  rtx ); 
#line 1902 "./insn-flags.h"
extern  rtx gen_negqi2( rtx ,  rtx ); 
#line 1903 "./insn-flags.h"
extern  rtx gen_negsf2( rtx ,  rtx ); 
#line 1904 "./insn-flags.h"
extern  rtx gen_abssf2( rtx ,  rtx ); 
#line 1905 "./insn-flags.h"
extern  rtx gen_copysignsf3( rtx ,  rtx ,  rtx ); 
#line 1906 "./insn-flags.h"
extern  rtx gen_negdf2( rtx ,  rtx ); 
#line 1907 "./insn-flags.h"
extern  rtx gen_absdf2( rtx ,  rtx ); 
#line 1908 "./insn-flags.h"
extern  rtx gen_copysigndf3( rtx ,  rtx ,  rtx ); 
#line 1909 "./insn-flags.h"
extern  rtx gen_negxf2( rtx ,  rtx ); 
#line 1910 "./insn-flags.h"
extern  rtx gen_absxf2( rtx ,  rtx ); 
#line 1911 "./insn-flags.h"
static __inline__  rtx gen_one_cmpldi2( rtx ,  rtx ); 
#line 1913 "./insn-flags.h"
static __inline__  rtx gen_one_cmpldi2( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 1914 "./insn-flags.h"
return 0; }
 
#line 1916 "./insn-flags.h"
extern  rtx gen_one_cmplsi2( rtx ,  rtx ); 
#line 1917 "./insn-flags.h"
extern  rtx gen_one_cmplhi2( rtx ,  rtx ); 
#line 1918 "./insn-flags.h"
extern  rtx gen_one_cmplqi2( rtx ,  rtx ); 
#line 1919 "./insn-flags.h"
static __inline__  rtx gen_ashlti3( rtx ,  rtx ,  rtx ); 
#line 1921 "./insn-flags.h"
static __inline__  rtx gen_ashlti3( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) )  {

#line 1922 "./insn-flags.h"
return 0; }
 
#line 1924 "./insn-flags.h"
static __inline__  rtx gen_x86_64_shift_adj( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1926 "./insn-flags.h"
static __inline__  rtx gen_x86_64_shift_adj( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) ,  rtx d __attribute__  (( __unused__ )) )  {

#line 1927 "./insn-flags.h"
return 0; }
 
#line 1929 "./insn-flags.h"
extern  rtx gen_ashldi3( rtx ,  rtx ,  rtx ); 
#line 1930 "./insn-flags.h"
extern  rtx gen_x86_shift_adj_1( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1931 "./insn-flags.h"
extern  rtx gen_x86_shift_adj_2( rtx ,  rtx ,  rtx ); 
#line 1932 "./insn-flags.h"
extern  rtx gen_ashlsi3( rtx ,  rtx ,  rtx ); 
#line 1933 "./insn-flags.h"
extern  rtx gen_ashlhi3( rtx ,  rtx ,  rtx ); 
#line 1934 "./insn-flags.h"
extern  rtx gen_ashlqi3( rtx ,  rtx ,  rtx ); 
#line 1935 "./insn-flags.h"
static __inline__  rtx gen_ashrti3( rtx ,  rtx ,  rtx ); 
#line 1937 "./insn-flags.h"
static __inline__  rtx gen_ashrti3( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) )  {

#line 1938 "./insn-flags.h"
return 0; }
 
#line 1940 "./insn-flags.h"
extern  rtx gen_ashrdi3( rtx ,  rtx ,  rtx ); 
#line 1941 "./insn-flags.h"
extern  rtx gen_x86_shift_adj_3( rtx ,  rtx ,  rtx ); 
#line 1942 "./insn-flags.h"
extern  rtx gen_ashrsi3( rtx ,  rtx ,  rtx ); 
#line 1943 "./insn-flags.h"
extern  rtx gen_ashrhi3( rtx ,  rtx ,  rtx ); 
#line 1944 "./insn-flags.h"
extern  rtx gen_ashrqi3( rtx ,  rtx ,  rtx ); 
#line 1945 "./insn-flags.h"
static __inline__  rtx gen_lshrti3( rtx ,  rtx ,  rtx ); 
#line 1947 "./insn-flags.h"
static __inline__  rtx gen_lshrti3( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) )  {

#line 1948 "./insn-flags.h"
return 0; }
 
#line 1950 "./insn-flags.h"
extern  rtx gen_lshrdi3( rtx ,  rtx ,  rtx ); 
#line 1951 "./insn-flags.h"
extern  rtx gen_lshrsi3( rtx ,  rtx ,  rtx ); 
#line 1952 "./insn-flags.h"
extern  rtx gen_lshrhi3( rtx ,  rtx ,  rtx ); 
#line 1953 "./insn-flags.h"
extern  rtx gen_lshrqi3( rtx ,  rtx ,  rtx ); 
#line 1954 "./insn-flags.h"
extern  rtx gen_rotldi3( rtx ,  rtx ,  rtx ); 
#line 1955 "./insn-flags.h"
extern  rtx gen_rotlsi3( rtx ,  rtx ,  rtx ); 
#line 1956 "./insn-flags.h"
extern  rtx gen_rotlhi3( rtx ,  rtx ,  rtx ); 
#line 1957 "./insn-flags.h"
extern  rtx gen_rotlqi3( rtx ,  rtx ,  rtx ); 
#line 1958 "./insn-flags.h"
extern  rtx gen_rotrdi3( rtx ,  rtx ,  rtx ); 
#line 1959 "./insn-flags.h"
extern  rtx gen_rotrsi3( rtx ,  rtx ,  rtx ); 
#line 1960 "./insn-flags.h"
extern  rtx gen_rotrhi3( rtx ,  rtx ,  rtx ); 
#line 1961 "./insn-flags.h"
extern  rtx gen_rotrqi3( rtx ,  rtx ,  rtx ); 
#line 1962 "./insn-flags.h"
extern  rtx gen_extv( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1963 "./insn-flags.h"
extern  rtx gen_extzv( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1964 "./insn-flags.h"
extern  rtx gen_insv( rtx ,  rtx ,  rtx ,  rtx ); 
#line 1965 "./insn-flags.h"
extern  rtx gen_seq( rtx ); 
#line 1966 "./insn-flags.h"
extern  rtx gen_sne( rtx ); 
#line 1967 "./insn-flags.h"
extern  rtx gen_sgt( rtx ); 
#line 1968 "./insn-flags.h"
extern  rtx gen_sgtu( rtx ); 
#line 1969 "./insn-flags.h"
extern  rtx gen_slt( rtx ); 
#line 1970 "./insn-flags.h"
extern  rtx gen_sltu( rtx ); 
#line 1971 "./insn-flags.h"
extern  rtx gen_sge( rtx ); 
#line 1972 "./insn-flags.h"
extern  rtx gen_sgeu( rtx ); 
#line 1973 "./insn-flags.h"
extern  rtx gen_sle( rtx ); 
#line 1974 "./insn-flags.h"
extern  rtx gen_sleu( rtx ); 
#line 1975 "./insn-flags.h"
extern  rtx gen_sunordered( rtx ); 
#line 1976 "./insn-flags.h"
extern  rtx gen_sordered( rtx ); 
#line 1977 "./insn-flags.h"
extern  rtx gen_suneq( rtx ); 
#line 1978 "./insn-flags.h"
extern  rtx gen_sunge( rtx ); 
#line 1979 "./insn-flags.h"
extern  rtx gen_sungt( rtx ); 
#line 1980 "./insn-flags.h"
extern  rtx gen_sunle( rtx ); 
#line 1981 "./insn-flags.h"
extern  rtx gen_sunlt( rtx ); 
#line 1982 "./insn-flags.h"
extern  rtx gen_sltgt( rtx ); 
#line 1983 "./insn-flags.h"
extern  rtx gen_beq( rtx ); 
#line 1984 "./insn-flags.h"
extern  rtx gen_bne( rtx ); 
#line 1985 "./insn-flags.h"
extern  rtx gen_bgt( rtx ); 
#line 1986 "./insn-flags.h"
extern  rtx gen_bgtu( rtx ); 
#line 1987 "./insn-flags.h"
extern  rtx gen_blt( rtx ); 
#line 1988 "./insn-flags.h"
extern  rtx gen_bltu( rtx ); 
#line 1989 "./insn-flags.h"
extern  rtx gen_bge( rtx ); 
#line 1990 "./insn-flags.h"
extern  rtx gen_bgeu( rtx ); 
#line 1991 "./insn-flags.h"
extern  rtx gen_ble( rtx ); 
#line 1992 "./insn-flags.h"
extern  rtx gen_bleu( rtx ); 
#line 1993 "./insn-flags.h"
extern  rtx gen_bunordered( rtx ); 
#line 1994 "./insn-flags.h"
extern  rtx gen_bordered( rtx ); 
#line 1995 "./insn-flags.h"
extern  rtx gen_buneq( rtx ); 
#line 1996 "./insn-flags.h"
extern  rtx gen_bunge( rtx ); 
#line 1997 "./insn-flags.h"
extern  rtx gen_bungt( rtx ); 
#line 1998 "./insn-flags.h"
extern  rtx gen_bunle( rtx ); 
#line 1999 "./insn-flags.h"
extern  rtx gen_bunlt( rtx ); 
#line 2000 "./insn-flags.h"
extern  rtx gen_bltgt( rtx ); 
#line 2001 "./insn-flags.h"
extern  rtx gen_indirect_jump( rtx ); 
#line 2002 "./insn-flags.h"
extern  rtx gen_tablejump( rtx ,  rtx ); 
#line 2004 "./insn-flags.h"
extern  rtx gen_call_pop( rtx ,  rtx ,  rtx ,  rtx ); 
#line 2006 "./insn-flags.h"
extern  rtx gen_call( rtx ,  rtx ,  rtx ); 
#line 2008 "./insn-flags.h"
extern  rtx gen_sibcall( rtx ,  rtx ,  rtx ); 
#line 2010 "./insn-flags.h"
extern  rtx gen_call_value_pop( rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 2012 "./insn-flags.h"
extern  rtx gen_call_value( rtx ,  rtx ,  rtx ,  rtx ); 
#line 2014 "./insn-flags.h"
extern  rtx gen_sibcall_value( rtx ,  rtx ,  rtx ,  rtx ); 
#line 2015 "./insn-flags.h"
extern  rtx gen_untyped_call( rtx ,  rtx ,  rtx ); 
#line 2016 "./insn-flags.h"
extern  rtx gen_return(void ); 
#line 2017 "./insn-flags.h"
extern  rtx gen_prologue(void ); 
#line 2018 "./insn-flags.h"
extern  rtx gen_epilogue(void ); 
#line 2019 "./insn-flags.h"
extern  rtx gen_sibcall_epilogue(void ); 
#line 2020 "./insn-flags.h"
extern  rtx gen_eh_return( rtx ); 
#line 2021 "./insn-flags.h"
extern  rtx gen_ffssi2( rtx ,  rtx ); 
#line 2022 "./insn-flags.h"
static __inline__  rtx gen_ffsdi2( rtx ,  rtx ); 
#line 2024 "./insn-flags.h"
static __inline__  rtx gen_ffsdi2( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 2025 "./insn-flags.h"
return 0; }
 
#line 2027 "./insn-flags.h"
extern  rtx gen_clzsi2( rtx ,  rtx ); 
#line 2028 "./insn-flags.h"
static __inline__  rtx gen_clzdi2( rtx ,  rtx ); 
#line 2030 "./insn-flags.h"
static __inline__  rtx gen_clzdi2( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) )  {

#line 2031 "./insn-flags.h"
return 0; }
 
#line 2033 "./insn-flags.h"
extern  rtx gen_tls_global_dynamic_32( rtx ,  rtx ); 
#line 2034 "./insn-flags.h"
extern  rtx gen_tls_global_dynamic_64( rtx ,  rtx ); 
#line 2035 "./insn-flags.h"
extern  rtx gen_tls_local_dynamic_base_32( rtx ); 
#line 2036 "./insn-flags.h"
extern  rtx gen_tls_local_dynamic_base_64( rtx ); 
#line 2037 "./insn-flags.h"
extern  rtx gen_sqrtsf2( rtx ,  rtx ); 
#line 2038 "./insn-flags.h"
extern  rtx gen_sqrtdf2( rtx ,  rtx ); 
#line 2039 "./insn-flags.h"
extern  rtx gen_fmodsf3( rtx ,  rtx ,  rtx ); 
#line 2040 "./insn-flags.h"
extern  rtx gen_fmoddf3( rtx ,  rtx ,  rtx ); 
#line 2041 "./insn-flags.h"
extern  rtx gen_fmodxf3( rtx ,  rtx ,  rtx ); 
#line 2042 "./insn-flags.h"
extern  rtx gen_dremsf3( rtx ,  rtx ,  rtx ); 
#line 2043 "./insn-flags.h"
extern  rtx gen_dremdf3( rtx ,  rtx ,  rtx ); 
#line 2044 "./insn-flags.h"
extern  rtx gen_dremxf3( rtx ,  rtx ,  rtx ); 
#line 2045 "./insn-flags.h"
extern  rtx gen_tandf2( rtx ,  rtx ); 
#line 2046 "./insn-flags.h"
extern  rtx gen_tansf2( rtx ,  rtx ); 
#line 2047 "./insn-flags.h"
extern  rtx gen_tanxf2( rtx ,  rtx ); 
#line 2048 "./insn-flags.h"
extern  rtx gen_atan2df3( rtx ,  rtx ,  rtx ); 
#line 2049 "./insn-flags.h"
extern  rtx gen_atandf2( rtx ,  rtx ); 
#line 2050 "./insn-flags.h"
extern  rtx gen_atan2sf3( rtx ,  rtx ,  rtx ); 
#line 2051 "./insn-flags.h"
extern  rtx gen_atansf2( rtx ,  rtx ); 
#line 2052 "./insn-flags.h"
extern  rtx gen_atan2xf3( rtx ,  rtx ,  rtx ); 
#line 2053 "./insn-flags.h"
extern  rtx gen_atanxf2( rtx ,  rtx ); 
#line 2054 "./insn-flags.h"
extern  rtx gen_asindf2( rtx ,  rtx ); 
#line 2055 "./insn-flags.h"
extern  rtx gen_asinsf2( rtx ,  rtx ); 
#line 2056 "./insn-flags.h"
extern  rtx gen_asinxf2( rtx ,  rtx ); 
#line 2057 "./insn-flags.h"
extern  rtx gen_acosdf2( rtx ,  rtx ); 
#line 2058 "./insn-flags.h"
extern  rtx gen_acossf2( rtx ,  rtx ); 
#line 2059 "./insn-flags.h"
extern  rtx gen_acosxf2( rtx ,  rtx ); 
#line 2060 "./insn-flags.h"
extern  rtx gen_logsf2( rtx ,  rtx ); 
#line 2061 "./insn-flags.h"
extern  rtx gen_logdf2( rtx ,  rtx ); 
#line 2062 "./insn-flags.h"
extern  rtx gen_logxf2( rtx ,  rtx ); 
#line 2063 "./insn-flags.h"
extern  rtx gen_log10sf2( rtx ,  rtx ); 
#line 2064 "./insn-flags.h"
extern  rtx gen_log10df2( rtx ,  rtx ); 
#line 2065 "./insn-flags.h"
extern  rtx gen_log10xf2( rtx ,  rtx ); 
#line 2066 "./insn-flags.h"
extern  rtx gen_log2sf2( rtx ,  rtx ); 
#line 2067 "./insn-flags.h"
extern  rtx gen_log2df2( rtx ,  rtx ); 
#line 2068 "./insn-flags.h"
extern  rtx gen_log2xf2( rtx ,  rtx ); 
#line 2069 "./insn-flags.h"
extern  rtx gen_log1psf2( rtx ,  rtx ); 
#line 2070 "./insn-flags.h"
extern  rtx gen_log1pdf2( rtx ,  rtx ); 
#line 2071 "./insn-flags.h"
extern  rtx gen_log1pxf2( rtx ,  rtx ); 
#line 2072 "./insn-flags.h"
extern  rtx gen_logbsf2( rtx ,  rtx ); 
#line 2073 "./insn-flags.h"
extern  rtx gen_logbdf2( rtx ,  rtx ); 
#line 2074 "./insn-flags.h"
extern  rtx gen_logbxf2( rtx ,  rtx ); 
#line 2075 "./insn-flags.h"
extern  rtx gen_ilogbsi2( rtx ,  rtx ,  rtx ,  rtx ); 
#line 2076 "./insn-flags.h"
extern  rtx gen_expsf2( rtx ,  rtx ); 
#line 2077 "./insn-flags.h"
extern  rtx gen_expdf2( rtx ,  rtx ); 
#line 2078 "./insn-flags.h"
extern  rtx gen_expxf2( rtx ,  rtx ); 
#line 2079 "./insn-flags.h"
extern  rtx gen_exp10sf2( rtx ,  rtx ); 
#line 2080 "./insn-flags.h"
extern  rtx gen_exp10df2( rtx ,  rtx ); 
#line 2081 "./insn-flags.h"
extern  rtx gen_exp10xf2( rtx ,  rtx ); 
#line 2082 "./insn-flags.h"
extern  rtx gen_exp2sf2( rtx ,  rtx ); 
#line 2083 "./insn-flags.h"
extern  rtx gen_exp2df2( rtx ,  rtx ); 
#line 2084 "./insn-flags.h"
extern  rtx gen_exp2xf2( rtx ,  rtx ); 
#line 2085 "./insn-flags.h"
extern  rtx gen_expm1df2( rtx ,  rtx ); 
#line 2086 "./insn-flags.h"
extern  rtx gen_expm1sf2( rtx ,  rtx ); 
#line 2087 "./insn-flags.h"
extern  rtx gen_expm1xf2( rtx ,  rtx ); 
#line 2088 "./insn-flags.h"
extern  rtx gen_ldexpdf3( rtx ,  rtx ,  rtx ); 
#line 2089 "./insn-flags.h"
extern  rtx gen_ldexpsf3( rtx ,  rtx ,  rtx ); 
#line 2090 "./insn-flags.h"
extern  rtx gen_ldexpxf3( rtx ,  rtx ,  rtx ); 
#line 2091 "./insn-flags.h"
extern  rtx gen_rintdf2( rtx ,  rtx ); 
#line 2092 "./insn-flags.h"
extern  rtx gen_rintsf2( rtx ,  rtx ); 
#line 2093 "./insn-flags.h"
extern  rtx gen_rintxf2( rtx ,  rtx ); 
#line 2094 "./insn-flags.h"
extern  rtx gen_lrinthi2( rtx ,  rtx ); 
#line 2095 "./insn-flags.h"
extern  rtx gen_lrintsi2( rtx ,  rtx ); 
#line 2096 "./insn-flags.h"
extern  rtx gen_lrintdi2( rtx ,  rtx ); 
#line 2097 "./insn-flags.h"
extern  rtx gen_floorxf2( rtx ,  rtx ); 
#line 2098 "./insn-flags.h"
extern  rtx gen_floordf2( rtx ,  rtx ); 
#line 2099 "./insn-flags.h"
extern  rtx gen_floorsf2( rtx ,  rtx ); 
#line 2100 "./insn-flags.h"
extern  rtx gen_lfloorhi2( rtx ,  rtx ); 
#line 2101 "./insn-flags.h"
extern  rtx gen_lfloorsi2( rtx ,  rtx ); 
#line 2102 "./insn-flags.h"
extern  rtx gen_lfloordi2( rtx ,  rtx ); 
#line 2103 "./insn-flags.h"
extern  rtx gen_ceilxf2( rtx ,  rtx ); 
#line 2104 "./insn-flags.h"
extern  rtx gen_ceildf2( rtx ,  rtx ); 
#line 2105 "./insn-flags.h"
extern  rtx gen_ceilsf2( rtx ,  rtx ); 
#line 2106 "./insn-flags.h"
extern  rtx gen_lceilhi2( rtx ,  rtx ); 
#line 2107 "./insn-flags.h"
extern  rtx gen_lceilsi2( rtx ,  rtx ); 
#line 2108 "./insn-flags.h"
extern  rtx gen_lceildi2( rtx ,  rtx ); 
#line 2109 "./insn-flags.h"
extern  rtx gen_btruncxf2( rtx ,  rtx ); 
#line 2110 "./insn-flags.h"
extern  rtx gen_btruncdf2( rtx ,  rtx ); 
#line 2111 "./insn-flags.h"
extern  rtx gen_btruncsf2( rtx ,  rtx ); 
#line 2112 "./insn-flags.h"
extern  rtx gen_nearbyintxf2( rtx ,  rtx ); 
#line 2113 "./insn-flags.h"
extern  rtx gen_nearbyintdf2( rtx ,  rtx ); 
#line 2114 "./insn-flags.h"
extern  rtx gen_nearbyintsf2( rtx ,  rtx ); 
#line 2115 "./insn-flags.h"
extern  rtx gen_movmemsi( rtx ,  rtx ,  rtx ,  rtx ); 
#line 2116 "./insn-flags.h"
static __inline__  rtx gen_movmemdi( rtx ,  rtx ,  rtx ,  rtx ); 
#line 2118 "./insn-flags.h"
static __inline__  rtx gen_movmemdi( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) ,  rtx d __attribute__  (( __unused__ )) )  {

#line 2119 "./insn-flags.h"
return 0; }
 
#line 2121 "./insn-flags.h"
extern  rtx gen_strmov( rtx ,  rtx ,  rtx ,  rtx ); 
#line 2122 "./insn-flags.h"
extern  rtx gen_strmov_singleop( rtx ,  rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 2123 "./insn-flags.h"
extern  rtx gen_rep_mov( rtx ,  rtx ,  rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 2124 "./insn-flags.h"
extern  rtx gen_setmemsi( rtx ,  rtx ,  rtx ,  rtx ); 
#line 2125 "./insn-flags.h"
static __inline__  rtx gen_setmemdi( rtx ,  rtx ,  rtx ,  rtx ); 
#line 2127 "./insn-flags.h"
static __inline__  rtx gen_setmemdi( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) ,  rtx d __attribute__  (( __unused__ )) )  {

#line 2128 "./insn-flags.h"
return 0; }
 
#line 2130 "./insn-flags.h"
extern  rtx gen_strset( rtx ,  rtx ,  rtx ); 
#line 2131 "./insn-flags.h"
extern  rtx gen_strset_singleop( rtx ,  rtx ,  rtx ,  rtx ); 
#line 2132 "./insn-flags.h"
extern  rtx gen_rep_stos( rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 2133 "./insn-flags.h"
extern  rtx gen_cmpstrnsi( rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 2134 "./insn-flags.h"
extern  rtx gen_cmpintqi( rtx ); 
#line 2135 "./insn-flags.h"
extern  rtx gen_cmpstrnqi_nz_1( rtx ,  rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 2136 "./insn-flags.h"
extern  rtx gen_cmpstrnqi_1( rtx ,  rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 2137 "./insn-flags.h"
extern  rtx gen_strlensi( rtx ,  rtx ,  rtx ,  rtx ); 
#line 2138 "./insn-flags.h"
extern  rtx gen_strlendi( rtx ,  rtx ,  rtx ,  rtx ); 
#line 2139 "./insn-flags.h"
extern  rtx gen_strlenqi_1( rtx ,  rtx ,  rtx ); 
#line 2140 "./insn-flags.h"
static __inline__  rtx gen_movdicc( rtx ,  rtx ,  rtx ,  rtx ); 
#line 2142 "./insn-flags.h"
static __inline__  rtx gen_movdicc( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) ,  rtx d __attribute__  (( __unused__ )) )  {

#line 2143 "./insn-flags.h"
return 0; }
 
#line 2145 "./insn-flags.h"
extern  rtx gen_movsicc( rtx ,  rtx ,  rtx ,  rtx ); 
#line 2146 "./insn-flags.h"
extern  rtx gen_movhicc( rtx ,  rtx ,  rtx ,  rtx ); 
#line 2147 "./insn-flags.h"
extern  rtx gen_movqicc( rtx ,  rtx ,  rtx ,  rtx ); 
#line 2148 "./insn-flags.h"
extern  rtx gen_movsfcc( rtx ,  rtx ,  rtx ,  rtx ); 
#line 2149 "./insn-flags.h"
extern  rtx gen_movdfcc( rtx ,  rtx ,  rtx ,  rtx ); 
#line 2150 "./insn-flags.h"
extern  rtx gen_movxfcc( rtx ,  rtx ,  rtx ,  rtx ); 
#line 2151 "./insn-flags.h"
extern  rtx gen_addqicc( rtx ,  rtx ,  rtx ,  rtx ); 
#line 2152 "./insn-flags.h"
extern  rtx gen_addhicc( rtx ,  rtx ,  rtx ,  rtx ); 
#line 2153 "./insn-flags.h"
extern  rtx gen_addsicc( rtx ,  rtx ,  rtx ,  rtx ); 
#line 2154 "./insn-flags.h"
static __inline__  rtx gen_adddicc( rtx ,  rtx ,  rtx ,  rtx ); 
#line 2156 "./insn-flags.h"
static __inline__  rtx gen_adddicc( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) ,  rtx d __attribute__  (( __unused__ )) )  {

#line 2157 "./insn-flags.h"
return 0; }
 
#line 2159 "./insn-flags.h"
extern  rtx gen_allocate_stack_worker( rtx ); 
#line 2160 "./insn-flags.h"
extern  rtx gen_allocate_stack_worker_postreload( rtx ); 
#line 2161 "./insn-flags.h"
extern  rtx gen_allocate_stack_worker_rex64_postreload( rtx ); 
#line 2162 "./insn-flags.h"
extern  rtx gen_allocate_stack( rtx ,  rtx ); 
#line 2163 "./insn-flags.h"
extern  rtx gen_builtin_setjmp_receiver( rtx ); 
#line 2164 "./insn-flags.h"
static __inline__  rtx gen_sse_prologue_save( rtx ,  rtx ,  rtx ,  rtx ); 
#line 2166 "./insn-flags.h"
static __inline__  rtx gen_sse_prologue_save( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) ,  rtx d __attribute__  (( __unused__ )) )  {

#line 2167 "./insn-flags.h"
return 0; }
 
#line 2169 "./insn-flags.h"
extern  rtx gen_prefetch( rtx ,  rtx ,  rtx ); 
#line 2170 "./insn-flags.h"
extern  rtx gen_stack_protect_set( rtx ,  rtx ); 
#line 2171 "./insn-flags.h"
extern  rtx gen_stack_protect_test( rtx ,  rtx ,  rtx ); 
#line 2172 "./insn-flags.h"
extern  rtx gen_movv16qi( rtx ,  rtx ); 
#line 2173 "./insn-flags.h"
extern  rtx gen_movv8hi( rtx ,  rtx ); 
#line 2174 "./insn-flags.h"
extern  rtx gen_movv4si( rtx ,  rtx ); 
#line 2175 "./insn-flags.h"
extern  rtx gen_movv2di( rtx ,  rtx ); 
#line 2176 "./insn-flags.h"
extern  rtx gen_movv4sf( rtx ,  rtx ); 
#line 2177 "./insn-flags.h"
extern  rtx gen_movv2df( rtx ,  rtx ); 
#line 2178 "./insn-flags.h"
extern  rtx gen_pushv16qi1( rtx ); 
#line 2179 "./insn-flags.h"
extern  rtx gen_pushv8hi1( rtx ); 
#line 2180 "./insn-flags.h"
extern  rtx gen_pushv4si1( rtx ); 
#line 2181 "./insn-flags.h"
extern  rtx gen_pushv2di1( rtx ); 
#line 2182 "./insn-flags.h"
extern  rtx gen_pushv4sf1( rtx ); 
#line 2183 "./insn-flags.h"
extern  rtx gen_pushv2df1( rtx ); 
#line 2184 "./insn-flags.h"
extern  rtx gen_movmisalignv16qi( rtx ,  rtx ); 
#line 2185 "./insn-flags.h"
extern  rtx gen_movmisalignv8hi( rtx ,  rtx ); 
#line 2186 "./insn-flags.h"
extern  rtx gen_movmisalignv4si( rtx ,  rtx ); 
#line 2187 "./insn-flags.h"
extern  rtx gen_movmisalignv2di( rtx ,  rtx ); 
#line 2188 "./insn-flags.h"
extern  rtx gen_movmisalignv4sf( rtx ,  rtx ); 
#line 2189 "./insn-flags.h"
extern  rtx gen_movmisalignv2df( rtx ,  rtx ); 
#line 2190 "./insn-flags.h"
extern  rtx gen_negv4sf2( rtx ,  rtx ); 
#line 2191 "./insn-flags.h"
extern  rtx gen_absv4sf2( rtx ,  rtx ); 
#line 2192 "./insn-flags.h"
extern  rtx gen_addv4sf3( rtx ,  rtx ,  rtx ); 
#line 2193 "./insn-flags.h"
extern  rtx gen_subv4sf3( rtx ,  rtx ,  rtx ); 
#line 2194 "./insn-flags.h"
extern  rtx gen_mulv4sf3( rtx ,  rtx ,  rtx ); 
#line 2195 "./insn-flags.h"
extern  rtx gen_divv4sf3( rtx ,  rtx ,  rtx ); 
#line 2196 "./insn-flags.h"
extern  rtx gen_smaxv4sf3( rtx ,  rtx ,  rtx ); 
#line 2197 "./insn-flags.h"
extern  rtx gen_sminv4sf3( rtx ,  rtx ,  rtx ); 
#line 2198 "./insn-flags.h"
extern  rtx gen_reduc_splus_v4sf( rtx ,  rtx ); 
#line 2199 "./insn-flags.h"
extern  rtx gen_reduc_smax_v4sf( rtx ,  rtx ); 
#line 2200 "./insn-flags.h"
extern  rtx gen_reduc_smin_v4sf( rtx ,  rtx ); 
#line 2201 "./insn-flags.h"
extern  rtx gen_vcondv4sf( rtx ,  rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 2202 "./insn-flags.h"
extern  rtx gen_andv4sf3( rtx ,  rtx ,  rtx ); 
#line 2203 "./insn-flags.h"
extern  rtx gen_iorv4sf3( rtx ,  rtx ,  rtx ); 
#line 2204 "./insn-flags.h"
extern  rtx gen_xorv4sf3( rtx ,  rtx ,  rtx ); 
#line 2205 "./insn-flags.h"
extern  rtx gen_sse_shufps( rtx ,  rtx ,  rtx ,  rtx ); 
#line 2206 "./insn-flags.h"
extern  rtx gen_vec_initv4sf( rtx ,  rtx ); 
#line 2207 "./insn-flags.h"
extern  rtx gen_vec_setv4sf( rtx ,  rtx ,  rtx ); 
#line 2208 "./insn-flags.h"
extern  rtx gen_vec_extractv4sf( rtx ,  rtx ,  rtx ); 
#line 2209 "./insn-flags.h"
extern  rtx gen_negv2df2( rtx ,  rtx ); 
#line 2210 "./insn-flags.h"
extern  rtx gen_absv2df2( rtx ,  rtx ); 
#line 2211 "./insn-flags.h"
extern  rtx gen_addv2df3( rtx ,  rtx ,  rtx ); 
#line 2212 "./insn-flags.h"
extern  rtx gen_subv2df3( rtx ,  rtx ,  rtx ); 
#line 2213 "./insn-flags.h"
extern  rtx gen_mulv2df3( rtx ,  rtx ,  rtx ); 
#line 2214 "./insn-flags.h"
extern  rtx gen_divv2df3( rtx ,  rtx ,  rtx ); 
#line 2215 "./insn-flags.h"
extern  rtx gen_smaxv2df3( rtx ,  rtx ,  rtx ); 
#line 2216 "./insn-flags.h"
extern  rtx gen_sminv2df3( rtx ,  rtx ,  rtx ); 
#line 2217 "./insn-flags.h"
extern  rtx gen_reduc_splus_v2df( rtx ,  rtx ); 
#line 2218 "./insn-flags.h"
extern  rtx gen_vcondv2df( rtx ,  rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 2219 "./insn-flags.h"
extern  rtx gen_andv2df3( rtx ,  rtx ,  rtx ); 
#line 2220 "./insn-flags.h"
extern  rtx gen_iorv2df3( rtx ,  rtx ,  rtx ); 
#line 2221 "./insn-flags.h"
extern  rtx gen_xorv2df3( rtx ,  rtx ,  rtx ); 
#line 2222 "./insn-flags.h"
extern  rtx gen_sse2_cvtpd2dq( rtx ,  rtx ); 
#line 2223 "./insn-flags.h"
extern  rtx gen_sse2_cvttpd2dq( rtx ,  rtx ); 
#line 2224 "./insn-flags.h"
extern  rtx gen_sse2_cvtpd2ps( rtx ,  rtx ); 
#line 2225 "./insn-flags.h"
extern  rtx gen_sse2_shufpd( rtx ,  rtx ,  rtx ,  rtx ); 
#line 2226 "./insn-flags.h"
extern  rtx gen_vec_setv2df( rtx ,  rtx ,  rtx ); 
#line 2227 "./insn-flags.h"
extern  rtx gen_vec_extractv2df( rtx ,  rtx ,  rtx ); 
#line 2228 "./insn-flags.h"
extern  rtx gen_vec_initv2df( rtx ,  rtx ); 
#line 2229 "./insn-flags.h"
extern  rtx gen_negv16qi2( rtx ,  rtx ); 
#line 2230 "./insn-flags.h"
extern  rtx gen_negv8hi2( rtx ,  rtx ); 
#line 2231 "./insn-flags.h"
extern  rtx gen_negv4si2( rtx ,  rtx ); 
#line 2232 "./insn-flags.h"
extern  rtx gen_negv2di2( rtx ,  rtx ); 
#line 2233 "./insn-flags.h"
extern  rtx gen_addv16qi3( rtx ,  rtx ,  rtx ); 
#line 2234 "./insn-flags.h"
extern  rtx gen_addv8hi3( rtx ,  rtx ,  rtx ); 
#line 2235 "./insn-flags.h"
extern  rtx gen_addv4si3( rtx ,  rtx ,  rtx ); 
#line 2236 "./insn-flags.h"
extern  rtx gen_addv2di3( rtx ,  rtx ,  rtx ); 
#line 2237 "./insn-flags.h"
extern  rtx gen_subv16qi3( rtx ,  rtx ,  rtx ); 
#line 2238 "./insn-flags.h"
extern  rtx gen_subv8hi3( rtx ,  rtx ,  rtx ); 
#line 2239 "./insn-flags.h"
extern  rtx gen_subv4si3( rtx ,  rtx ,  rtx ); 
#line 2240 "./insn-flags.h"
extern  rtx gen_subv2di3( rtx ,  rtx ,  rtx ); 
#line 2241 "./insn-flags.h"
extern  rtx gen_mulv16qi3( rtx ,  rtx ,  rtx ); 
#line 2242 "./insn-flags.h"
extern  rtx gen_mulv8hi3( rtx ,  rtx ,  rtx ); 
#line 2243 "./insn-flags.h"
extern  rtx gen_mulv4si3( rtx ,  rtx ,  rtx ); 
#line 2244 "./insn-flags.h"
extern  rtx gen_mulv2di3( rtx ,  rtx ,  rtx ); 
#line 2245 "./insn-flags.h"
extern  rtx gen_vec_shl_v16qi( rtx ,  rtx ,  rtx ); 
#line 2246 "./insn-flags.h"
extern  rtx gen_vec_shl_v8hi( rtx ,  rtx ,  rtx ); 
#line 2247 "./insn-flags.h"
extern  rtx gen_vec_shl_v4si( rtx ,  rtx ,  rtx ); 
#line 2248 "./insn-flags.h"
extern  rtx gen_vec_shl_v2di( rtx ,  rtx ,  rtx ); 
#line 2249 "./insn-flags.h"
extern  rtx gen_vec_shr_v16qi( rtx ,  rtx ,  rtx ); 
#line 2250 "./insn-flags.h"
extern  rtx gen_vec_shr_v8hi( rtx ,  rtx ,  rtx ); 
#line 2251 "./insn-flags.h"
extern  rtx gen_vec_shr_v4si( rtx ,  rtx ,  rtx ); 
#line 2252 "./insn-flags.h"
extern  rtx gen_vec_shr_v2di( rtx ,  rtx ,  rtx ); 
#line 2253 "./insn-flags.h"
extern  rtx gen_umaxv16qi3( rtx ,  rtx ,  rtx ); 
#line 2254 "./insn-flags.h"
extern  rtx gen_smaxv8hi3( rtx ,  rtx ,  rtx ); 
#line 2255 "./insn-flags.h"
extern  rtx gen_umaxv8hi3( rtx ,  rtx ,  rtx ); 
#line 2256 "./insn-flags.h"
extern  rtx gen_smaxv16qi3( rtx ,  rtx ,  rtx ); 
#line 2257 "./insn-flags.h"
extern  rtx gen_smaxv4si3( rtx ,  rtx ,  rtx ); 
#line 2258 "./insn-flags.h"
extern  rtx gen_umaxv4si3( rtx ,  rtx ,  rtx ); 
#line 2259 "./insn-flags.h"
extern  rtx gen_uminv16qi3( rtx ,  rtx ,  rtx ); 
#line 2260 "./insn-flags.h"
extern  rtx gen_sminv8hi3( rtx ,  rtx ,  rtx ); 
#line 2261 "./insn-flags.h"
extern  rtx gen_sminv16qi3( rtx ,  rtx ,  rtx ); 
#line 2262 "./insn-flags.h"
extern  rtx gen_sminv4si3( rtx ,  rtx ,  rtx ); 
#line 2263 "./insn-flags.h"
extern  rtx gen_uminv8hi3( rtx ,  rtx ,  rtx ); 
#line 2264 "./insn-flags.h"
extern  rtx gen_uminv4si3( rtx ,  rtx ,  rtx ); 
#line 2265 "./insn-flags.h"
extern  rtx gen_vcondv16qi( rtx ,  rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 2266 "./insn-flags.h"
extern  rtx gen_vcondv8hi( rtx ,  rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 2267 "./insn-flags.h"
extern  rtx gen_vcondv4si( rtx ,  rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 2268 "./insn-flags.h"
extern  rtx gen_vconduv16qi( rtx ,  rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 2269 "./insn-flags.h"
extern  rtx gen_vconduv8hi( rtx ,  rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 2270 "./insn-flags.h"
extern  rtx gen_vconduv4si( rtx ,  rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 2271 "./insn-flags.h"
extern  rtx gen_one_cmplv16qi2( rtx ,  rtx ); 
#line 2272 "./insn-flags.h"
extern  rtx gen_one_cmplv8hi2( rtx ,  rtx ); 
#line 2273 "./insn-flags.h"
extern  rtx gen_one_cmplv4si2( rtx ,  rtx ); 
#line 2274 "./insn-flags.h"
extern  rtx gen_one_cmplv2di2( rtx ,  rtx ); 
#line 2275 "./insn-flags.h"
extern  rtx gen_andv16qi3( rtx ,  rtx ,  rtx ); 
#line 2276 "./insn-flags.h"
extern  rtx gen_andv8hi3( rtx ,  rtx ,  rtx ); 
#line 2277 "./insn-flags.h"
extern  rtx gen_andv4si3( rtx ,  rtx ,  rtx ); 
#line 2278 "./insn-flags.h"
extern  rtx gen_andv2di3( rtx ,  rtx ,  rtx ); 
#line 2279 "./insn-flags.h"
extern  rtx gen_iorv16qi3( rtx ,  rtx ,  rtx ); 
#line 2280 "./insn-flags.h"
extern  rtx gen_iorv8hi3( rtx ,  rtx ,  rtx ); 
#line 2281 "./insn-flags.h"
extern  rtx gen_iorv4si3( rtx ,  rtx ,  rtx ); 
#line 2282 "./insn-flags.h"
extern  rtx gen_iorv2di3( rtx ,  rtx ,  rtx ); 
#line 2283 "./insn-flags.h"
extern  rtx gen_xorv16qi3( rtx ,  rtx ,  rtx ); 
#line 2284 "./insn-flags.h"
extern  rtx gen_xorv8hi3( rtx ,  rtx ,  rtx ); 
#line 2285 "./insn-flags.h"
extern  rtx gen_xorv4si3( rtx ,  rtx ,  rtx ); 
#line 2286 "./insn-flags.h"
extern  rtx gen_xorv2di3( rtx ,  rtx ,  rtx ); 
#line 2287 "./insn-flags.h"
extern  rtx gen_sse2_pinsrw( rtx ,  rtx ,  rtx ,  rtx ); 
#line 2288 "./insn-flags.h"
extern  rtx gen_sse2_pshufd( rtx ,  rtx ,  rtx ); 
#line 2289 "./insn-flags.h"
extern  rtx gen_sse2_pshuflw( rtx ,  rtx ,  rtx ); 
#line 2290 "./insn-flags.h"
extern  rtx gen_sse2_pshufhw( rtx ,  rtx ,  rtx ); 
#line 2291 "./insn-flags.h"
extern  rtx gen_sse2_loadd( rtx ,  rtx ); 
#line 2292 "./insn-flags.h"
extern  rtx gen_sse_storeq( rtx ,  rtx ); 
#line 2293 "./insn-flags.h"
extern  rtx gen_vec_setv2di( rtx ,  rtx ,  rtx ); 
#line 2294 "./insn-flags.h"
extern  rtx gen_vec_extractv2di( rtx ,  rtx ,  rtx ); 
#line 2295 "./insn-flags.h"
extern  rtx gen_vec_initv2di( rtx ,  rtx ); 
#line 2296 "./insn-flags.h"
extern  rtx gen_vec_setv4si( rtx ,  rtx ,  rtx ); 
#line 2297 "./insn-flags.h"
extern  rtx gen_vec_extractv4si( rtx ,  rtx ,  rtx ); 
#line 2298 "./insn-flags.h"
extern  rtx gen_vec_initv4si( rtx ,  rtx ); 
#line 2299 "./insn-flags.h"
extern  rtx gen_vec_setv8hi( rtx ,  rtx ,  rtx ); 
#line 2300 "./insn-flags.h"
extern  rtx gen_vec_extractv8hi( rtx ,  rtx ,  rtx ); 
#line 2301 "./insn-flags.h"
extern  rtx gen_vec_initv8hi( rtx ,  rtx ); 
#line 2302 "./insn-flags.h"
extern  rtx gen_vec_setv16qi( rtx ,  rtx ,  rtx ); 
#line 2303 "./insn-flags.h"
extern  rtx gen_vec_extractv16qi( rtx ,  rtx ,  rtx ); 
#line 2304 "./insn-flags.h"
extern  rtx gen_vec_initv16qi( rtx ,  rtx ); 
#line 2305 "./insn-flags.h"
extern  rtx gen_sse2_maskmovdqu( rtx ,  rtx ,  rtx ); 
#line 2306 "./insn-flags.h"
extern  rtx gen_sse_sfence(void ); 
#line 2307 "./insn-flags.h"
extern  rtx gen_sse2_mfence(void ); 
#line 2308 "./insn-flags.h"
extern  rtx gen_sse2_lfence(void ); 
#line 2309 "./insn-flags.h"
extern  rtx gen_movv8qi( rtx ,  rtx ); 
#line 2310 "./insn-flags.h"
extern  rtx gen_movv4hi( rtx ,  rtx ); 
#line 2311 "./insn-flags.h"
extern  rtx gen_movv2si( rtx ,  rtx ); 
#line 2312 "./insn-flags.h"
extern  rtx gen_movv2sf( rtx ,  rtx ); 
#line 2313 "./insn-flags.h"
extern  rtx gen_pushv8qi1( rtx ); 
#line 2314 "./insn-flags.h"
extern  rtx gen_pushv4hi1( rtx ); 
#line 2315 "./insn-flags.h"
extern  rtx gen_pushv2si1( rtx ); 
#line 2316 "./insn-flags.h"
extern  rtx gen_pushv2sf1( rtx ); 
#line 2317 "./insn-flags.h"
extern  rtx gen_movmisalignv8qi( rtx ,  rtx ); 
#line 2318 "./insn-flags.h"
extern  rtx gen_movmisalignv4hi( rtx ,  rtx ); 
#line 2319 "./insn-flags.h"
extern  rtx gen_movmisalignv2si( rtx ,  rtx ); 
#line 2320 "./insn-flags.h"
extern  rtx gen_movmisalignv2sf( rtx ,  rtx ); 
#line 2321 "./insn-flags.h"
extern  rtx gen_mmx_subrv2sf3( rtx ,  rtx ,  rtx ); 
#line 2322 "./insn-flags.h"
extern  rtx gen_vec_setv2sf( rtx ,  rtx ,  rtx ); 
#line 2323 "./insn-flags.h"
extern  rtx gen_vec_extractv2sf( rtx ,  rtx ,  rtx ); 
#line 2324 "./insn-flags.h"
extern  rtx gen_vec_initv2sf( rtx ,  rtx ); 
#line 2325 "./insn-flags.h"
extern  rtx gen_mmx_pinsrw( rtx ,  rtx ,  rtx ,  rtx ); 
#line 2326 "./insn-flags.h"
extern  rtx gen_mmx_pshufw( rtx ,  rtx ,  rtx ); 
#line 2327 "./insn-flags.h"
extern  rtx gen_vec_setv2si( rtx ,  rtx ,  rtx ); 
#line 2328 "./insn-flags.h"
extern  rtx gen_vec_extractv2si( rtx ,  rtx ,  rtx ); 
#line 2329 "./insn-flags.h"
extern  rtx gen_vec_initv2si( rtx ,  rtx ); 
#line 2330 "./insn-flags.h"
extern  rtx gen_vec_setv4hi( rtx ,  rtx ,  rtx ); 
#line 2331 "./insn-flags.h"
extern  rtx gen_vec_extractv4hi( rtx ,  rtx ,  rtx ); 
#line 2332 "./insn-flags.h"
extern  rtx gen_vec_initv4hi( rtx ,  rtx ); 
#line 2333 "./insn-flags.h"
extern  rtx gen_vec_setv8qi( rtx ,  rtx ,  rtx ); 
#line 2334 "./insn-flags.h"
extern  rtx gen_vec_extractv8qi( rtx ,  rtx ,  rtx ); 
#line 2335 "./insn-flags.h"
extern  rtx gen_vec_initv8qi( rtx ,  rtx ); 
#line 2336 "./insn-flags.h"
extern  rtx gen_mmx_maskmovq( rtx ,  rtx ,  rtx ); 
#line 2337 "./insn-flags.h"
extern  rtx gen_sync_compare_and_swap_ccqi( rtx ,  rtx ,  rtx ,  rtx ); 
#line 2338 "./insn-flags.h"
extern  rtx gen_sync_compare_and_swap_cchi( rtx ,  rtx ,  rtx ,  rtx ); 
#line 2339 "./insn-flags.h"
extern  rtx gen_sync_compare_and_swap_ccsi( rtx ,  rtx ,  rtx ,  rtx ); 
#line 2340 "./insn-flags.h"
static __inline__  rtx gen_sync_compare_and_swap_ccdi( rtx ,  rtx ,  rtx ,  rtx ); 
#line 2342 "./insn-flags.h"
static __inline__  rtx gen_sync_compare_and_swap_ccdi( rtx a __attribute__  (( __unused__ )) ,  rtx b __attribute__  (( __unused__ )) ,  rtx c __attribute__  (( __unused__ )) ,  rtx d __attribute__  (( __unused__ )) )  {

#line 2343 "./insn-flags.h"
return 0; }
 
# 18 "./tm.h" 2
# 28 "../.././gcc/tree-mudflap.c" 2
# 1 "../.././gcc/hard-reg-set.h" 1
# 43 "../.././gcc/hard-reg-set.h" 
typedef unsigned long HARD_REG_ELT_TYPE; 
#line 54 "../.././gcc/hard-reg-set.h"
typedef  HARD_REG_ELT_TYPE HARD_REG_SET[((53 + (8 * 4) - 1) / (8 * 4))]; 
# 54 "../.././gcc/hard-reg-set.h" 
# 397 "../.././gcc/hard-reg-set.h" 
extern char fixed_regs[53]; 
#line 401 "../.././gcc/hard-reg-set.h"
extern  HARD_REG_SET fixed_reg_set; 
#line 408 "../.././gcc/hard-reg-set.h"
extern char call_used_regs[53]; 
#line 416 "../.././gcc/hard-reg-set.h"
extern  HARD_REG_SET call_used_reg_set; 
#line 419 "../.././gcc/hard-reg-set.h"
extern  HARD_REG_SET losing_caller_save_reg_set; 
#line 427 "../.././gcc/hard-reg-set.h"
extern char call_fixed_regs[53]; 
#line 431 "../.././gcc/hard-reg-set.h"
extern  HARD_REG_SET call_fixed_reg_set; 
#line 438 "../.././gcc/hard-reg-set.h"
extern char global_regs[53]; 
#line 447 "../.././gcc/hard-reg-set.h"
extern  HARD_REG_SET regs_invalidated_by_call; 
#line 452 "../.././gcc/hard-reg-set.h"
extern int reg_alloc_order[53]; 
#line 456 "../.././gcc/hard-reg-set.h"
extern int inv_reg_alloc_order[53]; 
#line 461 "../.././gcc/hard-reg-set.h"
extern  HARD_REG_SET reg_class_contents[(((int )LIM_REG_CLASSES))]; 
#line 465 "../.././gcc/hard-reg-set.h"
extern unsigned int reg_class_size[(((int )LIM_REG_CLASSES))]; 
#line 470 "../.././gcc/hard-reg-set.h"
extern enum reg_class reg_class_subunion[(((int )LIM_REG_CLASSES))][(((int )LIM_REG_CLASSES))]; 
#line 475 "../.././gcc/hard-reg-set.h"
extern enum reg_class reg_class_superunion[(((int )LIM_REG_CLASSES))][(((int )LIM_REG_CLASSES))]; 
#line 479 "../.././gcc/hard-reg-set.h"
extern int n_non_fixed_regs; 
#line 483 "../.././gcc/hard-reg-set.h"
extern const char *reg_names[53]; 
#line 487 "../.././gcc/hard-reg-set.h"
extern const char *reg_class_names[]; 
# 447 "../.././gcc/hard-reg-set.h" 
# 29 "../.././gcc/tree-mudflap.c" 2
# 1 "../.././gcc/rtl.h" 1
# 25 "../.././gcc/rtl.h" 
# 1 "../.././gcc/statistics.h" 1
# 26 "../.././gcc/rtl.h" 2
# 1 "../.././gcc/machmode.h" 1
# 26 "../.././gcc/machmode.h" 
# 85 "./insn-modes.h" 1
enum machine_mode {VOIDmode,BLKmode,CCmode,CCGCmode,CCGOCmode,CCNOmode,CCZmode,CCFPmode,CCFPUmode,BImode,QImode,HImode,SImode,DImode,TImode,SFmode,DFmode,XFmode,TFmode,CQImode,CHImode,CSImode,CDImode,CTImode,SCmode,DCmode,XCmode,TCmode,V4QImode,V2HImode,V8QImode,V4HImode,V2SImode,V16QImode,V8HImode,V4SImode,V2DImode,V32QImode,V16HImode,V8SImode,V4DImode,V2SFmode,V4SFmode,V2DFmode,V8SFmode,V4DFmode,MAX_MACHINE_MODE,MIN_MODE_RANDOM=VOIDmode,MAX_MODE_RANDOM=BLKmode,MIN_MODE_CC=CCmode,MAX_MODE_CC=CCFPUmode,MIN_MODE_INT=QImode,MAX_MODE_INT=TImode,MIN_MODE_PARTIAL_INT=VOIDmode,MAX_MODE_PARTIAL_INT=VOIDmode,MIN_MODE_FLOAT=SFmode,MAX_MODE_FLOAT=TFmode,MIN_MODE_COMPLEX_INT=CQImode,MAX_MODE_COMPLEX_INT=CTImode,MIN_MODE_COMPLEX_FLOAT=SCmode,MAX_MODE_COMPLEX_FLOAT=TCmode,MIN_MODE_VECTOR_INT=V4QImode,MAX_MODE_VECTOR_INT=V4DImode,MIN_MODE_VECTOR_FLOAT=V2SFmode,MAX_MODE_VECTOR_FLOAT=V4DFmode,NUM_MACHINE_MODES=MAX_MACHINE_MODE}; 
#line 30 "../.././gcc/machmode.h"
extern const char *const mode_name[NUM_MACHINE_MODES]; 
# 27 "../.././gcc/machmode.h" 2
# 1 "../.././gcc/mode-classes.def" 1
# 37 "../.././gcc/machmode.h" 2
enum mode_class {MODE_RANDOM,MODE_CC,MODE_INT,MODE_PARTIAL_INT,MODE_FLOAT,MODE_COMPLEX_INT,MODE_COMPLEX_FLOAT,MODE_VECTOR_INT,MODE_VECTOR_FLOAT,MAX_MODE_CLASS}; 
#line 44 "../.././gcc/machmode.h"
extern const unsigned char mode_class[NUM_MACHINE_MODES]; 
#line 81 "../.././gcc/machmode.h"
extern unsigned char mode_size[NUM_MACHINE_MODES]; 
#line 86 "../.././gcc/machmode.h"
extern const unsigned short mode_precision[NUM_MACHINE_MODES]; 
#line 92 "../.././gcc/machmode.h"
extern const unsigned long mode_mask_array[NUM_MACHINE_MODES]; 
#line 98 "../.././gcc/machmode.h"
extern const unsigned char mode_inner[NUM_MACHINE_MODES]; 
# 81 "../.././gcc/machmode.h" 
# 110 "../.././gcc/machmode.h" 
extern const unsigned char mode_nunits[NUM_MACHINE_MODES]; 
#line 115 "../.././gcc/machmode.h"
extern const unsigned char mode_wider[NUM_MACHINE_MODES]; 
#line 118 "../.././gcc/machmode.h"
extern const unsigned char mode_2xwider[NUM_MACHINE_MODES]; 
#line 125 "../.././gcc/machmode.h"
extern enum machine_mode mode_for_size(unsigned int , enum mode_class , int ); 
#line 130 "../.././gcc/machmode.h"
extern enum machine_mode smallest_mode_for_size(unsigned int , enum mode_class ); 
#line 136 "../.././gcc/machmode.h"
extern enum machine_mode int_mode_for_mode(enum machine_mode ); 
#line 141 "../.././gcc/machmode.h"
extern enum machine_mode get_best_mode(int , int , unsigned int , enum machine_mode , int ); 
#line 145 "../.././gcc/machmode.h"
extern unsigned char mode_base_align[NUM_MACHINE_MODES]; 
#line 147 "../.././gcc/machmode.h"
extern unsigned get_mode_alignment(enum machine_mode ); 
#line 153 "../.././gcc/machmode.h"
extern const unsigned char class_narrowest_mode[MAX_MODE_CLASS]; 
#line 159 "../.././gcc/machmode.h"
extern enum machine_mode byte_mode; 
#line 160 "../.././gcc/machmode.h"
extern enum machine_mode word_mode; 
#line 161 "../.././gcc/machmode.h"
extern enum machine_mode ptr_mode; 
#line 164 "../.././gcc/machmode.h"
extern void init_adjust_machine_modes(void ); 
# 27 "../.././gcc/rtl.h" 2
# 1 "../.././gcc/input.h" 1
# 25 "../.././gcc/input.h" 
# 1 "../.././gcc/../libcpp/include/line-map.h" 1
# 31 "../.././gcc/../libcpp/include/line-map.h" 
enum lc_reason {LC_ENTER=0,LC_LEAVE,LC_RENAME}; 
#line 36 "../.././gcc/../libcpp/include/line-map.h"
typedef unsigned int source_location; 
#line 61 "../.././gcc/../libcpp/include/line-map.h"
struct line_map {const char *to_file; unsigned int to_line;  source_location start_location; int included_from;  __extension__ enum lc_reason reason:8; unsigned char sysp; unsigned int column_bits:8; }; 
#line 92 "../.././gcc/../libcpp/include/line-map.h"
struct line_maps {struct line_map *maps; unsigned int allocated; unsigned int used; unsigned int cache; int last_listed; unsigned int depth; unsigned char trace_includes;  source_location highest_location;  source_location highest_line; unsigned int max_column_hint; }; 
#line 95 "../.././gcc/../libcpp/include/line-map.h"
extern void linemap_init(struct line_maps *); 
#line 98 "../.././gcc/../libcpp/include/line-map.h"
extern void linemap_free(struct line_maps *); 
#line 102 "../.././gcc/../libcpp/include/line-map.h"
extern void linemap_check_files_exited(struct line_maps *); 
#line 111 "../.././gcc/../libcpp/include/line-map.h"
extern  source_location linemap_line_start(struct line_maps *set, unsigned int to_line, unsigned int max_column_hint); 
# 50 "../.././gcc/../libcpp/include/line-map.h" 
# 126 "../.././gcc/../libcpp/include/line-map.h" 
extern const struct line_map *linemap_add(struct line_maps *, enum lc_reason , unsigned int sysp, const char *to_file, unsigned int to_line); 
#line 131 "../.././gcc/../libcpp/include/line-map.h"
extern const struct line_map *linemap_lookup(struct line_maps *,  source_location ); 
#line 137 "../.././gcc/../libcpp/include/line-map.h"
extern void linemap_print_containing_files(struct line_maps *, const struct line_map *); 
#line 178 "../.././gcc/../libcpp/include/line-map.h"
extern  source_location linemap_position_for_column(struct line_maps *set, unsigned int to_column); 
# 178 "../.././gcc/../libcpp/include/line-map.h" 
# 26 "../.././gcc/input.h" 2
extern struct line_maps line_table; 
#line 59 "../.././gcc/input.h"
struct location_s {const char *file; int line; }; 
#line 61 "../.././gcc/input.h"
typedef struct location_s expanded_location; 
#line 62 "../.././gcc/input.h"
typedef struct location_s location_t; 
#line 63 "../.././gcc/input.h"
typedef  location_t *source_locus; 
#line 66 "../.././gcc/input.h"
extern  location_t unknown_location; 
#line 75 "../.././gcc/input.h"
struct file_stack {struct file_stack *next;  location_t location; }; 
#line 78 "../.././gcc/input.h"
extern const char *main_input_filename; 
#line 80 "../.././gcc/input.h"
extern  location_t input_location; 
#line 84 "../.././gcc/input.h"
extern void push_srcloc(const char *name, int line); 
#line 86 "../.././gcc/input.h"
extern void pop_srcloc(void ); 
# 52 "../.././gcc/input.h" 
# 96 "../.././gcc/input.h" 
extern struct file_stack *input_file_stack; 
#line 99 "../.././gcc/input.h"
extern int input_file_stack_tick; 
# 28 "../.././gcc/rtl.h" 2
# 1 "../.././gcc/real.h" 1
# 35 "../.././gcc/real.h" 
enum real_value_class {rvc_zero,rvc_normal,rvc_inf,rvc_nan}; 
#line 54 "../.././gcc/real.h"
struct real_value {unsigned int cl:2; unsigned int sign:1; unsigned int signalling:1; unsigned int canonical:1; unsigned int uexp:(32 - 5); unsigned long sig[((128 + (8 * 4)) / (8 * 4))]; }; 
#line 78 "../.././gcc/real.h"
extern char test_real_width[(sizeof (struct real_value ) <= (((128 + (8 * 4)) + 32) / (8 * 4) + ((((128 + (8 * 4)) + 32) % (8 * 4)?1:0))) * sizeof (long )?1:(-1))]; 
# 77 "../.././gcc/real.h" 
# 155 "../.././gcc/real.h" 
struct real_format {void (*encode)(const struct real_format *, long *, const struct real_value *); void (*decode)(const struct real_format *, struct real_value *, const long *); int b; int log2_b; int p; int pnan; int emin; int emax; int signbit_ro; int signbit_rw; unsigned char has_nans; unsigned char has_inf; unsigned char has_denorm; unsigned char has_signed_zero; unsigned char qnan_msb_set; }; 
#line 161 "../.././gcc/real.h"
extern const struct real_format *real_format_for_mode[MAX_MODE_FLOAT - MIN_MODE_FLOAT + 1]; 
#line 175 "../.././gcc/real.h"
extern unsigned char real_arithmetic(struct real_value *, int , const struct real_value *, const struct real_value *); 
#line 178 "../.././gcc/real.h"
extern unsigned char real_compare(int , const struct real_value *, const struct real_value *); 
#line 181 "../.././gcc/real.h"
extern unsigned char real_isinf(const struct real_value *); 
#line 184 "../.././gcc/real.h"
extern unsigned char real_isnan(const struct real_value *); 
#line 187 "../.././gcc/real.h"
extern unsigned char real_isneg(const struct real_value *); 
#line 190 "../.././gcc/real.h"
extern unsigned char real_isnegzero(const struct real_value *); 
#line 193 "../.././gcc/real.h"
extern unsigned char real_identical(const struct real_value *, const struct real_value *); 
#line 197 "../.././gcc/real.h"
extern void real_convert(struct real_value *, enum machine_mode , const struct real_value *); 
#line 200 "../.././gcc/real.h"
extern unsigned char exact_real_truncate(enum machine_mode , const struct real_value *); 
#line 204 "../.././gcc/real.h"
extern void real_to_decimal(char *, const struct real_value *,  size_t ,  size_t , int ); 
#line 208 "../.././gcc/real.h"
extern void real_to_hexadecimal(char *, const struct real_value *,  size_t ,  size_t , int ); 
#line 211 "../.././gcc/real.h"
extern long real_to_integer(const struct real_value *); 
#line 213 "../.././gcc/real.h"
extern void real_to_integer2(long *, long *, const struct real_value *); 
#line 216 "../.././gcc/real.h"
extern void real_from_string(struct real_value *, const char *); 
#line 220 "../.././gcc/real.h"
extern void real_from_integer(struct real_value *, enum machine_mode , unsigned long , long , int ); 
#line 223 "../.././gcc/real.h"
extern long real_to_target_fmt(long *, const struct real_value *, const struct real_format *); 
#line 224 "../.././gcc/real.h"
extern long real_to_target(long *, const struct real_value *, enum machine_mode ); 
#line 227 "../.././gcc/real.h"
extern void real_from_target_fmt(struct real_value *, const long *, const struct real_format *); 
#line 229 "../.././gcc/real.h"
extern void real_from_target(struct real_value *, const long *, enum machine_mode ); 
#line 231 "../.././gcc/real.h"
extern void real_inf(struct real_value *); 
#line 233 "../.././gcc/real.h"
extern unsigned char real_nan(struct real_value *, const char *, int , enum machine_mode ); 
#line 235 "../.././gcc/real.h"
extern void real_maxval(struct real_value *, int , enum machine_mode ); 
#line 237 "../.././gcc/real.h"
extern void real_2expN(struct real_value *, int ); 
#line 239 "../.././gcc/real.h"
extern unsigned int real_hash(const struct real_value *); 
#line 243 "../.././gcc/real.h"
extern const struct real_format ieee_single_format; 
#line 244 "../.././gcc/real.h"
extern const struct real_format mips_single_format; 
#line 245 "../.././gcc/real.h"
extern const struct real_format ieee_double_format; 
#line 246 "../.././gcc/real.h"
extern const struct real_format mips_double_format; 
#line 247 "../.././gcc/real.h"
extern const struct real_format ieee_extended_motorola_format; 
#line 248 "../.././gcc/real.h"
extern const struct real_format ieee_extended_intel_96_format; 
#line 249 "../.././gcc/real.h"
extern const struct real_format ieee_extended_intel_96_round_53_format; 
#line 250 "../.././gcc/real.h"
extern const struct real_format ieee_extended_intel_128_format; 
#line 251 "../.././gcc/real.h"
extern const struct real_format ibm_extended_format; 
#line 252 "../.././gcc/real.h"
extern const struct real_format mips_extended_format; 
#line 253 "../.././gcc/real.h"
extern const struct real_format ieee_quad_format; 
#line 254 "../.././gcc/real.h"
extern const struct real_format mips_quad_format; 
#line 255 "../.././gcc/real.h"
extern const struct real_format vax_f_format; 
#line 256 "../.././gcc/real.h"
extern const struct real_format vax_d_format; 
#line 257 "../.././gcc/real.h"
extern const struct real_format vax_g_format; 
#line 258 "../.././gcc/real.h"
extern const struct real_format i370_single_format; 
#line 259 "../.././gcc/real.h"
extern const struct real_format i370_double_format; 
#line 260 "../.././gcc/real.h"
extern const struct real_format c4x_single_format; 
#line 261 "../.././gcc/real.h"
extern const struct real_format c4x_extended_format; 
#line 262 "../.././gcc/real.h"
extern const struct real_format real_internal_format; 
# 174 "../.././gcc/real.h" 
# 306 "../.././gcc/real.h" 
extern struct real_value real_value_truncate(enum machine_mode , struct real_value ); 
#line 312 "../.././gcc/real.h"
extern struct real_value real_arithmetic2(int , const struct real_value *, const struct real_value *); 
#line 320 "../.././gcc/real.h"
extern int significand_size(enum machine_mode ); 
#line 322 "../.././gcc/real.h"
extern struct real_value real_from_string2(const char *, enum machine_mode ); 
#line 340 "../.././gcc/real.h"
extern int real_exponent(const struct real_value *); 
#line 343 "../.././gcc/real.h"
extern void real_ldexp(struct real_value *, const struct real_value *, int ); 
#line 349 "../.././gcc/real.h"
extern struct real_value dconst0; 
#line 350 "../.././gcc/real.h"
extern struct real_value dconst1; 
#line 351 "../.././gcc/real.h"
extern struct real_value dconst2; 
#line 352 "../.././gcc/real.h"
extern struct real_value dconst3; 
#line 353 "../.././gcc/real.h"
extern struct real_value dconst10; 
#line 354 "../.././gcc/real.h"
extern struct real_value dconstm1; 
#line 355 "../.././gcc/real.h"
extern struct real_value dconstm2; 
#line 356 "../.././gcc/real.h"
extern struct real_value dconsthalf; 
#line 357 "../.././gcc/real.h"
extern struct real_value dconstthird; 
#line 358 "../.././gcc/real.h"
extern struct real_value dconstpi; 
#line 359 "../.././gcc/real.h"
extern struct real_value dconste; 
#line 363 "../.././gcc/real.h"
struct real_value real_value_from_int_cst( tree ,  tree ); 
# 340 "../.././gcc/real.h" 
# 372 "../.././gcc/real.h" 
extern  rtx const_double_from_real_value(struct real_value , enum machine_mode ); 
#line 375 "../.././gcc/real.h"
extern unsigned char exact_real_inverse(enum machine_mode , struct real_value *); 
#line 378 "../.././gcc/real.h"
extern  tree build_real( tree , struct real_value ); 
#line 382 "../.././gcc/real.h"
extern unsigned char real_sqrt(struct real_value *, enum machine_mode , const struct real_value *); 
#line 386 "../.././gcc/real.h"
extern unsigned char real_powi(struct real_value *, enum machine_mode , const struct real_value *, long ); 
#line 390 "../.././gcc/real.h"
extern void real_trunc(struct real_value *, enum machine_mode , const struct real_value *); 
#line 392 "../.././gcc/real.h"
extern void real_floor(struct real_value *, enum machine_mode , const struct real_value *); 
#line 394 "../.././gcc/real.h"
extern void real_ceil(struct real_value *, enum machine_mode , const struct real_value *); 
#line 396 "../.././gcc/real.h"
extern void real_round(struct real_value *, enum machine_mode , const struct real_value *); 
#line 399 "../.././gcc/real.h"
extern void real_copysign(struct real_value *, const struct real_value *); 
# 29 "../.././gcc/rtl.h" 2
# 42 "../.././gcc/rtl.h" 
# 1 "../.././gcc/rtl.def" 1
# 83 "../.././gcc/rtl.def" 
# 116 "../.././gcc/rtl.def" 
# 153 "../.././gcc/rtl.def" 
# 166 "../.././gcc/rtl.def" 
# 205 "../.././gcc/rtl.def" 
# 217 "../.././gcc/rtl.def" 
# 249 "../.././gcc/rtl.def" 
# 260 "../.././gcc/rtl.def" 
# 272 "../.././gcc/rtl.def" 
# 348 "../.././gcc/rtl.def" 
# 365 "../.././gcc/rtl.def" 
# 378 "../.././gcc/rtl.def" 
# 420 "../.././gcc/rtl.def" 
# 467 "../.././gcc/rtl.def" 
# 479 "../.././gcc/rtl.def" 
# 496 "../.././gcc/rtl.def" 
# 593 "../.././gcc/rtl.def" 
# 48 "../.././gcc/rtl.h" 2
enum rtx_code {UNKNOWN,EXPR_LIST,INSN_LIST,SEQUENCE,ADDRESS,INSN,JUMP_INSN,CALL_INSN,BARRIER,CODE_LABEL,NOTE,COND_EXEC,PARALLEL,ASM_INPUT,ASM_OPERANDS,UNSPEC,UNSPEC_VOLATILE,ADDR_VEC,ADDR_DIFF_VEC,PREFETCH,SET,USE,CLOBBER,CALL,RETURN,TRAP_IF,RESX,CONST_INT,CONST_DOUBLE,CONST_VECTOR,CONST_STRING,CONST,PC,VALUE,REG,SCRATCH,SUBREG,STRICT_LOW_PART,CONCAT,MEM,LABEL_REF,SYMBOL_REF,CC0,IF_THEN_ELSE,COMPARE,PLUS,MINUS,NEG,MULT,DIV,MOD,UDIV,UMOD,AND,IOR,XOR,NOT,ASHIFT,ROTATE,ASHIFTRT,LSHIFTRT,ROTATERT,SMIN,SMAX,UMIN,UMAX,PRE_DEC,PRE_INC,POST_DEC,POST_INC,PRE_MODIFY,POST_MODIFY,NE,EQ,GE,GT,LE,LT,GEU,GTU,LEU,LTU,UNORDERED,ORDERED,UNEQ,UNGE,UNGT,UNLE,UNLT,LTGT,SIGN_EXTEND,ZERO_EXTEND,TRUNCATE,FLOAT_EXTEND,FLOAT_TRUNCATE,FLOAT,FIX,UNSIGNED_FLOAT,UNSIGNED_FIX,ABS,SQRT,FFS,CLZ,CTZ,POPCOUNT,PARITY,SIGN_EXTRACT,ZERO_EXTRACT,HIGH,LO_SUM,VEC_MERGE,VEC_SELECT,VEC_CONCAT,VEC_DUPLICATE,SS_PLUS,US_PLUS,SS_MINUS,US_MINUS,SS_TRUNCATE,US_TRUNCATE,VAR_LOCATION,LAST_AND_UNUSED_RTX_CODE}; 
#line 81 "../.././gcc/rtl.h"
enum rtx_class {RTX_COMPARE,RTX_COMM_COMPARE,RTX_BIN_ARITH,RTX_COMM_ARITH,RTX_UNARY,RTX_EXTRA,RTX_MATCH,RTX_INSN,RTX_OBJ,RTX_CONST_OBJ,RTX_TERNARY,RTX_BITFIELD_OPS,RTX_AUTOINC}; 
# 57 "../.././gcc/rtl.h" 
# 95 "../.././gcc/rtl.h" 
extern const unsigned char rtx_length[(((int )LAST_AND_UNUSED_RTX_CODE))]; 
#line 98 "../.././gcc/rtl.h"
extern const char *const rtx_name[(((int )LAST_AND_UNUSED_RTX_CODE))]; 
#line 101 "../.././gcc/rtl.h"
extern const char *const rtx_format[(((int )LAST_AND_UNUSED_RTX_CODE))]; 
#line 104 "../.././gcc/rtl.h"
extern const enum rtx_class rtx_class[(((int )LAST_AND_UNUSED_RTX_CODE))]; 
#line 107 "../.././gcc/rtl.h"
extern const unsigned char rtx_size[(((int )LAST_AND_UNUSED_RTX_CODE))]; 
#line 108 "../.././gcc/rtl.h"
extern const unsigned char rtx_next[(((int )LAST_AND_UNUSED_RTX_CODE))]; 
#line 130 "../.././gcc/rtl.h"
typedef struct {unsigned min_align:8; unsigned base_after_vec:1; unsigned min_after_vec:1; unsigned max_after_vec:1; unsigned min_after_base:1; unsigned max_after_base:1; unsigned offset_unsigned:1; unsigned :2; unsigned scale:8; }addr_diff_vec_flags; 
#line 146 "../.././gcc/rtl.h"
typedef struct mem_attrs {long alias;  tree expr;  rtx offset;  rtx size; unsigned int align; }mem_attrs; 
#line 155 "../.././gcc/rtl.h"
typedef struct reg_attrs { tree decl; long offset; }reg_attrs; 
#line 174 "../.././gcc/rtl.h"
union rtunion_def {int rt_int; unsigned int rt_uint; const char *rt_str;  rtx rt_rtx;  rtvec rt_rtvec; enum machine_mode rt_type;  addr_diff_vec_flags rt_addr_diff_vec_flags; struct cselib_val_struct *rt_cselib; struct bitmap_head_def *rt_bit;  tree rt_tree; struct basic_block_def *rt_bb;  mem_attrs *rt_mem;  reg_attrs *rt_reg; }; 
#line 175 "../.././gcc/rtl.h"
typedef union rtunion_def rtunion; 
# 139 "../.././gcc/rtl.h" 
# 213 "../.././gcc/rtl.h" 
# 255 "../.././gcc/rtl.h" 
struct rtx_def { __extension__ enum rtx_code code:16;  __extension__ enum machine_mode mode:8; unsigned int jump:1; unsigned int call:1; unsigned int unchanging:1; unsigned int volatil:1; unsigned int in_struct:1; unsigned int used:1; unsigned frame_related:1; unsigned return_val:1; union u { rtunion fld[1]; long hwint[1]; struct real_value rv; }u; }; 
#line 295 "../.././gcc/rtl.h"
struct rtvec_def {int num_elem;  rtx elem[1]; }; 
# 292 "../.././gcc/rtl.h" 
# 723 "../.././gcc/rtl.h" 
# 1 "../.././gcc/reg-notes.def" 1
# 33 "../.././gcc/reg-notes.def" 
# 52 "../.././gcc/reg-notes.def" 
# 92 "../.././gcc/reg-notes.def" 
# 729 "../.././gcc/rtl.h" 2
enum reg_note {REG_DEP_TRUE,REG_DEAD,REG_INC,REG_EQUIV,REG_EQUAL,REG_RETVAL,REG_LIBCALL,REG_NONNEG,REG_NO_CONFLICT,REG_UNUSED,REG_CC_SETTER,REG_CC_USER,REG_LABEL,REG_DEP_ANTI,REG_DEP_OUTPUT,REG_BR_PROB,REG_VALUE_PROFILE,REG_NOALIAS,REG_BR_PRED,REG_FRAME_RELATED_EXPR,REG_EH_CONTEXT,REG_EH_REGION,REG_SAVE_NOTE,REG_MAYBE_DEAD,REG_NORETURN,REG_NON_LOCAL_GOTO,REG_CROSSING_JUMP,REG_SETJMP,REG_NOTE_MAX}; 
#line 738 "../.././gcc/rtl.h"
extern const char *const reg_note_name[]; 
# 738 "../.././gcc/rtl.h" 
# 809 "../.././gcc/rtl.h" 
# 1 "../.././gcc/insn-notes.def" 1
# 36 "../.././gcc/insn-notes.def" 
# 819 "../.././gcc/rtl.h" 2
enum insn_note {NOTE_INSN_BIAS=(-100),NOTE_INSN_DELETED,NOTE_INSN_DELETED_LABEL,NOTE_INSN_BLOCK_BEG,NOTE_INSN_BLOCK_END,NOTE_INSN_LOOP_BEG,NOTE_INSN_LOOP_END,NOTE_INSN_FUNCTION_BEG,NOTE_INSN_FUNCTION_END,NOTE_INSN_PROLOGUE_END,NOTE_INSN_EPILOGUE_BEG,NOTE_INSN_EH_REGION_BEG,NOTE_INSN_EH_REGION_END,NOTE_INSN_REPEATED_LINE_NUMBER,NOTE_INSN_VAR_LOCATION,NOTE_INSN_EXPECTED_VALUE,NOTE_INSN_BASIC_BLOCK,NOTE_INSN_SWITCH_TEXT_SECTIONS,NOTE_INSN_MAX}; 
#line 823 "../.././gcc/rtl.h"
extern const char *const note_insn_name[NOTE_INSN_MAX - NOTE_INSN_BIAS]; 
#line 844 "../.././gcc/rtl.h"
enum label_kind {LABEL_NORMAL=0,LABEL_STATIC_ENTRY,LABEL_GLOBAL_ENTRY,LABEL_WEAK_ENTRY}; 
# 838 "../.././gcc/rtl.h" 
# 968 "../.././gcc/rtl.h" 
extern void init_rtlanal(void ); 
#line 969 "../.././gcc/rtl.h"
extern int rtx_cost( rtx , enum rtx_code ); 
#line 970 "../.././gcc/rtl.h"
extern int address_cost( rtx , enum machine_mode ); 
#line 971 "../.././gcc/rtl.h"
extern unsigned int subreg_lsb( rtx ); 
#line 973 "../.././gcc/rtl.h"
extern unsigned int subreg_lsb_1(enum machine_mode , enum machine_mode , unsigned int ); 
#line 975 "../.././gcc/rtl.h"
extern unsigned int subreg_regno_offset(unsigned int , enum machine_mode , unsigned int , enum machine_mode ); 
#line 977 "../.././gcc/rtl.h"
extern unsigned char subreg_offset_representable_p(unsigned int , enum machine_mode , unsigned int , enum machine_mode ); 
#line 978 "../.././gcc/rtl.h"
extern unsigned int subreg_regno( rtx ); 
#line 979 "../.././gcc/rtl.h"
extern unsigned long nonzero_bits( rtx , enum machine_mode ); 
#line 980 "../.././gcc/rtl.h"
extern unsigned int num_sign_bit_copies( rtx , enum machine_mode ); 
#line 1326 "../.././gcc/rtl.h"
extern int generating_concat_p; 
#line 1329 "../.././gcc/rtl.h"
extern int currently_expanding_to_rtl; 
#line 1334 "../.././gcc/rtl.h"
extern int ceil_log2(unsigned long ); 
#line 1337 "../.././gcc/rtl.h"
extern  rtx expand_builtin_expect_jump( tree ,  rtx ,  rtx ); 
#line 1340 "../.././gcc/rtl.h"
extern void set_stack_check_libfunc( rtx ); 
#line 1341 "../.././gcc/rtl.h"
extern long trunc_int_for_mode(long , enum machine_mode ); 
#line 1342 "../.././gcc/rtl.h"
extern  rtx plus_constant( rtx , long ); 
#line 1345 "../.././gcc/rtl.h"
extern  rtvec gen_rtvec(int , ...); 
#line 1346 "../.././gcc/rtl.h"
extern  rtx copy_insn_1( rtx ); 
#line 1347 "../.././gcc/rtl.h"
extern  rtx copy_insn( rtx ); 
#line 1348 "../.././gcc/rtl.h"
extern  rtx gen_int_mode(long , enum machine_mode ); 
#line 1349 "../.././gcc/rtl.h"
extern  rtx emit_copy_of_insn_after( rtx ,  rtx ); 
#line 1350 "../.././gcc/rtl.h"
extern void set_reg_attrs_from_mem( rtx ,  rtx ); 
#line 1351 "../.././gcc/rtl.h"
extern void set_mem_attrs_from_reg( rtx ,  rtx ); 
#line 1352 "../.././gcc/rtl.h"
extern void set_reg_attrs_for_parm( rtx ,  rtx ); 
#line 1353 "../.././gcc/rtl.h"
extern int mem_expr_equal_p( tree ,  tree ); 
#line 1356 "../.././gcc/rtl.h"
extern  rtx rtx_alloc_stat(enum rtx_code ); 
#line 1359 "../.././gcc/rtl.h"
extern  rtvec rtvec_alloc(int ); 
#line 1360 "../.././gcc/rtl.h"
extern  rtx copy_rtx( rtx ); 
#line 1361 "../.././gcc/rtl.h"
extern void dump_rtx_statistics(void ); 
#line 1364 "../.././gcc/rtl.h"
extern  rtx copy_rtx_if_shared( rtx ); 
#line 1367 "../.././gcc/rtl.h"
extern  rtx shallow_copy_rtx_stat( rtx ); 
#line 1369 "../.././gcc/rtl.h"
extern int rtx_equal_p( rtx ,  rtx ); 
#line 1372 "../.././gcc/rtl.h"
extern  rtvec gen_rtvec_v(int ,  rtx *); 
#line 1373 "../.././gcc/rtl.h"
extern  rtx gen_reg_rtx(enum machine_mode ); 
#line 1374 "../.././gcc/rtl.h"
extern  rtx gen_rtx_REG_offset( rtx , enum machine_mode , unsigned int , int ); 
#line 1375 "../.././gcc/rtl.h"
extern  rtx gen_label_rtx(void ); 
#line 1376 "../.././gcc/rtl.h"
extern  rtx gen_lowpart_common(enum machine_mode ,  rtx ); 
#line 1379 "../.././gcc/rtl.h"
extern  rtx gen_lowpart_if_possible(enum machine_mode ,  rtx ); 
#line 1382 "../.././gcc/rtl.h"
extern  rtx gen_highpart(enum machine_mode ,  rtx ); 
#line 1383 "../.././gcc/rtl.h"
extern  rtx gen_highpart_mode(enum machine_mode , enum machine_mode ,  rtx ); 
#line 1384 "../.././gcc/rtl.h"
extern  rtx operand_subword( rtx , unsigned int , int , enum machine_mode ); 
#line 1387 "../.././gcc/rtl.h"
extern  rtx operand_subword_force( rtx , unsigned int , enum machine_mode ); 
#line 1388 "../.././gcc/rtl.h"
extern int subreg_lowpart_p( rtx ); 
#line 1390 "../.././gcc/rtl.h"
extern unsigned int subreg_lowpart_offset(enum machine_mode , enum machine_mode ); 
#line 1392 "../.././gcc/rtl.h"
extern unsigned int subreg_highpart_offset(enum machine_mode , enum machine_mode ); 
#line 1393 "../.././gcc/rtl.h"
extern  rtx make_safe_from( rtx ,  rtx ); 
#line 1394 "../.././gcc/rtl.h"
extern  rtx convert_memory_address(enum machine_mode ,  rtx ); 
#line 1395 "../.././gcc/rtl.h"
extern  rtx get_insns(void ); 
#line 1396 "../.././gcc/rtl.h"
extern const char *get_insn_name(int ); 
#line 1397 "../.././gcc/rtl.h"
extern  rtx get_last_insn(void ); 
#line 1398 "../.././gcc/rtl.h"
extern  rtx get_last_insn_anywhere(void ); 
#line 1399 "../.././gcc/rtl.h"
extern  rtx get_first_nonnote_insn(void ); 
#line 1400 "../.././gcc/rtl.h"
extern  rtx get_last_nonnote_insn(void ); 
#line 1401 "../.././gcc/rtl.h"
extern void start_sequence(void ); 
#line 1402 "../.././gcc/rtl.h"
extern void push_to_sequence( rtx ); 
#line 1403 "../.././gcc/rtl.h"
extern void end_sequence(void ); 
#line 1405 "../.././gcc/rtl.h"
extern  rtx immed_double_const(long , long , enum machine_mode ); 
#line 1409 "../.././gcc/rtl.h"
extern  rtx lowpart_subreg(enum machine_mode ,  rtx , enum machine_mode ); 
#line 1412 "../.././gcc/rtl.h"
extern  rtx force_const_mem(enum machine_mode ,  rtx ); 
#line 1416 "../.././gcc/rtl.h"
struct function ; 
#line 1417 "../.././gcc/rtl.h"
extern  rtx get_pool_constant( rtx ); 
#line 1418 "../.././gcc/rtl.h"
extern  rtx get_pool_constant_mark( rtx , unsigned char *); 
#line 1419 "../.././gcc/rtl.h"
extern enum machine_mode get_pool_mode( rtx ); 
#line 1420 "../.././gcc/rtl.h"
extern  rtx get_pool_constant_for_function(struct function *,  rtx ); 
#line 1421 "../.././gcc/rtl.h"
extern  rtx simplify_subtraction( rtx ); 
#line 1424 "../.././gcc/rtl.h"
extern  rtx assign_stack_local(enum machine_mode , long , int ); 
#line 1425 "../.././gcc/rtl.h"
extern  rtx assign_stack_temp(enum machine_mode , long , int ); 
#line 1427 "../.././gcc/rtl.h"
extern  rtx assign_stack_temp_for_type(enum machine_mode , long , int ,  tree ); 
#line 1428 "../.././gcc/rtl.h"
extern  rtx assign_temp( tree , int , int , int ); 
#line 1431 "../.././gcc/rtl.h"
extern  rtx emit_insn_before( rtx ,  rtx ); 
#line 1432 "../.././gcc/rtl.h"
extern  rtx emit_insn_before_noloc( rtx ,  rtx ); 
#line 1433 "../.././gcc/rtl.h"
extern  rtx emit_insn_before_setloc( rtx ,  rtx , int ); 
#line 1434 "../.././gcc/rtl.h"
extern  rtx emit_jump_insn_before( rtx ,  rtx ); 
#line 1435 "../.././gcc/rtl.h"
extern  rtx emit_jump_insn_before_noloc( rtx ,  rtx ); 
#line 1436 "../.././gcc/rtl.h"
extern  rtx emit_jump_insn_before_setloc( rtx ,  rtx , int ); 
#line 1437 "../.././gcc/rtl.h"
extern  rtx emit_call_insn_before( rtx ,  rtx ); 
#line 1438 "../.././gcc/rtl.h"
extern  rtx emit_call_insn_before_noloc( rtx ,  rtx ); 
#line 1439 "../.././gcc/rtl.h"
extern  rtx emit_call_insn_before_setloc( rtx ,  rtx , int ); 
#line 1440 "../.././gcc/rtl.h"
extern  rtx emit_barrier_before( rtx ); 
#line 1441 "../.././gcc/rtl.h"
extern  rtx emit_label_before( rtx ,  rtx ); 
#line 1442 "../.././gcc/rtl.h"
extern  rtx emit_note_before(int ,  rtx ); 
#line 1443 "../.././gcc/rtl.h"
extern  rtx emit_insn_after( rtx ,  rtx ); 
#line 1444 "../.././gcc/rtl.h"
extern  rtx emit_insn_after_noloc( rtx ,  rtx ); 
#line 1445 "../.././gcc/rtl.h"
extern  rtx emit_insn_after_setloc( rtx ,  rtx , int ); 
#line 1446 "../.././gcc/rtl.h"
extern  rtx emit_jump_insn_after( rtx ,  rtx ); 
#line 1447 "../.././gcc/rtl.h"
extern  rtx emit_jump_insn_after_noloc( rtx ,  rtx ); 
#line 1448 "../.././gcc/rtl.h"
extern  rtx emit_jump_insn_after_setloc( rtx ,  rtx , int ); 
#line 1449 "../.././gcc/rtl.h"
extern  rtx emit_call_insn_after( rtx ,  rtx ); 
#line 1450 "../.././gcc/rtl.h"
extern  rtx emit_call_insn_after_noloc( rtx ,  rtx ); 
#line 1451 "../.././gcc/rtl.h"
extern  rtx emit_call_insn_after_setloc( rtx ,  rtx , int ); 
#line 1452 "../.././gcc/rtl.h"
extern  rtx emit_barrier_after( rtx ); 
#line 1453 "../.././gcc/rtl.h"
extern  rtx emit_label_after( rtx ,  rtx ); 
#line 1454 "../.././gcc/rtl.h"
extern  rtx emit_note_after(int ,  rtx ); 
#line 1455 "../.././gcc/rtl.h"
extern  rtx emit_note_copy_after( rtx ,  rtx ); 
#line 1456 "../.././gcc/rtl.h"
extern  rtx emit_insn( rtx ); 
#line 1457 "../.././gcc/rtl.h"
extern  rtx emit_jump_insn( rtx ); 
#line 1458 "../.././gcc/rtl.h"
extern  rtx emit_call_insn( rtx ); 
#line 1459 "../.././gcc/rtl.h"
extern  rtx emit_label( rtx ); 
#line 1460 "../.././gcc/rtl.h"
extern  rtx emit_barrier(void ); 
#line 1461 "../.././gcc/rtl.h"
extern  rtx emit_note(int ); 
#line 1462 "../.././gcc/rtl.h"
extern  rtx emit_note_copy( rtx ); 
#line 1463 "../.././gcc/rtl.h"
extern  rtx emit_line_note( location_t ); 
#line 1464 "../.././gcc/rtl.h"
extern  rtx make_insn_raw( rtx ); 
#line 1465 "../.././gcc/rtl.h"
extern void add_function_usage_to( rtx ,  rtx ); 
#line 1466 "../.././gcc/rtl.h"
extern  rtx last_call_insn(void ); 
#line 1467 "../.././gcc/rtl.h"
extern  rtx previous_insn( rtx ); 
#line 1468 "../.././gcc/rtl.h"
extern  rtx next_insn( rtx ); 
#line 1469 "../.././gcc/rtl.h"
extern  rtx prev_nonnote_insn( rtx ); 
#line 1470 "../.././gcc/rtl.h"
extern  rtx next_nonnote_insn( rtx ); 
#line 1471 "../.././gcc/rtl.h"
extern  rtx prev_real_insn( rtx ); 
#line 1472 "../.././gcc/rtl.h"
extern  rtx next_real_insn( rtx ); 
#line 1473 "../.././gcc/rtl.h"
extern  rtx prev_active_insn( rtx ); 
#line 1474 "../.././gcc/rtl.h"
extern  rtx next_active_insn( rtx ); 
#line 1475 "../.././gcc/rtl.h"
extern int active_insn_p( rtx ); 
#line 1476 "../.././gcc/rtl.h"
extern  rtx prev_label( rtx ); 
#line 1477 "../.././gcc/rtl.h"
extern  rtx next_label( rtx ); 
#line 1478 "../.././gcc/rtl.h"
extern  rtx skip_consecutive_labels( rtx ); 
#line 1479 "../.././gcc/rtl.h"
extern  rtx next_cc0_user( rtx ); 
#line 1480 "../.././gcc/rtl.h"
extern  rtx prev_cc0_setter( rtx ); 
#line 1483 "../.././gcc/rtl.h"
extern int insn_line( rtx ); 
#line 1484 "../.././gcc/rtl.h"
extern const char *insn_file( rtx ); 
#line 1485 "../.././gcc/rtl.h"
extern int locator_line(int ); 
#line 1486 "../.././gcc/rtl.h"
extern const char *locator_file(int ); 
#line 1487 "../.././gcc/rtl.h"
extern int prologue_locator,epilogue_locator; 
#line 1490 "../.././gcc/rtl.h"
extern enum rtx_code reverse_condition(enum rtx_code ); 
#line 1491 "../.././gcc/rtl.h"
extern enum rtx_code reverse_condition_maybe_unordered(enum rtx_code ); 
#line 1492 "../.././gcc/rtl.h"
extern enum rtx_code swap_condition(enum rtx_code ); 
#line 1493 "../.././gcc/rtl.h"
extern enum rtx_code unsigned_condition(enum rtx_code ); 
#line 1494 "../.././gcc/rtl.h"
extern enum rtx_code signed_condition(enum rtx_code ); 
#line 1495 "../.././gcc/rtl.h"
extern void mark_jump_label( rtx ,  rtx , int ); 
#line 1496 "../.././gcc/rtl.h"
extern void cleanup_barriers(void ); 
#line 1499 "../.././gcc/rtl.h"
extern unsigned char squeeze_notes( rtx *,  rtx *); 
#line 1500 "../.././gcc/rtl.h"
extern  rtx delete_related_insns( rtx ); 
#line 1501 "../.././gcc/rtl.h"
extern void delete_jump( rtx ); 
#line 1502 "../.././gcc/rtl.h"
extern  rtx get_label_before( rtx ); 
#line 1503 "../.././gcc/rtl.h"
extern  rtx get_label_after( rtx ); 
#line 1504 "../.././gcc/rtl.h"
extern  rtx follow_jumps( rtx ); 
#line 1507 "../.././gcc/rtl.h"
extern  rtx *find_constant_term_loc( rtx *); 
#line 1510 "../.././gcc/rtl.h"
extern  rtx try_split( rtx ,  rtx , int ); 
#line 1511 "../.././gcc/rtl.h"
extern int split_branch_probability; 
#line 1514 "../.././gcc/rtl.h"
extern  rtx split_insns( rtx ,  rtx ); 
#line 1518 "../.././gcc/rtl.h"
extern  rtx simplify_const_unary_operation(enum rtx_code , enum machine_mode ,  rtx , enum machine_mode ); 
#line 1520 "../.././gcc/rtl.h"
extern  rtx simplify_unary_operation(enum rtx_code , enum machine_mode ,  rtx , enum machine_mode ); 
#line 1522 "../.././gcc/rtl.h"
extern  rtx simplify_const_binary_operation(enum rtx_code , enum machine_mode ,  rtx ,  rtx ); 
#line 1524 "../.././gcc/rtl.h"
extern  rtx simplify_binary_operation(enum rtx_code , enum machine_mode ,  rtx ,  rtx ); 
#line 1526 "../.././gcc/rtl.h"
extern  rtx simplify_ternary_operation(enum rtx_code , enum machine_mode , enum machine_mode ,  rtx ,  rtx ,  rtx ); 
#line 1528 "../.././gcc/rtl.h"
extern  rtx simplify_const_relational_operation(enum rtx_code , enum machine_mode ,  rtx ,  rtx ); 
#line 1530 "../.././gcc/rtl.h"
extern  rtx simplify_relational_operation(enum rtx_code , enum machine_mode , enum machine_mode ,  rtx ,  rtx ); 
#line 1531 "../.././gcc/rtl.h"
extern  rtx simplify_gen_binary(enum rtx_code , enum machine_mode ,  rtx ,  rtx ); 
#line 1533 "../.././gcc/rtl.h"
extern  rtx simplify_gen_unary(enum rtx_code , enum machine_mode ,  rtx , enum machine_mode ); 
#line 1535 "../.././gcc/rtl.h"
extern  rtx simplify_gen_ternary(enum rtx_code , enum machine_mode , enum machine_mode ,  rtx ,  rtx ,  rtx ); 
#line 1537 "../.././gcc/rtl.h"
extern  rtx simplify_gen_relational(enum rtx_code , enum machine_mode , enum machine_mode ,  rtx ,  rtx ); 
#line 1539 "../.././gcc/rtl.h"
extern  rtx simplify_subreg(enum machine_mode ,  rtx , enum machine_mode , unsigned int ); 
#line 1541 "../.././gcc/rtl.h"
extern  rtx simplify_gen_subreg(enum machine_mode ,  rtx , enum machine_mode , unsigned int ); 
#line 1542 "../.././gcc/rtl.h"
extern  rtx simplify_replace_rtx( rtx ,  rtx ,  rtx ); 
#line 1543 "../.././gcc/rtl.h"
extern  rtx simplify_rtx( rtx ); 
#line 1544 "../.././gcc/rtl.h"
extern  rtx avoid_constant_pool_reference( rtx ); 
#line 1545 "../.././gcc/rtl.h"
extern unsigned char constant_pool_reference_p( rtx x); 
#line 1546 "../.././gcc/rtl.h"
extern unsigned char mode_signbit_p(enum machine_mode ,  rtx ); 
#line 1550 "../.././gcc/rtl.h"
extern enum machine_mode choose_hard_reg_mode(unsigned int , unsigned int , unsigned char ); 
#line 1553 "../.././gcc/rtl.h"
extern  rtx set_unique_reg_note( rtx , enum reg_note ,  rtx ); 
# 1326 "../.././gcc/rtl.h" 
# 1570 "../.././gcc/rtl.h" 
typedef struct replace_label_data { rtx r1;  rtx r2; unsigned char update_label_nuses; }replace_label_data; 
#line 1572 "../.././gcc/rtl.h"
extern int rtx_addr_can_trap_p( rtx ); 
#line 1573 "../.././gcc/rtl.h"
extern unsigned char nonzero_address_p( rtx ); 
#line 1574 "../.././gcc/rtl.h"
extern int rtx_unstable_p( rtx ); 
#line 1575 "../.././gcc/rtl.h"
extern int rtx_varies_p( rtx , int ); 
#line 1576 "../.././gcc/rtl.h"
extern int rtx_addr_varies_p( rtx , int ); 
#line 1577 "../.././gcc/rtl.h"
extern long get_integer_term( rtx ); 
#line 1578 "../.././gcc/rtl.h"
extern  rtx get_related_value( rtx ); 
#line 1579 "../.././gcc/rtl.h"
extern int global_reg_mentioned_p( rtx ); 
#line 1580 "../.././gcc/rtl.h"
extern int reg_mentioned_p( rtx ,  rtx ); 
#line 1581 "../.././gcc/rtl.h"
extern int count_occurrences( rtx ,  rtx , int ); 
#line 1582 "../.././gcc/rtl.h"
extern int reg_referenced_p( rtx ,  rtx ); 
#line 1583 "../.././gcc/rtl.h"
extern int reg_used_between_p( rtx ,  rtx ,  rtx ); 
#line 1584 "../.././gcc/rtl.h"
extern int reg_set_between_p( rtx ,  rtx ,  rtx ); 
#line 1585 "../.././gcc/rtl.h"
extern int commutative_operand_precedence( rtx ); 
#line 1586 "../.././gcc/rtl.h"
extern int swap_commutative_operands_p( rtx ,  rtx ); 
#line 1587 "../.././gcc/rtl.h"
extern int modified_between_p( rtx ,  rtx ,  rtx ); 
#line 1588 "../.././gcc/rtl.h"
extern int no_labels_between_p( rtx ,  rtx ); 
#line 1589 "../.././gcc/rtl.h"
extern int modified_in_p( rtx ,  rtx ); 
#line 1590 "../.././gcc/rtl.h"
extern int reg_set_p( rtx ,  rtx ); 
#line 1591 "../.././gcc/rtl.h"
extern  rtx single_set_2( rtx ,  rtx ); 
#line 1592 "../.././gcc/rtl.h"
extern int multiple_sets( rtx ); 
#line 1593 "../.././gcc/rtl.h"
extern int set_noop_p( rtx ); 
#line 1594 "../.././gcc/rtl.h"
extern int noop_move_p( rtx ); 
#line 1595 "../.././gcc/rtl.h"
extern  rtx find_last_value( rtx ,  rtx *,  rtx , int ); 
#line 1596 "../.././gcc/rtl.h"
extern int refers_to_regno_p(unsigned int , unsigned int ,  rtx ,  rtx *); 
#line 1597 "../.././gcc/rtl.h"
extern int reg_overlap_mentioned_p( rtx ,  rtx ); 
#line 1598 "../.././gcc/rtl.h"
extern  rtx set_of( rtx ,  rtx ); 
#line 1599 "../.././gcc/rtl.h"
extern void note_stores( rtx , void (*)( rtx ,  rtx , void *), void *); 
#line 1600 "../.././gcc/rtl.h"
extern void note_uses( rtx *, void (*)( rtx *, void *), void *); 
#line 1601 "../.././gcc/rtl.h"
extern int dead_or_set_p( rtx ,  rtx ); 
#line 1602 "../.././gcc/rtl.h"
extern int dead_or_set_regno_p( rtx , unsigned int ); 
#line 1603 "../.././gcc/rtl.h"
extern  rtx find_reg_note( rtx , enum reg_note ,  rtx ); 
#line 1604 "../.././gcc/rtl.h"
extern  rtx find_regno_note( rtx , enum reg_note , unsigned int ); 
#line 1605 "../.././gcc/rtl.h"
extern  rtx find_reg_equal_equiv_note( rtx ); 
#line 1606 "../.././gcc/rtl.h"
extern int find_reg_fusage( rtx , enum rtx_code ,  rtx ); 
#line 1607 "../.././gcc/rtl.h"
extern int find_regno_fusage( rtx , enum rtx_code , unsigned int ); 
#line 1608 "../.././gcc/rtl.h"
extern int pure_call_p( rtx ); 
#line 1609 "../.././gcc/rtl.h"
extern void remove_note( rtx ,  rtx ); 
#line 1610 "../.././gcc/rtl.h"
extern int side_effects_p( rtx ); 
#line 1611 "../.././gcc/rtl.h"
extern int volatile_refs_p( rtx ); 
#line 1612 "../.././gcc/rtl.h"
extern int volatile_insn_p( rtx ); 
#line 1613 "../.././gcc/rtl.h"
extern int may_trap_p( rtx ); 
#line 1614 "../.././gcc/rtl.h"
extern int may_trap_or_fault_p( rtx ); 
#line 1615 "../.././gcc/rtl.h"
extern int inequality_comparisons_p( rtx ); 
#line 1616 "../.././gcc/rtl.h"
extern  rtx replace_rtx( rtx ,  rtx ,  rtx ); 
#line 1617 "../.././gcc/rtl.h"
extern  rtx replace_regs( rtx ,  rtx *, unsigned int , int ); 
#line 1618 "../.././gcc/rtl.h"
extern int replace_label( rtx *, void *); 
#line 1619 "../.././gcc/rtl.h"
extern int rtx_referenced_p( rtx ,  rtx ); 
#line 1620 "../.././gcc/rtl.h"
extern unsigned char tablejump_p( rtx ,  rtx *,  rtx *); 
#line 1621 "../.././gcc/rtl.h"
extern int computed_jump_p( rtx ); 
#line 1622 "../.././gcc/rtl.h"
typedef int (*rtx_function)( rtx *, void *); 
#line 1623 "../.././gcc/rtl.h"
extern int for_each_rtx( rtx *,  rtx_function , void *); 
#line 1624 "../.././gcc/rtl.h"
extern  rtx regno_use_in(unsigned int ,  rtx ); 
#line 1625 "../.././gcc/rtl.h"
extern int auto_inc_p( rtx ); 
#line 1626 "../.././gcc/rtl.h"
extern int in_expr_list_p( rtx ,  rtx ); 
#line 1627 "../.././gcc/rtl.h"
extern void remove_node_from_expr_list( rtx ,  rtx *); 
#line 1628 "../.././gcc/rtl.h"
extern int insns_safe_to_move_p( rtx ,  rtx ,  rtx *); 
#line 1629 "../.././gcc/rtl.h"
extern int loc_mentioned_in_p( rtx *,  rtx ); 
#line 1630 "../.././gcc/rtl.h"
extern  rtx find_first_parameter_load( rtx ,  rtx ); 
#line 1631 "../.././gcc/rtl.h"
extern unsigned char keep_with_call_p( rtx ); 
#line 1632 "../.././gcc/rtl.h"
extern unsigned char label_is_jump_target_p( rtx ,  rtx ); 
#line 1633 "../.././gcc/rtl.h"
extern int insn_rtx_cost( rtx ); 
#line 1637 "../.././gcc/rtl.h"
extern  rtx canonicalize_condition( rtx ,  rtx , int ,  rtx *,  rtx , int , int ); 
#line 1641 "../.././gcc/rtl.h"
extern  rtx get_condition( rtx ,  rtx *, int , int ); 
#line 1646 "../.././gcc/rtl.h"
extern  rtx find_use_as_address( rtx ,  rtx , long ); 
#line 1650 "../.././gcc/rtl.h"
void free_EXPR_LIST_list( rtx *); 
#line 1651 "../.././gcc/rtl.h"
void free_INSN_LIST_list( rtx *); 
#line 1652 "../.././gcc/rtl.h"
void free_EXPR_LIST_node( rtx ); 
#line 1653 "../.././gcc/rtl.h"
void free_INSN_LIST_node( rtx ); 
#line 1654 "../.././gcc/rtl.h"
 rtx alloc_INSN_LIST( rtx ,  rtx ); 
#line 1655 "../.././gcc/rtl.h"
 rtx alloc_EXPR_LIST(int ,  rtx ,  rtx ); 
#line 1663 "../.././gcc/rtl.h"
extern int max_parallel; 
#line 1666 "../.././gcc/rtl.h"
extern void free_reg_info(void ); 
#line 1669 "../.././gcc/rtl.h"
extern int asm_noperands( rtx ); 
#line 1671 "../.././gcc/rtl.h"
extern const char *decode_asm_operands( rtx ,  rtx *,  rtx **, const char **, enum machine_mode *); 
#line 1673 "../.././gcc/rtl.h"
extern enum reg_class reg_preferred_class(int ); 
#line 1674 "../.././gcc/rtl.h"
extern enum reg_class reg_alternate_class(int ); 
#line 1676 "../.././gcc/rtl.h"
extern void split_all_insns(int ); 
#line 1677 "../.././gcc/rtl.h"
extern void split_all_insns_noflow(void ); 
#line 1680 "../.././gcc/rtl.h"
extern  rtx const_int_rtx[64 * 2 + 1]; 
#line 1686 "../.././gcc/rtl.h"
extern  rtx const_true_rtx; 
#line 1688 "../.././gcc/rtl.h"
extern  rtx const_tiny_rtx[3][((int )MAX_MACHINE_MODE)]; 
# 1711 "../.././gcc/rtl.h" 
# 1742 "../.././gcc/rtl.h" 
enum global_rtl_index {GR_PC,GR_CC0,GR_STACK_POINTER,GR_FRAME_POINTER,GR_HARD_FRAME_POINTER,GR_ARG_POINTER,GR_VIRTUAL_INCOMING_ARGS,GR_VIRTUAL_STACK_ARGS,GR_VIRTUAL_STACK_DYNAMIC,GR_VIRTUAL_OUTGOING_ARGS,GR_VIRTUAL_CFA,GR_MAX}; 
#line 1745 "../.././gcc/rtl.h"
extern  rtx global_rtl[GR_MAX]; 
#line 1759 "../.././gcc/rtl.h"
extern  rtx pic_offset_table_rtx; 
#line 1760 "../.././gcc/rtl.h"
extern  rtx static_chain_rtx; 
#line 1761 "../.././gcc/rtl.h"
extern  rtx static_chain_incoming_rtx; 
#line 1762 "../.././gcc/rtl.h"
extern  rtx return_address_pointer_rtx; 
# 1759 "../.././gcc/rtl.h" 
# 7 "./genrtl.h" 1
extern  rtx gen_rtx_fmt_ee(enum rtx_code , enum machine_mode mode,  rtx arg0,  rtx arg1); 
#line 9 "./genrtl.h"
extern  rtx gen_rtx_fmt_ue(enum rtx_code , enum machine_mode mode,  rtx arg0,  rtx arg1); 
#line 11 "./genrtl.h"
extern  rtx gen_rtx_fmt_E(enum rtx_code , enum machine_mode mode,  rtvec arg0); 
#line 13 "./genrtl.h"
extern  rtx gen_rtx_fmt_e(enum rtx_code , enum machine_mode mode,  rtx arg0); 
#line 18 "./genrtl.h"
extern  rtx gen_rtx_fmt_iuuBieiee(enum rtx_code , enum machine_mode mode, int arg0,  rtx arg1,  rtx arg2, struct basic_block_def *arg3, int arg4,  rtx arg5, int arg6,  rtx arg7,  rtx arg8); 
#line 23 "./genrtl.h"
extern  rtx gen_rtx_fmt_iuuBieiee0(enum rtx_code , enum machine_mode mode, int arg0,  rtx arg1,  rtx arg2, struct basic_block_def *arg3, int arg4,  rtx arg5, int arg6,  rtx arg7,  rtx arg8); 
#line 28 "./genrtl.h"
extern  rtx gen_rtx_fmt_iuuBieieee(enum rtx_code , enum machine_mode mode, int arg0,  rtx arg1,  rtx arg2, struct basic_block_def *arg3, int arg4,  rtx arg5, int arg6,  rtx arg7,  rtx arg8,  rtx arg9); 
#line 30 "./genrtl.h"
extern  rtx gen_rtx_fmt_iuu000000(enum rtx_code , enum machine_mode mode, int arg0,  rtx arg1,  rtx arg2); 
#line 34 "./genrtl.h"
extern  rtx gen_rtx_fmt_iuuB00is(enum rtx_code , enum machine_mode mode, int arg0,  rtx arg1,  rtx arg2, struct basic_block_def *arg3, int arg4, const char *arg5); 
#line 36 "./genrtl.h"
extern  rtx gen_rtx_fmt_s(enum rtx_code , enum machine_mode mode, const char *arg0); 
#line 40 "./genrtl.h"
extern  rtx gen_rtx_fmt_ssiEEsi(enum rtx_code , enum machine_mode mode, const char *arg0, const char *arg1, int arg2,  rtvec arg3,  rtvec arg4, const char *arg5, int arg6); 
#line 42 "./genrtl.h"
extern  rtx gen_rtx_fmt_Ei(enum rtx_code , enum machine_mode mode,  rtvec arg0, int arg1); 
#line 45 "./genrtl.h"
extern  rtx gen_rtx_fmt_eEee0(enum rtx_code , enum machine_mode mode,  rtx arg0,  rtvec arg1,  rtx arg2,  rtx arg3); 
#line 47 "./genrtl.h"
extern  rtx gen_rtx_fmt_eee(enum rtx_code , enum machine_mode mode,  rtx arg0,  rtx arg1,  rtx arg2); 
#line 48 "./genrtl.h"
extern  rtx gen_rtx_fmt_(enum rtx_code , enum machine_mode mode); 
#line 50 "./genrtl.h"
extern  rtx gen_rtx_fmt_i(enum rtx_code , enum machine_mode mode, int arg0); 
#line 52 "./genrtl.h"
extern  rtx gen_rtx_fmt_w(enum rtx_code , enum machine_mode mode, long arg0); 
#line 53 "./genrtl.h"
extern  rtx gen_rtx_fmt_0(enum rtx_code , enum machine_mode mode); 
#line 55 "./genrtl.h"
extern  rtx gen_rtx_fmt_i00(enum rtx_code , enum machine_mode mode, int arg0); 
#line 57 "./genrtl.h"
extern  rtx gen_rtx_fmt_ei(enum rtx_code , enum machine_mode mode,  rtx arg0, int arg1); 
#line 59 "./genrtl.h"
extern  rtx gen_rtx_fmt_e0(enum rtx_code , enum machine_mode mode,  rtx arg0); 
#line 61 "./genrtl.h"
extern  rtx gen_rtx_fmt_u0(enum rtx_code , enum machine_mode mode,  rtx arg0); 
#line 63 "./genrtl.h"
extern  rtx gen_rtx_fmt_s00(enum rtx_code , enum machine_mode mode, const char *arg0); 
#line 65 "./genrtl.h"
extern  rtx gen_rtx_fmt_te(enum rtx_code , enum machine_mode mode, union tree_node *arg0,  rtx arg1); 
#line 68 "./genrtl.h"
extern  rtx gen_rtx_fmt_iss(enum rtx_code , enum machine_mode mode, int arg0, const char *arg1, const char *arg2); 
#line 70 "./genrtl.h"
extern  rtx gen_rtx_fmt_is(enum rtx_code , enum machine_mode mode, int arg0, const char *arg1); 
#line 73 "./genrtl.h"
extern  rtx gen_rtx_fmt_isE(enum rtx_code , enum machine_mode mode, int arg0, const char *arg1,  rtvec arg2); 
#line 75 "./genrtl.h"
extern  rtx gen_rtx_fmt_iE(enum rtx_code , enum machine_mode mode, int arg0,  rtvec arg1); 
#line 78 "./genrtl.h"
extern  rtx gen_rtx_fmt_sEss(enum rtx_code , enum machine_mode mode, const char *arg0,  rtvec arg1, const char *arg2, const char *arg3); 
#line 80 "./genrtl.h"
extern  rtx gen_rtx_fmt_eE(enum rtx_code , enum machine_mode mode,  rtx arg0,  rtvec arg1); 
#line 83 "./genrtl.h"
extern  rtx gen_rtx_fmt_Ess(enum rtx_code , enum machine_mode mode,  rtvec arg0, const char *arg1, const char *arg2); 
#line 86 "./genrtl.h"
extern  rtx gen_rtx_fmt_ses(enum rtx_code , enum machine_mode mode, const char *arg0,  rtx arg1, const char *arg2); 
#line 88 "./genrtl.h"
extern  rtx gen_rtx_fmt_ss(enum rtx_code , enum machine_mode mode, const char *arg0, const char *arg1); 
#line 91 "./genrtl.h"
extern  rtx gen_rtx_fmt_sies(enum rtx_code , enum machine_mode mode, const char *arg0, int arg1,  rtx arg2, const char *arg3); 
#line 94 "./genrtl.h"
extern  rtx gen_rtx_fmt_sse(enum rtx_code , enum machine_mode mode, const char *arg0, const char *arg1,  rtx arg2); 
#line 96 "./genrtl.h"
extern  rtx gen_rtx_fmt_sE(enum rtx_code , enum machine_mode mode, const char *arg0,  rtvec arg1); 
#line 98 "./genrtl.h"
extern  rtx gen_rtx_fmt_ii(enum rtx_code , enum machine_mode mode, int arg0, int arg1); 
#line 100 "./genrtl.h"
extern  rtx gen_rtx_fmt_Ee(enum rtx_code , enum machine_mode mode,  rtvec arg0,  rtx arg1); 
# 1768 "../.././gcc/rtl.h" 2
# 1779 "../.././gcc/rtl.h" 
extern  rtx gen_rtx_CONST_INT(enum machine_mode , long ); 
#line 1780 "../.././gcc/rtl.h"
extern  rtx gen_rtx_CONST_VECTOR(enum machine_mode ,  rtvec ); 
#line 1781 "../.././gcc/rtl.h"
extern  rtx gen_raw_REG(enum machine_mode , int ); 
#line 1782 "../.././gcc/rtl.h"
extern  rtx gen_rtx_REG(enum machine_mode , unsigned ); 
#line 1783 "../.././gcc/rtl.h"
extern  rtx gen_rtx_SUBREG(enum machine_mode ,  rtx , int ); 
#line 1784 "../.././gcc/rtl.h"
extern  rtx gen_rtx_MEM(enum machine_mode ,  rtx ); 
#line 1852 "../.././gcc/rtl.h"
extern  rtx output_constant_def( tree , int ); 
#line 1853 "../.././gcc/rtl.h"
extern  rtx lookup_constant_def( tree ); 
#line 1857 "../.././gcc/rtl.h"
extern int flow2_completed; 
#line 1862 "../.././gcc/rtl.h"
extern int reload_completed; 
#line 1865 "../.././gcc/rtl.h"
extern int epilogue_completed; 
#line 1870 "../.././gcc/rtl.h"
extern int reload_in_progress; 
#line 1878 "../.././gcc/rtl.h"
extern int cse_not_expected; 
#line 1882 "../.././gcc/rtl.h"
extern int no_new_pseudos; 
#line 1888 "../.././gcc/rtl.h"
extern int rtx_to_tree_code(enum rtx_code ); 
#line 1891 "../.././gcc/rtl.h"
extern int delete_trivially_dead_insns( rtx , int ); 
#line 1892 "../.././gcc/rtl.h"
extern int cse_main( rtx , int ,  FILE *); 
#line 1893 "../.././gcc/rtl.h"
extern void cse_condition_code_reg(void ); 
#line 1894 "../.././gcc/rtl.h"
extern int exp_equiv_p( rtx ,  rtx , int , unsigned char ); 
#line 1895 "../.././gcc/rtl.h"
extern unsigned hash_rtx( rtx x, enum machine_mode , int *, int *, unsigned char ); 
#line 1898 "../.././gcc/rtl.h"
extern int comparison_dominates_p(enum rtx_code , enum rtx_code ); 
#line 1899 "../.././gcc/rtl.h"
extern int condjump_p( rtx ); 
#line 1900 "../.././gcc/rtl.h"
extern int any_condjump_p( rtx ); 
#line 1901 "../.././gcc/rtl.h"
extern int any_uncondjump_p( rtx ); 
#line 1902 "../.././gcc/rtl.h"
extern  rtx pc_set( rtx ); 
#line 1903 "../.././gcc/rtl.h"
extern  rtx condjump_label( rtx ); 
#line 1904 "../.././gcc/rtl.h"
extern int simplejump_p( rtx ); 
#line 1905 "../.././gcc/rtl.h"
extern int returnjump_p( rtx ); 
#line 1906 "../.././gcc/rtl.h"
extern int onlyjump_p( rtx ); 
#line 1907 "../.././gcc/rtl.h"
extern int only_sets_cc0_p( rtx ); 
#line 1908 "../.././gcc/rtl.h"
extern int sets_cc0_p( rtx ); 
#line 1909 "../.././gcc/rtl.h"
extern int invert_jump_1( rtx ,  rtx ); 
#line 1910 "../.././gcc/rtl.h"
extern int invert_jump( rtx ,  rtx , int ); 
#line 1911 "../.././gcc/rtl.h"
extern int rtx_renumbered_equal_p( rtx ,  rtx ); 
#line 1912 "../.././gcc/rtl.h"
extern int true_regnum( rtx ); 
#line 1913 "../.././gcc/rtl.h"
extern unsigned int reg_or_subregno( rtx ); 
#line 1914 "../.././gcc/rtl.h"
extern int redirect_jump_1( rtx ,  rtx ); 
#line 1915 "../.././gcc/rtl.h"
extern void redirect_jump_2( rtx ,  rtx ,  rtx , int , int ); 
#line 1916 "../.././gcc/rtl.h"
extern int redirect_jump( rtx ,  rtx , int ); 
#line 1917 "../.././gcc/rtl.h"
extern void rebuild_jump_labels( rtx ); 
#line 1918 "../.././gcc/rtl.h"
extern  rtx reversed_comparison( rtx , enum machine_mode ); 
#line 1919 "../.././gcc/rtl.h"
extern enum rtx_code reversed_comparison_code( rtx ,  rtx ); 
#line 1921 "../.././gcc/rtl.h"
extern enum rtx_code reversed_comparison_code_parts(enum rtx_code ,  rtx ,  rtx ,  rtx ); 
#line 1922 "../.././gcc/rtl.h"
extern void delete_for_peephole( rtx ,  rtx ); 
#line 1923 "../.././gcc/rtl.h"
extern int condjump_in_parallel_p( rtx ); 
#line 1924 "../.././gcc/rtl.h"
extern void purge_line_number_notes(void ); 
#line 1927 "../.././gcc/rtl.h"
extern int max_reg_num(void ); 
#line 1928 "../.././gcc/rtl.h"
extern int max_label_num(void ); 
#line 1929 "../.././gcc/rtl.h"
extern int get_first_label_num(void ); 
#line 1930 "../.././gcc/rtl.h"
extern void maybe_set_first_label_num( rtx ); 
#line 1931 "../.././gcc/rtl.h"
extern void delete_insns_since( rtx ); 
#line 1932 "../.././gcc/rtl.h"
extern void mark_reg_pointer( rtx , int ); 
#line 1933 "../.././gcc/rtl.h"
extern void mark_user_reg( rtx ); 
#line 1934 "../.././gcc/rtl.h"
extern void reset_used_flags( rtx ); 
#line 1935 "../.././gcc/rtl.h"
extern void set_used_flags( rtx ); 
#line 1936 "../.././gcc/rtl.h"
extern void reorder_insns( rtx ,  rtx ,  rtx ); 
#line 1937 "../.././gcc/rtl.h"
extern void reorder_insns_nobb( rtx ,  rtx ,  rtx ); 
#line 1938 "../.././gcc/rtl.h"
extern int get_max_uid(void ); 
#line 1939 "../.././gcc/rtl.h"
extern int in_sequence_p(void ); 
#line 1940 "../.././gcc/rtl.h"
extern void force_next_line_note(void ); 
#line 1941 "../.././gcc/rtl.h"
extern void init_emit(void ); 
#line 1942 "../.././gcc/rtl.h"
extern void init_emit_once(int ); 
#line 1943 "../.././gcc/rtl.h"
extern void push_topmost_sequence(void ); 
#line 1944 "../.././gcc/rtl.h"
extern void pop_topmost_sequence(void ); 
#line 1945 "../.././gcc/rtl.h"
extern void set_new_first_and_last_insn( rtx ,  rtx ); 
#line 1946 "../.././gcc/rtl.h"
extern void unshare_all_rtl(void ); 
#line 1947 "../.././gcc/rtl.h"
extern void unshare_all_rtl_again( rtx ); 
#line 1948 "../.././gcc/rtl.h"
extern void unshare_all_rtl_in_chain( rtx ); 
#line 1949 "../.././gcc/rtl.h"
extern void verify_rtl_sharing(void ); 
#line 1950 "../.././gcc/rtl.h"
extern void set_first_insn( rtx ); 
#line 1951 "../.././gcc/rtl.h"
extern void set_last_insn( rtx ); 
#line 1952 "../.././gcc/rtl.h"
extern void link_cc0_insns( rtx ); 
#line 1953 "../.././gcc/rtl.h"
extern void add_insn( rtx ); 
#line 1954 "../.././gcc/rtl.h"
extern void add_insn_before( rtx ,  rtx ); 
#line 1955 "../.././gcc/rtl.h"
extern void add_insn_after( rtx ,  rtx ); 
#line 1956 "../.././gcc/rtl.h"
extern void remove_insn( rtx ); 
#line 1957 "../.././gcc/rtl.h"
extern void emit_insn_after_with_line_notes( rtx ,  rtx ,  rtx ); 
#line 1958 "../.././gcc/rtl.h"
extern  rtx emit( rtx ); 
#line 1959 "../.././gcc/rtl.h"
extern void renumber_insns( FILE *); 
#line 1960 "../.././gcc/rtl.h"
extern void remove_unnecessary_notes(void ); 
#line 1961 "../.././gcc/rtl.h"
extern  rtx delete_insn( rtx ); 
#line 1962 "../.././gcc/rtl.h"
extern  rtx entry_of_function(void ); 
#line 1963 "../.././gcc/rtl.h"
extern void delete_insn_chain( rtx ,  rtx ); 
#line 1964 "../.././gcc/rtl.h"
extern  rtx unlink_insn_chain( rtx ,  rtx ); 
#line 1965 "../.././gcc/rtl.h"
extern  rtx delete_insn_and_edges( rtx ); 
#line 1966 "../.././gcc/rtl.h"
extern void delete_insn_chain_and_edges( rtx ,  rtx ); 
#line 1967 "../.././gcc/rtl.h"
extern  rtx gen_lowpart_SUBREG(enum machine_mode ,  rtx ); 
#line 1968 "../.././gcc/rtl.h"
extern  rtx gen_const_mem(enum machine_mode ,  rtx ); 
#line 1969 "../.././gcc/rtl.h"
extern  rtx gen_frame_mem(enum machine_mode ,  rtx ); 
#line 1970 "../.././gcc/rtl.h"
extern  rtx gen_tmp_stack_mem(enum machine_mode ,  rtx ); 
#line 1972 "../.././gcc/rtl.h"
extern unsigned char validate_subreg(enum machine_mode , enum machine_mode ,  rtx , unsigned int ); 
#line 1975 "../.././gcc/rtl.h"
extern int combine_instructions( rtx , unsigned int ); 
#line 1976 "../.././gcc/rtl.h"
extern unsigned int extended_count( rtx , enum machine_mode , int ); 
#line 1977 "../.././gcc/rtl.h"
extern  rtx remove_death(unsigned int ,  rtx ); 
#line 1978 "../.././gcc/rtl.h"
extern void dump_combine_stats( FILE *); 
#line 1979 "../.././gcc/rtl.h"
extern void dump_combine_total_stats( FILE *); 
#line 1981 "../.././gcc/rtl.h"
extern void web_main(void ); 
#line 1984 "../.././gcc/rtl.h"
extern void schedule_insns( FILE *); 
#line 1987 "../.././gcc/rtl.h"
extern void schedule_ebbs( FILE *); 
#line 1990 "../.././gcc/rtl.h"
extern void fix_sched_param(const char *, const char *); 
#line 1993 "../.././gcc/rtl.h"
extern const char *print_rtx_head; 
#line 1994 "../.././gcc/rtl.h"
extern void debug_rtx( rtx ); 
#line 1995 "../.././gcc/rtl.h"
extern void debug_rtx_list( rtx , int ); 
#line 1996 "../.././gcc/rtl.h"
extern void debug_rtx_range( rtx ,  rtx ); 
#line 1997 "../.././gcc/rtl.h"
extern  rtx debug_rtx_find( rtx , int ); 
#line 1998 "../.././gcc/rtl.h"
extern void print_mem_expr( FILE *,  tree ); 
#line 1999 "../.././gcc/rtl.h"
extern void print_rtl( FILE *,  rtx ); 
#line 2000 "../.././gcc/rtl.h"
extern void print_simple_rtl( FILE *,  rtx ); 
#line 2001 "../.././gcc/rtl.h"
extern int print_rtl_single( FILE *,  rtx ); 
#line 2002 "../.././gcc/rtl.h"
extern void print_inline_rtx( FILE *,  rtx , int ); 
#line 2005 "../.././gcc/rtl.h"
extern void init_loop(void ); 
#line 2006 "../.././gcc/rtl.h"
extern void loop_optimize( rtx ,  FILE *, int ); 
#line 2009 "../.././gcc/rtl.h"
extern void branch_target_load_optimize(unsigned char ); 
#line 2012 "../.././gcc/rtl.h"
extern void reposition_prologue_and_epilogue_notes( rtx ); 
#line 2013 "../.././gcc/rtl.h"
extern void thread_prologue_and_epilogue_insns( rtx ); 
#line 2014 "../.././gcc/rtl.h"
extern int prologue_epilogue_contains( rtx ); 
#line 2015 "../.././gcc/rtl.h"
extern int sibcall_epilogue_contains( rtx ); 
#line 2016 "../.././gcc/rtl.h"
extern void mark_temp_addr_taken( rtx ); 
#line 2017 "../.././gcc/rtl.h"
extern void update_temp_slot_address( rtx ,  rtx ); 
#line 2020 "../.././gcc/rtl.h"
extern void expand_null_return(void ); 
#line 2021 "../.././gcc/rtl.h"
extern void expand_naked_return(void ); 
#line 2022 "../.././gcc/rtl.h"
extern void emit_jump( rtx ); 
#line 2026 "../.././gcc/rtl.h"
extern  rtx move_by_pieces( rtx ,  rtx , unsigned long , unsigned int , int ); 
#line 2029 "../.././gcc/rtl.h"
extern void recompute_reg_usage(void ); 
#line 2030 "../.././gcc/rtl.h"
extern int initialize_uninitialized_subregs(void ); 
#line 2031 "../.././gcc/rtl.h"
extern void delete_dead_jumptables(void ); 
#line 2032 "../.././gcc/rtl.h"
extern void print_rtl_with_bb( FILE *,  rtx ); 
#line 2033 "../.././gcc/rtl.h"
extern void dump_flow_info( FILE *); 
#line 2036 "../.././gcc/rtl.h"
extern void init_expmed(void ); 
#line 2037 "../.././gcc/rtl.h"
extern void expand_inc( rtx ,  rtx ); 
#line 2038 "../.././gcc/rtl.h"
extern void expand_dec( rtx ,  rtx ); 
#line 2041 "../.././gcc/rtl.h"
extern unsigned char can_copy_p(enum machine_mode ); 
#line 2042 "../.././gcc/rtl.h"
extern  rtx fis_get_condition( rtx ); 
#line 2043 "../.././gcc/rtl.h"
extern int gcse_main( rtx ,  FILE *); 
#line 2044 "../.././gcc/rtl.h"
extern int bypass_jumps( FILE *); 
#line 2047 "../.././gcc/rtl.h"
extern void gcse_after_reload_main( rtx ); 
#line 2050 "../.././gcc/rtl.h"
extern void mark_elimination(int , int ); 
#line 2051 "../.././gcc/rtl.h"
extern int global_alloc( FILE *); 
#line 2052 "../.././gcc/rtl.h"
extern void dump_global_regs( FILE *); 
#line 2055 "../.././gcc/rtl.h"
extern void retry_global_alloc(int ,  HARD_REG_SET ); 
#line 2057 "../.././gcc/rtl.h"
extern void build_insn_chain( rtx ); 
#line 2060 "../.././gcc/rtl.h"
extern int reg_classes_intersect_p(enum reg_class , enum reg_class ); 
#line 2061 "../.././gcc/rtl.h"
extern int reg_class_subset_p(enum reg_class , enum reg_class ); 
#line 2062 "../.././gcc/rtl.h"
extern void globalize_reg(int ); 
#line 2063 "../.././gcc/rtl.h"
extern void init_reg_modes_once(void ); 
#line 2064 "../.././gcc/rtl.h"
extern void init_regs(void ); 
#line 2065 "../.././gcc/rtl.h"
extern void init_fake_stack_mems(void ); 
#line 2066 "../.././gcc/rtl.h"
extern void init_reg_sets(void ); 
#line 2067 "../.././gcc/rtl.h"
extern void regclass_init(void ); 
#line 2068 "../.././gcc/rtl.h"
extern void regclass( rtx , int ,  FILE *); 
#line 2069 "../.././gcc/rtl.h"
extern void reg_scan( rtx , unsigned int ); 
#line 2070 "../.././gcc/rtl.h"
extern void reg_scan_update( rtx ,  rtx , unsigned int ); 
#line 2071 "../.././gcc/rtl.h"
extern void fix_register(const char *, int , int ); 
#line 2072 "../.././gcc/rtl.h"
extern void init_subregs_of_mode(void ); 
#line 2073 "../.././gcc/rtl.h"
extern void record_subregs_of_mode( rtx ); 
#line 2076 "../.././gcc/rtl.h"
extern void cannot_change_mode_set_regs( HARD_REG_SET *, enum machine_mode , unsigned int ); 
#line 2079 "../.././gcc/rtl.h"
extern unsigned char invalid_mode_change_p(unsigned int , enum reg_class , enum machine_mode ); 
#line 2082 "../.././gcc/rtl.h"
extern void regmove_optimize( rtx , int ,  FILE *); 
#line 2083 "../.././gcc/rtl.h"
extern void combine_stack_adjustments(void ); 
#line 2086 "../.././gcc/rtl.h"
extern void dbr_schedule( rtx ,  FILE *); 
#line 2089 "../.././gcc/rtl.h"
extern void dump_local_alloc( FILE *); 
#line 2090 "../.././gcc/rtl.h"
extern int local_alloc(void ); 
#line 2093 "../.././gcc/rtl.h"
extern int function_invariant_p( rtx ); 
#line 2096 "../.././gcc/rtl.h"
extern unsigned char reg_to_stack( FILE *); 
#line 2109 "../.././gcc/rtl.h"
enum libcall_type {LCT_NORMAL=0,LCT_CONST=1,LCT_PURE=2,LCT_CONST_MAKE_BLOCK=3,LCT_PURE_MAKE_BLOCK=4,LCT_NORETURN=5,LCT_THROW=6,LCT_RETURNS_TWICE=7}; 
#line 2112 "../.././gcc/rtl.h"
extern void emit_library_call( rtx , enum libcall_type , enum machine_mode , int , ...); 
#line 2114 "../.././gcc/rtl.h"
extern  rtx emit_library_call_value( rtx ,  rtx , enum libcall_type , enum machine_mode , int , ...); 
#line 2117 "../.././gcc/rtl.h"
extern int in_data_section(void ); 
#line 2118 "../.././gcc/rtl.h"
extern void init_varasm_once(void ); 
#line 2119 "../.././gcc/rtl.h"
extern enum tls_model decl_default_tls_model( tree ); 
#line 2122 "../.././gcc/rtl.h"
extern void traverse_md_constants(int (*)(void **, void *), void *); 
#line 2123 "../.././gcc/rtl.h"
struct md_constant {char *name,*value; }; 
#line 2126 "../.././gcc/rtl.h"
extern int read_skip_spaces( FILE *); 
#line 2127 "../.././gcc/rtl.h"
extern unsigned char read_rtx( FILE *,  rtx *, int *); 
#line 2128 "../.././gcc/rtl.h"
extern void copy_rtx_ptr_loc(const void *, const void *); 
#line 2129 "../.././gcc/rtl.h"
extern void print_rtx_ptr_loc(const void *); 
#line 2130 "../.././gcc/rtl.h"
extern const char *join_c_conditions(const char *, const char *); 
#line 2131 "../.././gcc/rtl.h"
extern void print_c_condition(const char *); 
#line 2132 "../.././gcc/rtl.h"
extern const char *read_rtx_filename; 
#line 2133 "../.././gcc/rtl.h"
extern int read_rtx_lineno; 
#line 2136 "../.././gcc/rtl.h"
extern void clear_reg_alias_info( rtx ); 
#line 2137 "../.././gcc/rtl.h"
extern  rtx canon_rtx( rtx ); 
#line 2138 "../.././gcc/rtl.h"
extern int true_dependence( rtx , enum machine_mode ,  rtx , int (*)( rtx , int )); 
#line 2139 "../.././gcc/rtl.h"
extern  rtx get_addr( rtx ); 
#line 2141 "../.././gcc/rtl.h"
extern int canon_true_dependence( rtx , enum machine_mode ,  rtx ,  rtx , int (*)( rtx , int )); 
#line 2142 "../.././gcc/rtl.h"
extern int read_dependence( rtx ,  rtx ); 
#line 2143 "../.././gcc/rtl.h"
extern int anti_dependence( rtx ,  rtx ); 
#line 2144 "../.././gcc/rtl.h"
extern int output_dependence( rtx ,  rtx ); 
#line 2145 "../.././gcc/rtl.h"
extern void mark_constant_function(void ); 
#line 2146 "../.././gcc/rtl.h"
extern void init_alias_once(void ); 
#line 2147 "../.././gcc/rtl.h"
extern void init_alias_analysis(void ); 
#line 2148 "../.././gcc/rtl.h"
extern void end_alias_analysis(void ); 
#line 2149 "../.././gcc/rtl.h"
extern unsigned char memory_modified_in_insn_p( rtx ,  rtx ); 
#line 2150 "../.././gcc/rtl.h"
extern  rtx find_base_term( rtx ); 
#line 2151 "../.././gcc/rtl.h"
extern  rtx gen_hard_reg_clobber(enum machine_mode , unsigned int ); 
#line 2152 "../.././gcc/rtl.h"
extern  rtx get_reg_known_value(unsigned int ); 
#line 2153 "../.././gcc/rtl.h"
extern unsigned char get_reg_known_equiv_p(unsigned int ); 
#line 2156 "../.././gcc/rtl.h"
extern int stack_regs_mentioned( rtx insn); 
#line 2160 "../.././gcc/rtl.h"
extern  rtx stack_limit_rtx; 
#line 2163 "../.././gcc/rtl.h"
extern void regrename_optimize(void ); 
#line 2164 "../.././gcc/rtl.h"
extern void copyprop_hardreg_forward(void ); 
#line 2167 "../.././gcc/rtl.h"
extern void if_convert(int ); 
#line 2170 "../.././gcc/rtl.h"
extern void invert_br_probabilities( rtx ); 
#line 2171 "../.././gcc/rtl.h"
extern unsigned char expensive_function_p(int ); 
#line 2173 "../.././gcc/rtl.h"
extern void tracer(unsigned int ); 
#line 2176 "../.././gcc/rtl.h"
extern void variable_tracking_main(void ); 
#line 2180 "../.././gcc/rtl.h"
extern void get_mode_bounds(enum machine_mode , int , enum machine_mode ,  rtx *,  rtx *); 
#line 2183 "../.././gcc/rtl.h"
extern  rtx reversed_condition( rtx ); 
#line 2184 "../.././gcc/rtl.h"
extern  rtx compare_and_jump_seq( rtx ,  rtx , enum rtx_code ,  rtx , int ,  rtx ); 
#line 2187 "../.././gcc/rtl.h"
extern  rtx canon_condition( rtx ); 
#line 2188 "../.././gcc/rtl.h"
extern void simplify_using_condition( rtx ,  rtx *, struct bitmap_head_def *); 
#line 2191 "../.././gcc/rtl.h"
extern void reg_alloc(void ); 
#line 2194 "../.././gcc/rtl.h"
extern void sms_schedule( FILE *); 
#line 2206 "../.././gcc/rtl.h"
struct rtl_hooks { rtx (*gen_lowpart)(enum machine_mode ,  rtx );  rtx (*gen_lowpart_no_emit)(enum machine_mode ,  rtx );  rtx (*reg_nonzero_bits)( rtx , enum machine_mode ,  rtx , enum machine_mode , unsigned long , unsigned long *);  rtx (*reg_num_sign_bit_copies)( rtx , enum machine_mode ,  rtx , enum machine_mode , unsigned int , unsigned int *); }; 
#line 2209 "../.././gcc/rtl.h"
extern struct rtl_hooks rtl_hooks; 
#line 2212 "../.././gcc/rtl.h"
extern const struct rtl_hooks general_rtl_hooks; 
# 1852 "../.././gcc/rtl.h" 
# 30 "../.././gcc/tree-mudflap.c" 2
# 1 "../.././gcc/tree.h" 1
# 28 "../.././gcc/tree.h" 
# 1 "../.././gcc/vec.h" 1
# 394 "../.././gcc/vec.h" 
extern void *vec_gc_p_reserve(void *, int ); 
#line 395 "../.././gcc/vec.h"
extern void *vec_gc_o_reserve(void *, int ,  size_t ,  size_t ); 
#line 396 "../.././gcc/vec.h"
extern void ggc_free(void *); 
#line 398 "../.././gcc/vec.h"
extern void *vec_heap_p_reserve(void *, int ); 
#line 399 "../.././gcc/vec.h"
extern void *vec_heap_o_reserve(void *, int ,  size_t ,  size_t ); 
# 29 "../.././gcc/tree.h" 2
# 1 "../.././gcc/tree.def" 1
# 43 "../.././gcc/tree.def" 
# 81 "../.././gcc/tree.def" 
# 135 "../.././gcc/tree.def" 
# 148 "../.././gcc/tree.def" 
# 165 "../.././gcc/tree.def" 
# 178 "../.././gcc/tree.def" 
# 211 "../.././gcc/tree.def" 
# 221 "../.././gcc/tree.def" 
# 275 "../.././gcc/tree.def" 
# 348 "../.././gcc/tree.def" 
# 377 "../.././gcc/tree.def" 
# 386 "../.././gcc/tree.def" 
# 428 "../.././gcc/tree.def" 
# 450 "../.././gcc/tree.def" 
# 460 "../.././gcc/tree.def" 
# 486 "../.././gcc/tree.def" 
# 498 "../.././gcc/tree.def" 
# 521 "../.././gcc/tree.def" 
# 551 "../.././gcc/tree.def" 
# 603 "../.././gcc/tree.def" 
# 670 "../.././gcc/tree.def" 
# 690 "../.././gcc/tree.def" 
# 747 "../.././gcc/tree.def" 
# 840 "../.././gcc/tree.def" 
# 915 "../.././gcc/tree.def" 
# 937 "../.././gcc/tree.def" 
# 949 "../.././gcc/tree.def" 
# 39 "../.././gcc/tree.h" 2
enum tree_code {ERROR_MARK,IDENTIFIER_NODE,TREE_LIST,TREE_VEC,BLOCK,OFFSET_TYPE,ENUMERAL_TYPE,BOOLEAN_TYPE,CHAR_TYPE,INTEGER_TYPE,REAL_TYPE,POINTER_TYPE,REFERENCE_TYPE,COMPLEX_TYPE,VECTOR_TYPE,ARRAY_TYPE,RECORD_TYPE,UNION_TYPE,QUAL_UNION_TYPE,VOID_TYPE,FUNCTION_TYPE,METHOD_TYPE,LANG_TYPE,INTEGER_CST,REAL_CST,COMPLEX_CST,VECTOR_CST,STRING_CST,FUNCTION_DECL,LABEL_DECL,FIELD_DECL,VAR_DECL,CONST_DECL,PARM_DECL,TYPE_DECL,RESULT_DECL,NAMESPACE_DECL,TRANSLATION_UNIT_DECL,COMPONENT_REF,BIT_FIELD_REF,INDIRECT_REF,ALIGN_INDIRECT_REF,MISALIGNED_INDIRECT_REF,ARRAY_REF,ARRAY_RANGE_REF,OBJ_TYPE_REF,EXC_PTR_EXPR,FILTER_EXPR,CONSTRUCTOR,COMPOUND_EXPR,MODIFY_EXPR,INIT_EXPR,TARGET_EXPR,COND_EXPR,VEC_COND_EXPR,BIND_EXPR,CALL_EXPR,WITH_CLEANUP_EXPR,CLEANUP_POINT_EXPR,PLACEHOLDER_EXPR,PLUS_EXPR,MINUS_EXPR,MULT_EXPR,TRUNC_DIV_EXPR,CEIL_DIV_EXPR,FLOOR_DIV_EXPR,ROUND_DIV_EXPR,TRUNC_MOD_EXPR,CEIL_MOD_EXPR,FLOOR_MOD_EXPR,ROUND_MOD_EXPR,RDIV_EXPR,EXACT_DIV_EXPR,FIX_TRUNC_EXPR,FIX_CEIL_EXPR,FIX_FLOOR_EXPR,FIX_ROUND_EXPR,FLOAT_EXPR,NEGATE_EXPR,MIN_EXPR,MAX_EXPR,ABS_EXPR,LSHIFT_EXPR,RSHIFT_EXPR,LROTATE_EXPR,RROTATE_EXPR,BIT_IOR_EXPR,BIT_XOR_EXPR,BIT_AND_EXPR,BIT_NOT_EXPR,TRUTH_ANDIF_EXPR,TRUTH_ORIF_EXPR,TRUTH_AND_EXPR,TRUTH_OR_EXPR,TRUTH_XOR_EXPR,TRUTH_NOT_EXPR,LT_EXPR,LE_EXPR,GT_EXPR,GE_EXPR,EQ_EXPR,NE_EXPR,UNORDERED_EXPR,ORDERED_EXPR,UNLT_EXPR,UNLE_EXPR,UNGT_EXPR,UNGE_EXPR,UNEQ_EXPR,LTGT_EXPR,RANGE_EXPR,CONVERT_EXPR,NOP_EXPR,NON_LVALUE_EXPR,VIEW_CONVERT_EXPR,SAVE_EXPR,ADDR_EXPR,FDESC_EXPR,COMPLEX_EXPR,CONJ_EXPR,REALPART_EXPR,IMAGPART_EXPR,PREDECREMENT_EXPR,PREINCREMENT_EXPR,POSTDECREMENT_EXPR,POSTINCREMENT_EXPR,VA_ARG_EXPR,TRY_CATCH_EXPR,TRY_FINALLY_EXPR,DECL_EXPR,LABEL_EXPR,GOTO_EXPR,RETURN_EXPR,EXIT_EXPR,LOOP_EXPR,SWITCH_EXPR,CASE_LABEL_EXPR,RESX_EXPR,ASM_EXPR,SSA_NAME,PHI_NODE,CATCH_EXPR,EH_FILTER_EXPR,SCEV_KNOWN,SCEV_NOT_KNOWN,POLYNOMIAL_CHREC,STATEMENT_LIST,VALUE_HANDLE,ASSERT_EXPR,TREE_BINFO,WITH_SIZE_EXPR,REALIGN_LOAD_EXPR,TARGET_MEM_REF,REDUC_MAX_EXPR,REDUC_MIN_EXPR,REDUC_PLUS_EXPR,VEC_LSHIFT_EXPR,VEC_RSHIFT_EXPR,LAST_AND_UNUSED_TREE_CODE}; 
#line 43 "../.././gcc/tree.h"
extern unsigned char tree_contains_struct[256][64]; 
#line 67 "../.././gcc/tree.h"
enum tree_code_class {tcc_exceptional,tcc_constant,tcc_type,tcc_declaration,tcc_reference,tcc_comparison,tcc_unary,tcc_binary,tcc_statement,tcc_expression}; 
#line 72 "../.././gcc/tree.h"
extern const char *const tree_code_class_strings[]; 
#line 80 "../.././gcc/tree.h"
extern const enum tree_code_class tree_code_type[]; 
# 54 "../.././gcc/tree.h" 
# 163 "../.././gcc/tree.h" 
extern const unsigned char tree_code_length[]; 
#line 168 "../.././gcc/tree.h"
extern const char *const tree_code_name[]; 
#line 171 "../.././gcc/tree.h"
static __inline__ void VEC_tree_must_be_pointer_type(void )  {

#line 171 "../.././gcc/tree.h"
((void )((( tree )1) == ((void *)1))); }
 
#line 171 "../.././gcc/tree.h"
typedef struct VEC_tree_base {unsigned num; unsigned alloc;  tree vec[1]; }VEC_tree_base; 
#line 171 "../.././gcc/tree.h"
typedef struct VEC_tree_none { VEC_tree_base base; }VEC_tree_none; 
#line 171 "../.././gcc/tree.h"
static __inline__ unsigned VEC_tree_base_length(const  VEC_tree_base *vec_)  {

#line 171 "../.././gcc/tree.h"
return (vec_?(vec_->num):0); }
 
#line 171 "../.././gcc/tree.h"
static __inline__  tree VEC_tree_base_last(const  VEC_tree_base *vec_)  {

#line 171 "../.././gcc/tree.h"
((void )(vec_ && (vec_->num))); 
#line 171 "../.././gcc/tree.h"
return (vec_->vec)[(vec_->num) - 1]; }
 
#line 171 "../.././gcc/tree.h"
static __inline__  tree VEC_tree_base_index(const  VEC_tree_base *vec_, unsigned ix_)  {

#line 171 "../.././gcc/tree.h"
((void )(vec_ && ix_ < (vec_->num))); 
#line 171 "../.././gcc/tree.h"
return (vec_->vec)[ix_]; }
 
#line 171 "../.././gcc/tree.h"
static __inline__ int VEC_tree_base_iterate(const  VEC_tree_base *vec_, unsigned ix_,  tree *ptr)  {

#line 171 "../.././gcc/tree.h"
if (vec_ && ix_ < (vec_->num)){
{ 
#line 171 "../.././gcc/tree.h"
(*ptr) = (vec_->vec)[ix_]; 
#line 171 "../.././gcc/tree.h"
return 1; } }else{
{ 
#line 171 "../.././gcc/tree.h"
(*ptr) = 0; 
#line 171 "../.././gcc/tree.h"
return 0; } }}
 
#line 171 "../.././gcc/tree.h"
static __inline__  size_t VEC_tree_base_embedded_size(int alloc_)  {

#line 171 "../.././gcc/tree.h"
return __builtin_offsetof ( VEC_tree_base  , vec) + alloc_ * sizeof ( tree ); }
 
#line 171 "../.././gcc/tree.h"
static __inline__ void VEC_tree_base_embedded_init( VEC_tree_base *vec_, int alloc_)  {

#line 171 "../.././gcc/tree.h"
(vec_->num) = 0; 
#line 171 "../.././gcc/tree.h"
(vec_->alloc) = alloc_; }
 
#line 171 "../.././gcc/tree.h"
static __inline__ int VEC_tree_base_space( VEC_tree_base *vec_, int alloc_)  {

#line 171 "../.././gcc/tree.h"
((void )(alloc_ >= 0)); 
#line 171 "../.././gcc/tree.h"
return (vec_?(vec_->alloc) - (vec_->num) >= ((unsigned )alloc_):(!alloc_)); }
 
#line 171 "../.././gcc/tree.h"
static __inline__  tree *VEC_tree_base_quick_push( VEC_tree_base *vec_,  tree obj_)  {

#line 171 "../.././gcc/tree.h"

#line 171 "../.././gcc/tree.h"
 tree *slot_;
#line 171 "../.././gcc/tree.h"
((void )((vec_->num) < (vec_->alloc))); 
#line 171 "../.././gcc/tree.h"
slot_ = (&(vec_->vec)[(vec_->num)++]); 
#line 171 "../.././gcc/tree.h"
(*slot_) = obj_; 
#line 171 "../.././gcc/tree.h"
return slot_; }
 
#line 171 "../.././gcc/tree.h"
static __inline__  tree VEC_tree_base_pop( VEC_tree_base *vec_)  {

#line 171 "../.././gcc/tree.h"

#line 171 "../.././gcc/tree.h"
 tree obj_;
#line 171 "../.././gcc/tree.h"
((void )((vec_->num))); 
#line 171 "../.././gcc/tree.h"
obj_ = (vec_->vec)[(--(vec_->num))]; 
#line 171 "../.././gcc/tree.h"
return obj_; }
 
#line 171 "../.././gcc/tree.h"
static __inline__ void VEC_tree_base_truncate( VEC_tree_base *vec_, unsigned size_)  {

#line 171 "../.././gcc/tree.h"
((void )((vec_?(vec_->num) >= size_:(!size_)))); 
#line 171 "../.././gcc/tree.h"
if (vec_){
(vec_->num) = size_; }}
 
#line 171 "../.././gcc/tree.h"
static __inline__  tree VEC_tree_base_replace( VEC_tree_base *vec_, unsigned ix_,  tree obj_)  {

#line 171 "../.././gcc/tree.h"

#line 171 "../.././gcc/tree.h"
 tree old_obj_;
#line 171 "../.././gcc/tree.h"
((void )(ix_ < (vec_->num))); 
#line 171 "../.././gcc/tree.h"
old_obj_ = (vec_->vec)[ix_]; 
#line 171 "../.././gcc/tree.h"
(vec_->vec)[ix_] = obj_; 
#line 171 "../.././gcc/tree.h"
return old_obj_; }
 
#line 171 "../.././gcc/tree.h"
static __inline__  tree *VEC_tree_base_quick_insert( VEC_tree_base *vec_, unsigned ix_,  tree obj_)  {

#line 171 "../.././gcc/tree.h"

#line 171 "../.././gcc/tree.h"
 tree *slot_;
#line 171 "../.././gcc/tree.h"
((void )((vec_->num) < (vec_->alloc))); 
#line 171 "../.././gcc/tree.h"
((void )(ix_ <= (vec_->num))); 
#line 171 "../.././gcc/tree.h"
slot_ = (&(vec_->vec)[ix_]); 
#line 171 "../.././gcc/tree.h"
memmove(slot_ + 1, slot_, ((vec_->num)++ - ix_) * sizeof ( tree )); 
#line 171 "../.././gcc/tree.h"
(*slot_) = obj_; 
#line 171 "../.././gcc/tree.h"
return slot_; }
 
#line 171 "../.././gcc/tree.h"
static __inline__  tree VEC_tree_base_ordered_remove( VEC_tree_base *vec_, unsigned ix_)  {

#line 171 "../.././gcc/tree.h"

#line 171 "../.././gcc/tree.h"
 tree *slot_;
#line 171 "../.././gcc/tree.h"

#line 171 "../.././gcc/tree.h"
 tree obj_;
#line 171 "../.././gcc/tree.h"
((void )(ix_ < (vec_->num))); 
#line 171 "../.././gcc/tree.h"
slot_ = (&(vec_->vec)[ix_]); 
#line 171 "../.././gcc/tree.h"
obj_ = (*slot_); 
#line 171 "../.././gcc/tree.h"
memmove(slot_, slot_ + 1, ((--(vec_->num)) - ix_) * sizeof ( tree )); 
#line 171 "../.././gcc/tree.h"
return obj_; }
 
#line 171 "../.././gcc/tree.h"
static __inline__  tree VEC_tree_base_unordered_remove( VEC_tree_base *vec_, unsigned ix_)  {

#line 171 "../.././gcc/tree.h"

#line 171 "../.././gcc/tree.h"
 tree *slot_;
#line 171 "../.././gcc/tree.h"

#line 171 "../.././gcc/tree.h"
 tree obj_;
#line 171 "../.././gcc/tree.h"
((void )(ix_ < (vec_->num))); 
#line 171 "../.././gcc/tree.h"
slot_ = (&(vec_->vec)[ix_]); 
#line 171 "../.././gcc/tree.h"
obj_ = (*slot_); 
#line 171 "../.././gcc/tree.h"
(*slot_) = (vec_->vec)[(--(vec_->num))]; 
#line 171 "../.././gcc/tree.h"
return obj_; }
 
#line 171 "../.././gcc/tree.h"
static __inline__  tree *VEC_tree_base_address( VEC_tree_base *vec_)  {

#line 171 "../.././gcc/tree.h"
return (vec_?(vec_->vec):0); }
 
#line 171 "../.././gcc/tree.h"
static __inline__ unsigned VEC_tree_base_lower_bound( VEC_tree_base *vec_, const  tree obj_, unsigned char (*lessthan_)(const  tree , const  tree ))  {

#line 171 "../.././gcc/tree.h"

#line 171 "../.././gcc/tree.h"
unsigned int len_ = VEC_tree_base_length(vec_);
#line 171 "../.././gcc/tree.h"

#line 171 "../.././gcc/tree.h"
unsigned int half_,middle_;
#line 171 "../.././gcc/tree.h"

#line 171 "../.././gcc/tree.h"
unsigned int first_ = 0;
#line 171 "../.././gcc/tree.h"
while(len_ > 0) { { 
#line 171 "../.././gcc/tree.h"

#line 171 "../.././gcc/tree.h"
 tree middle_elem_;
#line 171 "../.././gcc/tree.h"
half_ = len_ >> 1; 
#line 171 "../.././gcc/tree.h"
middle_ = first_; 
#line 171 "../.././gcc/tree.h"
middle_ += half_; 
#line 171 "../.././gcc/tree.h"
middle_elem_ = VEC_tree_base_index(vec_, middle_); 
#line 171 "../.././gcc/tree.h"
if (lessthan_(middle_elem_, obj_)){
{ 
#line 171 "../.././gcc/tree.h"
first_ = middle_; 
#line 171 "../.././gcc/tree.h"
(++first_); 
#line 171 "../.././gcc/tree.h"
len_ = len_ - half_ - 1; } }else{
len_ = half_; }} } 
#line 171 "../.././gcc/tree.h"
return first_; }
 
#line 171 "../.././gcc/tree.h"
struct vec_swallow_trailing_semi ; 
#line 172 "../.././gcc/tree.h"
typedef struct VEC_tree_gc { VEC_tree_base base; }VEC_tree_gc; 
#line 172 "../.././gcc/tree.h"
static __inline__  VEC_tree_gc *VEC_tree_gc_alloc(int alloc_)  {

#line 172 "../.././gcc/tree.h"
return (( VEC_tree_gc *)vec_gc_p_reserve((((void *)0)), (-alloc_))); }
 
#line 172 "../.././gcc/tree.h"
static __inline__ void VEC_tree_gc_free( VEC_tree_gc **vec_)  {

#line 172 "../.././gcc/tree.h"
if ((*vec_)){
ggc_free((*vec_)); }
#line 172 "../.././gcc/tree.h"
(*vec_) = (((void *)0)); }
 
#line 172 "../.././gcc/tree.h"
static __inline__  VEC_tree_gc *VEC_tree_gc_copy( VEC_tree_base *vec_)  {

#line 172 "../.././gcc/tree.h"

#line 172 "../.././gcc/tree.h"
 size_t len_ = (vec_?(vec_->num):0);
#line 172 "../.././gcc/tree.h"

#line 172 "../.././gcc/tree.h"
 VEC_tree_gc *new_vec_ = (((void *)0));
#line 172 "../.././gcc/tree.h"
if (len_){
{ 
#line 172 "../.././gcc/tree.h"
new_vec_ = (( VEC_tree_gc *)(vec_gc_p_reserve((((void *)0)), (-len_)))); 
#line 172 "../.././gcc/tree.h"
(new_vec_->base).num = len_; 
#line 172 "../.././gcc/tree.h"
memcpy((new_vec_->base).vec, (vec_->vec), sizeof ( tree ) * len_); } }
#line 172 "../.././gcc/tree.h"
return new_vec_; }
 
#line 172 "../.././gcc/tree.h"
static __inline__ int VEC_tree_gc_reserve( VEC_tree_gc **vec_, int alloc_)  {

#line 172 "../.././gcc/tree.h"

#line 172 "../.././gcc/tree.h"
int extend = (!VEC_tree_base_space(((((*vec_))?(&(((*vec_))->base)):0)), (alloc_ < 0?(-alloc_):alloc_)));
#line 172 "../.././gcc/tree.h"
if (extend){
(*vec_) = (( VEC_tree_gc *)vec_gc_p_reserve((*vec_), alloc_)); }
#line 172 "../.././gcc/tree.h"
return extend; }
 
#line 172 "../.././gcc/tree.h"
static __inline__ void VEC_tree_gc_safe_grow( VEC_tree_gc **vec_, int size_)  {

#line 172 "../.././gcc/tree.h"
((void )(size_ >= 0 && VEC_tree_base_length((((*vec_))?(&(((*vec_))->base)):0)) <= ((unsigned )size_))); 
#line 172 "../.././gcc/tree.h"
VEC_tree_gc_reserve(vec_, ((int )(((*vec_)?(((((*vec_))?(&(((*vec_))->base)):0))->num):0))) - size_); 
#line 172 "../.././gcc/tree.h"
(((((*vec_))?(&(((*vec_))->base)):0))->num) = size_; }
 
#line 172 "../.././gcc/tree.h"
static __inline__  tree *VEC_tree_gc_safe_push( VEC_tree_gc **vec_,  tree obj_)  {

#line 172 "../.././gcc/tree.h"
VEC_tree_gc_reserve(vec_, 1); 
#line 172 "../.././gcc/tree.h"
return VEC_tree_base_quick_push(((((*vec_))?(&(((*vec_))->base)):0)), obj_); }
 
#line 172 "../.././gcc/tree.h"
static __inline__  tree *VEC_tree_gc_safe_insert( VEC_tree_gc **vec_, unsigned ix_,  tree obj_)  {

#line 172 "../.././gcc/tree.h"
VEC_tree_gc_reserve(vec_, 1); 
#line 172 "../.././gcc/tree.h"
return VEC_tree_base_quick_insert(((((*vec_))?(&(((*vec_))->base)):0)), ix_, obj_); }
 
#line 172 "../.././gcc/tree.h"
struct vec_swallow_trailing_semi ; 
#line 173 "../.././gcc/tree.h"
typedef struct VEC_tree_heap { VEC_tree_base base; }VEC_tree_heap; 
#line 173 "../.././gcc/tree.h"
static __inline__  VEC_tree_heap *VEC_tree_heap_alloc(int alloc_)  {

#line 173 "../.././gcc/tree.h"
return (( VEC_tree_heap *)vec_heap_p_reserve((((void *)0)), (-alloc_))); }
 
#line 173 "../.././gcc/tree.h"
static __inline__ void VEC_tree_heap_free( VEC_tree_heap **vec_)  {

#line 173 "../.././gcc/tree.h"
if ((*vec_)){
free((*vec_)); }
#line 173 "../.././gcc/tree.h"
(*vec_) = (((void *)0)); }
 
#line 173 "../.././gcc/tree.h"
static __inline__  VEC_tree_heap *VEC_tree_heap_copy( VEC_tree_base *vec_)  {

#line 173 "../.././gcc/tree.h"

#line 173 "../.././gcc/tree.h"
 size_t len_ = (vec_?(vec_->num):0);
#line 173 "../.././gcc/tree.h"

#line 173 "../.././gcc/tree.h"
 VEC_tree_heap *new_vec_ = (((void *)0));
#line 173 "../.././gcc/tree.h"
if (len_){
{ 
#line 173 "../.././gcc/tree.h"
new_vec_ = (( VEC_tree_heap *)(vec_heap_p_reserve((((void *)0)), (-len_)))); 
#line 173 "../.././gcc/tree.h"
(new_vec_->base).num = len_; 
#line 173 "../.././gcc/tree.h"
memcpy((new_vec_->base).vec, (vec_->vec), sizeof ( tree ) * len_); } }
#line 173 "../.././gcc/tree.h"
return new_vec_; }
 
#line 173 "../.././gcc/tree.h"
static __inline__ int VEC_tree_heap_reserve( VEC_tree_heap **vec_, int alloc_)  {

#line 173 "../.././gcc/tree.h"

#line 173 "../.././gcc/tree.h"
int extend = (!VEC_tree_base_space(((((*vec_))?(&(((*vec_))->base)):0)), (alloc_ < 0?(-alloc_):alloc_)));
#line 173 "../.././gcc/tree.h"
if (extend){
(*vec_) = (( VEC_tree_heap *)vec_heap_p_reserve((*vec_), alloc_)); }
#line 173 "../.././gcc/tree.h"
return extend; }
 
#line 173 "../.././gcc/tree.h"
static __inline__ void VEC_tree_heap_safe_grow( VEC_tree_heap **vec_, int size_)  {

#line 173 "../.././gcc/tree.h"
((void )(size_ >= 0 && VEC_tree_base_length((((*vec_))?(&(((*vec_))->base)):0)) <= ((unsigned )size_))); 
#line 173 "../.././gcc/tree.h"
VEC_tree_heap_reserve(vec_, ((int )(((*vec_)?(((((*vec_))?(&(((*vec_))->base)):0))->num):0))) - size_); 
#line 173 "../.././gcc/tree.h"
(((((*vec_))?(&(((*vec_))->base)):0))->num) = size_; }
 
#line 173 "../.././gcc/tree.h"
static __inline__  tree *VEC_tree_heap_safe_push( VEC_tree_heap **vec_,  tree obj_)  {

#line 173 "../.././gcc/tree.h"
VEC_tree_heap_reserve(vec_, 1); 
#line 173 "../.././gcc/tree.h"
return VEC_tree_base_quick_push(((((*vec_))?(&(((*vec_))->base)):0)), obj_); }
 
#line 173 "../.././gcc/tree.h"
static __inline__  tree *VEC_tree_heap_safe_insert( VEC_tree_heap **vec_, unsigned ix_,  tree obj_)  {

#line 173 "../.././gcc/tree.h"
VEC_tree_heap_reserve(vec_, 1); 
#line 173 "../.././gcc/tree.h"
return VEC_tree_base_quick_insert(((((*vec_))?(&(((*vec_))->base)):0)), ix_, obj_); }
 
#line 173 "../.././gcc/tree.h"
struct vec_swallow_trailing_semi ; 
#line 184 "../.././gcc/tree.h"
enum built_in_class {NOT_BUILT_IN=0,BUILT_IN_FRONTEND,BUILT_IN_MD,BUILT_IN_NORMAL}; 
#line 187 "../.././gcc/tree.h"
extern const char *const built_in_class_names[4]; 
# 1 "../.././gcc/builtins.def" 1
# 168 "../.././gcc/builtins.def" 
# 213 "../.././gcc/tree.h" 2
enum built_in_function {BUILT_IN_ACOS,BUILT_IN_ACOSF,BUILT_IN_ACOSH,BUILT_IN_ACOSHF,BUILT_IN_ACOSHL,BUILT_IN_ACOSL,BUILT_IN_ASIN,BUILT_IN_ASINF,BUILT_IN_ASINH,BUILT_IN_ASINHF,BUILT_IN_ASINHL,BUILT_IN_ASINL,BUILT_IN_ATAN,BUILT_IN_ATAN2,BUILT_IN_ATAN2F,BUILT_IN_ATAN2L,BUILT_IN_ATANF,BUILT_IN_ATANH,BUILT_IN_ATANHF,BUILT_IN_ATANHL,BUILT_IN_ATANL,BUILT_IN_CBRT,BUILT_IN_CBRTF,BUILT_IN_CBRTL,BUILT_IN_CEIL,BUILT_IN_CEILF,BUILT_IN_CEILL,BUILT_IN_COPYSIGN,BUILT_IN_COPYSIGNF,BUILT_IN_COPYSIGNL,BUILT_IN_COS,BUILT_IN_COSF,BUILT_IN_COSH,BUILT_IN_COSHF,BUILT_IN_COSHL,BUILT_IN_COSL,BUILT_IN_DREM,BUILT_IN_DREMF,BUILT_IN_DREML,BUILT_IN_ERF,BUILT_IN_ERFC,BUILT_IN_ERFCF,BUILT_IN_ERFCL,BUILT_IN_ERFF,BUILT_IN_ERFL,BUILT_IN_EXP,BUILT_IN_EXP10,BUILT_IN_EXP10F,BUILT_IN_EXP10L,BUILT_IN_EXP2,BUILT_IN_EXP2F,BUILT_IN_EXP2L,BUILT_IN_EXPF,BUILT_IN_EXPL,BUILT_IN_EXPM1,BUILT_IN_EXPM1F,BUILT_IN_EXPM1L,BUILT_IN_FABS,BUILT_IN_FABSF,BUILT_IN_FABSL,BUILT_IN_FDIM,BUILT_IN_FDIMF,BUILT_IN_FDIML,BUILT_IN_FLOOR,BUILT_IN_FLOORF,BUILT_IN_FLOORL,BUILT_IN_FMA,BUILT_IN_FMAF,BUILT_IN_FMAL,BUILT_IN_FMAX,BUILT_IN_FMAXF,BUILT_IN_FMAXL,BUILT_IN_FMIN,BUILT_IN_FMINF,BUILT_IN_FMINL,BUILT_IN_FMOD,BUILT_IN_FMODF,BUILT_IN_FMODL,BUILT_IN_FREXP,BUILT_IN_FREXPF,BUILT_IN_FREXPL,BUILT_IN_GAMMA,BUILT_IN_GAMMAF,BUILT_IN_GAMMAL,BUILT_IN_HUGE_VAL,BUILT_IN_HUGE_VALF,BUILT_IN_HUGE_VALL,BUILT_IN_HYPOT,BUILT_IN_HYPOTF,BUILT_IN_HYPOTL,BUILT_IN_ILOGB,BUILT_IN_ILOGBF,BUILT_IN_ILOGBL,BUILT_IN_INF,BUILT_IN_INFF,BUILT_IN_INFL,BUILT_IN_J0,BUILT_IN_J0F,BUILT_IN_J0L,BUILT_IN_J1,BUILT_IN_J1F,BUILT_IN_J1L,BUILT_IN_JN,BUILT_IN_JNF,BUILT_IN_JNL,BUILT_IN_LCEIL,BUILT_IN_LCEILF,BUILT_IN_LCEILL,BUILT_IN_LDEXP,BUILT_IN_LDEXPF,BUILT_IN_LDEXPL,BUILT_IN_LFLOOR,BUILT_IN_LFLOORF,BUILT_IN_LFLOORL,BUILT_IN_LGAMMA,BUILT_IN_LGAMMAF,BUILT_IN_LGAMMAL,BUILT_IN_LLCEIL,BUILT_IN_LLCEILF,BUILT_IN_LLCEILL,BUILT_IN_LLFLOOR,BUILT_IN_LLFLOORF,BUILT_IN_LLFLOORL,BUILT_IN_LLRINT,BUILT_IN_LLRINTF,BUILT_IN_LLRINTL,BUILT_IN_LLROUND,BUILT_IN_LLROUNDF,BUILT_IN_LLROUNDL,BUILT_IN_LOG,BUILT_IN_LOG10,BUILT_IN_LOG10F,BUILT_IN_LOG10L,BUILT_IN_LOG1P,BUILT_IN_LOG1PF,BUILT_IN_LOG1PL,BUILT_IN_LOG2,BUILT_IN_LOG2F,BUILT_IN_LOG2L,BUILT_IN_LOGB,BUILT_IN_LOGBF,BUILT_IN_LOGBL,BUILT_IN_LOGF,BUILT_IN_LOGL,BUILT_IN_LRINT,BUILT_IN_LRINTF,BUILT_IN_LRINTL,BUILT_IN_LROUND,BUILT_IN_LROUNDF,BUILT_IN_LROUNDL,BUILT_IN_MODF,BUILT_IN_MODFF,BUILT_IN_MODFL,BUILT_IN_NAN,BUILT_IN_NANF,BUILT_IN_NANL,BUILT_IN_NANS,BUILT_IN_NANSF,BUILT_IN_NANSL,BUILT_IN_NEARBYINT,BUILT_IN_NEARBYINTF,BUILT_IN_NEARBYINTL,BUILT_IN_NEXTAFTER,BUILT_IN_NEXTAFTERF,BUILT_IN_NEXTAFTERL,BUILT_IN_NEXTTOWARD,BUILT_IN_NEXTTOWARDF,BUILT_IN_NEXTTOWARDL,BUILT_IN_POW,BUILT_IN_POW10,BUILT_IN_POW10F,BUILT_IN_POW10L,BUILT_IN_POWF,BUILT_IN_POWI,BUILT_IN_POWIF,BUILT_IN_POWIL,BUILT_IN_POWL,BUILT_IN_REMAINDER,BUILT_IN_REMAINDERF,BUILT_IN_REMAINDERL,BUILT_IN_REMQUO,BUILT_IN_REMQUOF,BUILT_IN_REMQUOL,BUILT_IN_RINT,BUILT_IN_RINTF,BUILT_IN_RINTL,BUILT_IN_ROUND,BUILT_IN_ROUNDF,BUILT_IN_ROUNDL,BUILT_IN_SCALB,BUILT_IN_SCALBF,BUILT_IN_SCALBL,BUILT_IN_SCALBLN,BUILT_IN_SCALBLNF,BUILT_IN_SCALBLNL,BUILT_IN_SCALBN,BUILT_IN_SCALBNF,BUILT_IN_SCALBNL,BUILT_IN_SIGNBIT,BUILT_IN_SIGNBITF,BUILT_IN_SIGNBITL,BUILT_IN_SIGNIFICAND,BUILT_IN_SIGNIFICANDF,BUILT_IN_SIGNIFICANDL,BUILT_IN_SIN,BUILT_IN_SINCOS,BUILT_IN_SINCOSF,BUILT_IN_SINCOSL,BUILT_IN_SINF,BUILT_IN_SINH,BUILT_IN_SINHF,BUILT_IN_SINHL,BUILT_IN_SINL,BUILT_IN_SQRT,BUILT_IN_SQRTF,BUILT_IN_SQRTL,BUILT_IN_TAN,BUILT_IN_TANF,BUILT_IN_TANH,BUILT_IN_TANHF,BUILT_IN_TANHL,BUILT_IN_TANL,BUILT_IN_TGAMMA,BUILT_IN_TGAMMAF,BUILT_IN_TGAMMAL,BUILT_IN_TRUNC,BUILT_IN_TRUNCF,BUILT_IN_TRUNCL,BUILT_IN_Y0,BUILT_IN_Y0F,BUILT_IN_Y0L,BUILT_IN_Y1,BUILT_IN_Y1F,BUILT_IN_Y1L,BUILT_IN_YN,BUILT_IN_YNF,BUILT_IN_YNL,BUILT_IN_CABS,BUILT_IN_CABSF,BUILT_IN_CABSL,BUILT_IN_CACOS,BUILT_IN_CACOSF,BUILT_IN_CACOSH,BUILT_IN_CACOSHF,BUILT_IN_CACOSHL,BUILT_IN_CACOSL,BUILT_IN_CARG,BUILT_IN_CARGF,BUILT_IN_CARGL,BUILT_IN_CASIN,BUILT_IN_CASINF,BUILT_IN_CASINH,BUILT_IN_CASINHF,BUILT_IN_CASINHL,BUILT_IN_CASINL,BUILT_IN_CATAN,BUILT_IN_CATANF,BUILT_IN_CATANH,BUILT_IN_CATANHF,BUILT_IN_CATANHL,BUILT_IN_CATANL,BUILT_IN_CCOS,BUILT_IN_CCOSF,BUILT_IN_CCOSH,BUILT_IN_CCOSHF,BUILT_IN_CCOSHL,BUILT_IN_CCOSL,BUILT_IN_CEXP,BUILT_IN_CEXPF,BUILT_IN_CEXPL,BUILT_IN_CIMAG,BUILT_IN_CIMAGF,BUILT_IN_CIMAGL,BUILT_IN_CLOG,BUILT_IN_CLOGF,BUILT_IN_CLOGL,BUILT_IN_CLOG10,BUILT_IN_CLOG10F,BUILT_IN_CLOG10L,BUILT_IN_CONJ,BUILT_IN_CONJF,BUILT_IN_CONJL,BUILT_IN_CPOW,BUILT_IN_CPOWF,BUILT_IN_CPOWL,BUILT_IN_CPROJ,BUILT_IN_CPROJF,BUILT_IN_CPROJL,BUILT_IN_CREAL,BUILT_IN_CREALF,BUILT_IN_CREALL,BUILT_IN_CSIN,BUILT_IN_CSINF,BUILT_IN_CSINH,BUILT_IN_CSINHF,BUILT_IN_CSINHL,BUILT_IN_CSINL,BUILT_IN_CSQRT,BUILT_IN_CSQRTF,BUILT_IN_CSQRTL,BUILT_IN_CTAN,BUILT_IN_CTANF,BUILT_IN_CTANH,BUILT_IN_CTANHF,BUILT_IN_CTANHL,BUILT_IN_CTANL,BUILT_IN_BCMP,BUILT_IN_BCOPY,BUILT_IN_BZERO,BUILT_IN_INDEX,BUILT_IN_MEMCMP,BUILT_IN_MEMCPY,BUILT_IN_MEMMOVE,BUILT_IN_MEMPCPY,BUILT_IN_MEMSET,BUILT_IN_RINDEX,BUILT_IN_STPCPY,BUILT_IN_STPNCPY,BUILT_IN_STRCASECMP,BUILT_IN_STRCAT,BUILT_IN_STRCHR,BUILT_IN_STRCMP,BUILT_IN_STRCPY,BUILT_IN_STRCSPN,BUILT_IN_STRDUP,BUILT_IN_STRNDUP,BUILT_IN_STRLEN,BUILT_IN_STRNCASECMP,BUILT_IN_STRNCAT,BUILT_IN_STRNCMP,BUILT_IN_STRNCPY,BUILT_IN_STRPBRK,BUILT_IN_STRRCHR,BUILT_IN_STRSPN,BUILT_IN_STRSTR,BUILT_IN_FPRINTF,BUILT_IN_FPRINTF_UNLOCKED,BUILT_IN_FPUTC,BUILT_IN_FPUTC_UNLOCKED,BUILT_IN_FPUTS,BUILT_IN_FPUTS_UNLOCKED,BUILT_IN_FSCANF,BUILT_IN_FWRITE,BUILT_IN_FWRITE_UNLOCKED,BUILT_IN_PRINTF,BUILT_IN_PRINTF_UNLOCKED,BUILT_IN_PUTCHAR,BUILT_IN_PUTCHAR_UNLOCKED,BUILT_IN_PUTS,BUILT_IN_PUTS_UNLOCKED,BUILT_IN_SCANF,BUILT_IN_SNPRINTF,BUILT_IN_SPRINTF,BUILT_IN_SSCANF,BUILT_IN_VFPRINTF,BUILT_IN_VFSCANF,BUILT_IN_VPRINTF,BUILT_IN_VSCANF,BUILT_IN_VSNPRINTF,BUILT_IN_VSPRINTF,BUILT_IN_VSSCANF,BUILT_IN_ISALNUM,BUILT_IN_ISALPHA,BUILT_IN_ISASCII,BUILT_IN_ISBLANK,BUILT_IN_ISCNTRL,BUILT_IN_ISDIGIT,BUILT_IN_ISGRAPH,BUILT_IN_ISLOWER,BUILT_IN_ISPRINT,BUILT_IN_ISPUNCT,BUILT_IN_ISSPACE,BUILT_IN_ISUPPER,BUILT_IN_ISXDIGIT,BUILT_IN_TOASCII,BUILT_IN_TOLOWER,BUILT_IN_TOUPPER,BUILT_IN_ISWALNUM,BUILT_IN_ISWALPHA,BUILT_IN_ISWBLANK,BUILT_IN_ISWCNTRL,BUILT_IN_ISWDIGIT,BUILT_IN_ISWGRAPH,BUILT_IN_ISWLOWER,BUILT_IN_ISWPRINT,BUILT_IN_ISWPUNCT,BUILT_IN_ISWSPACE,BUILT_IN_ISWUPPER,BUILT_IN_ISWXDIGIT,BUILT_IN_TOWLOWER,BUILT_IN_TOWUPPER,BUILT_IN_ABORT,BUILT_IN_ABS,BUILT_IN_AGGREGATE_INCOMING_ADDRESS,BUILT_IN_ALLOCA,BUILT_IN_APPLY,BUILT_IN_APPLY_ARGS,BUILT_IN_ARGS_INFO,BUILT_IN_CALLOC,BUILT_IN_CLASSIFY_TYPE,BUILT_IN_CLZ,BUILT_IN_CLZIMAX,BUILT_IN_CLZL,BUILT_IN_CLZLL,BUILT_IN_CONSTANT_P,BUILT_IN_CTZ,BUILT_IN_CTZIMAX,BUILT_IN_CTZL,BUILT_IN_CTZLL,BUILT_IN_DCGETTEXT,BUILT_IN_DGETTEXT,BUILT_IN_DWARF_CFA,BUILT_IN_DWARF_SP_COLUMN,BUILT_IN_EH_RETURN,BUILT_IN_EH_RETURN_DATA_REGNO,BUILT_IN_EXECL,BUILT_IN_EXECLP,BUILT_IN_EXECLE,BUILT_IN_EXECV,BUILT_IN_EXECVP,BUILT_IN_EXECVE,BUILT_IN_EXIT,BUILT_IN_EXPECT,BUILT_IN_EXTEND_POINTER,BUILT_IN_EXTRACT_RETURN_ADDR,BUILT_IN_FFS,BUILT_IN_FFSIMAX,BUILT_IN_FFSL,BUILT_IN_FFSLL,BUILT_IN_FORK,BUILT_IN_FRAME_ADDRESS,BUILT_IN_FROB_RETURN_ADDR,BUILT_IN_GETTEXT,BUILT_IN_IMAXABS,BUILT_IN_INIT_DWARF_REG_SIZES,BUILT_IN_FINITE,BUILT_IN_FINITEF,BUILT_IN_FINITEL,BUILT_IN_ISINF,BUILT_IN_ISINFF,BUILT_IN_ISINFL,BUILT_IN_ISNAN,BUILT_IN_ISNANF,BUILT_IN_ISNANL,BUILT_IN_ISGREATER,BUILT_IN_ISGREATEREQUAL,BUILT_IN_ISLESS,BUILT_IN_ISLESSEQUAL,BUILT_IN_ISLESSGREATER,BUILT_IN_ISUNORDERED,BUILT_IN_LABS,BUILT_IN_LLABS,BUILT_IN_LONGJMP,BUILT_IN_MALLOC,BUILT_IN_NEXT_ARG,BUILT_IN_PARITY,BUILT_IN_PARITYIMAX,BUILT_IN_PARITYL,BUILT_IN_PARITYLL,BUILT_IN_POPCOUNT,BUILT_IN_POPCOUNTIMAX,BUILT_IN_POPCOUNTL,BUILT_IN_POPCOUNTLL,BUILT_IN_PREFETCH,BUILT_IN_RETURN,BUILT_IN_RETURN_ADDRESS,BUILT_IN_SAVEREGS,BUILT_IN_SETJMP,BUILT_IN_STDARG_START,BUILT_IN_STRFMON,BUILT_IN_STRFTIME,BUILT_IN_TRAP,BUILT_IN_UNWIND_INIT,BUILT_IN_UPDATE_SETJMP_BUF,BUILT_IN_VA_COPY,BUILT_IN_VA_END,BUILT_IN_VA_START,BUILT_IN__EXIT,BUILT_IN__EXIT2,BUILT_IN_INIT_TRAMPOLINE,BUILT_IN_ADJUST_TRAMPOLINE,BUILT_IN_NONLOCAL_GOTO,BUILT_IN_STACK_SAVE,BUILT_IN_STACK_RESTORE,BUILT_IN_OBJECT_SIZE,BUILT_IN_MEMCPY_CHK,BUILT_IN_MEMMOVE_CHK,BUILT_IN_MEMPCPY_CHK,BUILT_IN_MEMSET_CHK,BUILT_IN_STPCPY_CHK,BUILT_IN_STRCAT_CHK,BUILT_IN_STRCPY_CHK,BUILT_IN_STRNCAT_CHK,BUILT_IN_STRNCPY_CHK,BUILT_IN_SNPRINTF_CHK,BUILT_IN_SPRINTF_CHK,BUILT_IN_VSNPRINTF_CHK,BUILT_IN_VSPRINTF_CHK,BUILT_IN_FPRINTF_CHK,BUILT_IN_PRINTF_CHK,BUILT_IN_VFPRINTF_CHK,BUILT_IN_VPRINTF_CHK,BUILT_IN_PROFILE_FUNC_ENTER,BUILT_IN_PROFILE_FUNC_EXIT,BUILT_IN_FETCH_AND_ADD_N,BUILT_IN_FETCH_AND_ADD_1,BUILT_IN_FETCH_AND_ADD_2,BUILT_IN_FETCH_AND_ADD_4,BUILT_IN_FETCH_AND_ADD_8,BUILT_IN_FETCH_AND_SUB_N,BUILT_IN_FETCH_AND_SUB_1,BUILT_IN_FETCH_AND_SUB_2,BUILT_IN_FETCH_AND_SUB_4,BUILT_IN_FETCH_AND_SUB_8,BUILT_IN_FETCH_AND_OR_N,BUILT_IN_FETCH_AND_OR_1,BUILT_IN_FETCH_AND_OR_2,BUILT_IN_FETCH_AND_OR_4,BUILT_IN_FETCH_AND_OR_8,BUILT_IN_FETCH_AND_AND_N,BUILT_IN_FETCH_AND_AND_1,BUILT_IN_FETCH_AND_AND_2,BUILT_IN_FETCH_AND_AND_4,BUILT_IN_FETCH_AND_AND_8,BUILT_IN_FETCH_AND_XOR_N,BUILT_IN_FETCH_AND_XOR_1,BUILT_IN_FETCH_AND_XOR_2,BUILT_IN_FETCH_AND_XOR_4,BUILT_IN_FETCH_AND_XOR_8,BUILT_IN_FETCH_AND_NAND_N,BUILT_IN_FETCH_AND_NAND_1,BUILT_IN_FETCH_AND_NAND_2,BUILT_IN_FETCH_AND_NAND_4,BUILT_IN_FETCH_AND_NAND_8,BUILT_IN_ADD_AND_FETCH_N,BUILT_IN_ADD_AND_FETCH_1,BUILT_IN_ADD_AND_FETCH_2,BUILT_IN_ADD_AND_FETCH_4,BUILT_IN_ADD_AND_FETCH_8,BUILT_IN_SUB_AND_FETCH_N,BUILT_IN_SUB_AND_FETCH_1,BUILT_IN_SUB_AND_FETCH_2,BUILT_IN_SUB_AND_FETCH_4,BUILT_IN_SUB_AND_FETCH_8,BUILT_IN_OR_AND_FETCH_N,BUILT_IN_OR_AND_FETCH_1,BUILT_IN_OR_AND_FETCH_2,BUILT_IN_OR_AND_FETCH_4,BUILT_IN_OR_AND_FETCH_8,BUILT_IN_AND_AND_FETCH_N,BUILT_IN_AND_AND_FETCH_1,BUILT_IN_AND_AND_FETCH_2,BUILT_IN_AND_AND_FETCH_4,BUILT_IN_AND_AND_FETCH_8,BUILT_IN_XOR_AND_FETCH_N,BUILT_IN_XOR_AND_FETCH_1,BUILT_IN_XOR_AND_FETCH_2,BUILT_IN_XOR_AND_FETCH_4,BUILT_IN_XOR_AND_FETCH_8,BUILT_IN_NAND_AND_FETCH_N,BUILT_IN_NAND_AND_FETCH_1,BUILT_IN_NAND_AND_FETCH_2,BUILT_IN_NAND_AND_FETCH_4,BUILT_IN_NAND_AND_FETCH_8,BUILT_IN_BOOL_COMPARE_AND_SWAP_N,BUILT_IN_BOOL_COMPARE_AND_SWAP_1,BUILT_IN_BOOL_COMPARE_AND_SWAP_2,BUILT_IN_BOOL_COMPARE_AND_SWAP_4,BUILT_IN_BOOL_COMPARE_AND_SWAP_8,BUILT_IN_VAL_COMPARE_AND_SWAP_N,BUILT_IN_VAL_COMPARE_AND_SWAP_1,BUILT_IN_VAL_COMPARE_AND_SWAP_2,BUILT_IN_VAL_COMPARE_AND_SWAP_4,BUILT_IN_VAL_COMPARE_AND_SWAP_8,BUILT_IN_LOCK_TEST_AND_SET_N,BUILT_IN_LOCK_TEST_AND_SET_1,BUILT_IN_LOCK_TEST_AND_SET_2,BUILT_IN_LOCK_TEST_AND_SET_4,BUILT_IN_LOCK_TEST_AND_SET_8,BUILT_IN_LOCK_RELEASE_N,BUILT_IN_LOCK_RELEASE_1,BUILT_IN_LOCK_RELEASE_2,BUILT_IN_LOCK_RELEASE_4,BUILT_IN_LOCK_RELEASE_8,BUILT_IN_SYNCHRONIZE,BUILT_IN_COMPLEX_MUL_MIN,BUILT_IN_COMPLEX_MUL_MAX=BUILT_IN_COMPLEX_MUL_MIN + MAX_MODE_COMPLEX_FLOAT - MIN_MODE_COMPLEX_FLOAT,BUILT_IN_COMPLEX_DIV_MIN,BUILT_IN_COMPLEX_DIV_MAX=BUILT_IN_COMPLEX_DIV_MIN + MAX_MODE_COMPLEX_FLOAT - MIN_MODE_COMPLEX_FLOAT,END_BUILTINS}; 
#line 217 "../.././gcc/tree.h"
extern const char *built_in_names[((int )END_BUILTINS)]; 
#line 238 "../.././gcc/tree.h"
extern  tree built_in_decls[((int )END_BUILTINS)]; 
#line 239 "../.././gcc/tree.h"
extern  tree implicit_built_in_decls[((int )END_BUILTINS)]; 
# 238 "../.././gcc/tree.h" 
# 262 "../.././gcc/tree.h" 
union tree_ann_d ; 
#line 298 "../.././gcc/tree.h"
struct tree_common { tree chain;  tree type; union tree_ann_d *ann;  __extension__ enum tree_code code:8; unsigned side_effects_flag:1; unsigned constant_flag:1; unsigned addressable_flag:1; unsigned volatile_flag:1; unsigned readonly_flag:1; unsigned unsigned_flag:1; unsigned asm_written_flag:1; unsigned nowarning_flag:1; unsigned used_flag:1; unsigned nothrow_flag:1; unsigned static_flag:1; unsigned public_flag:1; unsigned private_flag:1; unsigned protected_flag:1; unsigned deprecated_flag:1; unsigned invariant_flag:1; unsigned lang_flag_0:1; unsigned lang_flag_1:1; unsigned lang_flag_2:1; unsigned lang_flag_3:1; unsigned lang_flag_4:1; unsigned lang_flag_5:1; unsigned lang_flag_6:1; unsigned visited:1; }; 
# 450 "../.././gcc/tree.h" 
# 1 "../.././gcc/treestruct.def" 1
# 31 "../.././gcc/treestruct.def" 
# 453 "../.././gcc/tree.h" 2
enum tree_node_structure_enum {TS_COMMON,TS_INT_CST,TS_REAL_CST,TS_VECTOR,TS_STRING,TS_COMPLEX,TS_IDENTIFIER,TS_DECL_MINIMAL,TS_DECL_COMMON,TS_DECL_WRTL,TS_DECL_NON_COMMON,TS_DECL_WITH_VIS,TS_FIELD_DECL,TS_VAR_DECL,TS_PARM_DECL,TS_LABEL_DECL,TS_RESULT_DECL,TS_CONST_DECL,TS_TYPE_DECL,TS_FUNCTION_DECL,TS_TYPE,TS_LIST,TS_VEC,TS_EXP,TS_SSA_NAME,TS_PHI_NODE,TS_BLOCK,TS_BINFO,TS_STATEMENT_LIST,TS_VALUE_HANDLE,TS_CONSTRUCTOR,LAST_TS_ENUM}; 
# 689 "../.././gcc/tree.h" 
# 1 "./tree-check.h" 1
# 690 "../.././gcc/tree.h" 2
# 1105 "../.././gcc/tree.h" 
struct tree_int_cst {struct tree_common common; struct tree_int_cst_lowhi {unsigned long low; long high; }int_cst; }; 
#line 1110 "../.././gcc/tree.h"
struct real_value ; 
#line 1119 "../.././gcc/tree.h"
struct tree_real_cst {struct tree_common common; struct real_value *real_cst_ptr; }; 
#line 1131 "../.././gcc/tree.h"
struct tree_string {struct tree_common common; int length; char str[1]; }; 
#line 1142 "../.././gcc/tree.h"
struct tree_complex {struct tree_common common;  tree real;  tree imag; }; 
#line 1151 "../.././gcc/tree.h"
struct tree_vector {struct tree_common common;  tree elements; }; 
# 1 "../.././gcc/../libcpp/include/symtab.h" 1
# 21 "../.././gcc/../libcpp/include/symtab.h" 
# 1 "../.././gcc/../include/obstack.h" 1
# 162 "../.././gcc/../include/obstack.h" 
struct _obstack_chunk {char *limit; struct _obstack_chunk *prev; char contents[4]; }; 
#line 187 "../.././gcc/../include/obstack.h"
struct obstack {long chunk_size; struct _obstack_chunk *chunk; char *object_base; char *next_free; char *chunk_limit; int temp; int alignment_mask; struct _obstack_chunk *(*chunkfun)(void *, long ); void (*freefun)(void *, struct _obstack_chunk *); void *extra_arg; unsigned use_extra_arg:1; unsigned maybe_empty_object:1; unsigned alloc_failed:1; }; 
#line 191 "../.././gcc/../include/obstack.h"
extern void _obstack_newchunk(struct obstack *, int ); 
#line 192 "../.././gcc/../include/obstack.h"
extern void _obstack_free(struct obstack *, void *); 
#line 194 "../.././gcc/../include/obstack.h"
extern int _obstack_begin(struct obstack *, int , int , void *(*)(long ), void (*)(void *)); 
#line 197 "../.././gcc/../include/obstack.h"
extern int _obstack_begin_1(struct obstack *, int , int , void *(*)(void *, long ), void (*)(void *, void *), void *); 
#line 198 "../.././gcc/../include/obstack.h"
extern int _obstack_memory_used(struct obstack *); 
#line 203 "../.././gcc/../include/obstack.h"
void obstack_init(struct obstack *obstack); 
#line 205 "../.././gcc/../include/obstack.h"
void *obstack_alloc(struct obstack *obstack, int size); 
#line 207 "../.././gcc/../include/obstack.h"
void *obstack_copy(struct obstack *obstack, void *address, int size); 
#line 208 "../.././gcc/../include/obstack.h"
void *obstack_copy0(struct obstack *obstack, void *address, int size); 
#line 210 "../.././gcc/../include/obstack.h"
void obstack_free(struct obstack *obstack, void *block); 
#line 212 "../.././gcc/../include/obstack.h"
void obstack_blank(struct obstack *obstack, int size); 
#line 214 "../.././gcc/../include/obstack.h"
void obstack_grow(struct obstack *obstack, void *data, int size); 
#line 215 "../.././gcc/../include/obstack.h"
void obstack_grow0(struct obstack *obstack, void *data, int size); 
#line 217 "../.././gcc/../include/obstack.h"
void obstack_1grow(struct obstack *obstack, int data_char); 
#line 218 "../.././gcc/../include/obstack.h"
void obstack_ptr_grow(struct obstack *obstack, void *data); 
#line 219 "../.././gcc/../include/obstack.h"
void obstack_int_grow(struct obstack *obstack, int data); 
#line 221 "../.././gcc/../include/obstack.h"
void *obstack_finish(struct obstack *obstack); 
#line 223 "../.././gcc/../include/obstack.h"
int obstack_object_size(struct obstack *obstack); 
#line 225 "../.././gcc/../include/obstack.h"
int obstack_room(struct obstack *obstack); 
#line 226 "../.././gcc/../include/obstack.h"
void obstack_make_room(struct obstack *obstack, int size); 
#line 227 "../.././gcc/../include/obstack.h"
void obstack_1grow_fast(struct obstack *obstack, int data_char); 
#line 228 "../.././gcc/../include/obstack.h"
void obstack_ptr_grow_fast(struct obstack *obstack, void *data); 
#line 229 "../.././gcc/../include/obstack.h"
void obstack_int_grow_fast(struct obstack *obstack, int data); 
#line 230 "../.././gcc/../include/obstack.h"
void obstack_blank_fast(struct obstack *obstack, int size); 
#line 232 "../.././gcc/../include/obstack.h"
void *obstack_base(struct obstack *obstack); 
#line 233 "../.././gcc/../include/obstack.h"
void *obstack_next_free(struct obstack *obstack); 
#line 234 "../.././gcc/../include/obstack.h"
int obstack_alignment_mask(struct obstack *obstack); 
#line 235 "../.././gcc/../include/obstack.h"
int obstack_chunk_size(struct obstack *obstack); 
#line 236 "../.././gcc/../include/obstack.h"
int obstack_memory_used(struct obstack *obstack); 
#line 241 "../.././gcc/../include/obstack.h"
extern void (*obstack_alloc_failed_handler)(void ); 
#line 244 "../.././gcc/../include/obstack.h"
extern int obstack_exit_failure; 
#line 26 "../.././gcc/../libcpp/include/symtab.h"
typedef struct ht_identifier ht_identifier; 
#line 32 "../.././gcc/../libcpp/include/symtab.h"
struct ht_identifier {const unsigned char *str; unsigned int len; unsigned int hash_value; }; 
#line 37 "../.././gcc/../libcpp/include/symtab.h"
typedef struct ht hash_table; 
#line 38 "../.././gcc/../libcpp/include/symtab.h"
typedef struct ht_identifier *hashnode; 
#line 40 "../.././gcc/../libcpp/include/symtab.h"
enum ht_lookup_option {HT_NO_INSERT=0,HT_ALLOC,HT_ALLOCED}; 
#line 67 "../.././gcc/../libcpp/include/symtab.h"
struct ht {struct obstack stack;  hashnode *entries;  hashnode (*alloc_node)( hash_table *); void *(*alloc_subobject)( size_t ); unsigned int nslots; unsigned int nelements; struct cpp_reader *pfile; unsigned int searches; unsigned int collisions; unsigned char entries_owned; }; 
#line 70 "../.././gcc/../libcpp/include/symtab.h"
extern  hash_table *ht_create(unsigned int order); 
#line 73 "../.././gcc/../libcpp/include/symtab.h"
extern void ht_destroy( hash_table *); 
#line 76 "../.././gcc/../libcpp/include/symtab.h"
extern  hashnode ht_lookup( hash_table *, const unsigned char *,  size_t , enum ht_lookup_option ); 
#line 79 "../.././gcc/../libcpp/include/symtab.h"
extern  hashnode ht_lookup_with_hash( hash_table *, const unsigned char *,  size_t , unsigned int , enum ht_lookup_option ); 
#line 86 "../.././gcc/../libcpp/include/symtab.h"
typedef int (*ht_cb)(struct cpp_reader *,  hashnode , const void *); 
#line 87 "../.././gcc/../libcpp/include/symtab.h"
extern void ht_forall( hash_table *,  ht_cb , const void *); 
#line 91 "../.././gcc/../libcpp/include/symtab.h"
extern void ht_load( hash_table *ht,  hashnode *entries, unsigned int nslots, unsigned int nelements, unsigned char own); 
#line 94 "../.././gcc/../libcpp/include/symtab.h"
extern void ht_dump_statistics( hash_table *); 
# 22 "../.././gcc/../libcpp/include/symtab.h" 2
# 1154 "../.././gcc/tree.h" 2
# 1175 "../.././gcc/tree.h" 
struct tree_identifier {struct tree_common common; struct ht_identifier id; }; 
#line 1186 "../.././gcc/tree.h"
struct tree_list {struct tree_common common;  tree purpose;  tree value; }; 
#line 1200 "../.././gcc/tree.h"
struct tree_vec {struct tree_common common; int length;  tree a[1]; }; 
# 1195 "../.././gcc/tree.h" 
# 1242 "../.././gcc/tree.h" 
typedef struct constructor_elt_d { tree index;  tree value; }constructor_elt; 
#line 1244 "../.././gcc/tree.h"
typedef struct VEC_constructor_elt_base {unsigned num; unsigned alloc;  constructor_elt vec[1]; }VEC_constructor_elt_base; 
#line 1244 "../.././gcc/tree.h"
typedef struct VEC_constructor_elt_none { VEC_constructor_elt_base base; }VEC_constructor_elt_none; 
#line 1244 "../.././gcc/tree.h"
static __inline__ unsigned VEC_constructor_elt_base_length(const  VEC_constructor_elt_base *vec_)  {

#line 1244 "../.././gcc/tree.h"
return (vec_?(vec_->num):0); }
 
#line 1244 "../.././gcc/tree.h"
static __inline__  constructor_elt *VEC_constructor_elt_base_last( VEC_constructor_elt_base *vec_)  {

#line 1244 "../.././gcc/tree.h"
((void )(vec_ && (vec_->num))); 
#line 1244 "../.././gcc/tree.h"
return (&(vec_->vec)[(vec_->num) - 1]); }
 
#line 1244 "../.././gcc/tree.h"
static __inline__  constructor_elt *VEC_constructor_elt_base_index( VEC_constructor_elt_base *vec_, unsigned ix_)  {

#line 1244 "../.././gcc/tree.h"
((void )(vec_ && ix_ < (vec_->num))); 
#line 1244 "../.././gcc/tree.h"
return (&(vec_->vec)[ix_]); }
 
#line 1244 "../.././gcc/tree.h"
static __inline__ int VEC_constructor_elt_base_iterate( VEC_constructor_elt_base *vec_, unsigned ix_,  constructor_elt **ptr)  {

#line 1244 "../.././gcc/tree.h"
if (vec_ && ix_ < (vec_->num)){
{ 
#line 1244 "../.././gcc/tree.h"
(*ptr) = (&(vec_->vec)[ix_]); 
#line 1244 "../.././gcc/tree.h"
return 1; } }else{
{ 
#line 1244 "../.././gcc/tree.h"
(*ptr) = 0; 
#line 1244 "../.././gcc/tree.h"
return 0; } }}
 
#line 1244 "../.././gcc/tree.h"
static __inline__  size_t VEC_constructor_elt_base_embedded_size(int alloc_)  {

#line 1244 "../.././gcc/tree.h"
return __builtin_offsetof ( VEC_constructor_elt_base  , vec) + alloc_ * sizeof ( constructor_elt ); }
 
#line 1244 "../.././gcc/tree.h"
static __inline__ void VEC_constructor_elt_base_embedded_init( VEC_constructor_elt_base *vec_, int alloc_)  {

#line 1244 "../.././gcc/tree.h"
(vec_->num) = 0; 
#line 1244 "../.././gcc/tree.h"
(vec_->alloc) = alloc_; }
 
#line 1244 "../.././gcc/tree.h"
static __inline__ int VEC_constructor_elt_base_space( VEC_constructor_elt_base *vec_, int alloc_)  {

#line 1244 "../.././gcc/tree.h"
((void )(alloc_ >= 0)); 
#line 1244 "../.././gcc/tree.h"
return (vec_?(vec_->alloc) - (vec_->num) >= ((unsigned )alloc_):(!alloc_)); }
 
#line 1244 "../.././gcc/tree.h"
static __inline__  constructor_elt *VEC_constructor_elt_base_quick_push( VEC_constructor_elt_base *vec_, const  constructor_elt *obj_)  {

#line 1244 "../.././gcc/tree.h"

#line 1244 "../.././gcc/tree.h"
 constructor_elt *slot_;
#line 1244 "../.././gcc/tree.h"
((void )((vec_->num) < (vec_->alloc))); 
#line 1244 "../.././gcc/tree.h"
slot_ = (&(vec_->vec)[(vec_->num)++]); 
#line 1244 "../.././gcc/tree.h"
if (obj_){
(*slot_) = (*obj_); }
#line 1244 "../.././gcc/tree.h"
return slot_; }
 
#line 1244 "../.././gcc/tree.h"
static __inline__ void VEC_constructor_elt_base_pop( VEC_constructor_elt_base *vec_)  {

#line 1244 "../.././gcc/tree.h"
((void )((vec_->num))); 
#line 1244 "../.././gcc/tree.h"
(--(vec_->num)); }
 
#line 1244 "../.././gcc/tree.h"
static __inline__ void VEC_constructor_elt_base_truncate( VEC_constructor_elt_base *vec_, unsigned size_)  {

#line 1244 "../.././gcc/tree.h"
((void )((vec_?(vec_->num) >= size_:(!size_)))); 
#line 1244 "../.././gcc/tree.h"
if (vec_){
(vec_->num) = size_; }}
 
#line 1244 "../.././gcc/tree.h"
static __inline__  constructor_elt *VEC_constructor_elt_base_replace( VEC_constructor_elt_base *vec_, unsigned ix_, const  constructor_elt *obj_)  {

#line 1244 "../.././gcc/tree.h"

#line 1244 "../.././gcc/tree.h"
 constructor_elt *slot_;
#line 1244 "../.././gcc/tree.h"
((void )(ix_ < (vec_->num))); 
#line 1244 "../.././gcc/tree.h"
slot_ = (&(vec_->vec)[ix_]); 
#line 1244 "../.././gcc/tree.h"
if (obj_){
(*slot_) = (*obj_); }
#line 1244 "../.././gcc/tree.h"
return slot_; }
 
#line 1244 "../.././gcc/tree.h"
static __inline__  constructor_elt *VEC_constructor_elt_base_quick_insert( VEC_constructor_elt_base *vec_, unsigned ix_, const  constructor_elt *obj_)  {

#line 1244 "../.././gcc/tree.h"

#line 1244 "../.././gcc/tree.h"
 constructor_elt *slot_;
#line 1244 "../.././gcc/tree.h"
((void )((vec_->num) < (vec_->alloc))); 
#line 1244 "../.././gcc/tree.h"
((void )(ix_ <= (vec_->num))); 
#line 1244 "../.././gcc/tree.h"
slot_ = (&(vec_->vec)[ix_]); 
#line 1244 "../.././gcc/tree.h"
memmove(slot_ + 1, slot_, ((vec_->num)++ - ix_) * sizeof ( constructor_elt )); 
#line 1244 "../.././gcc/tree.h"
if (obj_){
(*slot_) = (*obj_); }
#line 1244 "../.././gcc/tree.h"
return slot_; }
 
#line 1244 "../.././gcc/tree.h"
static __inline__ void VEC_constructor_elt_base_ordered_remove( VEC_constructor_elt_base *vec_, unsigned ix_)  {

#line 1244 "../.././gcc/tree.h"

#line 1244 "../.././gcc/tree.h"
 constructor_elt *slot_;
#line 1244 "../.././gcc/tree.h"
((void )(ix_ < (vec_->num))); 
#line 1244 "../.././gcc/tree.h"
slot_ = (&(vec_->vec)[ix_]); 
#line 1244 "../.././gcc/tree.h"
memmove(slot_, slot_ + 1, ((--(vec_->num)) - ix_) * sizeof ( constructor_elt )); }
 
#line 1244 "../.././gcc/tree.h"
static __inline__ void VEC_constructor_elt_base_unordered_remove( VEC_constructor_elt_base *vec_, unsigned ix_)  {

#line 1244 "../.././gcc/tree.h"
((void )(ix_ < (vec_->num))); 
#line 1244 "../.././gcc/tree.h"
(vec_->vec)[ix_] = (vec_->vec)[(--(vec_->num))]; }
 
#line 1244 "../.././gcc/tree.h"
static __inline__  constructor_elt *VEC_constructor_elt_base_address( VEC_constructor_elt_base *vec_)  {

#line 1244 "../.././gcc/tree.h"
return (vec_?(vec_->vec):0); }
 
#line 1244 "../.././gcc/tree.h"
static __inline__ unsigned VEC_constructor_elt_base_lower_bound( VEC_constructor_elt_base *vec_, const  constructor_elt *obj_, unsigned char (*lessthan_)(const  constructor_elt *, const  constructor_elt *))  {

#line 1244 "../.././gcc/tree.h"

#line 1244 "../.././gcc/tree.h"
unsigned int len_ = VEC_constructor_elt_base_length(vec_);
#line 1244 "../.././gcc/tree.h"

#line 1244 "../.././gcc/tree.h"
unsigned int half_,middle_;
#line 1244 "../.././gcc/tree.h"

#line 1244 "../.././gcc/tree.h"
unsigned int first_ = 0;
#line 1244 "../.././gcc/tree.h"
while(len_ > 0) { { 
#line 1244 "../.././gcc/tree.h"

#line 1244 "../.././gcc/tree.h"
 constructor_elt *middle_elem_;
#line 1244 "../.././gcc/tree.h"
half_ = len_ >> 1; 
#line 1244 "../.././gcc/tree.h"
middle_ = first_; 
#line 1244 "../.././gcc/tree.h"
middle_ += half_; 
#line 1244 "../.././gcc/tree.h"
middle_elem_ = VEC_constructor_elt_base_index(vec_, middle_); 
#line 1244 "../.././gcc/tree.h"
if (lessthan_(middle_elem_, obj_)){
{ 
#line 1244 "../.././gcc/tree.h"
first_ = middle_; 
#line 1244 "../.././gcc/tree.h"
(++first_); 
#line 1244 "../.././gcc/tree.h"
len_ = len_ - half_ - 1; } }else{
len_ = half_; }} } 
#line 1244 "../.././gcc/tree.h"
return first_; }
 
#line 1244 "../.././gcc/tree.h"
struct vec_swallow_trailing_semi ; 
#line 1245 "../.././gcc/tree.h"
typedef struct VEC_constructor_elt_gc { VEC_constructor_elt_base base; }VEC_constructor_elt_gc; 
#line 1245 "../.././gcc/tree.h"
static __inline__  VEC_constructor_elt_gc *VEC_constructor_elt_gc_alloc(int alloc_)  {

#line 1245 "../.././gcc/tree.h"
return (( VEC_constructor_elt_gc *)vec_gc_o_reserve((((void *)0)), (-alloc_), __builtin_offsetof ( VEC_constructor_elt_gc  , base.vec), sizeof ( constructor_elt ))); }
 
#line 1245 "../.././gcc/tree.h"
static __inline__  VEC_constructor_elt_gc *VEC_constructor_elt_gc_copy( VEC_constructor_elt_base *vec_)  {

#line 1245 "../.././gcc/tree.h"

#line 1245 "../.././gcc/tree.h"
 size_t len_ = (vec_?(vec_->num):0);
#line 1245 "../.././gcc/tree.h"

#line 1245 "../.././gcc/tree.h"
 VEC_constructor_elt_gc *new_vec_ = (((void *)0));
#line 1245 "../.././gcc/tree.h"
if (len_){
{ 
#line 1245 "../.././gcc/tree.h"
new_vec_ = (( VEC_constructor_elt_gc *)(vec_gc_o_reserve((((void *)0)), (-len_), __builtin_offsetof ( VEC_constructor_elt_gc  , base.vec), sizeof ( constructor_elt )))); 
#line 1245 "../.././gcc/tree.h"
(new_vec_->base).num = len_; 
#line 1245 "../.././gcc/tree.h"
memcpy((new_vec_->base).vec, (vec_->vec), sizeof ( constructor_elt ) * len_); } }
#line 1245 "../.././gcc/tree.h"
return new_vec_; }
 
#line 1245 "../.././gcc/tree.h"
static __inline__ void VEC_constructor_elt_gc_free( VEC_constructor_elt_gc **vec_)  {

#line 1245 "../.././gcc/tree.h"
if ((*vec_)){
ggc_free((*vec_)); }
#line 1245 "../.././gcc/tree.h"
(*vec_) = (((void *)0)); }
 
#line 1245 "../.././gcc/tree.h"
static __inline__ int VEC_constructor_elt_gc_reserve( VEC_constructor_elt_gc **vec_, int alloc_)  {

#line 1245 "../.././gcc/tree.h"

#line 1245 "../.././gcc/tree.h"
int extend = (!VEC_constructor_elt_base_space(((((*vec_))?(&(((*vec_))->base)):0)), (alloc_ < 0?(-alloc_):alloc_)));
#line 1245 "../.././gcc/tree.h"
if (extend){
(*vec_) = (( VEC_constructor_elt_gc *)vec_gc_o_reserve((*vec_), alloc_, __builtin_offsetof ( VEC_constructor_elt_gc  , base.vec), sizeof ( constructor_elt ))); }
#line 1245 "../.././gcc/tree.h"
return extend; }
 
#line 1245 "../.././gcc/tree.h"
static __inline__ void VEC_constructor_elt_gc_safe_grow( VEC_constructor_elt_gc **vec_, int size_)  {

#line 1245 "../.././gcc/tree.h"
((void )(size_ >= 0 && VEC_constructor_elt_base_length((((*vec_))?(&(((*vec_))->base)):0)) <= ((unsigned )size_))); 
#line 1245 "../.././gcc/tree.h"
VEC_constructor_elt_gc_reserve(vec_, ((int )(((*vec_)?(((((*vec_))?(&(((*vec_))->base)):0))->num):0))) - size_); 
#line 1245 "../.././gcc/tree.h"
(((((*vec_))?(&(((*vec_))->base)):0))->num) = size_; 
#line 1245 "../.././gcc/tree.h"
(((((*vec_))?(&(((*vec_))->base)):0))->num) = size_; }
 
#line 1245 "../.././gcc/tree.h"
static __inline__  constructor_elt *VEC_constructor_elt_gc_safe_push( VEC_constructor_elt_gc **vec_, const  constructor_elt *obj_)  {

#line 1245 "../.././gcc/tree.h"
VEC_constructor_elt_gc_reserve(vec_, 1); 
#line 1245 "../.././gcc/tree.h"
return VEC_constructor_elt_base_quick_push(((((*vec_))?(&(((*vec_))->base)):0)), obj_); }
 
#line 1245 "../.././gcc/tree.h"
static __inline__  constructor_elt *VEC_constructor_elt_gc_safe_insert( VEC_constructor_elt_gc **vec_, unsigned ix_, const  constructor_elt *obj_)  {

#line 1245 "../.././gcc/tree.h"
VEC_constructor_elt_gc_reserve(vec_, 1); 
#line 1245 "../.././gcc/tree.h"
return VEC_constructor_elt_base_quick_insert(((((*vec_))?(&(((*vec_))->base)):0)), ix_, obj_); }
 
#line 1245 "../.././gcc/tree.h"
struct vec_swallow_trailing_semi ; 
#line 1251 "../.././gcc/tree.h"
struct tree_constructor {struct tree_common common;  VEC_constructor_elt_gc *elts; }; 
#line 1397 "../.././gcc/tree.h"
struct tree_exp {struct tree_common common;  source_locus locus; int complexity;  tree block;  tree operands[1]; }; 
# 1390 "../.././gcc/tree.h" 
# 1441 "../.././gcc/tree.h" 
struct ptr_info_def ; 
#line 1454 "../.././gcc/tree.h"
typedef struct ssa_use_operand_d {struct ssa_use_operand_d *prev; struct ssa_use_operand_d *next;  tree stmt;  tree *use; }ssa_use_operand_t; 
#line 1484 "../.././gcc/tree.h"
struct tree_ssa_name {struct tree_common common;  tree var; unsigned int version; struct ptr_info_def *ptr_info;  tree value_handle; void *aux; struct ssa_use_operand_d imm_uses; }; 
#line 1517 "../.././gcc/tree.h"
struct phi_arg_d {struct ssa_use_operand_d imm_use;  tree def; unsigned char nonzero; }; 
#line 1532 "../.././gcc/tree.h"
struct tree_phi_node {struct tree_common common;  tree result; int num_args; int capacity; struct basic_block_def *bb; struct phi_arg_d a[1]; }; 
#line 1535 "../.././gcc/tree.h"
struct varray_head_tag ; 
# 1510 "../.././gcc/tree.h" 
# 1603 "../.././gcc/tree.h" 
struct tree_block {struct tree_common common; unsigned handler_block_flag:1; unsigned abstract_flag:1; unsigned block_num:30;  tree vars;  tree subblocks;  tree supercontext;  tree abstract_origin;  tree fragment_origin;  tree fragment_chain;  location_t locus; }; 
#line 1799 "../.././gcc/tree.h"
struct die_struct ; 
#line 1849 "../.././gcc/tree.h"
struct tree_type {struct tree_common common;  tree values;  tree size;  tree size_unit;  tree attributes; unsigned int uid; unsigned int precision:9;  __extension__ enum machine_mode mode:7; unsigned string_flag:1; unsigned no_force_blk_flag:1; unsigned needs_constructing_flag:1; unsigned transparent_union_flag:1; unsigned packed_flag:1; unsigned restrict_flag:1; unsigned contains_placeholder_bits:2; unsigned lang_flag_0:1; unsigned lang_flag_1:1; unsigned lang_flag_2:1; unsigned lang_flag_3:1; unsigned lang_flag_4:1; unsigned lang_flag_5:1; unsigned lang_flag_6:1; unsigned user_align:1; unsigned int align;  tree pointer_to;  tree reference_to; union tree_type_symtab {int address; char *pointer; struct die_struct *die; }symtab;  tree name;  tree minval;  tree maxval;  tree next_variant;  tree main_variant;  tree binfo;  tree context; long alias_set; struct lang_type *lang_specific; }; 
# 1799 "../.././gcc/tree.h" 
# 1969 "../.././gcc/tree.h" 
struct tree_binfo {struct tree_common common;  tree offset;  tree vtable;  tree virtuals;  tree vptr_field;  VEC_tree_gc *base_accesses;  tree inheritance;  tree vtt_subvtt;  tree vtt_vptr;  VEC_tree_none base_binfos; }; 
#line 1996 "../.././gcc/tree.h"
enum symbol_visibility {VISIBILITY_DEFAULT,VISIBILITY_INTERNAL,VISIBILITY_HIDDEN,VISIBILITY_PROTECTED}; 
#line 1999 "../.././gcc/tree.h"
struct function ; 
# 1990 "../.././gcc/tree.h" 
# 2039 "../.././gcc/tree.h" 
struct tree_decl_minimal {struct tree_common common;  location_t locus; unsigned int uid;  tree name;  tree context; }; 
#line 2247 "../.././gcc/tree.h"
struct tree_decl_common {struct tree_decl_minimal common;  tree size;  __extension__ enum machine_mode mode:8; unsigned nonlocal_flag:1; unsigned virtual_flag:1; unsigned ignored_flag:1; unsigned abstract_flag:1; unsigned artificial_flag:1; unsigned user_align:1; unsigned preserve_flag:1; unsigned debug_expr_is_from:1; unsigned lang_flag_0:1; unsigned lang_flag_1:1; unsigned lang_flag_2:1; unsigned lang_flag_3:1; unsigned lang_flag_4:1; unsigned lang_flag_5:1; unsigned lang_flag_6:1; unsigned lang_flag_7:1; unsigned decl_flag_0:1; unsigned decl_flag_1:1; unsigned decl_flag_2:1; unsigned decl_flag_3:1; unsigned gimple_reg_flag:1; union tree_decl_u1 {enum built_in_function f; long i; struct tree_decl_u1_a {unsigned int align:24; unsigned int off_align:8; }a; }u1;  tree size_unit;  tree initial;  tree attributes;  tree abstract_origin; long pointer_alias_set; struct lang_decl *lang_specific; }; 
#line 2249 "../.././gcc/tree.h"
extern  tree decl_value_expr_lookup( tree ); 
#line 2250 "../.././gcc/tree.h"
extern void decl_value_expr_insert( tree ,  tree ); 
# 2183 "../.././gcc/tree.h" 
# 2295 "../.././gcc/tree.h" 
struct tree_decl_with_rtl {struct tree_decl_common common;  rtx rtl; }; 
#line 2354 "../.././gcc/tree.h"
struct tree_field_decl {struct tree_decl_common common;  tree offset;  tree bit_field_type;  tree qualifier;  tree bit_offset;  tree fcontext; }; 
# 2344 "../.././gcc/tree.h" 
# 2377 "../.././gcc/tree.h" 
struct tree_label_decl {struct tree_decl_with_rtl common;  tree java_field_1;  tree java_field_2;  tree java_field_3; unsigned int java_field_4; }; 
#line 2382 "../.././gcc/tree.h"
struct tree_result_decl {struct tree_decl_with_rtl common; }; 
#line 2387 "../.././gcc/tree.h"
struct tree_const_decl {struct tree_decl_with_rtl common; }; 
#line 2401 "../.././gcc/tree.h"
struct tree_parm_decl {struct tree_decl_with_rtl common;  rtx incoming_rtl; }; 
# 2397 "../.././gcc/tree.h" 
# 2441 "../.././gcc/tree.h" 
extern  tree decl_restrict_base_lookup( tree ); 
#line 2442 "../.././gcc/tree.h"
extern void decl_restrict_base_insert( tree ,  tree ); 
#line 2537 "../.././gcc/tree.h"
struct tree_decl_with_vis {struct tree_decl_with_rtl common;  tree assembler_name;  tree section_name; unsigned defer_output:1; unsigned hard_register:1; unsigned thread_local:1; unsigned common_flag:1; unsigned in_text_section:1; unsigned gimple_formal_temp:1; unsigned dllimport_flag:1; unsigned based_on_restrict_p:1; unsigned shadowed_for_var_p:1; unsigned in_system_header_flag:1; unsigned weak_flag:1; unsigned seen_in_bind_expr:1; unsigned comdat_flag:1;  __extension__ enum symbol_visibility visibility:2; unsigned visibility_specified:1; unsigned one_only:1; unsigned init_priority_p:1;  __extension__ enum tls_model tls_model:3; }; 
# 2505 "../.././gcc/tree.h" 
# 2552 "../.././gcc/tree.h" 
extern  tree decl_debug_expr_lookup( tree ); 
#line 2553 "../.././gcc/tree.h"
extern void decl_debug_expr_insert( tree ,  tree ); 
#line 2564 "../.././gcc/tree.h"
extern unsigned short decl_init_priority_lookup( tree ); 
#line 2565 "../.././gcc/tree.h"
extern void decl_init_priority_insert( tree , unsigned short ); 
# 2564 "../.././gcc/tree.h" 
# 2590 "../.././gcc/tree.h" 
struct tree_var_decl {struct tree_decl_with_vis common; }; 
#line 2619 "../.././gcc/tree.h"
struct tree_decl_non_common {struct tree_decl_with_vis common;  tree saved_tree;  tree arguments;  tree result;  tree vindex; }; 
# 2607 "../.././gcc/tree.h" 
# 2733 "../.././gcc/tree.h" 
struct tree_function_decl {struct tree_decl_non_common common; unsigned static_ctor_flag:1; unsigned static_dtor_flag:1; unsigned uninlinable:1; unsigned possibly_inlined:1; unsigned novops_flag:1; unsigned returns_twice_flag:1; unsigned malloc_flag:1; unsigned pure_flag:1; unsigned declared_inline_flag:1; unsigned regdecl_flag:1; unsigned inline_flag:1; unsigned no_instrument_function_entry_exit:1; unsigned no_limit_stack:1;  __extension__ enum built_in_class built_in_class:2; struct function *f; }; 
#line 2748 "../.././gcc/tree.h"
struct tree_type_decl {struct tree_decl_non_common common; }; 
# 2744 "../.././gcc/tree.h" 
# 2767 "../.././gcc/tree.h" 
struct tree_statement_list_node {struct tree_statement_list_node *prev; struct tree_statement_list_node *next;  tree stmt; }; 
#line 2775 "../.././gcc/tree.h"
struct tree_statement_list {struct tree_common common; struct tree_statement_list_node *head; struct tree_statement_list_node *tail; }; 
#line 2784 "../.././gcc/tree.h"
struct value_set ; 
#line 2797 "../.././gcc/tree.h"
struct tree_value_handle {struct tree_common common; struct value_set *expr_set; unsigned int id; }; 
#line 2837 "../.././gcc/tree.h"
union tree_node {struct tree_common common; struct tree_int_cst int_cst; struct tree_real_cst real_cst; struct tree_vector vector; struct tree_string string; struct tree_complex complex; struct tree_identifier identifier; struct tree_decl_minimal decl_minimal; struct tree_decl_common decl_common; struct tree_decl_with_rtl decl_with_rtl; struct tree_decl_non_common decl_non_common; struct tree_parm_decl parm_decl; struct tree_decl_with_vis decl_with_vis; struct tree_var_decl var_decl; struct tree_field_decl field_decl; struct tree_label_decl label_decl; struct tree_result_decl result_decl; struct tree_const_decl const_decl; struct tree_type_decl type_decl; struct tree_function_decl function_decl; struct tree_type type; struct tree_list list; struct tree_vec vec; struct tree_exp exp; struct tree_ssa_name ssa_name; struct tree_phi_node phi; struct tree_block block; struct tree_binfo binfo; struct tree_statement_list stmt_list; struct tree_value_handle value_handle; struct tree_constructor constructor; }; 
#line 2906 "../.././gcc/tree.h"
enum tree_index {TI_ERROR_MARK,TI_INTQI_TYPE,TI_INTHI_TYPE,TI_INTSI_TYPE,TI_INTDI_TYPE,TI_INTTI_TYPE,TI_UINTQI_TYPE,TI_UINTHI_TYPE,TI_UINTSI_TYPE,TI_UINTDI_TYPE,TI_UINTTI_TYPE,TI_INTEGER_ZERO,TI_INTEGER_ONE,TI_INTEGER_MINUS_ONE,TI_NULL_POINTER,TI_SIZE_ZERO,TI_SIZE_ONE,TI_BITSIZE_ZERO,TI_BITSIZE_ONE,TI_BITSIZE_UNIT,TI_PUBLIC,TI_PROTECTED,TI_PRIVATE,TI_BOOLEAN_FALSE,TI_BOOLEAN_TRUE,TI_COMPLEX_INTEGER_TYPE,TI_COMPLEX_FLOAT_TYPE,TI_COMPLEX_DOUBLE_TYPE,TI_COMPLEX_LONG_DOUBLE_TYPE,TI_FLOAT_TYPE,TI_DOUBLE_TYPE,TI_LONG_DOUBLE_TYPE,TI_FLOAT_PTR_TYPE,TI_DOUBLE_PTR_TYPE,TI_LONG_DOUBLE_PTR_TYPE,TI_INTEGER_PTR_TYPE,TI_VOID_TYPE,TI_PTR_TYPE,TI_CONST_PTR_TYPE,TI_SIZE_TYPE,TI_PID_TYPE,TI_PTRDIFF_TYPE,TI_VA_LIST_TYPE,TI_VA_LIST_GPR_COUNTER_FIELD,TI_VA_LIST_FPR_COUNTER_FIELD,TI_BOOLEAN_TYPE,TI_FILEPTR_TYPE,TI_VOID_LIST_NODE,TI_MAIN_IDENTIFIER,TI_MAX}; 
#line 2908 "../.././gcc/tree.h"
extern  tree global_trees[TI_MAX]; 
# 2784 "../.././gcc/tree.h" 
# 3001 "../.././gcc/tree.h" 
enum integer_type_kind {itk_char,itk_signed_char,itk_unsigned_char,itk_short,itk_unsigned_short,itk_int,itk_unsigned_int,itk_long,itk_unsigned_long,itk_long_long,itk_unsigned_long_long,itk_none}; 
#line 3003 "../.././gcc/tree.h"
typedef enum integer_type_kind integer_type_kind; 
#line 3007 "../.././gcc/tree.h"
extern  tree integer_types[itk_none]; 
#line 3023 "../.././gcc/tree.h"
extern enum tls_model flag_tls_default; 
# 3023 "../.././gcc/tree.h" 
# 3051 "../.././gcc/tree.h" 
enum ptrmemfunc_vbit_where_t {ptrmemfunc_vbit_in_pfn,ptrmemfunc_vbit_in_delta}; 
#line 3055 "../.././gcc/tree.h"
extern  tree decl_assembler_name( tree ); 
#line 3060 "../.././gcc/tree.h"
extern  size_t tree_size( tree ); 
#line 3065 "../.././gcc/tree.h"
extern  size_t tree_code_size(enum tree_code ); 
#line 3071 "../.././gcc/tree.h"
extern  tree make_node_stat(enum tree_code ); 
#line 3076 "../.././gcc/tree.h"
extern  tree copy_node_stat( tree ); 
#line 3081 "../.././gcc/tree.h"
extern  tree copy_list( tree ); 
#line 3084 "../.././gcc/tree.h"
extern  tree make_tree_binfo_stat(unsigned ); 
#line 3089 "../.././gcc/tree.h"
extern  tree make_tree_vec_stat(int ); 
#line 3094 "../.././gcc/tree.h"
extern void init_phinodes(void ); 
#line 3095 "../.././gcc/tree.h"
extern void fini_phinodes(void ); 
#line 3096 "../.././gcc/tree.h"
extern void release_phi_node( tree ); 
#line 3101 "../.././gcc/tree.h"
extern void init_ssanames(void ); 
#line 3102 "../.././gcc/tree.h"
extern void fini_ssanames(void ); 
#line 3103 "../.././gcc/tree.h"
extern  tree make_ssa_name( tree ,  tree ); 
#line 3104 "../.././gcc/tree.h"
extern  tree duplicate_ssa_name( tree ,  tree ); 
#line 3105 "../.././gcc/tree.h"
extern void duplicate_ssa_name_ptr_info( tree , struct ptr_info_def *); 
#line 3106 "../.././gcc/tree.h"
extern void release_ssa_name( tree ); 
#line 3107 "../.././gcc/tree.h"
extern void release_defs( tree ); 
#line 3108 "../.././gcc/tree.h"
extern void replace_ssa_name_symbol( tree ,  tree ); 
#line 3117 "../.././gcc/tree.h"
extern  tree get_identifier(const char *); 
# 3117 "../.././gcc/tree.h" 
# 3130 "../.././gcc/tree.h" 
extern  tree get_identifier_with_length(const char *,  size_t ); 
#line 3136 "../.././gcc/tree.h"
extern  tree maybe_get_identifier(const char *); 
#line 3140 "../.././gcc/tree.h"
extern  tree build(enum tree_code ,  tree , ...); 
#line 3141 "../.././gcc/tree.h"
extern  tree build_nt(enum tree_code , ...); 
#line 3155 "../.././gcc/tree.h"
extern  tree build0_stat(enum tree_code ,  tree ); 
#line 3157 "../.././gcc/tree.h"
extern  tree build1_stat(enum tree_code ,  tree ,  tree ); 
#line 3159 "../.././gcc/tree.h"
extern  tree build2_stat(enum tree_code ,  tree ,  tree ,  tree ); 
#line 3161 "../.././gcc/tree.h"
extern  tree build3_stat(enum tree_code ,  tree ,  tree ,  tree ,  tree ); 
#line 3164 "../.././gcc/tree.h"
extern  tree build4_stat(enum tree_code ,  tree ,  tree ,  tree ,  tree ,  tree ); 
#line 3167 "../.././gcc/tree.h"
extern  tree build7_stat(enum tree_code ,  tree ,  tree ,  tree ,  tree ,  tree ,  tree ,  tree ,  tree ); 
#line 3171 "../.././gcc/tree.h"
extern  tree build_int_cst( tree , long ); 
#line 3172 "../.././gcc/tree.h"
extern  tree build_int_cst_type( tree , long ); 
#line 3173 "../.././gcc/tree.h"
extern  tree build_int_cstu( tree , unsigned long ); 
#line 3174 "../.././gcc/tree.h"
extern  tree build_int_cst_wide( tree , unsigned long , long ); 
#line 3175 "../.././gcc/tree.h"
extern  tree build_vector( tree ,  tree ); 
#line 3176 "../.././gcc/tree.h"
extern  tree build_vector_from_ctor( tree ,  VEC_constructor_elt_gc *); 
#line 3177 "../.././gcc/tree.h"
extern  tree build_constructor( tree ,  VEC_constructor_elt_gc *); 
#line 3178 "../.././gcc/tree.h"
extern  tree build_constructor_single( tree ,  tree ,  tree ); 
#line 3179 "../.././gcc/tree.h"
extern  tree build_constructor_from_list( tree ,  tree ); 
#line 3180 "../.././gcc/tree.h"
extern  tree build_real_from_int_cst( tree ,  tree ); 
#line 3181 "../.././gcc/tree.h"
extern  tree build_complex( tree ,  tree ,  tree ); 
#line 3182 "../.././gcc/tree.h"
extern  tree build_string(int , const char *); 
#line 3183 "../.././gcc/tree.h"
extern  tree build_tree_list_stat( tree ,  tree ); 
#line 3185 "../.././gcc/tree.h"
extern  tree build_decl_stat(enum tree_code ,  tree ,  tree ); 
#line 3186 "../.././gcc/tree.h"
extern  tree build_fn_decl(const char *,  tree ); 
#line 3188 "../.././gcc/tree.h"
extern  tree build_block( tree ,  tree ,  tree ,  tree ); 
#line 3190 "../.././gcc/tree.h"
extern void annotate_with_file_line( tree , const char *, int ); 
#line 3191 "../.././gcc/tree.h"
extern void annotate_with_locus( tree ,  location_t ); 
#line 3193 "../.././gcc/tree.h"
extern  tree build_empty_stmt(void ); 
#line 3197 "../.././gcc/tree.h"
extern  tree make_signed_type(int ); 
#line 3198 "../.././gcc/tree.h"
extern  tree make_unsigned_type(int ); 
#line 3199 "../.././gcc/tree.h"
extern  tree signed_type_for( tree ); 
#line 3200 "../.././gcc/tree.h"
extern  tree unsigned_type_for( tree ); 
#line 3201 "../.././gcc/tree.h"
extern void initialize_sizetypes(unsigned char ); 
#line 3202 "../.././gcc/tree.h"
extern void set_sizetype( tree ); 
#line 3203 "../.././gcc/tree.h"
extern void fixup_unsigned_type( tree ); 
#line 3204 "../.././gcc/tree.h"
extern  tree build_pointer_type_for_mode( tree , enum machine_mode , unsigned char ); 
#line 3205 "../.././gcc/tree.h"
extern  tree build_pointer_type( tree ); 
#line 3206 "../.././gcc/tree.h"
extern  tree build_reference_type_for_mode( tree , enum machine_mode , unsigned char ); 
#line 3207 "../.././gcc/tree.h"
extern  tree build_reference_type( tree ); 
#line 3208 "../.././gcc/tree.h"
extern  tree build_vector_type_for_mode( tree , enum machine_mode ); 
#line 3209 "../.././gcc/tree.h"
extern  tree build_vector_type( tree innertype, int nunits); 
#line 3210 "../.././gcc/tree.h"
extern  tree build_type_no_quals( tree ); 
#line 3211 "../.././gcc/tree.h"
extern  tree build_index_type( tree ); 
#line 3212 "../.././gcc/tree.h"
extern  tree build_index_2_type( tree ,  tree ); 
#line 3213 "../.././gcc/tree.h"
extern  tree build_array_type( tree ,  tree ); 
#line 3214 "../.././gcc/tree.h"
extern  tree build_function_type( tree ,  tree ); 
#line 3215 "../.././gcc/tree.h"
extern  tree build_function_type_list( tree , ...); 
#line 3216 "../.././gcc/tree.h"
extern  tree build_method_type_directly( tree ,  tree ,  tree ); 
#line 3217 "../.././gcc/tree.h"
extern  tree build_method_type( tree ,  tree ); 
#line 3218 "../.././gcc/tree.h"
extern  tree build_offset_type( tree ,  tree ); 
#line 3219 "../.././gcc/tree.h"
extern  tree build_complex_type( tree ); 
#line 3220 "../.././gcc/tree.h"
extern  tree build_resx(int ); 
#line 3221 "../.././gcc/tree.h"
extern  tree array_type_nelts( tree ); 
#line 3222 "../.././gcc/tree.h"
extern unsigned char in_array_bounds_p( tree ); 
#line 3224 "../.././gcc/tree.h"
extern  tree value_member( tree ,  tree ); 
#line 3225 "../.././gcc/tree.h"
extern  tree purpose_member( tree ,  tree ); 
#line 3227 "../.././gcc/tree.h"
extern int attribute_list_equal( tree ,  tree ); 
#line 3228 "../.././gcc/tree.h"
extern int attribute_list_contained( tree ,  tree ); 
#line 3229 "../.././gcc/tree.h"
extern int tree_int_cst_equal( tree ,  tree ); 
#line 3230 "../.././gcc/tree.h"
extern int tree_int_cst_lt( tree ,  tree ); 
#line 3231 "../.././gcc/tree.h"
extern int tree_int_cst_compare( tree ,  tree ); 
#line 3232 "../.././gcc/tree.h"
extern int host_integerp( tree , int ); 
#line 3233 "../.././gcc/tree.h"
extern long tree_low_cst( tree , int ); 
#line 3234 "../.././gcc/tree.h"
extern int tree_int_cst_msb( tree ); 
#line 3235 "../.././gcc/tree.h"
extern int tree_int_cst_sgn( tree ); 
#line 3236 "../.././gcc/tree.h"
extern int tree_int_cst_sign_bit( tree ); 
#line 3237 "../.././gcc/tree.h"
extern int tree_expr_nonnegative_p( tree ); 
#line 3238 "../.././gcc/tree.h"
extern unsigned char may_negate_without_overflow_p( tree ); 
#line 3239 "../.././gcc/tree.h"
extern  tree get_inner_array_type( tree ); 
#line 3245 "../.././gcc/tree.h"
extern  tree make_tree( tree ,  rtx ); 
#line 3253 "../.././gcc/tree.h"
extern  tree build_type_attribute_variant( tree ,  tree ); 
#line 3254 "../.././gcc/tree.h"
extern  tree build_decl_attribute_variant( tree ,  tree ); 
# 3155 "../.././gcc/tree.h" 
# 3299 "../.././gcc/tree.h" 
struct attribute_spec {const char *const name; const int min_length; const int max_length; const unsigned char decl_required; const unsigned char type_required; const unsigned char function_type_required;  tree (*const handler)( tree *node,  tree name,  tree args, int flags, unsigned char *no_add_attrs); }; 
#line 3324 "../.././gcc/tree.h"
enum attribute_flags {ATTR_FLAG_DECL_NEXT=1,ATTR_FLAG_FUNCTION_NEXT=2,ATTR_FLAG_ARRAY_NEXT=4,ATTR_FLAG_TYPE_IN_PLACE=8,ATTR_FLAG_BUILT_IN=16}; 
#line 3328 "../.././gcc/tree.h"
extern  tree merge_decl_attributes( tree ,  tree ); 
#line 3329 "../.././gcc/tree.h"
extern  tree merge_type_attributes( tree ,  tree ); 
#line 3334 "../.././gcc/tree.h"
extern int is_attribute_p(const char *,  tree ); 
#line 3339 "../.././gcc/tree.h"
extern  tree lookup_attribute(const char *,  tree ); 
#line 3343 "../.././gcc/tree.h"
extern  tree merge_attributes( tree ,  tree ); 
#line 3357 "../.././gcc/tree.h"
extern unsigned char check_qualified_type( tree ,  tree , int ); 
#line 3363 "../.././gcc/tree.h"
extern  tree get_qualified_type( tree , int ); 
#line 3368 "../.././gcc/tree.h"
extern  tree build_qualified_type( tree , int ); 
# 3357 "../.././gcc/tree.h" 
# 3382 "../.././gcc/tree.h" 
extern  tree build_distinct_type_copy( tree ); 
#line 3383 "../.././gcc/tree.h"
extern  tree build_variant_type_copy( tree ); 
#line 3389 "../.././gcc/tree.h"
extern void finish_builtin_struct( tree , const char *,  tree ,  tree ); 
#line 3395 "../.././gcc/tree.h"
extern void layout_type( tree ); 
#line 3433 "../.././gcc/tree.h"
typedef struct record_layout_info_s { tree t;  tree offset; unsigned int offset_align;  tree bitpos; unsigned int record_align; unsigned int unpacked_align;  tree prev_field;  tree pending_statics; int remaining_in_alignment; int prev_packed; int packed_maybe_necessary; }*record_layout_info; 
#line 3435 "../.././gcc/tree.h"
extern void set_lang_adjust_rli(void (*)( record_layout_info )); 
#line 3436 "../.././gcc/tree.h"
extern  record_layout_info start_record_layout( tree ); 
#line 3437 "../.././gcc/tree.h"
extern  tree bit_from_pos( tree ,  tree ); 
#line 3438 "../.././gcc/tree.h"
extern  tree byte_from_pos( tree ,  tree ); 
#line 3439 "../.././gcc/tree.h"
extern void pos_from_bit( tree *,  tree *, unsigned int ,  tree ); 
#line 3440 "../.././gcc/tree.h"
extern void normalize_offset( tree *,  tree *, unsigned int ); 
#line 3441 "../.././gcc/tree.h"
extern  tree rli_size_unit_so_far( record_layout_info ); 
#line 3442 "../.././gcc/tree.h"
extern  tree rli_size_so_far( record_layout_info ); 
#line 3443 "../.././gcc/tree.h"
extern void normalize_rli( record_layout_info ); 
#line 3444 "../.././gcc/tree.h"
extern void place_field( record_layout_info ,  tree ); 
#line 3445 "../.././gcc/tree.h"
extern void compute_record_mode( tree ); 
#line 3446 "../.././gcc/tree.h"
extern void finish_record_layout( record_layout_info , int ); 
#line 3453 "../.././gcc/tree.h"
extern  tree type_hash_canon(unsigned int ,  tree ); 
# 3404 "../.././gcc/tree.h" 
# 3463 "../.././gcc/tree.h" 
extern void layout_decl( tree , unsigned ); 
#line 3468 "../.././gcc/tree.h"
extern void relayout_decl( tree ); 
#line 3475 "../.././gcc/tree.h"
extern enum machine_mode mode_for_size_tree( tree , enum mode_class , int ); 
#line 3479 "../.././gcc/tree.h"
extern  tree non_lvalue( tree ); 
#line 3481 "../.././gcc/tree.h"
extern  tree convert( tree ,  tree ); 
#line 3482 "../.././gcc/tree.h"
extern unsigned int expr_align( tree ); 
#line 3483 "../.././gcc/tree.h"
extern  tree expr_first( tree ); 
#line 3484 "../.././gcc/tree.h"
extern  tree expr_last( tree ); 
#line 3485 "../.././gcc/tree.h"
extern  tree expr_only( tree ); 
#line 3486 "../.././gcc/tree.h"
extern  tree size_in_bytes( tree ); 
#line 3487 "../.././gcc/tree.h"
extern long int_size_in_bytes( tree ); 
#line 3488 "../.././gcc/tree.h"
extern  tree bit_position( tree ); 
#line 3489 "../.././gcc/tree.h"
extern long int_bit_position( tree ); 
#line 3490 "../.././gcc/tree.h"
extern  tree byte_position( tree ); 
#line 3491 "../.././gcc/tree.h"
extern long int_byte_position( tree ); 
#line 3502 "../.././gcc/tree.h"
enum size_type_kind {SIZETYPE,SSIZETYPE,BITSIZETYPE,SBITSIZETYPE,TYPE_KIND_LAST}; 
#line 3504 "../.././gcc/tree.h"
extern  tree sizetype_tab[((int )TYPE_KIND_LAST)]; 
#line 3511 "../.././gcc/tree.h"
extern  tree size_int_kind(long , enum size_type_kind ); 
#line 3512 "../.././gcc/tree.h"
extern  tree size_binop(enum tree_code ,  tree ,  tree ); 
#line 3513 "../.././gcc/tree.h"
extern  tree size_diffop( tree ,  tree ); 
#line 3520 "../.././gcc/tree.h"
extern  tree round_up( tree , int ); 
#line 3521 "../.././gcc/tree.h"
extern  tree round_down( tree , int ); 
#line 3522 "../.././gcc/tree.h"
extern  tree get_pending_sizes(void ); 
#line 3523 "../.././gcc/tree.h"
extern void put_pending_size( tree ); 
#line 3524 "../.././gcc/tree.h"
extern void put_pending_sizes( tree ); 
#line 3534 "../.././gcc/tree.h"
extern unsigned int maximum_field_alignment; 
#line 3536 "../.././gcc/tree.h"
extern unsigned int initial_max_fld_align; 
#line 3542 "../.././gcc/tree.h"
extern  tree chainon( tree ,  tree ); 
#line 3546 "../.././gcc/tree.h"
extern  tree tree_cons_stat( tree ,  tree ,  tree ); 
#line 3551 "../.././gcc/tree.h"
extern  tree tree_last( tree ); 
#line 3555 "../.././gcc/tree.h"
extern  tree nreverse( tree ); 
#line 3560 "../.././gcc/tree.h"
extern int list_length( tree ); 
#line 3564 "../.././gcc/tree.h"
extern int fields_length( tree ); 
#line 3569 "../.././gcc/tree.h"
extern unsigned char initializer_zerop( tree ); 
#line 3572 "../.././gcc/tree.h"
extern void categorize_ctor_elements( tree , long *, long *, long *, unsigned char *); 
#line 3573 "../.././gcc/tree.h"
extern long count_type_elements( tree , unsigned char ); 
#line 3577 "../.././gcc/tree.h"
extern void add_var_to_bind_expr( tree ,  tree ); 
#line 3581 "../.././gcc/tree.h"
extern int integer_zerop( tree ); 
#line 3585 "../.././gcc/tree.h"
extern int integer_onep( tree ); 
#line 3590 "../.././gcc/tree.h"
extern int integer_all_onesp( tree ); 
#line 3595 "../.././gcc/tree.h"
extern int integer_pow2p( tree ); 
#line 3600 "../.././gcc/tree.h"
extern int integer_nonzerop( tree ); 
#line 3602 "../.././gcc/tree.h"
extern unsigned char zero_p( tree ); 
#line 3603 "../.././gcc/tree.h"
extern unsigned char cst_and_fits_in_hwi( tree ); 
#line 3604 "../.././gcc/tree.h"
extern  tree num_ending_zeros( tree ); 
#line 3609 "../.././gcc/tree.h"
extern  tree staticp( tree ); 
#line 3615 "../.././gcc/tree.h"
extern  tree save_expr( tree ); 
#line 3620 "../.././gcc/tree.h"
extern  tree skip_simple_arithmetic( tree ); 
#line 3624 "../.././gcc/tree.h"
enum tree_node_structure_enum tree_node_structure( tree ); 
#line 3632 "../.././gcc/tree.h"
extern unsigned char contains_placeholder_p( tree ); 
# 3534 "../.././gcc/tree.h" 
# 3644 "../.././gcc/tree.h" 
extern unsigned char type_contains_placeholder_p( tree ); 
#line 3651 "../.././gcc/tree.h"
extern  tree substitute_in_expr( tree ,  tree ,  tree ); 
#line 3662 "../.././gcc/tree.h"
extern  tree substitute_placeholder_in_expr( tree ,  tree ); 
# 3662 "../.././gcc/tree.h" 
# 3677 "../.././gcc/tree.h" 
extern  tree variable_size( tree ); 
#line 3683 "../.././gcc/tree.h"
extern  tree stabilize_reference( tree ); 
#line 3689 "../.././gcc/tree.h"
extern  tree stabilize_reference_1( tree ); 
#line 3696 "../.././gcc/tree.h"
extern  tree get_unwidened( tree ,  tree ); 
#line 3703 "../.././gcc/tree.h"
extern  tree get_narrower( tree , int *); 
#line 3711 "../.././gcc/tree.h"
extern  tree get_inner_reference( tree , long *, long *,  tree *, enum machine_mode *, int *, int *, unsigned char ); 
#line 3715 "../.././gcc/tree.h"
extern int handled_component_p( tree ); 
#line 3720 "../.././gcc/tree.h"
extern  tree array_ref_element_size( tree ); 
#line 3725 "../.././gcc/tree.h"
extern  tree array_ref_low_bound( tree ); 
#line 3730 "../.././gcc/tree.h"
extern  tree array_ref_up_bound( tree ); 
#line 3735 "../.././gcc/tree.h"
extern  tree component_ref_field_offset( tree ); 
#line 3740 "../.././gcc/tree.h"
extern  tree get_containing_scope( tree ); 
#line 3744 "../.././gcc/tree.h"
extern  tree decl_function_context( tree ); 
#line 3748 "../.././gcc/tree.h"
extern  tree decl_type_context( tree ); 
#line 3751 "../.././gcc/tree.h"
extern int real_zerop( tree ); 
#line 3758 "../.././gcc/tree.h"
extern int pedantic_lvalues; 
#line 3762 "../.././gcc/tree.h"
extern  tree current_function_decl; 
#line 3765 "../.././gcc/tree.h"
extern const char *current_function_func_begin_label; 
#line 3768 "../.././gcc/tree.h"
extern unsigned crc32_string(unsigned , const char *); 
#line 3769 "../.././gcc/tree.h"
extern void clean_symbol_name(char *); 
#line 3770 "../.././gcc/tree.h"
extern  tree get_file_function_name_long(const char *); 
#line 3771 "../.././gcc/tree.h"
extern  tree get_callee_fndecl( tree ); 
#line 3772 "../.././gcc/tree.h"
extern void change_decl_assembler_name( tree ,  tree ); 
#line 3773 "../.././gcc/tree.h"
extern int type_num_arguments( tree ); 
#line 3774 "../.././gcc/tree.h"
extern unsigned char associative_tree_code(enum tree_code ); 
#line 3775 "../.././gcc/tree.h"
extern unsigned char commutative_tree_code(enum tree_code ); 
#line 3776 "../.././gcc/tree.h"
extern  tree upper_bound_in_type( tree ,  tree ); 
#line 3777 "../.././gcc/tree.h"
extern  tree lower_bound_in_type( tree ,  tree ); 
#line 3778 "../.././gcc/tree.h"
extern int operand_equal_for_phi_arg_p( tree ,  tree ); 
#line 3782 "../.././gcc/tree.h"
extern void expand_expr_stmt( tree ); 
#line 3783 "../.././gcc/tree.h"
extern int warn_if_unused_value( tree ,  location_t ); 
#line 3784 "../.././gcc/tree.h"
extern void expand_label( tree ); 
#line 3785 "../.././gcc/tree.h"
extern void expand_goto( tree ); 
#line 3787 "../.././gcc/tree.h"
extern  rtx expand_stack_save(void ); 
#line 3788 "../.././gcc/tree.h"
extern void expand_stack_restore( tree ); 
#line 3789 "../.././gcc/tree.h"
extern void expand_return( tree ); 
#line 3790 "../.././gcc/tree.h"
extern int is_body_block( tree ); 
#line 3793 "../.././gcc/tree.h"
extern void using_eh_for_cleanups(void ); 
#line 3803 "../.././gcc/tree.h"
extern  tree fold( tree ); 
#line 3804 "../.././gcc/tree.h"
extern  tree fold_unary(enum tree_code ,  tree ,  tree ); 
#line 3805 "../.././gcc/tree.h"
extern  tree fold_binary(enum tree_code ,  tree ,  tree ,  tree ); 
#line 3806 "../.././gcc/tree.h"
extern  tree fold_ternary(enum tree_code ,  tree ,  tree ,  tree ,  tree ); 
#line 3807 "../.././gcc/tree.h"
extern  tree fold_build1_stat(enum tree_code ,  tree ,  tree ); 
#line 3809 "../.././gcc/tree.h"
extern  tree fold_build2_stat(enum tree_code ,  tree ,  tree ,  tree ); 
#line 3811 "../.././gcc/tree.h"
extern  tree fold_build3_stat(enum tree_code ,  tree ,  tree ,  tree ,  tree ); 
#line 3813 "../.././gcc/tree.h"
extern  tree fold_build1_initializer(enum tree_code ,  tree ,  tree ); 
#line 3814 "../.././gcc/tree.h"
extern  tree fold_build2_initializer(enum tree_code ,  tree ,  tree ,  tree ); 
#line 3815 "../.././gcc/tree.h"
extern  tree fold_build3_initializer(enum tree_code ,  tree ,  tree ,  tree ,  tree ); 
#line 3816 "../.././gcc/tree.h"
extern  tree fold_convert( tree ,  tree ); 
#line 3817 "../.././gcc/tree.h"
extern  tree fold_single_bit_test(enum tree_code ,  tree ,  tree ,  tree ); 
#line 3818 "../.././gcc/tree.h"
extern  tree fold_ignored_result( tree ); 
#line 3819 "../.././gcc/tree.h"
extern  tree fold_abs_const( tree ,  tree ); 
#line 3820 "../.././gcc/tree.h"
extern  tree fold_indirect_ref_1( tree ,  tree ); 
#line 3822 "../.././gcc/tree.h"
extern  tree force_fit_type( tree , int , unsigned char , unsigned char ); 
#line 3826 "../.././gcc/tree.h"
extern int add_double(unsigned long , long , unsigned long , long , unsigned long *, long *); 
#line 3828 "../.././gcc/tree.h"
extern int neg_double(unsigned long , long , unsigned long *, long *); 
#line 3831 "../.././gcc/tree.h"
extern int mul_double(unsigned long , long , unsigned long , long , unsigned long *, long *); 
#line 3834 "../.././gcc/tree.h"
extern void lshift_double(unsigned long , long , long , unsigned int , unsigned long *, long *, int ); 
#line 3837 "../.././gcc/tree.h"
extern void rshift_double(unsigned long , long , long , unsigned int , unsigned long *, long *, int ); 
#line 3840 "../.././gcc/tree.h"
extern void lrotate_double(unsigned long , long , long , unsigned int , unsigned long *, long *); 
#line 3843 "../.././gcc/tree.h"
extern void rrotate_double(unsigned long , long , long , unsigned int , unsigned long *, long *); 
#line 3849 "../.././gcc/tree.h"
extern int div_and_round_double(enum tree_code , int , unsigned long , long , unsigned long , long , unsigned long *, long *, unsigned long *, long *); 
#line 3855 "../.././gcc/tree.h"
enum operand_equal_flag {OEP_ONLY_CONST=1,OEP_PURE_SAME=2}; 
#line 3857 "../.././gcc/tree.h"
extern int operand_equal_p( tree ,  tree , unsigned int ); 
#line 3859 "../.././gcc/tree.h"
extern  tree omit_one_operand( tree ,  tree ,  tree ); 
#line 3860 "../.././gcc/tree.h"
extern  tree omit_two_operands( tree ,  tree ,  tree ,  tree ); 
#line 3861 "../.././gcc/tree.h"
extern  tree invert_truthvalue( tree ); 
#line 3862 "../.././gcc/tree.h"
extern  tree fold_unary_to_constant(enum tree_code ,  tree ,  tree ); 
#line 3863 "../.././gcc/tree.h"
extern  tree fold_binary_to_constant(enum tree_code ,  tree ,  tree ,  tree ); 
#line 3864 "../.././gcc/tree.h"
extern  tree fold_read_from_constant_string( tree ); 
#line 3865 "../.././gcc/tree.h"
extern  tree int_const_binop(enum tree_code ,  tree ,  tree , int ); 
#line 3866 "../.././gcc/tree.h"
extern  tree build_fold_addr_expr( tree ); 
#line 3867 "../.././gcc/tree.h"
extern  tree fold_build_cleanup_point_expr( tree type,  tree expr); 
#line 3868 "../.././gcc/tree.h"
extern  tree fold_strip_sign_ops( tree ); 
#line 3869 "../.././gcc/tree.h"
extern  tree build_fold_addr_expr_with_type( tree ,  tree ); 
#line 3870 "../.././gcc/tree.h"
extern  tree build_fold_indirect_ref( tree ); 
#line 3871 "../.././gcc/tree.h"
extern  tree fold_indirect_ref( tree ); 
#line 3872 "../.././gcc/tree.h"
extern  tree constant_boolean_node(int ,  tree ); 
#line 3873 "../.././gcc/tree.h"
extern  tree build_low_bits_mask( tree , unsigned ); 
#line 3875 "../.././gcc/tree.h"
extern unsigned char tree_swap_operands_p( tree ,  tree , unsigned char ); 
#line 3876 "../.././gcc/tree.h"
extern void swap_tree_operands( tree ,  tree *,  tree *); 
#line 3877 "../.././gcc/tree.h"
extern enum tree_code swap_tree_comparison(enum tree_code ); 
#line 3879 "../.././gcc/tree.h"
extern unsigned char ptr_difference_const( tree ,  tree , long *); 
#line 3880 "../.././gcc/tree.h"
extern enum tree_code invert_tree_comparison(enum tree_code , unsigned char ); 
#line 3882 "../.././gcc/tree.h"
extern unsigned char tree_expr_nonzero_p( tree ); 
#line 3885 "../.././gcc/tree.h"
extern  tree fold_builtin( tree ,  tree , unsigned char ); 
#line 3886 "../.././gcc/tree.h"
extern  tree fold_builtin_fputs( tree , unsigned char , unsigned char ,  tree ); 
#line 3887 "../.././gcc/tree.h"
extern  tree fold_builtin_strcpy( tree ,  tree ,  tree ); 
#line 3888 "../.././gcc/tree.h"
extern  tree fold_builtin_strncpy( tree ,  tree ,  tree ); 
#line 3890 "../.././gcc/tree.h"
extern  tree fold_builtin_memory_chk( tree ,  tree ,  tree , unsigned char , enum built_in_function ); 
#line 3892 "../.././gcc/tree.h"
extern  tree fold_builtin_stxcpy_chk( tree ,  tree ,  tree , unsigned char , enum built_in_function ); 
#line 3893 "../.././gcc/tree.h"
extern  tree fold_builtin_strncpy_chk( tree ,  tree ); 
#line 3894 "../.././gcc/tree.h"
extern  tree fold_builtin_snprintf_chk( tree ,  tree , enum built_in_function ); 
#line 3895 "../.././gcc/tree.h"
extern unsigned char fold_builtin_next_arg( tree ); 
#line 3896 "../.././gcc/tree.h"
extern enum built_in_function builtin_mathfn_code( tree ); 
#line 3897 "../.././gcc/tree.h"
extern  tree build_function_call_expr( tree ,  tree ); 
#line 3898 "../.././gcc/tree.h"
extern  tree mathfn_built_in( tree , enum built_in_function fn); 
#line 3899 "../.././gcc/tree.h"
extern  tree strip_float_extensions( tree ); 
#line 3900 "../.././gcc/tree.h"
extern  tree c_strlen( tree , int ); 
#line 3901 "../.././gcc/tree.h"
extern  tree std_gimplify_va_arg_expr( tree ,  tree ,  tree *,  tree *); 
#line 3902 "../.././gcc/tree.h"
extern  tree build_va_arg_indirect_ref( tree ); 
#line 3905 "../.././gcc/tree.h"
extern  tree strip_float_extensions( tree ); 
#line 3908 "../.././gcc/tree.h"
extern void record_component_aliases( tree ); 
#line 3909 "../.././gcc/tree.h"
extern long get_alias_set( tree ); 
#line 3910 "../.././gcc/tree.h"
extern int alias_sets_conflict_p(long , long ); 
#line 3911 "../.././gcc/tree.h"
extern int alias_sets_might_conflict_p(long , long ); 
#line 3912 "../.././gcc/tree.h"
extern int objects_must_conflict_p( tree ,  tree ); 
#line 3915 "../.././gcc/tree.h"
extern int really_constant_p( tree ); 
#line 3916 "../.././gcc/tree.h"
extern int int_fits_type_p( tree ,  tree ); 
#line 3917 "../.././gcc/tree.h"
extern unsigned char variably_modified_type_p( tree ,  tree ); 
#line 3918 "../.././gcc/tree.h"
extern int tree_log2( tree ); 
#line 3919 "../.././gcc/tree.h"
extern int tree_floor_log2( tree ); 
#line 3920 "../.././gcc/tree.h"
extern int simple_cst_equal( tree ,  tree ); 
#line 3921 "../.././gcc/tree.h"
extern unsigned int iterative_hash_expr( tree , unsigned int ); 
#line 3922 "../.././gcc/tree.h"
extern int compare_tree_int( tree , unsigned long ); 
#line 3923 "../.././gcc/tree.h"
extern int type_list_equal( tree ,  tree ); 
#line 3924 "../.././gcc/tree.h"
extern int chain_member( tree ,  tree ); 
#line 3925 "../.././gcc/tree.h"
extern  tree type_hash_lookup(unsigned int ,  tree ); 
#line 3926 "../.././gcc/tree.h"
extern void type_hash_add(unsigned int ,  tree ); 
#line 3927 "../.././gcc/tree.h"
extern int simple_cst_list_equal( tree ,  tree ); 
#line 3928 "../.././gcc/tree.h"
extern void dump_tree_statistics(void ); 
#line 3929 "../.././gcc/tree.h"
extern void expand_function_end(void ); 
#line 3930 "../.././gcc/tree.h"
extern void expand_function_start( tree ); 
#line 3931 "../.././gcc/tree.h"
extern void stack_protect_prologue(void ); 
#line 3932 "../.././gcc/tree.h"
extern void stack_protect_epilogue(void ); 
#line 3933 "../.././gcc/tree.h"
extern void recompute_tree_invarant_for_addr_expr( tree ); 
#line 3934 "../.././gcc/tree.h"
extern unsigned char is_global_var( tree t); 
#line 3935 "../.././gcc/tree.h"
extern unsigned char needs_to_live_in_memory( tree ); 
#line 3936 "../.././gcc/tree.h"
extern  tree reconstruct_complex_type( tree ,  tree ); 
#line 3938 "../.././gcc/tree.h"
extern int real_onep( tree ); 
#line 3939 "../.././gcc/tree.h"
extern int real_twop( tree ); 
#line 3940 "../.././gcc/tree.h"
extern int real_minus_onep( tree ); 
#line 3941 "../.././gcc/tree.h"
extern void init_ttree(void ); 
#line 3942 "../.././gcc/tree.h"
extern void build_common_tree_nodes(unsigned char , unsigned char ); 
#line 3943 "../.././gcc/tree.h"
extern void build_common_tree_nodes_2(int ); 
#line 3944 "../.././gcc/tree.h"
extern void build_common_builtin_nodes(void ); 
#line 3945 "../.././gcc/tree.h"
extern  tree build_nonstandard_integer_type(unsigned long , int ); 
#line 3946 "../.././gcc/tree.h"
extern  tree build_range_type( tree ,  tree ,  tree ); 
#line 3947 "../.././gcc/tree.h"
extern long int_cst_value( tree ); 
#line 3948 "../.././gcc/tree.h"
extern  tree tree_fold_gcd( tree ,  tree ); 
#line 3949 "../.././gcc/tree.h"
extern  tree build_addr( tree ,  tree ); 
#line 3951 "../.././gcc/tree.h"
extern unsigned char fields_compatible_p( tree ,  tree ); 
#line 3952 "../.././gcc/tree.h"
extern  tree find_compatible_field( tree ,  tree ); 
#line 3955 "../.././gcc/tree.h"
extern void expand_main_function(void ); 
#line 3956 "../.././gcc/tree.h"
extern void init_dummy_function_start(void ); 
#line 3957 "../.././gcc/tree.h"
extern void expand_dummy_function_end(void ); 
#line 3958 "../.././gcc/tree.h"
extern void init_function_for_compilation(void ); 
#line 3959 "../.././gcc/tree.h"
extern void allocate_struct_function( tree ); 
#line 3960 "../.././gcc/tree.h"
extern void init_function_start( tree ); 
#line 3961 "../.././gcc/tree.h"
extern unsigned char use_register_for_decl( tree ); 
#line 3962 "../.././gcc/tree.h"
extern void setjmp_vars_warning( tree ); 
#line 3963 "../.././gcc/tree.h"
extern void setjmp_args_warning(void ); 
#line 3964 "../.././gcc/tree.h"
extern void init_temp_slots(void ); 
#line 3965 "../.././gcc/tree.h"
extern void free_temp_slots(void ); 
#line 3966 "../.././gcc/tree.h"
extern void pop_temp_slots(void ); 
#line 3967 "../.././gcc/tree.h"
extern void push_temp_slots(void ); 
#line 3968 "../.././gcc/tree.h"
extern void preserve_temp_slots( rtx ); 
#line 3969 "../.././gcc/tree.h"
extern int aggregate_value_p( tree ,  tree ); 
#line 3970 "../.././gcc/tree.h"
extern void push_function_context(void ); 
#line 3971 "../.././gcc/tree.h"
extern void pop_function_context(void ); 
#line 3972 "../.././gcc/tree.h"
extern void push_function_context_to( tree ); 
#line 3973 "../.././gcc/tree.h"
extern void pop_function_context_from( tree ); 
#line 3974 "../.././gcc/tree.h"
extern  tree gimplify_parameters(void ); 
#line 3978 "../.././gcc/tree.h"
extern void print_rtl( FILE *,  rtx ); 
#line 3982 "../.././gcc/tree.h"
extern void debug_tree( tree ); 
#line 3984 "../.././gcc/tree.h"
extern void print_node( FILE *, const char *,  tree , int ); 
#line 3985 "../.././gcc/tree.h"
extern void print_node_brief( FILE *, const char *,  tree , int ); 
#line 3986 "../.././gcc/tree.h"
extern void indent_to( FILE *, int ); 
#line 3990 "../.././gcc/tree.h"
extern unsigned char debug_find_tree( tree ,  tree ); 
#line 3993 "../.././gcc/tree.h"
extern  tree unsave_expr_now( tree ); 
#line 3994 "../.././gcc/tree.h"
extern  tree build_duplicate_type( tree ); 
#line 3997 "../.././gcc/tree.h"
extern  rtx emit_line_note( location_t ); 
# 3803 "../.././gcc/tree.h" 
# 4029 "../.././gcc/tree.h" 
extern int flags_from_decl_or_type( tree ); 
#line 4030 "../.././gcc/tree.h"
extern int call_expr_flags( tree ); 
#line 4032 "../.././gcc/tree.h"
extern int setjmp_call_p( tree ); 
#line 4033 "../.././gcc/tree.h"
extern unsigned char alloca_call_p( tree ); 
#line 4034 "../.././gcc/tree.h"
extern unsigned char must_pass_in_stack_var_size(enum machine_mode ,  tree ); 
#line 4035 "../.././gcc/tree.h"
extern unsigned char must_pass_in_stack_var_size_or_pad(enum machine_mode ,  tree ); 
#line 4047 "../.././gcc/tree.h"
extern  tree decl_attributes( tree *,  tree , int ); 
#line 4050 "../.././gcc/tree.h"
extern void set_decl_abstract_flags( tree , int ); 
#line 4051 "../.././gcc/tree.h"
extern void set_decl_origin_self( tree ); 
#line 4054 "../.././gcc/tree.h"
extern void set_min_and_max_values_for_integral_type( tree , int , unsigned char ); 
#line 4055 "../.././gcc/tree.h"
extern void fixup_signed_type( tree ); 
#line 4056 "../.././gcc/tree.h"
extern void internal_reference_types(void ); 
#line 4058 "../.././gcc/tree.h"
extern unsigned int update_alignment_for_field( record_layout_info ,  tree , unsigned int ); 
#line 4060 "../.././gcc/tree.h"
extern void make_decl_rtl( tree ); 
#line 4061 "../.././gcc/tree.h"
extern void make_decl_one_only( tree ); 
#line 4062 "../.././gcc/tree.h"
extern int supports_one_only(void ); 
#line 4063 "../.././gcc/tree.h"
extern void variable_section( tree , int ); 
#line 4064 "../.././gcc/tree.h"
extern void resolve_unique_section( tree , int , int ); 
#line 4065 "../.././gcc/tree.h"
extern void mark_referenced( tree ); 
#line 4066 "../.././gcc/tree.h"
extern void mark_decl_referenced( tree ); 
#line 4067 "../.././gcc/tree.h"
extern void notice_global_symbol( tree ); 
#line 4068 "../.././gcc/tree.h"
extern void set_user_assembler_name( tree , const char *); 
#line 4069 "../.././gcc/tree.h"
extern void process_pending_assemble_externals(void ); 
#line 4070 "../.././gcc/tree.h"
extern void finish_aliases_1(void ); 
#line 4071 "../.././gcc/tree.h"
extern void finish_aliases_2(void ); 
#line 4074 "../.././gcc/tree.h"
extern void expand_computed_goto( tree ); 
#line 4076 "../.././gcc/tree.h"
extern unsigned char parse_output_constraint(const char **, int , int , int , unsigned char *, unsigned char *, unsigned char *); 
#line 4078 "../.././gcc/tree.h"
extern unsigned char parse_input_constraint(const char **, int , int , int , int , const char *const *, unsigned char *, unsigned char *); 
#line 4079 "../.././gcc/tree.h"
extern void expand_asm_expr( tree ); 
#line 4080 "../.././gcc/tree.h"
extern  tree resolve_asm_operand_names( tree ,  tree ,  tree ); 
#line 4081 "../.././gcc/tree.h"
extern void expand_case( tree ); 
#line 4082 "../.././gcc/tree.h"
extern void expand_decl( tree ); 
#line 4083 "../.././gcc/tree.h"
extern void expand_anon_union_decl( tree ,  tree ,  tree ); 
#line 4086 "../.././gcc/tree.h"
extern  tree tree_overlaps_hard_reg_set( tree ,  HARD_REG_SET *); 
#line 4090 "../.././gcc/tree.h"
extern  tree create_artificial_label(void ); 
#line 4091 "../.././gcc/tree.h"
extern void gimplify_function_tree( tree ); 
#line 4092 "../.././gcc/tree.h"
extern const char *get_name( tree ); 
#line 4093 "../.././gcc/tree.h"
extern  tree unshare_expr( tree ); 
#line 4094 "../.././gcc/tree.h"
extern void sort_case_labels( tree ); 
#line 4098 "../.././gcc/tree.h"
extern  tree get_file_function_name(int ); 
#line 4104 "../.././gcc/tree.h"
extern char *dwarf2out_cfi_label(void ); 
#line 4108 "../.././gcc/tree.h"
extern void dwarf2out_def_cfa(const char *, unsigned , long ); 
#line 4112 "../.././gcc/tree.h"
extern void dwarf2out_window_save(const char *); 
#line 4117 "../.././gcc/tree.h"
extern void dwarf2out_args_size(const char *, long ); 
#line 4121 "../.././gcc/tree.h"
extern void dwarf2out_reg_save(const char *, unsigned , long ); 
#line 4125 "../.././gcc/tree.h"
extern void dwarf2out_return_save(const char *, long ); 
#line 4129 "../.././gcc/tree.h"
extern void dwarf2out_return_reg(const char *, unsigned ); 
#line 4133 "../.././gcc/tree.h"
extern void dwarf2out_reg_save_reg(const char *,  rtx ,  rtx ); 
#line 4139 "../.././gcc/tree.h"
struct pointer_set_t ; 
#line 4143 "../.././gcc/tree.h"
typedef  tree (*walk_tree_fn)( tree *, int *, void *); 
#line 4144 "../.././gcc/tree.h"
extern  tree walk_tree( tree *,  walk_tree_fn , void *, struct pointer_set_t *); 
#line 4145 "../.././gcc/tree.h"
extern  tree walk_tree_without_duplicates( tree *,  walk_tree_fn , void *); 
#line 4149 "../.././gcc/tree.h"
extern void set_decl_rtl( tree ,  rtx ); 
#line 4150 "../.././gcc/tree.h"
extern void set_decl_incoming_rtl( tree ,  rtx ); 
#line 4175 "../.././gcc/tree.h"
typedef enum {d_kind,t_kind,b_kind,s_kind,r_kind,e_kind,c_kind,id_kind,perm_list_kind,temp_list_kind,vec_kind,binfo_kind,phi_kind,ssa_name_kind,constr_kind,x_kind,lang_decl,lang_type,all_kinds}tree_node_kind; 
#line 4177 "../.././gcc/tree.h"
extern int tree_node_counts[]; 
#line 4178 "../.././gcc/tree.h"
extern int tree_node_sizes[]; 
#line 4183 "../.././gcc/tree.h"
extern unsigned char in_gimple_form; 
#line 4186 "../.././gcc/tree.h"
extern  tree get_base_address( tree t); 
#line 4189 "../.././gcc/tree.h"
extern void vect_set_verbosity_level(const char *); 
#line 4196 "../.././gcc/tree.h"
struct tree_map {unsigned int hash;  tree from;  tree to; }; 
#line 4198 "../.././gcc/tree.h"
extern unsigned int tree_map_hash(const void *); 
#line 4199 "../.././gcc/tree.h"
extern int tree_map_marked_p(const void *); 
#line 4200 "../.././gcc/tree.h"
extern int tree_map_eq(const void *, const void *); 
#line 4203 "../.././gcc/tree.h"
extern  tree tree_mem_ref_addr( tree ,  tree ); 
#line 4204 "../.././gcc/tree.h"
extern void copy_mem_ref_info( tree ,  tree ); 
#line 4207 "../.././gcc/tree.h"
extern void init_object_sizes(void ); 
#line 4208 "../.././gcc/tree.h"
extern void fini_object_sizes(void ); 
#line 4209 "../.././gcc/tree.h"
extern unsigned long compute_builtin_object_size( tree , int ); 
#line 4212 "../.././gcc/tree.h"
extern unsigned long highest_pow2_factor( tree ); 
# 4047 "../.././gcc/tree.h" 
# 31 "../.././gcc/tree-mudflap.c" 2
# 1 "./tm_p.h" 1
# 1 "../.././gcc/config/i386/i386-protos.h" 1
# 23 "../.././gcc/config/i386/i386-protos.h" 
extern void override_options(void ); 
#line 24 "../.././gcc/config/i386/i386-protos.h"
extern void optimization_options(int , int ); 
#line 26 "../.././gcc/config/i386/i386-protos.h"
extern int ix86_can_use_return_insn_p(void ); 
#line 27 "../.././gcc/config/i386/i386-protos.h"
extern int ix86_frame_pointer_required(void ); 
#line 28 "../.././gcc/config/i386/i386-protos.h"
extern void ix86_setup_frame_addresses(void ); 
#line 30 "../.././gcc/config/i386/i386-protos.h"
extern void ix86_file_end(void ); 
#line 31 "../.././gcc/config/i386/i386-protos.h"
extern long ix86_initial_elimination_offset(int , int ); 
#line 32 "../.././gcc/config/i386/i386-protos.h"
extern void ix86_expand_prologue(void ); 
#line 33 "../.././gcc/config/i386/i386-protos.h"
extern void ix86_expand_epilogue(int ); 
#line 35 "../.././gcc/config/i386/i386-protos.h"
extern void ix86_output_addr_vec_elt( FILE *, int ); 
#line 36 "../.././gcc/config/i386/i386-protos.h"
extern void ix86_output_addr_diff_elt( FILE *, int , int ); 
#line 39 "../.././gcc/config/i386/i386-protos.h"
extern int ix86_aligned_p( rtx ); 
#line 41 "../.././gcc/config/i386/i386-protos.h"
extern int standard_80387_constant_p( rtx ); 
#line 42 "../.././gcc/config/i386/i386-protos.h"
extern const char *standard_80387_constant_opcode( rtx ); 
#line 43 "../.././gcc/config/i386/i386-protos.h"
extern  rtx standard_80387_constant_rtx(int ); 
#line 44 "../.././gcc/config/i386/i386-protos.h"
extern int standard_sse_constant_p( rtx ); 
#line 45 "../.././gcc/config/i386/i386-protos.h"
extern int symbolic_reference_mentioned_p( rtx ); 
#line 46 "../.././gcc/config/i386/i386-protos.h"
extern unsigned char extended_reg_mentioned_p( rtx ); 
#line 47 "../.././gcc/config/i386/i386-protos.h"
extern unsigned char x86_extended_QIreg_mentioned_p( rtx ); 
#line 48 "../.././gcc/config/i386/i386-protos.h"
extern unsigned char x86_extended_reg_mentioned_p( rtx ); 
#line 49 "../.././gcc/config/i386/i386-protos.h"
extern enum machine_mode ix86_cc_mode(enum rtx_code ,  rtx ,  rtx ); 
#line 51 "../.././gcc/config/i386/i386-protos.h"
extern int ix86_expand_movmem( rtx ,  rtx ,  rtx ,  rtx ); 
#line 52 "../.././gcc/config/i386/i386-protos.h"
extern int ix86_expand_clrmem( rtx ,  rtx ,  rtx ); 
#line 53 "../.././gcc/config/i386/i386-protos.h"
extern int ix86_expand_strlen( rtx ,  rtx ,  rtx ,  rtx ); 
#line 55 "../.././gcc/config/i386/i386-protos.h"
extern unsigned char legitimate_constant_p( rtx ); 
#line 56 "../.././gcc/config/i386/i386-protos.h"
extern unsigned char constant_address_p( rtx ); 
#line 57 "../.././gcc/config/i386/i386-protos.h"
extern unsigned char legitimate_pic_operand_p( rtx ); 
#line 58 "../.././gcc/config/i386/i386-protos.h"
extern int legitimate_pic_address_disp_p( rtx ); 
#line 59 "../.././gcc/config/i386/i386-protos.h"
extern int legitimate_address_p(enum machine_mode ,  rtx , int ); 
#line 60 "../.././gcc/config/i386/i386-protos.h"
extern  rtx legitimize_address( rtx ,  rtx , enum machine_mode ); 
#line 62 "../.././gcc/config/i386/i386-protos.h"
extern void print_reg( rtx , int ,  FILE *); 
#line 63 "../.././gcc/config/i386/i386-protos.h"
extern void print_operand( FILE *,  rtx , int ); 
#line 64 "../.././gcc/config/i386/i386-protos.h"
extern void print_operand_address( FILE *,  rtx ); 
#line 65 "../.././gcc/config/i386/i386-protos.h"
extern unsigned char output_addr_const_extra( FILE *,  rtx ); 
#line 67 "../.././gcc/config/i386/i386-protos.h"
extern void split_di( rtx ([]), int ,  rtx ([]),  rtx ([])); 
#line 68 "../.././gcc/config/i386/i386-protos.h"
extern void split_ti( rtx ([]), int ,  rtx ([]),  rtx ([])); 
#line 70 "../.././gcc/config/i386/i386-protos.h"
extern const char *output_set_got( rtx ); 
#line 71 "../.././gcc/config/i386/i386-protos.h"
extern const char *output_387_binary_op( rtx ,  rtx *); 
#line 72 "../.././gcc/config/i386/i386-protos.h"
extern const char *output_387_reg_move( rtx ,  rtx *); 
#line 73 "../.././gcc/config/i386/i386-protos.h"
extern const char *output_fix_trunc( rtx ,  rtx *, int ); 
#line 74 "../.././gcc/config/i386/i386-protos.h"
extern const char *output_fp_compare( rtx ,  rtx *, int , int ); 
#line 76 "../.././gcc/config/i386/i386-protos.h"
extern void ix86_expand_clear( rtx ); 
#line 77 "../.././gcc/config/i386/i386-protos.h"
extern void ix86_expand_move(enum machine_mode ,  rtx ([])); 
#line 78 "../.././gcc/config/i386/i386-protos.h"
extern void ix86_expand_vector_move(enum machine_mode ,  rtx ([])); 
#line 79 "../.././gcc/config/i386/i386-protos.h"
extern void ix86_expand_vector_move_misalign(enum machine_mode ,  rtx ([])); 
#line 80 "../.././gcc/config/i386/i386-protos.h"
extern void ix86_expand_push(enum machine_mode ,  rtx ); 
#line 82 "../.././gcc/config/i386/i386-protos.h"
extern  rtx ix86_fixup_binary_operands(enum rtx_code , enum machine_mode ,  rtx ([])); 
#line 84 "../.././gcc/config/i386/i386-protos.h"
extern void ix86_fixup_binary_operands_no_copy(enum rtx_code , enum machine_mode ,  rtx ([])); 
#line 86 "../.././gcc/config/i386/i386-protos.h"
extern void ix86_expand_binary_operator(enum rtx_code , enum machine_mode ,  rtx ([])); 
#line 87 "../.././gcc/config/i386/i386-protos.h"
extern int ix86_binary_operator_ok(enum rtx_code , enum machine_mode ,  rtx ([])); 
#line 89 "../.././gcc/config/i386/i386-protos.h"
extern void ix86_expand_unary_operator(enum rtx_code , enum machine_mode ,  rtx ([])); 
#line 90 "../.././gcc/config/i386/i386-protos.h"
extern  rtx ix86_build_signbit_mask(enum machine_mode , unsigned char , unsigned char ); 
#line 92 "../.././gcc/config/i386/i386-protos.h"
extern void ix86_expand_fp_absneg_operator(enum rtx_code , enum machine_mode ,  rtx ([])); 
#line 93 "../.././gcc/config/i386/i386-protos.h"
extern void ix86_expand_copysign( rtx ([])); 
#line 94 "../.././gcc/config/i386/i386-protos.h"
extern void ix86_split_copysign_const( rtx ([])); 
#line 95 "../.././gcc/config/i386/i386-protos.h"
extern void ix86_split_copysign_var( rtx ([])); 
#line 96 "../.././gcc/config/i386/i386-protos.h"
extern int ix86_unary_operator_ok(enum rtx_code , enum machine_mode ,  rtx ([])); 
#line 97 "../.././gcc/config/i386/i386-protos.h"
extern int ix86_match_ccmode( rtx , enum machine_mode ); 
#line 98 "../.././gcc/config/i386/i386-protos.h"
extern  rtx ix86_expand_compare(enum rtx_code ,  rtx *,  rtx *); 
#line 99 "../.././gcc/config/i386/i386-protos.h"
extern int ix86_use_fcomi_compare(enum rtx_code ); 
#line 100 "../.././gcc/config/i386/i386-protos.h"
extern void ix86_expand_branch(enum rtx_code ,  rtx ); 
#line 101 "../.././gcc/config/i386/i386-protos.h"
extern int ix86_expand_setcc(enum rtx_code ,  rtx ); 
#line 102 "../.././gcc/config/i386/i386-protos.h"
extern int ix86_expand_int_movcc( rtx ([])); 
#line 103 "../.././gcc/config/i386/i386-protos.h"
extern int ix86_expand_fp_movcc( rtx ([])); 
#line 104 "../.././gcc/config/i386/i386-protos.h"
extern unsigned char ix86_expand_fp_vcond( rtx ([])); 
#line 105 "../.././gcc/config/i386/i386-protos.h"
extern unsigned char ix86_expand_int_vcond( rtx ([])); 
#line 106 "../.././gcc/config/i386/i386-protos.h"
extern int ix86_expand_int_addcc( rtx ([])); 
#line 107 "../.././gcc/config/i386/i386-protos.h"
extern void ix86_expand_call( rtx ,  rtx ,  rtx ,  rtx ,  rtx , int ); 
#line 108 "../.././gcc/config/i386/i386-protos.h"
extern void x86_initialize_trampoline( rtx ,  rtx ,  rtx ); 
#line 109 "../.././gcc/config/i386/i386-protos.h"
extern  rtx ix86_zero_extend_to_Pmode( rtx ); 
#line 110 "../.././gcc/config/i386/i386-protos.h"
extern void ix86_split_long_move( rtx ([])); 
#line 111 "../.././gcc/config/i386/i386-protos.h"
extern void ix86_split_ashl( rtx *,  rtx , enum machine_mode ); 
#line 112 "../.././gcc/config/i386/i386-protos.h"
extern void ix86_split_ashr( rtx *,  rtx , enum machine_mode ); 
#line 113 "../.././gcc/config/i386/i386-protos.h"
extern void ix86_split_lshr( rtx *,  rtx , enum machine_mode ); 
#line 114 "../.././gcc/config/i386/i386-protos.h"
extern  rtx ix86_find_base_term( rtx ); 
#line 115 "../.././gcc/config/i386/i386-protos.h"
extern int ix86_check_movabs( rtx , int ); 
#line 117 "../.././gcc/config/i386/i386-protos.h"
extern  rtx assign_386_stack_local(enum machine_mode , enum ix86_stack_slot ); 
#line 118 "../.././gcc/config/i386/i386-protos.h"
extern int ix86_attr_length_immediate_default( rtx , int ); 
#line 119 "../.././gcc/config/i386/i386-protos.h"
extern int ix86_attr_length_address_default( rtx ); 
#line 121 "../.././gcc/config/i386/i386-protos.h"
extern enum machine_mode ix86_fp_compare_mode(enum rtx_code ); 
#line 123 "../.././gcc/config/i386/i386-protos.h"
extern  rtx ix86_libcall_value(enum machine_mode ); 
#line 124 "../.././gcc/config/i386/i386-protos.h"
extern unsigned char ix86_function_value_regno_p(int ); 
#line 125 "../.././gcc/config/i386/i386-protos.h"
extern unsigned char ix86_function_arg_regno_p(int ); 
#line 126 "../.././gcc/config/i386/i386-protos.h"
extern int ix86_function_arg_boundary(enum machine_mode ,  tree ); 
#line 127 "../.././gcc/config/i386/i386-protos.h"
extern int ix86_return_in_memory( tree ); 
#line 128 "../.././gcc/config/i386/i386-protos.h"
extern void ix86_va_start( tree ,  rtx ); 
#line 129 "../.././gcc/config/i386/i386-protos.h"
extern  rtx ix86_va_arg( tree ,  tree ); 
#line 131 "../.././gcc/config/i386/i386-protos.h"
extern  rtx ix86_force_to_memory(enum machine_mode ,  rtx ); 
#line 132 "../.././gcc/config/i386/i386-protos.h"
extern void ix86_free_from_memory(enum machine_mode ); 
#line 134 "../.././gcc/config/i386/i386-protos.h"
extern void ix86_split_fp_branch(enum rtx_code code,  rtx ,  rtx ,  rtx ,  rtx ,  rtx ,  rtx ); 
#line 135 "../.././gcc/config/i386/i386-protos.h"
extern unsigned char ix86_hard_regno_mode_ok(int , enum machine_mode ); 
#line 136 "../.././gcc/config/i386/i386-protos.h"
extern unsigned char ix86_modes_tieable_p(enum machine_mode , enum machine_mode ); 
#line 138 "../.././gcc/config/i386/i386-protos.h"
extern int ix86_register_move_cost(enum machine_mode , enum reg_class , enum reg_class ); 
#line 140 "../.././gcc/config/i386/i386-protos.h"
extern int ix86_secondary_memory_needed(enum reg_class , enum reg_class , enum machine_mode , int ); 
#line 142 "../.././gcc/config/i386/i386-protos.h"
extern unsigned char ix86_cannot_change_mode_class(enum machine_mode , enum machine_mode , enum reg_class ); 
#line 143 "../.././gcc/config/i386/i386-protos.h"
extern enum reg_class ix86_preferred_reload_class( rtx , enum reg_class ); 
#line 144 "../.././gcc/config/i386/i386-protos.h"
extern int ix86_memory_move_cost(enum machine_mode , enum reg_class , int ); 
#line 145 "../.././gcc/config/i386/i386-protos.h"
extern int ix86_mode_needed(int ,  rtx ); 
#line 146 "../.././gcc/config/i386/i386-protos.h"
extern void emit_i387_cw_initialization(int ); 
#line 147 "../.././gcc/config/i386/i386-protos.h"
extern unsigned char ix86_fp_jump_nontrivial_p(enum rtx_code ); 
#line 148 "../.././gcc/config/i386/i386-protos.h"
extern void x86_order_regs_for_local_alloc(void ); 
#line 149 "../.././gcc/config/i386/i386-protos.h"
extern void x86_function_profiler( FILE *, int ); 
#line 150 "../.././gcc/config/i386/i386-protos.h"
extern void x86_emit_floatuns( rtx ([2])); 
#line 151 "../.././gcc/config/i386/i386-protos.h"
extern void ix86_emit_fp_unordered_jump( rtx ); 
#line 153 "../.././gcc/config/i386/i386-protos.h"
extern void ix86_emit_i387_log1p( rtx ,  rtx ); 
#line 155 "../.././gcc/config/i386/i386-protos.h"
extern enum rtx_code ix86_reverse_condition(enum rtx_code , enum machine_mode ); 
#line 158 "../.././gcc/config/i386/i386-protos.h"
extern void init_cumulative_args( CUMULATIVE_ARGS *,  tree ,  rtx ,  tree ); 
#line 159 "../.././gcc/config/i386/i386-protos.h"
extern  rtx function_arg( CUMULATIVE_ARGS *, enum machine_mode ,  tree , int ); 
#line 161 "../.././gcc/config/i386/i386-protos.h"
extern void function_arg_advance( CUMULATIVE_ARGS *, enum machine_mode ,  tree , int ); 
#line 162 "../.././gcc/config/i386/i386-protos.h"
extern  rtx ix86_function_value( tree ,  tree , unsigned char ); 
#line 168 "../.././gcc/config/i386/i386-protos.h"
extern int ix86_return_pops_args( tree ,  tree , int ); 
#line 170 "../.././gcc/config/i386/i386-protos.h"
extern int ix86_data_alignment( tree , int ); 
#line 171 "../.././gcc/config/i386/i386-protos.h"
extern int ix86_local_alignment( tree , int ); 
#line 172 "../.././gcc/config/i386/i386-protos.h"
extern int ix86_constant_alignment( tree , int ); 
#line 173 "../.././gcc/config/i386/i386-protos.h"
extern  tree ix86_handle_shared_attribute( tree *,  tree ,  tree , int , unsigned char *); 
#line 174 "../.././gcc/config/i386/i386-protos.h"
extern  tree ix86_handle_selectany_attribute( tree *,  tree ,  tree , int , unsigned char *); 
#line 176 "../.././gcc/config/i386/i386-protos.h"
extern unsigned int i386_pe_section_type_flags( tree , const char *, int ); 
#line 177 "../.././gcc/config/i386/i386-protos.h"
extern void i386_pe_asm_named_section(const char *, unsigned int ,  tree ); 
#line 178 "../.././gcc/config/i386/i386-protos.h"
extern int x86_field_alignment( tree , int ); 
#line 181 "../.././gcc/config/i386/i386-protos.h"
extern  rtx ix86_tls_get_addr(void ); 
#line 183 "../.././gcc/config/i386/i386-protos.h"
extern void ix86_expand_vector_init(unsigned char ,  rtx ,  rtx ); 
#line 184 "../.././gcc/config/i386/i386-protos.h"
extern void ix86_expand_vector_set(unsigned char ,  rtx ,  rtx , int ); 
#line 185 "../.././gcc/config/i386/i386-protos.h"
extern void ix86_expand_vector_extract(unsigned char ,  rtx ,  rtx , int ); 
#line 186 "../.././gcc/config/i386/i386-protos.h"
extern void ix86_expand_reduc_v4sf( rtx (*)( rtx ,  rtx ,  rtx ),  rtx ,  rtx ); 
#line 189 "../.././gcc/config/i386/i386-protos.h"
extern int i386_pe_dllexport_name_p(const char *); 
#line 190 "../.././gcc/config/i386/i386-protos.h"
extern int i386_pe_dllimport_name_p(const char *); 
#line 191 "../.././gcc/config/i386/i386-protos.h"
extern void i386_pe_unique_section( tree , int ); 
#line 192 "../.././gcc/config/i386/i386-protos.h"
extern void i386_pe_declare_function_type( FILE *, const char *, int ); 
#line 193 "../.././gcc/config/i386/i386-protos.h"
extern void i386_pe_record_external_function( tree , const char *); 
#line 194 "../.././gcc/config/i386/i386-protos.h"
extern void i386_pe_record_exported_symbol(const char *, int ); 
#line 195 "../.././gcc/config/i386/i386-protos.h"
extern void i386_pe_asm_file_end( FILE *); 
#line 196 "../.././gcc/config/i386/i386-protos.h"
extern void i386_pe_encode_section_info( tree ,  rtx , int ); 
#line 197 "../.././gcc/config/i386/i386-protos.h"
extern const char *i386_pe_strip_name_encoding(const char *); 
#line 198 "../.././gcc/config/i386/i386-protos.h"
extern const char *i386_pe_strip_name_encoding_full(const char *); 
#line 199 "../.././gcc/config/i386/i386-protos.h"
extern void i386_pe_output_labelref( FILE *, const char *); 
#line 200 "../.././gcc/config/i386/i386-protos.h"
extern unsigned char i386_pe_valid_dllimport_attribute_p( tree ); 
#line 203 "../.././gcc/config/i386/i386-protos.h"
extern void i386_pe_adjust_class_at_definition( tree ); 
#line 204 "../.././gcc/config/i386/i386-protos.h"
extern unsigned char i386_pe_type_dllimport_p( tree ); 
#line 205 "../.././gcc/config/i386/i386-protos.h"
extern unsigned char i386_pe_type_dllexport_p( tree ); 
#line 207 "../.././gcc/config/i386/i386-protos.h"
extern  rtx maybe_get_pool_constant( rtx ); 
#line 209 "../.././gcc/config/i386/i386-protos.h"
extern char internal_label_prefix[16]; 
#line 210 "../.././gcc/config/i386/i386-protos.h"
extern int internal_label_prefix_len; 
#line 212 "../.././gcc/config/i386/i386-protos.h"
enum ix86_address_seg {SEG_DEFAULT,SEG_FS,SEG_GS}; 
#line 218 "../.././gcc/config/i386/i386-protos.h"
struct ix86_address { rtx base,index,disp; long scale; enum ix86_address_seg seg; }; 
#line 220 "../.././gcc/config/i386/i386-protos.h"
extern int ix86_decompose_address( rtx , struct ix86_address *); 
#line 221 "../.././gcc/config/i386/i386-protos.h"
extern int memory_address_length( rtx addr); 
#line 223 "../.././gcc/config/i386/i386-protos.h"
extern void x86_output_aligned_bss( FILE *,  tree , const char *, unsigned long , int ); 
#line 225 "../.././gcc/config/i386/i386-protos.h"
extern void x86_elf_aligned_common( FILE *, const char *, unsigned long , int ); 
#line 229 "../.././gcc/config/i386/i386-protos.h"
extern void ix86_fp_comparison_codes(enum rtx_code code, enum rtx_code *, enum rtx_code *, enum rtx_code *); 
#line 230 "../.././gcc/config/i386/i386-protos.h"
extern enum rtx_code ix86_fp_compare_code_to_integer(enum rtx_code ); 
#line 232 "../.././gcc/config/i386/i386-protos.h"
extern int asm_preferred_eh_data_format(int , int ); 
# 5 "./tm_p.h" 2
# 8 "./tm-preds.h" 1
extern int general_operand( rtx , enum machine_mode ); 
#line 9 "./tm-preds.h"
extern int address_operand( rtx , enum machine_mode ); 
#line 10 "./tm-preds.h"
extern int register_operand( rtx , enum machine_mode ); 
#line 11 "./tm-preds.h"
extern int pmode_register_operand( rtx , enum machine_mode ); 
#line 12 "./tm-preds.h"
extern int scratch_operand( rtx , enum machine_mode ); 
#line 13 "./tm-preds.h"
extern int immediate_operand( rtx , enum machine_mode ); 
#line 14 "./tm-preds.h"
extern int const_int_operand( rtx , enum machine_mode ); 
#line 15 "./tm-preds.h"
extern int const_double_operand( rtx , enum machine_mode ); 
#line 16 "./tm-preds.h"
extern int nonimmediate_operand( rtx , enum machine_mode ); 
#line 17 "./tm-preds.h"
extern int nonmemory_operand( rtx , enum machine_mode ); 
#line 18 "./tm-preds.h"
extern int push_operand( rtx , enum machine_mode ); 
#line 19 "./tm-preds.h"
extern int pop_operand( rtx , enum machine_mode ); 
#line 20 "./tm-preds.h"
extern int memory_operand( rtx , enum machine_mode ); 
#line 21 "./tm-preds.h"
extern int indirect_operand( rtx , enum machine_mode ); 
#line 22 "./tm-preds.h"
extern int comparison_operator( rtx , enum machine_mode ); 
#line 23 "./tm-preds.h"
extern int any_fp_register_operand( rtx , enum machine_mode ); 
#line 24 "./tm-preds.h"
extern int fp_register_operand( rtx , enum machine_mode ); 
#line 25 "./tm-preds.h"
extern int register_and_not_any_fp_reg_operand( rtx , enum machine_mode ); 
#line 26 "./tm-preds.h"
extern int register_and_not_fp_reg_operand( rtx , enum machine_mode ); 
#line 27 "./tm-preds.h"
extern int mmx_reg_operand( rtx , enum machine_mode ); 
#line 28 "./tm-preds.h"
extern int q_regs_operand( rtx , enum machine_mode ); 
#line 29 "./tm-preds.h"
extern int non_q_regs_operand( rtx , enum machine_mode ); 
#line 30 "./tm-preds.h"
extern int ext_register_operand( rtx , enum machine_mode ); 
#line 31 "./tm-preds.h"
extern int flags_reg_operand( rtx , enum machine_mode ); 
#line 32 "./tm-preds.h"
extern int x86_64_immediate_operand( rtx , enum machine_mode ); 
#line 33 "./tm-preds.h"
extern int x86_64_zext_immediate_operand( rtx , enum machine_mode ); 
#line 34 "./tm-preds.h"
extern int x86_64_general_operand( rtx , enum machine_mode ); 
#line 35 "./tm-preds.h"
extern int x86_64_szext_general_operand( rtx , enum machine_mode ); 
#line 36 "./tm-preds.h"
extern int x86_64_nonmemory_operand( rtx , enum machine_mode ); 
#line 37 "./tm-preds.h"
extern int x86_64_szext_nonmemory_operand( rtx , enum machine_mode ); 
#line 38 "./tm-preds.h"
extern int pic_32bit_operand( rtx , enum machine_mode ); 
#line 39 "./tm-preds.h"
extern int x86_64_movabs_operand( rtx , enum machine_mode ); 
#line 40 "./tm-preds.h"
extern int symbolic_operand( rtx , enum machine_mode ); 
#line 41 "./tm-preds.h"
extern int pic_symbolic_operand( rtx , enum machine_mode ); 
#line 42 "./tm-preds.h"
extern int local_symbolic_operand( rtx , enum machine_mode ); 
#line 43 "./tm-preds.h"
extern int tls_symbolic_operand( rtx , enum machine_mode ); 
#line 44 "./tm-preds.h"
extern int constant_call_address_operand( rtx , enum machine_mode ); 
#line 45 "./tm-preds.h"
extern int register_no_elim_operand( rtx , enum machine_mode ); 
#line 46 "./tm-preds.h"
extern int index_register_operand( rtx , enum machine_mode ); 
#line 47 "./tm-preds.h"
extern int general_no_elim_operand( rtx , enum machine_mode ); 
#line 48 "./tm-preds.h"
extern int nonmemory_no_elim_operand( rtx , enum machine_mode ); 
#line 49 "./tm-preds.h"
extern int call_insn_operand( rtx , enum machine_mode ); 
#line 50 "./tm-preds.h"
extern int sibcall_insn_operand( rtx , enum machine_mode ); 
#line 51 "./tm-preds.h"
extern int const0_operand( rtx , enum machine_mode ); 
#line 52 "./tm-preds.h"
extern int const1_operand( rtx , enum machine_mode ); 
#line 53 "./tm-preds.h"
extern int const8_operand( rtx , enum machine_mode ); 
#line 54 "./tm-preds.h"
extern int const248_operand( rtx , enum machine_mode ); 
#line 55 "./tm-preds.h"
extern int const_0_to_1_operand( rtx , enum machine_mode ); 
#line 56 "./tm-preds.h"
extern int const_0_to_3_operand( rtx , enum machine_mode ); 
#line 57 "./tm-preds.h"
extern int const_0_to_7_operand( rtx , enum machine_mode ); 
#line 58 "./tm-preds.h"
extern int const_0_to_15_operand( rtx , enum machine_mode ); 
#line 59 "./tm-preds.h"
extern int const_0_to_63_operand( rtx , enum machine_mode ); 
#line 60 "./tm-preds.h"
extern int const_0_to_255_operand( rtx , enum machine_mode ); 
#line 61 "./tm-preds.h"
extern int const_0_to_255_mul_8_operand( rtx , enum machine_mode ); 
#line 62 "./tm-preds.h"
extern int const_1_to_31_operand( rtx , enum machine_mode ); 
#line 63 "./tm-preds.h"
extern int const_2_to_3_operand( rtx , enum machine_mode ); 
#line 64 "./tm-preds.h"
extern int const_4_to_7_operand( rtx , enum machine_mode ); 
#line 65 "./tm-preds.h"
extern int const_pow2_1_to_8_operand( rtx , enum machine_mode ); 
#line 66 "./tm-preds.h"
extern int const_pow2_1_to_128_operand( rtx , enum machine_mode ); 
#line 67 "./tm-preds.h"
extern int incdec_operand( rtx , enum machine_mode ); 
#line 68 "./tm-preds.h"
extern int reg_or_pm1_operand( rtx , enum machine_mode ); 
#line 69 "./tm-preds.h"
extern int shiftdi_operand( rtx , enum machine_mode ); 
#line 70 "./tm-preds.h"
extern int ashldi_input_operand( rtx , enum machine_mode ); 
#line 71 "./tm-preds.h"
extern int zero_extended_scalar_load_operand( rtx , enum machine_mode ); 
#line 72 "./tm-preds.h"
extern int vector_move_operand( rtx , enum machine_mode ); 
#line 73 "./tm-preds.h"
extern int reg_or_0_operand( rtx , enum machine_mode ); 
#line 74 "./tm-preds.h"
extern int no_seg_address_operand( rtx , enum machine_mode ); 
#line 75 "./tm-preds.h"
extern int aligned_operand( rtx , enum machine_mode ); 
#line 76 "./tm-preds.h"
extern int memory_displacement_operand( rtx , enum machine_mode ); 
#line 77 "./tm-preds.h"
extern int long_memory_operand( rtx , enum machine_mode ); 
#line 78 "./tm-preds.h"
extern int fcmov_comparison_operator( rtx , enum machine_mode ); 
#line 79 "./tm-preds.h"
extern int sse_comparison_operator( rtx , enum machine_mode ); 
#line 80 "./tm-preds.h"
extern int ix86_comparison_operator( rtx , enum machine_mode ); 
#line 81 "./tm-preds.h"
extern int ix86_carry_flag_operator( rtx , enum machine_mode ); 
#line 82 "./tm-preds.h"
extern int cmp_fp_expander_operand( rtx , enum machine_mode ); 
#line 83 "./tm-preds.h"
extern int binary_fp_operator( rtx , enum machine_mode ); 
#line 84 "./tm-preds.h"
extern int mult_operator( rtx , enum machine_mode ); 
#line 85 "./tm-preds.h"
extern int div_operator( rtx , enum machine_mode ); 
#line 86 "./tm-preds.h"
extern int float_operator( rtx , enum machine_mode ); 
#line 87 "./tm-preds.h"
extern int arith_or_logical_operator( rtx , enum machine_mode ); 
#line 88 "./tm-preds.h"
extern int promotable_binary_operator( rtx , enum machine_mode ); 
#line 89 "./tm-preds.h"
extern int cmpsi_operand_1( rtx , enum machine_mode ); 
#line 90 "./tm-preds.h"
extern int cmpsi_operand( rtx , enum machine_mode ); 
#line 91 "./tm-preds.h"
extern int compare_operator( rtx , enum machine_mode ); 
#line 92 "./tm-preds.h"
extern int absneg_operator( rtx , enum machine_mode ); 
# 6 "./tm_p.h" 2
# 32 "../.././gcc/tree-mudflap.c" 2
# 1 "../.././gcc/basic-block.h" 1
# 25 "../.././gcc/basic-block.h" 
# 1 "../.././gcc/bitmap.h" 1
# 27 "../.././gcc/bitmap.h" 
typedef unsigned long BITMAP_WORD; 
#line 48 "../.././gcc/bitmap.h"
typedef struct bitmap_obstack {struct bitmap_element_def *elements; struct bitmap_head_def *heads; struct obstack obstack; }bitmap_obstack; 
# 43 "../.././gcc/bitmap.h" 
# 68 "../.././gcc/bitmap.h" 
typedef struct bitmap_element_def {struct bitmap_element_def *next; struct bitmap_element_def *prev; unsigned int indx;  BITMAP_WORD bits[((128 + (8 * 4 * 1u) - 1) / (8 * 4 * 1u))]; }bitmap_element; 
#line 77 "../.././gcc/bitmap.h"
typedef struct bitmap_head_def { bitmap_element *first;  bitmap_element *current; unsigned int indx;  bitmap_obstack *obstack; }bitmap_head; 
#line 80 "../.././gcc/bitmap.h"
typedef struct bitmap_head_def *bitmap; 
#line 83 "../.././gcc/bitmap.h"
extern  bitmap_element bitmap_zero_bits; 
#line 84 "../.././gcc/bitmap.h"
extern  bitmap_obstack bitmap_default_obstack; 
#line 87 "../.././gcc/bitmap.h"
extern void bitmap_clear( bitmap ); 
#line 90 "../.././gcc/bitmap.h"
extern void bitmap_copy( bitmap ,  bitmap ); 
#line 93 "../.././gcc/bitmap.h"
extern unsigned char bitmap_equal_p( bitmap ,  bitmap ); 
#line 96 "../.././gcc/bitmap.h"
extern unsigned char bitmap_intersect_p( bitmap ,  bitmap ); 
#line 100 "../.././gcc/bitmap.h"
extern unsigned char bitmap_intersect_compl_p( bitmap ,  bitmap ); 
#line 109 "../.././gcc/bitmap.h"
extern void bitmap_and( bitmap ,  bitmap ,  bitmap ); 
#line 110 "../.././gcc/bitmap.h"
extern void bitmap_and_into( bitmap ,  bitmap ); 
#line 111 "../.././gcc/bitmap.h"
extern void bitmap_and_compl( bitmap ,  bitmap ,  bitmap ); 
#line 112 "../.././gcc/bitmap.h"
extern unsigned char bitmap_and_compl_into( bitmap ,  bitmap ); 
#line 113 "../.././gcc/bitmap.h"
extern unsigned char bitmap_ior( bitmap ,  bitmap ,  bitmap ); 
#line 114 "../.././gcc/bitmap.h"
extern unsigned char bitmap_ior_into( bitmap ,  bitmap ); 
#line 115 "../.././gcc/bitmap.h"
extern void bitmap_xor( bitmap ,  bitmap ,  bitmap ); 
#line 116 "../.././gcc/bitmap.h"
extern void bitmap_xor_into( bitmap ,  bitmap ); 
#line 119 "../.././gcc/bitmap.h"
extern unsigned char bitmap_ior_and_compl( bitmap DST,  bitmap A,  bitmap B,  bitmap C); 
#line 121 "../.././gcc/bitmap.h"
extern unsigned char bitmap_ior_and_compl_into( bitmap DST,  bitmap B,  bitmap C); 
#line 124 "../.././gcc/bitmap.h"
extern void bitmap_clear_bit( bitmap , int ); 
#line 127 "../.././gcc/bitmap.h"
extern void bitmap_set_bit( bitmap , int ); 
#line 130 "../.././gcc/bitmap.h"
extern int bitmap_bit_p( bitmap , int ); 
#line 133 "../.././gcc/bitmap.h"
extern void debug_bitmap( bitmap ); 
#line 134 "../.././gcc/bitmap.h"
extern void debug_bitmap_file( FILE *,  bitmap ); 
#line 137 "../.././gcc/bitmap.h"
extern void bitmap_print( FILE *,  bitmap , const char *, const char *); 
#line 140 "../.././gcc/bitmap.h"
extern void bitmap_obstack_initialize( bitmap_obstack *); 
#line 141 "../.././gcc/bitmap.h"
extern void bitmap_obstack_release( bitmap_obstack *); 
#line 148 "../.././gcc/bitmap.h"
static __inline__ void bitmap_initialize( bitmap head,  bitmap_obstack *obstack)  {

#line 149 "../.././gcc/bitmap.h"
(head->first) = (head->current) = (((void *)0)); 
#line 150 "../.././gcc/bitmap.h"
(head->obstack) = obstack; }
 
#line 154 "../.././gcc/bitmap.h"
extern  bitmap bitmap_obstack_alloc( bitmap_obstack *obstack); 
#line 155 "../.././gcc/bitmap.h"
extern  bitmap bitmap_gc_alloc(void ); 
#line 156 "../.././gcc/bitmap.h"
extern void bitmap_obstack_free( bitmap ); 
#line 161 "../.././gcc/bitmap.h"
extern unsigned bitmap_first_set_bit( bitmap ); 
# 109 "../.././gcc/bitmap.h" 
# 190 "../.././gcc/bitmap.h" 
typedef struct { bitmap_element *elt1;  bitmap_element *elt2; unsigned word_no;  BITMAP_WORD bits; }bitmap_iterator; 
#line 198 "../.././gcc/bitmap.h"
static __inline__ void bmp_iter_set_init( bitmap_iterator *bi,  bitmap map, unsigned start_bit, unsigned *bit_no)  {

#line 199 "../.././gcc/bitmap.h"
(bi->elt1) = (map->first); 
#line 200 "../.././gcc/bitmap.h"
(bi->elt2) = (((void *)0)); 
#line 203 "../.././gcc/bitmap.h"
while(1) { { 
#line 211 "../.././gcc/bitmap.h"
if ((!(bi->elt1))){
{ 
#line 207 "../.././gcc/bitmap.h"
(bi->elt1) = (&bitmap_zero_bits); 
#line 208 "../.././gcc/bitmap.h"
break; } }
#line 211 "../.././gcc/bitmap.h"
if (((bi->elt1)->indx) >= start_bit / (((128 + (8 * 4 * 1u) - 1) / (8 * 4 * 1u)) * (8 * 4 * 1u))){
break; }
#line 213 "../.././gcc/bitmap.h"
(bi->elt1) = ((bi->elt1)->next); } } 
#line 217 "../.././gcc/bitmap.h"
if (((bi->elt1)->indx) != start_bit / (((128 + (8 * 4 * 1u) - 1) / (8 * 4 * 1u)) * (8 * 4 * 1u))){
start_bit = ((bi->elt1)->indx) * (((128 + (8 * 4 * 1u) - 1) / (8 * 4 * 1u)) * (8 * 4 * 1u)); }
#line 221 "../.././gcc/bitmap.h"
(bi->word_no) = start_bit / (8 * 4 * 1u) % ((128 + (8 * 4 * 1u) - 1) / (8 * 4 * 1u)); 
#line 222 "../.././gcc/bitmap.h"
(bi->bits) = ((bi->elt1)->bits)[(bi->word_no)]; 
#line 223 "../.././gcc/bitmap.h"
(bi->bits) >>= start_bit % (8 * 4 * 1u); 
#line 229 "../.././gcc/bitmap.h"
start_bit += (!(bi->bits)); 
#line 231 "../.././gcc/bitmap.h"
(*bit_no) = start_bit; }
 
#line 240 "../.././gcc/bitmap.h"
static __inline__ void bmp_iter_and_init( bitmap_iterator *bi,  bitmap map1,  bitmap map2, unsigned start_bit, unsigned *bit_no)  {

#line 241 "../.././gcc/bitmap.h"
(bi->elt1) = (map1->first); 
#line 242 "../.././gcc/bitmap.h"
(bi->elt2) = (map2->first); 
#line 246 "../.././gcc/bitmap.h"
while(1) { { 
#line 254 "../.././gcc/bitmap.h"
if ((!(bi->elt1))){
{ 
#line 250 "../.././gcc/bitmap.h"
(bi->elt2) = (((void *)0)); 
#line 251 "../.././gcc/bitmap.h"
break; } }
#line 254 "../.././gcc/bitmap.h"
if (((bi->elt1)->indx) >= start_bit / (((128 + (8 * 4 * 1u) - 1) / (8 * 4 * 1u)) * (8 * 4 * 1u))){
break; }
#line 256 "../.././gcc/bitmap.h"
(bi->elt1) = ((bi->elt1)->next); } } 
#line 260 "../.././gcc/bitmap.h"
while(1) { { 
#line 268 "../.././gcc/bitmap.h"
if ((!(bi->elt2))){
{ 
#line 264 "../.././gcc/bitmap.h"
(bi->elt1) = (bi->elt2) = (&bitmap_zero_bits); 
#line 265 "../.././gcc/bitmap.h"
break; } }
#line 268 "../.././gcc/bitmap.h"
if (((bi->elt2)->indx) >= ((bi->elt1)->indx)){
break; }
#line 270 "../.././gcc/bitmap.h"
(bi->elt2) = ((bi->elt2)->next); } } 
#line 274 "../.././gcc/bitmap.h"
if (((bi->elt1)->indx) == ((bi->elt2)->indx)){
{ 
#line 281 "../.././gcc/bitmap.h"
if (((bi->elt1)->indx) != start_bit / (((128 + (8 * 4 * 1u) - 1) / (8 * 4 * 1u)) * (8 * 4 * 1u))){
start_bit = ((bi->elt1)->indx) * (((128 + (8 * 4 * 1u) - 1) / (8 * 4 * 1u)) * (8 * 4 * 1u)); }
#line 281 "../.././gcc/bitmap.h"
(bi->word_no) = start_bit / (8 * 4 * 1u) % ((128 + (8 * 4 * 1u) - 1) / (8 * 4 * 1u)); 
#line 282 "../.././gcc/bitmap.h"
(bi->bits) = ((bi->elt1)->bits)[(bi->word_no)] & ((bi->elt2)->bits)[(bi->word_no)]; 
#line 283 "../.././gcc/bitmap.h"
(bi->bits) >>= start_bit % (8 * 4 * 1u); } }else{
{ 
#line 289 "../.././gcc/bitmap.h"
(bi->word_no) = ((128 + (8 * 4 * 1u) - 1) / (8 * 4 * 1u)) - 1; 
#line 290 "../.././gcc/bitmap.h"
(bi->bits) = 0; } }
#line 297 "../.././gcc/bitmap.h"
start_bit += (!(bi->bits)); 
#line 299 "../.././gcc/bitmap.h"
(*bit_no) = start_bit; }
 
#line 308 "../.././gcc/bitmap.h"
static __inline__ void bmp_iter_and_compl_init( bitmap_iterator *bi,  bitmap map1,  bitmap map2, unsigned start_bit, unsigned *bit_no)  {

#line 309 "../.././gcc/bitmap.h"
(bi->elt1) = (map1->first); 
#line 310 "../.././gcc/bitmap.h"
(bi->elt2) = (map2->first); 
#line 313 "../.././gcc/bitmap.h"
while(1) { { 
#line 321 "../.././gcc/bitmap.h"
if ((!(bi->elt1))){
{ 
#line 317 "../.././gcc/bitmap.h"
(bi->elt1) = (&bitmap_zero_bits); 
#line 318 "../.././gcc/bitmap.h"
break; } }
#line 321 "../.././gcc/bitmap.h"
if (((bi->elt1)->indx) >= start_bit / (((128 + (8 * 4 * 1u) - 1) / (8 * 4 * 1u)) * (8 * 4 * 1u))){
break; }
#line 323 "../.././gcc/bitmap.h"
(bi->elt1) = ((bi->elt1)->next); } } 
#line 327 "../.././gcc/bitmap.h"
while((bi->elt2) && ((bi->elt2)->indx) < ((bi->elt1)->indx)) { (bi->elt2) = ((bi->elt2)->next); } 
#line 332 "../.././gcc/bitmap.h"
if (((bi->elt1)->indx) != start_bit / (((128 + (8 * 4 * 1u) - 1) / (8 * 4 * 1u)) * (8 * 4 * 1u))){
start_bit = ((bi->elt1)->indx) * (((128 + (8 * 4 * 1u) - 1) / (8 * 4 * 1u)) * (8 * 4 * 1u)); }
#line 335 "../.././gcc/bitmap.h"
(bi->word_no) = start_bit / (8 * 4 * 1u) % ((128 + (8 * 4 * 1u) - 1) / (8 * 4 * 1u)); 
#line 336 "../.././gcc/bitmap.h"
(bi->bits) = ((bi->elt1)->bits)[(bi->word_no)]; 
#line 337 "../.././gcc/bitmap.h"
if ((bi->elt2) && ((bi->elt1)->indx) == ((bi->elt2)->indx)){
(bi->bits) &= (~((bi->elt2)->bits)[(bi->word_no)]); }
#line 339 "../.././gcc/bitmap.h"
(bi->bits) >>= start_bit % (8 * 4 * 1u); 
#line 345 "../.././gcc/bitmap.h"
start_bit += (!(bi->bits)); 
#line 347 "../.././gcc/bitmap.h"
(*bit_no) = start_bit; }
 
#line 355 "../.././gcc/bitmap.h"
static __inline__ void bmp_iter_next( bitmap_iterator *bi, unsigned *bit_no)  {

#line 356 "../.././gcc/bitmap.h"
(bi->bits) >>= 1; 
#line 357 "../.././gcc/bitmap.h"
(*bit_no) += 1; }
 
#line 366 "../.././gcc/bitmap.h"
static __inline__ unsigned char bmp_iter_set( bitmap_iterator *bi, unsigned *bit_no)  {

#line 382 "../.././gcc/bitmap.h"
if ((bi->bits)){
{ 
#line 375 "../.././gcc/bitmap.h"
next_bit:  while((!((bi->bits) & 1))) { { 
#line 373 "../.././gcc/bitmap.h"
(bi->bits) >>= 1; 
#line 374 "../.././gcc/bitmap.h"
(*bit_no) += 1; } } 
#line 376 "../.././gcc/bitmap.h"
return 1; } }
#line 382 "../.././gcc/bitmap.h"
(*bit_no) = (((*bit_no) + (8 * 4 * 1u) - 1) / (8 * 4 * 1u) * (8 * 4 * 1u)); 
#line 384 "../.././gcc/bitmap.h"
(bi->word_no)++; 
#line 386 "../.././gcc/bitmap.h"
while(1) { { 
#line 396 "../.././gcc/bitmap.h"
while((bi->word_no) != ((128 + (8 * 4 * 1u) - 1) / (8 * 4 * 1u))) { { 
#line 391 "../.././gcc/bitmap.h"
(bi->bits) = ((bi->elt1)->bits)[(bi->word_no)]; 
#line 392 "../.././gcc/bitmap.h"
if ((bi->bits)){
goto next_bit; }
#line 394 "../.././gcc/bitmap.h"
(*bit_no) += (8 * 4 * 1u); 
#line 395 "../.././gcc/bitmap.h"
(bi->word_no)++; } } 
#line 399 "../.././gcc/bitmap.h"
(bi->elt1) = ((bi->elt1)->next); 
#line 400 "../.././gcc/bitmap.h"
if ((!(bi->elt1))){
return 0; }
#line 402 "../.././gcc/bitmap.h"
(*bit_no) = ((bi->elt1)->indx) * (((128 + (8 * 4 * 1u) - 1) / (8 * 4 * 1u)) * (8 * 4 * 1u)); 
#line 403 "../.././gcc/bitmap.h"
(bi->word_no) = 0; } } }
 
#line 413 "../.././gcc/bitmap.h"
static __inline__ unsigned char bmp_iter_and( bitmap_iterator *bi, unsigned *bit_no)  {

#line 429 "../.././gcc/bitmap.h"
if ((bi->bits)){
{ 
#line 422 "../.././gcc/bitmap.h"
next_bit:  while((!((bi->bits) & 1))) { { 
#line 420 "../.././gcc/bitmap.h"
(bi->bits) >>= 1; 
#line 421 "../.././gcc/bitmap.h"
(*bit_no) += 1; } } 
#line 423 "../.././gcc/bitmap.h"
return 1; } }
#line 429 "../.././gcc/bitmap.h"
(*bit_no) = (((*bit_no) + (8 * 4 * 1u) - 1) / (8 * 4 * 1u) * (8 * 4 * 1u)); 
#line 431 "../.././gcc/bitmap.h"
(bi->word_no)++; 
#line 433 "../.././gcc/bitmap.h"
while(1) { { 
#line 443 "../.././gcc/bitmap.h"
while((bi->word_no) != ((128 + (8 * 4 * 1u) - 1) / (8 * 4 * 1u))) { { 
#line 438 "../.././gcc/bitmap.h"
(bi->bits) = ((bi->elt1)->bits)[(bi->word_no)] & ((bi->elt2)->bits)[(bi->word_no)]; 
#line 439 "../.././gcc/bitmap.h"
if ((bi->bits)){
goto next_bit; }
#line 441 "../.././gcc/bitmap.h"
(*bit_no) += (8 * 4 * 1u); 
#line 442 "../.././gcc/bitmap.h"
(bi->word_no)++; } } 
#line 446 "../.././gcc/bitmap.h"
do { { 
#line 456 "../.././gcc/bitmap.h"
do { { 
#line 452 "../.././gcc/bitmap.h"
(bi->elt1) = ((bi->elt1)->next); 
#line 453 "../.././gcc/bitmap.h"
if ((!(bi->elt1))){
return 0; }} } while(((bi->elt1)->indx) < ((bi->elt2)->indx)); 
#line 460 "../.././gcc/bitmap.h"
while(((bi->elt2)->indx) < ((bi->elt1)->indx)) { { 
#line 462 "../.././gcc/bitmap.h"
(bi->elt2) = ((bi->elt2)->next); 
#line 463 "../.././gcc/bitmap.h"
if ((!(bi->elt2))){
return 0; }} } } } while(((bi->elt1)->indx) != ((bi->elt2)->indx)); 
#line 469 "../.././gcc/bitmap.h"
(*bit_no) = ((bi->elt1)->indx) * (((128 + (8 * 4 * 1u) - 1) / (8 * 4 * 1u)) * (8 * 4 * 1u)); 
#line 470 "../.././gcc/bitmap.h"
(bi->word_no) = 0; } } }
 
#line 480 "../.././gcc/bitmap.h"
static __inline__ unsigned char bmp_iter_and_compl( bitmap_iterator *bi, unsigned *bit_no)  {

#line 496 "../.././gcc/bitmap.h"
if ((bi->bits)){
{ 
#line 489 "../.././gcc/bitmap.h"
next_bit:  while((!((bi->bits) & 1))) { { 
#line 487 "../.././gcc/bitmap.h"
(bi->bits) >>= 1; 
#line 488 "../.././gcc/bitmap.h"
(*bit_no) += 1; } } 
#line 490 "../.././gcc/bitmap.h"
return 1; } }
#line 496 "../.././gcc/bitmap.h"
(*bit_no) = (((*bit_no) + (8 * 4 * 1u) - 1) / (8 * 4 * 1u) * (8 * 4 * 1u)); 
#line 498 "../.././gcc/bitmap.h"
(bi->word_no)++; 
#line 500 "../.././gcc/bitmap.h"
while(1) { { 
#line 512 "../.././gcc/bitmap.h"
while((bi->word_no) != ((128 + (8 * 4 * 1u) - 1) / (8 * 4 * 1u))) { { 
#line 505 "../.././gcc/bitmap.h"
(bi->bits) = ((bi->elt1)->bits)[(bi->word_no)]; 
#line 506 "../.././gcc/bitmap.h"
if ((bi->elt2) && ((bi->elt2)->indx) == ((bi->elt1)->indx)){
(bi->bits) &= (~((bi->elt2)->bits)[(bi->word_no)]); }
#line 508 "../.././gcc/bitmap.h"
if ((bi->bits)){
goto next_bit; }
#line 510 "../.././gcc/bitmap.h"
(*bit_no) += (8 * 4 * 1u); 
#line 511 "../.././gcc/bitmap.h"
(bi->word_no)++; } } 
#line 515 "../.././gcc/bitmap.h"
(bi->elt1) = ((bi->elt1)->next); 
#line 516 "../.././gcc/bitmap.h"
if ((!(bi->elt1))){
return 0; }
#line 520 "../.././gcc/bitmap.h"
while((bi->elt2) && ((bi->elt2)->indx) < ((bi->elt1)->indx)) { (bi->elt2) = ((bi->elt2)->next); } 
#line 523 "../.././gcc/bitmap.h"
(*bit_no) = ((bi->elt1)->indx) * (((128 + (8 * 4 * 1u) - 1) / (8 * 4 * 1u)) * (8 * 4 * 1u)); 
#line 524 "../.././gcc/bitmap.h"
(bi->word_no) = 0; } } }
 
# 26 "../.././gcc/basic-block.h" 2
# 1 "../.././gcc/sbitmap.h" 1
# 37 "../.././gcc/sbitmap.h" 
typedef struct simple_bitmap_def {unsigned int n_bits; unsigned int size; unsigned int bytes; unsigned long elms[1]; }*sbitmap; 
#line 39 "../.././gcc/sbitmap.h"
typedef unsigned long *sbitmap_ptr; 
#line 74 "../.././gcc/sbitmap.h"
typedef struct {unsigned long *ptr; unsigned int size; unsigned int word_num; unsigned int bit_num; unsigned long word; }sbitmap_iterator; 
#line 81 "../.././gcc/sbitmap.h"
static __inline__ void sbitmap_iter_init( sbitmap_iterator *i,  sbitmap bmp, unsigned int min)  {

#line 82 "../.././gcc/sbitmap.h"
(i->word_num) = min / ((unsigned int )(((unsigned )(8 * 4)))); 
#line 83 "../.././gcc/sbitmap.h"
(i->bit_num) = min; 
#line 84 "../.././gcc/sbitmap.h"
(i->size) = (bmp->size); 
#line 85 "../.././gcc/sbitmap.h"
(i->ptr) = (bmp->elms); 
#line 87 "../.././gcc/sbitmap.h"
if ((i->word_num) >= (i->size)){
(i->word) = 0; }else{
(i->word) = ((i->ptr)[(i->word_num)] >> ((i->bit_num) % ((unsigned int )(((unsigned )(8 * 4)))))); }}
 
#line 100 "../.././gcc/sbitmap.h"
static __inline__ unsigned char sbitmap_iter_cond( sbitmap_iterator *i, unsigned int *n)  {

#line 111 "../.././gcc/sbitmap.h"
for(;(i->word) == 0;(i->word) = (i->ptr)[(i->word_num)]) { { 
#line 104 "../.././gcc/sbitmap.h"
(i->word_num)++; 
#line 107 "../.././gcc/sbitmap.h"
if ((i->word_num) >= (i->size)){
return 0; }
#line 110 "../.././gcc/sbitmap.h"
(i->bit_num) = (i->word_num) * (((unsigned )(8 * 4))); } } 
#line 114 "../.././gcc/sbitmap.h"
for(;((i->word) & 1) == 0;(i->word) >>= 1) { (i->bit_num)++; } 
#line 117 "../.././gcc/sbitmap.h"
(*n) = (i->bit_num); 
#line 119 "../.././gcc/sbitmap.h"
return 1; }
 
#line 126 "../.././gcc/sbitmap.h"
static __inline__ void sbitmap_iter_next( sbitmap_iterator *i)  {

#line 127 "../.././gcc/sbitmap.h"
(i->word) >>= 1; 
#line 128 "../.././gcc/sbitmap.h"
(i->bit_num)++; }
 
# 59 "../.././gcc/sbitmap.h" 
# 171 "../.././gcc/sbitmap.h" 
struct int_list ; 
#line 173 "../.././gcc/sbitmap.h"
extern void dump_sbitmap( FILE *,  sbitmap ); 
#line 174 "../.././gcc/sbitmap.h"
extern void dump_sbitmap_file( FILE *,  sbitmap ); 
#line 176 "../.././gcc/sbitmap.h"
extern void dump_sbitmap_vector( FILE *, const char *, const char *,  sbitmap *, int ); 
#line 177 "../.././gcc/sbitmap.h"
extern  sbitmap sbitmap_alloc(unsigned int ); 
#line 178 "../.././gcc/sbitmap.h"
extern  sbitmap *sbitmap_vector_alloc(unsigned int , unsigned int ); 
#line 179 "../.././gcc/sbitmap.h"
extern  sbitmap sbitmap_resize( sbitmap , unsigned int , int ); 
#line 180 "../.././gcc/sbitmap.h"
extern void sbitmap_copy( sbitmap ,  sbitmap ); 
#line 181 "../.././gcc/sbitmap.h"
extern int sbitmap_equal( sbitmap ,  sbitmap ); 
#line 182 "../.././gcc/sbitmap.h"
extern void sbitmap_zero( sbitmap ); 
#line 183 "../.././gcc/sbitmap.h"
extern void sbitmap_ones( sbitmap ); 
#line 184 "../.././gcc/sbitmap.h"
extern void sbitmap_vector_zero( sbitmap *, unsigned int ); 
#line 185 "../.././gcc/sbitmap.h"
extern void sbitmap_vector_ones( sbitmap *, unsigned int ); 
#line 187 "../.././gcc/sbitmap.h"
extern void sbitmap_union_of_diff( sbitmap ,  sbitmap ,  sbitmap ,  sbitmap ); 
#line 188 "../.././gcc/sbitmap.h"
extern unsigned char sbitmap_union_of_diff_cg( sbitmap ,  sbitmap ,  sbitmap ,  sbitmap ); 
#line 189 "../.././gcc/sbitmap.h"
extern void sbitmap_difference( sbitmap ,  sbitmap ,  sbitmap ); 
#line 190 "../.././gcc/sbitmap.h"
extern void sbitmap_not( sbitmap ,  sbitmap ); 
#line 191 "../.././gcc/sbitmap.h"
extern void sbitmap_a_or_b_and_c( sbitmap ,  sbitmap ,  sbitmap ,  sbitmap ); 
#line 192 "../.././gcc/sbitmap.h"
extern unsigned char sbitmap_a_or_b_and_c_cg( sbitmap ,  sbitmap ,  sbitmap ,  sbitmap ); 
#line 193 "../.././gcc/sbitmap.h"
extern void sbitmap_a_and_b_or_c( sbitmap ,  sbitmap ,  sbitmap ,  sbitmap ); 
#line 194 "../.././gcc/sbitmap.h"
extern unsigned char sbitmap_a_and_b_or_c_cg( sbitmap ,  sbitmap ,  sbitmap ,  sbitmap ); 
#line 195 "../.././gcc/sbitmap.h"
extern unsigned char sbitmap_any_common_bits( sbitmap ,  sbitmap ); 
#line 196 "../.././gcc/sbitmap.h"
extern void sbitmap_a_and_b( sbitmap ,  sbitmap ,  sbitmap ); 
#line 197 "../.././gcc/sbitmap.h"
extern unsigned char sbitmap_a_and_b_cg( sbitmap ,  sbitmap ,  sbitmap ); 
#line 198 "../.././gcc/sbitmap.h"
extern void sbitmap_a_or_b( sbitmap ,  sbitmap ,  sbitmap ); 
#line 199 "../.././gcc/sbitmap.h"
extern unsigned char sbitmap_a_or_b_cg( sbitmap ,  sbitmap ,  sbitmap ); 
#line 200 "../.././gcc/sbitmap.h"
extern void sbitmap_a_xor_b( sbitmap ,  sbitmap ,  sbitmap ); 
#line 201 "../.././gcc/sbitmap.h"
extern unsigned char sbitmap_a_xor_b_cg( sbitmap ,  sbitmap ,  sbitmap ); 
#line 202 "../.././gcc/sbitmap.h"
extern unsigned char sbitmap_a_subset_b_p( sbitmap ,  sbitmap ); 
#line 204 "../.././gcc/sbitmap.h"
extern int sbitmap_first_set_bit( sbitmap ); 
#line 205 "../.././gcc/sbitmap.h"
extern int sbitmap_last_set_bit( sbitmap ); 
#line 208 "../.././gcc/sbitmap.h"
extern void sbitmap_intersect_of_predsucc( sbitmap ,  sbitmap *, int , struct int_list **); 
#line 213 "../.././gcc/sbitmap.h"
extern void sbitmap_union_of_predsucc( sbitmap ,  sbitmap *, int , struct int_list **); 
#line 220 "../.././gcc/sbitmap.h"
extern void sbitmap_intersection_of_succs( sbitmap ,  sbitmap *, int ); 
#line 221 "../.././gcc/sbitmap.h"
extern void sbitmap_intersection_of_preds( sbitmap ,  sbitmap *, int ); 
#line 222 "../.././gcc/sbitmap.h"
extern void sbitmap_union_of_succs( sbitmap ,  sbitmap *, int ); 
#line 223 "../.././gcc/sbitmap.h"
extern void sbitmap_union_of_preds( sbitmap ,  sbitmap *, int ); 
#line 225 "../.././gcc/sbitmap.h"
extern void debug_sbitmap( sbitmap ); 
#line 226 "../.././gcc/sbitmap.h"
extern  sbitmap sbitmap_realloc( sbitmap , unsigned int ); 
# 27 "../.././gcc/basic-block.h" 2
# 1 "../.././gcc/varray.h" 1
# 63 "../.././gcc/varray.h" 
enum varray_data_enum {VARRAY_DATA_C,VARRAY_DATA_UC,VARRAY_DATA_S,VARRAY_DATA_US,VARRAY_DATA_I,VARRAY_DATA_U,VARRAY_DATA_L,VARRAY_DATA_UL,VARRAY_DATA_HINT,VARRAY_DATA_UHINT,VARRAY_DATA_GENERIC,VARRAY_DATA_GENERIC_NOGC,VARRAY_DATA_CPTR,VARRAY_DATA_RTX,VARRAY_DATA_RTVEC,VARRAY_DATA_TREE,VARRAY_DATA_BITMAP,VARRAY_DATA_REG,VARRAY_DATA_BB,VARRAY_DATA_TE,VARRAY_DATA_EDGE,VARRAY_DATA_TREE_PTR,NUM_VARRAY_DATA}; 
#line 111 "../.././gcc/varray.h"
typedef union varray_data_tag {char c[1]; unsigned char uc[1]; short s[1]; unsigned short us[1]; int i[1]; unsigned int u[1]; long l[1]; unsigned long ul[1]; long hint[1]; unsigned long uhint[1]; void *generic[1]; void *generic_nogc[1]; char *cptr[1];  rtx rtx[1];  rtvec rtvec[1];  tree tree[1]; struct bitmap_head_def *bitmap[1]; struct reg_info_def *reg[1]; struct basic_block_def *bb[1]; struct elt_list *te[1]; struct edge_def *e[1];  tree *tp[1]; }varray_data; 
#line 122 "../.././gcc/varray.h"
struct varray_head_tag { size_t num_elements;  size_t elements_used; enum varray_data_enum type; const char *name;  varray_data data; }; 
#line 123 "../.././gcc/varray.h"
typedef struct varray_head_tag *varray_type; 
#line 127 "../.././gcc/varray.h"
extern  varray_type varray_init( size_t , enum varray_data_enum , const char *); 
#line 201 "../.././gcc/varray.h"
extern  varray_type varray_grow( varray_type ,  size_t ); 
# 201 "../.././gcc/varray.h" 
# 212 "../.././gcc/varray.h" 
extern void varray_clear( varray_type ); 
#line 213 "../.././gcc/varray.h"
extern void dump_varray_statistics(void ); 
# 28 "../.././gcc/basic-block.h" 2
# 1 "../.././gcc/../include/partition.h" 1
# 57 "../.././gcc/../include/partition.h" 
struct partition_elem {int class_element; struct partition_elem *next; unsigned class_count; }; 
#line 65 "../.././gcc/../include/partition.h"
typedef struct partition_def {int num_elements; struct partition_elem elements[1]; }*partition; 
#line 67 "../.././gcc/../include/partition.h"
extern  partition partition_new(int ); 
#line 68 "../.././gcc/../include/partition.h"
extern void partition_delete( partition ); 
#line 69 "../.././gcc/../include/partition.h"
extern int partition_union( partition , int , int ); 
#line 70 "../.././gcc/../include/partition.h"
extern void partition_print( partition ,  FILE *); 
# 29 "../.././gcc/basic-block.h" 2
# 1 "../.././gcc/predict.h" 1
# 25 "../.././gcc/predict.h" 
# 1 "../.././gcc/predict.def" 1
# 39 "../.././gcc/predict.def" 
# 31 "../.././gcc/predict.h" 2
enum br_predictor {PRED_COMBINED,PRED_DS_THEORY,PRED_FIRST_MATCH,PRED_NO_PREDICTION,PRED_UNCONDITIONAL,PRED_LOOP_ITERATIONS,PRED_BUILTIN_EXPECT,PRED_CONTINUE,PRED_NORETURN,PRED_LOOP_BRANCH,PRED_LOOP_EXIT,PRED_LOOP_CONDITION,PRED_LOOP_PRECONDITIONING,PRED_LOOP_HEADER,PRED_POINTER,PRED_TREE_POINTER,PRED_OPCODE_POSITIVE,PRED_OPCODE_NONEQUAL,PRED_FPOPCODE,PRED_TREE_OPCODE_POSITIVE,PRED_TREE_OPCODE_NONEQUAL,PRED_TREE_FPOPCODE,PRED_CALL,PRED_EARLY_RETURN,PRED_TREE_EARLY_RETURN,PRED_GOTO,PRED_CONST_RETURN,PRED_NEGATIVE_RETURN,PRED_NULL_RETURN,PRED_MUDFLAP,END_PREDICTORS}; 
#line 37 "../.././gcc/predict.h"
enum prediction {NOT_TAKEN,TAKEN}; 
#line 39 "../.././gcc/predict.h"
extern void predict_insn_def( rtx , enum br_predictor , enum prediction ); 
#line 40 "../.././gcc/predict.h"
extern int counts_to_freqs(void ); 
# 31 "../.././gcc/basic-block.h" 2
# 1 "../.././gcc/function.h" 1
# 31 "../.././gcc/function.h" 
struct var_refs_queue { rtx modified; enum machine_mode promoted_mode; int unsignedp; struct var_refs_queue *next; }; 
#line 44 "../.././gcc/function.h"
struct sequence_stack { rtx first;  rtx last; struct sequence_stack *next; }; 
#line 46 "../.././gcc/function.h"
extern struct sequence_stack *sequence_stack; 
#line 54 "../.././gcc/function.h"
struct simple_obstack_stack {struct obstack *obstack; struct simple_obstack_stack *next; }; 
#line 102 "../.././gcc/function.h"
struct emit_status {int x_reg_rtx_no; int x_first_label_num;  rtx x_first_insn;  rtx x_last_insn; struct sequence_stack *sequence_stack; int x_cur_insn_uid;  location_t x_last_location; int regno_pointer_align_length; unsigned char *regno_pointer_align;  rtx *x_regno_reg_rtx; }; 
# 111 "../.././gcc/function.h" 
# 150 "../.././gcc/function.h" 
struct expr_status {int x_pending_stack_adjust; int x_inhibit_defer_pop; int x_stack_pointer_delta;  rtx x_saveregs_value;  rtx x_apply_args_value;  rtx x_forced_labels; }; 
# 162 "../.././gcc/function.h" 
# 464 "../.././gcc/function.h" 
struct function {struct eh_status *eh; struct eh_status *saved_eh; struct expr_status *expr; struct emit_status *emit; struct varasm_status *varasm; struct control_flow_graph *cfg; struct control_flow_graph *saved_cfg; unsigned char after_inlining;  tree saved_args;  tree saved_static_chain_decl;  tree saved_blocks;  tree saved_unexpanded_var_list;  tree decl; struct function *outer; int pops_args; int args_size; int pretend_args_size; int outgoing_args_size;  rtx arg_offset_rtx;  CUMULATIVE_ARGS args_info;  rtx return_rtx;  rtx internal_arg_pointer; struct initial_value_struct *hard_reg_initial_vals;  rtx x_nonlocal_goto_handler_labels;  rtx x_return_label;  rtx x_naked_return_label;  rtx x_stack_slot_list;  rtx x_tail_recursion_reentry;  rtx x_arg_pointer_save_area; long x_frame_offset;  tree static_chain_decl;  tree nonlocal_goto_save_area;  rtx x_parm_birth_insn; struct varray_head_tag *x_used_temp_slots; struct temp_slot *x_avail_temp_slots; int x_temp_slot_level; struct var_refs_queue *fixup_var_refs_queue; int inlinable; int no_debugging_symbols;  rtvec original_arg_vector;  tree original_decl_initial; int inl_max_label_num; int funcdef_no; int max_loop_depth; struct machine_function *machine; unsigned int stack_alignment_needed; unsigned int preferred_stack_boundary; unsigned char recursive_call_emit; unsigned char tail_call_emit; struct language_function *language;  rtx epilogue_delay_list; enum function_frequency {FUNCTION_FREQUENCY_UNLIKELY_EXECUTED,FUNCTION_FREQUENCY_NORMAL,FUNCTION_FREQUENCY_HOT}function_frequency; int max_jumptable_ents; int last_label_uid;  location_t function_end_locus; struct varray_head_tag *ib_boundaries_block;  tree unexpanded_var_list; const char *hot_section_label; const char *cold_section_label; const char *hot_section_end_label; const char *cold_section_end_label; const char *unlikely_text_section_name;  tree stack_protect_guard; unsigned int returns_struct:1; unsigned int returns_pcc_struct:1; unsigned int returns_pointer:1; unsigned int calls_setjmp:1; unsigned int calls_alloca:1; unsigned int accesses_prior_frames:1; unsigned int calls_eh_return:1; unsigned int has_nonlocal_label:1; unsigned int has_nonlocal_goto:1; unsigned int is_thunk:1; unsigned int all_throwers_are_sibcalls:1; unsigned int profile:1; unsigned int limit_stack:1; unsigned int stdarg:1; unsigned int x_dont_save_pending_sizes_p:1; unsigned int uses_const_pool:1; unsigned int uses_pic_offset_table:1; unsigned int uses_eh_lsda:1; unsigned int arg_pointer_save_area_init:1; unsigned int va_list_gpr_size:8; unsigned int va_list_fpr_size:8; }; 
#line 472 "../.././gcc/function.h"
extern struct function *cfun; 
#line 475 "../.././gcc/function.h"
extern struct function *outer_function_chain; 
#line 478 "../.././gcc/function.h"
extern int virtuals_instantiated; 
#line 481 "../.././gcc/function.h"
extern int trampolines_created; 
#line 524 "../.././gcc/function.h"
struct function *find_function_data( tree ); 
#line 528 "../.././gcc/function.h"
extern void reorder_blocks(void ); 
#line 531 "../.././gcc/function.h"
extern void number_blocks( tree ); 
#line 533 "../.././gcc/function.h"
extern void clear_block_marks( tree ); 
#line 534 "../.././gcc/function.h"
extern  tree blocks_nreverse( tree ); 
#line 535 "../.././gcc/function.h"
extern void reset_block_changes(void ); 
#line 536 "../.././gcc/function.h"
extern void record_block_change( tree ); 
#line 537 "../.././gcc/function.h"
extern void finalize_block_changes(void ); 
#line 538 "../.././gcc/function.h"
extern void check_block_change( rtx ,  tree *); 
#line 539 "../.././gcc/function.h"
extern void free_block_changes(void ); 
#line 544 "../.././gcc/function.h"
extern long get_frame_size(void ); 
#line 548 "../.././gcc/function.h"
extern struct machine_function *(*init_machine_status)(void ); 
#line 551 "../.././gcc/function.h"
extern void free_after_parsing(struct function *); 
#line 552 "../.././gcc/function.h"
extern void free_after_compilation(struct function *); 
#line 554 "../.././gcc/function.h"
extern void init_varasm_status(struct function *); 
#line 557 "../.././gcc/function.h"
extern void diddle_return_value(void (*)( rtx , void *), void *); 
#line 558 "../.././gcc/function.h"
extern void clobber_return_register(void ); 
#line 559 "../.././gcc/function.h"
extern void use_return_register(void ); 
#line 562 "../.././gcc/function.h"
extern  rtx get_arg_pointer_save_area(struct function *); 
#line 564 "../.././gcc/function.h"
extern void init_virtual_regs(struct emit_status *); 
#line 565 "../.././gcc/function.h"
extern void instantiate_virtual_regs(void ); 
#line 568 "../.././gcc/function.h"
extern const char *current_function_name(void ); 
#line 570 "../.././gcc/function.h"
extern void do_warn_unused_parameter( tree ); 
#line 573 "../.././gcc/function.h"
extern unsigned char pass_by_reference( CUMULATIVE_ARGS *, enum machine_mode ,  tree , unsigned char ); 
#line 575 "../.././gcc/function.h"
extern unsigned char reference_callee_copied( CUMULATIVE_ARGS *, enum machine_mode ,  tree , unsigned char ); 
# 524 "../.././gcc/function.h" 
# 35 "../.././gcc/basic-block.h" 2
typedef  bitmap_head regset_head; 
#line 38 "../.././gcc/basic-block.h"
typedef  bitmap regset; 
#line 84 "../.././gcc/basic-block.h"
extern void reg_set_to_hard_reg_set( HARD_REG_SET *,  bitmap ); 
#line 91 "../.././gcc/basic-block.h"
typedef  bitmap_iterator reg_set_iterator; 
# 84 "../.././gcc/basic-block.h" 
# 115 "../.././gcc/basic-block.h" 
typedef long long gcov_type; 
#line 144 "../.././gcc/basic-block.h"
struct edge_def {struct basic_block_def *src; struct basic_block_def *dest; union edge_def_insns { rtx r;  tree t; }insns; void *aux;  source_locus goto_locus; int flags; int probability;  gcov_type count; unsigned int dest_idx; }; 
#line 146 "../.././gcc/basic-block.h"
typedef struct edge_def *edge; 
#line 147 "../.././gcc/basic-block.h"
static __inline__ void VEC_edge_must_be_pointer_type(void )  {

#line 147 "../.././gcc/basic-block.h"
((void )((( edge )1) == ((void *)1))); }
 
#line 147 "../.././gcc/basic-block.h"
typedef struct VEC_edge_base {unsigned num; unsigned alloc;  edge vec[1]; }VEC_edge_base; 
#line 147 "../.././gcc/basic-block.h"
typedef struct VEC_edge_none { VEC_edge_base base; }VEC_edge_none; 
#line 147 "../.././gcc/basic-block.h"
static __inline__ unsigned VEC_edge_base_length(const  VEC_edge_base *vec_)  {

#line 147 "../.././gcc/basic-block.h"
return (vec_?(vec_->num):0); }
 
#line 147 "../.././gcc/basic-block.h"
static __inline__  edge VEC_edge_base_last(const  VEC_edge_base *vec_)  {

#line 147 "../.././gcc/basic-block.h"
((void )(vec_ && (vec_->num))); 
#line 147 "../.././gcc/basic-block.h"
return (vec_->vec)[(vec_->num) - 1]; }
 
#line 147 "../.././gcc/basic-block.h"
static __inline__  edge VEC_edge_base_index(const  VEC_edge_base *vec_, unsigned ix_)  {

#line 147 "../.././gcc/basic-block.h"
((void )(vec_ && ix_ < (vec_->num))); 
#line 147 "../.././gcc/basic-block.h"
return (vec_->vec)[ix_]; }
 
#line 147 "../.././gcc/basic-block.h"
static __inline__ int VEC_edge_base_iterate(const  VEC_edge_base *vec_, unsigned ix_,  edge *ptr)  {

#line 147 "../.././gcc/basic-block.h"
if (vec_ && ix_ < (vec_->num)){
{ 
#line 147 "../.././gcc/basic-block.h"
(*ptr) = (vec_->vec)[ix_]; 
#line 147 "../.././gcc/basic-block.h"
return 1; } }else{
{ 
#line 147 "../.././gcc/basic-block.h"
(*ptr) = 0; 
#line 147 "../.././gcc/basic-block.h"
return 0; } }}
 
#line 147 "../.././gcc/basic-block.h"
static __inline__  size_t VEC_edge_base_embedded_size(int alloc_)  {

#line 147 "../.././gcc/basic-block.h"
return __builtin_offsetof ( VEC_edge_base  , vec) + alloc_ * sizeof ( edge ); }
 
#line 147 "../.././gcc/basic-block.h"
static __inline__ void VEC_edge_base_embedded_init( VEC_edge_base *vec_, int alloc_)  {

#line 147 "../.././gcc/basic-block.h"
(vec_->num) = 0; 
#line 147 "../.././gcc/basic-block.h"
(vec_->alloc) = alloc_; }
 
#line 147 "../.././gcc/basic-block.h"
static __inline__ int VEC_edge_base_space( VEC_edge_base *vec_, int alloc_)  {

#line 147 "../.././gcc/basic-block.h"
((void )(alloc_ >= 0)); 
#line 147 "../.././gcc/basic-block.h"
return (vec_?(vec_->alloc) - (vec_->num) >= ((unsigned )alloc_):(!alloc_)); }
 
#line 147 "../.././gcc/basic-block.h"
static __inline__  edge *VEC_edge_base_quick_push( VEC_edge_base *vec_,  edge obj_)  {

#line 147 "../.././gcc/basic-block.h"

#line 147 "../.././gcc/basic-block.h"
 edge *slot_;
#line 147 "../.././gcc/basic-block.h"
((void )((vec_->num) < (vec_->alloc))); 
#line 147 "../.././gcc/basic-block.h"
slot_ = (&(vec_->vec)[(vec_->num)++]); 
#line 147 "../.././gcc/basic-block.h"
(*slot_) = obj_; 
#line 147 "../.././gcc/basic-block.h"
return slot_; }
 
#line 147 "../.././gcc/basic-block.h"
static __inline__  edge VEC_edge_base_pop( VEC_edge_base *vec_)  {

#line 147 "../.././gcc/basic-block.h"

#line 147 "../.././gcc/basic-block.h"
 edge obj_;
#line 147 "../.././gcc/basic-block.h"
((void )((vec_->num))); 
#line 147 "../.././gcc/basic-block.h"
obj_ = (vec_->vec)[(--(vec_->num))]; 
#line 147 "../.././gcc/basic-block.h"
return obj_; }
 
#line 147 "../.././gcc/basic-block.h"
static __inline__ void VEC_edge_base_truncate( VEC_edge_base *vec_, unsigned size_)  {

#line 147 "../.././gcc/basic-block.h"
((void )((vec_?(vec_->num) >= size_:(!size_)))); 
#line 147 "../.././gcc/basic-block.h"
if (vec_){
(vec_->num) = size_; }}
 
#line 147 "../.././gcc/basic-block.h"
static __inline__  edge VEC_edge_base_replace( VEC_edge_base *vec_, unsigned ix_,  edge obj_)  {

#line 147 "../.././gcc/basic-block.h"

#line 147 "../.././gcc/basic-block.h"
 edge old_obj_;
#line 147 "../.././gcc/basic-block.h"
((void )(ix_ < (vec_->num))); 
#line 147 "../.././gcc/basic-block.h"
old_obj_ = (vec_->vec)[ix_]; 
#line 147 "../.././gcc/basic-block.h"
(vec_->vec)[ix_] = obj_; 
#line 147 "../.././gcc/basic-block.h"
return old_obj_; }
 
#line 147 "../.././gcc/basic-block.h"
static __inline__  edge *VEC_edge_base_quick_insert( VEC_edge_base *vec_, unsigned ix_,  edge obj_)  {

#line 147 "../.././gcc/basic-block.h"

#line 147 "../.././gcc/basic-block.h"
 edge *slot_;
#line 147 "../.././gcc/basic-block.h"
((void )((vec_->num) < (vec_->alloc))); 
#line 147 "../.././gcc/basic-block.h"
((void )(ix_ <= (vec_->num))); 
#line 147 "../.././gcc/basic-block.h"
slot_ = (&(vec_->vec)[ix_]); 
#line 147 "../.././gcc/basic-block.h"
memmove(slot_ + 1, slot_, ((vec_->num)++ - ix_) * sizeof ( edge )); 
#line 147 "../.././gcc/basic-block.h"
(*slot_) = obj_; 
#line 147 "../.././gcc/basic-block.h"
return slot_; }
 
#line 147 "../.././gcc/basic-block.h"
static __inline__  edge VEC_edge_base_ordered_remove( VEC_edge_base *vec_, unsigned ix_)  {

#line 147 "../.././gcc/basic-block.h"

#line 147 "../.././gcc/basic-block.h"
 edge *slot_;
#line 147 "../.././gcc/basic-block.h"

#line 147 "../.././gcc/basic-block.h"
 edge obj_;
#line 147 "../.././gcc/basic-block.h"
((void )(ix_ < (vec_->num))); 
#line 147 "../.././gcc/basic-block.h"
slot_ = (&(vec_->vec)[ix_]); 
#line 147 "../.././gcc/basic-block.h"
obj_ = (*slot_); 
#line 147 "../.././gcc/basic-block.h"
memmove(slot_, slot_ + 1, ((--(vec_->num)) - ix_) * sizeof ( edge )); 
#line 147 "../.././gcc/basic-block.h"
return obj_; }
 
#line 147 "../.././gcc/basic-block.h"
static __inline__  edge VEC_edge_base_unordered_remove( VEC_edge_base *vec_, unsigned ix_)  {

#line 147 "../.././gcc/basic-block.h"

#line 147 "../.././gcc/basic-block.h"
 edge *slot_;
#line 147 "../.././gcc/basic-block.h"

#line 147 "../.././gcc/basic-block.h"
 edge obj_;
#line 147 "../.././gcc/basic-block.h"
((void )(ix_ < (vec_->num))); 
#line 147 "../.././gcc/basic-block.h"
slot_ = (&(vec_->vec)[ix_]); 
#line 147 "../.././gcc/basic-block.h"
obj_ = (*slot_); 
#line 147 "../.././gcc/basic-block.h"
(*slot_) = (vec_->vec)[(--(vec_->num))]; 
#line 147 "../.././gcc/basic-block.h"
return obj_; }
 
#line 147 "../.././gcc/basic-block.h"
static __inline__  edge *VEC_edge_base_address( VEC_edge_base *vec_)  {

#line 147 "../.././gcc/basic-block.h"
return (vec_?(vec_->vec):0); }
 
#line 147 "../.././gcc/basic-block.h"
static __inline__ unsigned VEC_edge_base_lower_bound( VEC_edge_base *vec_, const  edge obj_, unsigned char (*lessthan_)(const  edge , const  edge ))  {

#line 147 "../.././gcc/basic-block.h"

#line 147 "../.././gcc/basic-block.h"
unsigned int len_ = VEC_edge_base_length(vec_);
#line 147 "../.././gcc/basic-block.h"

#line 147 "../.././gcc/basic-block.h"
unsigned int half_,middle_;
#line 147 "../.././gcc/basic-block.h"

#line 147 "../.././gcc/basic-block.h"
unsigned int first_ = 0;
#line 147 "../.././gcc/basic-block.h"
while(len_ > 0) { { 
#line 147 "../.././gcc/basic-block.h"

#line 147 "../.././gcc/basic-block.h"
 edge middle_elem_;
#line 147 "../.././gcc/basic-block.h"
half_ = len_ >> 1; 
#line 147 "../.././gcc/basic-block.h"
middle_ = first_; 
#line 147 "../.././gcc/basic-block.h"
middle_ += half_; 
#line 147 "../.././gcc/basic-block.h"
middle_elem_ = VEC_edge_base_index(vec_, middle_); 
#line 147 "../.././gcc/basic-block.h"
if (lessthan_(middle_elem_, obj_)){
{ 
#line 147 "../.././gcc/basic-block.h"
first_ = middle_; 
#line 147 "../.././gcc/basic-block.h"
(++first_); 
#line 147 "../.././gcc/basic-block.h"
len_ = len_ - half_ - 1; } }else{
len_ = half_; }} } 
#line 147 "../.././gcc/basic-block.h"
return first_; }
 
#line 147 "../.././gcc/basic-block.h"
struct vec_swallow_trailing_semi ; 
#line 148 "../.././gcc/basic-block.h"
typedef struct VEC_edge_gc { VEC_edge_base base; }VEC_edge_gc; 
#line 148 "../.././gcc/basic-block.h"
static __inline__  VEC_edge_gc *VEC_edge_gc_alloc(int alloc_)  {

#line 148 "../.././gcc/basic-block.h"
return (( VEC_edge_gc *)vec_gc_p_reserve((((void *)0)), (-alloc_))); }
 
#line 148 "../.././gcc/basic-block.h"
static __inline__ void VEC_edge_gc_free( VEC_edge_gc **vec_)  {

#line 148 "../.././gcc/basic-block.h"
if ((*vec_)){
ggc_free((*vec_)); }
#line 148 "../.././gcc/basic-block.h"
(*vec_) = (((void *)0)); }
 
#line 148 "../.././gcc/basic-block.h"
static __inline__  VEC_edge_gc *VEC_edge_gc_copy( VEC_edge_base *vec_)  {

#line 148 "../.././gcc/basic-block.h"

#line 148 "../.././gcc/basic-block.h"
 size_t len_ = (vec_?(vec_->num):0);
#line 148 "../.././gcc/basic-block.h"

#line 148 "../.././gcc/basic-block.h"
 VEC_edge_gc *new_vec_ = (((void *)0));
#line 148 "../.././gcc/basic-block.h"
if (len_){
{ 
#line 148 "../.././gcc/basic-block.h"
new_vec_ = (( VEC_edge_gc *)(vec_gc_p_reserve((((void *)0)), (-len_)))); 
#line 148 "../.././gcc/basic-block.h"
(new_vec_->base).num = len_; 
#line 148 "../.././gcc/basic-block.h"
memcpy((new_vec_->base).vec, (vec_->vec), sizeof ( edge ) * len_); } }
#line 148 "../.././gcc/basic-block.h"
return new_vec_; }
 
#line 148 "../.././gcc/basic-block.h"
static __inline__ int VEC_edge_gc_reserve( VEC_edge_gc **vec_, int alloc_)  {

#line 148 "../.././gcc/basic-block.h"

#line 148 "../.././gcc/basic-block.h"
int extend = (!VEC_edge_base_space(((((*vec_))?(&(((*vec_))->base)):0)), (alloc_ < 0?(-alloc_):alloc_)));
#line 148 "../.././gcc/basic-block.h"
if (extend){
(*vec_) = (( VEC_edge_gc *)vec_gc_p_reserve((*vec_), alloc_)); }
#line 148 "../.././gcc/basic-block.h"
return extend; }
 
#line 148 "../.././gcc/basic-block.h"
static __inline__ void VEC_edge_gc_safe_grow( VEC_edge_gc **vec_, int size_)  {

#line 148 "../.././gcc/basic-block.h"
((void )(size_ >= 0 && VEC_edge_base_length((((*vec_))?(&(((*vec_))->base)):0)) <= ((unsigned )size_))); 
#line 148 "../.././gcc/basic-block.h"
VEC_edge_gc_reserve(vec_, ((int )(((*vec_)?(((((*vec_))?(&(((*vec_))->base)):0))->num):0))) - size_); 
#line 148 "../.././gcc/basic-block.h"
(((((*vec_))?(&(((*vec_))->base)):0))->num) = size_; }
 
#line 148 "../.././gcc/basic-block.h"
static __inline__  edge *VEC_edge_gc_safe_push( VEC_edge_gc **vec_,  edge obj_)  {

#line 148 "../.././gcc/basic-block.h"
VEC_edge_gc_reserve(vec_, 1); 
#line 148 "../.././gcc/basic-block.h"
return VEC_edge_base_quick_push(((((*vec_))?(&(((*vec_))->base)):0)), obj_); }
 
#line 148 "../.././gcc/basic-block.h"
static __inline__  edge *VEC_edge_gc_safe_insert( VEC_edge_gc **vec_, unsigned ix_,  edge obj_)  {

#line 148 "../.././gcc/basic-block.h"
VEC_edge_gc_reserve(vec_, 1); 
#line 148 "../.././gcc/basic-block.h"
return VEC_edge_base_quick_insert(((((*vec_))?(&(((*vec_))->base)):0)), ix_, obj_); }
 
#line 148 "../.././gcc/basic-block.h"
struct vec_swallow_trailing_semi ; 
#line 178 "../.././gcc/basic-block.h"
extern const struct gcov_ctr_summary *profile_info; 
#line 181 "../.././gcc/basic-block.h"
struct loop ; 
#line 182 "../.././gcc/basic-block.h"
struct loops ; 
#line 185 "../.././gcc/basic-block.h"
struct edge_prediction ; 
#line 186 "../.././gcc/basic-block.h"
struct rtl_bb_info ; 
# 178 "../.././gcc/basic-block.h" 
# 260 "../.././gcc/basic-block.h" 
struct basic_block_def { tree stmt_list;  VEC_edge_gc *preds;  VEC_edge_gc *succs; void *aux; struct loop *loop_father; struct et_node *dom[2]; struct basic_block_def *prev_bb; struct basic_block_def *next_bb; union basic_block_il_dependent {struct rtl_bb_info *rtl; }il;  tree phi_nodes; struct edge_prediction *predictions;  gcov_type count; int index; int loop_depth; int frequency; int flags; }; 
#line 281 "../.././gcc/basic-block.h"
struct rtl_bb_info { rtx head_;  rtx end_;  bitmap global_live_at_start;  bitmap global_live_at_end;  rtx header;  rtx footer; int visited; }; 
#line 283 "../.././gcc/basic-block.h"
typedef struct basic_block_def *basic_block; 
#line 337 "../.././gcc/basic-block.h"
enum bb_flags {BB_DIRTY=1,BB_NEW=2,BB_REACHABLE=4,BB_IRREDUCIBLE_LOOP=8,BB_SUPERBLOCK=16,BB_DISABLE_SCHEDULE=32,BB_HOT_PARTITION=64,BB_COLD_PARTITION=128,BB_DUPLICATED=256,BB_RTL=1024,BB_FORWARDER_BLOCK=2048,BB_NONTHREADABLE_BLOCK=4096}; 
# 295 "../.././gcc/basic-block.h" 
# 386 "../.././gcc/basic-block.h" 
struct control_flow_graph { basic_block x_entry_block_ptr;  basic_block x_exit_block_ptr;  varray_type x_basic_block_info; int x_n_basic_blocks; int x_n_edges; int x_last_basic_block;  varray_type x_label_to_block_map; enum profile_status {PROFILE_ABSENT,PROFILE_GUESSED,PROFILE_READ}x_profile_status; }; 
#line 414 "../.././gcc/basic-block.h"
extern unsigned char rediscover_loops_after_threading; 
# 414 "../.././gcc/basic-block.h" 
# 450 "../.././gcc/basic-block.h" 
extern  bitmap_obstack reg_obstack; 
#line 479 "../.././gcc/basic-block.h"
extern void compute_bb_for_insn(void ); 
#line 480 "../.././gcc/basic-block.h"
extern void free_bb_for_insn(void ); 
#line 481 "../.././gcc/basic-block.h"
extern void update_bb_for_insn( basic_block ); 
#line 483 "../.././gcc/basic-block.h"
extern void free_basic_block_vars(void ); 
#line 485 "../.././gcc/basic-block.h"
extern void insert_insn_on_edge( rtx ,  edge ); 
#line 486 "../.././gcc/basic-block.h"
unsigned char safe_insert_insn_on_edge( rtx ,  edge ); 
#line 488 "../.././gcc/basic-block.h"
extern void commit_edge_insertions(void ); 
#line 489 "../.././gcc/basic-block.h"
extern void commit_edge_insertions_watch_calls(void ); 
#line 491 "../.././gcc/basic-block.h"
extern void remove_fake_edges(void ); 
#line 492 "../.././gcc/basic-block.h"
extern void remove_fake_exit_edges(void ); 
#line 493 "../.././gcc/basic-block.h"
extern void add_noreturn_fake_exit_edges(void ); 
#line 494 "../.././gcc/basic-block.h"
extern void connect_infinite_loops_to_exit(void ); 
#line 495 "../.././gcc/basic-block.h"
extern  edge unchecked_make_edge( basic_block ,  basic_block , int ); 
#line 496 "../.././gcc/basic-block.h"
extern  edge cached_make_edge( sbitmap ,  basic_block ,  basic_block , int ); 
#line 497 "../.././gcc/basic-block.h"
extern  edge make_edge( basic_block ,  basic_block , int ); 
#line 498 "../.././gcc/basic-block.h"
extern  edge make_single_succ_edge( basic_block ,  basic_block , int ); 
#line 499 "../.././gcc/basic-block.h"
extern void remove_edge( edge ); 
#line 500 "../.././gcc/basic-block.h"
extern void redirect_edge_succ( edge ,  basic_block ); 
#line 501 "../.././gcc/basic-block.h"
extern  edge redirect_edge_succ_nodup( edge ,  basic_block ); 
#line 502 "../.././gcc/basic-block.h"
extern void redirect_edge_pred( edge ,  basic_block ); 
#line 503 "../.././gcc/basic-block.h"
extern  basic_block create_basic_block_structure( rtx ,  rtx ,  rtx ,  basic_block ); 
#line 504 "../.././gcc/basic-block.h"
extern void clear_bb_flags(void ); 
#line 505 "../.././gcc/basic-block.h"
extern void flow_reverse_top_sort_order_compute(int *); 
#line 506 "../.././gcc/basic-block.h"
extern int flow_depth_first_order_compute(int *, int *); 
#line 509 "../.././gcc/basic-block.h"
extern int dfs_enumerate_from( basic_block , int , unsigned char (*)( basic_block , void *),  basic_block *, int , void *); 
#line 510 "../.././gcc/basic-block.h"
extern void compute_dominance_frontiers( bitmap *); 
#line 511 "../.././gcc/basic-block.h"
extern void dump_edge_info( FILE *,  edge , int ); 
#line 512 "../.././gcc/basic-block.h"
extern void brief_dump_cfg( FILE *); 
#line 513 "../.././gcc/basic-block.h"
extern void clear_edges(void ); 
#line 514 "../.././gcc/basic-block.h"
extern  rtx first_insn_after_basic_block_note( basic_block ); 
#line 515 "../.././gcc/basic-block.h"
extern void scale_bbs_frequencies_int( basic_block *, int , int , int ); 
#line 517 "../.././gcc/basic-block.h"
extern void scale_bbs_frequencies_gcov_type( basic_block *, int ,  gcov_type ,  gcov_type ); 
#line 544 "../.././gcc/basic-block.h"
typedef struct ce_if_block { basic_block test_bb;  basic_block then_bb;  basic_block else_bb;  basic_block join_bb;  basic_block last_test_bb; int num_multiple_test_blocks; int num_and_and_blocks; int num_or_or_blocks; int num_multiple_test_insns; int and_and_p; int num_then_insns; int num_else_insns; int pass; }ce_if_block_t; 
#line 552 "../.././gcc/basic-block.h"
struct edge_list {int num_blocks; int num_edges;  edge *index_to_edge; }; 
# 479 "../.././gcc/basic-block.h" 
# 602 "../.././gcc/basic-block.h" 
static __inline__ unsigned char single_succ_p( basic_block bb)  {

#line 603 "../.././gcc/basic-block.h"
return (VEC_edge_base_length((((((bb->succs)))?(&((((bb->succs)))->base)):0)))) == 1; }
 
#line 610 "../.././gcc/basic-block.h"
static __inline__ unsigned char single_pred_p( basic_block bb)  {

#line 611 "../.././gcc/basic-block.h"
return (VEC_edge_base_length((((((bb->preds)))?(&((((bb->preds)))->base)):0)))) == 1; }
 
#line 618 "../.././gcc/basic-block.h"
static __inline__  edge single_succ_edge( basic_block bb)  {

#line 619 "../.././gcc/basic-block.h"
(((void )(((!(single_succ_p(bb)))?fancy_abort("../.././gcc/basic-block.h", 620, __FUNCTION__) , 0:0)))); 
#line 620 "../.././gcc/basic-block.h"
return (VEC_edge_base_index((((((bb)->succs))?(&((((bb)->succs))->base)):0)), (0))); }
 
#line 627 "../.././gcc/basic-block.h"
static __inline__  edge single_pred_edge( basic_block bb)  {

#line 628 "../.././gcc/basic-block.h"
(((void )(((!(single_pred_p(bb)))?fancy_abort("../.././gcc/basic-block.h", 630, __FUNCTION__) , 0:0)))); 
#line 629 "../.././gcc/basic-block.h"
return (VEC_edge_base_index((((((bb)->preds))?(&((((bb)->preds))->base)):0)), (0))); }
 
#line 636 "../.././gcc/basic-block.h"
static __inline__  basic_block single_succ( basic_block bb)  {

#line 637 "../.././gcc/basic-block.h"
return (single_succ_edge(bb)->dest); }
 
#line 644 "../.././gcc/basic-block.h"
static __inline__  basic_block single_pred( basic_block bb)  {

#line 645 "../.././gcc/basic-block.h"
return (single_pred_edge(bb)->src); }
 
#line 653 "../.././gcc/basic-block.h"
typedef struct {unsigned index;  VEC_edge_gc **container; }edge_iterator; 
#line 657 "../.././gcc/basic-block.h"
static __inline__  VEC_edge_gc *ei_container( edge_iterator i)  {

#line 658 "../.././gcc/basic-block.h"
(((void )(((!(i.container))?fancy_abort("../.././gcc/basic-block.h", 662, __FUNCTION__) , 0:0)))); 
#line 659 "../.././gcc/basic-block.h"
return (*i.container); }
 
#line 667 "../.././gcc/basic-block.h"
static __inline__  edge_iterator ei_start_1( VEC_edge_gc **ev)  {

#line 668 "../.././gcc/basic-block.h"

#line 668 "../.././gcc/basic-block.h"
 edge_iterator i;
#line 670 "../.././gcc/basic-block.h"
i.index = 0; 
#line 671 "../.././gcc/basic-block.h"
i.container = ev; 
#line 673 "../.././gcc/basic-block.h"
return i; }
 
#line 679 "../.././gcc/basic-block.h"
static __inline__  edge_iterator ei_last_1( VEC_edge_gc **ev)  {

#line 680 "../.././gcc/basic-block.h"

#line 680 "../.././gcc/basic-block.h"
 edge_iterator i;
#line 682 "../.././gcc/basic-block.h"
i.index = (VEC_edge_base_length((((((*ev)))?(&((((*ev)))->base)):0)))) - 1; 
#line 683 "../.././gcc/basic-block.h"
i.container = ev; 
#line 685 "../.././gcc/basic-block.h"
return i; }
 
#line 691 "../.././gcc/basic-block.h"
static __inline__ unsigned char ei_end_p( edge_iterator i)  {

#line 692 "../.././gcc/basic-block.h"
return (i.index == (VEC_edge_base_length(((((ei_container(i)))?(&(((ei_container(i)))->base)):0))))); }
 
#line 699 "../.././gcc/basic-block.h"
static __inline__ unsigned char ei_one_before_end_p( edge_iterator i)  {

#line 700 "../.././gcc/basic-block.h"
return (i.index + 1 == (VEC_edge_base_length(((((ei_container(i)))?(&(((ei_container(i)))->base)):0))))); }
 
#line 706 "../.././gcc/basic-block.h"
static __inline__ void ei_next( edge_iterator *i)  {

#line 707 "../.././gcc/basic-block.h"
(((void )(((!((i->index) < (VEC_edge_base_length(((((ei_container((*i))))?(&(((ei_container((*i))))->base)):0))))))?fancy_abort("../.././gcc/basic-block.h", 713, __FUNCTION__) , 0:0)))); 
#line 708 "../.././gcc/basic-block.h"
(i->index)++; }
 
#line 714 "../.././gcc/basic-block.h"
static __inline__ void ei_prev( edge_iterator *i)  {

#line 715 "../.././gcc/basic-block.h"
(((void )(((!((i->index) > 0))?fancy_abort("../.././gcc/basic-block.h", 721, __FUNCTION__) , 0:0)))); 
#line 716 "../.././gcc/basic-block.h"
(i->index)--; }
 
#line 721 "../.././gcc/basic-block.h"
static __inline__  edge ei_edge( edge_iterator i)  {

#line 722 "../.././gcc/basic-block.h"
return (VEC_edge_base_index(((((ei_container(i)))?(&(((ei_container(i)))->base)):0)), (i.index))); }
 
#line 729 "../.././gcc/basic-block.h"
static __inline__  edge ei_safe_edge( edge_iterator i)  {

#line 730 "../.././gcc/basic-block.h"
return ((!ei_end_p(i))?ei_edge(i):(((void *)0))); }
 
#line 739 "../.././gcc/basic-block.h"
static __inline__ unsigned char ei_cond( edge_iterator ei,  edge *p)  {

#line 749 "../.././gcc/basic-block.h"
if ((!ei_end_p(ei))){
{ 
#line 742 "../.././gcc/basic-block.h"
(*p) = ei_edge(ei); 
#line 743 "../.././gcc/basic-block.h"
return 1; } }else{
{ 
#line 747 "../.././gcc/basic-block.h"
(*p) = (((void *)0)); 
#line 748 "../.././gcc/basic-block.h"
return 0; } }}
 
#line 780 "../.././gcc/basic-block.h"
struct edge_list *create_edge_list(void ); 
#line 781 "../.././gcc/basic-block.h"
void free_edge_list(struct edge_list *); 
#line 782 "../.././gcc/basic-block.h"
void print_edge_list( FILE *, struct edge_list *); 
#line 783 "../.././gcc/basic-block.h"
void verify_edge_list( FILE *, struct edge_list *); 
#line 784 "../.././gcc/basic-block.h"
int find_edge_index(struct edge_list *,  basic_block ,  basic_block ); 
#line 785 "../.././gcc/basic-block.h"
 edge find_edge( basic_block ,  basic_block ); 
#line 793 "../.././gcc/basic-block.h"
enum update_life_extent {UPDATE_LIFE_LOCAL=0,UPDATE_LIFE_GLOBAL=1,UPDATE_LIFE_GLOBAL_RM_NOTES=2}; 
# 780 "../.././gcc/basic-block.h" 
# 834 "../.././gcc/basic-block.h" 
extern void life_analysis( FILE *, int ); 
#line 835 "../.././gcc/basic-block.h"
extern int update_life_info( sbitmap , enum update_life_extent , int ); 
#line 836 "../.././gcc/basic-block.h"
extern int update_life_info_in_dirty_blocks(enum update_life_extent , int ); 
#line 837 "../.././gcc/basic-block.h"
extern int count_or_remove_death_notes( sbitmap , int ); 
#line 838 "../.././gcc/basic-block.h"
extern int propagate_block( basic_block ,  regset ,  regset ,  regset , int ); 
#line 840 "../.././gcc/basic-block.h"
struct propagate_block_info ; 
#line 841 "../.././gcc/basic-block.h"
extern  rtx propagate_one_insn(struct propagate_block_info *,  rtx ); 
#line 843 "../.././gcc/basic-block.h"
extern struct propagate_block_info *init_propagate_block_info( basic_block ,  regset ,  regset ,  regset , int ); 
#line 844 "../.././gcc/basic-block.h"
extern void free_propagate_block_info(struct propagate_block_info *); 
#line 849 "../.././gcc/basic-block.h"
extern struct edge_list *pre_edge_lcm( FILE *, int ,  sbitmap *,  sbitmap *,  sbitmap *,  sbitmap *,  sbitmap **,  sbitmap **); 
#line 853 "../.././gcc/basic-block.h"
extern struct edge_list *pre_edge_rev_lcm( FILE *, int ,  sbitmap *,  sbitmap *,  sbitmap *,  sbitmap *,  sbitmap **,  sbitmap **); 
#line 854 "../.././gcc/basic-block.h"
extern void compute_available( sbitmap *,  sbitmap *,  sbitmap *,  sbitmap *); 
#line 855 "../.././gcc/basic-block.h"
extern int optimize_mode_switching( FILE *); 
#line 858 "../.././gcc/basic-block.h"
extern void estimate_probability(struct loops *); 
#line 859 "../.././gcc/basic-block.h"
extern void expected_value_to_br_prob(void ); 
#line 860 "../.././gcc/basic-block.h"
extern unsigned char maybe_hot_bb_p( basic_block ); 
#line 861 "../.././gcc/basic-block.h"
extern unsigned char probably_cold_bb_p( basic_block ); 
#line 862 "../.././gcc/basic-block.h"
extern unsigned char probably_never_executed_bb_p( basic_block ); 
#line 863 "../.././gcc/basic-block.h"
extern unsigned char tree_predicted_by_p( basic_block , enum br_predictor ); 
#line 864 "../.././gcc/basic-block.h"
extern unsigned char rtl_predicted_by_p( basic_block , enum br_predictor ); 
#line 865 "../.././gcc/basic-block.h"
extern void tree_predict_edge( edge , enum br_predictor , int ); 
#line 866 "../.././gcc/basic-block.h"
extern void rtl_predict_edge( edge , enum br_predictor , int ); 
#line 867 "../.././gcc/basic-block.h"
extern void predict_edge_def( edge , enum br_predictor , enum prediction ); 
#line 868 "../.././gcc/basic-block.h"
extern void guess_outgoing_edge_probabilities( basic_block ); 
#line 869 "../.././gcc/basic-block.h"
extern void remove_predictions_associated_with_edge( edge ); 
#line 872 "../.././gcc/basic-block.h"
extern void init_flow(void ); 
#line 873 "../.././gcc/basic-block.h"
extern void debug_bb( basic_block ); 
#line 874 "../.././gcc/basic-block.h"
extern  basic_block debug_bb_n(int ); 
#line 875 "../.././gcc/basic-block.h"
extern void dump_regset( regset ,  FILE *); 
#line 876 "../.././gcc/basic-block.h"
extern void debug_regset( regset ); 
#line 877 "../.././gcc/basic-block.h"
extern void allocate_reg_life_data(void ); 
#line 878 "../.././gcc/basic-block.h"
extern void expunge_block( basic_block ); 
#line 879 "../.././gcc/basic-block.h"
extern void link_block( basic_block ,  basic_block ); 
#line 880 "../.././gcc/basic-block.h"
extern void unlink_block( basic_block ); 
#line 881 "../.././gcc/basic-block.h"
extern void compact_blocks(void ); 
#line 882 "../.././gcc/basic-block.h"
extern  basic_block alloc_block(void ); 
#line 883 "../.././gcc/basic-block.h"
extern void find_unreachable_blocks(void ); 
#line 884 "../.././gcc/basic-block.h"
extern int delete_noop_moves(void ); 
#line 885 "../.././gcc/basic-block.h"
extern  basic_block force_nonfallthru( edge ); 
#line 886 "../.././gcc/basic-block.h"
extern  rtx block_label( basic_block ); 
#line 887 "../.././gcc/basic-block.h"
extern unsigned char forwarder_block_p( basic_block ); 
#line 888 "../.././gcc/basic-block.h"
extern unsigned char purge_all_dead_edges(void ); 
#line 889 "../.././gcc/basic-block.h"
extern unsigned char purge_dead_edges( basic_block ); 
#line 890 "../.././gcc/basic-block.h"
extern void find_many_sub_basic_blocks( sbitmap ); 
#line 891 "../.././gcc/basic-block.h"
extern void rtl_make_eh_edge( sbitmap ,  basic_block ,  rtx ); 
#line 892 "../.././gcc/basic-block.h"
extern unsigned char can_fallthru( basic_block ,  basic_block ); 
#line 893 "../.././gcc/basic-block.h"
extern unsigned char could_fall_through( basic_block ,  basic_block ); 
#line 894 "../.././gcc/basic-block.h"
extern void flow_nodes_print(const char *, const  sbitmap ,  FILE *); 
#line 895 "../.././gcc/basic-block.h"
extern void flow_edge_list_print(const char *, const  edge *, int ,  FILE *); 
#line 896 "../.././gcc/basic-block.h"
extern void alloc_aux_for_block( basic_block , int ); 
#line 897 "../.././gcc/basic-block.h"
extern void alloc_aux_for_blocks(int ); 
#line 898 "../.././gcc/basic-block.h"
extern void clear_aux_for_blocks(void ); 
#line 899 "../.././gcc/basic-block.h"
extern void free_aux_for_blocks(void ); 
#line 900 "../.././gcc/basic-block.h"
extern void alloc_aux_for_edge( edge , int ); 
#line 901 "../.././gcc/basic-block.h"
extern void alloc_aux_for_edges(int ); 
#line 902 "../.././gcc/basic-block.h"
extern void clear_aux_for_edges(void ); 
#line 903 "../.././gcc/basic-block.h"
extern void free_aux_for_edges(void ); 
#line 904 "../.././gcc/basic-block.h"
extern void find_basic_blocks( rtx ); 
#line 905 "../.././gcc/basic-block.h"
extern unsigned char cleanup_cfg(int ); 
#line 906 "../.././gcc/basic-block.h"
extern unsigned char delete_unreachable_blocks(void ); 
#line 907 "../.././gcc/basic-block.h"
extern unsigned char merge_seq_blocks(void ); 
#line 909 "../.././gcc/basic-block.h"
typedef struct conflict_graph_def *conflict_graph; 
#line 914 "../.././gcc/basic-block.h"
typedef int (*conflict_graph_enum_fn)(int , int , void *); 
#line 920 "../.././gcc/basic-block.h"
extern  conflict_graph conflict_graph_new(int ); 
#line 921 "../.././gcc/basic-block.h"
extern void conflict_graph_delete( conflict_graph ); 
#line 922 "../.././gcc/basic-block.h"
extern int conflict_graph_add( conflict_graph , int , int ); 
#line 923 "../.././gcc/basic-block.h"
extern int conflict_graph_conflict_p( conflict_graph , int , int ); 
#line 925 "../.././gcc/basic-block.h"
extern void conflict_graph_enum( conflict_graph , int ,  conflict_graph_enum_fn , void *); 
#line 926 "../.././gcc/basic-block.h"
extern void conflict_graph_merge_regs( conflict_graph , int , int ); 
#line 927 "../.././gcc/basic-block.h"
extern void conflict_graph_print( conflict_graph ,  FILE *); 
#line 928 "../.././gcc/basic-block.h"
extern unsigned char mark_dfs_back_edges(void ); 
#line 929 "../.././gcc/basic-block.h"
extern void set_edge_can_fallthru_flag(void ); 
#line 930 "../.././gcc/basic-block.h"
extern void update_br_prob_note( basic_block ); 
#line 931 "../.././gcc/basic-block.h"
extern void fixup_abnormal_edges(void ); 
#line 932 "../.././gcc/basic-block.h"
extern unsigned char inside_basic_block_p( rtx ); 
#line 933 "../.././gcc/basic-block.h"
extern unsigned char control_flow_insn_p( rtx ); 
#line 936 "../.././gcc/basic-block.h"
extern void reorder_basic_blocks(unsigned int ); 
#line 937 "../.././gcc/basic-block.h"
extern void partition_hot_cold_basic_blocks(void ); 
#line 945 "../.././gcc/basic-block.h"
enum cdi_direction {CDI_DOMINATORS,CDI_POST_DOMINATORS}; 
#line 952 "../.././gcc/basic-block.h"
enum dom_state {DOM_NONE,DOM_NO_FAST_QUERY,DOM_OK}; 
#line 954 "../.././gcc/basic-block.h"
extern enum dom_state dom_computed[2]; 
#line 956 "../.././gcc/basic-block.h"
extern unsigned char dom_info_available_p(enum cdi_direction ); 
#line 957 "../.././gcc/basic-block.h"
extern void calculate_dominance_info(enum cdi_direction ); 
#line 958 "../.././gcc/basic-block.h"
extern void free_dominance_info(enum cdi_direction ); 
#line 960 "../.././gcc/basic-block.h"
extern  basic_block nearest_common_dominator(enum cdi_direction ,  basic_block ,  basic_block ); 
#line 962 "../.././gcc/basic-block.h"
extern  basic_block nearest_common_dominator_for_set(enum cdi_direction ,  bitmap ); 
#line 964 "../.././gcc/basic-block.h"
extern void set_immediate_dominator(enum cdi_direction ,  basic_block ,  basic_block ); 
#line 965 "../.././gcc/basic-block.h"
extern  basic_block get_immediate_dominator(enum cdi_direction ,  basic_block ); 
#line 966 "../.././gcc/basic-block.h"
extern unsigned char dominated_by_p(enum cdi_direction ,  basic_block ,  basic_block ); 
#line 967 "../.././gcc/basic-block.h"
extern int get_dominated_by(enum cdi_direction ,  basic_block ,  basic_block **); 
#line 969 "../.././gcc/basic-block.h"
extern unsigned get_dominated_by_region(enum cdi_direction ,  basic_block *, unsigned ,  basic_block *); 
#line 970 "../.././gcc/basic-block.h"
extern void add_to_dominance_info(enum cdi_direction ,  basic_block ); 
#line 971 "../.././gcc/basic-block.h"
extern void delete_from_dominance_info(enum cdi_direction ,  basic_block ); 
#line 972 "../.././gcc/basic-block.h"
 basic_block recount_dominator(enum cdi_direction ,  basic_block ); 
#line 974 "../.././gcc/basic-block.h"
extern void redirect_immediate_dominators(enum cdi_direction ,  basic_block ,  basic_block ); 
#line 975 "../.././gcc/basic-block.h"
extern void iterate_fix_dominators(enum cdi_direction ,  basic_block *, int ); 
#line 976 "../.././gcc/basic-block.h"
extern void verify_dominators(enum cdi_direction ); 
#line 977 "../.././gcc/basic-block.h"
extern  basic_block first_dom_son(enum cdi_direction ,  basic_block ); 
#line 978 "../.././gcc/basic-block.h"
extern  basic_block next_dom_son(enum cdi_direction ,  basic_block ); 
#line 979 "../.././gcc/basic-block.h"
extern  edge try_redirect_by_replacing_jump( edge ,  basic_block , unsigned char ); 
#line 980 "../.././gcc/basic-block.h"
extern void break_superblocks(void ); 
#line 981 "../.././gcc/basic-block.h"
extern void check_bb_profile( basic_block ,  FILE *); 
#line 982 "../.././gcc/basic-block.h"
extern void update_bb_profile_for_threading( basic_block , int ,  gcov_type ,  edge ); 
#line 983 "../.././gcc/basic-block.h"
extern void init_rtl_bb_info( basic_block ); 
#line 985 "../.././gcc/basic-block.h"
extern void initialize_original_copy_tables(void ); 
#line 986 "../.././gcc/basic-block.h"
extern void free_original_copy_tables(void ); 
#line 987 "../.././gcc/basic-block.h"
extern void set_bb_original( basic_block ,  basic_block ); 
#line 988 "../.././gcc/basic-block.h"
extern  basic_block get_bb_original( basic_block ); 
#line 989 "../.././gcc/basic-block.h"
extern void set_bb_copy( basic_block ,  basic_block ); 
#line 990 "../.././gcc/basic-block.h"
extern  basic_block get_bb_copy( basic_block ); 
# 1 "../.././gcc/cfghooks.h" 1
# 25 "../.././gcc/cfghooks.h" 
# 138 "../.././gcc/cfghooks.h" 
struct cfg_hooks {const char *name; int (*verify_flow_info)(void ); void (*dump_bb)( basic_block ,  FILE *, int );  basic_block (*create_basic_block)(void *head, void *end,  basic_block after);  edge (*redirect_edge_and_branch)( edge e,  basic_block b);  basic_block (*redirect_edge_and_branch_force)( edge ,  basic_block ); void (*delete_basic_block)( basic_block );  basic_block (*split_block)( basic_block b, void *i); unsigned char (*move_block_after)( basic_block b,  basic_block a); unsigned char (*can_merge_blocks_p)( basic_block a,  basic_block b); void (*merge_blocks)( basic_block a,  basic_block b); void (*predict_edge)( edge e, enum br_predictor predictor, int probability); unsigned char (*predicted_by_p)( basic_block bb, enum br_predictor predictor); unsigned char (*can_duplicate_block_p)( basic_block a);  basic_block (*duplicate_block)( basic_block a);  basic_block (*split_edge)( edge ); void (*make_forwarder_block)( edge ); void (*tidy_fallthru_edge)( edge ); unsigned char (*block_ends_with_call_p)( basic_block ); unsigned char (*block_ends_with_condjump_p)( basic_block ); int (*flow_call_edges_add)( sbitmap ); void (*execute_on_growing_pred)( edge ); void (*execute_on_shrinking_pred)( edge ); unsigned char (*cfg_hook_duplicate_loop_to_header_edge)(struct loop *loop,  edge e, struct loops *loops, unsigned int ndupl,  sbitmap wont_exit,  edge orig,  edge *to_remove, unsigned int *n_to_remove, int flags); void (*lv_add_condition_to_bb)( basic_block ,  basic_block ,  basic_block , void *); void (*lv_adjust_loop_header_phi)( basic_block ,  basic_block ,  basic_block ,  edge ); void (*extract_cond_bb_edges)( basic_block ,  edge *,  edge *); void (*flush_pending_stmts)( edge ); }; 
#line 140 "../.././gcc/cfghooks.h"
extern void verify_flow_info(void ); 
#line 141 "../.././gcc/cfghooks.h"
extern void dump_bb( basic_block ,  FILE *, int ); 
#line 142 "../.././gcc/cfghooks.h"
extern  edge redirect_edge_and_branch( edge ,  basic_block ); 
#line 143 "../.././gcc/cfghooks.h"
extern  basic_block redirect_edge_and_branch_force( edge ,  basic_block ); 
#line 144 "../.././gcc/cfghooks.h"
extern  edge split_block( basic_block , void *); 
#line 145 "../.././gcc/cfghooks.h"
extern  edge split_block_after_labels( basic_block ); 
#line 146 "../.././gcc/cfghooks.h"
extern unsigned char move_block_after( basic_block ,  basic_block ); 
#line 147 "../.././gcc/cfghooks.h"
extern void delete_basic_block( basic_block ); 
#line 148 "../.././gcc/cfghooks.h"
extern  basic_block split_edge( edge ); 
#line 149 "../.././gcc/cfghooks.h"
extern  basic_block create_basic_block(void *, void *,  basic_block ); 
#line 150 "../.././gcc/cfghooks.h"
extern  basic_block create_empty_bb( basic_block ); 
#line 151 "../.././gcc/cfghooks.h"
extern unsigned char can_merge_blocks_p( basic_block ,  basic_block ); 
#line 152 "../.././gcc/cfghooks.h"
extern void merge_blocks( basic_block ,  basic_block ); 
#line 154 "../.././gcc/cfghooks.h"
extern  edge make_forwarder_block( basic_block , unsigned char (*)( edge ), void (*)( basic_block )); 
#line 155 "../.././gcc/cfghooks.h"
extern void tidy_fallthru_edge( edge ); 
#line 156 "../.././gcc/cfghooks.h"
extern void tidy_fallthru_edges(void ); 
#line 157 "../.././gcc/cfghooks.h"
extern void predict_edge( edge e, enum br_predictor predictor, int probability); 
#line 158 "../.././gcc/cfghooks.h"
extern unsigned char predicted_by_p( basic_block bb, enum br_predictor predictor); 
#line 159 "../.././gcc/cfghooks.h"
extern unsigned char can_duplicate_block_p( basic_block ); 
#line 160 "../.././gcc/cfghooks.h"
extern  basic_block duplicate_block( basic_block ,  edge ,  basic_block ); 
#line 161 "../.././gcc/cfghooks.h"
extern unsigned char block_ends_with_call_p( basic_block bb); 
#line 162 "../.././gcc/cfghooks.h"
extern unsigned char block_ends_with_condjump_p( basic_block bb); 
#line 163 "../.././gcc/cfghooks.h"
extern int flow_call_edges_add( sbitmap ); 
#line 164 "../.././gcc/cfghooks.h"
extern void execute_on_growing_pred( edge ); 
#line 165 "../.././gcc/cfghooks.h"
extern void execute_on_shrinking_pred( edge ); 
#line 172 "../.././gcc/cfghooks.h"
extern unsigned char cfg_hook_duplicate_loop_to_header_edge(struct loop *loop,  edge , struct loops *loops, unsigned int ndupl,  sbitmap wont_exit,  edge orig,  edge *to_remove, unsigned int *n_to_remove, int flags); 
#line 174 "../.././gcc/cfghooks.h"
extern void lv_flush_pending_stmts( edge ); 
#line 175 "../.././gcc/cfghooks.h"
extern void extract_cond_bb_edges( basic_block ,  edge *,  edge *); 
#line 177 "../.././gcc/cfghooks.h"
extern void lv_adjust_loop_header_phi( basic_block ,  basic_block ,  basic_block ,  edge ); 
#line 179 "../.././gcc/cfghooks.h"
extern void lv_add_condition_to_bb( basic_block ,  basic_block ,  basic_block , void *); 
#line 182 "../.././gcc/cfghooks.h"
extern struct cfg_hooks tree_cfg_hooks; 
#line 183 "../.././gcc/cfghooks.h"
extern struct cfg_hooks rtl_cfg_hooks; 
#line 184 "../.././gcc/cfghooks.h"
extern struct cfg_hooks cfg_layout_rtl_cfg_hooks; 
#line 187 "../.././gcc/cfghooks.h"
extern int ir_type(void ); 
#line 188 "../.././gcc/cfghooks.h"
extern void rtl_register_cfg_hooks(void ); 
#line 189 "../.././gcc/cfghooks.h"
extern void cfg_layout_rtl_register_cfg_hooks(void ); 
#line 190 "../.././gcc/cfghooks.h"
extern void tree_register_cfg_hooks(void ); 
# 993 "../.././gcc/basic-block.h" 2
# 33 "../.././gcc/tree-mudflap.c" 2
# 1 "../.././gcc/flags.h" 1
# 26 "../.././gcc/flags.h" 
# 1 "./options.h" 1
# 38 "../.././gcc/flags.h" 2
enum debug_info_type {NO_DEBUG,DBX_DEBUG,SDB_DEBUG,DWARF2_DEBUG,XCOFF_DEBUG,VMS_DEBUG,VMS_AND_DWARF2_DEBUG}; 
#line 41 "../.././gcc/flags.h"
extern enum debug_info_type write_symbols; 
#line 44 "../.././gcc/flags.h"
extern const char *const debug_type_names[]; 
#line 52 "../.././gcc/flags.h"
enum debug_info_level {DINFO_LEVEL_NONE,DINFO_LEVEL_TERSE,DINFO_LEVEL_NORMAL,DINFO_LEVEL_VERBOSE}; 
#line 55 "../.././gcc/flags.h"
extern enum debug_info_level debug_info_level; 
#line 59 "../.././gcc/flags.h"
extern unsigned char use_gnu_debug_info_extensions; 
#line 74 "../.././gcc/flags.h"
extern enum symbol_visibility default_visibility; 
#line 80 "../.././gcc/flags.h"
struct visibility_flags {unsigned inpragma:1; unsigned inlines_hidden:1; }; 
#line 83 "../.././gcc/flags.h"
extern struct visibility_flags visibility_options; 
#line 87 "../.././gcc/flags.h"
extern int optimize; 
#line 91 "../.././gcc/flags.h"
extern int optimize_size; 
#line 96 "../.././gcc/flags.h"
extern unsigned char extra_warnings; 
#line 102 "../.././gcc/flags.h"
extern void set_Wunused(int setting); 
#line 108 "../.././gcc/flags.h"
extern unsigned char warn_larger_than; 
#line 109 "../.././gcc/flags.h"
extern long larger_than_size; 
#line 114 "../.././gcc/flags.h"
extern int warn_strict_aliasing; 
#line 119 "../.././gcc/flags.h"
extern int in_system_header; 
#line 124 "../.././gcc/flags.h"
extern int flag_print_asm_name; 
#line 130 "../.././gcc/flags.h"
extern int flag_signed_char; 
#line 135 "../.././gcc/flags.h"
extern int flag_short_enums; 
#line 139 "../.././gcc/flags.h"
extern int flag_pcc_struct_return; 
#line 145 "../.././gcc/flags.h"
extern int flag_complex_method; 
#line 150 "../.././gcc/flags.h"
extern int flag_really_no_inline; 
#line 154 "../.././gcc/flags.h"
extern int rtl_dump_and_exit; 
#line 158 "../.././gcc/flags.h"
extern int flag_gen_aux_info; 
#line 163 "../.././gcc/flags.h"
extern int flag_dump_unnumbered; 
#line 168 "../.././gcc/flags.h"
extern int flag_pedantic_errors; 
#line 173 "../.././gcc/flags.h"
extern int flag_shlib; 
# 74 "../.././gcc/flags.h" 
# 182 "../.././gcc/flags.h" 
extern int flag_debug_asm; 
#line 186 "../.././gcc/flags.h"
extern int flag_next_runtime; 
#line 188 "../.././gcc/flags.h"
extern int flag_dump_rtl_in_asm; 
#line 193 "../.././gcc/flags.h"
extern int flag_renumber_insns; 
#line 201 "../.././gcc/flags.h"
extern int frame_pointer_needed; 
#line 204 "../.././gcc/flags.h"
extern int flag_evaluation_order; 
#line 207 "../.././gcc/flags.h"
extern unsigned long g_switch_value; 
#line 208 "../.././gcc/flags.h"
extern unsigned char g_switch_set; 
#line 215 "../.././gcc/flags.h"
extern int align_loops_log; 
#line 216 "../.././gcc/flags.h"
extern int align_loops_max_skip; 
#line 217 "../.././gcc/flags.h"
extern int align_jumps_log; 
#line 218 "../.././gcc/flags.h"
extern int align_jumps_max_skip; 
#line 219 "../.././gcc/flags.h"
extern int align_labels_log; 
#line 220 "../.././gcc/flags.h"
extern int align_labels_max_skip; 
#line 221 "../.././gcc/flags.h"
extern int align_functions_log; 
#line 225 "../.././gcc/flags.h"
extern int force_align_functions_log; 
#line 228 "../.././gcc/flags.h"
extern int dump_for_graph; 
#line 235 "../.././gcc/flags.h"
enum graph_dump_types {no_graph=0,vcg}; 
#line 236 "../.././gcc/flags.h"
extern enum graph_dump_types graph_dump_format; 
#line 240 "../.././gcc/flags.h"
extern int flag_detailed_statistics; 
#line 244 "../.././gcc/flags.h"
extern int flag_remove_unreachable_functions; 
#line 247 "../.././gcc/flags.h"
extern int flag_var_tracking; 
#line 251 "../.././gcc/flags.h"
extern unsigned char flag_speculative_prefetching_set; 
#line 256 "../.././gcc/flags.h"
extern const char *flag_random_seed; 
# 34 "../.././gcc/tree-mudflap.c" 2
# 1 "../.././gcc/tree-inline.h" 1
# 28 "../.././gcc/tree-inline.h" 
void optimize_inline_calls( tree ); 
#line 29 "../.././gcc/tree-inline.h"
unsigned char tree_inlinable_function_p( tree ); 
#line 30 "../.././gcc/tree-inline.h"
 tree copy_tree_r( tree *, int *, void *); 
#line 31 "../.././gcc/tree-inline.h"
void clone_body( tree ,  tree , void *); 
#line 32 "../.././gcc/tree-inline.h"
void save_body( tree ,  tree *,  tree *); 
#line 33 "../.././gcc/tree-inline.h"
int estimate_move_cost( tree type); 
#line 34 "../.././gcc/tree-inline.h"
void push_cfun(struct function *new_cfun); 
#line 35 "../.././gcc/tree-inline.h"
void pop_cfun(void ); 
#line 36 "../.././gcc/tree-inline.h"
int estimate_num_insns( tree expr); 
#line 37 "../.././gcc/tree-inline.h"
unsigned char tree_versionable_function_p( tree ); 
#line 38 "../.././gcc/tree-inline.h"
void tree_function_versioning( tree ,  tree ,  varray_type ); 
#line 42 "../.././gcc/tree-inline.h"
extern  tree copy_decl_for_dup( tree ,  tree ,  tree , unsigned char ); 
#line 49 "../.././gcc/tree-inline.h"
extern int flag_inline_trees; 
# 36 "../.././gcc/tree-mudflap.c" 2
# 1 "../.././gcc/tree-gimple.h" 1
# 26 "../.././gcc/tree-gimple.h" 
# 1 "../.././gcc/tree-iterator.h" 1
# 36 "../.././gcc/tree-iterator.h" 
typedef struct {struct tree_statement_list_node *ptr;  tree container; }tree_stmt_iterator; 
#line 39 "../.././gcc/tree-iterator.h"
static __inline__  tree_stmt_iterator tsi_start( tree t)  {

#line 40 "../.././gcc/tree-iterator.h"

#line 40 "../.././gcc/tree-iterator.h"
 tree_stmt_iterator i;
#line 42 "../.././gcc/tree-iterator.h"
i.ptr = (((t)->stmt_list).head); 
#line 43 "../.././gcc/tree-iterator.h"
i.container = t; 
#line 45 "../.././gcc/tree-iterator.h"
return i; }
 
#line 49 "../.././gcc/tree-iterator.h"
static __inline__  tree_stmt_iterator tsi_last( tree t)  {

#line 50 "../.././gcc/tree-iterator.h"

#line 50 "../.././gcc/tree-iterator.h"
 tree_stmt_iterator i;
#line 52 "../.././gcc/tree-iterator.h"
i.ptr = (((t)->stmt_list).tail); 
#line 53 "../.././gcc/tree-iterator.h"
i.container = t; 
#line 55 "../.././gcc/tree-iterator.h"
return i; }
 
#line 60 "../.././gcc/tree-iterator.h"
static __inline__ unsigned char tsi_end_p( tree_stmt_iterator i)  {

#line 61 "../.././gcc/tree-iterator.h"
return i.ptr == (((void *)0)); }
 
#line 66 "../.././gcc/tree-iterator.h"
static __inline__ unsigned char tsi_one_before_end_p( tree_stmt_iterator i)  {

#line 67 "../.././gcc/tree-iterator.h"
return i.ptr != (((void *)0)) && (i.ptr->next) == (((void *)0)); }
 
#line 72 "../.././gcc/tree-iterator.h"
static __inline__ void tsi_next( tree_stmt_iterator *i)  {

#line 73 "../.././gcc/tree-iterator.h"
(i->ptr) = ((i->ptr)->next); }
 
#line 78 "../.././gcc/tree-iterator.h"
static __inline__ void tsi_prev( tree_stmt_iterator *i)  {

#line 79 "../.././gcc/tree-iterator.h"
(i->ptr) = ((i->ptr)->prev); }
 
#line 84 "../.././gcc/tree-iterator.h"
static __inline__  tree *tsi_stmt_ptr( tree_stmt_iterator i)  {

#line 85 "../.././gcc/tree-iterator.h"
return (&(i.ptr->stmt)); }
 
#line 89 "../.././gcc/tree-iterator.h"
static __inline__  tree tsi_stmt( tree_stmt_iterator i)  {

#line 90 "../.././gcc/tree-iterator.h"
return (i.ptr->stmt); }
 
#line 105 "../.././gcc/tree-iterator.h"
enum tsi_iterator_update {TSI_NEW_STMT,TSI_SAME_STMT,TSI_CHAIN_START,TSI_CHAIN_END,TSI_CONTINUE_LINKING}; 
#line 108 "../.././gcc/tree-iterator.h"
extern void tsi_link_before( tree_stmt_iterator *,  tree , enum tsi_iterator_update ); 
#line 110 "../.././gcc/tree-iterator.h"
extern void tsi_link_after( tree_stmt_iterator *,  tree , enum tsi_iterator_update ); 
#line 112 "../.././gcc/tree-iterator.h"
void tsi_delink( tree_stmt_iterator *); 
#line 114 "../.././gcc/tree-iterator.h"
 tree tsi_split_statement_list_after(const  tree_stmt_iterator *); 
#line 115 "../.././gcc/tree-iterator.h"
 tree tsi_split_statement_list_before( tree_stmt_iterator *); 
#line 117 "../.././gcc/tree-iterator.h"
void append_to_statement_list( tree ,  tree *); 
#line 118 "../.././gcc/tree-iterator.h"
void append_to_statement_list_force( tree ,  tree *); 
#line 28 "../.././gcc/tree-gimple.h"
extern  tree create_tmp_var_raw( tree , const char *); 
#line 29 "../.././gcc/tree-gimple.h"
extern  tree create_tmp_var_name(const char *); 
#line 30 "../.././gcc/tree-gimple.h"
extern  tree create_tmp_var( tree , const char *); 
#line 31 "../.././gcc/tree-gimple.h"
extern  tree get_initialized_tmp_var( tree ,  tree *,  tree *); 
#line 32 "../.././gcc/tree-gimple.h"
extern  tree get_formal_tmp_var( tree ,  tree *); 
#line 33 "../.././gcc/tree-gimple.h"
extern void declare_tmp_vars( tree ,  tree ); 
#line 35 "../.././gcc/tree-gimple.h"
extern void annotate_all_with_locus( tree *,  location_t ); 
#line 41 "../.././gcc/tree-gimple.h"
typedef unsigned char (*gimple_predicate)( tree ); 
#line 44 "../.././gcc/tree-gimple.h"
extern unsigned char is_gimple_stmt( tree ); 
#line 47 "../.././gcc/tree-gimple.h"
extern unsigned char is_gimple_reg_type( tree ); 
#line 49 "../.././gcc/tree-gimple.h"
extern unsigned char is_gimple_reg( tree ); 
#line 51 "../.././gcc/tree-gimple.h"
extern unsigned char is_gimple_formal_tmp_var( tree ); 
#line 53 "../.././gcc/tree-gimple.h"
extern unsigned char is_gimple_formal_tmp_reg( tree ); 
#line 55 "../.././gcc/tree-gimple.h"
extern unsigned char is_gimple_variable( tree ); 
#line 57 "../.././gcc/tree-gimple.h"
extern unsigned char is_gimple_id( tree ); 
#line 59 "../.././gcc/tree-gimple.h"
extern unsigned char is_gimple_min_lval( tree ); 
#line 61 "../.././gcc/tree-gimple.h"
extern unsigned char is_gimple_addressable( tree ); 
#line 63 "../.././gcc/tree-gimple.h"
extern unsigned char is_gimple_lvalue( tree ); 
#line 66 "../.././gcc/tree-gimple.h"
extern unsigned char is_gimple_min_invariant( tree ); 
#line 68 "../.././gcc/tree-gimple.h"
extern unsigned char is_gimple_val( tree ); 
#line 70 "../.././gcc/tree-gimple.h"
extern unsigned char is_gimple_asm_val( tree ); 
#line 74 "../.././gcc/tree-gimple.h"
extern unsigned char is_gimple_formal_tmp_rhs( tree ); 
#line 75 "../.././gcc/tree-gimple.h"
extern unsigned char is_gimple_reg_rhs( tree ); 
#line 76 "../.././gcc/tree-gimple.h"
extern unsigned char is_gimple_mem_rhs( tree ); 
#line 79 "../.././gcc/tree-gimple.h"
extern  gimple_predicate rhs_predicate_for( tree ); 
#line 82 "../.././gcc/tree-gimple.h"
extern unsigned char is_gimple_condexpr( tree ); 
#line 85 "../.././gcc/tree-gimple.h"
extern unsigned char is_gimple_cast( tree ); 
#line 87 "../.././gcc/tree-gimple.h"
extern unsigned char is_gimple_non_addressable( tree t); 
#line 90 "../.././gcc/tree-gimple.h"
extern unsigned char is_gimple_call_addr( tree ); 
#line 92 "../.././gcc/tree-gimple.h"
extern  tree get_call_expr_in( tree t); 
#line 94 "../.././gcc/tree-gimple.h"
extern void recalculate_side_effects( tree ); 
#line 103 "../.././gcc/tree-gimple.h"
typedef enum fallback_t {fb_none=0,fb_rvalue=1,fb_lvalue=2,fb_mayfail=4,fb_either=fb_rvalue | fb_lvalue}fallback_t; 
#line 110 "../.././gcc/tree-gimple.h"
enum gimplify_status {GS_ERROR=(-2),GS_UNHANDLED=(-1),GS_OK=0,GS_ALL_DONE=1}; 
#line 113 "../.././gcc/tree-gimple.h"
extern enum gimplify_status gimplify_expr( tree *,  tree *,  tree *, unsigned char (*)( tree ),  fallback_t ); 
#line 114 "../.././gcc/tree-gimple.h"
extern void gimplify_type_sizes( tree ,  tree *); 
#line 115 "../.././gcc/tree-gimple.h"
extern void gimplify_one_sizepos( tree *,  tree *); 
#line 116 "../.././gcc/tree-gimple.h"
extern void gimplify_stmt( tree *); 
#line 117 "../.././gcc/tree-gimple.h"
extern void gimplify_to_stmt_list( tree *); 
#line 118 "../.././gcc/tree-gimple.h"
extern void gimplify_body( tree *,  tree , unsigned char ); 
#line 119 "../.././gcc/tree-gimple.h"
extern void push_gimplify_context(void ); 
#line 120 "../.././gcc/tree-gimple.h"
extern void pop_gimplify_context( tree ); 
#line 121 "../.././gcc/tree-gimple.h"
extern void gimplify_and_add( tree ,  tree *); 
#line 124 "../.././gcc/tree-gimple.h"
extern void gimple_add_tmp_var( tree ); 
#line 125 "../.././gcc/tree-gimple.h"
extern  tree gimple_current_bind_expr(void ); 
#line 126 "../.././gcc/tree-gimple.h"
extern  tree voidify_wrapper_expr( tree ,  tree ); 
#line 127 "../.././gcc/tree-gimple.h"
extern  tree gimple_build_eh_filter( tree ,  tree ,  tree ); 
#line 128 "../.././gcc/tree-gimple.h"
extern  tree build_and_jump( tree *); 
#line 129 "../.././gcc/tree-gimple.h"
extern  tree alloc_stmt_list(void ); 
#line 130 "../.././gcc/tree-gimple.h"
extern void free_stmt_list( tree ); 
#line 131 "../.././gcc/tree-gimple.h"
extern  tree force_labels_r( tree *, int *, void *); 
#line 132 "../.././gcc/tree-gimple.h"
extern enum gimplify_status gimplify_va_arg_expr( tree *,  tree *,  tree *); 
#line 135 "../.././gcc/tree-gimple.h"
extern void lower_nested_functions( tree ); 
# 27 "../.././gcc/tree-gimple.h" 2
# 37 "../.././gcc/tree-mudflap.c" 2
# 1 "../.././gcc/tree-flow.h" 1
# 28 "../.././gcc/tree-flow.h" 
# 1 "../.././gcc/../include/hashtab.h" 1
# 46 "../.././gcc/../include/hashtab.h" 
typedef unsigned int hashval_t; 
#line 51 "../.././gcc/../include/hashtab.h"
typedef  hashval_t (*htab_hash)(const void *); 
#line 58 "../.././gcc/../include/hashtab.h"
typedef int (*htab_eq)(const void *, const void *); 
#line 62 "../.././gcc/../include/hashtab.h"
typedef void (*htab_del)(void *); 
#line 68 "../.././gcc/../include/hashtab.h"
typedef int (*htab_trav)(void **, void *); 
#line 74 "../.././gcc/../include/hashtab.h"
typedef void *(*htab_alloc)( size_t ,  size_t ); 
#line 77 "../.././gcc/../include/hashtab.h"
typedef void (*htab_free)(void *); 
#line 81 "../.././gcc/../include/hashtab.h"
typedef void *(*htab_alloc_with_arg)(void *,  size_t ,  size_t ); 
#line 82 "../.././gcc/../include/hashtab.h"
typedef void (*htab_free_with_arg)(void *, void *); 
#line 142 "../.././gcc/../include/hashtab.h"
struct htab { htab_hash hash_f;  htab_eq eq_f;  htab_del del_f; void **entries;  size_t size;  size_t n_elements;  size_t n_deleted; unsigned int searches; unsigned int collisions;  htab_alloc alloc_f;  htab_free free_f; void *alloc_arg;  htab_alloc_with_arg alloc_with_arg_f;  htab_free_with_arg free_with_arg_f; unsigned int size_prime_index; }; 
#line 144 "../.././gcc/../include/hashtab.h"
typedef struct htab *htab_t; 
#line 147 "../.././gcc/../include/hashtab.h"
enum insert_option {NO_INSERT,INSERT}; 
#line 153 "../.././gcc/../include/hashtab.h"
extern  htab_t htab_create_alloc( size_t ,  htab_hash ,  htab_eq ,  htab_del ,  htab_alloc ,  htab_free ); 
#line 158 "../.././gcc/../include/hashtab.h"
extern  htab_t htab_create_alloc_ex( size_t ,  htab_hash ,  htab_eq ,  htab_del , void *,  htab_alloc_with_arg ,  htab_free_with_arg ); 
#line 161 "../.././gcc/../include/hashtab.h"
extern  htab_t htab_create( size_t ,  htab_hash ,  htab_eq ,  htab_del ); 
#line 162 "../.././gcc/../include/hashtab.h"
extern  htab_t htab_try_create( size_t ,  htab_hash ,  htab_eq ,  htab_del ); 
#line 167 "../.././gcc/../include/hashtab.h"
extern void htab_set_functions_ex( htab_t ,  htab_hash ,  htab_eq ,  htab_del , void *,  htab_alloc_with_arg ,  htab_free_with_arg ); 
#line 169 "../.././gcc/../include/hashtab.h"
extern void htab_delete( htab_t ); 
#line 170 "../.././gcc/../include/hashtab.h"
extern void htab_empty( htab_t ); 
#line 172 "../.././gcc/../include/hashtab.h"
extern void *htab_find( htab_t , const void *); 
#line 173 "../.././gcc/../include/hashtab.h"
extern void **htab_find_slot( htab_t , const void *, enum insert_option ); 
#line 174 "../.././gcc/../include/hashtab.h"
extern void *htab_find_with_hash( htab_t , const void *,  hashval_t ); 
#line 176 "../.././gcc/../include/hashtab.h"
extern void **htab_find_slot_with_hash( htab_t , const void *,  hashval_t , enum insert_option ); 
#line 177 "../.././gcc/../include/hashtab.h"
extern void htab_clear_slot( htab_t , void **); 
#line 178 "../.././gcc/../include/hashtab.h"
extern void htab_remove_elt( htab_t , void *); 
#line 179 "../.././gcc/../include/hashtab.h"
extern void htab_remove_elt_with_hash( htab_t , void *,  hashval_t ); 
#line 181 "../.././gcc/../include/hashtab.h"
extern void htab_traverse( htab_t ,  htab_trav , void *); 
#line 182 "../.././gcc/../include/hashtab.h"
extern void htab_traverse_noresize( htab_t ,  htab_trav , void *); 
#line 184 "../.././gcc/../include/hashtab.h"
extern  size_t htab_size( htab_t ); 
#line 185 "../.././gcc/../include/hashtab.h"
extern  size_t htab_elements( htab_t ); 
#line 186 "../.././gcc/../include/hashtab.h"
extern double htab_collisions( htab_t ); 
#line 189 "../.././gcc/../include/hashtab.h"
extern  htab_hash htab_hash_pointer; 
#line 192 "../.././gcc/../include/hashtab.h"
extern  htab_eq htab_eq_pointer; 
#line 195 "../.././gcc/../include/hashtab.h"
extern  hashval_t htab_hash_string(const void *); 
#line 198 "../.././gcc/../include/hashtab.h"
extern  hashval_t iterative_hash(const void *,  size_t ,  hashval_t ); 
# 99 "../.././gcc/../include/hashtab.h" 
# 29 "../.././gcc/tree-flow.h" 2
# 1 "../.././gcc/tree-ssa-operands.h" 1
# 28 "../.././gcc/tree-ssa-operands.h" 
typedef  tree *def_operand_p; 
#line 31 "../.././gcc/tree-ssa-operands.h"
typedef  ssa_use_operand_t *use_operand_p; 
#line 42 "../.././gcc/tree-ssa-operands.h"
struct def_optype_d {struct def_optype_d *next;  tree *def_ptr; }; 
#line 43 "../.././gcc/tree-ssa-operands.h"
typedef struct def_optype_d *def_optype_p; 
#line 50 "../.././gcc/tree-ssa-operands.h"
struct use_optype_d {struct use_optype_d *next; struct ssa_use_operand_d use_ptr; }; 
#line 51 "../.././gcc/tree-ssa-operands.h"
typedef struct use_optype_d *use_optype_p; 
#line 60 "../.././gcc/tree-ssa-operands.h"
struct maydef_optype_d {struct maydef_optype_d *next;  tree def_var;  tree use_var; struct ssa_use_operand_d use_ptr; }; 
#line 61 "../.././gcc/tree-ssa-operands.h"
typedef struct maydef_optype_d *maydef_optype_p; 
#line 69 "../.././gcc/tree-ssa-operands.h"
struct vuse_optype_d {struct vuse_optype_d *next;  tree use_var; struct ssa_use_operand_d use_ptr; }; 
#line 70 "../.././gcc/tree-ssa-operands.h"
typedef struct vuse_optype_d *vuse_optype_p; 
#line 79 "../.././gcc/tree-ssa-operands.h"
struct mustdef_optype_d {struct mustdef_optype_d *next;  tree def_var;  tree kill_var; struct ssa_use_operand_d use_ptr; }; 
#line 80 "../.././gcc/tree-ssa-operands.h"
typedef struct mustdef_optype_d *mustdef_optype_p; 
#line 89 "../.././gcc/tree-ssa-operands.h"
struct ssa_operand_memory_d {struct ssa_operand_memory_d *next; char mem[(2048 - sizeof (void *))]; }; 
#line 103 "../.././gcc/tree-ssa-operands.h"
struct stmt_operands_d {struct def_optype_d *def_ops; struct use_optype_d *use_ops; struct maydef_optype_d *maydef_ops; struct vuse_optype_d *vuse_ops; struct mustdef_optype_d *mustdef_ops; }; 
#line 105 "../.././gcc/tree-ssa-operands.h"
typedef struct stmt_operands_d *stmt_operands_p; 
#line 154 "../.././gcc/tree-ssa-operands.h"
extern void init_ssa_operands(void ); 
#line 155 "../.././gcc/tree-ssa-operands.h"
extern void fini_ssa_operands(void ); 
#line 156 "../.././gcc/tree-ssa-operands.h"
extern void free_ssa_operands( stmt_operands_p ); 
#line 157 "../.././gcc/tree-ssa-operands.h"
extern void update_stmt_operands( tree ); 
#line 158 "../.././gcc/tree-ssa-operands.h"
extern unsigned char verify_imm_links( FILE *f,  tree var); 
#line 160 "../.././gcc/tree-ssa-operands.h"
extern void copy_virtual_operands( tree ,  tree ); 
#line 161 "../.././gcc/tree-ssa-operands.h"
extern void create_ssa_artficial_load_stmt( tree ,  tree ); 
#line 163 "../.././gcc/tree-ssa-operands.h"
extern void dump_immediate_uses( FILE *file); 
#line 164 "../.././gcc/tree-ssa-operands.h"
extern void dump_immediate_uses_for( FILE *file,  tree var); 
#line 165 "../.././gcc/tree-ssa-operands.h"
extern void debug_immediate_uses(void ); 
#line 166 "../.././gcc/tree-ssa-operands.h"
extern void debug_immediate_uses_for( tree var); 
#line 168 "../.././gcc/tree-ssa-operands.h"
extern unsigned char ssa_call_clobbered_cache_valid; 
#line 169 "../.././gcc/tree-ssa-operands.h"
extern unsigned char ssa_ro_call_cache_valid; 
#line 171 "../.././gcc/tree-ssa-operands.h"
extern unsigned char ssa_operands_active(void ); 
#line 173 "../.././gcc/tree-ssa-operands.h"
extern void add_to_addressable_set( tree ,  bitmap *); 
#line 181 "../.././gcc/tree-ssa-operands.h"
enum ssa_op_iter_type {ssa_op_iter_none=0,ssa_op_iter_tree,ssa_op_iter_use,ssa_op_iter_def,ssa_op_iter_maymustdef}; 
#line 201 "../.././gcc/tree-ssa-operands.h"
typedef struct ssa_operand_iterator_d { def_optype_p defs;  use_optype_p uses;  vuse_optype_p vuses;  maydef_optype_p maydefs;  maydef_optype_p mayuses;  mustdef_optype_p mustdefs;  mustdef_optype_p mustkills; enum ssa_op_iter_type iter_type; int phi_i; int num_phi;  tree phi_stmt; unsigned char done; }ssa_op_iter; 
# 154 "../.././gcc/tree-ssa-operands.h" 
# 31 "../.././gcc/tree-flow.h" 2
# 1 "../.././gcc/cgraph.h" 1
# 47 "../.././gcc/cgraph.h" 
enum availability {AVAIL_UNSET,AVAIL_NOT_AVAILABLE,AVAIL_OVERWRITABLE,AVAIL_AVAILABLE,AVAIL_LOCAL}; 
#line 84 "../.././gcc/cgraph.h"
struct cgraph_local_info {int self_insns; unsigned char local; unsigned char externally_visible; unsigned char finalized; unsigned char inlinable; unsigned char disregard_inline_limits; unsigned char redefined_extern_inline; unsigned char for_functions_valid; unsigned char vtable_method; }; 
#line 102 "../.././gcc/cgraph.h"
struct cgraph_global_info {struct cgraph_node *inlined_to; int insns; int estimated_growth; unsigned char inlined; }; 
#line 110 "../.././gcc/cgraph.h"
struct cgraph_rtl_info {int preferred_incoming_stack_boundary; }; 
#line 164 "../.././gcc/cgraph.h"
struct cgraph_node { tree decl; struct cgraph_edge *callees; struct cgraph_edge *callers; struct cgraph_node *next; struct cgraph_node *previous; struct cgraph_node *origin; struct cgraph_node *nested; struct cgraph_node *next_nested; struct cgraph_node *next_needed; struct cgraph_node *next_clone; struct cgraph_node *prev_clone; struct cgraph_node *master_clone; void *aux; struct cgraph_local_info local; struct cgraph_global_info global; struct cgraph_rtl_info rtl;  gcov_type count; int uid; unsigned char needed; unsigned char reachable; unsigned char lowered; unsigned char analyzed; unsigned char output; unsigned char externally_visible; unsigned char alias; }; 
#line 183 "../.././gcc/cgraph.h"
struct cgraph_edge {struct cgraph_node *caller; struct cgraph_node *callee; struct cgraph_edge *prev_caller; struct cgraph_edge *next_caller; struct cgraph_edge *prev_callee; struct cgraph_edge *next_callee;  tree call_stmt; void *aux; const char *inline_failed;  gcov_type count; int loop_nest; }; 
#line 213 "../.././gcc/cgraph.h"
struct cgraph_varpool_node { tree decl; struct cgraph_varpool_node *next; struct cgraph_varpool_node *next_needed; unsigned char needed; unsigned char force_output; unsigned char analyzed; unsigned char finalized; unsigned char output; unsigned char externally_visible; unsigned char alias; }; 
#line 215 "../.././gcc/cgraph.h"
extern struct cgraph_node *cgraph_nodes; 
#line 216 "../.././gcc/cgraph.h"
extern int cgraph_n_nodes; 
#line 217 "../.././gcc/cgraph.h"
extern int cgraph_max_uid; 
#line 218 "../.././gcc/cgraph.h"
extern unsigned char cgraph_global_info_ready; 
#line 219 "../.././gcc/cgraph.h"
extern unsigned char cgraph_function_flags_ready; 
#line 220 "../.././gcc/cgraph.h"
extern struct cgraph_node *cgraph_nodes_queue; 
#line 222 "../.././gcc/cgraph.h"
extern struct cgraph_varpool_node *cgraph_varpool_first_unanalyzed_node; 
#line 223 "../.././gcc/cgraph.h"
extern struct cgraph_varpool_node *cgraph_varpool_nodes_queue; 
#line 226 "../.././gcc/cgraph.h"
void dump_cgraph( FILE *); 
#line 227 "../.././gcc/cgraph.h"
void dump_cgraph_node( FILE *, struct cgraph_node *); 
#line 228 "../.././gcc/cgraph.h"
void dump_varpool( FILE *); 
#line 229 "../.././gcc/cgraph.h"
void dump_cgraph_varpool_node( FILE *, struct cgraph_varpool_node *); 
#line 230 "../.././gcc/cgraph.h"
void cgraph_remove_edge(struct cgraph_edge *); 
#line 231 "../.././gcc/cgraph.h"
void cgraph_remove_node(struct cgraph_node *); 
#line 232 "../.././gcc/cgraph.h"
void cgraph_node_remove_callees(struct cgraph_node *node); 
#line 235 "../.././gcc/cgraph.h"
struct cgraph_edge *cgraph_create_edge(struct cgraph_node *, struct cgraph_node *,  tree ,  gcov_type , int ); 
#line 236 "../.././gcc/cgraph.h"
struct cgraph_node *cgraph_node( tree ); 
#line 237 "../.././gcc/cgraph.h"
struct cgraph_node *cgraph_node_for_asm( tree asmname); 
#line 238 "../.././gcc/cgraph.h"
struct cgraph_edge *cgraph_edge(struct cgraph_node *,  tree ); 
#line 239 "../.././gcc/cgraph.h"
struct cgraph_local_info *cgraph_local_info( tree ); 
#line 240 "../.././gcc/cgraph.h"
struct cgraph_global_info *cgraph_global_info( tree ); 
#line 241 "../.././gcc/cgraph.h"
struct cgraph_rtl_info *cgraph_rtl_info( tree ); 
#line 242 "../.././gcc/cgraph.h"
const char *cgraph_node_name(struct cgraph_node *); 
#line 245 "../.././gcc/cgraph.h"
struct cgraph_edge *cgraph_clone_edge(struct cgraph_edge *, struct cgraph_node *,  tree ,  gcov_type , int , unsigned char ); 
#line 247 "../.././gcc/cgraph.h"
struct cgraph_node *cgraph_clone_node(struct cgraph_node *,  gcov_type , int , unsigned char ); 
#line 249 "../.././gcc/cgraph.h"
struct cgraph_varpool_node *cgraph_varpool_node( tree ); 
#line 250 "../.././gcc/cgraph.h"
struct cgraph_varpool_node *cgraph_varpool_node_for_asm( tree asmname); 
#line 251 "../.././gcc/cgraph.h"
void cgraph_varpool_mark_needed_node(struct cgraph_varpool_node *); 
#line 252 "../.././gcc/cgraph.h"
void cgraph_varpool_finalize_decl( tree ); 
#line 253 "../.././gcc/cgraph.h"
void cgraph_redirect_edge_callee(struct cgraph_edge *, struct cgraph_node *); 
#line 255 "../.././gcc/cgraph.h"
unsigned char cgraph_function_possibly_inlined_p( tree ); 
#line 256 "../.././gcc/cgraph.h"
void cgraph_unnest_node(struct cgraph_node *); 
#line 257 "../.././gcc/cgraph.h"
void cgraph_varpool_enqueue_needed_node(struct cgraph_varpool_node *); 
#line 258 "../.././gcc/cgraph.h"
void cgraph_varpool_reset_queue(void ); 
#line 259 "../.././gcc/cgraph.h"
unsigned char decide_is_variable_needed(struct cgraph_varpool_node *,  tree ); 
#line 261 "../.././gcc/cgraph.h"
enum availability cgraph_function_body_availability(struct cgraph_node *); 
#line 262 "../.././gcc/cgraph.h"
enum availability cgraph_variable_initializer_availability(struct cgraph_varpool_node *); 
#line 263 "../.././gcc/cgraph.h"
unsigned char cgraph_is_master_clone(struct cgraph_node *); 
#line 264 "../.././gcc/cgraph.h"
struct cgraph_node *cgraph_master_clone(struct cgraph_node *); 
#line 267 "../.././gcc/cgraph.h"
unsigned char cgraph_assemble_pending_functions(void ); 
#line 268 "../.././gcc/cgraph.h"
unsigned char cgraph_varpool_assemble_pending_decls(void ); 
#line 269 "../.././gcc/cgraph.h"
void cgraph_finalize_function( tree , unsigned char ); 
#line 270 "../.././gcc/cgraph.h"
void cgraph_lower_function(struct cgraph_node *); 
#line 271 "../.././gcc/cgraph.h"
void cgraph_finalize_compilation_unit(void ); 
#line 272 "../.././gcc/cgraph.h"
void cgraph_optimize(void ); 
#line 273 "../.././gcc/cgraph.h"
void cgraph_mark_needed_node(struct cgraph_node *); 
#line 274 "../.././gcc/cgraph.h"
void cgraph_mark_reachable_node(struct cgraph_node *); 
#line 275 "../.././gcc/cgraph.h"
unsigned char cgraph_inline_p(struct cgraph_edge *, const char **reason); 
#line 276 "../.././gcc/cgraph.h"
unsigned char cgraph_preserve_function_body_p( tree ); 
#line 277 "../.././gcc/cgraph.h"
void verify_cgraph(void ); 
#line 278 "../.././gcc/cgraph.h"
void verify_cgraph_node(struct cgraph_node *); 
#line 279 "../.././gcc/cgraph.h"
void cgraph_build_static_cdtor(char which,  tree body, int priority); 
#line 280 "../.././gcc/cgraph.h"
void cgraph_reset_static_var_maps(void ); 
#line 281 "../.././gcc/cgraph.h"
void init_cgraph(void ); 
#line 283 "../.././gcc/cgraph.h"
struct cgraph_node *cgraph_function_versioning(struct cgraph_node *,  varray_type ,  varray_type ); 
#line 286 "../.././gcc/cgraph.h"
unsigned char cgraph_remove_unreachable_nodes(unsigned char ,  FILE *); 
#line 287 "../.././gcc/cgraph.h"
int cgraph_postorder(struct cgraph_node **); 
#line 290 "../.././gcc/cgraph.h"
unsigned char cgraph_decide_inlining_incrementally(struct cgraph_node *, unsigned char ); 
#line 291 "../.././gcc/cgraph.h"
void cgraph_clone_inlined_nodes(struct cgraph_edge *, unsigned char , unsigned char ); 
#line 292 "../.././gcc/cgraph.h"
void cgraph_mark_inline_edge(struct cgraph_edge *, unsigned char ); 
#line 293 "../.././gcc/cgraph.h"
unsigned char cgraph_default_inline_p(struct cgraph_node *, const char **); 
# 32 "../.././gcc/tree-flow.h" 2
# 1 "../.././gcc/ipa-reference.h" 1
# 42 "../.././gcc/ipa-reference.h" 
struct ipa_reference_local_vars_info_d { bitmap statics_read;  bitmap statics_written; unsigned char calls_read_all; unsigned char calls_write_all; }; 
#line 50 "../.././gcc/ipa-reference.h"
struct ipa_reference_global_vars_info_d { bitmap statics_read;  bitmap statics_written;  bitmap statics_not_read;  bitmap statics_not_written; }; 
#line 63 "../.././gcc/ipa-reference.h"
typedef struct ipa_reference_local_vars_info_d *ipa_reference_local_vars_info_t; 
#line 64 "../.././gcc/ipa-reference.h"
typedef struct ipa_reference_global_vars_info_d *ipa_reference_global_vars_info_t; 
#line 70 "../.././gcc/ipa-reference.h"
struct ipa_reference_vars_info_d { ipa_reference_local_vars_info_t local;  ipa_reference_global_vars_info_t global; }; 
#line 72 "../.././gcc/ipa-reference.h"
typedef struct ipa_reference_vars_info_d *ipa_reference_vars_info_t; 
#line 75 "../.././gcc/ipa-reference.h"
 bitmap ipa_reference_get_read_local( tree fn); 
#line 76 "../.././gcc/ipa-reference.h"
 bitmap ipa_reference_get_written_local( tree fn); 
#line 77 "../.././gcc/ipa-reference.h"
 bitmap ipa_reference_get_read_global( tree fn); 
#line 78 "../.././gcc/ipa-reference.h"
 bitmap ipa_reference_get_written_global( tree fn); 
#line 79 "../.././gcc/ipa-reference.h"
 bitmap ipa_reference_get_not_read_global( tree fn); 
#line 80 "../.././gcc/ipa-reference.h"
 bitmap ipa_reference_get_not_written_global( tree fn); 
# 63 "../.././gcc/ipa-reference.h" 
# 33 "../.././gcc/tree-flow.h" 2
# 43 "../.././gcc/tree-flow.h" 
extern unsigned char in_ssa_p; 
#line 50 "../.././gcc/tree-flow.h"
typedef struct { htab_t htab; void **slot; void **limit; }htab_iterator; 
#line 95 "../.././gcc/tree-flow.h"
struct ptr_info_def {unsigned int pt_anything:1; unsigned int value_escapes_p:1; unsigned int is_dereferenced:1; unsigned int pt_global_mem:1; unsigned int pt_null:1;  bitmap pt_vars;  tree name_mem_tag; }; 
#line 101 "../.././gcc/tree-flow.h"
enum tree_ann_type {TREE_ANN_COMMON,VAR_ANN,STMT_ANN}; 
#line 114 "../.././gcc/tree-flow.h"
struct tree_ann_common_d {enum tree_ann_type type; void *aux;  tree value_handle; }; 
#line 138 "../.././gcc/tree-flow.h"
enum need_phi_state {NEED_PHI_STATE_UNKNOWN,NEED_PHI_STATE_NO,NEED_PHI_STATE_MAYBE}; 
# 69 "../.././gcc/tree-flow.h" 
# 160 "../.././gcc/tree-flow.h" 
enum mem_tag_kind {NOT_A_TAG,TYPE_TAG,NAME_TAG,STRUCT_FIELD}; 
#line 162 "../.././gcc/tree-flow.h"
struct subvar ; 
#line 163 "../.././gcc/tree-flow.h"
typedef struct subvar *subvar_t; 
#line 179 "../.././gcc/tree-flow.h"
struct subvar { tree var; unsigned long offset; unsigned long size;  subvar_t next; }; 
#line 251 "../.././gcc/tree-flow.h"
struct var_ann_d {struct tree_ann_common_d common; unsigned out_of_ssa_tag:1; unsigned root_var_processed:1;  __extension__ enum mem_tag_kind mem_tag_kind:2; unsigned is_alias_tag:1; unsigned used:1;  __extension__ enum need_phi_state need_phi_state:2; unsigned in_vuse_list:1; unsigned in_v_may_def_list:1;  tree type_mem_tag;  varray_type may_aliases; unsigned partition; unsigned root_index;  tree default_def;  tree current_def;  ipa_reference_vars_info_t reference_vars_info;  subvar_t subvars; }; 
#line 259 "../.././gcc/tree-flow.h"
typedef struct immediate_use_iterator_d { ssa_use_operand_t *imm_use;  ssa_use_operand_t *end_p;  ssa_use_operand_t iter_node; }imm_use_iterator; 
#line 322 "../.././gcc/tree-flow.h"
struct stmt_ann_d {struct tree_ann_common_d common; unsigned modified:1; unsigned makes_aliased_loads:1; unsigned makes_aliased_stores:1; unsigned has_volatile_ops:1; unsigned makes_clobbering_call:1;  basic_block bb; struct stmt_operands_d operands;  bitmap addresses_taken; unsigned int uid; void *histograms; }; 
#line 329 "../.././gcc/tree-flow.h"
union tree_ann_d {struct tree_ann_common_d common; struct var_ann_d decl; struct stmt_ann_d stmt; }; 
#line 331 "../.././gcc/tree-flow.h"
extern  VEC_tree_gc *modified_noreturn_calls; 
#line 333 "../.././gcc/tree-flow.h"
typedef union tree_ann_d *tree_ann_t; 
#line 334 "../.././gcc/tree-flow.h"
typedef struct var_ann_d *var_ann_t; 
#line 335 "../.././gcc/tree-flow.h"
typedef struct stmt_ann_d *stmt_ann_t; 
#line 337 "../.././gcc/tree-flow.h"
static __inline__  tree_ann_t tree_ann( tree ); 
#line 338 "../.././gcc/tree-flow.h"
static __inline__  tree_ann_t get_tree_ann( tree ); 
#line 339 "../.././gcc/tree-flow.h"
static __inline__  var_ann_t var_ann( tree ); 
#line 340 "../.././gcc/tree-flow.h"
static __inline__  var_ann_t get_var_ann( tree ); 
#line 341 "../.././gcc/tree-flow.h"
static __inline__  stmt_ann_t stmt_ann( tree ); 
#line 342 "../.././gcc/tree-flow.h"
static __inline__  stmt_ann_t get_stmt_ann( tree ); 
#line 343 "../.././gcc/tree-flow.h"
static __inline__ enum tree_ann_type ann_type( tree_ann_t ); 
#line 344 "../.././gcc/tree-flow.h"
static __inline__  basic_block bb_for_stmt( tree ); 
#line 345 "../.././gcc/tree-flow.h"
extern void set_bb_for_stmt( tree ,  basic_block ); 
#line 346 "../.././gcc/tree-flow.h"
static __inline__ unsigned char noreturn_call_p( tree ); 
#line 347 "../.././gcc/tree-flow.h"
static __inline__ void update_stmt( tree ); 
#line 348 "../.././gcc/tree-flow.h"
static __inline__ unsigned char stmt_modified_p( tree ); 
#line 349 "../.././gcc/tree-flow.h"
static __inline__  varray_type may_aliases( tree ); 
#line 350 "../.././gcc/tree-flow.h"
static __inline__ int get_lineno( tree ); 
#line 351 "../.././gcc/tree-flow.h"
static __inline__ const char *get_filename( tree ); 
#line 352 "../.././gcc/tree-flow.h"
static __inline__ unsigned char is_exec_stmt( tree ); 
#line 353 "../.././gcc/tree-flow.h"
static __inline__ unsigned char is_label_stmt( tree ); 
#line 354 "../.././gcc/tree-flow.h"
static __inline__  bitmap addresses_taken( tree ); 
#line 355 "../.././gcc/tree-flow.h"
static __inline__ void set_default_def( tree ,  tree ); 
#line 356 "../.././gcc/tree-flow.h"
static __inline__  tree default_def( tree ); 
#line 367 "../.././gcc/tree-flow.h"
struct edge_prediction {struct edge_prediction *next;  edge edge; enum br_predictor predictor; int probability; }; 
#line 370 "../.././gcc/tree-flow.h"
static __inline__  tree phi_nodes( basic_block ); 
#line 371 "../.././gcc/tree-flow.h"
static __inline__ void set_phi_nodes( basic_block ,  tree ); 
#line 381 "../.././gcc/tree-flow.h"
struct int_tree_map {unsigned int uid;  tree to; }; 
#line 383 "../.././gcc/tree-flow.h"
extern unsigned int int_tree_map_hash(const void *); 
#line 384 "../.././gcc/tree-flow.h"
extern int int_tree_map_eq(const void *, const void *); 
#line 389 "../.././gcc/tree-flow.h"
typedef struct { htab_iterator hti; }referenced_var_iterator; 
# 282 "../.././gcc/tree-flow.h" 
# 406 "../.././gcc/tree-flow.h" 
typedef struct {int i; }safe_referenced_var_iterator; 
#line 422 "../.././gcc/tree-flow.h"
extern  htab_t referenced_vars; 
#line 424 "../.././gcc/tree-flow.h"
extern  tree referenced_var_lookup(unsigned int ); 
#line 425 "../.././gcc/tree-flow.h"
extern  tree referenced_var_lookup_if_exists(unsigned int ); 
#line 430 "../.././gcc/tree-flow.h"
extern  VEC_tree_gc *ssa_names; 
#line 436 "../.././gcc/tree-flow.h"
extern  tree global_var; 
#line 440 "../.././gcc/tree-flow.h"
extern  bitmap call_clobbered_vars; 
#line 444 "../.././gcc/tree-flow.h"
extern  bitmap addressable_vars; 
#line 447 "../.././gcc/tree-flow.h"
extern unsigned char aliases_computed_p; 
# 422 "../.././gcc/tree-flow.h" 
# 467 "../.././gcc/tree-flow.h" 
typedef struct { tree_stmt_iterator tsi;  basic_block bb; }block_stmt_iterator; 
#line 469 "../.././gcc/tree-flow.h"
static __inline__  block_stmt_iterator bsi_start( basic_block ); 
#line 470 "../.././gcc/tree-flow.h"
static __inline__  block_stmt_iterator bsi_last( basic_block ); 
#line 471 "../.././gcc/tree-flow.h"
static __inline__  block_stmt_iterator bsi_after_labels( basic_block ); 
#line 472 "../.././gcc/tree-flow.h"
 block_stmt_iterator bsi_for_stmt( tree ); 
#line 473 "../.././gcc/tree-flow.h"
static __inline__ unsigned char bsi_end_p( block_stmt_iterator ); 
#line 474 "../.././gcc/tree-flow.h"
static __inline__ void bsi_next( block_stmt_iterator *); 
#line 475 "../.././gcc/tree-flow.h"
static __inline__ void bsi_prev( block_stmt_iterator *); 
#line 476 "../.././gcc/tree-flow.h"
static __inline__  tree bsi_stmt( block_stmt_iterator ); 
#line 477 "../.././gcc/tree-flow.h"
static __inline__  tree *bsi_stmt_ptr( block_stmt_iterator ); 
#line 479 "../.././gcc/tree-flow.h"
extern void bsi_remove( block_stmt_iterator *); 
#line 480 "../.././gcc/tree-flow.h"
extern void bsi_move_before( block_stmt_iterator *,  block_stmt_iterator *); 
#line 481 "../.././gcc/tree-flow.h"
extern void bsi_move_after( block_stmt_iterator *,  block_stmt_iterator *); 
#line 482 "../.././gcc/tree-flow.h"
extern void bsi_move_to_bb_end( block_stmt_iterator *,  basic_block ); 
#line 493 "../.././gcc/tree-flow.h"
enum bsi_iterator_update {BSI_NEW_STMT,BSI_SAME_STMT,BSI_CHAIN_START,BSI_CHAIN_END,BSI_CONTINUE_LINKING}; 
#line 496 "../.././gcc/tree-flow.h"
extern void bsi_insert_before( block_stmt_iterator *,  tree , enum bsi_iterator_update ); 
#line 498 "../.././gcc/tree-flow.h"
extern void bsi_insert_after( block_stmt_iterator *,  tree , enum bsi_iterator_update ); 
#line 500 "../.././gcc/tree-flow.h"
extern void bsi_replace(const  block_stmt_iterator *,  tree , unsigned char ); 
#line 510 "../.././gcc/tree-flow.h"
extern void delete_tree_cfg_annotations(void ); 
#line 511 "../.././gcc/tree-flow.h"
extern void disband_implicit_edges(void ); 
#line 512 "../.././gcc/tree-flow.h"
extern unsigned char stmt_ends_bb_p( tree ); 
#line 513 "../.././gcc/tree-flow.h"
extern unsigned char is_ctrl_stmt( tree ); 
#line 514 "../.././gcc/tree-flow.h"
extern unsigned char is_ctrl_altering_stmt( tree ); 
#line 515 "../.././gcc/tree-flow.h"
extern unsigned char computed_goto_p( tree ); 
#line 516 "../.././gcc/tree-flow.h"
extern unsigned char simple_goto_p( tree ); 
#line 517 "../.././gcc/tree-flow.h"
extern  basic_block single_noncomplex_succ( basic_block bb); 
#line 518 "../.././gcc/tree-flow.h"
extern void tree_dump_bb( basic_block ,  FILE *, int ); 
#line 519 "../.././gcc/tree-flow.h"
extern void debug_tree_bb( basic_block ); 
#line 520 "../.././gcc/tree-flow.h"
extern  basic_block debug_tree_bb_n(int ); 
#line 521 "../.././gcc/tree-flow.h"
extern void dump_tree_cfg( FILE *, int ); 
#line 522 "../.././gcc/tree-flow.h"
extern void debug_tree_cfg(int ); 
#line 523 "../.././gcc/tree-flow.h"
extern void dump_cfg_stats( FILE *); 
#line 524 "../.././gcc/tree-flow.h"
extern void debug_cfg_stats(void ); 
#line 525 "../.././gcc/tree-flow.h"
extern void debug_loop_ir(void ); 
#line 526 "../.././gcc/tree-flow.h"
extern void print_loop_ir( FILE *); 
#line 527 "../.././gcc/tree-flow.h"
extern void cleanup_dead_labels(void ); 
#line 528 "../.././gcc/tree-flow.h"
extern void group_case_labels(void ); 
#line 529 "../.././gcc/tree-flow.h"
extern  tree first_stmt( basic_block ); 
#line 530 "../.././gcc/tree-flow.h"
extern  tree last_stmt( basic_block ); 
#line 531 "../.././gcc/tree-flow.h"
extern  tree *last_stmt_ptr( basic_block ); 
#line 532 "../.././gcc/tree-flow.h"
extern  tree last_and_only_stmt( basic_block ); 
#line 533 "../.././gcc/tree-flow.h"
extern  edge find_taken_edge( basic_block ,  tree ); 
#line 534 "../.././gcc/tree-flow.h"
extern  basic_block label_to_block_fn(struct function *,  tree ); 
#line 536 "../.././gcc/tree-flow.h"
extern void bsi_insert_on_edge( edge ,  tree ); 
#line 537 "../.././gcc/tree-flow.h"
extern  basic_block bsi_insert_on_edge_immediate( edge ,  tree ); 
#line 538 "../.././gcc/tree-flow.h"
extern void bsi_commit_one_edge_insert( edge ,  basic_block *); 
#line 539 "../.././gcc/tree-flow.h"
extern void bsi_commit_edge_inserts(void ); 
#line 540 "../.././gcc/tree-flow.h"
extern void notice_special_calls( tree ); 
#line 541 "../.././gcc/tree-flow.h"
extern void clear_special_calls(void ); 
#line 542 "../.././gcc/tree-flow.h"
extern void verify_stmts(void ); 
#line 543 "../.././gcc/tree-flow.h"
extern  tree tree_block_label( basic_block ); 
#line 544 "../.././gcc/tree-flow.h"
extern void extract_true_false_edges_from_block( basic_block ,  edge *,  edge *); 
#line 546 "../.././gcc/tree-flow.h"
extern unsigned char tree_duplicate_sese_region( edge ,  edge ,  basic_block *, unsigned ,  basic_block *); 
#line 547 "../.././gcc/tree-flow.h"
extern void add_phi_args_after_copy_bb( basic_block ); 
#line 548 "../.././gcc/tree-flow.h"
extern void add_phi_args_after_copy( basic_block *, unsigned ); 
#line 549 "../.././gcc/tree-flow.h"
extern unsigned char tree_purge_dead_eh_edges( basic_block ); 
#line 550 "../.././gcc/tree-flow.h"
extern unsigned char tree_purge_all_dead_eh_edges( bitmap ); 
#line 551 "../.././gcc/tree-flow.h"
extern  tree gimplify_val( block_stmt_iterator *,  tree ,  tree ); 
#line 553 "../.././gcc/tree-flow.h"
extern  tree gimplify_build1( block_stmt_iterator *, enum tree_code ,  tree ,  tree ); 
#line 555 "../.././gcc/tree-flow.h"
extern  tree gimplify_build2( block_stmt_iterator *, enum tree_code ,  tree ,  tree ,  tree ); 
#line 557 "../.././gcc/tree-flow.h"
extern  tree gimplify_build3( block_stmt_iterator *, enum tree_code ,  tree ,  tree ,  tree ,  tree ); 
#line 558 "../.././gcc/tree-flow.h"
extern void init_empty_tree_cfg(void ); 
#line 559 "../.././gcc/tree-flow.h"
extern void fold_cond_expr_cond(void ); 
#line 560 "../.././gcc/tree-flow.h"
extern void replace_uses_by( tree ,  tree ); 
#line 561 "../.././gcc/tree-flow.h"
extern void start_recording_case_labels(void ); 
#line 562 "../.././gcc/tree-flow.h"
extern void end_recording_case_labels(void ); 
#line 565 "../.././gcc/tree-flow.h"
extern unsigned char cleanup_tree_cfg(void ); 
#line 566 "../.././gcc/tree-flow.h"
extern void cleanup_tree_cfg_loop(void ); 
#line 569 "../.././gcc/tree-flow.h"
extern void dump_generic_bb( FILE *,  basic_block , int , int ); 
#line 572 "../.././gcc/tree-flow.h"
extern  var_ann_t create_var_ann( tree ); 
#line 573 "../.././gcc/tree-flow.h"
extern  stmt_ann_t create_stmt_ann( tree ); 
#line 574 "../.././gcc/tree-flow.h"
extern  tree_ann_t create_tree_ann( tree ); 
#line 575 "../.././gcc/tree-flow.h"
extern void dump_dfa_stats( FILE *); 
#line 576 "../.././gcc/tree-flow.h"
extern void debug_dfa_stats(void ); 
#line 577 "../.././gcc/tree-flow.h"
extern void debug_referenced_vars(void ); 
#line 578 "../.././gcc/tree-flow.h"
extern void dump_referenced_vars( FILE *); 
#line 579 "../.././gcc/tree-flow.h"
extern void dump_variable( FILE *,  tree ); 
#line 580 "../.././gcc/tree-flow.h"
extern void debug_variable( tree ); 
#line 581 "../.././gcc/tree-flow.h"
extern void dump_subvars_for( FILE *,  tree ); 
#line 582 "../.././gcc/tree-flow.h"
extern void debug_subvars_for( tree ); 
#line 583 "../.././gcc/tree-flow.h"
extern  tree get_virtual_var( tree ); 
#line 584 "../.././gcc/tree-flow.h"
extern void add_referenced_tmp_var( tree ); 
#line 585 "../.././gcc/tree-flow.h"
extern void mark_new_vars_to_rename( tree ); 
#line 586 "../.././gcc/tree-flow.h"
extern void find_new_referenced_vars( tree *); 
#line 588 "../.././gcc/tree-flow.h"
extern  tree make_rename_temp( tree , const char *); 
#line 591 "../.././gcc/tree-flow.h"
extern void reserve_phi_args_for_new_edge( basic_block ); 
#line 592 "../.././gcc/tree-flow.h"
extern  tree create_phi_node( tree ,  basic_block ); 
#line 593 "../.././gcc/tree-flow.h"
extern void add_phi_arg( tree ,  tree ,  edge ); 
#line 594 "../.././gcc/tree-flow.h"
extern void remove_phi_args( edge ); 
#line 595 "../.././gcc/tree-flow.h"
extern void remove_phi_node( tree ,  tree ); 
#line 596 "../.././gcc/tree-flow.h"
extern  tree phi_reverse( tree ); 
#line 599 "../.././gcc/tree-flow.h"
extern void record_vars( tree ); 
#line 600 "../.././gcc/tree-flow.h"
extern unsigned char block_may_fallthru( tree block); 
#line 603 "../.././gcc/tree-flow.h"
extern void dump_may_aliases_for( FILE *,  tree ); 
#line 604 "../.././gcc/tree-flow.h"
extern void debug_may_aliases_for( tree ); 
#line 605 "../.././gcc/tree-flow.h"
extern void dump_alias_info( FILE *); 
#line 606 "../.././gcc/tree-flow.h"
extern void debug_alias_info(void ); 
#line 607 "../.././gcc/tree-flow.h"
extern void dump_points_to_info( FILE *); 
#line 608 "../.././gcc/tree-flow.h"
extern void debug_points_to_info(void ); 
#line 609 "../.././gcc/tree-flow.h"
extern void dump_points_to_info_for( FILE *,  tree ); 
#line 610 "../.././gcc/tree-flow.h"
extern void debug_points_to_info_for( tree ); 
#line 611 "../.././gcc/tree-flow.h"
extern unsigned char may_be_aliased( tree ); 
#line 612 "../.././gcc/tree-flow.h"
extern unsigned char is_aliased_with( tree ,  tree ); 
#line 613 "../.././gcc/tree-flow.h"
extern struct ptr_info_def *get_ptr_info( tree ); 
#line 614 "../.././gcc/tree-flow.h"
extern void add_type_alias( tree ,  tree ); 
#line 615 "../.././gcc/tree-flow.h"
extern void new_type_alias( tree ,  tree ); 
#line 616 "../.././gcc/tree-flow.h"
extern void count_uses_and_derefs( tree ,  tree , unsigned *, unsigned *, unsigned char *); 
#line 617 "../.././gcc/tree-flow.h"
static __inline__  subvar_t get_subvars_for_var( tree ); 
#line 618 "../.././gcc/tree-flow.h"
static __inline__  tree get_subvar_at( tree , unsigned long ); 
#line 619 "../.././gcc/tree-flow.h"
static __inline__ unsigned char ref_contains_array_ref( tree ); 
#line 620 "../.././gcc/tree-flow.h"
static __inline__ unsigned char array_ref_contains_indirect_ref( tree ); 
#line 622 "../.././gcc/tree-flow.h"
extern  tree okay_component_ref_for_subvars( tree , unsigned long *, unsigned long *); 
#line 623 "../.././gcc/tree-flow.h"
static __inline__ unsigned char var_can_have_subvars( tree ); 
#line 626 "../.././gcc/tree-flow.h"
static __inline__ unsigned char overlap_subvar(unsigned long , unsigned long ,  subvar_t , unsigned char *); 
#line 630 "../.././gcc/tree-flow.h"
typedef unsigned char (*walk_use_def_chains_fn)( tree ,  tree , void *); 
#line 634 "../.././gcc/tree-flow.h"
extern void init_tree_ssa(void ); 
#line 635 "../.././gcc/tree-flow.h"
extern  edge ssa_redirect_edge( edge ,  basic_block ); 
#line 636 "../.././gcc/tree-flow.h"
extern void flush_pending_stmts( edge ); 
#line 637 "../.././gcc/tree-flow.h"
extern unsigned char tree_ssa_useless_type_conversion( tree ); 
#line 638 "../.././gcc/tree-flow.h"
extern unsigned char tree_ssa_useless_type_conversion_1( tree ,  tree ); 
#line 639 "../.././gcc/tree-flow.h"
extern void verify_ssa(unsigned char ); 
#line 640 "../.././gcc/tree-flow.h"
extern void delete_tree_ssa(void ); 
#line 641 "../.././gcc/tree-flow.h"
extern void register_new_def( tree ,  VEC_tree_heap **); 
#line 642 "../.././gcc/tree-flow.h"
extern void walk_use_def_chains( tree ,  walk_use_def_chains_fn , void *, unsigned char ); 
#line 643 "../.././gcc/tree-flow.h"
extern unsigned char stmt_references_memory_p( tree ); 
#line 646 "../.././gcc/tree-flow.h"
void update_ssa(unsigned ); 
#line 647 "../.././gcc/tree-flow.h"
void delete_update_ssa(void ); 
#line 648 "../.././gcc/tree-flow.h"
void register_new_name_mapping( tree ,  tree ); 
#line 649 "../.././gcc/tree-flow.h"
 tree create_new_def_for( tree ,  tree ,  def_operand_p ); 
#line 650 "../.././gcc/tree-flow.h"
unsigned char need_ssa_update_p(void ); 
#line 651 "../.././gcc/tree-flow.h"
unsigned char name_registered_for_update_p( tree ); 
#line 652 "../.././gcc/tree-flow.h"
 bitmap ssa_names_to_replace(void ); 
#line 653 "../.././gcc/tree-flow.h"
void release_ssa_name_after_update_ssa( tree name); 
#line 654 "../.././gcc/tree-flow.h"
void compute_global_livein( bitmap ,  bitmap ); 
#line 655 "../.././gcc/tree-flow.h"
 tree duplicate_ssa_name( tree ,  tree ); 
#line 656 "../.././gcc/tree-flow.h"
void mark_sym_for_renaming( tree ); 
#line 657 "../.././gcc/tree-flow.h"
void mark_set_for_renaming( bitmap ); 
#line 658 "../.././gcc/tree-flow.h"
 tree get_current_def( tree ); 
#line 659 "../.././gcc/tree-flow.h"
void set_current_def( tree ,  tree ); 
#line 662 "../.././gcc/tree-flow.h"
unsigned char fold_stmt( tree *); 
#line 663 "../.././gcc/tree-flow.h"
unsigned char fold_stmt_inplace( tree ); 
#line 664 "../.././gcc/tree-flow.h"
 tree widen_bitfield( tree ,  tree ,  tree ); 
#line 667 "../.././gcc/tree-flow.h"
 tree vrp_evaluate_conditional( tree , unsigned char ); 
#line 668 "../.././gcc/tree-flow.h"
void simplify_stmt_using_ranges( tree ); 
#line 671 "../.././gcc/tree-flow.h"
extern void dump_dominator_optimization_stats( FILE *); 
#line 672 "../.././gcc/tree-flow.h"
extern void debug_dominator_optimization_stats(void ); 
#line 673 "../.././gcc/tree-flow.h"
int loop_depth_of_name( tree ); 
#line 676 "../.././gcc/tree-flow.h"
extern void merge_alias_info( tree ,  tree ); 
#line 677 "../.././gcc/tree-flow.h"
extern void propagate_value( use_operand_p ,  tree ); 
#line 678 "../.././gcc/tree-flow.h"
extern void propagate_tree_value( tree *,  tree ); 
#line 679 "../.././gcc/tree-flow.h"
extern void replace_exp( use_operand_p ,  tree ); 
#line 680 "../.././gcc/tree-flow.h"
extern unsigned char may_propagate_copy( tree ,  tree ); 
#line 681 "../.././gcc/tree-flow.h"
extern unsigned char may_propagate_copy_into_asm( tree ); 
# 510 "../.././gcc/tree-flow.h" 
# 713 "../.././gcc/tree-flow.h" 
struct tree_niter_desc { tree assumptions;  tree may_be_zero;  tree niter;  tree additional_info; }; 
#line 716 "../.././gcc/tree-flow.h"
void vectorize_loops(struct loops *); 
#line 719 "../.././gcc/tree-flow.h"
unsigned char empty_block_p( basic_block ); 
#line 723 "../.././gcc/tree-flow.h"
void tree_ssa_lim(struct loops *); 
#line 724 "../.././gcc/tree-flow.h"
void tree_ssa_unswitch_loops(struct loops *); 
#line 725 "../.././gcc/tree-flow.h"
void canonicalize_induction_variables(struct loops *); 
#line 726 "../.././gcc/tree-flow.h"
void tree_unroll_loops_completely(struct loops *, unsigned char ); 
#line 727 "../.././gcc/tree-flow.h"
void remove_empty_loops(struct loops *); 
#line 728 "../.././gcc/tree-flow.h"
void tree_ssa_iv_optimize(struct loops *); 
#line 731 "../.././gcc/tree-flow.h"
unsigned char number_of_iterations_exit(struct loop *,  edge , struct tree_niter_desc *niter, unsigned char ); 
#line 732 "../.././gcc/tree-flow.h"
 tree find_loop_niter(struct loop *,  edge *); 
#line 733 "../.././gcc/tree-flow.h"
 tree loop_niter_by_eval(struct loop *,  edge ); 
#line 734 "../.././gcc/tree-flow.h"
 tree find_loop_niter_by_eval(struct loop *,  edge *); 
#line 735 "../.././gcc/tree-flow.h"
void estimate_numbers_of_iterations(struct loops *); 
#line 737 "../.././gcc/tree-flow.h"
unsigned char scev_probably_wraps_p( tree ,  tree ,  tree ,  tree , struct loop *, unsigned char *, unsigned char *); 
#line 738 "../.././gcc/tree-flow.h"
 tree convert_step(struct loop *,  tree ,  tree ,  tree ,  tree ); 
#line 739 "../.././gcc/tree-flow.h"
void free_numbers_of_iterations_estimates(struct loops *); 
#line 740 "../.././gcc/tree-flow.h"
void free_numbers_of_iterations_estimates_loop(struct loop *); 
#line 741 "../.././gcc/tree-flow.h"
void rewrite_into_loop_closed_ssa( bitmap , unsigned ); 
#line 742 "../.././gcc/tree-flow.h"
void verify_loop_closed_ssa(void ); 
#line 743 "../.././gcc/tree-flow.h"
void loop_commit_inserts(void ); 
#line 744 "../.././gcc/tree-flow.h"
unsigned char for_each_index( tree *, unsigned char (*)( tree ,  tree *, void *), void *); 
#line 746 "../.././gcc/tree-flow.h"
void create_iv( tree ,  tree ,  tree , struct loop *,  block_stmt_iterator *, unsigned char ,  tree *,  tree *); 
#line 747 "../.././gcc/tree-flow.h"
void split_loop_exit_edge( edge ); 
#line 748 "../.././gcc/tree-flow.h"
void compute_phi_arg_on_exit( edge ,  tree ,  tree ); 
#line 749 "../.././gcc/tree-flow.h"
unsigned force_expr_to_var_cost( tree ); 
#line 750 "../.././gcc/tree-flow.h"
 basic_block bsi_insert_on_edge_immediate_loop( edge ,  tree ); 
#line 752 "../.././gcc/tree-flow.h"
void standard_iv_increment_position(struct loop *,  block_stmt_iterator *, unsigned char *); 
#line 753 "../.././gcc/tree-flow.h"
 basic_block ip_end_pos(struct loop *); 
#line 754 "../.././gcc/tree-flow.h"
 basic_block ip_normal_pos(struct loop *); 
#line 758 "../.././gcc/tree-flow.h"
unsigned char tree_duplicate_loop_to_header_edge(struct loop *,  edge , struct loops *, unsigned int ,  sbitmap ,  edge ,  edge *, unsigned int *, int ); 
#line 760 "../.././gcc/tree-flow.h"
struct loop *tree_ssa_loop_version(struct loops *, struct loop *,  tree ,  basic_block *); 
#line 761 "../.././gcc/tree-flow.h"
 tree expand_simple_operations( tree ); 
#line 762 "../.././gcc/tree-flow.h"
void substitute_in_loop_info(struct loop *,  tree ,  tree ); 
#line 763 "../.././gcc/tree-flow.h"
 edge single_dom_exit(struct loop *); 
#line 764 "../.././gcc/tree-flow.h"
unsigned char contains_abnormal_ssa_name_p( tree ); 
#line 775 "../.././gcc/tree-flow.h"
enum move_pos {MOVE_IMPOSSIBLE,MOVE_PRESERVE_EXECUTION,MOVE_POSSIBLE}; 
#line 776 "../.././gcc/tree-flow.h"
extern enum move_pos movement_possibility( tree ); 
#line 779 "../.././gcc/tree-flow.h"
static __inline__ unsigned char is_call_clobbered( tree ); 
#line 780 "../.././gcc/tree-flow.h"
static __inline__ void mark_call_clobbered( tree ); 
#line 781 "../.././gcc/tree-flow.h"
static __inline__ void set_is_used( tree ); 
#line 782 "../.././gcc/tree-flow.h"
static __inline__ unsigned char unmodifiable_var_p( tree ); 
#line 785 "../.././gcc/tree-flow.h"
extern void make_eh_edges( tree ); 
#line 786 "../.././gcc/tree-flow.h"
extern unsigned char tree_could_trap_p( tree ); 
#line 787 "../.././gcc/tree-flow.h"
extern unsigned char tree_could_throw_p( tree ); 
#line 788 "../.././gcc/tree-flow.h"
extern unsigned char tree_can_throw_internal( tree ); 
#line 789 "../.././gcc/tree-flow.h"
extern unsigned char tree_can_throw_external( tree ); 
#line 790 "../.././gcc/tree-flow.h"
extern int lookup_stmt_eh_region( tree ); 
#line 791 "../.././gcc/tree-flow.h"
extern void add_stmt_to_eh_region( tree , int ); 
#line 792 "../.././gcc/tree-flow.h"
extern unsigned char remove_stmt_from_eh_region( tree ); 
#line 793 "../.././gcc/tree-flow.h"
extern unsigned char maybe_clean_or_replace_eh_stmt( tree ,  tree ); 
#line 796 "../.././gcc/tree-flow.h"
void add_to_value( tree ,  tree ); 
#line 797 "../.././gcc/tree-flow.h"
void debug_value_expressions( tree ); 
#line 798 "../.././gcc/tree-flow.h"
void print_value_expressions( FILE *,  tree ); 
#line 802 "../.././gcc/tree-flow.h"
unsigned char expressions_equal_p( tree ,  tree ); 
#line 803 "../.././gcc/tree-flow.h"
 tree get_value_handle( tree ); 
#line 804 "../.././gcc/tree-flow.h"
 hashval_t vn_compute( tree ,  hashval_t ,  tree ); 
#line 805 "../.././gcc/tree-flow.h"
 tree vn_lookup_or_add( tree ,  tree ); 
#line 806 "../.././gcc/tree-flow.h"
void vn_add( tree ,  tree ,  tree ); 
#line 807 "../.././gcc/tree-flow.h"
 tree vn_lookup( tree ,  tree ); 
#line 808 "../.././gcc/tree-flow.h"
void vn_init(void ); 
#line 809 "../.././gcc/tree-flow.h"
void vn_delete(void ); 
#line 812 "../.././gcc/tree-flow.h"
unsigned char is_hidden_global_store( tree ); 
#line 815 "../.././gcc/tree-flow.h"
void insert_edge_copies( tree ,  basic_block ); 
#line 816 "../.././gcc/tree-flow.h"
void sra_insert_before( block_stmt_iterator *,  tree ); 
#line 817 "../.././gcc/tree-flow.h"
void sra_insert_after( block_stmt_iterator *,  tree ); 
#line 818 "../.././gcc/tree-flow.h"
void sra_init_cache(void ); 
#line 819 "../.././gcc/tree-flow.h"
unsigned char sra_type_can_be_decomposed_p( tree ); 
#line 822 "../.././gcc/tree-flow.h"
extern void linear_transform_loops(struct loops *); 
#line 825 "../.././gcc/tree-flow.h"
unsigned char expr_invariant_in_loop_p(struct loop *,  tree ); 
#line 826 "../.././gcc/tree-flow.h"
unsigned char multiplier_allowed_in_address_p(long ); 
#line 827 "../.././gcc/tree-flow.h"
unsigned multiply_by_cost(long , enum machine_mode ); 
#line 830 "../.././gcc/tree-flow.h"
extern unsigned char thread_through_all_blocks( bitmap ); 
#line 833 "../.././gcc/tree-flow.h"
 tree force_gimple_operand( tree ,  tree *, unsigned char ,  tree ); 
#line 834 "../.././gcc/tree-flow.h"
 tree force_gimple_operand_bsi( block_stmt_iterator *,  tree , unsigned char ,  tree ); 
#line 837 "../.././gcc/tree-flow.h"
unsigned char find_what_p_points_to( tree ); 
#line 866 "../.././gcc/tree-flow.h"
struct affine_tree_combination { tree type; unsigned long mask; unsigned long offset; unsigned n;  tree elts[8]; unsigned long coefs[8];  tree rest; }; 
#line 873 "../.././gcc/tree-flow.h"
struct mem_address { tree symbol,base,index,step,offset; }; 
#line 876 "../.././gcc/tree-flow.h"
 tree create_mem_ref( block_stmt_iterator *,  tree , struct affine_tree_combination *); 
#line 877 "../.././gcc/tree-flow.h"
 rtx addr_for_mem_ref(struct mem_address *, unsigned char ); 
#line 878 "../.././gcc/tree-flow.h"
void get_address_description( tree , struct mem_address *); 
#line 879 "../.././gcc/tree-flow.h"
 tree maybe_fold_tmr( tree ); 
#line 889 "../.././gcc/tree-flow.h"
struct fieldoff { tree field; long offset; }; 
#line 890 "../.././gcc/tree-flow.h"
typedef struct fieldoff fieldoff_s; 
#line 892 "../.././gcc/tree-flow.h"
typedef struct VEC_fieldoff_s_base {unsigned num; unsigned alloc;  fieldoff_s vec[1]; }VEC_fieldoff_s_base; 
#line 892 "../.././gcc/tree-flow.h"
typedef struct VEC_fieldoff_s_none { VEC_fieldoff_s_base base; }VEC_fieldoff_s_none; 
#line 892 "../.././gcc/tree-flow.h"
static __inline__ unsigned VEC_fieldoff_s_base_length(const  VEC_fieldoff_s_base *vec_)  {

#line 892 "../.././gcc/tree-flow.h"
return (vec_?(vec_->num):0); }
 
#line 892 "../.././gcc/tree-flow.h"
static __inline__  fieldoff_s *VEC_fieldoff_s_base_last( VEC_fieldoff_s_base *vec_)  {

#line 892 "../.././gcc/tree-flow.h"
((void )(vec_ && (vec_->num))); 
#line 892 "../.././gcc/tree-flow.h"
return (&(vec_->vec)[(vec_->num) - 1]); }
 
#line 892 "../.././gcc/tree-flow.h"
static __inline__  fieldoff_s *VEC_fieldoff_s_base_index( VEC_fieldoff_s_base *vec_, unsigned ix_)  {

#line 892 "../.././gcc/tree-flow.h"
((void )(vec_ && ix_ < (vec_->num))); 
#line 892 "../.././gcc/tree-flow.h"
return (&(vec_->vec)[ix_]); }
 
#line 892 "../.././gcc/tree-flow.h"
static __inline__ int VEC_fieldoff_s_base_iterate( VEC_fieldoff_s_base *vec_, unsigned ix_,  fieldoff_s **ptr)  {

#line 892 "../.././gcc/tree-flow.h"
if (vec_ && ix_ < (vec_->num)){
{ 
#line 892 "../.././gcc/tree-flow.h"
(*ptr) = (&(vec_->vec)[ix_]); 
#line 892 "../.././gcc/tree-flow.h"
return 1; } }else{
{ 
#line 892 "../.././gcc/tree-flow.h"
(*ptr) = 0; 
#line 892 "../.././gcc/tree-flow.h"
return 0; } }}
 
#line 892 "../.././gcc/tree-flow.h"
static __inline__  size_t VEC_fieldoff_s_base_embedded_size(int alloc_)  {

#line 892 "../.././gcc/tree-flow.h"
return __builtin_offsetof ( VEC_fieldoff_s_base  , vec) + alloc_ * sizeof ( fieldoff_s ); }
 
#line 892 "../.././gcc/tree-flow.h"
static __inline__ void VEC_fieldoff_s_base_embedded_init( VEC_fieldoff_s_base *vec_, int alloc_)  {

#line 892 "../.././gcc/tree-flow.h"
(vec_->num) = 0; 
#line 892 "../.././gcc/tree-flow.h"
(vec_->alloc) = alloc_; }
 
#line 892 "../.././gcc/tree-flow.h"
static __inline__ int VEC_fieldoff_s_base_space( VEC_fieldoff_s_base *vec_, int alloc_)  {

#line 892 "../.././gcc/tree-flow.h"
((void )(alloc_ >= 0)); 
#line 892 "../.././gcc/tree-flow.h"
return (vec_?(vec_->alloc) - (vec_->num) >= ((unsigned )alloc_):(!alloc_)); }
 
#line 892 "../.././gcc/tree-flow.h"
static __inline__  fieldoff_s *VEC_fieldoff_s_base_quick_push( VEC_fieldoff_s_base *vec_, const  fieldoff_s *obj_)  {

#line 892 "../.././gcc/tree-flow.h"

#line 892 "../.././gcc/tree-flow.h"
 fieldoff_s *slot_;
#line 892 "../.././gcc/tree-flow.h"
((void )((vec_->num) < (vec_->alloc))); 
#line 892 "../.././gcc/tree-flow.h"
slot_ = (&(vec_->vec)[(vec_->num)++]); 
#line 892 "../.././gcc/tree-flow.h"
if (obj_){
(*slot_) = (*obj_); }
#line 892 "../.././gcc/tree-flow.h"
return slot_; }
 
#line 892 "../.././gcc/tree-flow.h"
static __inline__ void VEC_fieldoff_s_base_pop( VEC_fieldoff_s_base *vec_)  {

#line 892 "../.././gcc/tree-flow.h"
((void )((vec_->num))); 
#line 892 "../.././gcc/tree-flow.h"
(--(vec_->num)); }
 
#line 892 "../.././gcc/tree-flow.h"
static __inline__ void VEC_fieldoff_s_base_truncate( VEC_fieldoff_s_base *vec_, unsigned size_)  {

#line 892 "../.././gcc/tree-flow.h"
((void )((vec_?(vec_->num) >= size_:(!size_)))); 
#line 892 "../.././gcc/tree-flow.h"
if (vec_){
(vec_->num) = size_; }}
 
#line 892 "../.././gcc/tree-flow.h"
static __inline__  fieldoff_s *VEC_fieldoff_s_base_replace( VEC_fieldoff_s_base *vec_, unsigned ix_, const  fieldoff_s *obj_)  {

#line 892 "../.././gcc/tree-flow.h"

#line 892 "../.././gcc/tree-flow.h"
 fieldoff_s *slot_;
#line 892 "../.././gcc/tree-flow.h"
((void )(ix_ < (vec_->num))); 
#line 892 "../.././gcc/tree-flow.h"
slot_ = (&(vec_->vec)[ix_]); 
#line 892 "../.././gcc/tree-flow.h"
if (obj_){
(*slot_) = (*obj_); }
#line 892 "../.././gcc/tree-flow.h"
return slot_; }
 
#line 892 "../.././gcc/tree-flow.h"
static __inline__  fieldoff_s *VEC_fieldoff_s_base_quick_insert( VEC_fieldoff_s_base *vec_, unsigned ix_, const  fieldoff_s *obj_)  {

#line 892 "../.././gcc/tree-flow.h"

#line 892 "../.././gcc/tree-flow.h"
 fieldoff_s *slot_;
#line 892 "../.././gcc/tree-flow.h"
((void )((vec_->num) < (vec_->alloc))); 
#line 892 "../.././gcc/tree-flow.h"
((void )(ix_ <= (vec_->num))); 
#line 892 "../.././gcc/tree-flow.h"
slot_ = (&(vec_->vec)[ix_]); 
#line 892 "../.././gcc/tree-flow.h"
memmove(slot_ + 1, slot_, ((vec_->num)++ - ix_) * sizeof ( fieldoff_s )); 
#line 892 "../.././gcc/tree-flow.h"
if (obj_){
(*slot_) = (*obj_); }
#line 892 "../.././gcc/tree-flow.h"
return slot_; }
 
#line 892 "../.././gcc/tree-flow.h"
static __inline__ void VEC_fieldoff_s_base_ordered_remove( VEC_fieldoff_s_base *vec_, unsigned ix_)  {

#line 892 "../.././gcc/tree-flow.h"

#line 892 "../.././gcc/tree-flow.h"
 fieldoff_s *slot_;
#line 892 "../.././gcc/tree-flow.h"
((void )(ix_ < (vec_->num))); 
#line 892 "../.././gcc/tree-flow.h"
slot_ = (&(vec_->vec)[ix_]); 
#line 892 "../.././gcc/tree-flow.h"
memmove(slot_, slot_ + 1, ((--(vec_->num)) - ix_) * sizeof ( fieldoff_s )); }
 
#line 892 "../.././gcc/tree-flow.h"
static __inline__ void VEC_fieldoff_s_base_unordered_remove( VEC_fieldoff_s_base *vec_, unsigned ix_)  {

#line 892 "../.././gcc/tree-flow.h"
((void )(ix_ < (vec_->num))); 
#line 892 "../.././gcc/tree-flow.h"
(vec_->vec)[ix_] = (vec_->vec)[(--(vec_->num))]; }
 
#line 892 "../.././gcc/tree-flow.h"
static __inline__  fieldoff_s *VEC_fieldoff_s_base_address( VEC_fieldoff_s_base *vec_)  {

#line 892 "../.././gcc/tree-flow.h"
return (vec_?(vec_->vec):0); }
 
#line 892 "../.././gcc/tree-flow.h"
static __inline__ unsigned VEC_fieldoff_s_base_lower_bound( VEC_fieldoff_s_base *vec_, const  fieldoff_s *obj_, unsigned char (*lessthan_)(const  fieldoff_s *, const  fieldoff_s *))  {

#line 892 "../.././gcc/tree-flow.h"

#line 892 "../.././gcc/tree-flow.h"
unsigned int len_ = VEC_fieldoff_s_base_length(vec_);
#line 892 "../.././gcc/tree-flow.h"

#line 892 "../.././gcc/tree-flow.h"
unsigned int half_,middle_;
#line 892 "../.././gcc/tree-flow.h"

#line 892 "../.././gcc/tree-flow.h"
unsigned int first_ = 0;
#line 892 "../.././gcc/tree-flow.h"
while(len_ > 0) { { 
#line 892 "../.././gcc/tree-flow.h"

#line 892 "../.././gcc/tree-flow.h"
 fieldoff_s *middle_elem_;
#line 892 "../.././gcc/tree-flow.h"
half_ = len_ >> 1; 
#line 892 "../.././gcc/tree-flow.h"
middle_ = first_; 
#line 892 "../.././gcc/tree-flow.h"
middle_ += half_; 
#line 892 "../.././gcc/tree-flow.h"
middle_elem_ = VEC_fieldoff_s_base_index(vec_, middle_); 
#line 892 "../.././gcc/tree-flow.h"
if (lessthan_(middle_elem_, obj_)){
{ 
#line 892 "../.././gcc/tree-flow.h"
first_ = middle_; 
#line 892 "../.././gcc/tree-flow.h"
(++first_); 
#line 892 "../.././gcc/tree-flow.h"
len_ = len_ - half_ - 1; } }else{
len_ = half_; }} } 
#line 892 "../.././gcc/tree-flow.h"
return first_; }
 
#line 892 "../.././gcc/tree-flow.h"
struct vec_swallow_trailing_semi ; 
#line 893 "../.././gcc/tree-flow.h"
typedef struct VEC_fieldoff_s_heap { VEC_fieldoff_s_base base; }VEC_fieldoff_s_heap; 
#line 893 "../.././gcc/tree-flow.h"
static __inline__  VEC_fieldoff_s_heap *VEC_fieldoff_s_heap_alloc(int alloc_)  {

#line 893 "../.././gcc/tree-flow.h"
return (( VEC_fieldoff_s_heap *)vec_heap_o_reserve((((void *)0)), (-alloc_), __builtin_offsetof ( VEC_fieldoff_s_heap  , base.vec), sizeof ( fieldoff_s ))); }
 
#line 893 "../.././gcc/tree-flow.h"
static __inline__  VEC_fieldoff_s_heap *VEC_fieldoff_s_heap_copy( VEC_fieldoff_s_base *vec_)  {

#line 893 "../.././gcc/tree-flow.h"

#line 893 "../.././gcc/tree-flow.h"
 size_t len_ = (vec_?(vec_->num):0);
#line 893 "../.././gcc/tree-flow.h"

#line 893 "../.././gcc/tree-flow.h"
 VEC_fieldoff_s_heap *new_vec_ = (((void *)0));
#line 893 "../.././gcc/tree-flow.h"
if (len_){
{ 
#line 893 "../.././gcc/tree-flow.h"
new_vec_ = (( VEC_fieldoff_s_heap *)(vec_heap_o_reserve((((void *)0)), (-len_), __builtin_offsetof ( VEC_fieldoff_s_heap  , base.vec), sizeof ( fieldoff_s )))); 
#line 893 "../.././gcc/tree-flow.h"
(new_vec_->base).num = len_; 
#line 893 "../.././gcc/tree-flow.h"
memcpy((new_vec_->base).vec, (vec_->vec), sizeof ( fieldoff_s ) * len_); } }
#line 893 "../.././gcc/tree-flow.h"
return new_vec_; }
 
#line 893 "../.././gcc/tree-flow.h"
static __inline__ void VEC_fieldoff_s_heap_free( VEC_fieldoff_s_heap **vec_)  {

#line 893 "../.././gcc/tree-flow.h"
if ((*vec_)){
free((*vec_)); }
#line 893 "../.././gcc/tree-flow.h"
(*vec_) = (((void *)0)); }
 
#line 893 "../.././gcc/tree-flow.h"
static __inline__ int VEC_fieldoff_s_heap_reserve( VEC_fieldoff_s_heap **vec_, int alloc_)  {

#line 893 "../.././gcc/tree-flow.h"

#line 893 "../.././gcc/tree-flow.h"
int extend = (!VEC_fieldoff_s_base_space(((((*vec_))?(&(((*vec_))->base)):0)), (alloc_ < 0?(-alloc_):alloc_)));
#line 893 "../.././gcc/tree-flow.h"
if (extend){
(*vec_) = (( VEC_fieldoff_s_heap *)vec_heap_o_reserve((*vec_), alloc_, __builtin_offsetof ( VEC_fieldoff_s_heap  , base.vec), sizeof ( fieldoff_s ))); }
#line 893 "../.././gcc/tree-flow.h"
return extend; }
 
#line 893 "../.././gcc/tree-flow.h"
static __inline__ void VEC_fieldoff_s_heap_safe_grow( VEC_fieldoff_s_heap **vec_, int size_)  {

#line 893 "../.././gcc/tree-flow.h"
((void )(size_ >= 0 && VEC_fieldoff_s_base_length((((*vec_))?(&(((*vec_))->base)):0)) <= ((unsigned )size_))); 
#line 893 "../.././gcc/tree-flow.h"
VEC_fieldoff_s_heap_reserve(vec_, ((int )(((*vec_)?(((((*vec_))?(&(((*vec_))->base)):0))->num):0))) - size_); 
#line 893 "../.././gcc/tree-flow.h"
(((((*vec_))?(&(((*vec_))->base)):0))->num) = size_; 
#line 893 "../.././gcc/tree-flow.h"
(((((*vec_))?(&(((*vec_))->base)):0))->num) = size_; }
 
#line 893 "../.././gcc/tree-flow.h"
static __inline__  fieldoff_s *VEC_fieldoff_s_heap_safe_push( VEC_fieldoff_s_heap **vec_, const  fieldoff_s *obj_)  {

#line 893 "../.././gcc/tree-flow.h"
VEC_fieldoff_s_heap_reserve(vec_, 1); 
#line 893 "../.././gcc/tree-flow.h"
return VEC_fieldoff_s_base_quick_push(((((*vec_))?(&(((*vec_))->base)):0)), obj_); }
 
#line 893 "../.././gcc/tree-flow.h"
static __inline__  fieldoff_s *VEC_fieldoff_s_heap_safe_insert( VEC_fieldoff_s_heap **vec_, unsigned ix_, const  fieldoff_s *obj_)  {

#line 893 "../.././gcc/tree-flow.h"
VEC_fieldoff_s_heap_reserve(vec_, 1); 
#line 893 "../.././gcc/tree-flow.h"
return VEC_fieldoff_s_base_quick_insert(((((*vec_))?(&(((*vec_))->base)):0)), ix_, obj_); }
 
#line 893 "../.././gcc/tree-flow.h"
struct vec_swallow_trailing_semi ; 
#line 895 "../.././gcc/tree-flow.h"
int push_fields_onto_fieldstack( tree ,  VEC_fieldoff_s_heap **, long , unsigned char *); 
#line 896 "../.././gcc/tree-flow.h"
void sort_fieldstack( VEC_fieldoff_s_heap *); 
#line 898 "../.././gcc/tree-flow.h"
void init_alias_heapvars(void ); 
#line 899 "../.././gcc/tree-flow.h"
void delete_alias_heapvars(void ); 
# 846 "../.././gcc/tree-flow.h" 
# 1 "../.././gcc/tree-flow-inline.h" 1
# 32 "../.././gcc/tree-flow-inline.h" 
static __inline__ void *first_htab_element( htab_iterator *hti,  htab_t table)  {

#line 33 "../.././gcc/tree-flow-inline.h"
(hti->htab) = table; 
#line 34 "../.././gcc/tree-flow-inline.h"
(hti->slot) = (table->entries); 
#line 35 "../.././gcc/tree-flow-inline.h"
(hti->limit) = (hti->slot) + htab_size(table); 
#line 36 "../.././gcc/tree-flow-inline.h"
do { { 
#line 38 "../.././gcc/tree-flow-inline.h"

#line 38 "../.././gcc/tree-flow-inline.h"
void *x = (*((hti->slot)));
#line 39 "../.././gcc/tree-flow-inline.h"
if (x != (((void *)0)) && x != (((void *)1))){
break; }} } while((++((hti->slot))) < (hti->limit)); 
#line 43 "../.././gcc/tree-flow-inline.h"
if ((hti->slot) < (hti->limit)){
return (*((hti->slot))); }
#line 45 "../.././gcc/tree-flow-inline.h"
return (((void *)0)); }
 
#line 53 "../.././gcc/tree-flow-inline.h"
static __inline__ unsigned char end_htab_p( htab_iterator *hti)  {

#line 56 "../.././gcc/tree-flow-inline.h"
if ((hti->slot) >= (hti->limit)){
return 1; }
#line 56 "../.././gcc/tree-flow-inline.h"
return 0; }
 
#line 64 "../.././gcc/tree-flow-inline.h"
static __inline__ void *next_htab_element( htab_iterator *hti)  {

#line 70 "../.././gcc/tree-flow-inline.h"
while((++((hti->slot))) < (hti->limit)) { { 
#line 67 "../.././gcc/tree-flow-inline.h"

#line 67 "../.././gcc/tree-flow-inline.h"
void *x = (*((hti->slot)));
#line 68 "../.././gcc/tree-flow-inline.h"
if (x != (((void *)0)) && x != (((void *)1))){
return x; }} } 
#line 70 "../.././gcc/tree-flow-inline.h"
; 
#line 71 "../.././gcc/tree-flow-inline.h"
return (((void *)0)); }
 
#line 78 "../.././gcc/tree-flow-inline.h"
static __inline__  tree first_referenced_var( referenced_var_iterator *iter)  {

#line 79 "../.././gcc/tree-flow-inline.h"

#line 79 "../.././gcc/tree-flow-inline.h"
struct int_tree_map *itm;
#line 80 "../.././gcc/tree-flow-inline.h"
itm = first_htab_element((&(iter->hti)), referenced_vars); 
#line 81 "../.././gcc/tree-flow-inline.h"
if ((!itm)){
return (((void *)0)); }
#line 83 "../.././gcc/tree-flow-inline.h"
return (itm->to); }
 
#line 91 "../.././gcc/tree-flow-inline.h"
static __inline__ unsigned char end_referenced_vars_p( referenced_var_iterator *iter)  {

#line 92 "../.././gcc/tree-flow-inline.h"
return end_htab_p((&(iter->hti))); }
 
#line 99 "../.././gcc/tree-flow-inline.h"
static __inline__  tree next_referenced_var( referenced_var_iterator *iter)  {

#line 100 "../.././gcc/tree-flow-inline.h"

#line 100 "../.././gcc/tree-flow-inline.h"
struct int_tree_map *itm;
#line 101 "../.././gcc/tree-flow-inline.h"
itm = next_htab_element((&(iter->hti))); 
#line 102 "../.././gcc/tree-flow-inline.h"
if ((!itm)){
return (((void *)0)); }
#line 104 "../.././gcc/tree-flow-inline.h"
return (itm->to); }
 
#line 111 "../.././gcc/tree-flow-inline.h"
static __inline__ void fill_referenced_var_vec( VEC_tree_heap **vec)  {

#line 112 "../.././gcc/tree-flow-inline.h"

#line 112 "../.././gcc/tree-flow-inline.h"
 referenced_var_iterator rvi;
#line 113 "../.././gcc/tree-flow-inline.h"

#line 113 "../.././gcc/tree-flow-inline.h"
 tree var;
#line 114 "../.././gcc/tree-flow-inline.h"
(*vec) = (((void *)0)); 
#line 115 "../.././gcc/tree-flow-inline.h"
for((var) = first_referenced_var((&(rvi)));(!end_referenced_vars_p((&(rvi))));(var) = next_referenced_var((&(rvi)))) { (VEC_tree_heap_safe_push((&((*vec))), var)); } }
 
#line 122 "../.././gcc/tree-flow-inline.h"
static __inline__  var_ann_t var_ann( tree t)  {

#line 123 "../.././gcc/tree-flow-inline.h"
(((void )(((!(t))?fancy_abort("../.././gcc/tree-flow-inline.h", 126, __FUNCTION__) , 0:0)))); 
#line 124 "../.././gcc/tree-flow-inline.h"
(((void )(((!((tree_code_type[((int )((((enum tree_code )((t)->common).code))))] == tcc_declaration)))?fancy_abort("../.././gcc/tree-flow-inline.h", 127, __FUNCTION__) , 0:0)))); 
#line 125 "../.././gcc/tree-flow-inline.h"
(((void )(((!((!(t->common).ann) || ((t->common).ann->common).type == VAR_ANN))?fancy_abort("../.././gcc/tree-flow-inline.h", 128, __FUNCTION__) , 0:0)))); 
#line 127 "../.././gcc/tree-flow-inline.h"
return (( var_ann_t )(t->common).ann); }
 
#line 133 "../.././gcc/tree-flow-inline.h"
static __inline__  var_ann_t get_var_ann( tree var)  {

#line 134 "../.././gcc/tree-flow-inline.h"

#line 134 "../.././gcc/tree-flow-inline.h"
 var_ann_t ann = var_ann(var);
#line 135 "../.././gcc/tree-flow-inline.h"
return ((ann)?ann:create_var_ann(var)); }
 
#line 141 "../.././gcc/tree-flow-inline.h"
static __inline__  stmt_ann_t stmt_ann( tree t)  {

#line 145 "../.././gcc/tree-flow-inline.h"
return (( stmt_ann_t )(t->common).ann); }
 
#line 151 "../.././gcc/tree-flow-inline.h"
static __inline__  stmt_ann_t get_stmt_ann( tree stmt)  {

#line 152 "../.././gcc/tree-flow-inline.h"

#line 152 "../.././gcc/tree-flow-inline.h"
 stmt_ann_t ann = stmt_ann(stmt);
#line 153 "../.././gcc/tree-flow-inline.h"
return ((ann)?ann:create_stmt_ann(stmt)); }
 
#line 159 "../.././gcc/tree-flow-inline.h"
static __inline__ enum tree_ann_type ann_type( tree_ann_t ann)  {

#line 160 "../.././gcc/tree-flow-inline.h"
return (ann->common).type; }
 
#line 165 "../.././gcc/tree-flow-inline.h"
static __inline__  basic_block bb_for_stmt( tree t)  {

#line 166 "../.././gcc/tree-flow-inline.h"

#line 166 "../.././gcc/tree-flow-inline.h"
 stmt_ann_t ann;
#line 168 "../.././gcc/tree-flow-inline.h"
if ((((enum tree_code )((t)->common).code)) == PHI_NODE){
return ((t)->phi).bb; }
#line 171 "../.././gcc/tree-flow-inline.h"
ann = stmt_ann(t); 
#line 172 "../.././gcc/tree-flow-inline.h"
return (ann?(ann->bb):(((void *)0))); }
 
#line 178 "../.././gcc/tree-flow-inline.h"
static __inline__  varray_type may_aliases( tree var)  {

#line 179 "../.././gcc/tree-flow-inline.h"

#line 179 "../.././gcc/tree-flow-inline.h"
 var_ann_t ann = var_ann(var);
#line 180 "../.././gcc/tree-flow-inline.h"
return (ann?(ann->may_aliases):(((void *)0))); }
 
#line 187 "../.././gcc/tree-flow-inline.h"
static __inline__ int get_lineno( tree expr)  {

#line 191 "../.././gcc/tree-flow-inline.h"
if (expr == (( tree )(((void *)0)))){
return (-1); }
#line 191 "../.././gcc/tree-flow-inline.h"
if ((((enum tree_code )((expr)->common).code)) == COMPOUND_EXPR){
expr = (((expr)->exp).operands[0]); }
#line 194 "../.././gcc/tree-flow-inline.h"
if ((!(((((tree_code_type[((int )((((enum tree_code )((expr)->common).code))))]) >= tcc_reference && (tree_code_type[((int )((((enum tree_code )((expr)->common).code))))]) <= tcc_expression)?((expr)->exp).locus:(( location_t *)(((void *)0))))) != (((void *)0))))){
return (-1); }
#line 197 "../.././gcc/tree-flow-inline.h"
return ((((expr)->exp).locus->line)); }
 
#line 204 "../.././gcc/tree-flow-inline.h"
static __inline__ const char *get_filename( tree expr)  {

#line 205 "../.././gcc/tree-flow-inline.h"

#line 205 "../.././gcc/tree-flow-inline.h"
const char *filename;
#line 206 "../.././gcc/tree-flow-inline.h"
if (expr == (( tree )(((void *)0)))){
return "???"; }
#line 209 "../.././gcc/tree-flow-inline.h"
if ((((enum tree_code )((expr)->common).code)) == COMPOUND_EXPR){
expr = (((expr)->exp).operands[0]); }
#line 212 "../.././gcc/tree-flow-inline.h"
if ((((((tree_code_type[((int )((((enum tree_code )((expr)->common).code))))]) >= tcc_reference && (tree_code_type[((int )((((enum tree_code )((expr)->common).code))))]) <= tcc_expression)?((expr)->exp).locus:(( location_t *)(((void *)0))))) != (((void *)0))) && (filename = ((((expr)->exp).locus->file)))){
return filename; }else{
return "???"; }}
 
#line 221 "../.././gcc/tree-flow-inline.h"
static __inline__ unsigned char noreturn_call_p( tree t)  {

#line 222 "../.././gcc/tree-flow-inline.h"

#line 222 "../.././gcc/tree-flow-inline.h"
 tree call = get_call_expr_in(t);
#line 223 "../.././gcc/tree-flow-inline.h"
return call != 0 && (call_expr_flags(call) & 2) != 0; }
 
#line 229 "../.././gcc/tree-flow-inline.h"
static __inline__ void mark_stmt_modified( tree t)  {

#line 230 "../.././gcc/tree-flow-inline.h"

#line 230 "../.././gcc/tree-flow-inline.h"
 stmt_ann_t ann;
#line 231 "../.././gcc/tree-flow-inline.h"
if ((((enum tree_code )((t)->common).code)) == PHI_NODE){
return ; }
#line 234 "../.././gcc/tree-flow-inline.h"
ann = stmt_ann(t); 
#line 235 "../.././gcc/tree-flow-inline.h"
if (ann == (((void *)0))){
ann = create_stmt_ann(t); }else{
if (noreturn_call_p(t)){
(VEC_tree_gc_safe_push((&(modified_noreturn_calls)), t)); }}
#line 239 "../.././gcc/tree-flow-inline.h"
(ann->modified) = 1; }
 
#line 245 "../.././gcc/tree-flow-inline.h"
static __inline__ void update_stmt( tree t)  {

#line 248 "../.././gcc/tree-flow-inline.h"
if ((((enum tree_code )((t)->common).code)) == PHI_NODE){
return ; }
#line 248 "../.././gcc/tree-flow-inline.h"
mark_stmt_modified(t); 
#line 249 "../.././gcc/tree-flow-inline.h"
update_stmt_operands(t); }
 
#line 254 "../.././gcc/tree-flow-inline.h"
static __inline__ void update_stmt_if_modified( tree t)  {

#line 257 "../.././gcc/tree-flow-inline.h"
if (stmt_modified_p(t)){
update_stmt_operands(t); }}
 
#line 262 "../.././gcc/tree-flow-inline.h"
static __inline__ unsigned char stmt_modified_p( tree t)  {

#line 263 "../.././gcc/tree-flow-inline.h"

#line 263 "../.././gcc/tree-flow-inline.h"
 stmt_ann_t ann = stmt_ann(t);
#line 268 "../.././gcc/tree-flow-inline.h"
return (ann?(ann->modified):1); }
 
#line 274 "../.././gcc/tree-flow-inline.h"
static __inline__ void delink_imm_use( ssa_use_operand_t *linknode)  {

#line 279 "../.././gcc/tree-flow-inline.h"
if ((linknode->prev) == (((void *)0))){
return ; }
#line 279 "../.././gcc/tree-flow-inline.h"
((linknode->prev)->next) = (linknode->next); 
#line 280 "../.././gcc/tree-flow-inline.h"
((linknode->next)->prev) = (linknode->prev); 
#line 281 "../.././gcc/tree-flow-inline.h"
(linknode->prev) = (((void *)0)); 
#line 282 "../.././gcc/tree-flow-inline.h"
(linknode->next) = (((void *)0)); }
 
#line 288 "../.././gcc/tree-flow-inline.h"
static __inline__ void link_imm_use_to_list( ssa_use_operand_t *linknode,  ssa_use_operand_t *list)  {

#line 291 "../.././gcc/tree-flow-inline.h"
(linknode->prev) = list; 
#line 292 "../.././gcc/tree-flow-inline.h"
(linknode->next) = (list->next); 
#line 293 "../.././gcc/tree-flow-inline.h"
((list->next)->prev) = linknode; 
#line 294 "../.././gcc/tree-flow-inline.h"
(list->next) = linknode; }
 
#line 300 "../.././gcc/tree-flow-inline.h"
static __inline__ void link_imm_use( ssa_use_operand_t *linknode,  tree def)  {

#line 301 "../.././gcc/tree-flow-inline.h"

#line 301 "../.././gcc/tree-flow-inline.h"
 ssa_use_operand_t *root;
#line 303 "../.././gcc/tree-flow-inline.h"
if ((!def) || (((enum tree_code )((def)->common).code)) != SSA_NAME){
(linknode->prev) = (((void *)0)); }else{
{ 
#line 307 "../.././gcc/tree-flow-inline.h"
root = (&(((def)->ssa_name).imm_uses)); 
#line 312 "../.././gcc/tree-flow-inline.h"
link_imm_use_to_list(linknode, root); } }}
 
#line 319 "../.././gcc/tree-flow-inline.h"
static __inline__ void set_ssa_use_from_ptr( use_operand_p use,  tree val)  {

#line 320 "../.././gcc/tree-flow-inline.h"
delink_imm_use(use); 
#line 321 "../.././gcc/tree-flow-inline.h"
(*((use->use))) = val; 
#line 322 "../.././gcc/tree-flow-inline.h"
link_imm_use(use, val); }
 
#line 329 "../.././gcc/tree-flow-inline.h"
static __inline__ void link_imm_use_stmt( ssa_use_operand_t *linknode,  tree def,  tree stmt)  {

#line 333 "../.././gcc/tree-flow-inline.h"
if (stmt){
link_imm_use(linknode, def); }else{
link_imm_use(linknode, (((void *)0))); }
#line 334 "../.././gcc/tree-flow-inline.h"
(linknode->stmt) = stmt; }
 
#line 340 "../.././gcc/tree-flow-inline.h"
static __inline__ void relink_imm_use( ssa_use_operand_t *node,  ssa_use_operand_t *old)  {

#line 342 "../.././gcc/tree-flow-inline.h"
(((void )(((!((*((old->use))) == (*((node->use)))))?fancy_abort("../.././gcc/tree-flow-inline.h", 350, __FUNCTION__) , 0:0)))); 
#line 343 "../.././gcc/tree-flow-inline.h"
(node->prev) = (old->prev); 
#line 344 "../.././gcc/tree-flow-inline.h"
(node->next) = (old->next); 
#line 345 "../.././gcc/tree-flow-inline.h"
if ((old->prev)){
{ 
#line 347 "../.././gcc/tree-flow-inline.h"
((old->prev)->next) = node; 
#line 348 "../.././gcc/tree-flow-inline.h"
((old->next)->prev) = node; 
#line 350 "../.././gcc/tree-flow-inline.h"
(old->prev) = (((void *)0)); } }}
 
#line 358 "../.././gcc/tree-flow-inline.h"
static __inline__ void relink_imm_use_stmt( ssa_use_operand_t *linknode,  ssa_use_operand_t *old,  tree stmt)  {

#line 362 "../.././gcc/tree-flow-inline.h"
if (stmt){
relink_imm_use(linknode, old); }else{
link_imm_use(linknode, (((void *)0))); }
#line 363 "../.././gcc/tree-flow-inline.h"
(linknode->stmt) = stmt; }
 
#line 370 "../.././gcc/tree-flow-inline.h"
static __inline__ void end_safe_imm_use_traverse( imm_use_iterator *imm)  {

#line 371 "../.././gcc/tree-flow-inline.h"
delink_imm_use((&((imm->iter_node)))); }
 
#line 377 "../.././gcc/tree-flow-inline.h"
static __inline__ unsigned char end_safe_imm_use_p( imm_use_iterator *imm)  {

#line 378 "../.././gcc/tree-flow-inline.h"
return ((imm->imm_use) == (imm->end_p)); }
 
#line 383 "../.././gcc/tree-flow-inline.h"
static __inline__  use_operand_p first_safe_imm_use( imm_use_iterator *imm,  tree var)  {

#line 385 "../.././gcc/tree-flow-inline.h"
(imm->iter_node).use = (((void *)0)); 
#line 386 "../.././gcc/tree-flow-inline.h"
(imm->iter_node).stmt = (( tree )(((void *)0))); 
#line 387 "../.././gcc/tree-flow-inline.h"
(imm->end_p) = (&(((var)->ssa_name).imm_uses)); 
#line 389 "../.././gcc/tree-flow-inline.h"
if (((imm->end_p)->next) == (imm->end_p)){
{ 
#line 391 "../.././gcc/tree-flow-inline.h"
(imm->imm_use) = (imm->end_p); 
#line 392 "../.././gcc/tree-flow-inline.h"
return (((void *)0)); } }
#line 395 "../.././gcc/tree-flow-inline.h"
link_imm_use((&((imm->iter_node))), var); 
#line 396 "../.././gcc/tree-flow-inline.h"
(imm->imm_use) = (imm->iter_node).next; 
#line 397 "../.././gcc/tree-flow-inline.h"
return (imm->imm_use); }
 
#line 402 "../.././gcc/tree-flow-inline.h"
static __inline__  use_operand_p next_safe_imm_use( imm_use_iterator *imm)  {

#line 403 "../.././gcc/tree-flow-inline.h"

#line 403 "../.././gcc/tree-flow-inline.h"
 ssa_use_operand_t *ptr;
#line 404 "../.././gcc/tree-flow-inline.h"

#line 404 "../.././gcc/tree-flow-inline.h"
 use_operand_p old;
#line 406 "../.././gcc/tree-flow-inline.h"
old = (imm->imm_use); 
#line 409 "../.././gcc/tree-flow-inline.h"
if ((imm->iter_node).next == (imm->imm_use)){
{ 
#line 411 "../.././gcc/tree-flow-inline.h"
ptr = (&((imm->iter_node))); 
#line 413 "../.././gcc/tree-flow-inline.h"
delink_imm_use(ptr); 
#line 414 "../.././gcc/tree-flow-inline.h"
(imm->imm_use) = ((imm->imm_use)->next); 
#line 415 "../.././gcc/tree-flow-inline.h"
if ((!end_safe_imm_use_p(imm))){
{ 
#line 418 "../.././gcc/tree-flow-inline.h"
(ptr->prev) = ((imm->imm_use)->prev); 
#line 419 "../.././gcc/tree-flow-inline.h"
(ptr->next) = (imm->imm_use); 
#line 420 "../.././gcc/tree-flow-inline.h"
(((imm->imm_use)->prev)->next) = ptr; 
#line 421 "../.././gcc/tree-flow-inline.h"
((imm->imm_use)->prev) = ptr; } }else{
return old; }} }else{
{ 
#line 431 "../.././gcc/tree-flow-inline.h"
(imm->imm_use) = (imm->iter_node).next; 
#line 432 "../.././gcc/tree-flow-inline.h"
if (end_safe_imm_use_p(imm)){
{ 
#line 434 "../.././gcc/tree-flow-inline.h"
end_safe_imm_use_traverse(imm); 
#line 435 "../.././gcc/tree-flow-inline.h"
return old; } }} }
#line 439 "../.././gcc/tree-flow-inline.h"
return (imm->imm_use); }
 
#line 445 "../.././gcc/tree-flow-inline.h"
static __inline__ unsigned char end_readonly_imm_use_p( imm_use_iterator *imm)  {

#line 446 "../.././gcc/tree-flow-inline.h"
return ((imm->imm_use) == (imm->end_p)); }
 
#line 451 "../.././gcc/tree-flow-inline.h"
static __inline__  use_operand_p first_readonly_imm_use( imm_use_iterator *imm,  tree var)  {

#line 452 "../.././gcc/tree-flow-inline.h"
(((void )(((!((((enum tree_code )((var)->common).code)) == SSA_NAME))?fancy_abort("../.././gcc/tree-flow-inline.h", 463, __FUNCTION__) , 0:0)))); 
#line 454 "../.././gcc/tree-flow-inline.h"
(imm->end_p) = (&(((var)->ssa_name).imm_uses)); 
#line 455 "../.././gcc/tree-flow-inline.h"
(imm->imm_use) = ((imm->end_p)->next); 
#line 459 "../.././gcc/tree-flow-inline.h"
if (end_readonly_imm_use_p(imm)){
return (((void *)0)); }
#line 461 "../.././gcc/tree-flow-inline.h"
return (imm->imm_use); }
 
#line 466 "../.././gcc/tree-flow-inline.h"
static __inline__  use_operand_p next_readonly_imm_use( imm_use_iterator *imm)  {

#line 467 "../.././gcc/tree-flow-inline.h"

#line 467 "../.././gcc/tree-flow-inline.h"
 use_operand_p old = (imm->imm_use);
#line 490 "../.././gcc/tree-flow-inline.h"
(imm->imm_use) = (old->next); 
#line 491 "../.././gcc/tree-flow-inline.h"
if (end_readonly_imm_use_p(imm)){
return old; }
#line 493 "../.././gcc/tree-flow-inline.h"
return (imm->imm_use); }
 
#line 499 "../.././gcc/tree-flow-inline.h"
static __inline__ unsigned char has_zero_uses( tree var)  {

#line 500 "../.././gcc/tree-flow-inline.h"

#line 500 "../.././gcc/tree-flow-inline.h"
 ssa_use_operand_t *ptr;
#line 501 "../.././gcc/tree-flow-inline.h"
ptr = (&(((var)->ssa_name).imm_uses)); 
#line 503 "../.././gcc/tree-flow-inline.h"
return (ptr == (ptr->next)); }
 
#line 509 "../.././gcc/tree-flow-inline.h"
static __inline__ unsigned char has_single_use( tree var)  {

#line 510 "../.././gcc/tree-flow-inline.h"

#line 510 "../.././gcc/tree-flow-inline.h"
 ssa_use_operand_t *ptr;
#line 511 "../.././gcc/tree-flow-inline.h"
ptr = (&(((var)->ssa_name).imm_uses)); 
#line 513 "../.././gcc/tree-flow-inline.h"
return (ptr != (ptr->next) && ptr == ((ptr->next)->next)); }
 
#line 520 "../.././gcc/tree-flow-inline.h"
static __inline__ unsigned char single_imm_use( tree var,  use_operand_p *use_p,  tree *stmt)  {

#line 521 "../.././gcc/tree-flow-inline.h"

#line 521 "../.././gcc/tree-flow-inline.h"
 ssa_use_operand_t *ptr;
#line 523 "../.././gcc/tree-flow-inline.h"
ptr = (&(((var)->ssa_name).imm_uses)); 
#line 524 "../.././gcc/tree-flow-inline.h"
if (ptr != (ptr->next) && ptr == ((ptr->next)->next)){
{ 
#line 526 "../.././gcc/tree-flow-inline.h"
(*use_p) = (ptr->next); 
#line 527 "../.././gcc/tree-flow-inline.h"
(*stmt) = ((ptr->next)->stmt); 
#line 528 "../.././gcc/tree-flow-inline.h"
return 1; } }
#line 530 "../.././gcc/tree-flow-inline.h"
(*use_p) = (((void *)0)); 
#line 531 "../.././gcc/tree-flow-inline.h"
(*stmt) = (( tree )(((void *)0))); 
#line 532 "../.././gcc/tree-flow-inline.h"
return 0; }
 
#line 538 "../.././gcc/tree-flow-inline.h"
static __inline__ unsigned int num_imm_uses( tree var)  {

#line 539 "../.././gcc/tree-flow-inline.h"

#line 539 "../.././gcc/tree-flow-inline.h"
 ssa_use_operand_t *ptr,*start;
#line 540 "../.././gcc/tree-flow-inline.h"

#line 540 "../.././gcc/tree-flow-inline.h"
unsigned int num;
#line 542 "../.././gcc/tree-flow-inline.h"
start = (&(((var)->ssa_name).imm_uses)); 
#line 543 "../.././gcc/tree-flow-inline.h"
num = 0; 
#line 544 "../.././gcc/tree-flow-inline.h"
for(ptr = (start->next);ptr != start;ptr = (ptr->next)) { num++; } 
#line 547 "../.././gcc/tree-flow-inline.h"
return num; }
 
#line 553 "../.././gcc/tree-flow-inline.h"
static __inline__  tree get_use_from_ptr( use_operand_p use)  {

#line 554 "../.././gcc/tree-flow-inline.h"
return (*((use->use))); }
 
#line 559 "../.././gcc/tree-flow-inline.h"
static __inline__  tree get_def_from_ptr( def_operand_p def)  {

#line 560 "../.././gcc/tree-flow-inline.h"
return (*def); }
 
#line 565 "../.././gcc/tree-flow-inline.h"
static __inline__  def_operand_p get_phi_result_ptr( tree phi)  {

#line 566 "../.././gcc/tree-flow-inline.h"
return (&(((phi)->phi).result)); }
 
#line 571 "../.././gcc/tree-flow-inline.h"
static __inline__  use_operand_p get_phi_arg_def_ptr( tree phi, int i)  {

#line 572 "../.././gcc/tree-flow-inline.h"
return (&((((phi)->phi).a[i]).imm_use)); }
 
#line 579 "../.././gcc/tree-flow-inline.h"
static __inline__  bitmap addresses_taken( tree stmt)  {

#line 580 "../.././gcc/tree-flow-inline.h"

#line 580 "../.././gcc/tree-flow-inline.h"
 stmt_ann_t ann = stmt_ann(stmt);
#line 581 "../.././gcc/tree-flow-inline.h"
return (ann?(ann->addresses_taken):(((void *)0))); }
 
#line 587 "../.././gcc/tree-flow-inline.h"
static __inline__  tree phi_nodes( basic_block bb)  {

#line 588 "../.././gcc/tree-flow-inline.h"
return (bb->phi_nodes); }
 
#line 595 "../.././gcc/tree-flow-inline.h"
static __inline__ void set_phi_nodes( basic_block bb,  tree l)  {

#line 596 "../.././gcc/tree-flow-inline.h"

#line 596 "../.././gcc/tree-flow-inline.h"
 tree phi;
#line 598 "../.././gcc/tree-flow-inline.h"
(bb->phi_nodes) = l; 
#line 599 "../.././gcc/tree-flow-inline.h"
for(phi = l;phi;phi = ((((phi))->common).chain)) { set_bb_for_stmt(phi, bb); } }
 
#line 607 "../.././gcc/tree-flow-inline.h"
static __inline__ int phi_arg_index_from_use( use_operand_p use)  {

#line 608 "../.././gcc/tree-flow-inline.h"

#line 608 "../.././gcc/tree-flow-inline.h"
struct phi_arg_d *element,*root;
#line 609 "../.././gcc/tree-flow-inline.h"

#line 609 "../.././gcc/tree-flow-inline.h"
int index;
#line 610 "../.././gcc/tree-flow-inline.h"

#line 610 "../.././gcc/tree-flow-inline.h"
 tree phi;
#line 616 "../.././gcc/tree-flow-inline.h"
phi = ((use)->stmt); 
#line 617 "../.././gcc/tree-flow-inline.h"
(((void )(((!((((enum tree_code )((phi)->common).code)) == PHI_NODE))?fancy_abort("../.././gcc/tree-flow-inline.h", 623, __FUNCTION__) , 0:0)))); 
#line 619 "../.././gcc/tree-flow-inline.h"
element = ((struct phi_arg_d *)use); 
#line 620 "../.././gcc/tree-flow-inline.h"
root = (&((((phi)->phi).a[0]))); 
#line 621 "../.././gcc/tree-flow-inline.h"
index = element - root; 
# 490 "../.././gcc/tree-flow-inline.h" 
# 637 "../.././gcc/tree-flow-inline.h" 
return index; }
 
#line 644 "../.././gcc/tree-flow-inline.h"
static __inline__ void set_is_used( tree var)  {

#line 645 "../.././gcc/tree-flow-inline.h"

#line 645 "../.././gcc/tree-flow-inline.h"
 var_ann_t ann = get_var_ann(var);
#line 646 "../.././gcc/tree-flow-inline.h"
(ann->used) = 1; }
 
#line 655 "../.././gcc/tree-flow-inline.h"
static __inline__ unsigned char is_exec_stmt( tree t)  {

#line 656 "../.././gcc/tree-flow-inline.h"
return (t && (!((((enum tree_code )((t)->common).code)) == NOP_EXPR && ((((enum tree_code )(((((t)->common).type))->common).code)) == VOID_TYPE) && integer_zerop((((t)->exp).operands[0])))) && t != global_trees[TI_ERROR_MARK]); }
 
#line 664 "../.././gcc/tree-flow-inline.h"
static __inline__ unsigned char is_label_stmt( tree t)  {

#line 675 "../.././gcc/tree-flow-inline.h"
if (t){
switch((((enum tree_code )((t)->common).code))){ { 
#line 671 "../.././gcc/tree-flow-inline.h"
case LABEL_DECL: case LABEL_EXPR: case CASE_LABEL_EXPR: return 1; 
#line 672 "../.././gcc/tree-flow-inline.h"
default: return 0; } } }
#line 675 "../.././gcc/tree-flow-inline.h"
return 0; }
 
#line 681 "../.././gcc/tree-flow-inline.h"
static __inline__ void set_default_def( tree var,  tree def)  {

#line 682 "../.././gcc/tree-flow-inline.h"

#line 682 "../.././gcc/tree-flow-inline.h"
 var_ann_t ann = get_var_ann(var);
#line 683 "../.././gcc/tree-flow-inline.h"
(ann->default_def) = def; }
 
#line 689 "../.././gcc/tree-flow-inline.h"
static __inline__  tree default_def( tree var)  {

#line 690 "../.././gcc/tree-flow-inline.h"

#line 690 "../.././gcc/tree-flow-inline.h"
 var_ann_t ann = var_ann(var);
#line 691 "../.././gcc/tree-flow-inline.h"
return (ann?(ann->default_def):(( tree )(((void *)0)))); }
 
#line 700 "../.././gcc/tree-flow-inline.h"
static __inline__ unsigned char phi_ssa_name_p( tree t)  {

#line 706 "../.././gcc/tree-flow-inline.h"
if ((((enum tree_code )((t)->common).code)) == SSA_NAME){
return 1; }
#line 706 "../.././gcc/tree-flow-inline.h"
return 0; }
 
#line 714 "../.././gcc/tree-flow-inline.h"
static __inline__  block_stmt_iterator bsi_start( basic_block bb)  {

#line 715 "../.././gcc/tree-flow-inline.h"

#line 715 "../.././gcc/tree-flow-inline.h"
 block_stmt_iterator bsi;
#line 716 "../.././gcc/tree-flow-inline.h"
if ((bb->stmt_list)){
bsi.tsi = tsi_start((bb->stmt_list)); }else{
{ 
#line 720 "../.././gcc/tree-flow-inline.h"
(((void )(((!((bb->index) < 0))?fancy_abort("../.././gcc/tree-flow-inline.h", 722, __FUNCTION__) , 0:0)))); 
#line 721 "../.././gcc/tree-flow-inline.h"
bsi.tsi.ptr = (((void *)0)); 
#line 722 "../.././gcc/tree-flow-inline.h"
bsi.tsi.container = (((void *)0)); } }
#line 724 "../.././gcc/tree-flow-inline.h"
bsi.bb = bb; 
#line 725 "../.././gcc/tree-flow-inline.h"
return bsi; }
 
#line 732 "../.././gcc/tree-flow-inline.h"
static __inline__  block_stmt_iterator bsi_after_labels( basic_block bb)  {

#line 733 "../.././gcc/tree-flow-inline.h"

#line 733 "../.././gcc/tree-flow-inline.h"
 block_stmt_iterator bsi = bsi_start(bb);
#line 735 "../.././gcc/tree-flow-inline.h"
while((!bsi_end_p(bsi)) && (((enum tree_code )((bsi_stmt(bsi))->common).code)) == LABEL_EXPR) { bsi_next((&bsi)); } 
#line 738 "../.././gcc/tree-flow-inline.h"
return bsi; }
 
#line 744 "../.././gcc/tree-flow-inline.h"
static __inline__  block_stmt_iterator bsi_last( basic_block bb)  {

#line 745 "../.././gcc/tree-flow-inline.h"

#line 745 "../.././gcc/tree-flow-inline.h"
 block_stmt_iterator bsi;
#line 746 "../.././gcc/tree-flow-inline.h"
if ((bb->stmt_list)){
bsi.tsi = tsi_last((bb->stmt_list)); }else{
{ 
#line 750 "../.././gcc/tree-flow-inline.h"
(((void )(((!((bb->index) < 0))?fancy_abort("../.././gcc/tree-flow-inline.h", 754, __FUNCTION__) , 0:0)))); 
#line 751 "../.././gcc/tree-flow-inline.h"
bsi.tsi.ptr = (((void *)0)); 
#line 752 "../.././gcc/tree-flow-inline.h"
bsi.tsi.container = (((void *)0)); } }
#line 754 "../.././gcc/tree-flow-inline.h"
bsi.bb = bb; 
#line 755 "../.././gcc/tree-flow-inline.h"
return bsi; }
 
#line 762 "../.././gcc/tree-flow-inline.h"
static __inline__ unsigned char bsi_end_p( block_stmt_iterator i)  {

#line 763 "../.././gcc/tree-flow-inline.h"
return tsi_end_p(i.tsi); }
 
#line 770 "../.././gcc/tree-flow-inline.h"
static __inline__ void bsi_next( block_stmt_iterator *i)  {

#line 771 "../.././gcc/tree-flow-inline.h"
tsi_next((&(i->tsi))); }
 
#line 778 "../.././gcc/tree-flow-inline.h"
static __inline__ void bsi_prev( block_stmt_iterator *i)  {

#line 779 "../.././gcc/tree-flow-inline.h"
tsi_prev((&(i->tsi))); }
 
#line 785 "../.././gcc/tree-flow-inline.h"
static __inline__  tree bsi_stmt( block_stmt_iterator i)  {

#line 786 "../.././gcc/tree-flow-inline.h"
return tsi_stmt(i.tsi); }
 
#line 793 "../.././gcc/tree-flow-inline.h"
static __inline__  tree *bsi_stmt_ptr( block_stmt_iterator i)  {

#line 794 "../.././gcc/tree-flow-inline.h"
return tsi_stmt_ptr(i.tsi); }
 
#line 801 "../.././gcc/tree-flow-inline.h"
static __inline__ struct loop *loop_containing_stmt( tree stmt)  {

#line 802 "../.././gcc/tree-flow-inline.h"

#line 802 "../.././gcc/tree-flow-inline.h"
 basic_block bb = bb_for_stmt(stmt);
#line 803 "../.././gcc/tree-flow-inline.h"
if ((!bb)){
return (((void *)0)); }
#line 806 "../.././gcc/tree-flow-inline.h"
return (bb->loop_father); }
 
#line 812 "../.././gcc/tree-flow-inline.h"
static __inline__ unsigned char is_call_clobbered( tree var)  {

#line 814 "../.././gcc/tree-flow-inline.h"
return is_global_var(var) || bitmap_bit_p(call_clobbered_vars, (((var)->decl_minimal).uid)); }
 
#line 820 "../.././gcc/tree-flow-inline.h"
static __inline__ void mark_call_clobbered( tree var)  {

#line 821 "../.././gcc/tree-flow-inline.h"

#line 821 "../.././gcc/tree-flow-inline.h"
 var_ann_t ann = var_ann(var);
#line 826 "../.././gcc/tree-flow-inline.h"
if ((ann->mem_tag_kind) != NOT_A_TAG && (ann->mem_tag_kind) != STRUCT_FIELD){
(((var)->decl_common).decl_flag_2) = 1; }
#line 828 "../.././gcc/tree-flow-inline.h"
bitmap_set_bit(call_clobbered_vars, (((var)->decl_minimal).uid)); 
#line 829 "../.././gcc/tree-flow-inline.h"
ssa_call_clobbered_cache_valid = 0; 
#line 830 "../.././gcc/tree-flow-inline.h"
ssa_ro_call_cache_valid = 0; }
 
#line 836 "../.././gcc/tree-flow-inline.h"
static __inline__ void clear_call_clobbered( tree var)  {

#line 837 "../.././gcc/tree-flow-inline.h"

#line 837 "../.././gcc/tree-flow-inline.h"
 var_ann_t ann = var_ann(var);
#line 838 "../.././gcc/tree-flow-inline.h"
if ((ann->mem_tag_kind) != NOT_A_TAG && (ann->mem_tag_kind) != STRUCT_FIELD){
(((var)->decl_common).decl_flag_2) = 0; }
#line 840 "../.././gcc/tree-flow-inline.h"
bitmap_clear_bit(call_clobbered_vars, (((var)->decl_minimal).uid)); 
#line 841 "../.././gcc/tree-flow-inline.h"
ssa_call_clobbered_cache_valid = 0; 
#line 842 "../.././gcc/tree-flow-inline.h"
ssa_ro_call_cache_valid = 0; }
 
#line 848 "../.././gcc/tree-flow-inline.h"
static __inline__ void mark_non_addressable( tree var)  {

#line 849 "../.././gcc/tree-flow-inline.h"
bitmap_clear_bit(call_clobbered_vars, (((var)->decl_minimal).uid)); 
#line 850 "../.././gcc/tree-flow-inline.h"
(((var)->common).addressable_flag) = 0; 
#line 851 "../.././gcc/tree-flow-inline.h"
ssa_call_clobbered_cache_valid = 0; 
#line 852 "../.././gcc/tree-flow-inline.h"
ssa_ro_call_cache_valid = 0; }
 
#line 858 "../.././gcc/tree-flow-inline.h"
static __inline__  tree_ann_t tree_ann( tree t)  {

#line 859 "../.././gcc/tree-flow-inline.h"
return (t->common).ann; }
 
#line 865 "../.././gcc/tree-flow-inline.h"
static __inline__  tree_ann_t get_tree_ann( tree t)  {

#line 866 "../.././gcc/tree-flow-inline.h"

#line 866 "../.././gcc/tree-flow-inline.h"
 tree_ann_t ann = tree_ann(t);
#line 867 "../.././gcc/tree-flow-inline.h"
return ((ann)?ann:create_tree_ann(t)); }
 
#line 878 "../.././gcc/tree-flow-inline.h"
static __inline__ unsigned char op_iter_done( ssa_op_iter *ptr)  {

#line 879 "../.././gcc/tree-flow-inline.h"
return (ptr->done); }
 
#line 884 "../.././gcc/tree-flow-inline.h"
static __inline__  use_operand_p op_iter_next_use( ssa_op_iter *ptr)  {

#line 885 "../.././gcc/tree-flow-inline.h"

#line 885 "../.././gcc/tree-flow-inline.h"
 use_operand_p use_p;
#line 889 "../.././gcc/tree-flow-inline.h"
if ((ptr->uses)){
{ 
#line 891 "../.././gcc/tree-flow-inline.h"
use_p = ((&((((ptr->uses))->use_ptr)))); 
#line 892 "../.././gcc/tree-flow-inline.h"
(ptr->uses) = ((ptr->uses)->next); 
#line 893 "../.././gcc/tree-flow-inline.h"
return use_p; } }
#line 895 "../.././gcc/tree-flow-inline.h"
if ((ptr->vuses)){
{ 
#line 897 "../.././gcc/tree-flow-inline.h"
use_p = ((&((((ptr->vuses))->use_ptr)))); 
#line 898 "../.././gcc/tree-flow-inline.h"
(ptr->vuses) = ((ptr->vuses)->next); 
#line 899 "../.././gcc/tree-flow-inline.h"
return use_p; } }
#line 901 "../.././gcc/tree-flow-inline.h"
if ((ptr->mayuses)){
{ 
#line 903 "../.././gcc/tree-flow-inline.h"
use_p = ((&((((ptr->mayuses))->use_ptr)))); 
#line 904 "../.././gcc/tree-flow-inline.h"
(ptr->mayuses) = ((ptr->mayuses)->next); 
#line 905 "../.././gcc/tree-flow-inline.h"
return use_p; } }
#line 907 "../.././gcc/tree-flow-inline.h"
if ((ptr->mustkills)){
{ 
#line 909 "../.././gcc/tree-flow-inline.h"
use_p = ((&((((ptr->mustkills))->use_ptr)))); 
#line 910 "../.././gcc/tree-flow-inline.h"
(ptr->mustkills) = ((ptr->mustkills)->next); 
#line 911 "../.././gcc/tree-flow-inline.h"
return use_p; } }
#line 913 "../.././gcc/tree-flow-inline.h"
if ((ptr->phi_i) < (ptr->num_phi)){
{ 
#line 915 "../.././gcc/tree-flow-inline.h"
return get_phi_arg_def_ptr(((ptr->phi_stmt)), (((ptr->phi_i))++)); } }
#line 917 "../.././gcc/tree-flow-inline.h"
(ptr->done) = 1; 
#line 918 "../.././gcc/tree-flow-inline.h"
return (((void *)0)); }
 
#line 923 "../.././gcc/tree-flow-inline.h"
static __inline__  def_operand_p op_iter_next_def( ssa_op_iter *ptr)  {

#line 924 "../.././gcc/tree-flow-inline.h"

#line 924 "../.././gcc/tree-flow-inline.h"
 def_operand_p def_p;
#line 928 "../.././gcc/tree-flow-inline.h"
if ((ptr->defs)){
{ 
#line 930 "../.././gcc/tree-flow-inline.h"
def_p = ((((ptr->defs))->def_ptr)); 
#line 931 "../.././gcc/tree-flow-inline.h"
(ptr->defs) = ((ptr->defs)->next); 
#line 932 "../.././gcc/tree-flow-inline.h"
return def_p; } }
#line 934 "../.././gcc/tree-flow-inline.h"
if ((ptr->mustdefs)){
{ 
#line 936 "../.././gcc/tree-flow-inline.h"
def_p = ((&((((ptr->mustdefs))->def_var)))); 
#line 937 "../.././gcc/tree-flow-inline.h"
(ptr->mustdefs) = ((ptr->mustdefs)->next); 
#line 938 "../.././gcc/tree-flow-inline.h"
return def_p; } }
#line 940 "../.././gcc/tree-flow-inline.h"
if ((ptr->maydefs)){
{ 
#line 942 "../.././gcc/tree-flow-inline.h"
def_p = ((&((((ptr->maydefs))->def_var)))); 
#line 943 "../.././gcc/tree-flow-inline.h"
(ptr->maydefs) = ((ptr->maydefs)->next); 
#line 944 "../.././gcc/tree-flow-inline.h"
return def_p; } }
#line 946 "../.././gcc/tree-flow-inline.h"
(ptr->done) = 1; 
#line 947 "../.././gcc/tree-flow-inline.h"
return (((void *)0)); }
 
#line 952 "../.././gcc/tree-flow-inline.h"
static __inline__  tree op_iter_next_tree( ssa_op_iter *ptr)  {

#line 953 "../.././gcc/tree-flow-inline.h"

#line 953 "../.././gcc/tree-flow-inline.h"
 tree val;
#line 957 "../.././gcc/tree-flow-inline.h"
if ((ptr->uses)){
{ 
#line 959 "../.././gcc/tree-flow-inline.h"
val = (get_use_from_ptr(((&((((ptr->uses))->use_ptr)))))); 
#line 960 "../.././gcc/tree-flow-inline.h"
(ptr->uses) = ((ptr->uses)->next); 
#line 961 "../.././gcc/tree-flow-inline.h"
return val; } }
#line 963 "../.././gcc/tree-flow-inline.h"
if ((ptr->vuses)){
{ 
#line 965 "../.././gcc/tree-flow-inline.h"
val = ((((ptr->vuses))->use_var)); 
#line 966 "../.././gcc/tree-flow-inline.h"
(ptr->vuses) = ((ptr->vuses)->next); 
#line 967 "../.././gcc/tree-flow-inline.h"
return val; } }
#line 969 "../.././gcc/tree-flow-inline.h"
if ((ptr->mayuses)){
{ 
#line 971 "../.././gcc/tree-flow-inline.h"
val = ((((ptr->mayuses))->use_var)); 
#line 972 "../.././gcc/tree-flow-inline.h"
(ptr->mayuses) = ((ptr->mayuses)->next); 
#line 973 "../.././gcc/tree-flow-inline.h"
return val; } }
#line 975 "../.././gcc/tree-flow-inline.h"
if ((ptr->mustkills)){
{ 
#line 977 "../.././gcc/tree-flow-inline.h"
val = ((((ptr->mustkills))->kill_var)); 
#line 978 "../.././gcc/tree-flow-inline.h"
(ptr->mustkills) = ((ptr->mustkills)->next); 
#line 979 "../.././gcc/tree-flow-inline.h"
return val; } }
#line 981 "../.././gcc/tree-flow-inline.h"
if ((ptr->defs)){
{ 
#line 983 "../.././gcc/tree-flow-inline.h"
val = (get_def_from_ptr(((((ptr->defs))->def_ptr)))); 
#line 984 "../.././gcc/tree-flow-inline.h"
(ptr->defs) = ((ptr->defs)->next); 
#line 985 "../.././gcc/tree-flow-inline.h"
return val; } }
#line 987 "../.././gcc/tree-flow-inline.h"
if ((ptr->mustdefs)){
{ 
#line 989 "../.././gcc/tree-flow-inline.h"
val = ((((ptr->mustdefs))->def_var)); 
#line 990 "../.././gcc/tree-flow-inline.h"
(ptr->mustdefs) = ((ptr->mustdefs)->next); 
#line 991 "../.././gcc/tree-flow-inline.h"
return val; } }
#line 993 "../.././gcc/tree-flow-inline.h"
if ((ptr->maydefs)){
{ 
#line 995 "../.././gcc/tree-flow-inline.h"
val = ((((ptr->maydefs))->def_var)); 
#line 996 "../.././gcc/tree-flow-inline.h"
(ptr->maydefs) = ((ptr->maydefs)->next); 
#line 997 "../.././gcc/tree-flow-inline.h"
return val; } }
#line 1000 "../.././gcc/tree-flow-inline.h"
(ptr->done) = 1; 
#line 1001 "../.././gcc/tree-flow-inline.h"
return (( tree )(((void *)0))); }
 
#line 1012 "../.././gcc/tree-flow-inline.h"
static __inline__ void clear_and_done_ssa_iter( ssa_op_iter *ptr)  {

#line 1013 "../.././gcc/tree-flow-inline.h"
(ptr->defs) = (((void *)0)); 
#line 1014 "../.././gcc/tree-flow-inline.h"
(ptr->uses) = (((void *)0)); 
#line 1015 "../.././gcc/tree-flow-inline.h"
(ptr->vuses) = (((void *)0)); 
#line 1016 "../.././gcc/tree-flow-inline.h"
(ptr->maydefs) = (((void *)0)); 
#line 1017 "../.././gcc/tree-flow-inline.h"
(ptr->mayuses) = (((void *)0)); 
#line 1018 "../.././gcc/tree-flow-inline.h"
(ptr->mustdefs) = (((void *)0)); 
#line 1019 "../.././gcc/tree-flow-inline.h"
(ptr->mustkills) = (((void *)0)); 
#line 1020 "../.././gcc/tree-flow-inline.h"
(ptr->iter_type) = ssa_op_iter_none; 
#line 1021 "../.././gcc/tree-flow-inline.h"
(ptr->phi_i) = 0; 
#line 1022 "../.././gcc/tree-flow-inline.h"
(ptr->num_phi) = 0; 
#line 1023 "../.././gcc/tree-flow-inline.h"
(ptr->phi_stmt) = (( tree )(((void *)0))); 
#line 1024 "../.././gcc/tree-flow-inline.h"
(ptr->done) = 1; }
 
#line 1030 "../.././gcc/tree-flow-inline.h"
static __inline__ void op_iter_init( ssa_op_iter *ptr,  tree stmt, int flags)  {

#line 1035 "../.././gcc/tree-flow-inline.h"
(ptr->defs) = ((flags & 0x02)?((stmt_ann(stmt)->operands).def_ops):(((void *)0))); 
#line 1036 "../.././gcc/tree-flow-inline.h"
(ptr->uses) = ((flags & 0x01)?((stmt_ann(stmt)->operands).use_ops):(((void *)0))); 
#line 1037 "../.././gcc/tree-flow-inline.h"
(ptr->vuses) = ((flags & 0x04)?((stmt_ann(stmt)->operands).vuse_ops):(((void *)0))); 
#line 1038 "../.././gcc/tree-flow-inline.h"
(ptr->maydefs) = ((flags & 0x10)?((stmt_ann(stmt)->operands).maydef_ops):(((void *)0))); 
#line 1039 "../.././gcc/tree-flow-inline.h"
(ptr->mayuses) = ((flags & 0x08)?((stmt_ann(stmt)->operands).maydef_ops):(((void *)0))); 
#line 1040 "../.././gcc/tree-flow-inline.h"
(ptr->mustdefs) = ((flags & 0x20)?((stmt_ann(stmt)->operands).mustdef_ops):(((void *)0))); 
#line 1041 "../.././gcc/tree-flow-inline.h"
(ptr->mustkills) = ((flags & 0x40)?((stmt_ann(stmt)->operands).mustdef_ops):(((void *)0))); 
#line 1042 "../.././gcc/tree-flow-inline.h"
(ptr->done) = 0; 
#line 1044 "../.././gcc/tree-flow-inline.h"
(ptr->phi_i) = 0; 
#line 1045 "../.././gcc/tree-flow-inline.h"
(ptr->num_phi) = 0; 
#line 1046 "../.././gcc/tree-flow-inline.h"
(ptr->phi_stmt) = (( tree )(((void *)0))); }
 
#line 1052 "../.././gcc/tree-flow-inline.h"
static __inline__  use_operand_p op_iter_init_use( ssa_op_iter *ptr,  tree stmt, int flags)  {

#line 1053 "../.././gcc/tree-flow-inline.h"
(((void )(((!((flags & ((0x10 | 0x20) | 0x02)) == 0))?fancy_abort("../.././gcc/tree-flow-inline.h", 1064, __FUNCTION__) , 0:0)))); 
#line 1054 "../.././gcc/tree-flow-inline.h"
op_iter_init(ptr, stmt, flags); 
#line 1055 "../.././gcc/tree-flow-inline.h"
(ptr->iter_type) = ssa_op_iter_use; 
#line 1056 "../.././gcc/tree-flow-inline.h"
return op_iter_next_use(ptr); }
 
#line 1062 "../.././gcc/tree-flow-inline.h"
static __inline__  def_operand_p op_iter_init_def( ssa_op_iter *ptr,  tree stmt, int flags)  {

#line 1063 "../.././gcc/tree-flow-inline.h"
(((void )(((!((flags & (((0x04 | 0x08) | 0x01) | (0x40))) == 0))?fancy_abort("../.././gcc/tree-flow-inline.h", 1075, __FUNCTION__) , 0:0)))); 
#line 1064 "../.././gcc/tree-flow-inline.h"
op_iter_init(ptr, stmt, flags); 
#line 1065 "../.././gcc/tree-flow-inline.h"
(ptr->iter_type) = ssa_op_iter_def; 
#line 1066 "../.././gcc/tree-flow-inline.h"
return op_iter_next_def(ptr); }
 
#line 1072 "../.././gcc/tree-flow-inline.h"
static __inline__  tree op_iter_init_tree( ssa_op_iter *ptr,  tree stmt, int flags)  {

#line 1073 "../.././gcc/tree-flow-inline.h"
op_iter_init(ptr, stmt, flags); 
#line 1074 "../.././gcc/tree-flow-inline.h"
(ptr->iter_type) = ssa_op_iter_tree; 
#line 1075 "../.././gcc/tree-flow-inline.h"
return op_iter_next_tree(ptr); }
 
#line 1083 "../.././gcc/tree-flow-inline.h"
static __inline__ void op_iter_next_maymustdef( use_operand_p *use,  def_operand_p *def,  ssa_op_iter *ptr)  {

#line 1095 "../.././gcc/tree-flow-inline.h"
if ((ptr->mayuses)){
{ 
#line 1089 "../.././gcc/tree-flow-inline.h"
(*def) = ((&((((ptr->mayuses))->def_var)))); 
#line 1090 "../.././gcc/tree-flow-inline.h"
(*use) = ((&((((ptr->mayuses))->use_ptr)))); 
#line 1091 "../.././gcc/tree-flow-inline.h"
(ptr->mayuses) = ((ptr->mayuses)->next); 
#line 1092 "../.././gcc/tree-flow-inline.h"
return ; } }
#line 1095 "../.././gcc/tree-flow-inline.h"
if ((ptr->mustkills)){
{ 
#line 1097 "../.././gcc/tree-flow-inline.h"
(*def) = ((&((((ptr->mustkills))->def_var)))); 
#line 1098 "../.././gcc/tree-flow-inline.h"
(*use) = ((&((((ptr->mustkills))->use_ptr)))); 
#line 1099 "../.././gcc/tree-flow-inline.h"
(ptr->mustkills) = ((ptr->mustkills)->next); 
#line 1100 "../.././gcc/tree-flow-inline.h"
return ; } }
#line 1103 "../.././gcc/tree-flow-inline.h"
(*def) = (((void *)0)); 
#line 1104 "../.././gcc/tree-flow-inline.h"
(*use) = (((void *)0)); 
#line 1105 "../.././gcc/tree-flow-inline.h"
(ptr->done) = 1; 
#line 1106 "../.././gcc/tree-flow-inline.h"
return ; }
 
#line 1115 "../.././gcc/tree-flow-inline.h"
static __inline__ void op_iter_init_maydef( ssa_op_iter *ptr,  tree stmt,  use_operand_p *use,  def_operand_p *def)  {

#line 1116 "../.././gcc/tree-flow-inline.h"
(((void )(((!((((enum tree_code )((stmt)->common).code)) != PHI_NODE))?fancy_abort("../.././gcc/tree-flow-inline.h", 1129, __FUNCTION__) , 0:0)))); 
#line 1118 "../.././gcc/tree-flow-inline.h"
op_iter_init(ptr, stmt, 0x08); 
#line 1119 "../.././gcc/tree-flow-inline.h"
(ptr->iter_type) = ssa_op_iter_maymustdef; 
#line 1120 "../.././gcc/tree-flow-inline.h"
op_iter_next_maymustdef(use, def, ptr); }
 
#line 1129 "../.././gcc/tree-flow-inline.h"
static __inline__ void op_iter_init_mustdef( ssa_op_iter *ptr,  tree stmt,  use_operand_p *kill,  def_operand_p *def)  {

#line 1130 "../.././gcc/tree-flow-inline.h"
(((void )(((!((((enum tree_code )((stmt)->common).code)) != PHI_NODE))?fancy_abort("../.././gcc/tree-flow-inline.h", 1143, __FUNCTION__) , 0:0)))); 
#line 1132 "../.././gcc/tree-flow-inline.h"
op_iter_init(ptr, stmt, 0x40); 
#line 1133 "../.././gcc/tree-flow-inline.h"
(ptr->iter_type) = ssa_op_iter_maymustdef; 
#line 1134 "../.././gcc/tree-flow-inline.h"
op_iter_next_maymustdef(kill, def, ptr); }
 
#line 1142 "../.././gcc/tree-flow-inline.h"
static __inline__ void op_iter_init_must_and_may_def( ssa_op_iter *ptr,  tree stmt,  use_operand_p *kill,  def_operand_p *def)  {

#line 1143 "../.././gcc/tree-flow-inline.h"
(((void )(((!((((enum tree_code )((stmt)->common).code)) != PHI_NODE))?fancy_abort("../.././gcc/tree-flow-inline.h", 1156, __FUNCTION__) , 0:0)))); 
#line 1145 "../.././gcc/tree-flow-inline.h"
op_iter_init(ptr, stmt, 0x40 | 0x08); 
#line 1146 "../.././gcc/tree-flow-inline.h"
(ptr->iter_type) = ssa_op_iter_maymustdef; 
#line 1147 "../.././gcc/tree-flow-inline.h"
op_iter_next_maymustdef(kill, def, ptr); }
 
#line 1154 "../.././gcc/tree-flow-inline.h"
static __inline__  tree single_ssa_tree_operand( tree stmt, int flags)  {

#line 1155 "../.././gcc/tree-flow-inline.h"

#line 1155 "../.././gcc/tree-flow-inline.h"
 tree var;
#line 1156 "../.././gcc/tree-flow-inline.h"

#line 1156 "../.././gcc/tree-flow-inline.h"
 ssa_op_iter iter;
#line 1158 "../.././gcc/tree-flow-inline.h"
var = op_iter_init_tree((&iter), stmt, flags); 
#line 1159 "../.././gcc/tree-flow-inline.h"
if (op_iter_done((&iter))){
return (( tree )(((void *)0))); }
#line 1161 "../.././gcc/tree-flow-inline.h"
op_iter_next_tree((&iter)); 
#line 1162 "../.././gcc/tree-flow-inline.h"
if (op_iter_done((&iter))){
return var; }
#line 1164 "../.././gcc/tree-flow-inline.h"
return (( tree )(((void *)0))); }
 
#line 1171 "../.././gcc/tree-flow-inline.h"
static __inline__  use_operand_p single_ssa_use_operand( tree stmt, int flags)  {

#line 1172 "../.././gcc/tree-flow-inline.h"

#line 1172 "../.././gcc/tree-flow-inline.h"
 use_operand_p var;
#line 1173 "../.././gcc/tree-flow-inline.h"

#line 1173 "../.././gcc/tree-flow-inline.h"
 ssa_op_iter iter;
#line 1175 "../.././gcc/tree-flow-inline.h"
var = op_iter_init_use((&iter), stmt, flags); 
#line 1176 "../.././gcc/tree-flow-inline.h"
if (op_iter_done((&iter))){
return (((void *)0)); }
#line 1178 "../.././gcc/tree-flow-inline.h"
op_iter_next_use((&iter)); 
#line 1179 "../.././gcc/tree-flow-inline.h"
if (op_iter_done((&iter))){
return var; }
#line 1181 "../.././gcc/tree-flow-inline.h"
return (((void *)0)); }
 
#line 1189 "../.././gcc/tree-flow-inline.h"
static __inline__  def_operand_p single_ssa_def_operand( tree stmt, int flags)  {

#line 1190 "../.././gcc/tree-flow-inline.h"

#line 1190 "../.././gcc/tree-flow-inline.h"
 def_operand_p var;
#line 1191 "../.././gcc/tree-flow-inline.h"

#line 1191 "../.././gcc/tree-flow-inline.h"
 ssa_op_iter iter;
#line 1193 "../.././gcc/tree-flow-inline.h"
var = op_iter_init_def((&iter), stmt, flags); 
#line 1194 "../.././gcc/tree-flow-inline.h"
if (op_iter_done((&iter))){
return (((void *)0)); }
#line 1196 "../.././gcc/tree-flow-inline.h"
op_iter_next_def((&iter)); 
#line 1197 "../.././gcc/tree-flow-inline.h"
if (op_iter_done((&iter))){
return var; }
#line 1199 "../.././gcc/tree-flow-inline.h"
return (((void *)0)); }
 
#line 1207 "../.././gcc/tree-flow-inline.h"
static __inline__ unsigned char zero_ssa_operands( tree stmt, int flags)  {

#line 1208 "../.././gcc/tree-flow-inline.h"

#line 1208 "../.././gcc/tree-flow-inline.h"
 ssa_op_iter iter;
#line 1210 "../.././gcc/tree-flow-inline.h"
op_iter_init_tree((&iter), stmt, flags); 
#line 1211 "../.././gcc/tree-flow-inline.h"
return op_iter_done((&iter)); }
 
#line 1218 "../.././gcc/tree-flow-inline.h"
static __inline__ int num_ssa_operands( tree stmt, int flags)  {

#line 1219 "../.././gcc/tree-flow-inline.h"

#line 1219 "../.././gcc/tree-flow-inline.h"
 ssa_op_iter iter;
#line 1220 "../.././gcc/tree-flow-inline.h"

#line 1220 "../.././gcc/tree-flow-inline.h"
 tree t;
#line 1221 "../.././gcc/tree-flow-inline.h"

#line 1221 "../.././gcc/tree-flow-inline.h"
int num = 0;
#line 1223 "../.././gcc/tree-flow-inline.h"
for(t = op_iter_init_tree((&(iter)), stmt, flags);(!op_iter_done((&(iter))));t = op_iter_next_tree((&(iter)))) { num++; } 
#line 1225 "../.././gcc/tree-flow-inline.h"
return num; }
 
#line 1232 "../.././gcc/tree-flow-inline.h"
static __inline__ void delink_stmt_imm_use( tree stmt)  {

#line 1233 "../.././gcc/tree-flow-inline.h"

#line 1233 "../.././gcc/tree-flow-inline.h"
 ssa_op_iter iter;
#line 1234 "../.././gcc/tree-flow-inline.h"

#line 1234 "../.././gcc/tree-flow-inline.h"
 use_operand_p use_p;
#line 1236 "../.././gcc/tree-flow-inline.h"
if (ssa_operands_active()){
for(use_p = op_iter_init_use((&(iter)), stmt, (((0x04 | 0x08) | 0x01) | ((0x40))));(!op_iter_done((&(iter))));use_p = op_iter_next_use((&(iter)))) { delink_imm_use(use_p); } }}
 
#line 1247 "../.././gcc/tree-flow-inline.h"
static __inline__ unsigned char compare_ssa_operands_equal( tree stmt1,  tree stmt2, int flags)  {

#line 1248 "../.././gcc/tree-flow-inline.h"

#line 1248 "../.././gcc/tree-flow-inline.h"
 ssa_op_iter iter1,iter2;
#line 1249 "../.././gcc/tree-flow-inline.h"

#line 1249 "../.././gcc/tree-flow-inline.h"
 tree op1 = (( tree )(((void *)0)));
#line 1250 "../.././gcc/tree-flow-inline.h"

#line 1250 "../.././gcc/tree-flow-inline.h"
 tree op2 = (( tree )(((void *)0)));
#line 1251 "../.././gcc/tree-flow-inline.h"

#line 1251 "../.././gcc/tree-flow-inline.h"
unsigned char look1,look2;
#line 1253 "../.././gcc/tree-flow-inline.h"
if (stmt1 == stmt2){
return 1; }
#line 1256 "../.././gcc/tree-flow-inline.h"
look1 = stmt1 && stmt_ann(stmt1); 
#line 1257 "../.././gcc/tree-flow-inline.h"
look2 = stmt2 && stmt_ann(stmt2); 
#line 1259 "../.././gcc/tree-flow-inline.h"
if (look1){
{ 
#line 1261 "../.././gcc/tree-flow-inline.h"
op1 = op_iter_init_tree((&iter1), stmt1, flags); 
#line 1262 "../.././gcc/tree-flow-inline.h"
if ((!look2)){
return op_iter_done((&iter1)); }} }else{
clear_and_done_ssa_iter((&iter1)); }
#line 1268 "../.././gcc/tree-flow-inline.h"
if (look2){
{ 
#line 1270 "../.././gcc/tree-flow-inline.h"
op2 = op_iter_init_tree((&iter2), stmt2, flags); 
#line 1271 "../.././gcc/tree-flow-inline.h"
if ((!look1)){
return op_iter_done((&iter2)); }} }else{
clear_and_done_ssa_iter((&iter2)); }
#line 1277 "../.././gcc/tree-flow-inline.h"
while((!op_iter_done((&iter1))) && (!op_iter_done((&iter2)))) { { 
#line 1281 "../.././gcc/tree-flow-inline.h"
if (op1 != op2){
return 0; }
#line 1281 "../.././gcc/tree-flow-inline.h"
op1 = op_iter_next_tree((&iter1)); 
#line 1282 "../.././gcc/tree-flow-inline.h"
op2 = op_iter_next_tree((&iter2)); } } 
#line 1285 "../.././gcc/tree-flow-inline.h"
return (op_iter_done((&iter1)) && op_iter_done((&iter2))); }
 
#line 1292 "../.././gcc/tree-flow-inline.h"
static __inline__  tree single_phi_def( tree stmt, int flags)  {

#line 1293 "../.././gcc/tree-flow-inline.h"

#line 1293 "../.././gcc/tree-flow-inline.h"
 tree def = get_def_from_ptr(get_phi_result_ptr(stmt));
#line 1294 "../.././gcc/tree-flow-inline.h"
if ((flags & 0x02) && is_gimple_reg(def)){
return def; }
#line 1296 "../.././gcc/tree-flow-inline.h"
if ((flags & (0x10 | 0x20)) && (!is_gimple_reg(def))){
return def; }
#line 1298 "../.././gcc/tree-flow-inline.h"
return (( tree )(((void *)0))); }
 
#line 1304 "../.././gcc/tree-flow-inline.h"
static __inline__  use_operand_p op_iter_init_phiuse( ssa_op_iter *ptr,  tree phi, int flags)  {

#line 1305 "../.././gcc/tree-flow-inline.h"

#line 1305 "../.././gcc/tree-flow-inline.h"
 tree phi_def = get_def_from_ptr(get_phi_result_ptr(phi));
#line 1306 "../.././gcc/tree-flow-inline.h"

#line 1306 "../.././gcc/tree-flow-inline.h"
int comp;
#line 1308 "../.././gcc/tree-flow-inline.h"
clear_and_done_ssa_iter(ptr); 
#line 1309 "../.././gcc/tree-flow-inline.h"
(ptr->done) = 0; 
#line 1311 "../.././gcc/tree-flow-inline.h"
(((void )(((!((flags & (0x01 | (0x04 | 0x08))) != 0))?fancy_abort("../.././gcc/tree-flow-inline.h", 1329, __FUNCTION__) , 0:0)))); 
#line 1313 "../.././gcc/tree-flow-inline.h"
comp = ((is_gimple_reg(phi_def)?0x01:(0x04 | 0x08))); 
#line 1316 "../.././gcc/tree-flow-inline.h"
if ((flags & comp) == 0){
{ 
#line 1318 "../.././gcc/tree-flow-inline.h"
(ptr->done) = 1; 
#line 1319 "../.././gcc/tree-flow-inline.h"
return (((void *)0)); } }
#line 1322 "../.././gcc/tree-flow-inline.h"
(ptr->phi_stmt) = phi; 
#line 1323 "../.././gcc/tree-flow-inline.h"
(ptr->num_phi) = ((phi)->phi).num_args; 
#line 1324 "../.././gcc/tree-flow-inline.h"
(ptr->iter_type) = ssa_op_iter_use; 
#line 1325 "../.././gcc/tree-flow-inline.h"
return op_iter_next_use(ptr); }
 
#line 1332 "../.././gcc/tree-flow-inline.h"
static __inline__  def_operand_p op_iter_init_phidef( ssa_op_iter *ptr,  tree phi, int flags)  {

#line 1333 "../.././gcc/tree-flow-inline.h"

#line 1333 "../.././gcc/tree-flow-inline.h"
 tree phi_def = get_def_from_ptr(get_phi_result_ptr(phi));
#line 1334 "../.././gcc/tree-flow-inline.h"

#line 1334 "../.././gcc/tree-flow-inline.h"
int comp;
#line 1336 "../.././gcc/tree-flow-inline.h"
clear_and_done_ssa_iter(ptr); 
#line 1337 "../.././gcc/tree-flow-inline.h"
(ptr->done) = 0; 
#line 1339 "../.././gcc/tree-flow-inline.h"
(((void )(((!((flags & (0x02 | (0x10 | 0x20))) != 0))?fancy_abort("../.././gcc/tree-flow-inline.h", 1358, __FUNCTION__) , 0:0)))); 
#line 1341 "../.././gcc/tree-flow-inline.h"
comp = ((is_gimple_reg(phi_def)?0x02:(0x10 | 0x20))); 
#line 1344 "../.././gcc/tree-flow-inline.h"
if ((flags & comp) == 0){
{ 
#line 1346 "../.././gcc/tree-flow-inline.h"
(ptr->done) = 1; 
#line 1347 "../.././gcc/tree-flow-inline.h"
return (((void *)0)); } }
#line 1350 "../.././gcc/tree-flow-inline.h"
(ptr->iter_type) = ssa_op_iter_def; 
#line 1354 "../.././gcc/tree-flow-inline.h"
return get_phi_result_ptr(phi); }
 
#line 1363 "../.././gcc/tree-flow-inline.h"
static __inline__ unsigned char unmodifiable_var_p( tree var)  {

#line 1366 "../.././gcc/tree-flow-inline.h"
if ((((enum tree_code )((var)->common).code)) == SSA_NAME){
var = ((var)->ssa_name).var; }
#line 1366 "../.././gcc/tree-flow-inline.h"
return (((var)->common).readonly_flag) && ((((var)->common).static_flag) || (((var)->decl_common).decl_flag_2)); }
 
#line 1373 "../.././gcc/tree-flow-inline.h"
static __inline__ unsigned char array_ref_contains_indirect_ref( tree ref)  {

#line 1374 "../.././gcc/tree-flow-inline.h"
(((void )(((!((((enum tree_code )((ref)->common).code)) == ARRAY_REF))?fancy_abort("../.././gcc/tree-flow-inline.h", 1393, __FUNCTION__) , 0:0)))); 
#line 1376 "../.././gcc/tree-flow-inline.h"
do { { 
#line 1377 "../.././gcc/tree-flow-inline.h"
ref = (((ref)->exp).operands[0]); } } while(handled_component_p(ref)); 
#line 1380 "../.././gcc/tree-flow-inline.h"
return (((enum tree_code )((ref)->common).code)) == INDIRECT_REF; }
 
#line 1388 "../.././gcc/tree-flow-inline.h"
static __inline__ unsigned char ref_contains_array_ref( tree ref)  {

#line 1389 "../.././gcc/tree-flow-inline.h"
(((void )(((!(handled_component_p(ref)))?fancy_abort("../.././gcc/tree-flow-inline.h", 1408, __FUNCTION__) , 0:0)))); 
#line 1391 "../.././gcc/tree-flow-inline.h"
do { { 
#line 1394 "../.././gcc/tree-flow-inline.h"
if ((((enum tree_code )((ref)->common).code)) == ARRAY_REF){
return 1; }
#line 1394 "../.././gcc/tree-flow-inline.h"
ref = (((ref)->exp).operands[0]); } } while(handled_component_p(ref)); 
#line 1397 "../.././gcc/tree-flow-inline.h"
return 0; }
 
#line 1405 "../.././gcc/tree-flow-inline.h"
static __inline__  subvar_t *lookup_subvars_for_var( tree var)  {

#line 1406 "../.././gcc/tree-flow-inline.h"

#line 1406 "../.././gcc/tree-flow-inline.h"
 var_ann_t ann = var_ann(var);
#line 1407 "../.././gcc/tree-flow-inline.h"
(((void )(((!(ann))?fancy_abort("../.././gcc/tree-flow-inline.h", 1426, __FUNCTION__) , 0:0)))); 
#line 1408 "../.././gcc/tree-flow-inline.h"
return (&(ann->subvars)); }
 
#line 1415 "../.././gcc/tree-flow-inline.h"
static __inline__  subvar_t get_subvars_for_var( tree var)  {

#line 1416 "../.././gcc/tree-flow-inline.h"

#line 1416 "../.././gcc/tree-flow-inline.h"
 subvar_t subvars;
#line 1418 "../.././gcc/tree-flow-inline.h"
(((void )(((!(((((enum tree_code )((var)->common).code)) == VAR_DECL || (((enum tree_code )((var)->common).code)) == PARM_DECL || (((enum tree_code )((var)->common).code)) == RESULT_DECL || ((((enum tree_code )((var)->common).code)) == SSA_NAME && ((((enum tree_code )((((var)->ssa_name).var)->common).code)) == VAR_DECL || (((enum tree_code )((((var)->ssa_name).var)->common).code)) == PARM_DECL || (((enum tree_code )((((var)->ssa_name).var)->common).code)) == RESULT_DECL)))))?fancy_abort("../.././gcc/tree-flow-inline.h", 1438, __FUNCTION__) , 0:0)))); 
#line 1420 "../.././gcc/tree-flow-inline.h"
if ((((enum tree_code )((var)->common).code)) == SSA_NAME){
subvars = (*(lookup_subvars_for_var(((var)->ssa_name).var))); }else{
subvars = (*(lookup_subvars_for_var(var))); }
#line 1424 "../.././gcc/tree-flow-inline.h"
return subvars; }
 
#line 1430 "../.././gcc/tree-flow-inline.h"
static __inline__  tree get_subvar_at( tree var, unsigned long offset)  {

#line 1431 "../.././gcc/tree-flow-inline.h"

#line 1431 "../.././gcc/tree-flow-inline.h"
 subvar_t sv;
#line 1433 "../.././gcc/tree-flow-inline.h"
for(sv = get_subvars_for_var(var);sv;sv = (sv->next)) { if ((sv->offset) == offset){
return (sv->var); }} 
#line 1437 "../.././gcc/tree-flow-inline.h"
return (( tree )(((void *)0))); }
 
#line 1446 "../.././gcc/tree-flow-inline.h"
static __inline__ unsigned char var_can_have_subvars( tree v)  {

#line 1451 "../.././gcc/tree-flow-inline.h"
if ((((v)->common).volatile_flag)){
return 0; }
#line 1451 "../.././gcc/tree-flow-inline.h"
return (((((enum tree_code )(((((v)->common).type))->common).code)) == ARRAY_TYPE || (((enum tree_code )(((((v)->common).type))->common).code)) == RECORD_TYPE || (((enum tree_code )(((((v)->common).type))->common).code)) == UNION_TYPE || (((enum tree_code )(((((v)->common).type))->common).code)) == QUAL_UNION_TYPE) && (((enum tree_code )(((((v)->common).type))->common).code)) != ARRAY_TYPE); }
 
#line 1463 "../.././gcc/tree-flow-inline.h"
static __inline__ unsigned char overlap_subvar(unsigned long offset, unsigned long size,  subvar_t sv, unsigned char *exact)  {

#line 1503 "../.././gcc/tree-flow-inline.h"
if (exact){
(*exact) = 0; }
#line 1503 "../.././gcc/tree-flow-inline.h"
if (offset == (sv->offset) && size == (sv->size)){
{ 
#line 1507 "../.././gcc/tree-flow-inline.h"
if (exact){
(*exact) = 1; }
#line 1507 "../.././gcc/tree-flow-inline.h"
return 1; } }else{
if (offset >= (sv->offset) && offset < ((sv->offset) + (sv->size))){
{ 
#line 1511 "../.././gcc/tree-flow-inline.h"
return 1; } }else{
if (offset < (sv->offset) && (size > (sv->offset) - offset)){
{ 
#line 1515 "../.././gcc/tree-flow-inline.h"
return 1; } }}}
#line 1517 "../.././gcc/tree-flow-inline.h"
return 0; }
 
# 1501 "../.././gcc/tree-flow-inline.h" 
# 902 "../.././gcc/tree-flow.h" 2
# 38 "../.././gcc/tree-mudflap.c" 2
# 1 "../.././gcc/tree-mudflap.h" 1
# 26 "../.././gcc/tree-mudflap.h" 
extern void mudflap_init(void ); 
#line 27 "../.././gcc/tree-mudflap.h"
extern void mudflap_enqueue_decl( tree ); 
#line 28 "../.././gcc/tree-mudflap.h"
extern void mudflap_enqueue_constant( tree ); 
#line 29 "../.././gcc/tree-mudflap.h"
extern void mudflap_finish_file(void ); 
#line 32 "../.././gcc/tree-mudflap.h"
extern int mf_marked_p( tree ); 
#line 33 "../.././gcc/tree-mudflap.h"
extern  tree mf_mark( tree ); 
# 39 "../.././gcc/tree-mudflap.c" 2
# 1 "../.././gcc/tree-dump.h" 1
# 25 "../.././gcc/tree-dump.h" 
# 1 "../.././gcc/../include/splay-tree.h" 1
# 47 "../.././gcc/../include/splay-tree.h" 
typedef unsigned long int splay_tree_key; 
#line 48 "../.././gcc/../include/splay-tree.h"
typedef unsigned long int splay_tree_value; 
#line 51 "../.././gcc/../include/splay-tree.h"
typedef struct splay_tree_node_s *splay_tree_node; 
#line 55 "../.././gcc/../include/splay-tree.h"
typedef int (*splay_tree_compare_fn)( splay_tree_key ,  splay_tree_key ); 
#line 59 "../.././gcc/../include/splay-tree.h"
typedef void (*splay_tree_delete_key_fn)( splay_tree_key ); 
#line 63 "../.././gcc/../include/splay-tree.h"
typedef void (*splay_tree_delete_value_fn)( splay_tree_value ); 
#line 66 "../.././gcc/../include/splay-tree.h"
typedef int (*splay_tree_foreach_fn)( splay_tree_node , void *); 
#line 72 "../.././gcc/../include/splay-tree.h"
typedef void *(*splay_tree_allocate_fn)(int , void *); 
#line 78 "../.././gcc/../include/splay-tree.h"
typedef void (*splay_tree_deallocate_fn)(void *, void *); 
#line 92 "../.././gcc/../include/splay-tree.h"
struct splay_tree_node_s { splay_tree_key key;  splay_tree_value value;  splay_tree_node left;  splay_tree_node right; }; 
#line 114 "../.././gcc/../include/splay-tree.h"
struct splay_tree_s { splay_tree_node root;  splay_tree_compare_fn comp;  splay_tree_delete_key_fn delete_key;  splay_tree_delete_value_fn delete_value;  splay_tree_allocate_fn allocate;  splay_tree_deallocate_fn deallocate; void *allocate_data; }; 
#line 115 "../.././gcc/../include/splay-tree.h"
typedef struct splay_tree_s *splay_tree; 
#line 119 "../.././gcc/../include/splay-tree.h"
extern  splay_tree splay_tree_new( splay_tree_compare_fn ,  splay_tree_delete_key_fn ,  splay_tree_delete_value_fn ); 
#line 125 "../.././gcc/../include/splay-tree.h"
extern  splay_tree splay_tree_new_with_allocator( splay_tree_compare_fn ,  splay_tree_delete_key_fn ,  splay_tree_delete_value_fn ,  splay_tree_allocate_fn ,  splay_tree_deallocate_fn , void *); 
#line 126 "../.././gcc/../include/splay-tree.h"
extern void splay_tree_delete( splay_tree ); 
#line 129 "../.././gcc/../include/splay-tree.h"
extern  splay_tree_node splay_tree_insert( splay_tree ,  splay_tree_key ,  splay_tree_value ); 
#line 130 "../.././gcc/../include/splay-tree.h"
extern void splay_tree_remove( splay_tree ,  splay_tree_key ); 
#line 131 "../.././gcc/../include/splay-tree.h"
extern  splay_tree_node splay_tree_lookup( splay_tree ,  splay_tree_key ); 
#line 132 "../.././gcc/../include/splay-tree.h"
extern  splay_tree_node splay_tree_predecessor( splay_tree ,  splay_tree_key ); 
#line 133 "../.././gcc/../include/splay-tree.h"
extern  splay_tree_node splay_tree_successor( splay_tree ,  splay_tree_key ); 
#line 134 "../.././gcc/../include/splay-tree.h"
extern  splay_tree_node splay_tree_max( splay_tree ); 
#line 135 "../.././gcc/../include/splay-tree.h"
extern  splay_tree_node splay_tree_min( splay_tree ); 
#line 136 "../.././gcc/../include/splay-tree.h"
extern int splay_tree_foreach( splay_tree ,  splay_tree_foreach_fn , void *); 
#line 137 "../.././gcc/../include/splay-tree.h"
extern int splay_tree_compare_ints( splay_tree_key ,  splay_tree_key ); 
#line 138 "../.././gcc/../include/splay-tree.h"
extern int splay_tree_compare_pointers( splay_tree_key ,  splay_tree_key ); 
# 26 "../.././gcc/tree-dump.h" 2
# 1 "../.././gcc/tree-pass.h" 1
# 48 "../.././gcc/tree-pass.h" 
enum tree_dump_index {TDI_none,TDI_tu,TDI_class,TDI_original,TDI_generic,TDI_nested,TDI_inlined,TDI_vcg,TDI_tree_all,TDI_rtl_all,TDI_ipa_all,TDI_cgraph,TDI_end}; 
#line 72 "../.././gcc/tree-pass.h"
extern char *get_dump_file_name(enum tree_dump_index ); 
#line 73 "../.././gcc/tree-pass.h"
extern int dump_enabled_p(enum tree_dump_index ); 
#line 74 "../.././gcc/tree-pass.h"
extern int dump_initialized_p(enum tree_dump_index ); 
#line 75 "../.././gcc/tree-pass.h"
extern  FILE *dump_begin(enum tree_dump_index , int *); 
#line 76 "../.././gcc/tree-pass.h"
extern void dump_end(enum tree_dump_index ,  FILE *); 
#line 77 "../.././gcc/tree-pass.h"
extern void dump_node( tree , int ,  FILE *); 
#line 78 "../.././gcc/tree-pass.h"
extern int dump_switch_p(const char *); 
#line 79 "../.././gcc/tree-pass.h"
extern const char *dump_flag_name(enum tree_dump_index ); 
#line 82 "../.././gcc/tree-pass.h"
extern  FILE *dump_file; 
#line 83 "../.././gcc/tree-pass.h"
extern int dump_flags; 
#line 84 "../.././gcc/tree-pass.h"
extern const char *dump_file_name; 
#line 87 "../.././gcc/tree-pass.h"
extern struct dump_file_info *get_dump_file_info(enum tree_dump_index ); 
#line 127 "../.././gcc/tree-pass.h"
struct tree_opt_pass {const char *name; unsigned char (*gate)(void ); void (*execute)(void ); struct tree_opt_pass *sub; struct tree_opt_pass *next; int static_pass_number; unsigned int tv_id; unsigned int properties_required; unsigned int properties_provided; unsigned int properties_destroyed; unsigned int todo_flags_start; unsigned int todo_flags_finish; char letter; }; 
#line 139 "../.././gcc/tree-pass.h"
struct dump_file_info {const char *suffix; const char *swtch; const char *glob; int flags; int state; int num; int letter; }; 
# 72 "../.././gcc/tree-pass.h" 
# 212 "../.././gcc/tree-pass.h" 
extern void tree_lowering_passes( tree decl); 
#line 214 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_mudflap_1; 
#line 215 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_mudflap_2; 
#line 216 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_remove_useless_stmts; 
#line 217 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_lower_cf; 
#line 218 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_lower_eh; 
#line 219 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_build_cfg; 
#line 220 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_tree_profile; 
#line 221 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_early_tree_profile; 
#line 222 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_cleanup_cfg; 
#line 223 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_referenced_vars; 
#line 224 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_sra; 
#line 225 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_tail_recursion; 
#line 226 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_tail_calls; 
#line 227 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_tree_loop; 
#line 228 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_tree_loop_init; 
#line 229 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_lim; 
#line 230 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_tree_unswitch; 
#line 231 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_iv_canon; 
#line 232 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_scev_cprop; 
#line 233 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_empty_loop; 
#line 234 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_record_bounds; 
#line 235 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_if_conversion; 
#line 236 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_vectorize; 
#line 237 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_complete_unroll; 
#line 238 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_iv_optimize; 
#line 239 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_tree_loop_done; 
#line 240 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_ch; 
#line 241 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_ccp; 
#line 242 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_build_ssa; 
#line 243 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_del_ssa; 
#line 244 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_dominator; 
#line 245 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_dce; 
#line 246 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_dce_loop; 
#line 247 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_cd_dce; 
#line 248 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_merge_phi; 
#line 249 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_may_alias; 
#line 250 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_split_crit_edges; 
#line 251 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_pre; 
#line 252 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_profile; 
#line 253 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_lower_complex_O0; 
#line 254 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_lower_complex; 
#line 255 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_lower_vector; 
#line 256 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_lower_vector_ssa; 
#line 257 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_object_sizes; 
#line 258 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_fold_builtins; 
#line 259 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_stdarg; 
#line 260 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_early_warn_uninitialized; 
#line 261 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_late_warn_uninitialized; 
#line 262 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_cse_reciprocals; 
#line 263 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_warn_function_return; 
#line 264 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_warn_function_noreturn; 
#line 265 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_phiopt; 
#line 266 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_forwprop; 
#line 267 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_redundant_phi; 
#line 268 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_dse; 
#line 269 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_nrv; 
#line 270 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_remove_useless_vars; 
#line 271 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_mark_used_blocks; 
#line 272 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_rename_ssa_copies; 
#line 273 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_expand; 
#line 274 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_rest_of_compilation; 
#line 275 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_sink_code; 
#line 276 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_fre; 
#line 277 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_linear_transform; 
#line 278 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_copy_prop; 
#line 279 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_phi_only_copy_prop; 
#line 280 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_store_ccp; 
#line 281 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_store_copy_prop; 
#line 282 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_vrp; 
#line 283 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_create_structure_vars; 
#line 284 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_uncprop; 
#line 285 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_return_slot; 
#line 286 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_reassoc; 
#line 287 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_rebuild_cgraph_edges; 
#line 288 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_eliminate_useless_stores; 
#line 291 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_ipa_cp; 
#line 292 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_ipa_inline; 
#line 293 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_early_ipa_inline; 
#line 294 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_ipa_reference; 
#line 295 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_ipa_pure_const; 
#line 296 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_ipa_type_escape; 
#line 297 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_early_local_passes; 
#line 299 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_all_optimizations; 
#line 300 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_cleanup_cfg_post_optimizing; 
#line 301 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_free_cfg_annotations; 
#line 302 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_free_datastructures; 
#line 303 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_init_datastructures; 
#line 304 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_fixup_cfg; 
#line 306 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_remove_unnecessary_notes; 
#line 307 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_init_function; 
#line 308 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_jump; 
#line 309 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_insn_locators_initialize; 
#line 310 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_rtl_eh; 
#line 311 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_initial_value_sets; 
#line 312 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_unshare_all_rtl; 
#line 313 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_instantiate_virtual_regs; 
#line 314 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_jump2; 
#line 315 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_cse; 
#line 316 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_gcse; 
#line 317 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_loop_optimize; 
#line 318 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_jump_bypass; 
#line 319 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_cfg; 
#line 320 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_profiling; 
#line 321 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_rtl_ifcvt; 
#line 322 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_tracer; 
#line 324 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_loop2; 
#line 325 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_rtl_loop_init; 
#line 326 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_rtl_move_loop_invariants; 
#line 327 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_rtl_unswitch; 
#line 328 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_rtl_unroll_and_peel_loops; 
#line 329 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_rtl_doloop; 
#line 330 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_rtl_loop_done; 
#line 332 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_web; 
#line 333 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_cse2; 
#line 334 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_life; 
#line 335 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_combine; 
#line 336 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_if_after_combine; 
#line 337 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_partition_blocks; 
#line 338 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_partition_blocks; 
#line 339 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_regmove; 
#line 340 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_split_all_insns; 
#line 341 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_mode_switching; 
#line 342 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_recompute_reg_usage; 
#line 343 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_sms; 
#line 344 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_sched; 
#line 345 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_local_alloc; 
#line 346 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_global_alloc; 
#line 347 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_postreload; 
#line 348 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_clean_state; 
#line 349 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_branch_prob; 
#line 350 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_value_profile_transformations; 
#line 351 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_remove_death_notes; 
#line 352 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_postreload_cse; 
#line 353 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_gcse2; 
#line 354 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_flow2; 
#line 355 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_stack_adjustments; 
#line 356 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_peephole2; 
#line 357 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_if_after_reload; 
#line 358 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_regrename; 
#line 359 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_reorder_blocks; 
#line 360 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_branch_target_load_optimize; 
#line 361 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_leaf_regs; 
#line 362 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_sched2; 
#line 363 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_stack_regs; 
#line 364 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_compute_alignments; 
#line 365 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_duplicate_computed_gotos; 
#line 366 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_variable_tracking; 
#line 367 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_free_cfg; 
#line 368 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_machine_reorg; 
#line 369 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_purge_lineno_notes; 
#line 370 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_cleanup_barriers; 
#line 371 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_delay_slots; 
#line 372 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_split_for_shorten_branches; 
#line 373 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_split_before_regstack; 
#line 374 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_convert_to_eh_region_ranges; 
#line 375 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_shorten_branches; 
#line 376 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_set_nothrow_function_flags; 
#line 377 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass pass_final; 
#line 380 "../.././gcc/tree-pass.h"
extern struct tree_opt_pass *all_passes,*all_ipa_passes,*all_lowering_passes; 
#line 382 "../.././gcc/tree-pass.h"
extern void execute_pass_list(struct tree_opt_pass *); 
#line 383 "../.././gcc/tree-pass.h"
extern void execute_ipa_pass_list(struct tree_opt_pass *); 
#line 28 "../.././gcc/tree-dump.h"
typedef struct dump_info *dump_info_p; 
#line 42 "../.././gcc/tree-dump.h"
typedef struct dump_node_info {unsigned int index; unsigned int binfo_p:1; }*dump_node_info_p; 
#line 52 "../.././gcc/tree-dump.h"
typedef struct dump_queue { splay_tree_node node; struct dump_queue *next; }*dump_queue_p; 
#line 79 "../.././gcc/tree-dump.h"
struct dump_info { FILE *stream;  tree node; int flags; unsigned int index; unsigned int column;  dump_queue_p queue;  dump_queue_p queue_end;  dump_queue_p free_list;  splay_tree nodes; }; 
#line 85 "../.././gcc/tree-dump.h"
extern void dump_pointer( dump_info_p , const char *, void *); 
#line 86 "../.././gcc/tree-dump.h"
extern void dump_int( dump_info_p , const char *, int ); 
#line 87 "../.././gcc/tree-dump.h"
extern void dump_string( dump_info_p , const char *); 
#line 88 "../.././gcc/tree-dump.h"
extern void dump_string_field( dump_info_p , const char *, const char *); 
#line 89 "../.././gcc/tree-dump.h"
extern void dump_stmt( dump_info_p ,  tree ); 
#line 90 "../.././gcc/tree-dump.h"
extern void queue_and_dump_index( dump_info_p , const char *,  tree , int ); 
#line 91 "../.././gcc/tree-dump.h"
extern void queue_and_dump_type( dump_info_p ,  tree ); 
#line 92 "../.././gcc/tree-dump.h"
extern void dump_function(enum tree_dump_index ,  tree ); 
#line 93 "../.././gcc/tree-dump.h"
extern void dump_function_to_file( tree ,  FILE *, int ); 
#line 94 "../.././gcc/tree-dump.h"
extern int dump_flag( dump_info_p , int ,  tree ); 
#line 97 "../.././gcc/tree-dump.h"
extern unsigned int dump_register(const char *, const char *, const char *, int , unsigned int , int ); 
# 27 "../.././gcc/tree-dump.h" 2
# 40 "../.././gcc/tree-mudflap.c" 2
# 1 "../.././gcc/diagnostic.h" 1
# 26 "../.././gcc/diagnostic.h" 
# 1 "../.././gcc/pretty-print.h" 1
# 25 "../.././gcc/pretty-print.h" 
# 1 "../.././gcc/../include/obstack.h" 1
# 39 "../.././gcc/pretty-print.h" 2
typedef struct {const char *format_spec;  va_list *args_ptr; int err_no;  location_t *locus; }text_info; 
#line 51 "../.././gcc/pretty-print.h"
typedef enum {DIAGNOSTICS_SHOW_PREFIX_ONCE=0x0,DIAGNOSTICS_SHOW_PREFIX_NEVER=0x1,DIAGNOSTICS_SHOW_PREFIX_EVERY_LINE=0x2}diagnostic_prefixing_rule_t; 
#line 70 "../.././gcc/pretty-print.h"
struct chunk_info {struct chunk_info *prev; const char *args[30 * 2]; }; 
#line 99 "../.././gcc/pretty-print.h"
typedef struct {struct obstack formatted_obstack; struct obstack chunk_obstack; struct obstack *obstack; struct chunk_info *cur_chunk_array;  FILE *stream; int line_length; char digit_buffer[128]; }output_buffer; 
#line 102 "../.././gcc/pretty-print.h"
typedef unsigned int pp_flags; 
#line 107 "../.././gcc/pretty-print.h"
typedef enum {pp_none,pp_before,pp_after}pp_padding; 
#line 119 "../.././gcc/pretty-print.h"
typedef struct { diagnostic_prefixing_rule_t rule; int line_cutoff; }pp_wrapping_mode_t; 
#line 134 "../.././gcc/pretty-print.h"
typedef struct pretty_print_info pretty_printer; 
#line 136 "../.././gcc/pretty-print.h"
typedef unsigned char (*printer_fn)( pretty_printer *,  text_info *, const char *, int , unsigned char , unsigned char , unsigned char ); 
# 134 "../.././gcc/pretty-print.h" 
# 154 "../.././gcc/pretty-print.h" 
# 190 "../.././gcc/pretty-print.h" 
struct pretty_print_info { output_buffer *buffer; const char *prefix;  pp_padding padding; int maximum_length; int indent_skip;  pp_wrapping_mode_t wrapping;  printer_fn format_decoder; unsigned char emitted_prefix; unsigned char need_newline; }; 
#line 291 "../.././gcc/pretty-print.h"
extern void pp_construct( pretty_printer *, const char *, int ); 
#line 292 "../.././gcc/pretty-print.h"
extern void pp_base_set_line_maximum_length( pretty_printer *, int ); 
#line 293 "../.././gcc/pretty-print.h"
extern void pp_base_set_prefix( pretty_printer *, const char *); 
#line 294 "../.././gcc/pretty-print.h"
extern void pp_base_destroy_prefix( pretty_printer *); 
#line 295 "../.././gcc/pretty-print.h"
extern int pp_base_remaining_character_count_for_line( pretty_printer *); 
#line 296 "../.././gcc/pretty-print.h"
extern void pp_base_clear_output_area( pretty_printer *); 
#line 297 "../.././gcc/pretty-print.h"
extern const char *pp_base_formatted_text( pretty_printer *); 
#line 298 "../.././gcc/pretty-print.h"
extern const char *pp_base_last_position_in_text(const  pretty_printer *); 
#line 299 "../.././gcc/pretty-print.h"
extern void pp_base_emit_prefix( pretty_printer *); 
#line 300 "../.././gcc/pretty-print.h"
extern void pp_base_append_text( pretty_printer *, const char *, const char *); 
# 291 "../.././gcc/pretty-print.h" 
# 310 "../.././gcc/pretty-print.h" 
extern void pp_printf( pretty_printer *, const char *, ...) __attribute__  (( __format__ ( __gcc_diag__, 2, 3 )  ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 313 "../.././gcc/pretty-print.h"
extern void pp_verbatim( pretty_printer *, const char *, ...) __attribute__  (( __format__ ( __gcc_diag__, 2, 3 )  ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 314 "../.././gcc/pretty-print.h"
extern void pp_base_flush( pretty_printer *); 
#line 315 "../.././gcc/pretty-print.h"
extern void pp_base_format( pretty_printer *,  text_info *); 
#line 316 "../.././gcc/pretty-print.h"
extern void pp_base_output_formatted_text( pretty_printer *); 
#line 317 "../.././gcc/pretty-print.h"
extern void pp_base_format_verbatim( pretty_printer *,  text_info *); 
#line 319 "../.././gcc/pretty-print.h"
extern void pp_base_indent( pretty_printer *); 
#line 320 "../.././gcc/pretty-print.h"
extern void pp_base_newline( pretty_printer *); 
#line 321 "../.././gcc/pretty-print.h"
extern void pp_base_character( pretty_printer *, int ); 
#line 322 "../.././gcc/pretty-print.h"
extern void pp_base_string( pretty_printer *, const char *); 
#line 323 "../.././gcc/pretty-print.h"
extern void pp_write_text_to_stream( pretty_printer *pp); 
#line 324 "../.././gcc/pretty-print.h"
extern void pp_base_maybe_space( pretty_printer *); 
#line 328 "../.././gcc/pretty-print.h"
static __inline__  pp_wrapping_mode_t pp_set_verbatim_wrapping_( pretty_printer *pp)  {

#line 329 "../.././gcc/pretty-print.h"

#line 329 "../.././gcc/pretty-print.h"
 pp_wrapping_mode_t oldmode = ((pp)->wrapping);
#line 330 "../.././gcc/pretty-print.h"
((pp)->wrapping).line_cutoff = 0; 
#line 331 "../.././gcc/pretty-print.h"
((pp)->wrapping).rule = DIAGNOSTICS_SHOW_PREFIX_NEVER; 
#line 332 "../.././gcc/pretty-print.h"
return oldmode; }
 
# 27 "../.././gcc/diagnostic.h" 2
# 1 "../.././gcc/diagnostic.def" 1
# 35 "../.././gcc/diagnostic.h" 2
typedef enum {DK_FATAL,DK_ICE,DK_ERROR,DK_SORRY,DK_WARNING,DK_ANACHRONISM,DK_NOTE,DK_DEBUG,DK_LAST_DIAGNOSTIC_KIND}diagnostic_t; 
#line 48 "../.././gcc/diagnostic.h"
typedef struct { text_info message;  location_t location;  diagnostic_t kind; int option_index; }diagnostic_info; 
#line 54 "../.././gcc/diagnostic.h"
typedef struct diagnostic_context diagnostic_context; 
#line 56 "../.././gcc/diagnostic.h"
typedef void (*diagnostic_starter_fn)( diagnostic_context *,  diagnostic_info *); 
#line 57 "../.././gcc/diagnostic.h"
typedef  diagnostic_starter_fn diagnostic_finalizer_fn; 
#line 107 "../.././gcc/diagnostic.h"
struct diagnostic_context { pretty_printer *printer; int diagnostic_count[DK_LAST_DIAGNOSTIC_KIND]; unsigned char issue_warnings_are_errors_message; unsigned char warning_as_error_requested; unsigned char show_option_requested; unsigned char abort_on_error;  diagnostic_starter_fn begin_diagnostic;  diagnostic_finalizer_fn end_diagnostic; void (*internal_error)(const char *,  va_list *);  tree last_function; int last_module; int lock; }; 
# 90 "../.././gcc/diagnostic.h" 
# 158 "../.././gcc/diagnostic.h" 
extern  diagnostic_context *global_dc; 
#line 179 "../.././gcc/diagnostic.h"
extern void diagnostic_initialize( diagnostic_context *); 
#line 180 "../.././gcc/diagnostic.h"
extern void diagnostic_report_current_module( diagnostic_context *); 
#line 181 "../.././gcc/diagnostic.h"
extern void diagnostic_report_current_function( diagnostic_context *); 
#line 183 "../.././gcc/diagnostic.h"
extern void diagnostic_report_diagnostic( diagnostic_context *,  diagnostic_info *); 
# 179 "../.././gcc/diagnostic.h" 
# 192 "../.././gcc/diagnostic.h" 
extern char *diagnostic_build_prefix( diagnostic_info *); 
#line 195 "../.././gcc/diagnostic.h"
extern char *file_name_as_prefix(const char *); 
#line 198 "../.././gcc/diagnostic.h"
extern int dump_generic_node( pretty_printer *,  tree , int , int , unsigned char ); 
#line 199 "../.././gcc/diagnostic.h"
extern void print_generic_stmt( FILE *,  tree , int ); 
#line 200 "../.././gcc/diagnostic.h"
extern void print_generic_stmt_indented( FILE *,  tree , int , int ); 
#line 201 "../.././gcc/diagnostic.h"
extern void print_generic_expr( FILE *,  tree , int ); 
#line 202 "../.././gcc/diagnostic.h"
extern void print_generic_decl( FILE *,  tree , int ); 
#line 204 "../.././gcc/diagnostic.h"
extern void debug_generic_expr( tree ); 
#line 205 "../.././gcc/diagnostic.h"
extern void debug_generic_stmt( tree ); 
#line 206 "../.././gcc/diagnostic.h"
extern void debug_c_tree( tree ); 
# 43 "../.././gcc/tree-mudflap.c" 2
# 1 "../.././gcc/../include/demangle.h" 1
# 24 "../.././gcc/../include/demangle.h" 
# 1 "../.././gcc/../include/libiberty.h" 1
# 25 "../.././gcc/../include/demangle.h" 2
# 74 "../.././gcc/../include/demangle.h" 
extern enum demangling_styles {no_demangling=(-1),unknown_demangling=0,auto_demangling=(1 << 8),gnu_demangling=(1 << 9),lucid_demangling=(1 << 10),arm_demangling=(1 << 11),hp_demangling=(1 << 12),edg_demangling=(1 << 13),gnu_v3_demangling=(1 << 14),java_demangling=(1 << 2),gnat_demangling=(1 << 15)}current_demangling_style; 
#line 110 "../.././gcc/../include/demangle.h"
extern const struct demangler_engine {const char *const demangling_style_name; const enum demangling_styles demangling_style; const char *const demangling_style_doc; }libiberty_demanglers[]; 
#line 113 "../.././gcc/../include/demangle.h"
extern char *cplus_demangle(const char *mangled, int options); 
#line 116 "../.././gcc/../include/demangle.h"
extern int cplus_demangle_opname(const char *opname, char *result, int options); 
#line 119 "../.././gcc/../include/demangle.h"
extern const char *cplus_mangle_opname(const char *opname, int options); 
#line 124 "../.././gcc/../include/demangle.h"
extern void set_cplus_marker_for_demangling(int ch); 
#line 127 "../.././gcc/../include/demangle.h"
extern enum demangling_styles cplus_demangle_set_style(enum demangling_styles style); 
#line 130 "../.././gcc/../include/demangle.h"
extern enum demangling_styles cplus_demangle_name_to_style(const char *name); 
#line 134 "../.././gcc/../include/demangle.h"
extern char *cplus_demangle_v3(const char *mangled, int options); 
#line 137 "../.././gcc/../include/demangle.h"
extern char *java_demangle_v3(const char *mangled); 
#line 144 "../.././gcc/../include/demangle.h"
enum gnu_v3_ctor_kinds {gnu_v3_complete_object_ctor=1,gnu_v3_base_object_ctor,gnu_v3_complete_object_allocating_ctor}; 
#line 151 "../.././gcc/../include/demangle.h"
extern enum gnu_v3_ctor_kinds is_gnu_v3_mangled_ctor(const char *name); 
#line 158 "../.././gcc/../include/demangle.h"
enum gnu_v3_dtor_kinds {gnu_v3_deleting_dtor=1,gnu_v3_complete_object_dtor,gnu_v3_base_object_dtor}; 
#line 165 "../.././gcc/../include/demangle.h"
extern enum gnu_v3_dtor_kinds is_gnu_v3_mangled_dtor(const char *name); 
# 105 "../.././gcc/../include/demangle.h" 
# 340 "../.././gcc/../include/demangle.h" 
enum demangle_component_type {DEMANGLE_COMPONENT_NAME,DEMANGLE_COMPONENT_QUAL_NAME,DEMANGLE_COMPONENT_LOCAL_NAME,DEMANGLE_COMPONENT_TYPED_NAME,DEMANGLE_COMPONENT_TEMPLATE,DEMANGLE_COMPONENT_TEMPLATE_PARAM,DEMANGLE_COMPONENT_CTOR,DEMANGLE_COMPONENT_DTOR,DEMANGLE_COMPONENT_VTABLE,DEMANGLE_COMPONENT_VTT,DEMANGLE_COMPONENT_CONSTRUCTION_VTABLE,DEMANGLE_COMPONENT_TYPEINFO,DEMANGLE_COMPONENT_TYPEINFO_NAME,DEMANGLE_COMPONENT_TYPEINFO_FN,DEMANGLE_COMPONENT_THUNK,DEMANGLE_COMPONENT_VIRTUAL_THUNK,DEMANGLE_COMPONENT_COVARIANT_THUNK,DEMANGLE_COMPONENT_JAVA_CLASS,DEMANGLE_COMPONENT_GUARD,DEMANGLE_COMPONENT_REFTEMP,DEMANGLE_COMPONENT_HIDDEN_ALIAS,DEMANGLE_COMPONENT_SUB_STD,DEMANGLE_COMPONENT_RESTRICT,DEMANGLE_COMPONENT_VOLATILE,DEMANGLE_COMPONENT_CONST,DEMANGLE_COMPONENT_RESTRICT_THIS,DEMANGLE_COMPONENT_VOLATILE_THIS,DEMANGLE_COMPONENT_CONST_THIS,DEMANGLE_COMPONENT_VENDOR_TYPE_QUAL,DEMANGLE_COMPONENT_POINTER,DEMANGLE_COMPONENT_REFERENCE,DEMANGLE_COMPONENT_COMPLEX,DEMANGLE_COMPONENT_IMAGINARY,DEMANGLE_COMPONENT_BUILTIN_TYPE,DEMANGLE_COMPONENT_VENDOR_TYPE,DEMANGLE_COMPONENT_FUNCTION_TYPE,DEMANGLE_COMPONENT_ARRAY_TYPE,DEMANGLE_COMPONENT_PTRMEM_TYPE,DEMANGLE_COMPONENT_ARGLIST,DEMANGLE_COMPONENT_TEMPLATE_ARGLIST,DEMANGLE_COMPONENT_OPERATOR,DEMANGLE_COMPONENT_EXTENDED_OPERATOR,DEMANGLE_COMPONENT_CAST,DEMANGLE_COMPONENT_UNARY,DEMANGLE_COMPONENT_BINARY,DEMANGLE_COMPONENT_BINARY_ARGS,DEMANGLE_COMPONENT_TRINARY,DEMANGLE_COMPONENT_TRINARY_ARG1,DEMANGLE_COMPONENT_TRINARY_ARG2,DEMANGLE_COMPONENT_LITERAL,DEMANGLE_COMPONENT_LITERAL_NEG}; 
#line 344 "../.././gcc/../include/demangle.h"
struct demangle_operator_info ; 
#line 345 "../.././gcc/../include/demangle.h"
struct demangle_builtin_type_info ; 
#line 435 "../.././gcc/../include/demangle.h"
struct demangle_component {enum demangle_component_type type; union {struct {const char *s; int len; }s_name; struct {const struct demangle_operator_info *op; }s_operator; struct {int args; struct demangle_component *name; }s_extended_operator; struct {enum gnu_v3_ctor_kinds kind; struct demangle_component *name; }s_ctor; struct {enum gnu_v3_dtor_kinds kind; struct demangle_component *name; }s_dtor; struct {const struct demangle_builtin_type_info *type; }s_builtin; struct {const char *string; int len; }s_string; struct {long number; }s_number; struct {struct demangle_component *left; struct demangle_component *right; }s_binary; }u; }; 
#line 449 "../.././gcc/../include/demangle.h"
extern int cplus_demangle_fill_component(struct demangle_component *fill, enum demangle_component_type , struct demangle_component *left, struct demangle_component *right); 
#line 456 "../.././gcc/../include/demangle.h"
extern int cplus_demangle_fill_name(struct demangle_component *fill, const char *, int ); 
#line 464 "../.././gcc/../include/demangle.h"
extern int cplus_demangle_fill_builtin_type(struct demangle_component *fill, const char *type_name); 
#line 474 "../.././gcc/../include/demangle.h"
extern int cplus_demangle_fill_operator(struct demangle_component *fill, const char *opname, int args); 
#line 483 "../.././gcc/../include/demangle.h"
extern int cplus_demangle_fill_extended_operator(struct demangle_component *fill, int numargs, struct demangle_component *nm); 
#line 491 "../.././gcc/../include/demangle.h"
extern int cplus_demangle_fill_ctor(struct demangle_component *fill, enum gnu_v3_ctor_kinds kind, struct demangle_component *name); 
#line 499 "../.././gcc/../include/demangle.h"
extern int cplus_demangle_fill_dtor(struct demangle_component *fill, enum gnu_v3_dtor_kinds kind, struct demangle_component *name); 
# 445 "../.././gcc/../include/demangle.h" 
# 510 "../.././gcc/../include/demangle.h" 
extern struct demangle_component *cplus_demangle_v3_components(const char *mangled, int options, void **mem); 
#line 528 "../.././gcc/../include/demangle.h"
extern char *cplus_demangle_print(int options, const struct demangle_component *tree, int estimated_length,  size_t *p_allocated_size); 
# 524 "../.././gcc/../include/demangle.h" 
# 44 "../.././gcc/tree-mudflap.c" 2
# 1 "../.././gcc/langhooks.h" 1
# 26 "../.././gcc/langhooks.h" 
struct diagnostic_context ; 
#line 29 "../.././gcc/langhooks.h"
typedef void (*lang_print_tree_hook)( FILE *,  tree , int indent); 
#line 48 "../.././gcc/langhooks.h"
struct lang_hooks_for_tree_inlining { tree (*walk_subtrees)( tree *, int *,  tree (*)( tree *, int *, void *), void *, struct pointer_set_t *); int (*cannot_inline_tree_fn)( tree *); int (*disregard_inline_limits)( tree );  tree (*add_pending_fn_decls)(void *,  tree ); int (*auto_var_in_fn_p)( tree ,  tree ); int (*anon_aggr_type_p)( tree ); unsigned char (*var_mod_type_p)( tree ,  tree ); int (*start_inlining)( tree ); void (*end_inlining)( tree );  tree (*convert_parm_for_inlining)( tree ,  tree ,  tree , int ); }; 
#line 58 "../.././gcc/langhooks.h"
struct lang_hooks_for_callgraph { tree (*analyze_expr)( tree *, int *,  tree ); void (*expand_function)( tree ); }; 
#line 78 "../.././gcc/langhooks.h"
struct lang_hooks_for_functions {void (*init)(struct function *); void (*final)(struct function *); void (*enter_nested)(struct function *); void (*leave_nested)(struct function *); unsigned char (*missing_noreturn_ok_p)( tree ); }; 
#line 90 "../.././gcc/langhooks.h"
struct lang_hooks_for_tree_dump {unsigned char (*dump_tree)(void *,  tree ); int (*type_quals)( tree ); }; 
#line 149 "../.././gcc/langhooks.h"
struct lang_hooks_for_types { tree (*make_type)(enum tree_code );  tree (*type_for_mode)(enum machine_mode , int );  tree (*type_for_size)(unsigned , int );  tree (*unsigned_type)( tree );  tree (*signed_type)( tree );  tree (*signed_or_unsigned_type)(int ,  tree );  tree (*type_promotes_to)( tree ); void (*register_builtin_type)( tree , const char *); void (*incomplete_type_error)( tree value,  tree type);  tree (*max_size)( tree ); unsigned char hash_types; }; 
# 133 "../.././gcc/langhooks.h" 
# 201 "../.././gcc/langhooks.h" 
struct lang_hooks_for_decls {int (*global_bindings_p)(void ); void (*insert_block)( tree );  tree (*pushdecl)( tree );  tree (*getdecls)(void );  tree (*lookup_name)( tree ); unsigned char (*warn_unused_global)( tree ); void (*final_write_globals)(void ); void (*prepare_assemble_variable)( tree ); unsigned char (*ok_for_sibcall)( tree ); const char *(*comdat_group)( tree ); }; 
# 238 "../.././gcc/langhooks.h" 
# 252 "../.././gcc/langhooks.h" 
# 293 "../.././gcc/langhooks.h" 
# 377 "../.././gcc/langhooks.h" 
# 432 "../.././gcc/langhooks.h" 
struct lang_hooks {const char *name;  size_t identifier_size;  size_t (*tree_size)(enum tree_code ); unsigned int (*init_options)(unsigned int argc, const char **argv); void (*initialize_diagnostics)(struct diagnostic_context *); int (*handle_option)( size_t code, const char *arg, int value); unsigned char (*missing_argument)(const char *opt,  size_t code); unsigned char (*post_options)(const char **); unsigned char (*init)(void ); void (*finish)(void ); void (*parse_file)(int ); void (*clear_binding_stack)(void ); long (*get_alias_set)( tree );  tree (*expand_constant)( tree );  rtx (*expand_expr)( tree ,  rtx , enum machine_mode , int ,  rtx *); int (*expand_decl)( tree ); int (*safe_from_p)( rtx ,  tree ); void (*finish_incomplete_decl)( tree ); unsigned char (*mark_addressable)( tree );  tree (*staticp)( tree ); void (*dup_lang_specific_decl)( tree ); void (*set_decl_assembler_name)( tree ); unsigned char (*can_use_bit_fields_p)(void ); unsigned char reduce_bit_field_operations; unsigned char no_body_blocks; void (*print_statistics)(void );  lang_print_tree_hook print_xnode;  lang_print_tree_hook print_decl;  lang_print_tree_hook print_type;  lang_print_tree_hook print_identifier; const char *(*decl_printable_name)( tree decl, int verbosity); int (*types_compatible_p)( tree x,  tree y);  tree (*lang_get_callee_fndecl)( tree ); void (*print_error_function)(struct diagnostic_context *, const char *);  tree (*expr_size)( tree ); long (*to_target_charset)(long ); const struct attribute_spec *attribute_table; const struct attribute_spec *common_attribute_table; const struct attribute_spec *format_attribute_table; struct lang_hooks_for_functions function; struct lang_hooks_for_tree_inlining tree_inlining; struct lang_hooks_for_callgraph callgraph; struct lang_hooks_for_tree_dump tree_dump; struct lang_hooks_for_decls decls; struct lang_hooks_for_types types; int (*gimplify_expr)( tree *,  tree *,  tree *);  tree (*fold_obj_type_ref)( tree ,  tree );  tree (*builtin_function)(const char *name,  tree type, int function_code, enum built_in_class bt_class, const char *library_name,  tree attrs); void (*init_ts)(void );  tree (*expr_to_decl)( tree expr, unsigned char *tc, unsigned char *ti, unsigned char *se); }; 
#line 435 "../.././gcc/langhooks.h"
extern const struct lang_hooks lang_hooks; 
# 45 "../.././gcc/tree-mudflap.c" 2
# 1 "../.././gcc/ggc.h" 1
# 30 "../.././gcc/ggc.h" 
extern const char empty_string[]; 
#line 31 "../.././gcc/ggc.h"
extern const char digit_vector[]; 
#line 38 "../.././gcc/ggc.h"
typedef void (*gt_pointer_operator)(void *, void *); 
# 1 "./gtype-desc.h" 1
# 191 "./gtype-desc.h" 
enum gt_types_enum {gt_ggc_e_15interface_tuple,gt_ggc_e_16volatilized_type,gt_ggc_e_17string_descriptor,gt_ggc_e_7c_scope,gt_ggc_e_9c_binding,gt_ggc_e_9imp_entry,gt_ggc_e_16hashed_attribute,gt_ggc_e_12hashed_entry,gt_ggc_e_8eh_range,gt_ggc_e_11parser_ctxt,gt_ggc_e_10jdeplist_s,gt_ggc_e_10java_lexer,gt_ggc_e_12ZipDirectory,gt_ggc_e_14type_assertion,gt_ggc_e_18treetreehash_entry,gt_ggc_e_5CPool,gt_ggc_e_3JCF,gt_ggc_e_13binding_level,gt_ggc_e_11align_stack,gt_ggc_e_21pending_abstract_type,gt_ggc_e_9cp_parser,gt_ggc_e_17cp_parser_context,gt_ggc_e_8cp_lexer,gt_ggc_e_26VEC_cp_token_position_heap,gt_ggc_e_8cp_token,gt_ggc_e_22VEC_deferred_access_gc,gt_ggc_e_18VEC_tree_pair_s_gc,gt_ggc_e_16named_label_list,gt_ggc_e_20named_label_use_list,gt_ggc_e_11saved_scope,gt_ggc_e_14cp_token_cache,gt_ggc_e_23VEC_cp_class_binding_gc,gt_ggc_e_24VEC_cxx_saved_binding_gc,gt_ggc_e_16cp_binding_level,gt_ggc_e_11cxx_binding,gt_ggc_e_15binding_entry_s,gt_ggc_e_15binding_table_s,gt_ggc_e_14VEC_tinfo_s_gc,gt_ggc_e_12nesting_info,gt_ggc_e_11var_map_elt,gt_ggc_e_20ssa_operand_memory_d,gt_ggc_e_8c_parser,gt_ggc_e_12int_tree_map,gt_ggc_e_6subvar,gt_ggc_e_17VEC_alias_pair_gc,gt_ggc_e_23constant_descriptor_rtx,gt_ggc_e_24constant_descriptor_tree,gt_ggc_e_14in_named_entry,gt_ggc_e_17rtx_constant_pool,gt_ggc_e_12tree_int_map,gt_ggc_e_9type_hash,gt_ggc_e_16string_pool_data,gt_ggc_e_15throw_stmt_node,gt_ggc_e_16VEC_eh_region_gc,gt_ggc_e_9eh_region,gt_ggc_e_13ehl_map_entry,gt_ggc_e_16var_loc_list_def,gt_ggc_e_12var_loc_node,gt_ggc_e_16limbo_die_struct,gt_ggc_e_16dw_ranges_struct,gt_ggc_e_14pubname_struct,gt_ggc_e_28dw_separate_line_info_struct,gt_ggc_e_19dw_line_info_struct,gt_ggc_e_14dw_attr_struct,gt_ggc_e_18dw_loc_list_struct,gt_ggc_e_15queued_reg_save,gt_ggc_e_20indirect_string_node,gt_ggc_e_19dw_loc_descr_struct,gt_ggc_e_13dw_fde_struct,gt_ggc_e_13dw_cfi_struct,gt_ggc_e_10VEC_rtx_gc,gt_ggc_e_8typeinfo,gt_ggc_e_15alias_set_entry,gt_ggc_e_10c_arg_info,gt_ggc_e_8c_switch,gt_ggc_e_18sorted_fields_type,gt_ggc_e_19cgraph_varpool_node,gt_ggc_e_11cgraph_edge,gt_ggc_e_11cgraph_node,gt_ggc_e_15edge_prediction,gt_ggc_e_11rtl_bb_info,gt_ggc_e_7et_node,gt_ggc_e_4loop,gt_ggc_e_11VEC_edge_gc,gt_ggc_e_12elt_loc_list,gt_ggc_e_17cselib_val_struct,gt_ggc_e_25ipa_reference_vars_info_d,gt_ggc_e_8edge_def,gt_ggc_e_8elt_list,gt_ggc_e_12reg_info_def,gt_ggc_e_8tree_map,gt_ggc_e_14lang_tree_node,gt_ggc_e_9value_set,gt_ggc_e_24tree_statement_list_node,gt_ggc_e_9lang_decl,gt_ggc_e_9lang_type,gt_ggc_e_10die_struct,gt_ggc_e_12ptr_info_def,gt_ggc_e_17ssa_use_operand_d,gt_ggc_e_22VEC_constructor_elt_gc,gt_ggc_e_10tree_ann_d,gt_ggc_e_11VEC_tree_gc,gt_ggc_e_13convert_optab,gt_ggc_e_5optab,gt_ggc_e_15basic_block_def,gt_ggc_e_10real_value,gt_ggc_e_9reg_attrs,gt_ggc_e_9mem_attrs,gt_ggc_e_17language_function,gt_ggc_e_9temp_slot,gt_ggc_e_15varray_head_tag,gt_ggc_e_20initial_value_struct,gt_ggc_e_18control_flow_graph,gt_ggc_e_13varasm_status,gt_ggc_e_9eh_status,gt_ggc_e_8function,gt_ggc_e_11expr_status,gt_ggc_e_11emit_status,gt_ggc_e_14sequence_stack,gt_ggc_e_14var_refs_queue,gt_ggc_e_15bitmap_head_def,gt_ggc_e_18bitmap_element_def,gt_ggc_e_14bitmap_obstack,gt_ggc_e_17stack_local_entry,gt_ggc_e_16machine_function,gt_ggc_e_6answer,gt_ggc_e_9cpp_macro,gt_ggc_e_9cpp_token,gt_ggc_e_9tree_node,gt_ggc_e_9rtvec_def,gt_ggc_e_7rtx_def,gt_ggc_e_10location_s,gt_e_II17splay_tree_node_s,gt_e_SP9tree_node17splay_tree_node_s,gt_e_IP9tree_node17splay_tree_node_s,gt_e_P15interface_tuple4htab,gt_e_P16volatilized_type4htab,gt_e_P17string_descriptor4htab,gt_e_P14type_assertion4htab,gt_e_P18treetreehash_entry4htab,gt_e_P21pending_abstract_type4htab,gt_e_IP9tree_node12splay_tree_s,gt_e_P11var_map_elt4htab,gt_e_P12int_tree_map4htab,gt_e_P23constant_descriptor_rtx4htab,gt_e_P24constant_descriptor_tree4htab,gt_e_P14in_named_entry4htab,gt_e_P12tree_int_map4htab,gt_e_P8tree_map4htab,gt_e_P9type_hash4htab,gt_e_P13ehl_map_entry4htab,gt_e_P15throw_stmt_node4htab,gt_e_P9tree_node4htab,gt_e_P9reg_attrs4htab,gt_e_P9mem_attrs4htab,gt_e_P7rtx_def4htab,gt_e_SP9tree_node12splay_tree_s,gt_e_P16var_loc_list_def4htab,gt_e_P10die_struct4htab,gt_e_P20indirect_string_node4htab,gt_e_P19cgraph_varpool_node4htab,gt_e_P11cgraph_node4htab,gt_e_P15alias_set_entry15varray_head_tag,gt_e_II12splay_tree_s,gt_e_P9temp_slot15varray_head_tag,gt_types_enum_last}; 
#line 197 "./gtype-desc.h"
extern void gt_ggc_mx_interface_tuple(void *); 
#line 201 "./gtype-desc.h"
extern void gt_ggc_mx_volatilized_type(void *); 
#line 205 "./gtype-desc.h"
extern void gt_ggc_mx_string_descriptor(void *); 
#line 209 "./gtype-desc.h"
extern void gt_ggc_mx_c_scope(void *); 
#line 213 "./gtype-desc.h"
extern void gt_ggc_mx_c_binding(void *); 
#line 217 "./gtype-desc.h"
extern void gt_ggc_mx_imp_entry(void *); 
#line 221 "./gtype-desc.h"
extern void gt_ggc_mx_hashed_attribute(void *); 
#line 225 "./gtype-desc.h"
extern void gt_ggc_mx_hashed_entry(void *); 
#line 229 "./gtype-desc.h"
extern void gt_ggc_mx_eh_range(void *); 
#line 233 "./gtype-desc.h"
extern void gt_ggc_mx_parser_ctxt(void *); 
#line 237 "./gtype-desc.h"
extern void gt_ggc_mx_jdeplist_s(void *); 
#line 241 "./gtype-desc.h"
extern void gt_ggc_mx_java_lexer(void *); 
#line 245 "./gtype-desc.h"
extern void gt_ggc_mx_ZipDirectory(void *); 
#line 249 "./gtype-desc.h"
extern void gt_ggc_mx_type_assertion(void *); 
#line 253 "./gtype-desc.h"
extern void gt_ggc_mx_treetreehash_entry(void *); 
#line 257 "./gtype-desc.h"
extern void gt_ggc_mx_CPool(void *); 
#line 261 "./gtype-desc.h"
extern void gt_ggc_mx_JCF(void *); 
#line 265 "./gtype-desc.h"
extern void gt_ggc_mx_binding_level(void *); 
#line 269 "./gtype-desc.h"
extern void gt_ggc_mx_align_stack(void *); 
#line 273 "./gtype-desc.h"
extern void gt_ggc_mx_pending_abstract_type(void *); 
#line 277 "./gtype-desc.h"
extern void gt_ggc_mx_cp_parser(void *); 
#line 281 "./gtype-desc.h"
extern void gt_ggc_mx_cp_parser_context(void *); 
#line 285 "./gtype-desc.h"
extern void gt_ggc_mx_cp_lexer(void *); 
#line 289 "./gtype-desc.h"
extern void gt_ggc_mx_VEC_cp_token_position_heap(void *); 
#line 293 "./gtype-desc.h"
extern void gt_ggc_mx_cp_token(void *); 
#line 297 "./gtype-desc.h"
extern void gt_ggc_mx_VEC_deferred_access_gc(void *); 
#line 301 "./gtype-desc.h"
extern void gt_ggc_mx_VEC_tree_pair_s_gc(void *); 
#line 305 "./gtype-desc.h"
extern void gt_ggc_mx_named_label_list(void *); 
#line 309 "./gtype-desc.h"
extern void gt_ggc_mx_named_label_use_list(void *); 
#line 313 "./gtype-desc.h"
extern void gt_ggc_mx_saved_scope(void *); 
#line 317 "./gtype-desc.h"
extern void gt_ggc_mx_cp_token_cache(void *); 
#line 321 "./gtype-desc.h"
extern void gt_ggc_mx_VEC_cp_class_binding_gc(void *); 
#line 325 "./gtype-desc.h"
extern void gt_ggc_mx_VEC_cxx_saved_binding_gc(void *); 
#line 329 "./gtype-desc.h"
extern void gt_ggc_mx_cp_binding_level(void *); 
#line 333 "./gtype-desc.h"
extern void gt_ggc_mx_cxx_binding(void *); 
#line 337 "./gtype-desc.h"
extern void gt_ggc_mx_binding_entry_s(void *); 
#line 341 "./gtype-desc.h"
extern void gt_ggc_mx_binding_table_s(void *); 
#line 345 "./gtype-desc.h"
extern void gt_ggc_mx_VEC_tinfo_s_gc(void *); 
#line 349 "./gtype-desc.h"
extern void gt_ggc_mx_nesting_info(void *); 
#line 353 "./gtype-desc.h"
extern void gt_ggc_mx_var_map_elt(void *); 
#line 357 "./gtype-desc.h"
extern void gt_ggc_mx_ssa_operand_memory_d(void *); 
#line 361 "./gtype-desc.h"
extern void gt_ggc_mx_c_parser(void *); 
#line 365 "./gtype-desc.h"
extern void gt_ggc_mx_int_tree_map(void *); 
#line 369 "./gtype-desc.h"
extern void gt_ggc_mx_subvar(void *); 
#line 373 "./gtype-desc.h"
extern void gt_ggc_mx_VEC_alias_pair_gc(void *); 
#line 377 "./gtype-desc.h"
extern void gt_ggc_mx_constant_descriptor_rtx(void *); 
#line 381 "./gtype-desc.h"
extern void gt_ggc_mx_constant_descriptor_tree(void *); 
#line 385 "./gtype-desc.h"
extern void gt_ggc_mx_in_named_entry(void *); 
#line 389 "./gtype-desc.h"
extern void gt_ggc_mx_rtx_constant_pool(void *); 
#line 393 "./gtype-desc.h"
extern void gt_ggc_mx_tree_int_map(void *); 
#line 397 "./gtype-desc.h"
extern void gt_ggc_mx_type_hash(void *); 
#line 401 "./gtype-desc.h"
extern void gt_ggc_mx_string_pool_data(void *); 
#line 405 "./gtype-desc.h"
extern void gt_ggc_mx_throw_stmt_node(void *); 
#line 409 "./gtype-desc.h"
extern void gt_ggc_mx_VEC_eh_region_gc(void *); 
#line 413 "./gtype-desc.h"
extern void gt_ggc_mx_eh_region(void *); 
#line 417 "./gtype-desc.h"
extern void gt_ggc_mx_ehl_map_entry(void *); 
#line 421 "./gtype-desc.h"
extern void gt_ggc_mx_var_loc_list_def(void *); 
#line 425 "./gtype-desc.h"
extern void gt_ggc_mx_var_loc_node(void *); 
#line 429 "./gtype-desc.h"
extern void gt_ggc_mx_limbo_die_struct(void *); 
#line 433 "./gtype-desc.h"
extern void gt_ggc_mx_dw_ranges_struct(void *); 
#line 437 "./gtype-desc.h"
extern void gt_ggc_mx_pubname_struct(void *); 
#line 441 "./gtype-desc.h"
extern void gt_ggc_mx_dw_separate_line_info_struct(void *); 
#line 445 "./gtype-desc.h"
extern void gt_ggc_mx_dw_line_info_struct(void *); 
#line 449 "./gtype-desc.h"
extern void gt_ggc_mx_dw_attr_struct(void *); 
#line 453 "./gtype-desc.h"
extern void gt_ggc_mx_dw_loc_list_struct(void *); 
#line 457 "./gtype-desc.h"
extern void gt_ggc_mx_queued_reg_save(void *); 
#line 461 "./gtype-desc.h"
extern void gt_ggc_mx_indirect_string_node(void *); 
#line 465 "./gtype-desc.h"
extern void gt_ggc_mx_dw_loc_descr_struct(void *); 
#line 469 "./gtype-desc.h"
extern void gt_ggc_mx_dw_fde_struct(void *); 
#line 473 "./gtype-desc.h"
extern void gt_ggc_mx_dw_cfi_struct(void *); 
#line 477 "./gtype-desc.h"
extern void gt_ggc_mx_VEC_rtx_gc(void *); 
#line 481 "./gtype-desc.h"
extern void gt_ggc_mx_typeinfo(void *); 
#line 485 "./gtype-desc.h"
extern void gt_ggc_mx_alias_set_entry(void *); 
#line 489 "./gtype-desc.h"
extern void gt_ggc_mx_c_arg_info(void *); 
#line 493 "./gtype-desc.h"
extern void gt_ggc_mx_c_switch(void *); 
#line 497 "./gtype-desc.h"
extern void gt_ggc_mx_sorted_fields_type(void *); 
#line 501 "./gtype-desc.h"
extern void gt_ggc_mx_cgraph_varpool_node(void *); 
#line 505 "./gtype-desc.h"
extern void gt_ggc_mx_cgraph_edge(void *); 
#line 509 "./gtype-desc.h"
extern void gt_ggc_mx_cgraph_node(void *); 
#line 513 "./gtype-desc.h"
extern void gt_ggc_mx_edge_prediction(void *); 
#line 517 "./gtype-desc.h"
extern void gt_ggc_mx_rtl_bb_info(void *); 
#line 521 "./gtype-desc.h"
extern void gt_ggc_mx_et_node(void *); 
#line 525 "./gtype-desc.h"
extern void gt_ggc_mx_loop(void *); 
#line 529 "./gtype-desc.h"
extern void gt_ggc_mx_VEC_edge_gc(void *); 
#line 533 "./gtype-desc.h"
extern void gt_ggc_mx_elt_loc_list(void *); 
#line 537 "./gtype-desc.h"
extern void gt_ggc_mx_cselib_val_struct(void *); 
#line 541 "./gtype-desc.h"
extern void gt_ggc_mx_ipa_reference_vars_info_d(void *); 
#line 545 "./gtype-desc.h"
extern void gt_ggc_mx_edge_def(void *); 
#line 549 "./gtype-desc.h"
extern void gt_ggc_mx_elt_list(void *); 
#line 553 "./gtype-desc.h"
extern void gt_ggc_mx_reg_info_def(void *); 
#line 557 "./gtype-desc.h"
extern void gt_ggc_mx_tree_map(void *); 
#line 561 "./gtype-desc.h"
extern void gt_ggc_mx_lang_tree_node(void *); 
#line 565 "./gtype-desc.h"
extern void gt_ggc_mx_value_set(void *); 
#line 569 "./gtype-desc.h"
extern void gt_ggc_mx_tree_statement_list_node(void *); 
#line 573 "./gtype-desc.h"
extern void gt_ggc_mx_lang_decl(void *); 
#line 577 "./gtype-desc.h"
extern void gt_ggc_mx_lang_type(void *); 
#line 581 "./gtype-desc.h"
extern void gt_ggc_mx_die_struct(void *); 
#line 585 "./gtype-desc.h"
extern void gt_ggc_mx_ptr_info_def(void *); 
#line 589 "./gtype-desc.h"
extern void gt_ggc_mx_ssa_use_operand_d(void *); 
#line 593 "./gtype-desc.h"
extern void gt_ggc_mx_VEC_constructor_elt_gc(void *); 
#line 597 "./gtype-desc.h"
extern void gt_ggc_mx_tree_ann_d(void *); 
#line 601 "./gtype-desc.h"
extern void gt_ggc_mx_VEC_tree_gc(void *); 
#line 605 "./gtype-desc.h"
extern void gt_ggc_mx_convert_optab(void *); 
#line 609 "./gtype-desc.h"
extern void gt_ggc_mx_optab(void *); 
#line 613 "./gtype-desc.h"
extern void gt_ggc_mx_basic_block_def(void *); 
#line 617 "./gtype-desc.h"
extern void gt_ggc_mx_real_value(void *); 
#line 621 "./gtype-desc.h"
extern void gt_ggc_mx_reg_attrs(void *); 
#line 625 "./gtype-desc.h"
extern void gt_ggc_mx_mem_attrs(void *); 
#line 629 "./gtype-desc.h"
extern void gt_ggc_mx_language_function(void *); 
#line 633 "./gtype-desc.h"
extern void gt_ggc_mx_temp_slot(void *); 
#line 637 "./gtype-desc.h"
extern void gt_ggc_mx_varray_head_tag(void *); 
#line 641 "./gtype-desc.h"
extern void gt_ggc_mx_initial_value_struct(void *); 
#line 645 "./gtype-desc.h"
extern void gt_ggc_mx_control_flow_graph(void *); 
#line 649 "./gtype-desc.h"
extern void gt_ggc_mx_varasm_status(void *); 
#line 653 "./gtype-desc.h"
extern void gt_ggc_mx_eh_status(void *); 
#line 657 "./gtype-desc.h"
extern void gt_ggc_mx_function(void *); 
#line 661 "./gtype-desc.h"
extern void gt_ggc_mx_expr_status(void *); 
#line 665 "./gtype-desc.h"
extern void gt_ggc_mx_emit_status(void *); 
#line 669 "./gtype-desc.h"
extern void gt_ggc_mx_sequence_stack(void *); 
#line 673 "./gtype-desc.h"
extern void gt_ggc_mx_var_refs_queue(void *); 
#line 677 "./gtype-desc.h"
extern void gt_ggc_mx_bitmap_head_def(void *); 
#line 681 "./gtype-desc.h"
extern void gt_ggc_mx_bitmap_element_def(void *); 
#line 685 "./gtype-desc.h"
extern void gt_ggc_mx_bitmap_obstack(void *); 
#line 689 "./gtype-desc.h"
extern void gt_ggc_mx_stack_local_entry(void *); 
#line 693 "./gtype-desc.h"
extern void gt_ggc_mx_machine_function(void *); 
#line 697 "./gtype-desc.h"
extern void gt_ggc_mx_answer(void *); 
#line 701 "./gtype-desc.h"
extern void gt_ggc_mx_cpp_macro(void *); 
#line 705 "./gtype-desc.h"
extern void gt_ggc_mx_cpp_token(void *); 
#line 713 "./gtype-desc.h"
extern void gt_ggc_mx_rtvec_def(void *); 
#line 717 "./gtype-desc.h"
extern void gt_ggc_mx_rtx_def(void *); 
#line 721 "./gtype-desc.h"
extern void gt_ggc_mx_location_s(void *); 
#line 722 "./gtype-desc.h"
extern void gt_ggc_m_II17splay_tree_node_s(void *); 
#line 723 "./gtype-desc.h"
extern void gt_ggc_m_SP9tree_node17splay_tree_node_s(void *); 
#line 724 "./gtype-desc.h"
extern void gt_ggc_m_IP9tree_node17splay_tree_node_s(void *); 
#line 725 "./gtype-desc.h"
extern void gt_ggc_m_P15interface_tuple4htab(void *); 
#line 726 "./gtype-desc.h"
extern void gt_ggc_m_P16volatilized_type4htab(void *); 
#line 727 "./gtype-desc.h"
extern void gt_ggc_m_P17string_descriptor4htab(void *); 
#line 728 "./gtype-desc.h"
extern void gt_ggc_m_P14type_assertion4htab(void *); 
#line 729 "./gtype-desc.h"
extern void gt_ggc_m_P18treetreehash_entry4htab(void *); 
#line 730 "./gtype-desc.h"
extern void gt_ggc_m_P21pending_abstract_type4htab(void *); 
#line 731 "./gtype-desc.h"
extern void gt_ggc_m_IP9tree_node12splay_tree_s(void *); 
#line 732 "./gtype-desc.h"
extern void gt_ggc_m_P11var_map_elt4htab(void *); 
#line 733 "./gtype-desc.h"
extern void gt_ggc_m_P12int_tree_map4htab(void *); 
#line 734 "./gtype-desc.h"
extern void gt_ggc_m_P23constant_descriptor_rtx4htab(void *); 
#line 735 "./gtype-desc.h"
extern void gt_ggc_m_P24constant_descriptor_tree4htab(void *); 
#line 736 "./gtype-desc.h"
extern void gt_ggc_m_P14in_named_entry4htab(void *); 
#line 737 "./gtype-desc.h"
extern void gt_ggc_m_P12tree_int_map4htab(void *); 
#line 738 "./gtype-desc.h"
extern void gt_ggc_m_P8tree_map4htab(void *); 
#line 739 "./gtype-desc.h"
extern void gt_ggc_m_P9type_hash4htab(void *); 
#line 740 "./gtype-desc.h"
extern void gt_ggc_m_P13ehl_map_entry4htab(void *); 
#line 741 "./gtype-desc.h"
extern void gt_ggc_m_P15throw_stmt_node4htab(void *); 
#line 742 "./gtype-desc.h"
extern void gt_ggc_m_P9tree_node4htab(void *); 
#line 743 "./gtype-desc.h"
extern void gt_ggc_m_P9reg_attrs4htab(void *); 
#line 744 "./gtype-desc.h"
extern void gt_ggc_m_P9mem_attrs4htab(void *); 
#line 745 "./gtype-desc.h"
extern void gt_ggc_m_P7rtx_def4htab(void *); 
#line 746 "./gtype-desc.h"
extern void gt_ggc_m_SP9tree_node12splay_tree_s(void *); 
#line 747 "./gtype-desc.h"
extern void gt_ggc_m_P16var_loc_list_def4htab(void *); 
#line 748 "./gtype-desc.h"
extern void gt_ggc_m_P10die_struct4htab(void *); 
#line 749 "./gtype-desc.h"
extern void gt_ggc_m_P20indirect_string_node4htab(void *); 
#line 750 "./gtype-desc.h"
extern void gt_ggc_m_P19cgraph_varpool_node4htab(void *); 
#line 751 "./gtype-desc.h"
extern void gt_ggc_m_P11cgraph_node4htab(void *); 
#line 752 "./gtype-desc.h"
extern void gt_ggc_m_P15alias_set_entry15varray_head_tag(void *); 
#line 753 "./gtype-desc.h"
extern void gt_ggc_m_II12splay_tree_s(void *); 
#line 754 "./gtype-desc.h"
extern void gt_ggc_m_P9temp_slot15varray_head_tag(void *); 
#line 760 "./gtype-desc.h"
extern void gt_pch_nx_interface_tuple(void *); 
#line 764 "./gtype-desc.h"
extern void gt_pch_nx_volatilized_type(void *); 
#line 768 "./gtype-desc.h"
extern void gt_pch_nx_string_descriptor(void *); 
#line 772 "./gtype-desc.h"
extern void gt_pch_nx_c_scope(void *); 
#line 776 "./gtype-desc.h"
extern void gt_pch_nx_c_binding(void *); 
#line 780 "./gtype-desc.h"
extern void gt_pch_nx_imp_entry(void *); 
#line 784 "./gtype-desc.h"
extern void gt_pch_nx_hashed_attribute(void *); 
#line 788 "./gtype-desc.h"
extern void gt_pch_nx_hashed_entry(void *); 
#line 792 "./gtype-desc.h"
extern void gt_pch_nx_eh_range(void *); 
#line 796 "./gtype-desc.h"
extern void gt_pch_nx_parser_ctxt(void *); 
#line 800 "./gtype-desc.h"
extern void gt_pch_nx_jdeplist_s(void *); 
#line 804 "./gtype-desc.h"
extern void gt_pch_nx_java_lexer(void *); 
#line 808 "./gtype-desc.h"
extern void gt_pch_nx_ZipDirectory(void *); 
#line 812 "./gtype-desc.h"
extern void gt_pch_nx_type_assertion(void *); 
#line 816 "./gtype-desc.h"
extern void gt_pch_nx_treetreehash_entry(void *); 
#line 820 "./gtype-desc.h"
extern void gt_pch_nx_CPool(void *); 
#line 824 "./gtype-desc.h"
extern void gt_pch_nx_JCF(void *); 
#line 828 "./gtype-desc.h"
extern void gt_pch_nx_binding_level(void *); 
#line 832 "./gtype-desc.h"
extern void gt_pch_nx_align_stack(void *); 
#line 836 "./gtype-desc.h"
extern void gt_pch_nx_pending_abstract_type(void *); 
#line 840 "./gtype-desc.h"
extern void gt_pch_nx_cp_parser(void *); 
#line 844 "./gtype-desc.h"
extern void gt_pch_nx_cp_parser_context(void *); 
#line 848 "./gtype-desc.h"
extern void gt_pch_nx_cp_lexer(void *); 
#line 852 "./gtype-desc.h"
extern void gt_pch_nx_VEC_cp_token_position_heap(void *); 
#line 856 "./gtype-desc.h"
extern void gt_pch_nx_cp_token(void *); 
#line 860 "./gtype-desc.h"
extern void gt_pch_nx_VEC_deferred_access_gc(void *); 
#line 864 "./gtype-desc.h"
extern void gt_pch_nx_VEC_tree_pair_s_gc(void *); 
#line 868 "./gtype-desc.h"
extern void gt_pch_nx_named_label_list(void *); 
#line 872 "./gtype-desc.h"
extern void gt_pch_nx_named_label_use_list(void *); 
#line 876 "./gtype-desc.h"
extern void gt_pch_nx_saved_scope(void *); 
#line 880 "./gtype-desc.h"
extern void gt_pch_nx_cp_token_cache(void *); 
#line 884 "./gtype-desc.h"
extern void gt_pch_nx_VEC_cp_class_binding_gc(void *); 
#line 888 "./gtype-desc.h"
extern void gt_pch_nx_VEC_cxx_saved_binding_gc(void *); 
#line 892 "./gtype-desc.h"
extern void gt_pch_nx_cp_binding_level(void *); 
#line 896 "./gtype-desc.h"
extern void gt_pch_nx_cxx_binding(void *); 
#line 900 "./gtype-desc.h"
extern void gt_pch_nx_binding_entry_s(void *); 
#line 904 "./gtype-desc.h"
extern void gt_pch_nx_binding_table_s(void *); 
#line 908 "./gtype-desc.h"
extern void gt_pch_nx_VEC_tinfo_s_gc(void *); 
#line 912 "./gtype-desc.h"
extern void gt_pch_nx_nesting_info(void *); 
#line 916 "./gtype-desc.h"
extern void gt_pch_nx_var_map_elt(void *); 
#line 920 "./gtype-desc.h"
extern void gt_pch_nx_ssa_operand_memory_d(void *); 
#line 924 "./gtype-desc.h"
extern void gt_pch_nx_c_parser(void *); 
#line 928 "./gtype-desc.h"
extern void gt_pch_nx_int_tree_map(void *); 
#line 932 "./gtype-desc.h"
extern void gt_pch_nx_subvar(void *); 
#line 936 "./gtype-desc.h"
extern void gt_pch_nx_VEC_alias_pair_gc(void *); 
#line 940 "./gtype-desc.h"
extern void gt_pch_nx_constant_descriptor_rtx(void *); 
#line 944 "./gtype-desc.h"
extern void gt_pch_nx_constant_descriptor_tree(void *); 
#line 948 "./gtype-desc.h"
extern void gt_pch_nx_in_named_entry(void *); 
#line 952 "./gtype-desc.h"
extern void gt_pch_nx_rtx_constant_pool(void *); 
#line 956 "./gtype-desc.h"
extern void gt_pch_nx_tree_int_map(void *); 
#line 960 "./gtype-desc.h"
extern void gt_pch_nx_type_hash(void *); 
#line 964 "./gtype-desc.h"
extern void gt_pch_nx_string_pool_data(void *); 
#line 968 "./gtype-desc.h"
extern void gt_pch_nx_throw_stmt_node(void *); 
#line 972 "./gtype-desc.h"
extern void gt_pch_nx_VEC_eh_region_gc(void *); 
#line 976 "./gtype-desc.h"
extern void gt_pch_nx_eh_region(void *); 
#line 980 "./gtype-desc.h"
extern void gt_pch_nx_ehl_map_entry(void *); 
#line 984 "./gtype-desc.h"
extern void gt_pch_nx_var_loc_list_def(void *); 
#line 988 "./gtype-desc.h"
extern void gt_pch_nx_var_loc_node(void *); 
#line 992 "./gtype-desc.h"
extern void gt_pch_nx_limbo_die_struct(void *); 
#line 996 "./gtype-desc.h"
extern void gt_pch_nx_dw_ranges_struct(void *); 
#line 1000 "./gtype-desc.h"
extern void gt_pch_nx_pubname_struct(void *); 
#line 1004 "./gtype-desc.h"
extern void gt_pch_nx_dw_separate_line_info_struct(void *); 
#line 1008 "./gtype-desc.h"
extern void gt_pch_nx_dw_line_info_struct(void *); 
#line 1012 "./gtype-desc.h"
extern void gt_pch_nx_dw_attr_struct(void *); 
#line 1016 "./gtype-desc.h"
extern void gt_pch_nx_dw_loc_list_struct(void *); 
#line 1020 "./gtype-desc.h"
extern void gt_pch_nx_queued_reg_save(void *); 
#line 1024 "./gtype-desc.h"
extern void gt_pch_nx_indirect_string_node(void *); 
#line 1028 "./gtype-desc.h"
extern void gt_pch_nx_dw_loc_descr_struct(void *); 
#line 1032 "./gtype-desc.h"
extern void gt_pch_nx_dw_fde_struct(void *); 
#line 1036 "./gtype-desc.h"
extern void gt_pch_nx_dw_cfi_struct(void *); 
#line 1040 "./gtype-desc.h"
extern void gt_pch_nx_VEC_rtx_gc(void *); 
#line 1044 "./gtype-desc.h"
extern void gt_pch_nx_typeinfo(void *); 
#line 1048 "./gtype-desc.h"
extern void gt_pch_nx_alias_set_entry(void *); 
#line 1052 "./gtype-desc.h"
extern void gt_pch_nx_c_arg_info(void *); 
#line 1056 "./gtype-desc.h"
extern void gt_pch_nx_c_switch(void *); 
#line 1060 "./gtype-desc.h"
extern void gt_pch_nx_sorted_fields_type(void *); 
#line 1064 "./gtype-desc.h"
extern void gt_pch_nx_cgraph_varpool_node(void *); 
#line 1068 "./gtype-desc.h"
extern void gt_pch_nx_cgraph_edge(void *); 
#line 1072 "./gtype-desc.h"
extern void gt_pch_nx_cgraph_node(void *); 
#line 1076 "./gtype-desc.h"
extern void gt_pch_nx_edge_prediction(void *); 
#line 1080 "./gtype-desc.h"
extern void gt_pch_nx_rtl_bb_info(void *); 
#line 1084 "./gtype-desc.h"
extern void gt_pch_nx_et_node(void *); 
#line 1088 "./gtype-desc.h"
extern void gt_pch_nx_loop(void *); 
#line 1092 "./gtype-desc.h"
extern void gt_pch_nx_VEC_edge_gc(void *); 
#line 1096 "./gtype-desc.h"
extern void gt_pch_nx_elt_loc_list(void *); 
#line 1100 "./gtype-desc.h"
extern void gt_pch_nx_cselib_val_struct(void *); 
#line 1104 "./gtype-desc.h"
extern void gt_pch_nx_ipa_reference_vars_info_d(void *); 
#line 1108 "./gtype-desc.h"
extern void gt_pch_nx_edge_def(void *); 
#line 1112 "./gtype-desc.h"
extern void gt_pch_nx_elt_list(void *); 
#line 1116 "./gtype-desc.h"
extern void gt_pch_nx_reg_info_def(void *); 
#line 1120 "./gtype-desc.h"
extern void gt_pch_nx_tree_map(void *); 
#line 1124 "./gtype-desc.h"
extern void gt_pch_nx_lang_tree_node(void *); 
#line 1128 "./gtype-desc.h"
extern void gt_pch_nx_value_set(void *); 
#line 1132 "./gtype-desc.h"
extern void gt_pch_nx_tree_statement_list_node(void *); 
#line 1136 "./gtype-desc.h"
extern void gt_pch_nx_lang_decl(void *); 
#line 1140 "./gtype-desc.h"
extern void gt_pch_nx_lang_type(void *); 
#line 1144 "./gtype-desc.h"
extern void gt_pch_nx_die_struct(void *); 
#line 1148 "./gtype-desc.h"
extern void gt_pch_nx_ptr_info_def(void *); 
#line 1152 "./gtype-desc.h"
extern void gt_pch_nx_ssa_use_operand_d(void *); 
#line 1156 "./gtype-desc.h"
extern void gt_pch_nx_VEC_constructor_elt_gc(void *); 
#line 1160 "./gtype-desc.h"
extern void gt_pch_nx_tree_ann_d(void *); 
#line 1164 "./gtype-desc.h"
extern void gt_pch_nx_VEC_tree_gc(void *); 
#line 1168 "./gtype-desc.h"
extern void gt_pch_nx_convert_optab(void *); 
#line 1172 "./gtype-desc.h"
extern void gt_pch_nx_optab(void *); 
#line 1176 "./gtype-desc.h"
extern void gt_pch_nx_basic_block_def(void *); 
#line 1180 "./gtype-desc.h"
extern void gt_pch_nx_real_value(void *); 
#line 1184 "./gtype-desc.h"
extern void gt_pch_nx_reg_attrs(void *); 
#line 1188 "./gtype-desc.h"
extern void gt_pch_nx_mem_attrs(void *); 
#line 1192 "./gtype-desc.h"
extern void gt_pch_nx_language_function(void *); 
#line 1196 "./gtype-desc.h"
extern void gt_pch_nx_temp_slot(void *); 
#line 1200 "./gtype-desc.h"
extern void gt_pch_nx_varray_head_tag(void *); 
#line 1204 "./gtype-desc.h"
extern void gt_pch_nx_initial_value_struct(void *); 
#line 1208 "./gtype-desc.h"
extern void gt_pch_nx_control_flow_graph(void *); 
#line 1212 "./gtype-desc.h"
extern void gt_pch_nx_varasm_status(void *); 
#line 1216 "./gtype-desc.h"
extern void gt_pch_nx_eh_status(void *); 
#line 1220 "./gtype-desc.h"
extern void gt_pch_nx_function(void *); 
#line 1224 "./gtype-desc.h"
extern void gt_pch_nx_expr_status(void *); 
#line 1228 "./gtype-desc.h"
extern void gt_pch_nx_emit_status(void *); 
#line 1232 "./gtype-desc.h"
extern void gt_pch_nx_sequence_stack(void *); 
#line 1236 "./gtype-desc.h"
extern void gt_pch_nx_var_refs_queue(void *); 
#line 1240 "./gtype-desc.h"
extern void gt_pch_nx_bitmap_head_def(void *); 
#line 1244 "./gtype-desc.h"
extern void gt_pch_nx_bitmap_element_def(void *); 
#line 1248 "./gtype-desc.h"
extern void gt_pch_nx_bitmap_obstack(void *); 
#line 1252 "./gtype-desc.h"
extern void gt_pch_nx_stack_local_entry(void *); 
#line 1256 "./gtype-desc.h"
extern void gt_pch_nx_machine_function(void *); 
#line 1260 "./gtype-desc.h"
extern void gt_pch_nx_answer(void *); 
#line 1264 "./gtype-desc.h"
extern void gt_pch_nx_cpp_macro(void *); 
#line 1268 "./gtype-desc.h"
extern void gt_pch_nx_cpp_token(void *); 
#line 1276 "./gtype-desc.h"
extern void gt_pch_nx_rtvec_def(void *); 
#line 1280 "./gtype-desc.h"
extern void gt_pch_nx_rtx_def(void *); 
#line 1284 "./gtype-desc.h"
extern void gt_pch_nx_location_s(void *); 
#line 1285 "./gtype-desc.h"
extern void gt_pch_n_II17splay_tree_node_s(void *); 
#line 1286 "./gtype-desc.h"
extern void gt_pch_n_SP9tree_node17splay_tree_node_s(void *); 
#line 1287 "./gtype-desc.h"
extern void gt_pch_n_IP9tree_node17splay_tree_node_s(void *); 
#line 1288 "./gtype-desc.h"
extern void gt_pch_n_P15interface_tuple4htab(void *); 
#line 1289 "./gtype-desc.h"
extern void gt_pch_n_P16volatilized_type4htab(void *); 
#line 1290 "./gtype-desc.h"
extern void gt_pch_n_P17string_descriptor4htab(void *); 
#line 1291 "./gtype-desc.h"
extern void gt_pch_n_P14type_assertion4htab(void *); 
#line 1292 "./gtype-desc.h"
extern void gt_pch_n_P18treetreehash_entry4htab(void *); 
#line 1293 "./gtype-desc.h"
extern void gt_pch_n_P21pending_abstract_type4htab(void *); 
#line 1294 "./gtype-desc.h"
extern void gt_pch_n_IP9tree_node12splay_tree_s(void *); 
#line 1295 "./gtype-desc.h"
extern void gt_pch_n_P11var_map_elt4htab(void *); 
#line 1296 "./gtype-desc.h"
extern void gt_pch_n_P12int_tree_map4htab(void *); 
#line 1297 "./gtype-desc.h"
extern void gt_pch_n_P23constant_descriptor_rtx4htab(void *); 
#line 1298 "./gtype-desc.h"
extern void gt_pch_n_P24constant_descriptor_tree4htab(void *); 
#line 1299 "./gtype-desc.h"
extern void gt_pch_n_P14in_named_entry4htab(void *); 
#line 1300 "./gtype-desc.h"
extern void gt_pch_n_P12tree_int_map4htab(void *); 
#line 1301 "./gtype-desc.h"
extern void gt_pch_n_P8tree_map4htab(void *); 
#line 1302 "./gtype-desc.h"
extern void gt_pch_n_P9type_hash4htab(void *); 
#line 1303 "./gtype-desc.h"
extern void gt_pch_n_P13ehl_map_entry4htab(void *); 
#line 1304 "./gtype-desc.h"
extern void gt_pch_n_P15throw_stmt_node4htab(void *); 
#line 1305 "./gtype-desc.h"
extern void gt_pch_n_P9tree_node4htab(void *); 
#line 1306 "./gtype-desc.h"
extern void gt_pch_n_P9reg_attrs4htab(void *); 
#line 1307 "./gtype-desc.h"
extern void gt_pch_n_P9mem_attrs4htab(void *); 
#line 1308 "./gtype-desc.h"
extern void gt_pch_n_P7rtx_def4htab(void *); 
#line 1309 "./gtype-desc.h"
extern void gt_pch_n_SP9tree_node12splay_tree_s(void *); 
#line 1310 "./gtype-desc.h"
extern void gt_pch_n_P16var_loc_list_def4htab(void *); 
#line 1311 "./gtype-desc.h"
extern void gt_pch_n_P10die_struct4htab(void *); 
#line 1312 "./gtype-desc.h"
extern void gt_pch_n_P20indirect_string_node4htab(void *); 
#line 1313 "./gtype-desc.h"
extern void gt_pch_n_P19cgraph_varpool_node4htab(void *); 
#line 1314 "./gtype-desc.h"
extern void gt_pch_n_P11cgraph_node4htab(void *); 
#line 1315 "./gtype-desc.h"
extern void gt_pch_n_P15alias_set_entry15varray_head_tag(void *); 
#line 1316 "./gtype-desc.h"
extern void gt_pch_n_II12splay_tree_s(void *); 
#line 1317 "./gtype-desc.h"
extern void gt_pch_n_P9temp_slot15varray_head_tag(void *); 
#line 1321 "./gtype-desc.h"
extern void gt_pch_p_15interface_tuple(void *, void *,  gt_pointer_operator , void *); 
#line 1323 "./gtype-desc.h"
extern void gt_pch_p_16volatilized_type(void *, void *,  gt_pointer_operator , void *); 
#line 1325 "./gtype-desc.h"
extern void gt_pch_p_17string_descriptor(void *, void *,  gt_pointer_operator , void *); 
#line 1327 "./gtype-desc.h"
extern void gt_pch_p_7c_scope(void *, void *,  gt_pointer_operator , void *); 
#line 1329 "./gtype-desc.h"
extern void gt_pch_p_9c_binding(void *, void *,  gt_pointer_operator , void *); 
#line 1331 "./gtype-desc.h"
extern void gt_pch_p_9imp_entry(void *, void *,  gt_pointer_operator , void *); 
#line 1333 "./gtype-desc.h"
extern void gt_pch_p_16hashed_attribute(void *, void *,  gt_pointer_operator , void *); 
#line 1335 "./gtype-desc.h"
extern void gt_pch_p_12hashed_entry(void *, void *,  gt_pointer_operator , void *); 
#line 1337 "./gtype-desc.h"
extern void gt_pch_p_11parser_ctxt(void *, void *,  gt_pointer_operator , void *); 
#line 1339 "./gtype-desc.h"
extern void gt_pch_p_14type_assertion(void *, void *,  gt_pointer_operator , void *); 
#line 1341 "./gtype-desc.h"
extern void gt_pch_p_18treetreehash_entry(void *, void *,  gt_pointer_operator , void *); 
#line 1343 "./gtype-desc.h"
extern void gt_pch_p_5CPool(void *, void *,  gt_pointer_operator , void *); 
#line 1345 "./gtype-desc.h"
extern void gt_pch_p_3JCF(void *, void *,  gt_pointer_operator , void *); 
#line 1347 "./gtype-desc.h"
extern void gt_pch_p_13binding_level(void *, void *,  gt_pointer_operator , void *); 
#line 1349 "./gtype-desc.h"
extern void gt_pch_p_11align_stack(void *, void *,  gt_pointer_operator , void *); 
#line 1351 "./gtype-desc.h"
extern void gt_pch_p_21pending_abstract_type(void *, void *,  gt_pointer_operator , void *); 
#line 1353 "./gtype-desc.h"
extern void gt_pch_p_9cp_parser(void *, void *,  gt_pointer_operator , void *); 
#line 1355 "./gtype-desc.h"
extern void gt_pch_p_17cp_parser_context(void *, void *,  gt_pointer_operator , void *); 
#line 1357 "./gtype-desc.h"
extern void gt_pch_p_8cp_lexer(void *, void *,  gt_pointer_operator , void *); 
#line 1359 "./gtype-desc.h"
extern void gt_pch_p_8cp_token(void *, void *,  gt_pointer_operator , void *); 
#line 1361 "./gtype-desc.h"
extern void gt_pch_p_22VEC_deferred_access_gc(void *, void *,  gt_pointer_operator , void *); 
#line 1363 "./gtype-desc.h"
extern void gt_pch_p_18VEC_tree_pair_s_gc(void *, void *,  gt_pointer_operator , void *); 
#line 1365 "./gtype-desc.h"
extern void gt_pch_p_16named_label_list(void *, void *,  gt_pointer_operator , void *); 
#line 1367 "./gtype-desc.h"
extern void gt_pch_p_20named_label_use_list(void *, void *,  gt_pointer_operator , void *); 
#line 1369 "./gtype-desc.h"
extern void gt_pch_p_11saved_scope(void *, void *,  gt_pointer_operator , void *); 
#line 1371 "./gtype-desc.h"
extern void gt_pch_p_14cp_token_cache(void *, void *,  gt_pointer_operator , void *); 
#line 1373 "./gtype-desc.h"
extern void gt_pch_p_23VEC_cp_class_binding_gc(void *, void *,  gt_pointer_operator , void *); 
#line 1375 "./gtype-desc.h"
extern void gt_pch_p_24VEC_cxx_saved_binding_gc(void *, void *,  gt_pointer_operator , void *); 
#line 1377 "./gtype-desc.h"
extern void gt_pch_p_16cp_binding_level(void *, void *,  gt_pointer_operator , void *); 
#line 1379 "./gtype-desc.h"
extern void gt_pch_p_11cxx_binding(void *, void *,  gt_pointer_operator , void *); 
#line 1381 "./gtype-desc.h"
extern void gt_pch_p_15binding_entry_s(void *, void *,  gt_pointer_operator , void *); 
#line 1383 "./gtype-desc.h"
extern void gt_pch_p_15binding_table_s(void *, void *,  gt_pointer_operator , void *); 
#line 1385 "./gtype-desc.h"
extern void gt_pch_p_14VEC_tinfo_s_gc(void *, void *,  gt_pointer_operator , void *); 
#line 1387 "./gtype-desc.h"
extern void gt_pch_p_12nesting_info(void *, void *,  gt_pointer_operator , void *); 
#line 1389 "./gtype-desc.h"
extern void gt_pch_p_11var_map_elt(void *, void *,  gt_pointer_operator , void *); 
#line 1391 "./gtype-desc.h"
extern void gt_pch_p_20ssa_operand_memory_d(void *, void *,  gt_pointer_operator , void *); 
#line 1393 "./gtype-desc.h"
extern void gt_pch_p_8c_parser(void *, void *,  gt_pointer_operator , void *); 
#line 1395 "./gtype-desc.h"
extern void gt_pch_p_12int_tree_map(void *, void *,  gt_pointer_operator , void *); 
#line 1397 "./gtype-desc.h"
extern void gt_pch_p_6subvar(void *, void *,  gt_pointer_operator , void *); 
#line 1399 "./gtype-desc.h"
extern void gt_pch_p_17VEC_alias_pair_gc(void *, void *,  gt_pointer_operator , void *); 
#line 1401 "./gtype-desc.h"
extern void gt_pch_p_23constant_descriptor_rtx(void *, void *,  gt_pointer_operator , void *); 
#line 1403 "./gtype-desc.h"
extern void gt_pch_p_24constant_descriptor_tree(void *, void *,  gt_pointer_operator , void *); 
#line 1405 "./gtype-desc.h"
extern void gt_pch_p_14in_named_entry(void *, void *,  gt_pointer_operator , void *); 
#line 1407 "./gtype-desc.h"
extern void gt_pch_p_17rtx_constant_pool(void *, void *,  gt_pointer_operator , void *); 
#line 1409 "./gtype-desc.h"
extern void gt_pch_p_12tree_int_map(void *, void *,  gt_pointer_operator , void *); 
#line 1411 "./gtype-desc.h"
extern void gt_pch_p_9type_hash(void *, void *,  gt_pointer_operator , void *); 
#line 1413 "./gtype-desc.h"
extern void gt_pch_p_16string_pool_data(void *, void *,  gt_pointer_operator , void *); 
#line 1415 "./gtype-desc.h"
extern void gt_pch_p_15throw_stmt_node(void *, void *,  gt_pointer_operator , void *); 
#line 1417 "./gtype-desc.h"
extern void gt_pch_p_16VEC_eh_region_gc(void *, void *,  gt_pointer_operator , void *); 
#line 1419 "./gtype-desc.h"
extern void gt_pch_p_9eh_region(void *, void *,  gt_pointer_operator , void *); 
#line 1421 "./gtype-desc.h"
extern void gt_pch_p_13ehl_map_entry(void *, void *,  gt_pointer_operator , void *); 
#line 1423 "./gtype-desc.h"
extern void gt_pch_p_16var_loc_list_def(void *, void *,  gt_pointer_operator , void *); 
#line 1425 "./gtype-desc.h"
extern void gt_pch_p_12var_loc_node(void *, void *,  gt_pointer_operator , void *); 
#line 1427 "./gtype-desc.h"
extern void gt_pch_p_16limbo_die_struct(void *, void *,  gt_pointer_operator , void *); 
#line 1429 "./gtype-desc.h"
extern void gt_pch_p_16dw_ranges_struct(void *, void *,  gt_pointer_operator , void *); 
#line 1431 "./gtype-desc.h"
extern void gt_pch_p_14pubname_struct(void *, void *,  gt_pointer_operator , void *); 
#line 1433 "./gtype-desc.h"
extern void gt_pch_p_28dw_separate_line_info_struct(void *, void *,  gt_pointer_operator , void *); 
#line 1435 "./gtype-desc.h"
extern void gt_pch_p_19dw_line_info_struct(void *, void *,  gt_pointer_operator , void *); 
#line 1437 "./gtype-desc.h"
extern void gt_pch_p_14dw_attr_struct(void *, void *,  gt_pointer_operator , void *); 
#line 1439 "./gtype-desc.h"
extern void gt_pch_p_18dw_loc_list_struct(void *, void *,  gt_pointer_operator , void *); 
#line 1441 "./gtype-desc.h"
extern void gt_pch_p_15queued_reg_save(void *, void *,  gt_pointer_operator , void *); 
#line 1443 "./gtype-desc.h"
extern void gt_pch_p_20indirect_string_node(void *, void *,  gt_pointer_operator , void *); 
#line 1445 "./gtype-desc.h"
extern void gt_pch_p_19dw_loc_descr_struct(void *, void *,  gt_pointer_operator , void *); 
#line 1447 "./gtype-desc.h"
extern void gt_pch_p_13dw_fde_struct(void *, void *,  gt_pointer_operator , void *); 
#line 1449 "./gtype-desc.h"
extern void gt_pch_p_13dw_cfi_struct(void *, void *,  gt_pointer_operator , void *); 
#line 1451 "./gtype-desc.h"
extern void gt_pch_p_10VEC_rtx_gc(void *, void *,  gt_pointer_operator , void *); 
#line 1453 "./gtype-desc.h"
extern void gt_pch_p_8typeinfo(void *, void *,  gt_pointer_operator , void *); 
#line 1455 "./gtype-desc.h"
extern void gt_pch_p_15alias_set_entry(void *, void *,  gt_pointer_operator , void *); 
#line 1457 "./gtype-desc.h"
extern void gt_pch_p_18sorted_fields_type(void *, void *,  gt_pointer_operator , void *); 
#line 1459 "./gtype-desc.h"
extern void gt_pch_p_19cgraph_varpool_node(void *, void *,  gt_pointer_operator , void *); 
#line 1461 "./gtype-desc.h"
extern void gt_pch_p_11cgraph_edge(void *, void *,  gt_pointer_operator , void *); 
#line 1463 "./gtype-desc.h"
extern void gt_pch_p_11cgraph_node(void *, void *,  gt_pointer_operator , void *); 
#line 1465 "./gtype-desc.h"
extern void gt_pch_p_15edge_prediction(void *, void *,  gt_pointer_operator , void *); 
#line 1467 "./gtype-desc.h"
extern void gt_pch_p_11rtl_bb_info(void *, void *,  gt_pointer_operator , void *); 
#line 1469 "./gtype-desc.h"
extern void gt_pch_p_11VEC_edge_gc(void *, void *,  gt_pointer_operator , void *); 
#line 1471 "./gtype-desc.h"
extern void gt_pch_p_12elt_loc_list(void *, void *,  gt_pointer_operator , void *); 
#line 1473 "./gtype-desc.h"
extern void gt_pch_p_17cselib_val_struct(void *, void *,  gt_pointer_operator , void *); 
#line 1475 "./gtype-desc.h"
extern void gt_pch_p_8edge_def(void *, void *,  gt_pointer_operator , void *); 
#line 1477 "./gtype-desc.h"
extern void gt_pch_p_8elt_list(void *, void *,  gt_pointer_operator , void *); 
#line 1479 "./gtype-desc.h"
extern void gt_pch_p_8tree_map(void *, void *,  gt_pointer_operator , void *); 
#line 1481 "./gtype-desc.h"
extern void gt_pch_p_14lang_tree_node(void *, void *,  gt_pointer_operator , void *); 
#line 1483 "./gtype-desc.h"
extern void gt_pch_p_24tree_statement_list_node(void *, void *,  gt_pointer_operator , void *); 
#line 1485 "./gtype-desc.h"
extern void gt_pch_p_9lang_decl(void *, void *,  gt_pointer_operator , void *); 
#line 1487 "./gtype-desc.h"
extern void gt_pch_p_9lang_type(void *, void *,  gt_pointer_operator , void *); 
#line 1489 "./gtype-desc.h"
extern void gt_pch_p_10die_struct(void *, void *,  gt_pointer_operator , void *); 
#line 1491 "./gtype-desc.h"
extern void gt_pch_p_12ptr_info_def(void *, void *,  gt_pointer_operator , void *); 
#line 1493 "./gtype-desc.h"
extern void gt_pch_p_17ssa_use_operand_d(void *, void *,  gt_pointer_operator , void *); 
#line 1495 "./gtype-desc.h"
extern void gt_pch_p_22VEC_constructor_elt_gc(void *, void *,  gt_pointer_operator , void *); 
#line 1497 "./gtype-desc.h"
extern void gt_pch_p_10tree_ann_d(void *, void *,  gt_pointer_operator , void *); 
#line 1499 "./gtype-desc.h"
extern void gt_pch_p_11VEC_tree_gc(void *, void *,  gt_pointer_operator , void *); 
#line 1501 "./gtype-desc.h"
extern void gt_pch_p_13convert_optab(void *, void *,  gt_pointer_operator , void *); 
#line 1503 "./gtype-desc.h"
extern void gt_pch_p_5optab(void *, void *,  gt_pointer_operator , void *); 
#line 1505 "./gtype-desc.h"
extern void gt_pch_p_15basic_block_def(void *, void *,  gt_pointer_operator , void *); 
#line 1507 "./gtype-desc.h"
extern void gt_pch_p_10real_value(void *, void *,  gt_pointer_operator , void *); 
#line 1509 "./gtype-desc.h"
extern void gt_pch_p_9reg_attrs(void *, void *,  gt_pointer_operator , void *); 
#line 1511 "./gtype-desc.h"
extern void gt_pch_p_9mem_attrs(void *, void *,  gt_pointer_operator , void *); 
#line 1513 "./gtype-desc.h"
extern void gt_pch_p_17language_function(void *, void *,  gt_pointer_operator , void *); 
#line 1515 "./gtype-desc.h"
extern void gt_pch_p_9temp_slot(void *, void *,  gt_pointer_operator , void *); 
#line 1517 "./gtype-desc.h"
extern void gt_pch_p_15varray_head_tag(void *, void *,  gt_pointer_operator , void *); 
#line 1519 "./gtype-desc.h"
extern void gt_pch_p_20initial_value_struct(void *, void *,  gt_pointer_operator , void *); 
#line 1521 "./gtype-desc.h"
extern void gt_pch_p_18control_flow_graph(void *, void *,  gt_pointer_operator , void *); 
#line 1523 "./gtype-desc.h"
extern void gt_pch_p_13varasm_status(void *, void *,  gt_pointer_operator , void *); 
#line 1525 "./gtype-desc.h"
extern void gt_pch_p_9eh_status(void *, void *,  gt_pointer_operator , void *); 
#line 1527 "./gtype-desc.h"
extern void gt_pch_p_8function(void *, void *,  gt_pointer_operator , void *); 
#line 1529 "./gtype-desc.h"
extern void gt_pch_p_11expr_status(void *, void *,  gt_pointer_operator , void *); 
#line 1531 "./gtype-desc.h"
extern void gt_pch_p_11emit_status(void *, void *,  gt_pointer_operator , void *); 
#line 1533 "./gtype-desc.h"
extern void gt_pch_p_14sequence_stack(void *, void *,  gt_pointer_operator , void *); 
#line 1535 "./gtype-desc.h"
extern void gt_pch_p_14var_refs_queue(void *, void *,  gt_pointer_operator , void *); 
#line 1537 "./gtype-desc.h"
extern void gt_pch_p_15bitmap_head_def(void *, void *,  gt_pointer_operator , void *); 
#line 1539 "./gtype-desc.h"
extern void gt_pch_p_18bitmap_element_def(void *, void *,  gt_pointer_operator , void *); 
#line 1541 "./gtype-desc.h"
extern void gt_pch_p_14bitmap_obstack(void *, void *,  gt_pointer_operator , void *); 
#line 1543 "./gtype-desc.h"
extern void gt_pch_p_17stack_local_entry(void *, void *,  gt_pointer_operator , void *); 
#line 1545 "./gtype-desc.h"
extern void gt_pch_p_16machine_function(void *, void *,  gt_pointer_operator , void *); 
#line 1547 "./gtype-desc.h"
extern void gt_pch_p_6answer(void *, void *,  gt_pointer_operator , void *); 
#line 1549 "./gtype-desc.h"
extern void gt_pch_p_9cpp_macro(void *, void *,  gt_pointer_operator , void *); 
#line 1551 "./gtype-desc.h"
extern void gt_pch_p_9cpp_token(void *, void *,  gt_pointer_operator , void *); 
#line 1554 "./gtype-desc.h"
extern void gt_pch_p_9rtvec_def(void *, void *,  gt_pointer_operator , void *); 
#line 1556 "./gtype-desc.h"
extern void gt_pch_p_7rtx_def(void *, void *,  gt_pointer_operator , void *); 
#line 1558 "./gtype-desc.h"
extern void gt_pch_p_10location_s(void *, void *,  gt_pointer_operator , void *); 
#line 1560 "./gtype-desc.h"
extern void gt_pch_p_II17splay_tree_node_s(void *, void *,  gt_pointer_operator , void *); 
#line 1562 "./gtype-desc.h"
extern void gt_pch_p_SP9tree_node17splay_tree_node_s(void *, void *,  gt_pointer_operator , void *); 
#line 1564 "./gtype-desc.h"
extern void gt_pch_p_IP9tree_node17splay_tree_node_s(void *, void *,  gt_pointer_operator , void *); 
#line 1566 "./gtype-desc.h"
extern void gt_pch_p_P15interface_tuple4htab(void *, void *,  gt_pointer_operator , void *); 
#line 1568 "./gtype-desc.h"
extern void gt_pch_p_P16volatilized_type4htab(void *, void *,  gt_pointer_operator , void *); 
#line 1570 "./gtype-desc.h"
extern void gt_pch_p_P17string_descriptor4htab(void *, void *,  gt_pointer_operator , void *); 
#line 1572 "./gtype-desc.h"
extern void gt_pch_p_P14type_assertion4htab(void *, void *,  gt_pointer_operator , void *); 
#line 1574 "./gtype-desc.h"
extern void gt_pch_p_P18treetreehash_entry4htab(void *, void *,  gt_pointer_operator , void *); 
#line 1576 "./gtype-desc.h"
extern void gt_pch_p_P21pending_abstract_type4htab(void *, void *,  gt_pointer_operator , void *); 
#line 1578 "./gtype-desc.h"
extern void gt_pch_p_IP9tree_node12splay_tree_s(void *, void *,  gt_pointer_operator , void *); 
#line 1580 "./gtype-desc.h"
extern void gt_pch_p_P11var_map_elt4htab(void *, void *,  gt_pointer_operator , void *); 
#line 1582 "./gtype-desc.h"
extern void gt_pch_p_P12int_tree_map4htab(void *, void *,  gt_pointer_operator , void *); 
#line 1584 "./gtype-desc.h"
extern void gt_pch_p_P23constant_descriptor_rtx4htab(void *, void *,  gt_pointer_operator , void *); 
#line 1586 "./gtype-desc.h"
extern void gt_pch_p_P24constant_descriptor_tree4htab(void *, void *,  gt_pointer_operator , void *); 
#line 1588 "./gtype-desc.h"
extern void gt_pch_p_P14in_named_entry4htab(void *, void *,  gt_pointer_operator , void *); 
#line 1590 "./gtype-desc.h"
extern void gt_pch_p_P12tree_int_map4htab(void *, void *,  gt_pointer_operator , void *); 
#line 1592 "./gtype-desc.h"
extern void gt_pch_p_P8tree_map4htab(void *, void *,  gt_pointer_operator , void *); 
#line 1594 "./gtype-desc.h"
extern void gt_pch_p_P9type_hash4htab(void *, void *,  gt_pointer_operator , void *); 
#line 1596 "./gtype-desc.h"
extern void gt_pch_p_P13ehl_map_entry4htab(void *, void *,  gt_pointer_operator , void *); 
#line 1598 "./gtype-desc.h"
extern void gt_pch_p_P15throw_stmt_node4htab(void *, void *,  gt_pointer_operator , void *); 
#line 1600 "./gtype-desc.h"
extern void gt_pch_p_P9tree_node4htab(void *, void *,  gt_pointer_operator , void *); 
#line 1602 "./gtype-desc.h"
extern void gt_pch_p_P9reg_attrs4htab(void *, void *,  gt_pointer_operator , void *); 
#line 1604 "./gtype-desc.h"
extern void gt_pch_p_P9mem_attrs4htab(void *, void *,  gt_pointer_operator , void *); 
#line 1606 "./gtype-desc.h"
extern void gt_pch_p_P7rtx_def4htab(void *, void *,  gt_pointer_operator , void *); 
#line 1608 "./gtype-desc.h"
extern void gt_pch_p_SP9tree_node12splay_tree_s(void *, void *,  gt_pointer_operator , void *); 
#line 1610 "./gtype-desc.h"
extern void gt_pch_p_P16var_loc_list_def4htab(void *, void *,  gt_pointer_operator , void *); 
#line 1612 "./gtype-desc.h"
extern void gt_pch_p_P10die_struct4htab(void *, void *,  gt_pointer_operator , void *); 
#line 1614 "./gtype-desc.h"
extern void gt_pch_p_P20indirect_string_node4htab(void *, void *,  gt_pointer_operator , void *); 
#line 1616 "./gtype-desc.h"
extern void gt_pch_p_P19cgraph_varpool_node4htab(void *, void *,  gt_pointer_operator , void *); 
#line 1618 "./gtype-desc.h"
extern void gt_pch_p_P11cgraph_node4htab(void *, void *,  gt_pointer_operator , void *); 
#line 1620 "./gtype-desc.h"
extern void gt_pch_p_P15alias_set_entry15varray_head_tag(void *, void *,  gt_pointer_operator , void *); 
#line 1622 "./gtype-desc.h"
extern void gt_pch_p_II12splay_tree_s(void *, void *,  gt_pointer_operator , void *); 
#line 1624 "./gtype-desc.h"
extern void gt_pch_p_P9temp_slot15varray_head_tag(void *, void *,  gt_pointer_operator , void *); 
#line 46 "../.././gcc/ggc.h"
typedef void (*gt_note_pointers)(void *, void *,  gt_pointer_operator , void *); 
#line 54 "../.././gcc/ggc.h"
typedef void (*gt_handle_reorder)(void *, void *,  gt_pointer_operator , void *); 
#line 58 "../.././gcc/ggc.h"
extern int gt_pch_note_object(void *, void *,  gt_note_pointers , enum gt_types_enum ); 
#line 62 "../.././gcc/ggc.h"
extern void gt_pch_note_reorder(void *, void *,  gt_handle_reorder ); 
#line 65 "../.././gcc/ggc.h"
typedef void (*gt_pointer_walker)(void *); 
#line 75 "../.././gcc/ggc.h"
struct ggc_root_tab {void *base;  size_t nelt;  size_t stride;  gt_pointer_walker cb;  gt_pointer_walker pchw; }; 
#line 78 "../.././gcc/ggc.h"
extern const struct ggc_root_tab *const gt_ggc_rtab[]; 
#line 79 "../.././gcc/ggc.h"
extern const struct ggc_root_tab *const gt_ggc_deletable_rtab[]; 
#line 80 "../.././gcc/ggc.h"
extern const struct ggc_root_tab *const gt_pch_cache_rtab[]; 
#line 81 "../.././gcc/ggc.h"
extern const struct ggc_root_tab *const gt_pch_scalar_rtab[]; 
#line 84 "../.././gcc/ggc.h"
struct htab ; 
#line 92 "../.././gcc/ggc.h"
struct ggc_cache_tab {struct htab **base;  size_t nelt;  size_t stride;  gt_pointer_walker cb;  gt_pointer_walker pchw; int (*marked_p)(const void *); }; 
#line 95 "../.././gcc/ggc.h"
extern const struct ggc_cache_tab *const gt_ggc_cache_rtab[]; 
# 41 "../.././gcc/ggc.h" 2
# 114 "../.././gcc/ggc.h" 
extern int ggc_set_mark(const void *); 
#line 119 "../.././gcc/ggc.h"
extern int ggc_marked_p(const void *); 
#line 122 "../.././gcc/ggc.h"
extern void ggc_mark_stringpool(void ); 
#line 126 "../.././gcc/ggc.h"
extern void ggc_mark_roots(void ); 
#line 130 "../.././gcc/ggc.h"
extern void gt_pch_save_stringpool(void ); 
#line 131 "../.././gcc/ggc.h"
extern void gt_pch_fixup_stringpool(void ); 
#line 132 "../.././gcc/ggc.h"
extern void gt_pch_restore_stringpool(void ); 
#line 136 "../.././gcc/ggc.h"
extern void gt_pch_p_S(void *, void *,  gt_pointer_operator , void *); 
#line 137 "../.././gcc/ggc.h"
extern void gt_pch_n_S(const void *); 
#line 138 "../.././gcc/ggc.h"
extern void gt_ggc_m_S(void *); 
#line 141 "../.././gcc/ggc.h"
extern void init_stringpool(void ); 
#line 147 "../.././gcc/ggc.h"
struct alloc_zone ; 
#line 150 "../.././gcc/ggc.h"
extern void init_ggc(void ); 
#line 153 "../.././gcc/ggc.h"
extern struct alloc_zone *new_ggc_zone(const char *); 
#line 156 "../.././gcc/ggc.h"
extern void destroy_ggc_zone(struct alloc_zone *); 
#line 158 "../.././gcc/ggc.h"
struct ggc_pch_data ; 
#line 161 "../.././gcc/ggc.h"
extern struct ggc_pch_data *init_ggc_pch(void ); 
#line 168 "../.././gcc/ggc.h"
extern void ggc_pch_count_object(struct ggc_pch_data *, void *,  size_t , unsigned char , enum gt_types_enum ); 
#line 172 "../.././gcc/ggc.h"
extern  size_t ggc_pch_total_size(struct ggc_pch_data *); 
#line 176 "../.././gcc/ggc.h"
extern void ggc_pch_this_base(struct ggc_pch_data *, void *); 
#line 182 "../.././gcc/ggc.h"
extern char *ggc_pch_alloc_object(struct ggc_pch_data *, void *,  size_t , unsigned char , enum gt_types_enum ); 
#line 185 "../.././gcc/ggc.h"
extern void ggc_pch_prepare_write(struct ggc_pch_data *,  FILE *); 
#line 189 "../.././gcc/ggc.h"
extern void ggc_pch_write_object(struct ggc_pch_data *,  FILE *, void *, void *,  size_t , unsigned char ); 
#line 192 "../.././gcc/ggc.h"
extern void ggc_pch_finish(struct ggc_pch_data *,  FILE *); 
#line 196 "../.././gcc/ggc.h"
extern void ggc_pch_read( FILE *, void *); 
#line 202 "../.././gcc/ggc.h"
extern unsigned char ggc_force_collect; 
#line 205 "../.././gcc/ggc.h"
extern void *ggc_alloc_stat( size_t ); 
#line 208 "../.././gcc/ggc.h"
extern void *ggc_alloc_typed_stat(enum gt_types_enum ,  size_t ); 
#line 211 "../.././gcc/ggc.h"
extern void *ggc_alloc_cleared_stat( size_t ); 
#line 214 "../.././gcc/ggc.h"
extern void *ggc_realloc_stat(void *,  size_t ); 
#line 217 "../.././gcc/ggc.h"
extern void *ggc_calloc( size_t ,  size_t ); 
#line 219 "../.././gcc/ggc.h"
extern void ggc_free(void *); 
#line 221 "../.././gcc/ggc.h"
extern void ggc_record_overhead( size_t ,  size_t , void *); 
#line 222 "../.././gcc/ggc.h"
extern void ggc_free_overhead(void *); 
#line 223 "../.././gcc/ggc.h"
extern void ggc_prune_overhead_list(void ); 
#line 225 "../.././gcc/ggc.h"
extern void dump_ggc_loc_statistics(void ); 
#line 248 "../.././gcc/ggc.h"
extern void *ggc_splay_alloc(int , void *); 
#line 249 "../.././gcc/ggc.h"
extern void ggc_splay_dont_free(void *, void *); 
#line 254 "../.././gcc/ggc.h"
extern const char *ggc_alloc_string(const char *contents, int length); 
#line 261 "../.././gcc/ggc.h"
extern void ggc_collect(void ); 
#line 264 "../.././gcc/ggc.h"
extern  size_t ggc_get_size(const void *); 
#line 267 "../.././gcc/ggc.h"
extern void gt_pch_save( FILE *f); 
#line 270 "../.././gcc/ggc.h"
extern void gt_pch_restore( FILE *f); 
#line 280 "../.././gcc/ggc.h"
typedef struct ggc_statistics {int unused; }ggc_statistics; 
#line 284 "../.././gcc/ggc.h"
extern void ggc_print_common_statistics( FILE *,  ggc_statistics *); 
#line 287 "../.././gcc/ggc.h"
extern void ggc_print_statistics(void ); 
#line 288 "../.././gcc/ggc.h"
extern void stringpool_statistics(void ); 
#line 291 "../.././gcc/ggc.h"
extern int ggc_min_expand_heuristic(void ); 
#line 292 "../.././gcc/ggc.h"
extern int ggc_min_heapsize_heuristic(void ); 
#line 293 "../.././gcc/ggc.h"
extern void init_ggc_heuristics(void ); 
# 248 "../.././gcc/ggc.h" 
# 46 "../.././gcc/tree-mudflap.c" 2
# 1 "../.././gcc/toplev.h" 1
# 30 "../.././gcc/toplev.h" 
extern int toplev_main(unsigned int , const char **); 
#line 31 "../.././gcc/toplev.h"
extern int read_integral_parameter(const char *, const char *, const int ); 
#line 32 "../.././gcc/toplev.h"
extern void strip_off_ending(char *, int ); 
#line 33 "../.././gcc/toplev.h"
extern const char *trim_filename(const char *); 
#line 35 "../.././gcc/toplev.h"
extern void _fatal_insn_not_found( rtx , const char *, int , const char *) __attribute__  (( __noreturn__ )) ; 
#line 37 "../.././gcc/toplev.h"
extern void _fatal_insn(const char *,  rtx , const char *, int , const char *) __attribute__  (( __noreturn__ )) ; 
#line 58 "../.././gcc/toplev.h"
extern void internal_error(const char *, ...) __attribute__  (( __format__ ( __gcc_tdiag__, 1, 2 )  ))  __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __noreturn__ )) ; 
#line 59 "../.././gcc/toplev.h"
extern void warning0(const char *, ...) __attribute__  (( __format__ ( __gcc_tdiag__, 1, 2 )  ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 61 "../.././gcc/toplev.h"
extern void warning(int , const char *, ...) __attribute__  (( __format__ ( __gcc_tdiag__, 2, 3 )  ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 62 "../.././gcc/toplev.h"
extern void error(const char *, ...) __attribute__  (( __format__ ( __gcc_tdiag__, 1, 2 )  ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 64 "../.././gcc/toplev.h"
extern void fatal_error(const char *, ...) __attribute__  (( __format__ ( __gcc_tdiag__, 1, 2 )  ))  __attribute__  (( __nonnull__ ( 1 )  ))  __attribute__  (( __noreturn__ )) ; 
#line 65 "../.././gcc/toplev.h"
extern void pedwarn(const char *, ...) __attribute__  (( __format__ ( __gcc_tdiag__, 1, 2 )  ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 66 "../.././gcc/toplev.h"
extern void sorry(const char *, ...) __attribute__  (( __format__ ( __gcc_tdiag__, 1, 2 )  ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 67 "../.././gcc/toplev.h"
extern void inform(const char *, ...) __attribute__  (( __format__ ( __gcc_tdiag__, 1, 2 )  ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 68 "../.././gcc/toplev.h"
extern void verbatim(const char *, ...) __attribute__  (( __format__ ( __gcc_tdiag__, 1, 2 )  ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 70 "../.././gcc/toplev.h"
extern void rest_of_decl_compilation( tree , int , int ); 
#line 71 "../.././gcc/toplev.h"
extern void rest_of_type_compilation( tree , int ); 
#line 72 "../.././gcc/toplev.h"
extern void tree_rest_of_compilation( tree ); 
#line 73 "../.././gcc/toplev.h"
extern void init_optimization_passes(void ); 
#line 74 "../.././gcc/toplev.h"
extern void finish_optimization_passes(void ); 
#line 75 "../.././gcc/toplev.h"
extern unsigned char enable_rtl_dump_file(int ); 
#line 77 "../.././gcc/toplev.h"
extern void announce_function( tree ); 
#line 79 "../.././gcc/toplev.h"
extern void error_for_asm( rtx , const char *, ...) __attribute__  (( __format__ ( __gcc_tdiag__, 2, 3 )  ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 80 "../.././gcc/toplev.h"
extern void warning_for_asm( rtx , const char *, ...) __attribute__  (( __format__ ( __gcc_tdiag__, 2, 3 )  ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 81 "../.././gcc/toplev.h"
extern void warn_deprecated_use( tree ); 
#line 84 "../.././gcc/toplev.h"
extern void output_quoted_string( FILE *, const char *); 
#line 85 "../.././gcc/toplev.h"
extern void output_file_directive( FILE *, const char *); 
#line 92 "../.././gcc/toplev.h"
extern void fnotice( FILE *, const char *, ...) __attribute__  (( __format__ ( __printf__, 2, 3 )  ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 95 "../.././gcc/toplev.h"
extern void wrapup_global_declaration_1( tree ); 
#line 96 "../.././gcc/toplev.h"
extern unsigned char wrapup_global_declaration_2( tree ); 
#line 97 "../.././gcc/toplev.h"
extern unsigned char wrapup_global_declarations( tree *, int ); 
#line 98 "../.././gcc/toplev.h"
extern void check_global_declaration_1( tree ); 
#line 99 "../.././gcc/toplev.h"
extern void check_global_declarations( tree *, int ); 
#line 100 "../.././gcc/toplev.h"
extern void emit_debug_global_declarations( tree *, int ); 
#line 101 "../.././gcc/toplev.h"
extern void write_global_declarations(void ); 
#line 104 "../.././gcc/toplev.h"
extern unsigned local_tick; 
#line 106 "../.././gcc/toplev.h"
extern const char *progname; 
#line 107 "../.././gcc/toplev.h"
extern const char *dump_base_name; 
#line 108 "../.././gcc/toplev.h"
extern const char *aux_base_name; 
#line 109 "../.././gcc/toplev.h"
extern const char *aux_info_file_name; 
#line 110 "../.././gcc/toplev.h"
extern const char *asm_file_name; 
#line 111 "../.././gcc/toplev.h"
extern unsigned char exit_after_options; 
#line 113 "../.././gcc/toplev.h"
extern int target_flags_explicit; 
#line 118 "../.././gcc/toplev.h"
extern unsigned char user_defined_section_attribute; 
#line 121 "../.././gcc/toplev.h"
extern int flag_loop_optimize; 
#line 122 "../.././gcc/toplev.h"
extern int flag_crossjumping; 
#line 123 "../.././gcc/toplev.h"
extern int flag_if_conversion; 
#line 124 "../.././gcc/toplev.h"
extern int flag_if_conversion2; 
#line 125 "../.././gcc/toplev.h"
extern int flag_keep_static_consts; 
#line 126 "../.././gcc/toplev.h"
extern int flag_peel_loops; 
#line 127 "../.././gcc/toplev.h"
extern int flag_rerun_cse_after_loop; 
#line 128 "../.././gcc/toplev.h"
extern int flag_thread_jumps; 
#line 129 "../.././gcc/toplev.h"
extern int flag_tracer; 
#line 130 "../.././gcc/toplev.h"
extern int flag_unroll_loops; 
#line 131 "../.././gcc/toplev.h"
extern int flag_unroll_all_loops; 
#line 132 "../.././gcc/toplev.h"
extern int flag_unswitch_loops; 
#line 133 "../.././gcc/toplev.h"
extern int flag_cprop_registers; 
#line 134 "../.././gcc/toplev.h"
extern int time_report; 
#line 137 "../.././gcc/toplev.h"
extern void print_version( FILE *, const char *); 
#line 138 "../.././gcc/toplev.h"
extern void *default_get_pch_validity( size_t *); 
#line 139 "../.././gcc/toplev.h"
extern const char *default_pch_valid_p(const void *,  size_t ); 
#line 142 "../.././gcc/toplev.h"
extern struct ht *ident_hash; 
#line 147 "../.././gcc/toplev.h"
extern void set_fast_math_flags(int ); 
#line 150 "../.././gcc/toplev.h"
extern void decode_d_option(const char *); 
#line 153 "../.././gcc/toplev.h"
extern unsigned char fast_math_flags_set_p(void ); 
#line 156 "../.././gcc/toplev.h"
extern int exact_log2(unsigned long ); 
#line 159 "../.././gcc/toplev.h"
extern int floor_log2(unsigned long ); 
# 57 "../.././gcc/toplev.h" 
# 176 "../.././gcc/toplev.h" 
extern __inline__ int floor_log2(unsigned long x)  {

#line 177 "../.././gcc/toplev.h"
return (x?(8 * 4) - 1 - ((int )__builtin_clzl(x)):(-1)); }
 
#line 182 "../.././gcc/toplev.h"
extern __inline__ int exact_log2(unsigned long x)  {

#line 183 "../.././gcc/toplev.h"
return (x == (x & (-x)) && x?((int )__builtin_ctzl(x)):(-1)); }
 
#line 190 "../.././gcc/toplev.h"
extern const char *get_src_pwd(void ); 
#line 191 "../.././gcc/toplev.h"
extern unsigned char set_src_pwd(const char *); 
#line 52 "../.././gcc/tree-mudflap.c"
static  tree mf_build_string(const char *string); 
#line 53 "../.././gcc/tree-mudflap.c"
static  tree mf_varname_tree( tree ); 
#line 54 "../.././gcc/tree-mudflap.c"
static  tree mf_file_function_line_tree( location_t ); 
#line 57 "../.././gcc/tree-mudflap.c"
static void mf_decl_cache_locals(void ); 
#line 58 "../.././gcc/tree-mudflap.c"
static void mf_decl_clear_locals(void ); 
#line 59 "../.././gcc/tree-mudflap.c"
static void mf_xform_derefs(void ); 
#line 60 "../.././gcc/tree-mudflap.c"
static void execute_mudflap_function_ops(void ); 
#line 63 "../.././gcc/tree-mudflap.c"
static void mf_xform_decls( tree ,  tree ); 
#line 64 "../.././gcc/tree-mudflap.c"
static  tree mx_xfn_xform_decls( tree *, int *, void *); 
#line 65 "../.././gcc/tree-mudflap.c"
static void mx_register_decls( tree ,  tree *); 
#line 66 "../.././gcc/tree-mudflap.c"
static void execute_mudflap_function_decls(void ); 
#line 74 "../.././gcc/tree-mudflap.c"
static  tree mf_build_string(const char *string)  {

#line 75 "../.././gcc/tree-mudflap.c"

#line 75 "../.././gcc/tree-mudflap.c"
 size_t len = strlen(string);
#line 76 "../.././gcc/tree-mudflap.c"

#line 76 "../.././gcc/tree-mudflap.c"
 tree result = mf_mark(build_string(len + 1, string));
#line 78 "../.././gcc/tree-mudflap.c"
(((result)->common).type) = build_array_type(integer_types[itk_char], build_index_type(build_int_cst((( tree )(((void *)0))), len))); 
#line 80 "../.././gcc/tree-mudflap.c"
(((result)->common).constant_flag) = 1; 
#line 81 "../.././gcc/tree-mudflap.c"
(((result)->common).invariant_flag) = 1; 
#line 82 "../.././gcc/tree-mudflap.c"
(((result)->common).readonly_flag) = 1; 
#line 83 "../.././gcc/tree-mudflap.c"
(((result)->common).static_flag) = 1; 
#line 85 "../.././gcc/tree-mudflap.c"
result = build1_stat(ADDR_EXPR, build_pointer_type(integer_types[itk_char]), result); 
#line 87 "../.././gcc/tree-mudflap.c"
return mf_mark(result); }
 
#line 96 "../.././gcc/tree-mudflap.c"
static  tree mf_varname_tree( tree decl)  {

#line 97 "../.././gcc/tree-mudflap.c"

#line 97 "../.././gcc/tree-mudflap.c"
static  pretty_printer buf_rec;
#line 98 "../.././gcc/tree-mudflap.c"

#line 98 "../.././gcc/tree-mudflap.c"
static int initialized = 0;
#line 99 "../.././gcc/tree-mudflap.c"

#line 99 "../.././gcc/tree-mudflap.c"
 pretty_printer *buf = (&buf_rec);
#line 100 "../.././gcc/tree-mudflap.c"

#line 100 "../.././gcc/tree-mudflap.c"
const char *buf_contents;
#line 101 "../.././gcc/tree-mudflap.c"

#line 101 "../.././gcc/tree-mudflap.c"
 tree result;
#line 103 "../.././gcc/tree-mudflap.c"
(((void )(((!(decl))?fancy_abort("../.././gcc/tree-mudflap.c", 105, __FUNCTION__) , 0:0)))); 
#line 105 "../.././gcc/tree-mudflap.c"
if ((!initialized)){
{ 
#line 107 "../.././gcc/tree-mudflap.c"
pp_construct(buf, (((void *)0)), 0); 
#line 108 "../.././gcc/tree-mudflap.c"
initialized = 1; } }
#line 110 "../.././gcc/tree-mudflap.c"
pp_base_clear_output_area((buf)); 
#line 113 "../.././gcc/tree-mudflap.c"
{ 
#line 114 "../.././gcc/tree-mudflap.c"

#line 114 "../.././gcc/tree-mudflap.c"
 expanded_location xloc = ((((decl)->decl_minimal).locus));
#line 115 "../.././gcc/tree-mudflap.c"

#line 115 "../.././gcc/tree-mudflap.c"
const char *sourcefile;
#line 116 "../.././gcc/tree-mudflap.c"

#line 116 "../.././gcc/tree-mudflap.c"
unsigned sourceline = xloc.line;
#line 117 "../.././gcc/tree-mudflap.c"

#line 117 "../.././gcc/tree-mudflap.c"
unsigned sourcecolumn = 0;
#line 121 "../.././gcc/tree-mudflap.c"
sourcefile = xloc.file; 
#line 122 "../.././gcc/tree-mudflap.c"
if (sourcefile == (((void *)0)) && current_function_decl != (( tree )(((void *)0)))){
sourcefile = ((((((current_function_decl)->decl_minimal).locus))).file); }
#line 124 "../.././gcc/tree-mudflap.c"
if (sourcefile == (((void *)0))){
sourcefile = "<unknown file>"; }
#line 127 "../.././gcc/tree-mudflap.c"
pp_base_string((buf), sourcefile); 
#line 129 "../.././gcc/tree-mudflap.c"
if (sourceline != 0){
{ 
#line 131 "../.././gcc/tree-mudflap.c"
pp_base_string((buf), ":"); 
#line 132 "../.././gcc/tree-mudflap.c"
do { { 
#line 132 "../.././gcc/tree-mudflap.c"
sprintf((((buf)->buffer)->digit_buffer), "%d", sourceline); 
#line 132 "../.././gcc/tree-mudflap.c"
pp_base_string((buf), (((buf)->buffer)->digit_buffer)); } } while(0); 
#line 134 "../.././gcc/tree-mudflap.c"
if (sourcecolumn != 0){
{ 
#line 136 "../.././gcc/tree-mudflap.c"
pp_base_string((buf), ":"); 
#line 137 "../.././gcc/tree-mudflap.c"
do { { 
#line 137 "../.././gcc/tree-mudflap.c"
sprintf((((buf)->buffer)->digit_buffer), "%d", sourcecolumn); 
#line 137 "../.././gcc/tree-mudflap.c"
pp_base_string((buf), (((buf)->buffer)->digit_buffer)); } } while(0); } }} }} 
#line 142 "../.././gcc/tree-mudflap.c"
if (current_function_decl != (( tree )(((void *)0)))){
{ 
#line 145 "../.././gcc/tree-mudflap.c"
pp_base_string((buf), " ("); 
#line 146 "../.././gcc/tree-mudflap.c"
{ 
#line 147 "../.././gcc/tree-mudflap.c"

#line 147 "../.././gcc/tree-mudflap.c"
const char *funcname = (((void *)0));
#line 148 "../.././gcc/tree-mudflap.c"
if ((((current_function_decl)->decl_minimal).name)){
funcname = lang_hooks.decl_printable_name(current_function_decl, 1); }
#line 150 "../.././gcc/tree-mudflap.c"
if (funcname == (((void *)0))){
funcname = "anonymous fn"; }
#line 153 "../.././gcc/tree-mudflap.c"
pp_base_string((buf), funcname); } 
#line 155 "../.././gcc/tree-mudflap.c"
pp_base_string((buf), ") "); } }else{
pp_base_string((buf), " "); }
#line 161 "../.././gcc/tree-mudflap.c"
{ 
#line 162 "../.././gcc/tree-mudflap.c"

#line 162 "../.././gcc/tree-mudflap.c"
const char *declname = (((void *)0));
#line 164 "../.././gcc/tree-mudflap.c"
if ((((decl)->decl_minimal).name) != (((void *)0))){
{ 
#line 173 "../.././gcc/tree-mudflap.c"
if (strcmp("GNU C++", lang_hooks.name) == 0){
{ 
#line 171 "../.././gcc/tree-mudflap.c"
declname = cplus_demangle((((const char *)(((((decl)->decl_minimal).name))->identifier).id.str)), (1 << 8) | (1 << 3)); } }
#line 173 "../.././gcc/tree-mudflap.c"
if (declname == (((void *)0))){
declname = lang_hooks.decl_printable_name(decl, 3); }} }
#line 176 "../.././gcc/tree-mudflap.c"
if (declname == (((void *)0))){
declname = "<unnamed variable>"; }
#line 179 "../.././gcc/tree-mudflap.c"
pp_base_string((buf), declname); } 
#line 183 "../.././gcc/tree-mudflap.c"
buf_contents = pp_base_formatted_text(buf); 
#line 184 "../.././gcc/tree-mudflap.c"
result = mf_build_string(buf_contents); 
#line 185 "../.././gcc/tree-mudflap.c"
pp_base_clear_output_area((buf)); 
#line 187 "../.././gcc/tree-mudflap.c"
return result; }
 
#line 194 "../.././gcc/tree-mudflap.c"
static  tree mf_file_function_line_tree( location_t location)  {

#line 195 "../.././gcc/tree-mudflap.c"

#line 195 "../.././gcc/tree-mudflap.c"
 expanded_location xloc = (location);
#line 196 "../.././gcc/tree-mudflap.c"

#line 196 "../.././gcc/tree-mudflap.c"
const char *file = (((void *)0)),*colon,*line,*op,*name,*cp;
#line 197 "../.././gcc/tree-mudflap.c"

#line 197 "../.././gcc/tree-mudflap.c"
char linecolbuf[30];
#line 198 "../.././gcc/tree-mudflap.c"

#line 198 "../.././gcc/tree-mudflap.c"
char *string;
#line 199 "../.././gcc/tree-mudflap.c"

#line 199 "../.././gcc/tree-mudflap.c"
 tree result;
#line 202 "../.././gcc/tree-mudflap.c"
file = xloc.file; 
#line 203 "../.././gcc/tree-mudflap.c"
if (file == (((void *)0)) && current_function_decl != (( tree )(((void *)0)))){
file = ((((((current_function_decl)->decl_minimal).locus))).file); }
#line 205 "../.././gcc/tree-mudflap.c"
if (file == (((void *)0))){
file = "<unknown file>"; }
#line 208 "../.././gcc/tree-mudflap.c"
if (xloc.line > 0){
{ 
#line 215 "../.././gcc/tree-mudflap.c"
sprintf(linecolbuf, "%d", xloc.line); 
#line 216 "../.././gcc/tree-mudflap.c"
colon = ":"; 
#line 217 "../.././gcc/tree-mudflap.c"
line = linecolbuf; } }else{
colon = line = ""; }
#line 223 "../.././gcc/tree-mudflap.c"
name = lang_hooks.decl_printable_name(current_function_decl, 1); 
#line 224 "../.././gcc/tree-mudflap.c"
if (name){
{ 
#line 226 "../.././gcc/tree-mudflap.c"
op = " ("; 
#line 227 "../.././gcc/tree-mudflap.c"
cp = ")"; } }else{
op = name = cp = ""; }
#line 232 "../.././gcc/tree-mudflap.c"
string = concat(file, colon, line, op, name, cp, (((void *)0))); 
#line 233 "../.././gcc/tree-mudflap.c"
result = mf_build_string(string); 
#line 234 "../.././gcc/tree-mudflap.c"
free(string); 
#line 236 "../.././gcc/tree-mudflap.c"
return result; }
 
# 48 "../.././gcc/tree-mudflap.c" 2
# 250 "../.././gcc/tree-mudflap.c" 
static  tree mf_uintptr_type; 
#line 253 "../.././gcc/tree-mudflap.c"
static  tree mf_cache_struct_type; 
#line 256 "../.././gcc/tree-mudflap.c"
static  tree mf_cache_structptr_type; 
#line 259 "../.././gcc/tree-mudflap.c"
static  tree mf_cache_array_decl; 
#line 262 "../.././gcc/tree-mudflap.c"
static  tree mf_cache_shift_decl; 
#line 265 "../.././gcc/tree-mudflap.c"
static  tree mf_cache_mask_decl; 
#line 270 "../.././gcc/tree-mudflap.c"
static  tree mf_cache_shift_decl_l; 
#line 273 "../.././gcc/tree-mudflap.c"
static  tree mf_cache_mask_decl_l; 
#line 276 "../.././gcc/tree-mudflap.c"
static  tree mf_check_fndecl; 
#line 279 "../.././gcc/tree-mudflap.c"
static  tree mf_register_fndecl; 
#line 282 "../.././gcc/tree-mudflap.c"
static  tree mf_unregister_fndecl; 
#line 285 "../.././gcc/tree-mudflap.c"
static  tree mf_init_fndecl; 
#line 288 "../.././gcc/tree-mudflap.c"
static  tree mf_set_options_fndecl; 
#line 294 "../.././gcc/tree-mudflap.c"
static __inline__  tree mf_make_builtin(enum tree_code category, const char *name,  tree type)  {

#line 295 "../.././gcc/tree-mudflap.c"

#line 295 "../.././gcc/tree-mudflap.c"
 tree decl = mf_mark(build_decl_stat(category, ((__builtin_constant_p(name)?get_identifier_with_length((name), strlen(name)):get_identifier(name))), type));
#line 296 "../.././gcc/tree-mudflap.c"
(((decl)->common).public_flag) = 1; 
#line 297 "../.././gcc/tree-mudflap.c"
(((decl)->decl_common).decl_flag_2) = 1; 
#line 298 "../.././gcc/tree-mudflap.c"
lang_hooks.decls.pushdecl(decl); 
#line 299 "../.././gcc/tree-mudflap.c"
return decl; }
 
#line 306 "../.././gcc/tree-mudflap.c"
static __inline__  tree mf_make_mf_cache_struct_type( tree field_type)  {

#line 310 "../.././gcc/tree-mudflap.c"

#line 310 "../.././gcc/tree-mudflap.c"
 tree fieldlo = build_decl_stat(FIELD_DECL, ((__builtin_constant_p("low")?get_identifier_with_length(("low"), strlen("low")):get_identifier("low"))), field_type);
#line 311 "../.././gcc/tree-mudflap.c"

#line 311 "../.././gcc/tree-mudflap.c"
 tree fieldhi = build_decl_stat(FIELD_DECL, ((__builtin_constant_p("high")?get_identifier_with_length(("high"), strlen("high")):get_identifier("high"))), field_type);
#line 313 "../.././gcc/tree-mudflap.c"

#line 313 "../.././gcc/tree-mudflap.c"
 tree struct_type = make_node_stat(RECORD_TYPE);
#line 314 "../.././gcc/tree-mudflap.c"
(((fieldlo)->decl_minimal).context) = struct_type; 
#line 315 "../.././gcc/tree-mudflap.c"
(((fieldhi)->decl_minimal).context) = struct_type; 
#line 316 "../.././gcc/tree-mudflap.c"
(((fieldlo)->common).chain) = fieldhi; 
#line 317 "../.././gcc/tree-mudflap.c"
(((struct_type)->type).values) = fieldlo; 
#line 318 "../.././gcc/tree-mudflap.c"
(((struct_type)->type).name) = ((__builtin_constant_p("__mf_cache")?get_identifier_with_length(("__mf_cache"), strlen("__mf_cache")):get_identifier("__mf_cache"))); 
#line 319 "../.././gcc/tree-mudflap.c"
layout_type(struct_type); 
#line 321 "../.././gcc/tree-mudflap.c"
return struct_type; }
 
#line 342 "../.././gcc/tree-mudflap.c"
void mudflap_init(void )  {

#line 343 "../.././gcc/tree-mudflap.c"

#line 343 "../.././gcc/tree-mudflap.c"
static unsigned char done = 0;
#line 344 "../.././gcc/tree-mudflap.c"

#line 344 "../.././gcc/tree-mudflap.c"
 tree mf_const_string_type;
#line 345 "../.././gcc/tree-mudflap.c"

#line 345 "../.././gcc/tree-mudflap.c"
 tree mf_cache_array_type;
#line 346 "../.././gcc/tree-mudflap.c"

#line 346 "../.././gcc/tree-mudflap.c"
 tree mf_check_register_fntype;
#line 347 "../.././gcc/tree-mudflap.c"

#line 347 "../.././gcc/tree-mudflap.c"
 tree mf_unregister_fntype;
#line 348 "../.././gcc/tree-mudflap.c"

#line 348 "../.././gcc/tree-mudflap.c"
 tree mf_init_fntype;
#line 349 "../.././gcc/tree-mudflap.c"

#line 349 "../.././gcc/tree-mudflap.c"
 tree mf_set_options_fntype;
#line 351 "../.././gcc/tree-mudflap.c"
if (done){
return ; }
#line 353 "../.././gcc/tree-mudflap.c"
done = 1; 
#line 355 "../.././gcc/tree-mudflap.c"
mf_uintptr_type = lang_hooks.types.type_for_mode(ptr_mode, 1); 
#line 357 "../.././gcc/tree-mudflap.c"
mf_const_string_type = build_pointer_type(build_qualified_type(integer_types[itk_char], 0x1)); 
#line 361 "../.././gcc/tree-mudflap.c"
mf_cache_struct_type = mf_make_mf_cache_struct_type(mf_uintptr_type); 
#line 362 "../.././gcc/tree-mudflap.c"
mf_cache_structptr_type = build_pointer_type(mf_cache_struct_type); 
#line 363 "../.././gcc/tree-mudflap.c"
mf_cache_array_type = build_array_type(mf_cache_struct_type, 0); 
#line 364 "../.././gcc/tree-mudflap.c"
mf_check_register_fntype = build_function_type(global_trees[TI_VOID_TYPE], tree_cons_stat(0, global_trees[TI_PTR_TYPE], tree_cons_stat(0, global_trees[TI_SIZE_TYPE], tree_cons_stat(0, integer_types[itk_int], tree_cons_stat(0, mf_const_string_type, global_trees[TI_VOID_LIST_NODE]))))); 
#line 367 "../.././gcc/tree-mudflap.c"
mf_unregister_fntype = build_function_type(global_trees[TI_VOID_TYPE], tree_cons_stat(0, global_trees[TI_PTR_TYPE], tree_cons_stat(0, global_trees[TI_SIZE_TYPE], tree_cons_stat(0, integer_types[itk_int], global_trees[TI_VOID_LIST_NODE])))); 
#line 370 "../.././gcc/tree-mudflap.c"
mf_init_fntype = build_function_type(global_trees[TI_VOID_TYPE], global_trees[TI_VOID_LIST_NODE]); 
#line 372 "../.././gcc/tree-mudflap.c"
mf_set_options_fntype = build_function_type(integer_types[itk_int], tree_cons_stat(0, mf_const_string_type, global_trees[TI_VOID_LIST_NODE])); 
#line 375 "../.././gcc/tree-mudflap.c"
mf_cache_array_decl = mf_make_builtin(VAR_DECL, "__mf_lookup_cache", mf_cache_array_type); 
#line 377 "../.././gcc/tree-mudflap.c"
mf_cache_shift_decl = mf_make_builtin(VAR_DECL, "__mf_lc_shift", integer_types[itk_unsigned_char]); 
#line 379 "../.././gcc/tree-mudflap.c"
mf_cache_mask_decl = mf_make_builtin(VAR_DECL, "__mf_lc_mask", mf_uintptr_type); 
#line 383 "../.././gcc/tree-mudflap.c"
mf_mark(mf_cache_array_decl); 
#line 384 "../.././gcc/tree-mudflap.c"
mf_mark(mf_cache_shift_decl); 
#line 385 "../.././gcc/tree-mudflap.c"
mf_mark(mf_cache_mask_decl); 
#line 386 "../.././gcc/tree-mudflap.c"
mf_check_fndecl = mf_make_builtin(FUNCTION_DECL, "__mf_check", mf_check_register_fntype); 
#line 388 "../.././gcc/tree-mudflap.c"
mf_register_fndecl = mf_make_builtin(FUNCTION_DECL, "__mf_register", mf_check_register_fntype); 
#line 390 "../.././gcc/tree-mudflap.c"
mf_unregister_fndecl = mf_make_builtin(FUNCTION_DECL, "__mf_unregister", mf_unregister_fntype); 
#line 392 "../.././gcc/tree-mudflap.c"
mf_init_fndecl = mf_make_builtin(FUNCTION_DECL, "__mf_init", mf_init_fntype); 
#line 394 "../.././gcc/tree-mudflap.c"
mf_set_options_fndecl = mf_make_builtin(FUNCTION_DECL, "__mf_set_options", mf_set_options_fntype); }
 
# 340 "../.././gcc/tree-mudflap.c" 
# 414 "../.././gcc/tree-mudflap.c" 
static void execute_mudflap_function_ops(void )  {

#line 421 "../.././gcc/tree-mudflap.c"
if (mf_marked_p(current_function_decl) || (((current_function_decl)->decl_common).artificial_flag)){
return ; }
#line 421 "../.././gcc/tree-mudflap.c"
push_gimplify_context(); 
#line 424 "../.././gcc/tree-mudflap.c"
if ((!flag_mudflap_threads)){
mf_decl_cache_locals(); }
#line 427 "../.././gcc/tree-mudflap.c"
mf_xform_derefs(); 
#line 429 "../.././gcc/tree-mudflap.c"
if ((!flag_mudflap_threads)){
mf_decl_clear_locals(); }
#line 432 "../.././gcc/tree-mudflap.c"
pop_gimplify_context((((void *)0))); }
 
#line 441 "../.././gcc/tree-mudflap.c"
static void mf_decl_cache_locals(void )  {

#line 442 "../.././gcc/tree-mudflap.c"

#line 442 "../.././gcc/tree-mudflap.c"
 tree t,shift_init_stmts,mask_init_stmts;
#line 443 "../.././gcc/tree-mudflap.c"

#line 443 "../.././gcc/tree-mudflap.c"
 tree_stmt_iterator tsi;
#line 446 "../.././gcc/tree-mudflap.c"
mf_cache_shift_decl_l = mf_mark(create_tmp_var((((mf_cache_shift_decl)->common).type), "__mf_lookup_shift_l")); 
#line 450 "../.././gcc/tree-mudflap.c"
mf_cache_mask_decl_l = mf_mark(create_tmp_var((((mf_cache_mask_decl)->common).type), "__mf_lookup_mask_l")); 
#line 456 "../.././gcc/tree-mudflap.c"
t = build2_stat(MODIFY_EXPR, (((mf_cache_shift_decl_l)->common).type), mf_cache_shift_decl_l, mf_cache_shift_decl); 
#line 458 "../.././gcc/tree-mudflap.c"
annotate_with_locus(t, (((current_function_decl)->decl_minimal).locus)); 
#line 459 "../.././gcc/tree-mudflap.c"
gimplify_to_stmt_list((&t)); 
#line 460 "../.././gcc/tree-mudflap.c"
shift_init_stmts = t; 
#line 462 "../.././gcc/tree-mudflap.c"
t = build2_stat(MODIFY_EXPR, (((mf_cache_mask_decl_l)->common).type), mf_cache_mask_decl_l, mf_cache_mask_decl); 
#line 464 "../.././gcc/tree-mudflap.c"
annotate_with_locus(t, (((current_function_decl)->decl_minimal).locus)); 
#line 465 "../.././gcc/tree-mudflap.c"
gimplify_to_stmt_list((&t)); 
#line 466 "../.././gcc/tree-mudflap.c"
mask_init_stmts = t; 
#line 470 "../.././gcc/tree-mudflap.c"
for(tsi = tsi_start(shift_init_stmts);(!tsi_end_p(tsi));tsi_next((&tsi))) { insert_edge_copies(tsi_stmt(tsi), (((cfun->cfg)->x_entry_block_ptr))); } 
#line 475 "../.././gcc/tree-mudflap.c"
for(tsi = tsi_start(mask_init_stmts);(!tsi_end_p(tsi));tsi_next((&tsi))) { insert_edge_copies(tsi_stmt(tsi), (((cfun->cfg)->x_entry_block_ptr))); } 
#line 479 "../.././gcc/tree-mudflap.c"
bsi_commit_edge_inserts(); }
 
#line 485 "../.././gcc/tree-mudflap.c"
static void mf_decl_clear_locals(void )  {

#line 487 "../.././gcc/tree-mudflap.c"
mf_cache_shift_decl_l = (( tree )(((void *)0))); 
#line 488 "../.././gcc/tree-mudflap.c"
mf_cache_mask_decl_l = (( tree )(((void *)0))); }
 
#line 495 "../.././gcc/tree-mudflap.c"
static void mf_build_check_statement_for( tree base,  tree limit,  block_stmt_iterator *instr_bsi,  location_t *locus,  tree dirflag)  {

#line 496 "../.././gcc/tree-mudflap.c"

#line 496 "../.././gcc/tree-mudflap.c"
 tree_stmt_iterator head,tsi;
#line 497 "../.././gcc/tree-mudflap.c"

#line 497 "../.././gcc/tree-mudflap.c"
 block_stmt_iterator bsi;
#line 498 "../.././gcc/tree-mudflap.c"

#line 498 "../.././gcc/tree-mudflap.c"
 basic_block cond_bb,then_bb,join_bb;
#line 499 "../.././gcc/tree-mudflap.c"

#line 499 "../.././gcc/tree-mudflap.c"
 edge e;
#line 500 "../.././gcc/tree-mudflap.c"

#line 500 "../.././gcc/tree-mudflap.c"
 tree cond,t,u,v;
#line 501 "../.././gcc/tree-mudflap.c"

#line 501 "../.././gcc/tree-mudflap.c"
 tree mf_base;
#line 502 "../.././gcc/tree-mudflap.c"

#line 502 "../.././gcc/tree-mudflap.c"
 tree mf_elem;
#line 503 "../.././gcc/tree-mudflap.c"

#line 503 "../.././gcc/tree-mudflap.c"
 tree mf_limit;
#line 509 "../.././gcc/tree-mudflap.c"
cond_bb = bb_for_stmt(bsi_stmt((*instr_bsi))); 
#line 510 "../.././gcc/tree-mudflap.c"
bsi = (*instr_bsi); 
#line 511 "../.././gcc/tree-mudflap.c"
bsi_prev((&bsi)); 
#line 512 "../.././gcc/tree-mudflap.c"
if ((!bsi_end_p(bsi))){
e = split_block(cond_bb, bsi_stmt(bsi)); }else{
e = split_block_after_labels(cond_bb); }
#line 516 "../.././gcc/tree-mudflap.c"
cond_bb = (e->src); 
#line 517 "../.././gcc/tree-mudflap.c"
join_bb = (e->dest); 
#line 527 "../.././gcc/tree-mudflap.c"
then_bb = create_empty_bb(cond_bb); 
#line 528 "../.././gcc/tree-mudflap.c"
make_edge(cond_bb, then_bb, 1024); 
#line 529 "../.././gcc/tree-mudflap.c"
make_single_succ_edge(then_bb, join_bb, 1); 
#line 532 "../.././gcc/tree-mudflap.c"
e = find_edge(cond_bb, join_bb); 
#line 533 "../.././gcc/tree-mudflap.c"
(e->flags) = 2048; 
#line 534 "../.././gcc/tree-mudflap.c"
(e->count) = (cond_bb->count); 
#line 535 "../.././gcc/tree-mudflap.c"
(e->probability) = 10000; 
#line 539 "../.././gcc/tree-mudflap.c"
if (dom_info_available_p(CDI_DOMINATORS)){
{ 
#line 541 "../.././gcc/tree-mudflap.c"
set_immediate_dominator(CDI_DOMINATORS, then_bb, cond_bb); 
#line 542 "../.././gcc/tree-mudflap.c"
set_immediate_dominator(CDI_DOMINATORS, join_bb, cond_bb); } }
#line 546 "../.././gcc/tree-mudflap.c"
mf_elem = create_tmp_var(mf_cache_structptr_type, "__mf_elem"); 
#line 547 "../.././gcc/tree-mudflap.c"
mf_base = create_tmp_var(mf_uintptr_type, "__mf_base"); 
#line 548 "../.././gcc/tree-mudflap.c"
mf_limit = create_tmp_var(mf_uintptr_type, "__mf_limit"); 
#line 551 "../.././gcc/tree-mudflap.c"
t = build2_stat(MODIFY_EXPR, global_trees[TI_VOID_TYPE], mf_base, convert(mf_uintptr_type, unshare_expr(base))); 
#line 553 "../.././gcc/tree-mudflap.c"
(((t)->exp).locus = (locus)); 
#line 554 "../.././gcc/tree-mudflap.c"
gimplify_to_stmt_list((&t)); 
#line 555 "../.././gcc/tree-mudflap.c"
head = tsi_start(t); 
#line 556 "../.././gcc/tree-mudflap.c"
tsi = tsi_last(t); 
#line 559 "../.././gcc/tree-mudflap.c"
t = build2_stat(MODIFY_EXPR, global_trees[TI_VOID_TYPE], mf_limit, convert(mf_uintptr_type, unshare_expr(limit))); 
#line 561 "../.././gcc/tree-mudflap.c"
(((t)->exp).locus = (locus)); 
#line 562 "../.././gcc/tree-mudflap.c"
gimplify_to_stmt_list((&t)); 
#line 563 "../.././gcc/tree-mudflap.c"
tsi_link_after((&tsi), t, TSI_CONTINUE_LINKING); 
#line 567 "../.././gcc/tree-mudflap.c"
t = build2_stat(RSHIFT_EXPR, mf_uintptr_type, mf_base, ((flag_mudflap_threads?mf_cache_shift_decl:mf_cache_shift_decl_l))); 
#line 569 "../.././gcc/tree-mudflap.c"
t = build2_stat(BIT_AND_EXPR, mf_uintptr_type, t, ((flag_mudflap_threads?mf_cache_mask_decl:mf_cache_mask_decl_l))); 
#line 571 "../.././gcc/tree-mudflap.c"
t = build4_stat(ARRAY_REF, ((((((mf_cache_array_decl)->common).type))->common).type), mf_cache_array_decl, t, (( tree )(((void *)0))), (( tree )(((void *)0)))); 
#line 574 "../.././gcc/tree-mudflap.c"
t = build1_stat(ADDR_EXPR, mf_cache_structptr_type, t); 
#line 575 "../.././gcc/tree-mudflap.c"
t = build2_stat(MODIFY_EXPR, global_trees[TI_VOID_TYPE], mf_elem, t); 
#line 576 "../.././gcc/tree-mudflap.c"
(((t)->exp).locus = (locus)); 
#line 577 "../.././gcc/tree-mudflap.c"
gimplify_to_stmt_list((&t)); 
#line 578 "../.././gcc/tree-mudflap.c"
tsi_link_after((&tsi), t, TSI_CONTINUE_LINKING); 
# 527 "../.././gcc/tree-mudflap.c" 
# 595 "../.././gcc/tree-mudflap.c" 
t = build3_stat(COMPONENT_REF, mf_uintptr_type, build1_stat(INDIRECT_REF, mf_cache_struct_type, mf_elem), (((mf_cache_struct_type)->type).values), (( tree )(((void *)0)))); 
#line 598 "../.././gcc/tree-mudflap.c"
t = build2_stat(GT_EXPR, global_trees[TI_BOOLEAN_TYPE], t, mf_base); 
#line 608 "../.././gcc/tree-mudflap.c"
u = build3_stat(COMPONENT_REF, mf_uintptr_type, build1_stat(INDIRECT_REF, mf_cache_struct_type, mf_elem), ((((((mf_cache_struct_type)->type).values))->common).chain), (( tree )(((void *)0)))); 
#line 612 "../.././gcc/tree-mudflap.c"
v = mf_limit; 
#line 614 "../.././gcc/tree-mudflap.c"
u = build2_stat(LT_EXPR, global_trees[TI_BOOLEAN_TYPE], u, v); 
#line 619 "../.././gcc/tree-mudflap.c"
t = build2_stat(TRUTH_OR_EXPR, global_trees[TI_BOOLEAN_TYPE], t, u); 
#line 620 "../.././gcc/tree-mudflap.c"
cond = create_tmp_var(global_trees[TI_BOOLEAN_TYPE], "__mf_unlikely_cond"); 
#line 621 "../.././gcc/tree-mudflap.c"
t = build2_stat(MODIFY_EXPR, global_trees[TI_BOOLEAN_TYPE], cond, t); 
#line 622 "../.././gcc/tree-mudflap.c"
gimplify_to_stmt_list((&t)); 
#line 623 "../.././gcc/tree-mudflap.c"
tsi_link_after((&tsi), t, TSI_CONTINUE_LINKING); 
#line 627 "../.././gcc/tree-mudflap.c"
t = build3_stat(COND_EXPR, global_trees[TI_VOID_TYPE], cond, build1_stat(GOTO_EXPR, global_trees[TI_VOID_TYPE], tree_block_label(then_bb)), build1_stat(GOTO_EXPR, global_trees[TI_VOID_TYPE], tree_block_label(join_bb))); 
#line 630 "../.././gcc/tree-mudflap.c"
(((t)->exp).locus = (locus)); 
#line 631 "../.././gcc/tree-mudflap.c"
tsi_link_after((&tsi), t, TSI_CONTINUE_LINKING); 
# 608 "../.././gcc/tree-mudflap.c" 
# 644 "../.././gcc/tree-mudflap.c" 
bsi = bsi_last(cond_bb); 
#line 645 "../.././gcc/tree-mudflap.c"
for(tsi = head;(!tsi_end_p(tsi));tsi_next((&tsi))) { bsi_insert_after((&bsi), tsi_stmt(tsi), BSI_CONTINUE_LINKING); } 
#line 655 "../.././gcc/tree-mudflap.c"
u = tree_cons_stat((( tree )(((void *)0))), mf_file_function_line_tree((locus == (((void *)0))?unknown_location:(*locus))), (( tree )(((void *)0)))); 
#line 659 "../.././gcc/tree-mudflap.c"
u = tree_cons_stat((( tree )(((void *)0))), dirflag, u); 
#line 661 "../.././gcc/tree-mudflap.c"
u = tree_cons_stat((( tree )(((void *)0))), fold_build2_stat(PLUS_EXPR, integer_types[itk_int], fold_build2_stat(MINUS_EXPR, mf_uintptr_type, mf_limit, mf_base), global_trees[TI_INTEGER_ONE]), u); 
#line 666 "../.././gcc/tree-mudflap.c"
u = tree_cons_stat((( tree )(((void *)0))), mf_base, u); 
#line 667 "../.././gcc/tree-mudflap.c"
t = build_function_call_expr(mf_check_fndecl, u); 
#line 668 "../.././gcc/tree-mudflap.c"
gimplify_to_stmt_list((&t)); 
#line 669 "../.././gcc/tree-mudflap.c"
head = tsi_start(t); 
#line 670 "../.././gcc/tree-mudflap.c"
tsi = tsi_last(t); 
#line 672 "../.././gcc/tree-mudflap.c"
if ((!flag_mudflap_threads)){
{ 
#line 674 "../.././gcc/tree-mudflap.c"
t = build2_stat(MODIFY_EXPR, global_trees[TI_VOID_TYPE], mf_cache_shift_decl_l, mf_cache_shift_decl); 
#line 676 "../.././gcc/tree-mudflap.c"
tsi_link_after((&tsi), t, TSI_CONTINUE_LINKING); 
#line 678 "../.././gcc/tree-mudflap.c"
t = build2_stat(MODIFY_EXPR, global_trees[TI_VOID_TYPE], mf_cache_mask_decl_l, mf_cache_mask_decl); 
#line 680 "../.././gcc/tree-mudflap.c"
tsi_link_after((&tsi), t, TSI_CONTINUE_LINKING); } }
#line 684 "../.././gcc/tree-mudflap.c"
bsi = bsi_start(then_bb); 
#line 685 "../.././gcc/tree-mudflap.c"
for(tsi = head;(!tsi_end_p(tsi));tsi_next((&tsi))) { bsi_insert_after((&bsi), tsi_stmt(tsi), BSI_CONTINUE_LINKING); } 
#line 688 "../.././gcc/tree-mudflap.c"
(*instr_bsi) = bsi_start(join_bb); 
#line 689 "../.././gcc/tree-mudflap.c"
bsi_next(instr_bsi); }
 
# 655 "../.././gcc/tree-mudflap.c" 
# 701 "../.././gcc/tree-mudflap.c" 
static int mf_decl_eligible_p( tree decl)  {

#line 710 "../.././gcc/tree-mudflap.c"
return (((((enum tree_code )((decl)->common).code)) == VAR_DECL || (((enum tree_code )((decl)->common).code)) == PARM_DECL) && (((decl)->common).addressable_flag) && ((((((((decl)->common).type))->type).size) != (( tree )(((void *)0)))) || ((((enum tree_code )(((((decl)->common).type))->common).code)) == VOID_TYPE)) && (!(((decl)->decl_common).decl_flag_3))); }
 
#line 717 "../.././gcc/tree-mudflap.c"
static void mf_xform_derefs_1( block_stmt_iterator *iter,  tree *tp,  location_t *locus,  tree dirflag)  {

#line 718 "../.././gcc/tree-mudflap.c"

#line 718 "../.././gcc/tree-mudflap.c"
 tree type,base,limit,addr,size,t;
#line 721 "../.././gcc/tree-mudflap.c"
if (dirflag == global_trees[TI_INTEGER_ZERO] && flag_mudflap_ignore_reads){
return ; }
#line 725 "../.././gcc/tree-mudflap.c"
if (mf_marked_p((*tp))){
return ; }
#line 728 "../.././gcc/tree-mudflap.c"
t = (*tp); 
#line 729 "../.././gcc/tree-mudflap.c"
type = (((t)->common).type); 
#line 730 "../.././gcc/tree-mudflap.c"
size = (((type)->type).size_unit); 
#line 732 "../.././gcc/tree-mudflap.c"
switch((((enum tree_code )((t)->common).code))){ { 
#line 827 "../.././gcc/tree-mudflap.c"
case ARRAY_REF: case COMPONENT_REF: { 
#line 746 "../.././gcc/tree-mudflap.c"

#line 746 "../.././gcc/tree-mudflap.c"
 tree var;
#line 747 "../.././gcc/tree-mudflap.c"

#line 747 "../.././gcc/tree-mudflap.c"
int component_ref_only = ((((enum tree_code )((t)->common).code)) == COMPONENT_REF);
#line 751 "../.././gcc/tree-mudflap.c"

#line 751 "../.././gcc/tree-mudflap.c"
 tree elt = (( tree )(((void *)0)));
#line 752 "../.././gcc/tree-mudflap.c"

#line 753 "../.././gcc/tree-mudflap.c"
int bitfield_ref_p = ((((enum tree_code )((t)->common).code)) == COMPONENT_REF && ((((((t)->exp).operands[1]))->field_decl).bit_field_type));
#line 757 "../.././gcc/tree-mudflap.c"
var = (((t)->exp).operands[0]); 
#line 758 "../.././gcc/tree-mudflap.c"
while(1) { { 
#line 764 "../.././gcc/tree-mudflap.c"
if (bitfield_ref_p && elt == (( tree )(((void *)0))) && ((((enum tree_code )((var)->common).code)) == ARRAY_REF || (((enum tree_code )((var)->common).code)) == COMPONENT_REF)){
elt = var; }
#line 764 "../.././gcc/tree-mudflap.c"
if ((((enum tree_code )((var)->common).code)) == ARRAY_REF){
{ 
#line 766 "../.././gcc/tree-mudflap.c"
component_ref_only = 0; 
#line 767 "../.././gcc/tree-mudflap.c"
var = (((var)->exp).operands[0]); } }else{
if ((((enum tree_code )((var)->common).code)) == COMPONENT_REF){
var = (((var)->exp).operands[0]); }else{
if (((((enum tree_code )((var)->common).code)) == INDIRECT_REF || (((enum tree_code )((var)->common).code)) == ALIGN_INDIRECT_REF || (((enum tree_code )((var)->common).code)) == MISALIGNED_INDIRECT_REF)){
{ 
#line 773 "../.././gcc/tree-mudflap.c"
base = (((var)->exp).operands[0]); 
#line 774 "../.././gcc/tree-mudflap.c"
break; } }else{
{ 
#line 778 "../.././gcc/tree-mudflap.c"
(((void )(((!((((enum tree_code )((var)->common).code)) == VAR_DECL || (((enum tree_code )((var)->common).code)) == PARM_DECL || (((enum tree_code )((var)->common).code)) == RESULT_DECL || (((enum tree_code )((var)->common).code)) == STRING_CST))?fancy_abort("../.././gcc/tree-mudflap.c", 781, __FUNCTION__) , 0:0)))); 
#line 786 "../.././gcc/tree-mudflap.c"
if ((!mf_decl_eligible_p(var)) || component_ref_only){
return ; }else{
{ 
#line 790 "../.././gcc/tree-mudflap.c"
base = build1_stat(ADDR_EXPR, build_pointer_type((((var)->common).type)), var); 
#line 791 "../.././gcc/tree-mudflap.c"
break; } }} }}}} } 
# 746 "../.././gcc/tree-mudflap.c" 
# 805 "../.././gcc/tree-mudflap.c" 
if (bitfield_ref_p){
{ 
#line 807 "../.././gcc/tree-mudflap.c"

#line 807 "../.././gcc/tree-mudflap.c"
 tree field = (((t)->exp).operands[1]);
#line 809 "../.././gcc/tree-mudflap.c"
if ((((enum tree_code )(((((field)->decl_common).size_unit))->common).code)) == INTEGER_CST){
size = (((field)->decl_common).size_unit); }
#line 812 "../.././gcc/tree-mudflap.c"
if (elt){
elt = build1_stat(ADDR_EXPR, build_pointer_type(((elt)->common).type), elt); }
#line 814 "../.././gcc/tree-mudflap.c"
addr = fold_convert(global_trees[TI_PTR_TYPE], (elt?elt:base)); 
#line 815 "../.././gcc/tree-mudflap.c"
addr = fold_build2_stat(PLUS_EXPR, global_trees[TI_PTR_TYPE], addr, fold_convert(global_trees[TI_PTR_TYPE], byte_position(field))); } }else{
addr = build1_stat(ADDR_EXPR, build_pointer_type(type), t); }
#line 822 "../.././gcc/tree-mudflap.c"
limit = fold_build2_stat(MINUS_EXPR, mf_uintptr_type, fold_build2_stat(PLUS_EXPR, mf_uintptr_type, convert(mf_uintptr_type, addr), size), global_trees[TI_INTEGER_ONE]); } 
#line 828 "../.././gcc/tree-mudflap.c"
break; 
#line 830 "../.././gcc/tree-mudflap.c"
case INDIRECT_REF: addr = (((t)->exp).operands[0]); 
#line 832 "../.././gcc/tree-mudflap.c"
base = addr; 
#line 833 "../.././gcc/tree-mudflap.c"
limit = fold_build2_stat(MINUS_EXPR, global_trees[TI_PTR_TYPE], fold_build2_stat(PLUS_EXPR, global_trees[TI_PTR_TYPE], base, size), global_trees[TI_INTEGER_ONE]); 
#line 836 "../.././gcc/tree-mudflap.c"
break; 
#line 838 "../.././gcc/tree-mudflap.c"
case TARGET_MEM_REF: addr = tree_mem_ref_addr(global_trees[TI_PTR_TYPE], t); 
#line 840 "../.././gcc/tree-mudflap.c"
base = addr; 
#line 841 "../.././gcc/tree-mudflap.c"
limit = fold_build2_stat(MINUS_EXPR, global_trees[TI_PTR_TYPE], fold_build2_stat(PLUS_EXPR, global_trees[TI_PTR_TYPE], base, size), build_int_cst_type(global_trees[TI_PTR_TYPE], 1)); 
#line 844 "../.././gcc/tree-mudflap.c"
break; 
#line 846 "../.././gcc/tree-mudflap.c"
case ARRAY_RANGE_REF: warning(0, "mudflap checking not yet implemented for ARRAY_RANGE_REF"); 
#line 848 "../.././gcc/tree-mudflap.c"
return ; 
#line 850 "../.././gcc/tree-mudflap.c"
case BIT_FIELD_REF: { 
#line 853 "../.././gcc/tree-mudflap.c"

#line 853 "../.././gcc/tree-mudflap.c"
 tree ofs,rem,bpu;
#line 857 "../.././gcc/tree-mudflap.c"
if ((((enum tree_code )(((((t)->exp).operands[0]))->common).code)) != INDIRECT_REF){
return ; }
#line 860 "../.././gcc/tree-mudflap.c"
bpu = size_int_kind(8, BITSIZETYPE); 
#line 861 "../.././gcc/tree-mudflap.c"
ofs = convert(sizetype_tab[((int )BITSIZETYPE)], (((t)->exp).operands[2])); 
#line 862 "../.././gcc/tree-mudflap.c"
rem = size_binop(TRUNC_MOD_EXPR, ofs, bpu); 
#line 863 "../.././gcc/tree-mudflap.c"
ofs = size_binop(TRUNC_DIV_EXPR, ofs, bpu); 
#line 865 "../.././gcc/tree-mudflap.c"
size = convert(sizetype_tab[((int )BITSIZETYPE)], (((t)->exp).operands[1])); 
#line 866 "../.././gcc/tree-mudflap.c"
size = size_binop(PLUS_EXPR, size, rem); 
#line 867 "../.././gcc/tree-mudflap.c"
size = size_binop(CEIL_DIV_EXPR, size, bpu); 
#line 868 "../.././gcc/tree-mudflap.c"
size = convert(sizetype_tab[((int )SIZETYPE)], size); 
#line 870 "../.././gcc/tree-mudflap.c"
addr = ((((((t)->exp).operands[0]))->exp).operands[0]); 
#line 871 "../.././gcc/tree-mudflap.c"
addr = convert(global_trees[TI_PTR_TYPE], addr); 
#line 872 "../.././gcc/tree-mudflap.c"
addr = fold_build2_stat(PLUS_EXPR, global_trees[TI_PTR_TYPE], addr, ofs); 
#line 874 "../.././gcc/tree-mudflap.c"
base = addr; 
#line 875 "../.././gcc/tree-mudflap.c"
limit = fold_build2_stat(MINUS_EXPR, global_trees[TI_PTR_TYPE], fold_build2_stat(PLUS_EXPR, global_trees[TI_PTR_TYPE], base, size), global_trees[TI_INTEGER_ONE]); } 
#line 879 "../.././gcc/tree-mudflap.c"
break; 
#line 881 "../.././gcc/tree-mudflap.c"
default: return ; } } 
#line 885 "../.././gcc/tree-mudflap.c"
mf_build_check_statement_for(base, limit, iter, locus, dirflag); }
 
#line 890 "../.././gcc/tree-mudflap.c"
static void mf_xform_derefs(void )  {

#line 891 "../.././gcc/tree-mudflap.c"

#line 891 "../.././gcc/tree-mudflap.c"
 basic_block bb,next;
#line 892 "../.././gcc/tree-mudflap.c"

#line 892 "../.././gcc/tree-mudflap.c"
 block_stmt_iterator i;
#line 893 "../.././gcc/tree-mudflap.c"

#line 893 "../.././gcc/tree-mudflap.c"
int saved_last_basic_block = (((cfun->cfg)->x_last_basic_block));
#line 895 "../.././gcc/tree-mudflap.c"
bb = ((((cfun->cfg)->x_entry_block_ptr))->next_bb); 
#line 896 "../.././gcc/tree-mudflap.c"
do { { 
#line 898 "../.././gcc/tree-mudflap.c"
next = (bb->next_bb); 
#line 899 "../.././gcc/tree-mudflap.c"
for(i = bsi_start(bb);(!bsi_end_p(i));bsi_next((&i))) { { 
#line 901 "../.././gcc/tree-mudflap.c"

#line 901 "../.././gcc/tree-mudflap.c"
 tree s = bsi_stmt(i);
#line 904 "../.././gcc/tree-mudflap.c"
switch((((enum tree_code )((s)->common).code))){ { 
#line 908 "../.././gcc/tree-mudflap.c"
case MODIFY_EXPR: mf_xform_derefs_1((&i), (&(((s)->exp).operands[0])), ((((tree_code_type[((int )((((enum tree_code )((s)->common).code))))]) >= tcc_reference && (tree_code_type[((int )((((enum tree_code )((s)->common).code))))]) <= tcc_expression)?((s)->exp).locus:(( location_t *)(((void *)0))))), global_trees[TI_INTEGER_ONE]); 
#line 909 "../.././gcc/tree-mudflap.c"
mf_xform_derefs_1((&i), (&(((s)->exp).operands[1])), ((((tree_code_type[((int )((((enum tree_code )((s)->common).code))))]) >= tcc_reference && (tree_code_type[((int )((((enum tree_code )((s)->common).code))))]) <= tcc_expression)?((s)->exp).locus:(( location_t *)(((void *)0))))), global_trees[TI_INTEGER_ZERO]); 
#line 911 "../.././gcc/tree-mudflap.c"
break; 
#line 913 "../.././gcc/tree-mudflap.c"
case RETURN_EXPR: if ((((s)->exp).operands[0]) != (( tree )(((void *)0)))){
{ 
#line 921 "../.././gcc/tree-mudflap.c"
if ((((enum tree_code )(((((s)->exp).operands[0]))->common).code)) == MODIFY_EXPR){
mf_xform_derefs_1((&i), (&((((((s)->exp).operands[0]))->exp).operands[1])), ((((tree_code_type[((int )((((enum tree_code )((s)->common).code))))]) >= tcc_reference && (tree_code_type[((int )((((enum tree_code )((s)->common).code))))]) <= tcc_expression)?((s)->exp).locus:(( location_t *)(((void *)0))))), global_trees[TI_INTEGER_ZERO]); }else{
mf_xform_derefs_1((&i), (&(((s)->exp).operands[0])), ((((tree_code_type[((int )((((enum tree_code )((s)->common).code))))]) >= tcc_reference && (tree_code_type[((int )((((enum tree_code )((s)->common).code))))]) <= tcc_expression)?((s)->exp).locus:(( location_t *)(((void *)0))))), global_trees[TI_INTEGER_ZERO]); }} }
#line 923 "../.././gcc/tree-mudflap.c"
break; 
#line 925 "../.././gcc/tree-mudflap.c"
default: ; } } } } 
#line 929 "../.././gcc/tree-mudflap.c"
bb = next; } } while(bb && (bb->index) <= saved_last_basic_block); }
 
#line 945 "../.././gcc/tree-mudflap.c"
static void execute_mudflap_function_decls(void )  {

#line 952 "../.././gcc/tree-mudflap.c"
if (mf_marked_p(current_function_decl) || (((current_function_decl)->decl_common).artificial_flag)){
return ; }
#line 952 "../.././gcc/tree-mudflap.c"
push_gimplify_context(); 
#line 954 "../.././gcc/tree-mudflap.c"
mf_xform_decls((((current_function_decl)->decl_non_common).saved_tree), (((current_function_decl)->decl_non_common).arguments)); 
#line 957 "../.././gcc/tree-mudflap.c"
pop_gimplify_context((((void *)0))); }
 
#line 966 "../.././gcc/tree-mudflap.c"
struct mf_xform_decls_data { tree param_decls; }; 
#line 974 "../.././gcc/tree-mudflap.c"
static void mx_register_decls( tree decl,  tree *stmt_list)  {

#line 975 "../.././gcc/tree-mudflap.c"

#line 975 "../.././gcc/tree-mudflap.c"
 tree finally_stmts = (( tree )(((void *)0)));
#line 976 "../.././gcc/tree-mudflap.c"

#line 976 "../.././gcc/tree-mudflap.c"
 tree_stmt_iterator initially_stmts = tsi_start((*stmt_list));
#line 978 "../.././gcc/tree-mudflap.c"
while(decl != (( tree )(((void *)0)))) { { 
#line 1050 "../.././gcc/tree-mudflap.c"
if (mf_decl_eligible_p(decl) && (!mf_marked_p(decl)) && (!(((decl)->decl_common).decl_flag_2)) && (!(((decl)->common).static_flag))){
{ 
#line 987 "../.././gcc/tree-mudflap.c"

#line 987 "../.././gcc/tree-mudflap.c"
 tree size = (( tree )(((void *)0))),variable_name;
#line 988 "../.././gcc/tree-mudflap.c"

#line 988 "../.././gcc/tree-mudflap.c"
 tree unregister_fncall,unregister_fncall_params;
#line 989 "../.././gcc/tree-mudflap.c"

#line 989 "../.././gcc/tree-mudflap.c"
 tree register_fncall,register_fncall_params;
#line 991 "../.././gcc/tree-mudflap.c"
size = convert(global_trees[TI_SIZE_TYPE], ((((((decl)->common).type))->type).size_unit)); 
#line 994 "../.././gcc/tree-mudflap.c"
unregister_fncall_params = tree_cons_stat((( tree )(((void *)0))), convert(global_trees[TI_PTR_TYPE], mf_mark(build1_stat(ADDR_EXPR, build_pointer_type((((decl)->common).type)), decl))), tree_cons_stat((( tree )(((void *)0))), size, tree_cons_stat((( tree )(((void *)0))), build_int_cst((( tree )(((void *)0))), 3), (( tree )(((void *)0)))))); 
# 943 "../.././gcc/tree-mudflap.c" 
# 1007 "../.././gcc/tree-mudflap.c" 
unregister_fncall = build_function_call_expr(mf_unregister_fndecl, unregister_fncall_params); 
#line 1011 "../.././gcc/tree-mudflap.c"
variable_name = mf_varname_tree(decl); 
#line 1012 "../.././gcc/tree-mudflap.c"
register_fncall_params = tree_cons_stat((( tree )(((void *)0))), convert(global_trees[TI_PTR_TYPE], mf_mark(build1_stat(ADDR_EXPR, build_pointer_type((((decl)->common).type)), decl))), tree_cons_stat((( tree )(((void *)0))), size, tree_cons_stat((( tree )(((void *)0))), build_int_cst((( tree )(((void *)0))), 3), tree_cons_stat((( tree )(((void *)0))), variable_name, (( tree )(((void *)0))))))); 
#line 1028 "../.././gcc/tree-mudflap.c"
register_fncall = build_function_call_expr(mf_register_fndecl, register_fncall_params); 
#line 1033 "../.././gcc/tree-mudflap.c"
gimplify_stmt((&register_fncall)); 
#line 1034 "../.././gcc/tree-mudflap.c"
gimplify_stmt((&unregister_fncall)); 
#line 1037 "../.././gcc/tree-mudflap.c"
if (tsi_end_p(initially_stmts)){
warning(0, "mudflap cannot track %qs in stub function", (((const char *)(((((decl)->decl_minimal).name))->identifier).id.str))); }else{
{ 
#line 1042 "../.././gcc/tree-mudflap.c"
tsi_link_before((&initially_stmts), register_fncall, TSI_SAME_STMT); 
#line 1045 "../.././gcc/tree-mudflap.c"
append_to_statement_list(unregister_fncall, (&finally_stmts)); } }
#line 1047 "../.././gcc/tree-mudflap.c"
mf_mark(decl); } }
#line 1050 "../.././gcc/tree-mudflap.c"
decl = (((decl)->common).chain); } } 
#line 1054 "../.././gcc/tree-mudflap.c"
if (finally_stmts != (( tree )(((void *)0)))){
{ 
#line 1056 "../.././gcc/tree-mudflap.c"

#line 1056 "../.././gcc/tree-mudflap.c"
 tree t = build2_stat(TRY_FINALLY_EXPR, global_trees[TI_VOID_TYPE], (*stmt_list), finally_stmts);
#line 1058 "../.././gcc/tree-mudflap.c"
(*stmt_list) = (((void *)0)); 
#line 1059 "../.././gcc/tree-mudflap.c"
append_to_statement_list(t, stmt_list); } }}
 
#line 1066 "../.././gcc/tree-mudflap.c"
static  tree mx_xfn_xform_decls( tree *t, int *continue_p, void *data)  {

#line 1067 "../.././gcc/tree-mudflap.c"

#line 1067 "../.././gcc/tree-mudflap.c"
struct mf_xform_decls_data *d = ((struct mf_xform_decls_data *)data);
#line 1069 "../.././gcc/tree-mudflap.c"
if ((*t) == (( tree )(((void *)0))) || (*t) == global_trees[TI_ERROR_MARK]){
{ 
#line 1071 "../.././gcc/tree-mudflap.c"
(*continue_p) = 0; 
#line 1072 "../.././gcc/tree-mudflap.c"
return (( tree )(((void *)0))); } }
#line 1075 "../.././gcc/tree-mudflap.c"
(*continue_p) = 1; 
#line 1077 "../.././gcc/tree-mudflap.c"
switch((((enum tree_code )(((*t))->common).code))){ { 
#line 1086 "../.././gcc/tree-mudflap.c"
case BIND_EXPR: { 
#line 1082 "../.././gcc/tree-mudflap.c"
mx_register_decls((d->param_decls), (&((((((*t)))->exp).operands[1])))); 
#line 1083 "../.././gcc/tree-mudflap.c"
(d->param_decls) = (( tree )(((void *)0))); 
#line 1085 "../.././gcc/tree-mudflap.c"
mx_register_decls(((((((*t)))->exp).operands[0])), (&((((((*t)))->exp).operands[1])))); } 
#line 1087 "../.././gcc/tree-mudflap.c"
break; 
#line 1089 "../.././gcc/tree-mudflap.c"
default: break; } } 
#line 1093 "../.././gcc/tree-mudflap.c"
return (( tree )(((void *)0))); }
 
# 1028 "../.././gcc/tree-mudflap.c" 
# 1107 "../.././gcc/tree-mudflap.c" 
static void mf_xform_decls( tree fnbody,  tree fnparams)  {

#line 1108 "../.././gcc/tree-mudflap.c"

#line 1108 "../.././gcc/tree-mudflap.c"
struct mf_xform_decls_data d;
#line 1109 "../.././gcc/tree-mudflap.c"
d.param_decls = fnparams; 
#line 1110 "../.././gcc/tree-mudflap.c"
walk_tree_without_duplicates((&fnbody), mx_xfn_xform_decls, (&d)); }
 
#line 1120 "../.././gcc/tree-mudflap.c"
static  htab_t marked_trees = (((void *)0)); 
#line 1123 "../.././gcc/tree-mudflap.c"
 tree mf_mark( tree t)  {

#line 1124 "../.././gcc/tree-mudflap.c"

#line 1124 "../.././gcc/tree-mudflap.c"
void **slot;
#line 1126 "../.././gcc/tree-mudflap.c"
if (marked_trees == (((void *)0))){
marked_trees = htab_create_alloc(31, htab_hash_pointer, htab_eq_pointer, (((void *)0)), ggc_calloc, (((void *)0))); }
#line 1129 "../.././gcc/tree-mudflap.c"
slot = htab_find_slot(marked_trees, t, INSERT); 
#line 1130 "../.././gcc/tree-mudflap.c"
(*slot) = t; 
#line 1131 "../.././gcc/tree-mudflap.c"
return t; }
 
#line 1136 "../.././gcc/tree-mudflap.c"
int mf_marked_p( tree t)  {

#line 1137 "../.././gcc/tree-mudflap.c"

#line 1137 "../.././gcc/tree-mudflap.c"
void *entry;
#line 1139 "../.././gcc/tree-mudflap.c"
if (marked_trees == (((void *)0))){
return 0; }
#line 1142 "../.././gcc/tree-mudflap.c"
entry = htab_find(marked_trees, t); 
#line 1143 "../.././gcc/tree-mudflap.c"
return (entry != (((void *)0))); }
 
# 1120 "../.././gcc/tree-mudflap.c" 
# 1156 "../.././gcc/tree-mudflap.c" 
static  VEC_tree_gc *deferred_static_decls; 
#line 1159 "../.././gcc/tree-mudflap.c"
static  tree enqueued_call_stmt_chain; 
#line 1163 "../.././gcc/tree-mudflap.c"
static void mudflap_register_call( tree obj,  tree object_size,  tree varname)  {

#line 1164 "../.././gcc/tree-mudflap.c"

#line 1164 "../.././gcc/tree-mudflap.c"
 tree arg,args,call_stmt;
#line 1166 "../.././gcc/tree-mudflap.c"
args = tree_cons_stat((( tree )(((void *)0))), varname, (( tree )(((void *)0)))); 
#line 1168 "../.././gcc/tree-mudflap.c"
arg = build_int_cst((( tree )(((void *)0))), 4); 
#line 1169 "../.././gcc/tree-mudflap.c"
args = tree_cons_stat((( tree )(((void *)0))), arg, args); 
#line 1171 "../.././gcc/tree-mudflap.c"
arg = convert(global_trees[TI_SIZE_TYPE], object_size); 
#line 1172 "../.././gcc/tree-mudflap.c"
args = tree_cons_stat((( tree )(((void *)0))), arg, args); 
#line 1174 "../.././gcc/tree-mudflap.c"
arg = build1_stat(ADDR_EXPR, build_pointer_type((((obj)->common).type)), obj); 
#line 1175 "../.././gcc/tree-mudflap.c"
arg = convert(global_trees[TI_PTR_TYPE], arg); 
#line 1176 "../.././gcc/tree-mudflap.c"
args = tree_cons_stat((( tree )(((void *)0))), arg, args); 
#line 1178 "../.././gcc/tree-mudflap.c"
call_stmt = build_function_call_expr(mf_register_fndecl, args); 
#line 1180 "../.././gcc/tree-mudflap.c"
append_to_statement_list(call_stmt, (&enqueued_call_stmt_chain)); }
 
#line 1185 "../.././gcc/tree-mudflap.c"
void mudflap_enqueue_decl( tree obj)  {

#line 1194 "../.././gcc/tree-mudflap.c"
if (mf_marked_p(obj)){
return ; }
#line 1194 "../.././gcc/tree-mudflap.c"
if ((tree_code_type[((int )((((enum tree_code )((obj)->common).code))))] == tcc_declaration) && (((obj)->decl_common).decl_flag_2) && (((obj)->decl_common).artificial_flag)){
return ; }
#line 1197 "../.././gcc/tree-mudflap.c"
(VEC_tree_gc_safe_push((&(deferred_static_decls)), obj)); }
 
#line 1203 "../.././gcc/tree-mudflap.c"
void mudflap_enqueue_constant( tree obj)  {

#line 1204 "../.././gcc/tree-mudflap.c"

#line 1204 "../.././gcc/tree-mudflap.c"
 tree object_size,varname;
#line 1206 "../.././gcc/tree-mudflap.c"
if (mf_marked_p(obj)){
return ; }
#line 1209 "../.././gcc/tree-mudflap.c"
if ((((enum tree_code )((obj)->common).code)) == STRING_CST){
object_size = build_int_cst((( tree )(((void *)0))), (((obj)->string).length)); }else{
object_size = size_in_bytes((((obj)->common).type)); }
#line 1214 "../.././gcc/tree-mudflap.c"
if ((((enum tree_code )((obj)->common).code)) == STRING_CST){
varname = mf_build_string("string literal"); }else{
varname = mf_build_string("constant"); }
#line 1219 "../.././gcc/tree-mudflap.c"
mudflap_register_call(obj, object_size, varname); }
 
#line 1226 "../.././gcc/tree-mudflap.c"
void mudflap_finish_file(void )  {

#line 1227 "../.././gcc/tree-mudflap.c"

#line 1227 "../.././gcc/tree-mudflap.c"
 tree ctor_statements = (( tree )(((void *)0)));
#line 1230 "../.././gcc/tree-mudflap.c"
if (((global_dc)->diagnostic_count)[((int )(DK_ERROR))] != 0 || ((global_dc)->diagnostic_count)[((int )(DK_SORRY))] != 0){
return ; }
#line 1234 "../.././gcc/tree-mudflap.c"
{ 
#line 1235 "../.././gcc/tree-mudflap.c"

#line 1235 "../.././gcc/tree-mudflap.c"
 tree call2_stmt = build_function_call_expr(mf_init_fndecl, (( tree )(((void *)0))));
#line 1236 "../.././gcc/tree-mudflap.c"
append_to_statement_list(call2_stmt, (&ctor_statements)); } 
#line 1240 "../.././gcc/tree-mudflap.c"
if (flag_mudflap_ignore_reads){
{ 
#line 1242 "../.././gcc/tree-mudflap.c"

#line 1242 "../.././gcc/tree-mudflap.c"
 tree arg = tree_cons_stat((( tree )(((void *)0))), mf_build_string("-ignore-reads"), (( tree )(((void *)0))));
#line 1244 "../.././gcc/tree-mudflap.c"

#line 1244 "../.././gcc/tree-mudflap.c"
 tree call_stmt = build_function_call_expr(mf_set_options_fndecl, arg);
#line 1245 "../.././gcc/tree-mudflap.c"
append_to_statement_list(call_stmt, (&ctor_statements)); } }
#line 1249 "../.././gcc/tree-mudflap.c"
if (deferred_static_decls){
{ 
#line 1251 "../.././gcc/tree-mudflap.c"

#line 1251 "../.././gcc/tree-mudflap.c"
 size_t i;
#line 1252 "../.././gcc/tree-mudflap.c"

#line 1252 "../.././gcc/tree-mudflap.c"
 tree obj;
#line 1253 "../.././gcc/tree-mudflap.c"
for(i = 0;(VEC_tree_base_iterate((((deferred_static_decls)?(&((deferred_static_decls)->base)):0)), i, (&(obj))));i++) { { 
#line 1255 "../.././gcc/tree-mudflap.c"
(((void )(((!((tree_code_type[((int )((((enum tree_code )((obj)->common).code))))] == tcc_declaration)))?fancy_abort("../.././gcc/tree-mudflap.c", 1255, __FUNCTION__) , 0:0)))); 
#line 1257 "../.././gcc/tree-mudflap.c"
if (mf_marked_p(obj)){
continue; }
#line 1264 "../.././gcc/tree-mudflap.c"
if ((!(((obj)->common).public_flag)) && (!(((obj)->common).addressable_flag))){
continue; }
#line 1267 "../.././gcc/tree-mudflap.c"
if ((!(((((((obj)->common).type))->type).size) != (( tree )(((void *)0)))))){
{ 
#line 1270 "../.././gcc/tree-mudflap.c"
warning(0, "mudflap cannot track unknown size extern %qs", (((const char *)(((((obj)->decl_minimal).name))->identifier).id.str))); 
#line 1271 "../.././gcc/tree-mudflap.c"
continue; } }
#line 1274 "../.././gcc/tree-mudflap.c"
mudflap_register_call(obj, size_in_bytes((((obj)->common).type)), mf_varname_tree(obj)); } } 
#line 1279 "../.././gcc/tree-mudflap.c"
(VEC_tree_base_truncate((((deferred_static_decls)?(&((deferred_static_decls)->base)):0)), 0)); } }
#line 1283 "../.././gcc/tree-mudflap.c"
if (enqueued_call_stmt_chain){
{ 
#line 1285 "../.././gcc/tree-mudflap.c"
append_to_statement_list(enqueued_call_stmt_chain, (&ctor_statements)); 
#line 1286 "../.././gcc/tree-mudflap.c"
enqueued_call_stmt_chain = (( tree )(((void *)0))); } }
#line 1289 "../.././gcc/tree-mudflap.c"
cgraph_build_static_cdtor('I', ctor_statements, 100 - 1); }
 
#line 1296 "../.././gcc/tree-mudflap.c"
static unsigned char gate_mudflap(void )  {

#line 1297 "../.././gcc/tree-mudflap.c"
return flag_mudflap != 0; }
 
#line 1315 "../.././gcc/tree-mudflap.c"
struct tree_opt_pass pass_mudflap_1 = {"mudflap1",gate_mudflap,execute_mudflap_function_decls,(((void *)0)),(((void *)0)),0,0,(1 << 0),0,0,0,(1 << 0),0}; 
#line 1333 "../.././gcc/tree-mudflap.c"
struct tree_opt_pass pass_mudflap_2 = {"mudflap2",gate_mudflap,execute_mudflap_function_ops,(((void *)0)),(((void *)0)),0,0,(1 << 2),0,0,0,(1 << 3) | (1 << 4) | (1 << 0),0}; 
# 1 "./gt-tree-mudflap.h" 1
# 139 "./gt-tree-mudflap.h" 
const struct ggc_root_tab gt_ggc_r_gt_tree_mudflap_h[] = {{(&enqueued_call_stmt_chain),1,sizeof (enqueued_call_stmt_chain),(&gt_ggc_mx_lang_tree_node),(&gt_pch_nx_lang_tree_node)},{(&deferred_static_decls),1,sizeof (deferred_static_decls),(&gt_ggc_mx_VEC_tree_gc),(&gt_pch_nx_VEC_tree_gc)},{(&marked_trees),1,sizeof (marked_trees),(&gt_ggc_m_P9tree_node4htab),(&gt_pch_n_P9tree_node4htab)},{(&mf_set_options_fndecl),1,sizeof (mf_set_options_fndecl),(&gt_ggc_mx_lang_tree_node),(&gt_pch_nx_lang_tree_node)},{(&mf_init_fndecl),1,sizeof (mf_init_fndecl),(&gt_ggc_mx_lang_tree_node),(&gt_pch_nx_lang_tree_node)},{(&mf_unregister_fndecl),1,sizeof (mf_unregister_fndecl),(&gt_ggc_mx_lang_tree_node),(&gt_pch_nx_lang_tree_node)},{(&mf_register_fndecl),1,sizeof (mf_register_fndecl),(&gt_ggc_mx_lang_tree_node),(&gt_pch_nx_lang_tree_node)},{(&mf_check_fndecl),1,sizeof (mf_check_fndecl),(&gt_ggc_mx_lang_tree_node),(&gt_pch_nx_lang_tree_node)},{(&mf_cache_mask_decl_l),1,sizeof (mf_cache_mask_decl_l),(&gt_ggc_mx_lang_tree_node),(&gt_pch_nx_lang_tree_node)},{(&mf_cache_shift_decl_l),1,sizeof (mf_cache_shift_decl_l),(&gt_ggc_mx_lang_tree_node),(&gt_pch_nx_lang_tree_node)},{(&mf_cache_mask_decl),1,sizeof (mf_cache_mask_decl),(&gt_ggc_mx_lang_tree_node),(&gt_pch_nx_lang_tree_node)},{(&mf_cache_shift_decl),1,sizeof (mf_cache_shift_decl),(&gt_ggc_mx_lang_tree_node),(&gt_pch_nx_lang_tree_node)},{(&mf_cache_array_decl),1,sizeof (mf_cache_array_decl),(&gt_ggc_mx_lang_tree_node),(&gt_pch_nx_lang_tree_node)},{(&mf_cache_structptr_type),1,sizeof (mf_cache_structptr_type),(&gt_ggc_mx_lang_tree_node),(&gt_pch_nx_lang_tree_node)},{(&mf_cache_struct_type),1,sizeof (mf_cache_struct_type),(&gt_ggc_mx_lang_tree_node),(&gt_pch_nx_lang_tree_node)},{(&mf_uintptr_type),1,sizeof (mf_uintptr_type),(&gt_ggc_mx_lang_tree_node),(&gt_pch_nx_lang_tree_node)},{(((void *)0)),0,0,(((void *)0)),(((void *)0))}}; 
