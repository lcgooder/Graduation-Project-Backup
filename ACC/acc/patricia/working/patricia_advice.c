
struct JoinPoint { 
	void** (*fp) (struct JoinPoint *);
	void ** args;
	int argsCount;
	const char ** argsType;
	 void * (*arg)(int, struct JoinPoint *); 
	 const char * (*argType)(int , struct JoinPoint *); 
	void ** retValue;
	const char * retType;
	const char * funcName ;
	const char * targetName ;
	const char * fileName ;
	const char * kind ;
	void * excep_return ;
};

 struct __UTAC__EXCEPTION {
	void * jumpbuf ;
	unsigned long long int prtValue ;
	int pops;
	struct __UTAC__CFLOW_FUNC {
		int (*func)(int,int) ;
		int val ;
		struct __UTAC__CFLOW_FUNC * next; 
	} * cflowfuncs; 
}; 


# 1 "patricia_advice.c" 
# 1 "/aop/Graduation-Project-Backup/ACC/acc/patricia/working//" 
# 1 "<built-in>" 
# 1 "<command-line>" 
# 1 "patricia_advice.c" 
# 4 "patricia_advice.h" 1
void __print_tree(void *phead); 
# 2 "patricia_advice.c" 2
# 1 "/usr/include/stdio.h" 1 3 4
# 27 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 352 "/usr/include/features.h" 3 4
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 353 "/usr/include/features.h" 2 3 4
# 374 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
# 385 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 386 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 375 "/usr/include/features.h" 2 3 4
# 398 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
# 399 "/usr/include/features.h" 2 3 4
# 28 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stddef.h" 1 3 4
# 211 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stddef.h" 3 4
typedef long unsigned int size_t; 
# 34 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4
typedef unsigned char __u_char; 
#line 31 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned short int __u_short; 
#line 32 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __u_int; 
#line 33 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __u_long; 
#line 36 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef signed char __int8_t; 
#line 37 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned char __uint8_t; 
#line 38 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef signed short int __int16_t; 
#line 39 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned short int __uint16_t; 
#line 40 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef signed int __int32_t; 
#line 41 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __uint32_t; 
#line 43 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef signed long int __int64_t; 
#line 44 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __uint64_t; 
#line 52 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __quad_t; 
#line 53 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __u_quad_t; 
# 121 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 1 3 4
# 124 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4
typedef unsigned long int __dev_t; 
#line 125 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __uid_t; 
#line 126 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __gid_t; 
#line 127 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __ino_t; 
#line 128 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __ino64_t; 
#line 129 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __mode_t; 
#line 130 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __nlink_t; 
#line 131 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __off_t; 
#line 132 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __off64_t; 
#line 133 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef int __pid_t; 
#line 134 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef struct {int __val[2]; 
}__fsid_t; 
#line 135 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __clock_t; 
#line 136 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __rlim_t; 
#line 137 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __rlim64_t; 
#line 138 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __id_t; 
#line 139 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __time_t; 
#line 140 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __useconds_t; 
#line 141 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __suseconds_t; 
#line 143 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef int __daddr_t; 
#line 144 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef int __key_t; 
#line 147 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef int __clockid_t; 
#line 150 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef void *__timer_t; 
#line 153 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __blksize_t; 
#line 158 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __blkcnt_t; 
#line 159 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __blkcnt64_t; 
#line 162 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __fsblkcnt_t; 
#line 163 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __fsblkcnt64_t; 
#line 166 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __fsfilcnt_t; 
#line 167 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __fsfilcnt64_t; 
#line 170 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __fsword_t; 
#line 172 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __ssize_t; 
#line 175 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __syscall_slong_t; 
#line 177 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __syscall_ulong_t; 
#line 181 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef  __off64_t __loff_t; 
#line 182 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef  __quad_t *__qaddr_t; 
#line 183 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef char *__caddr_t; 
#line 186 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __intptr_t; 
#line 189 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __socklen_t; 
# 36 "/usr/include/stdio.h" 2 3 4
# 44 "/usr/include/stdio.h" 3 4
struct _IO_FILE ; 
#line 48 "/usr/include/stdio.h"
typedef struct _IO_FILE FILE; 
#line 64 "/usr/include/stdio.h"
typedef struct _IO_FILE __FILE; 
# 64 "/usr/include/stdio.h" 3 4
# 74 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/libio.h" 1 3 4
# 31 "/usr/include/libio.h" 3 4
# 1 "/usr/include/_G_config.h" 1 3 4
# 15 "/usr/include/_G_config.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stddef.h" 1 3 4
# 16 "/usr/include/_G_config.h" 2 3 4
# 1 "/usr/include/wchar.h" 1 3 4
# 94 "/usr/include/wchar.h" 3 4
typedef struct {int __count; union {unsigned int __wch; char __wchb[4]; 
}__value; 
}__mbstate_t; 
#line 25 "/usr/include/_G_config.h"
typedef struct { __off_t __pos;  __mbstate_t __state; 
}_G_fpos_t; 
#line 30 "/usr/include/_G_config.h"
typedef struct { __off64_t __pos;  __mbstate_t __state; 
}_G_fpos64_t; 
# 21 "/usr/include/_G_config.h" 2 3 4
# 32 "/usr/include/libio.h" 2 3 4
# 49 "/usr/include/libio.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list; 
# 50 "/usr/include/libio.h" 2 3 4
# 144 "/usr/include/libio.h" 3 4
struct _IO_jump_t ; 
#line 144 "/usr/include/libio.h"
struct _IO_FILE ; 
#line 154 "/usr/include/libio.h"
typedef void _IO_lock_t; 
# 154 "/usr/include/libio.h" 3 4
# 177 "/usr/include/libio.h" 3 4
struct _IO_marker {struct _IO_marker *_next; struct _IO_FILE *_sbuf; int _pos; 
}; 
#line 186 "/usr/include/libio.h"
enum __codecvt_result {__codecvt_ok,__codecvt_partial,__codecvt_error,__codecvt_noconv}; 
# 245 "/usr/include/libio.h" 3 4
# 293 "/usr/include/libio.h" 3 4
# 312 "/usr/include/libio.h" 3 4
struct _IO_FILE {int _flags; char *_IO_read_ptr; char *_IO_read_end; char *_IO_read_base; char *_IO_write_base; char *_IO_write_ptr; char *_IO_write_end; char *_IO_buf_base; char *_IO_buf_end; char *_IO_save_base; char *_IO_backup_base; char *_IO_save_end; struct _IO_marker *_markers; struct _IO_FILE *_chain; int _fileno; int _flags2;  __off_t _old_offset; unsigned short _cur_column; signed char _vtable_offset; char _shortbuf[1];  _IO_lock_t *_lock;  __off64_t _offset; void *__pad1; void *__pad2; void *__pad3; void *__pad4;  size_t __pad5; int _mode; char _unused2[15 * sizeof (int ) - 4 * sizeof (void *) - sizeof ( size_t )]; 
}; 
#line 315 "/usr/include/libio.h"
typedef struct _IO_FILE _IO_FILE; 
#line 318 "/usr/include/libio.h"
struct _IO_FILE_plus ; 
#line 320 "/usr/include/libio.h"
extern struct _IO_FILE_plus _IO_2_1_stdin_; 
#line 321 "/usr/include/libio.h"
extern struct _IO_FILE_plus _IO_2_1_stdout_; 
#line 322 "/usr/include/libio.h"
extern struct _IO_FILE_plus _IO_2_1_stderr_; 
#line 338 "/usr/include/libio.h"
typedef  __ssize_t __io_read_fn(void *__cookie, char *__buf,  size_t __nbytes); 
#line 347 "/usr/include/libio.h"
typedef  __ssize_t __io_write_fn(void *__cookie, const char *__buf,  size_t __n); 
#line 355 "/usr/include/libio.h"
typedef int __io_seek_fn(void *__cookie,  __off64_t *__pos, int __w); 
#line 358 "/usr/include/libio.h"
typedef int __io_close_fn(void *__cookie); 
# 338 "/usr/include/libio.h" 3 4
# 390 "/usr/include/libio.h" 3 4
extern int __underflow( _IO_FILE *); 
#line 391 "/usr/include/libio.h"
extern int __uflow( _IO_FILE *); 
#line 392 "/usr/include/libio.h"
extern int __overflow( _IO_FILE *, int ); 
#line 434 "/usr/include/libio.h"
extern int _IO_getc( _IO_FILE *__fp); 
#line 435 "/usr/include/libio.h"
extern int _IO_putc(int __c,  _IO_FILE *__fp); 
#line 436 "/usr/include/libio.h"
extern int _IO_feof( _IO_FILE *__fp) __attribute__  (( __nothrow__ )) ; 
#line 437 "/usr/include/libio.h"
extern int _IO_ferror( _IO_FILE *__fp) __attribute__  (( __nothrow__ )) ; 
#line 439 "/usr/include/libio.h"
extern int _IO_peekc_locked( _IO_FILE *__fp); 
#line 445 "/usr/include/libio.h"
extern void _IO_flockfile( _IO_FILE *) __attribute__  (( __nothrow__ )) ; 
#line 446 "/usr/include/libio.h"
extern void _IO_funlockfile( _IO_FILE *) __attribute__  (( __nothrow__ )) ; 
#line 447 "/usr/include/libio.h"
extern int _IO_ftrylockfile( _IO_FILE *) __attribute__  (( __nothrow__ )) ; 
# 434 "/usr/include/libio.h" 3 4
# 465 "/usr/include/libio.h" 3 4
extern int _IO_vfscanf( _IO_FILE *__restrict , const char *__restrict ,  __gnuc_va_list , int *__restrict ); 
#line 467 "/usr/include/libio.h"
extern int _IO_vfprintf( _IO_FILE *__restrict , const char *__restrict ,  __gnuc_va_list ); 
#line 468 "/usr/include/libio.h"
extern  __ssize_t _IO_padn( _IO_FILE *, int ,  __ssize_t ); 
#line 469 "/usr/include/libio.h"
extern  size_t _IO_sgetn( _IO_FILE *, void *,  size_t ); 
#line 471 "/usr/include/libio.h"
extern  __off64_t _IO_seekoff( _IO_FILE *,  __off64_t , int , int ); 
#line 472 "/usr/include/libio.h"
extern  __off64_t _IO_seekpos( _IO_FILE *,  __off64_t , int ); 
#line 474 "/usr/include/libio.h"
extern void _IO_free_backup_area( _IO_FILE *) __attribute__  (( __nothrow__ )) ; 
#line 79 "/usr/include/stdio.h"
typedef  __gnuc_va_list va_list; 
# 75 "/usr/include/stdio.h" 2 3 4
# 90 "/usr/include/stdio.h" 3 4
typedef  __off_t off_t; 
#line 102 "/usr/include/stdio.h"
typedef  __ssize_t ssize_t; 
#line 110 "/usr/include/stdio.h"
typedef  _G_fpos_t fpos_t; 
# 102 "/usr/include/stdio.h" 3 4
# 164 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 1 3 4
# 168 "/usr/include/stdio.h" 2 3 4
extern struct _IO_FILE *stdin; 
#line 169 "/usr/include/stdio.h"
extern struct _IO_FILE *stdout; 
#line 170 "/usr/include/stdio.h"
extern struct _IO_FILE *stderr; 
#line 178 "/usr/include/stdio.h"
extern int remove(const char *__filename) __attribute__  (( __nothrow__ )) ; 
#line 180 "/usr/include/stdio.h"
extern int rename(const char *__old, const char *__new) __attribute__  (( __nothrow__ )) ; 
#line 186 "/usr/include/stdio.h"
extern int renameat(int __oldfd, const char *__old, int __newfd, const char *__new) __attribute__  (( __nothrow__ )) ; 
#line 195 "/usr/include/stdio.h"
extern  FILE *tmpfile(void ); 
#line 209 "/usr/include/stdio.h"
extern char *tmpnam(char *__s) __attribute__  (( __nothrow__ )) ; 
#line 215 "/usr/include/stdio.h"
extern char *tmpnam_r(char *__s) __attribute__  (( __nothrow__ )) ; 
# 209 "/usr/include/stdio.h" 3 4
# 228 "/usr/include/stdio.h" 3 4
extern char *tempnam(const char *__dir, const char *__pfx) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ )) ; 
#line 237 "/usr/include/stdio.h"
extern int fclose( FILE *__stream); 
#line 242 "/usr/include/stdio.h"
extern int fflush( FILE *__stream); 
#line 252 "/usr/include/stdio.h"
extern int fflush_unlocked( FILE *__stream); 
# 252 "/usr/include/stdio.h" 3 4
# 273 "/usr/include/stdio.h" 3 4
extern  FILE *fopen(const char *__restrict __filename, const char *__restrict __modes); 
#line 280 "/usr/include/stdio.h"
extern  FILE *freopen(const char *__restrict __filename, const char *__restrict __modes,  FILE *__restrict __stream); 
# 295 "/usr/include/stdio.h" 3 4
# 306 "/usr/include/stdio.h" 3 4
extern  FILE *fdopen(int __fd, const char *__modes) __attribute__  (( __nothrow__ )) ; 
#line 320 "/usr/include/stdio.h"
extern  FILE *fmemopen(void *__s,  size_t __len, const char *__modes) __attribute__  (( __nothrow__ )) ; 
#line 325 "/usr/include/stdio.h"
extern  FILE *open_memstream(char **__bufloc,  size_t *__sizeloc) __attribute__  (( __nothrow__ )) ; 
#line 332 "/usr/include/stdio.h"
extern void setbuf( FILE *__restrict __stream, char *__restrict __buf) __attribute__  (( __nothrow__ )) ; 
#line 337 "/usr/include/stdio.h"
extern int setvbuf( FILE *__restrict __stream, char *__restrict __buf, int __modes,  size_t __n) __attribute__  (( __nothrow__ )) ; 
#line 344 "/usr/include/stdio.h"
extern void setbuffer( FILE *__restrict __stream, char *__restrict __buf,  size_t __size) __attribute__  (( __nothrow__ )) ; 
#line 347 "/usr/include/stdio.h"
extern void setlinebuf( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 357 "/usr/include/stdio.h"
extern int fprintf( FILE *__restrict __stream, const char *__restrict __format, ...); 
#line 362 "/usr/include/stdio.h"
extern int printf(const char *__restrict __format, ...); 
#line 365 "/usr/include/stdio.h"
extern int sprintf(char *__restrict __s, const char *__restrict __format, ...) __attribute__  (( __nothrow__ )) ; 
#line 372 "/usr/include/stdio.h"
extern int vfprintf( FILE *__restrict __s, const char *__restrict __format,  __gnuc_va_list __arg); 
#line 377 "/usr/include/stdio.h"
extern int vprintf(const char *__restrict __format,  __gnuc_va_list __arg); 
#line 380 "/usr/include/stdio.h"
extern int vsprintf(char *__restrict __s, const char *__restrict __format,  __gnuc_va_list __arg) __attribute__  (( __nothrow__ )) ; 
#line 388 "/usr/include/stdio.h"
extern int snprintf(char *__restrict __s,  size_t __maxlen, const char *__restrict __format, ...) __attribute__  (( __nothrow__ ))  __attribute__  (( __format__ ( __printf__, 3, 4 )  )) ; 
#line 392 "/usr/include/stdio.h"
extern int vsnprintf(char *__restrict __s,  size_t __maxlen, const char *__restrict __format,  __gnuc_va_list __arg) __attribute__  (( __nothrow__ ))  __attribute__  (( __format__ ( __printf__, 3, 0 )  )) ; 
# 319 "/usr/include/stdio.h" 3 4
# 414 "/usr/include/stdio.h" 3 4
extern int vdprintf(int __fd, const char *__restrict __fmt,  __gnuc_va_list __arg) __attribute__  (( __format__ ( __printf__, 2, 0 )  )) ; 
#line 416 "/usr/include/stdio.h"
extern int dprintf(int __fd, const char *__restrict __fmt, ...) __attribute__  (( __format__ ( __printf__, 2, 3 )  )) ; 
#line 426 "/usr/include/stdio.h"
extern int fscanf( FILE *__restrict __stream, const char *__restrict __format, ...); 
#line 431 "/usr/include/stdio.h"
extern int scanf(const char *__restrict __format, ...); 
#line 434 "/usr/include/stdio.h"
extern int sscanf(const char *__restrict __s, const char *__restrict __format, ...) __attribute__  (( __nothrow__ )) ; 
#line 443 "/usr/include/stdio.h"
extern int fscanf( FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("""__isoc99_fscanf"); 
#line 446 "/usr/include/stdio.h"
extern int scanf(const char *__restrict __format, ...) __asm__ ("""__isoc99_scanf"); 
#line 448 "/usr/include/stdio.h"
extern int sscanf(const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("""__isoc99_sscanf") __attribute__  (( __nothrow__ )) ; 
# 443 "/usr/include/stdio.h" 3 4
# 473 "/usr/include/stdio.h" 3 4
extern int vfscanf( FILE *__restrict __s, const char *__restrict __format,  __gnuc_va_list __arg) __attribute__  (( __format__ ( __scanf__, 2, 0 )  )) ; 
#line 480 "/usr/include/stdio.h"
extern int vscanf(const char *__restrict __format,  __gnuc_va_list __arg) __attribute__  (( __format__ ( __scanf__, 1, 0 )  )) ; 
#line 485 "/usr/include/stdio.h"
extern int vsscanf(const char *__restrict __s, const char *__restrict __format,  __gnuc_va_list __arg) __attribute__  (( __nothrow__ ))  __attribute__  (( __format__ ( __scanf__, 2, 0 )  )) ; 
#line 498 "/usr/include/stdio.h"
extern int vfscanf( FILE *__restrict __s, const char *__restrict __format,  __gnuc_va_list __arg) __asm__ ("""__isoc99_vfscanf") __attribute__  (( __format__ ( __scanf__, 2, 0 )  )) ; 
#line 501 "/usr/include/stdio.h"
extern int vscanf(const char *__restrict __format,  __gnuc_va_list __arg) __asm__ ("""__isoc99_vscanf") __attribute__  (( __format__ ( __scanf__, 1, 0 )  )) ; 
#line 506 "/usr/include/stdio.h"
extern int vsscanf(const char *__restrict __s, const char *__restrict __format,  __gnuc_va_list __arg) __asm__ ("""__isoc99_vsscanf") __attribute__  (( __nothrow__ ))  __attribute__  (( __format__ ( __scanf__, 2, 0 )  )) ; 
# 494 "/usr/include/stdio.h" 3 4
# 531 "/usr/include/stdio.h" 3 4
extern int fgetc( FILE *__stream); 
#line 532 "/usr/include/stdio.h"
extern int getc( FILE *__stream); 
#line 538 "/usr/include/stdio.h"
extern int getchar(void ); 
#line 550 "/usr/include/stdio.h"
extern int getc_unlocked( FILE *__stream); 
#line 551 "/usr/include/stdio.h"
extern int getchar_unlocked(void ); 
# 550 "/usr/include/stdio.h" 3 4
# 561 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked( FILE *__stream); 
#line 573 "/usr/include/stdio.h"
extern int fputc(int __c,  FILE *__stream); 
#line 574 "/usr/include/stdio.h"
extern int putc(int __c,  FILE *__stream); 
#line 580 "/usr/include/stdio.h"
extern int putchar(int __c); 
#line 594 "/usr/include/stdio.h"
extern int fputc_unlocked(int __c,  FILE *__stream); 
#line 602 "/usr/include/stdio.h"
extern int putc_unlocked(int __c,  FILE *__stream); 
#line 603 "/usr/include/stdio.h"
extern int putchar_unlocked(int __c); 
#line 610 "/usr/include/stdio.h"
extern int getw( FILE *__stream); 
#line 613 "/usr/include/stdio.h"
extern int putw(int __w,  FILE *__stream); 
#line 623 "/usr/include/stdio.h"
extern char *fgets(char *__restrict __s, int __n,  FILE *__restrict __stream); 
# 594 "/usr/include/stdio.h" 3 4
# 638 "/usr/include/stdio.h" 3 4
extern char *gets(char *__s) __attribute__  (( __deprecated__ )) ; 
#line 667 "/usr/include/stdio.h"
extern  __ssize_t __getdelim(char **__restrict __lineptr,  size_t *__restrict __n, int __delimiter,  FILE *__restrict __stream); 
#line 670 "/usr/include/stdio.h"
extern  __ssize_t getdelim(char **__restrict __lineptr,  size_t *__restrict __n, int __delimiter,  FILE *__restrict __stream); 
#line 680 "/usr/include/stdio.h"
extern  __ssize_t getline(char **__restrict __lineptr,  size_t *__restrict __n,  FILE *__restrict __stream); 
#line 689 "/usr/include/stdio.h"
extern int fputs(const char *__restrict __s,  FILE *__restrict __stream); 
#line 695 "/usr/include/stdio.h"
extern int puts(const char *__s); 
#line 702 "/usr/include/stdio.h"
extern int ungetc(int __c,  FILE *__stream); 
#line 710 "/usr/include/stdio.h"
extern  size_t fread(void *__restrict __ptr,  size_t __size,  size_t __n,  FILE *__restrict __stream); 
#line 716 "/usr/include/stdio.h"
extern  size_t fwrite(const void *__restrict __ptr,  size_t __size,  size_t __n,  FILE *__restrict __s); 
# 665 "/usr/include/stdio.h" 3 4
# 738 "/usr/include/stdio.h" 3 4
extern  size_t fread_unlocked(void *__restrict __ptr,  size_t __size,  size_t __n,  FILE *__restrict __stream); 
#line 740 "/usr/include/stdio.h"
extern  size_t fwrite_unlocked(const void *__restrict __ptr,  size_t __size,  size_t __n,  FILE *__restrict __stream); 
#line 749 "/usr/include/stdio.h"
extern int fseek( FILE *__stream, long int __off, int __whence); 
#line 754 "/usr/include/stdio.h"
extern long int ftell( FILE *__stream); 
#line 759 "/usr/include/stdio.h"
extern void rewind( FILE *__stream); 
#line 773 "/usr/include/stdio.h"
extern int fseeko( FILE *__stream,  __off_t __off, int __whence); 
#line 778 "/usr/include/stdio.h"
extern  __off_t ftello( FILE *__stream); 
# 773 "/usr/include/stdio.h" 3 4
# 798 "/usr/include/stdio.h" 3 4
extern int fgetpos( FILE *__restrict __stream,  fpos_t *__restrict __pos); 
#line 803 "/usr/include/stdio.h"
extern int fsetpos( FILE *__stream, const  fpos_t *__pos); 
# 815 "/usr/include/stdio.h" 3 4
# 826 "/usr/include/stdio.h" 3 4
extern void clearerr( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 828 "/usr/include/stdio.h"
extern int feof( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 830 "/usr/include/stdio.h"
extern int ferror( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 835 "/usr/include/stdio.h"
extern void clearerr_unlocked( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 836 "/usr/include/stdio.h"
extern int feof_unlocked( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 837 "/usr/include/stdio.h"
extern int ferror_unlocked( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 846 "/usr/include/stdio.h"
extern void perror(const char *__s); 
# 1 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 3 4
extern int sys_nerr; 
#line 27 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h"
extern const char *const sys_errlist[]; 
#line 858 "/usr/include/stdio.h"
extern int fileno( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 863 "/usr/include/stdio.h"
extern int fileno_unlocked( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
# 854 "/usr/include/stdio.h" 2 3 4
# 873 "/usr/include/stdio.h" 3 4
extern  FILE *popen(const char *__command, const char *__modes); 
#line 879 "/usr/include/stdio.h"
extern int pclose( FILE *__stream); 
#line 885 "/usr/include/stdio.h"
extern char *ctermid(char *__s) __attribute__  (( __nothrow__ )) ; 
#line 913 "/usr/include/stdio.h"
extern void flockfile( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 917 "/usr/include/stdio.h"
extern int ftrylockfile( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
#line 920 "/usr/include/stdio.h"
extern void funlockfile( FILE *__stream) __attribute__  (( __nothrow__ )) ; 
# 913 "/usr/include/stdio.h" 3 4
# 943 "/usr/include/stdio.h" 3 4
# 4 "patricia_advice.c" 2
# 1 "/usr/include/assert.h" 1 3 4
# 71 "/usr/include/assert.h" 3 4
extern void __assert_fail(const char *__assertion, const char *__file, unsigned int __line, const char *__function) __attribute__  (( __nothrow__ ))  __attribute__  (( __noreturn__ )) ; 
#line 76 "/usr/include/assert.h"
extern void __assert_perror_fail(int __errnum, const char *__file, unsigned int __line, const char *__function) __attribute__  (( __nothrow__ ))  __attribute__  (( __noreturn__ )) ; 
#line 82 "/usr/include/assert.h"
extern void __assert(const char *__assertion, const char *__file, int __line) __attribute__  (( __nothrow__ ))  __attribute__  (( __noreturn__ )) ; 
# 5 "patricia_advice.c" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 32 "/usr/include/stdlib.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stddef.h" 1 3 4
# 323 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stddef.h" 3 4
typedef int wchar_t; 
# 33 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 1 3 4
# 55 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3 4
typedef enum {P_ALL,P_PID,P_PGID}idtype_t; 
# 42 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 1 3 4
# 64 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 36 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 2 3 4
# 60 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 29 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap-16.h" 1 3 4
# 36 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4
# 46 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
static __inline unsigned int __bswap_32(unsigned int __bsx)  
# 527 "patricia_advice.c"
{
# 529 "patricia_advice.c"
unsigned int retValue_acc;




# 535 "patricia_advice.c"
{

#line 47 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"

# 540 "patricia_advice.c"
retValue_acc = __builtin_bswap32(__bsx);
# 542 "patricia_advice.c"
return (unsigned int )retValue_acc;
 
# 545 "patricia_advice.c"

}

# 549 "patricia_advice.c"
return (unsigned int )retValue_acc;

# 552 "patricia_advice.c"

}
 
#line 109 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"
static __inline  __uint64_t __bswap_64( __uint64_t __bsx)  
# 558 "patricia_advice.c"
{
# 560 "patricia_advice.c"
__uint64_t retValue_acc;




# 566 "patricia_advice.c"
{

#line 110 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"

# 571 "patricia_advice.c"
retValue_acc = __builtin_bswap64(__bsx);
# 573 "patricia_advice.c"
return (__uint64_t )retValue_acc;
 
# 576 "patricia_advice.c"

}

# 580 "patricia_advice.c"
return (__uint64_t )retValue_acc;

# 583 "patricia_advice.c"

}
 
# 108 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
# 61 "/usr/include/endian.h" 2 3 4
# 97 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 2 3 4
union wait {int w_status; struct {unsigned int __w_termsig:7; unsigned int __w_coredump:1; unsigned int __w_retcode:8; unsigned int :16; 
}__wait_terminated; struct {unsigned int __w_stopval:8; unsigned int __w_stopsig:8; unsigned int :16; 
}__wait_stopped; 
}; 
# 43 "/usr/include/stdlib.h" 2 3 4
# 71 "/usr/include/stdlib.h" 3 4
typedef union {union wait *__uptr; int *__iptr; 
}__WAIT_STATUS __attribute__  (( __transparent_union__ )) ; 
#line 101 "/usr/include/stdlib.h"
typedef struct {int quot; int rem; 
}div_t; 
#line 109 "/usr/include/stdlib.h"
typedef struct {long int quot; long int rem; 
}ldiv_t; 
#line 121 "/usr/include/stdlib.h"
 __extension__ typedef struct {long long int quot; long long int rem; 
}lldiv_t; 
# 95 "/usr/include/stdlib.h" 3 4
# 139 "/usr/include/stdlib.h" 3 4
extern  size_t __ctype_get_mb_cur_max(void ) __attribute__  (( __nothrow__ )) ; 
#line 145 "/usr/include/stdlib.h"
extern double atof(const char *__nptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 148 "/usr/include/stdlib.h"
extern int atoi(const char *__nptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 151 "/usr/include/stdlib.h"
extern long int atol(const char *__nptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 158 "/usr/include/stdlib.h"
 __extension__ extern long long int atoll(const char *__nptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 166 "/usr/include/stdlib.h"
extern double strtod(const char *__restrict __nptr, char **__restrict __endptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 173 "/usr/include/stdlib.h"
extern float strtof(const char *__restrict __nptr, char **__restrict __endptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 177 "/usr/include/stdlib.h"
extern long double strtold(const char *__restrict __nptr, char **__restrict __endptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 185 "/usr/include/stdlib.h"
extern long int strtol(const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 189 "/usr/include/stdlib.h"
extern unsigned long int strtoul(const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 197 "/usr/include/stdlib.h"
 __extension__ extern long long int strtoq(const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 202 "/usr/include/stdlib.h"
 __extension__ extern unsigned long long int strtouq(const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 211 "/usr/include/stdlib.h"
 __extension__ extern long long int strtoll(const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 216 "/usr/include/stdlib.h"
 __extension__ extern unsigned long long int strtoull(const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 305 "/usr/include/stdlib.h"
extern char *l64a(long int __n) __attribute__  (( __nothrow__ )) ; 
#line 309 "/usr/include/stdlib.h"
extern long int a64l(const char *__s) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 305 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/types.h" 1 3 4
# 33 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef  __u_char u_char; 
#line 34 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __u_short u_short; 
#line 35 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __u_int u_int; 
#line 36 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __u_long u_long; 
#line 37 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __quad_t quad_t; 
#line 38 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __u_quad_t u_quad_t; 
#line 39 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __fsid_t fsid_t; 
#line 44 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __loff_t loff_t; 
#line 48 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __ino_t ino_t; 
#line 60 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __dev_t dev_t; 
#line 65 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __gid_t gid_t; 
#line 70 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __mode_t mode_t; 
#line 75 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __nlink_t nlink_t; 
#line 80 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __uid_t uid_t; 
# 60 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 98 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef  __pid_t pid_t; 
#line 104 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __id_t id_t; 
#line 115 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __daddr_t daddr_t; 
#line 116 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __caddr_t caddr_t; 
#line 122 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __key_t key_t; 
# 115 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 132 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 59 "/usr/include/time.h" 3 4
typedef  __clock_t clock_t; 
#line 75 "/usr/include/time.h"
typedef  __time_t time_t; 
# 73 "/usr/include/time.h" 3 4
# 91 "/usr/include/time.h" 3 4
typedef  __clockid_t clockid_t; 
#line 103 "/usr/include/time.h"
typedef  __timer_t timer_t; 
# 103 "/usr/include/time.h" 3 4
# 133 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 146 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stddef.h" 1 3 4
# 150 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
typedef unsigned long int ulong; 
#line 151 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef unsigned short int ushort; 
#line 152 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef unsigned int uint; 
#line 194 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef int int8_t __attribute__  (( __mode__ ( __QI__ )  )) ; 
#line 195 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef int int16_t __attribute__  (( __mode__ ( __HI__ )  )) ; 
#line 196 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef int int32_t __attribute__  (( __mode__ ( __SI__ )  )) ; 
#line 197 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef int int64_t __attribute__  (( __mode__ ( __DI__ )  )) ; 
#line 200 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef unsigned int u_int8_t __attribute__  (( __mode__ ( __QI__ )  )) ; 
#line 201 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef unsigned int u_int16_t __attribute__  (( __mode__ ( __HI__ )  )) ; 
#line 202 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef unsigned int u_int32_t __attribute__  (( __mode__ ( __SI__ )  )) ; 
#line 203 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef unsigned int u_int64_t __attribute__  (( __mode__ ( __DI__ )  )) ; 
#line 205 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef int register_t __attribute__  (( __mode__ ( __word__ )  )) ; 
# 194 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 219 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/select.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/select.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/select.h" 2 3 4
# 31 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3 4
typedef int __sig_atomic_t; 
#line 30 "/usr/include/x86_64-linux-gnu/bits/sigset.h"
typedef struct {unsigned long int __val[(1024 / (8 * sizeof (unsigned long int )))]; 
}__sigset_t; 
#line 37 "/usr/include/x86_64-linux-gnu/sys/select.h"
typedef  __sigset_t sigset_t; 
# 34 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4
# 1 "/usr/include/time.h" 1 3 4
# 124 "/usr/include/time.h" 3 4
struct timespec { __time_t tv_sec;  __syscall_slong_t tv_nsec; 
}; 
# 44 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/time.h" 1 3 4
# 34 "/usr/include/x86_64-linux-gnu/bits/time.h" 3 4
struct timeval { __time_t tv_sec;  __suseconds_t tv_usec; 
}; 
#line 48 "/usr/include/x86_64-linux-gnu/sys/select.h"
typedef  __suseconds_t suseconds_t; 
#line 54 "/usr/include/x86_64-linux-gnu/sys/select.h"
typedef long int __fd_mask; 
# 46 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4
# 75 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
typedef struct { __fd_mask __fds_bits[1024 / (8 * ((int )sizeof ( __fd_mask )))]; 
}fd_set; 
#line 82 "/usr/include/x86_64-linux-gnu/sys/select.h"
typedef  __fd_mask fd_mask; 
# 96 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
# 109 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int select(int __nfds,  fd_set *__restrict __readfds,  fd_set *__restrict __writefds,  fd_set *__restrict __exceptfds, struct timeval *__restrict __timeout); 
#line 122 "/usr/include/x86_64-linux-gnu/sys/select.h"
extern int pselect(int __nfds,  fd_set *__restrict __readfds,  fd_set *__restrict __writefds,  fd_set *__restrict __exceptfds, const struct timespec *__restrict __timeout, const  __sigset_t *__restrict __sigmask); 
# 118 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
# 131 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
# 220 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4
 __extension__ extern unsigned int gnu_dev_major(unsigned long long int __dev) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 31 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h"
 __extension__ extern unsigned int gnu_dev_minor(unsigned long long int __dev) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 35 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h"
 __extension__ extern unsigned long long int gnu_dev_makedev(unsigned int __major, unsigned int __minor) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
# 58 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4
# 228 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
typedef  __blksize_t blksize_t; 
#line 235 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __blkcnt_t blkcnt_t; 
#line 239 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __fsblkcnt_t fsblkcnt_t; 
#line 243 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef  __fsfilcnt_t fsfilcnt_t; 
# 270 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 1 3 4
# 21 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 2 3 4
# 60 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
typedef unsigned long int pthread_t; 
#line 67 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
union pthread_attr_t {char __size[56]; long int __align; 
}; 
#line 69 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union pthread_attr_t pthread_attr_t; 
#line 79 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef struct __pthread_internal_list {struct __pthread_internal_list *__prev; struct __pthread_internal_list *__next; 
}__pthread_list_t; 
# 90 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
# 127 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
typedef union {struct __pthread_mutex_s {int __lock; unsigned int __count; int __owner; unsigned int __nusers; int __kind; short __spins; short __elision;  __pthread_list_t __list; 
}__data; char __size[40]; long int __align; 
}pthread_mutex_t; 
#line 133 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union {char __size[4]; int __align; 
}pthread_mutexattr_t; 
#line 153 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union {struct {int __lock; unsigned int __futex;  __extension__ unsigned long long int __total_seq;  __extension__ unsigned long long int __wakeup_seq;  __extension__ unsigned long long int __woken_seq; void *__mutex; unsigned int __nwaiters; unsigned int __broadcast_seq; 
}__data; char __size[48];  __extension__ long long int __align; 
}pthread_cond_t; 
#line 159 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union {char __size[4]; int __align; 
}pthread_condattr_t; 
#line 163 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef unsigned int pthread_key_t; 
#line 167 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef int pthread_once_t; 
#line 213 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union {struct {int __lock; unsigned int __nr_readers; unsigned int __readers_wakeup; unsigned int __writer_wakeup; unsigned int __nr_readers_queued; unsigned int __nr_writers_queued; int __writer; int __shared; unsigned long int __pad1; unsigned long int __pad2; unsigned int __flags; 
}__data; char __size[56]; long int __align; 
}pthread_rwlock_t; 
#line 219 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union {char __size[8]; long int __align; 
}pthread_rwlockattr_t; 
#line 225 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef volatile int pthread_spinlock_t; 
#line 234 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union {char __size[32]; long int __align; 
}pthread_barrier_t; 
#line 240 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union {char __size[4]; int __align; 
}pthread_barrierattr_t; 
# 211 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
# 271 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 321 "/usr/include/stdlib.h" 2 3 4
extern long int random(void ) __attribute__  (( __nothrow__ )) ; 
#line 324 "/usr/include/stdlib.h"
extern void srandom(unsigned int __seed) __attribute__  (( __nothrow__ )) ; 
#line 331 "/usr/include/stdlib.h"
extern char *initstate(unsigned int __seed, char *__statebuf,  size_t __statelen) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 335 "/usr/include/stdlib.h"
extern char *setstate(char *__statebuf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 352 "/usr/include/stdlib.h"
struct random_data { int32_t *fptr;  int32_t *rptr;  int32_t *state; int rand_type; int rand_deg; int rand_sep;  int32_t *end_ptr; 
}; 
#line 355 "/usr/include/stdlib.h"
extern int random_r(struct random_data *__restrict __buf,  int32_t *__restrict __result) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 358 "/usr/include/stdlib.h"
extern int srandom_r(unsigned int __seed, struct random_data *__buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 363 "/usr/include/stdlib.h"
extern int initstate_r(unsigned int __seed, char *__restrict __statebuf,  size_t __statelen, struct random_data *__restrict __buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 4 )  )) ; 
#line 367 "/usr/include/stdlib.h"
extern int setstate_r(char *__restrict __statebuf, struct random_data *__restrict __buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 374 "/usr/include/stdlib.h"
extern int rand(void ) __attribute__  (( __nothrow__ )) ; 
#line 376 "/usr/include/stdlib.h"
extern void srand(unsigned int __seed) __attribute__  (( __nothrow__ )) ; 
#line 381 "/usr/include/stdlib.h"
extern int rand_r(unsigned int *__seed) __attribute__  (( __nothrow__ )) ; 
#line 389 "/usr/include/stdlib.h"
extern double drand48(void ) __attribute__  (( __nothrow__ )) ; 
#line 390 "/usr/include/stdlib.h"
extern double erand48(unsigned short int __xsubi[3]) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 393 "/usr/include/stdlib.h"
extern long int lrand48(void ) __attribute__  (( __nothrow__ )) ; 
#line 395 "/usr/include/stdlib.h"
extern long int nrand48(unsigned short int __xsubi[3]) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 398 "/usr/include/stdlib.h"
extern long int mrand48(void ) __attribute__  (( __nothrow__ )) ; 
#line 400 "/usr/include/stdlib.h"
extern long int jrand48(unsigned short int __xsubi[3]) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 403 "/usr/include/stdlib.h"
extern void srand48(long int __seedval) __attribute__  (( __nothrow__ )) ; 
#line 405 "/usr/include/stdlib.h"
extern unsigned short int *seed48(unsigned short int __seed16v[3]) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 406 "/usr/include/stdlib.h"
extern void lcong48(unsigned short int __param[7]) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 420 "/usr/include/stdlib.h"
struct drand48_data {unsigned short int __x[3]; unsigned short int __old_x[3]; unsigned short int __c; unsigned short int __init;  __extension__ unsigned long long int __a; 
}; 
#line 424 "/usr/include/stdlib.h"
extern int drand48_r(struct drand48_data *__restrict __buffer, double *__restrict __result) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 427 "/usr/include/stdlib.h"
extern int erand48_r(unsigned short int __xsubi[3], struct drand48_data *__restrict __buffer, double *__restrict __result) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 432 "/usr/include/stdlib.h"
extern int lrand48_r(struct drand48_data *__restrict __buffer, long int *__restrict __result) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 436 "/usr/include/stdlib.h"
extern int nrand48_r(unsigned short int __xsubi[3], struct drand48_data *__restrict __buffer, long int *__restrict __result) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 441 "/usr/include/stdlib.h"
extern int mrand48_r(struct drand48_data *__restrict __buffer, long int *__restrict __result) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 445 "/usr/include/stdlib.h"
extern int jrand48_r(unsigned short int __xsubi[3], struct drand48_data *__restrict __buffer, long int *__restrict __result) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 449 "/usr/include/stdlib.h"
extern int srand48_r(long int __seedval, struct drand48_data *__buffer) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 452 "/usr/include/stdlib.h"
extern int seed48_r(unsigned short int __seed16v[3], struct drand48_data *__buffer) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 456 "/usr/include/stdlib.h"
extern int lcong48_r(unsigned short int __param[7], struct drand48_data *__buffer) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 
#line 466 "/usr/include/stdlib.h"
extern void *malloc( size_t __size) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ )) ; 
#line 469 "/usr/include/stdlib.h"
extern void *calloc( size_t __nmemb,  size_t __size) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ )) ; 
#line 481 "/usr/include/stdlib.h"
extern void *realloc(void *__ptr,  size_t __size) __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ )) ; 
#line 483 "/usr/include/stdlib.h"
extern void free(void *__ptr) __attribute__  (( __nothrow__ )) ; 
#line 488 "/usr/include/stdlib.h"
extern void cfree(void *__ptr) __attribute__  (( __nothrow__ )) ; 
# 1 "/usr/include/alloca.h" 1 3 4
# 24 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stddef.h" 1 3 4
# 32 "/usr/include/alloca.h" 2 3 4
extern void *alloca( size_t __size) __attribute__  (( __nothrow__ )) ; 
#line 498 "/usr/include/stdlib.h"
extern void *valloc( size_t __size) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ )) ; 
#line 504 "/usr/include/stdlib.h"
extern int posix_memalign(void **__memptr,  size_t __alignment,  size_t __size) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 493 "/usr/include/stdlib.h" 2 3 4
# 515 "/usr/include/stdlib.h" 3 4
extern void abort(void ) __attribute__  (( __nothrow__ ))  __attribute__  (( __noreturn__ )) ; 
#line 519 "/usr/include/stdlib.h"
extern int atexit(void (*__func)(void )) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 536 "/usr/include/stdlib.h"
extern int on_exit(void (*__func)(int __status, void *__arg), void *__arg) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 543 "/usr/include/stdlib.h"
extern void exit(int __status) __attribute__  (( __nothrow__ ))  __attribute__  (( __noreturn__ )) ; 
#line 557 "/usr/include/stdlib.h"
extern void _Exit(int __status) __attribute__  (( __nothrow__ ))  __attribute__  (( __noreturn__ )) ; 
#line 564 "/usr/include/stdlib.h"
extern char *getenv(const char *__name) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 530 "/usr/include/stdlib.h" 3 4
# 578 "/usr/include/stdlib.h" 3 4
extern int putenv(char *__string) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 585 "/usr/include/stdlib.h"
extern int setenv(const char *__name, const char *__value, int __replace) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
#line 588 "/usr/include/stdlib.h"
extern int unsetenv(const char *__name) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 595 "/usr/include/stdlib.h"
extern int clearenv(void ) __attribute__  (( __nothrow__ )) ; 
#line 606 "/usr/include/stdlib.h"
extern char *mktemp(char *__template) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 606 "/usr/include/stdlib.h" 3 4
# 620 "/usr/include/stdlib.h" 3 4
extern int mkstemp(char *__template) __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 642 "/usr/include/stdlib.h"
extern int mkstemps(char *__template, int __suffixlen) __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 642 "/usr/include/stdlib.h" 3 4
# 663 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp(char *__template) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
#line 717 "/usr/include/stdlib.h"
extern int system(const char *__command); 
# 712 "/usr/include/stdlib.h" 3 4
# 735 "/usr/include/stdlib.h" 3 4
extern char *realpath(const char *__restrict __name, char *__restrict __resolved) __attribute__  (( __nothrow__ )) ; 
#line 742 "/usr/include/stdlib.h"
typedef int (*__compar_fn_t)(const void *, const void *); 
#line 757 "/usr/include/stdlib.h"
extern void *bsearch(const void *__key, const void *__base,  size_t __nmemb,  size_t __size,  __compar_fn_t __compar) __attribute__  (( __nonnull__ ( 1, 2, 5 )  )) ; 
#line 766 "/usr/include/stdlib.h"
extern void qsort(void *__base,  size_t __nmemb,  size_t __size,  __compar_fn_t __compar) __attribute__  (( __nonnull__ ( 1, 4 )  )) ; 
# 752 "/usr/include/stdlib.h" 3 4
# 775 "/usr/include/stdlib.h" 3 4
extern int abs(int __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 776 "/usr/include/stdlib.h"
extern long int labs(long int __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 781 "/usr/include/stdlib.h"
 __extension__ extern long long int llabs(long long int __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 790 "/usr/include/stdlib.h"
extern  div_t div(int __numer, int __denom) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 792 "/usr/include/stdlib.h"
extern  ldiv_t ldiv(long int __numer, long int __denom) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 799 "/usr/include/stdlib.h"
 __extension__ extern  lldiv_t lldiv(long long int __numer, long long int __denom) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 813 "/usr/include/stdlib.h"
extern char *ecvt(double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4 )  )) ; 
#line 819 "/usr/include/stdlib.h"
extern char *fcvt(double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4 )  )) ; 
#line 825 "/usr/include/stdlib.h"
extern char *gcvt(double __value, int __ndigit, char *__buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3 )  )) ; 
#line 832 "/usr/include/stdlib.h"
extern char *qecvt(long double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4 )  )) ; 
#line 835 "/usr/include/stdlib.h"
extern char *qfcvt(long double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4 )  )) ; 
#line 837 "/usr/include/stdlib.h"
extern char *qgcvt(long double __value, int __ndigit, char *__buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3 )  )) ; 
#line 844 "/usr/include/stdlib.h"
extern int ecvt_r(double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign, char *__restrict __buf,  size_t __len) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4, 5 )  )) ; 
#line 847 "/usr/include/stdlib.h"
extern int fcvt_r(double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign, char *__restrict __buf,  size_t __len) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4, 5 )  )) ; 
#line 852 "/usr/include/stdlib.h"
extern int qecvt_r(long double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign, char *__restrict __buf,  size_t __len) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4, 5 )  )) ; 
#line 856 "/usr/include/stdlib.h"
extern int qfcvt_r(long double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign, char *__restrict __buf,  size_t __len) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4, 5 )  )) ; 
#line 863 "/usr/include/stdlib.h"
extern int mblen(const char *__s,  size_t __n) __attribute__  (( __nothrow__ )) ; 
#line 867 "/usr/include/stdlib.h"
extern int mbtowc( wchar_t *__restrict __pwc, const char *__restrict __s,  size_t __n) __attribute__  (( __nothrow__ )) ; 
#line 870 "/usr/include/stdlib.h"
extern int wctomb(char *__s,  wchar_t __wchar) __attribute__  (( __nothrow__ )) ; 
#line 875 "/usr/include/stdlib.h"
extern  size_t mbstowcs( wchar_t *__restrict __pwcs, const char *__restrict __s,  size_t __n) __attribute__  (( __nothrow__ )) ; 
#line 879 "/usr/include/stdlib.h"
extern  size_t wcstombs(char *__restrict __s, const  wchar_t *__restrict __pwcs,  size_t __n) __attribute__  (( __nothrow__ )) ; 
#line 888 "/usr/include/stdlib.h"
extern int rpmatch(const char *__response) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 812 "/usr/include/stdlib.h" 3 4
# 902 "/usr/include/stdlib.h" 3 4
extern int getsubopt(char **__restrict __optionp, char *const *__restrict __tokens, char **__restrict __valuep) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2, 3 )  )) ; 
#line 952 "/usr/include/stdlib.h"
extern int getloadavg(double __loadavg[], int __nelem) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 
# 951 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 1 3 4
# 956 "/usr/include/stdlib.h" 2 3 4
# 968 "/usr/include/stdlib.h" 3 4
# 6 "patricia_advice.c" 2
# 1 "/usr/include/math.h" 1 3 4
# 28 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/huge_val.h" 1 3 4
# 33 "/usr/include/math.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/huge_valf.h" 1 3 4
# 35 "/usr/include/math.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/huge_vall.h" 1 3 4
# 36 "/usr/include/math.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/inf.h" 1 3 4
# 39 "/usr/include/math.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/nan.h" 1 3 4
# 42 "/usr/include/math.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" 3 4
typedef float float_t; 
#line 29 "/usr/include/x86_64-linux-gnu/bits/mathdef.h"
typedef double double_t; 
# 46 "/usr/include/math.h" 2 3 4
# 69 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
# 54 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern double acos(double __x) __attribute__  (( __nothrow__ )) ; 
#line 54 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __acos(double __x) __attribute__  (( __nothrow__ )) ; 
#line 56 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double asin(double __x) __attribute__  (( __nothrow__ )) ; 
#line 56 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __asin(double __x) __attribute__  (( __nothrow__ )) ; 
#line 58 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double atan(double __x) __attribute__  (( __nothrow__ )) ; 
#line 58 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __atan(double __x) __attribute__  (( __nothrow__ )) ; 
#line 60 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double atan2(double __y, double __x) __attribute__  (( __nothrow__ )) ; 
#line 60 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __atan2(double __y, double __x) __attribute__  (( __nothrow__ )) ; 
#line 63 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double cos(double __x) __attribute__  (( __nothrow__ )) ; 
#line 63 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __cos(double __x) __attribute__  (( __nothrow__ )) ; 
#line 65 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double sin(double __x) __attribute__  (( __nothrow__ )) ; 
#line 65 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __sin(double __x) __attribute__  (( __nothrow__ )) ; 
#line 67 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double tan(double __x) __attribute__  (( __nothrow__ )) ; 
#line 67 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __tan(double __x) __attribute__  (( __nothrow__ )) ; 
#line 72 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double cosh(double __x) __attribute__  (( __nothrow__ )) ; 
#line 72 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __cosh(double __x) __attribute__  (( __nothrow__ )) ; 
#line 74 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double sinh(double __x) __attribute__  (( __nothrow__ )) ; 
#line 74 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __sinh(double __x) __attribute__  (( __nothrow__ )) ; 
#line 76 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double tanh(double __x) __attribute__  (( __nothrow__ )) ; 
#line 76 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __tanh(double __x) __attribute__  (( __nothrow__ )) ; 
#line 88 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double acosh(double __x) __attribute__  (( __nothrow__ )) ; 
#line 88 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __acosh(double __x) __attribute__  (( __nothrow__ )) ; 
#line 90 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double asinh(double __x) __attribute__  (( __nothrow__ )) ; 
#line 90 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __asinh(double __x) __attribute__  (( __nothrow__ )) ; 
#line 92 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double atanh(double __x) __attribute__  (( __nothrow__ )) ; 
#line 92 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __atanh(double __x) __attribute__  (( __nothrow__ )) ; 
#line 100 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double exp(double __x) __attribute__  (( __nothrow__ )) ; 
#line 100 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __exp(double __x) __attribute__  (( __nothrow__ )) ; 
#line 103 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double frexp(double __x, int *__exponent) __attribute__  (( __nothrow__ )) ; 
#line 103 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __frexp(double __x, int *__exponent) __attribute__  (( __nothrow__ )) ; 
#line 106 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double ldexp(double __x, int __exponent) __attribute__  (( __nothrow__ )) ; 
#line 106 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __ldexp(double __x, int __exponent) __attribute__  (( __nothrow__ )) ; 
#line 109 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double log(double __x) __attribute__  (( __nothrow__ )) ; 
#line 109 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __log(double __x) __attribute__  (( __nothrow__ )) ; 
#line 112 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double log10(double __x) __attribute__  (( __nothrow__ )) ; 
#line 112 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __log10(double __x) __attribute__  (( __nothrow__ )) ; 
#line 115 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double modf(double __x, double *__iptr) __attribute__  (( __nothrow__ )) ; 
#line 115 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __modf(double __x, double *__iptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
# 86 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
# 128 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern double expm1(double __x) __attribute__  (( __nothrow__ )) ; 
#line 128 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __expm1(double __x) __attribute__  (( __nothrow__ )) ; 
#line 131 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double log1p(double __x) __attribute__  (( __nothrow__ )) ; 
#line 131 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __log1p(double __x) __attribute__  (( __nothrow__ )) ; 
#line 134 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double logb(double __x) __attribute__  (( __nothrow__ )) ; 
#line 134 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __logb(double __x) __attribute__  (( __nothrow__ )) ; 
#line 141 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double exp2(double __x) __attribute__  (( __nothrow__ )) ; 
#line 141 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __exp2(double __x) __attribute__  (( __nothrow__ )) ; 
#line 144 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double log2(double __x) __attribute__  (( __nothrow__ )) ; 
#line 144 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __log2(double __x) __attribute__  (( __nothrow__ )) ; 
#line 153 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double pow(double __x, double __y) __attribute__  (( __nothrow__ )) ; 
#line 153 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __pow(double __x, double __y) __attribute__  (( __nothrow__ )) ; 
#line 156 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double sqrt(double __x) __attribute__  (( __nothrow__ )) ; 
#line 156 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __sqrt(double __x) __attribute__  (( __nothrow__ )) ; 
#line 162 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double hypot(double __x, double __y) __attribute__  (( __nothrow__ )) ; 
#line 162 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __hypot(double __x, double __y) __attribute__  (( __nothrow__ )) ; 
#line 169 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double cbrt(double __x) __attribute__  (( __nothrow__ )) ; 
#line 169 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __cbrt(double __x) __attribute__  (( __nothrow__ )) ; 
#line 178 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double ceil(double __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 178 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __ceil(double __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 181 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double fabs(double __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 181 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __fabs(double __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 184 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double floor(double __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 184 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __floor(double __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 187 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double fmod(double __x, double __y) __attribute__  (( __nothrow__ )) ; 
#line 187 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __fmod(double __x, double __y) __attribute__  (( __nothrow__ )) ; 
#line 192 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int __isinf(double __value) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 195 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int __finite(double __value) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 201 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int isinf(double __value) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 204 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int finite(double __value) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 207 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double drem(double __x, double __y) __attribute__  (( __nothrow__ )) ; 
#line 207 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __drem(double __x, double __y) __attribute__  (( __nothrow__ )) ; 
#line 211 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double significand(double __x) __attribute__  (( __nothrow__ )) ; 
#line 211 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __significand(double __x) __attribute__  (( __nothrow__ )) ; 
#line 217 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double copysign(double __x, double __y) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 217 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __copysign(double __x, double __y) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 224 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double nan(const char *__tagb) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 224 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __nan(const char *__tagb) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 230 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int __isnan(double __value) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 234 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int isnan(double __value) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 237 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double j0(double ) __attribute__  (( __nothrow__ )) ; 
#line 237 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __j0(double ) __attribute__  (( __nothrow__ )) ; 
#line 238 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double j1(double ) __attribute__  (( __nothrow__ )) ; 
#line 238 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __j1(double ) __attribute__  (( __nothrow__ )) ; 
#line 239 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double jn(int , double ) __attribute__  (( __nothrow__ )) ; 
#line 239 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __jn(int , double ) __attribute__  (( __nothrow__ )) ; 
#line 240 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double y0(double ) __attribute__  (( __nothrow__ )) ; 
#line 240 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __y0(double ) __attribute__  (( __nothrow__ )) ; 
#line 241 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double y1(double ) __attribute__  (( __nothrow__ )) ; 
#line 241 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __y1(double ) __attribute__  (( __nothrow__ )) ; 
#line 242 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double yn(int , double ) __attribute__  (( __nothrow__ )) ; 
#line 242 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __yn(int , double ) __attribute__  (( __nothrow__ )) ; 
#line 249 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double erf(double ) __attribute__  (( __nothrow__ )) ; 
#line 249 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __erf(double ) __attribute__  (( __nothrow__ )) ; 
#line 250 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double erfc(double ) __attribute__  (( __nothrow__ )) ; 
#line 250 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __erfc(double ) __attribute__  (( __nothrow__ )) ; 
#line 251 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double lgamma(double ) __attribute__  (( __nothrow__ )) ; 
#line 251 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __lgamma(double ) __attribute__  (( __nothrow__ )) ; 
#line 258 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double tgamma(double ) __attribute__  (( __nothrow__ )) ; 
#line 258 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __tgamma(double ) __attribute__  (( __nothrow__ )) ; 
#line 264 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double gamma(double ) __attribute__  (( __nothrow__ )) ; 
#line 264 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __gamma(double ) __attribute__  (( __nothrow__ )) ; 
#line 271 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double lgamma_r(double , int *__signgamp) __attribute__  (( __nothrow__ )) ; 
#line 271 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __lgamma_r(double , int *__signgamp) __attribute__  (( __nothrow__ )) ; 
#line 279 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double rint(double __x) __attribute__  (( __nothrow__ )) ; 
#line 279 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __rint(double __x) __attribute__  (( __nothrow__ )) ; 
#line 282 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double nextafter(double __x, double __y) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 282 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __nextafter(double __x, double __y) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 284 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double nexttoward(double __x, long double __y) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 284 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __nexttoward(double __x, long double __y) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 288 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double remainder(double __x, double __y) __attribute__  (( __nothrow__ )) ; 
#line 288 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __remainder(double __x, double __y) __attribute__  (( __nothrow__ )) ; 
#line 292 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double scalbn(double __x, int __n) __attribute__  (( __nothrow__ )) ; 
#line 292 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __scalbn(double __x, int __n) __attribute__  (( __nothrow__ )) ; 
#line 296 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int ilogb(double __x) __attribute__  (( __nothrow__ )) ; 
#line 296 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int __ilogb(double __x) __attribute__  (( __nothrow__ )) ; 
#line 301 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double scalbln(double __x, long int __n) __attribute__  (( __nothrow__ )) ; 
#line 301 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __scalbln(double __x, long int __n) __attribute__  (( __nothrow__ )) ; 
#line 305 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double nearbyint(double __x) __attribute__  (( __nothrow__ )) ; 
#line 305 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __nearbyint(double __x) __attribute__  (( __nothrow__ )) ; 
#line 309 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double round(double __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 309 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __round(double __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 313 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double trunc(double __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 313 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __trunc(double __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 318 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double remquo(double __x, double __y, int *__quo) __attribute__  (( __nothrow__ )) ; 
#line 318 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __remquo(double __x, double __y, int *__quo) __attribute__  (( __nothrow__ )) ; 
#line 325 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long int lrint(double __x) __attribute__  (( __nothrow__ )) ; 
#line 325 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long int __lrint(double __x) __attribute__  (( __nothrow__ )) ; 
#line 327 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
 __extension__ extern long long int llrint(double __x) __attribute__  (( __nothrow__ )) ; 
#line 327 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long long int __llrint(double __x) __attribute__  (( __nothrow__ )) ; 
#line 331 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long int lround(double __x) __attribute__  (( __nothrow__ )) ; 
#line 331 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long int __lround(double __x) __attribute__  (( __nothrow__ )) ; 
#line 333 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
 __extension__ extern long long int llround(double __x) __attribute__  (( __nothrow__ )) ; 
#line 333 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long long int __llround(double __x) __attribute__  (( __nothrow__ )) ; 
#line 337 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double fdim(double __x, double __y) __attribute__  (( __nothrow__ )) ; 
#line 337 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __fdim(double __x, double __y) __attribute__  (( __nothrow__ )) ; 
#line 340 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double fmax(double __x, double __y) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 340 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __fmax(double __x, double __y) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 343 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double fmin(double __x, double __y) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 343 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __fmin(double __x, double __y) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 348 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int __fpclassify(double __value) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 352 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int __signbit(double __value) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 356 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double fma(double __x, double __y, double __z) __attribute__  (( __nothrow__ )) ; 
#line 356 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __fma(double __x, double __y, double __z) __attribute__  (( __nothrow__ )) ; 
#line 371 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double scalb(double __x, double __n) __attribute__  (( __nothrow__ )) ; 
#line 371 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern double __scalb(double __x, double __n) __attribute__  (( __nothrow__ )) ; 
# 371 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
# 70 "/usr/include/math.h" 2 3 4
# 88 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
# 54 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern float acosf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 54 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __acosf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 56 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float asinf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 56 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __asinf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 58 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float atanf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 58 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __atanf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 60 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float atan2f(float __y, float __x) __attribute__  (( __nothrow__ )) ; 
#line 60 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __atan2f(float __y, float __x) __attribute__  (( __nothrow__ )) ; 
#line 63 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float cosf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 63 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __cosf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 65 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float sinf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 65 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __sinf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 67 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float tanf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 67 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __tanf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 72 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float coshf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 72 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __coshf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 74 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float sinhf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 74 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __sinhf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 76 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float tanhf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 76 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __tanhf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 88 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float acoshf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 88 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __acoshf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 90 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float asinhf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 90 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __asinhf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 92 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float atanhf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 92 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __atanhf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 100 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float expf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 100 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __expf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 103 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float frexpf(float __x, int *__exponent) __attribute__  (( __nothrow__ )) ; 
#line 103 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __frexpf(float __x, int *__exponent) __attribute__  (( __nothrow__ )) ; 
#line 106 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float ldexpf(float __x, int __exponent) __attribute__  (( __nothrow__ )) ; 
#line 106 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __ldexpf(float __x, int __exponent) __attribute__  (( __nothrow__ )) ; 
#line 109 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float logf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 109 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __logf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 112 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float log10f(float __x) __attribute__  (( __nothrow__ )) ; 
#line 112 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __log10f(float __x) __attribute__  (( __nothrow__ )) ; 
#line 115 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float modff(float __x, float *__iptr) __attribute__  (( __nothrow__ )) ; 
#line 115 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __modff(float __x, float *__iptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
# 86 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
# 128 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern float expm1f(float __x) __attribute__  (( __nothrow__ )) ; 
#line 128 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __expm1f(float __x) __attribute__  (( __nothrow__ )) ; 
#line 131 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float log1pf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 131 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __log1pf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 134 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float logbf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 134 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __logbf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 141 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float exp2f(float __x) __attribute__  (( __nothrow__ )) ; 
#line 141 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __exp2f(float __x) __attribute__  (( __nothrow__ )) ; 
#line 144 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float log2f(float __x) __attribute__  (( __nothrow__ )) ; 
#line 144 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __log2f(float __x) __attribute__  (( __nothrow__ )) ; 
#line 153 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float powf(float __x, float __y) __attribute__  (( __nothrow__ )) ; 
#line 153 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __powf(float __x, float __y) __attribute__  (( __nothrow__ )) ; 
#line 156 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float sqrtf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 156 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __sqrtf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 162 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float hypotf(float __x, float __y) __attribute__  (( __nothrow__ )) ; 
#line 162 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __hypotf(float __x, float __y) __attribute__  (( __nothrow__ )) ; 
#line 169 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float cbrtf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 169 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __cbrtf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 178 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float ceilf(float __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 178 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __ceilf(float __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 181 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float fabsf(float __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 181 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __fabsf(float __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 184 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float floorf(float __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 184 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __floorf(float __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 187 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float fmodf(float __x, float __y) __attribute__  (( __nothrow__ )) ; 
#line 187 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __fmodf(float __x, float __y) __attribute__  (( __nothrow__ )) ; 
#line 192 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int __isinff(float __value) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 195 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int __finitef(float __value) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 201 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int isinff(float __value) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 204 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int finitef(float __value) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 207 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float dremf(float __x, float __y) __attribute__  (( __nothrow__ )) ; 
#line 207 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __dremf(float __x, float __y) __attribute__  (( __nothrow__ )) ; 
#line 211 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float significandf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 211 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __significandf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 217 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float copysignf(float __x, float __y) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 217 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __copysignf(float __x, float __y) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 224 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float nanf(const char *__tagb) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 224 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __nanf(const char *__tagb) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 230 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int __isnanf(float __value) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 234 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int isnanf(float __value) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 237 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float j0f(float ) __attribute__  (( __nothrow__ )) ; 
#line 237 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __j0f(float ) __attribute__  (( __nothrow__ )) ; 
#line 238 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float j1f(float ) __attribute__  (( __nothrow__ )) ; 
#line 238 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __j1f(float ) __attribute__  (( __nothrow__ )) ; 
#line 239 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float jnf(int , float ) __attribute__  (( __nothrow__ )) ; 
#line 239 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __jnf(int , float ) __attribute__  (( __nothrow__ )) ; 
#line 240 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float y0f(float ) __attribute__  (( __nothrow__ )) ; 
#line 240 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __y0f(float ) __attribute__  (( __nothrow__ )) ; 
#line 241 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float y1f(float ) __attribute__  (( __nothrow__ )) ; 
#line 241 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __y1f(float ) __attribute__  (( __nothrow__ )) ; 
#line 242 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float ynf(int , float ) __attribute__  (( __nothrow__ )) ; 
#line 242 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __ynf(int , float ) __attribute__  (( __nothrow__ )) ; 
#line 249 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float erff(float ) __attribute__  (( __nothrow__ )) ; 
#line 249 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __erff(float ) __attribute__  (( __nothrow__ )) ; 
#line 250 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float erfcf(float ) __attribute__  (( __nothrow__ )) ; 
#line 250 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __erfcf(float ) __attribute__  (( __nothrow__ )) ; 
#line 251 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float lgammaf(float ) __attribute__  (( __nothrow__ )) ; 
#line 251 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __lgammaf(float ) __attribute__  (( __nothrow__ )) ; 
#line 258 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float tgammaf(float ) __attribute__  (( __nothrow__ )) ; 
#line 258 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __tgammaf(float ) __attribute__  (( __nothrow__ )) ; 
#line 264 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float gammaf(float ) __attribute__  (( __nothrow__ )) ; 
#line 264 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __gammaf(float ) __attribute__  (( __nothrow__ )) ; 
#line 271 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float lgammaf_r(float , int *__signgamp) __attribute__  (( __nothrow__ )) ; 
#line 271 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __lgammaf_r(float , int *__signgamp) __attribute__  (( __nothrow__ )) ; 
#line 279 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float rintf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 279 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __rintf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 282 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float nextafterf(float __x, float __y) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 282 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __nextafterf(float __x, float __y) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 284 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float nexttowardf(float __x, long double __y) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 284 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __nexttowardf(float __x, long double __y) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 288 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float remainderf(float __x, float __y) __attribute__  (( __nothrow__ )) ; 
#line 288 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __remainderf(float __x, float __y) __attribute__  (( __nothrow__ )) ; 
#line 292 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float scalbnf(float __x, int __n) __attribute__  (( __nothrow__ )) ; 
#line 292 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __scalbnf(float __x, int __n) __attribute__  (( __nothrow__ )) ; 
#line 296 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int ilogbf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 296 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int __ilogbf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 301 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float scalblnf(float __x, long int __n) __attribute__  (( __nothrow__ )) ; 
#line 301 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __scalblnf(float __x, long int __n) __attribute__  (( __nothrow__ )) ; 
#line 305 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float nearbyintf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 305 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __nearbyintf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 309 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float roundf(float __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 309 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __roundf(float __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 313 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float truncf(float __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 313 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __truncf(float __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 318 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float remquof(float __x, float __y, int *__quo) __attribute__  (( __nothrow__ )) ; 
#line 318 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __remquof(float __x, float __y, int *__quo) __attribute__  (( __nothrow__ )) ; 
#line 325 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long int lrintf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 325 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long int __lrintf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 327 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
 __extension__ extern long long int llrintf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 327 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long long int __llrintf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 331 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long int lroundf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 331 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long int __lroundf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 333 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
 __extension__ extern long long int llroundf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 333 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long long int __llroundf(float __x) __attribute__  (( __nothrow__ )) ; 
#line 337 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float fdimf(float __x, float __y) __attribute__  (( __nothrow__ )) ; 
#line 337 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __fdimf(float __x, float __y) __attribute__  (( __nothrow__ )) ; 
#line 340 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float fmaxf(float __x, float __y) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 340 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __fmaxf(float __x, float __y) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 343 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float fminf(float __x, float __y) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 343 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __fminf(float __x, float __y) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 348 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int __fpclassifyf(float __value) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 352 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int __signbitf(float __value) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 356 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float fmaf(float __x, float __y, float __z) __attribute__  (( __nothrow__ )) ; 
#line 356 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __fmaf(float __x, float __y, float __z) __attribute__  (( __nothrow__ )) ; 
#line 371 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float scalbf(float __x, float __n) __attribute__  (( __nothrow__ )) ; 
#line 371 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern float __scalbf(float __x, float __n) __attribute__  (( __nothrow__ )) ; 
# 371 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
# 89 "/usr/include/math.h" 2 3 4
# 132 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
# 54 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern long double acosl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 54 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __acosl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 56 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double asinl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 56 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __asinl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 58 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double atanl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 58 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __atanl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 60 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double atan2l(long double __y, long double __x) __attribute__  (( __nothrow__ )) ; 
#line 60 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __atan2l(long double __y, long double __x) __attribute__  (( __nothrow__ )) ; 
#line 63 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double cosl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 63 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __cosl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 65 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double sinl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 65 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __sinl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 67 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double tanl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 67 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __tanl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 72 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double coshl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 72 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __coshl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 74 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double sinhl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 74 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __sinhl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 76 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double tanhl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 76 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __tanhl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 88 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double acoshl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 88 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __acoshl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 90 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double asinhl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 90 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __asinhl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 92 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double atanhl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 92 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __atanhl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 100 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double expl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 100 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __expl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 103 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double frexpl(long double __x, int *__exponent) __attribute__  (( __nothrow__ )) ; 
#line 103 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __frexpl(long double __x, int *__exponent) __attribute__  (( __nothrow__ )) ; 
#line 106 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double ldexpl(long double __x, int __exponent) __attribute__  (( __nothrow__ )) ; 
#line 106 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __ldexpl(long double __x, int __exponent) __attribute__  (( __nothrow__ )) ; 
#line 109 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double logl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 109 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __logl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 112 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double log10l(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 112 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __log10l(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 115 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double modfl(long double __x, long double *__iptr) __attribute__  (( __nothrow__ )) ; 
#line 115 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __modfl(long double __x, long double *__iptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 
# 86 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
# 128 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern long double expm1l(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 128 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __expm1l(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 131 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double log1pl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 131 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __log1pl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 134 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double logbl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 134 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __logbl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 141 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double exp2l(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 141 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __exp2l(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 144 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double log2l(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 144 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __log2l(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 153 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double powl(long double __x, long double __y) __attribute__  (( __nothrow__ )) ; 
#line 153 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __powl(long double __x, long double __y) __attribute__  (( __nothrow__ )) ; 
#line 156 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double sqrtl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 156 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __sqrtl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 162 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double hypotl(long double __x, long double __y) __attribute__  (( __nothrow__ )) ; 
#line 162 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __hypotl(long double __x, long double __y) __attribute__  (( __nothrow__ )) ; 
#line 169 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double cbrtl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 169 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __cbrtl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 178 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double ceill(long double __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 178 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __ceill(long double __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 181 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double fabsl(long double __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 181 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __fabsl(long double __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 184 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double floorl(long double __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 184 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __floorl(long double __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 187 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double fmodl(long double __x, long double __y) __attribute__  (( __nothrow__ )) ; 
#line 187 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __fmodl(long double __x, long double __y) __attribute__  (( __nothrow__ )) ; 
#line 192 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int __isinfl(long double __value) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 195 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int __finitel(long double __value) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 201 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int isinfl(long double __value) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 204 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int finitel(long double __value) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 207 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double dreml(long double __x, long double __y) __attribute__  (( __nothrow__ )) ; 
#line 207 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __dreml(long double __x, long double __y) __attribute__  (( __nothrow__ )) ; 
#line 211 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double significandl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 211 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __significandl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 217 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double copysignl(long double __x, long double __y) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 217 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __copysignl(long double __x, long double __y) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 224 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double nanl(const char *__tagb) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 224 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __nanl(const char *__tagb) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 230 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int __isnanl(long double __value) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 234 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int isnanl(long double __value) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 237 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double j0l(long double ) __attribute__  (( __nothrow__ )) ; 
#line 237 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __j0l(long double ) __attribute__  (( __nothrow__ )) ; 
#line 238 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double j1l(long double ) __attribute__  (( __nothrow__ )) ; 
#line 238 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __j1l(long double ) __attribute__  (( __nothrow__ )) ; 
#line 239 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double jnl(int , long double ) __attribute__  (( __nothrow__ )) ; 
#line 239 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __jnl(int , long double ) __attribute__  (( __nothrow__ )) ; 
#line 240 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double y0l(long double ) __attribute__  (( __nothrow__ )) ; 
#line 240 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __y0l(long double ) __attribute__  (( __nothrow__ )) ; 
#line 241 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double y1l(long double ) __attribute__  (( __nothrow__ )) ; 
#line 241 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __y1l(long double ) __attribute__  (( __nothrow__ )) ; 
#line 242 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double ynl(int , long double ) __attribute__  (( __nothrow__ )) ; 
#line 242 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __ynl(int , long double ) __attribute__  (( __nothrow__ )) ; 
#line 249 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double erfl(long double ) __attribute__  (( __nothrow__ )) ; 
#line 249 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __erfl(long double ) __attribute__  (( __nothrow__ )) ; 
#line 250 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double erfcl(long double ) __attribute__  (( __nothrow__ )) ; 
#line 250 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __erfcl(long double ) __attribute__  (( __nothrow__ )) ; 
#line 251 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double lgammal(long double ) __attribute__  (( __nothrow__ )) ; 
#line 251 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __lgammal(long double ) __attribute__  (( __nothrow__ )) ; 
#line 258 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double tgammal(long double ) __attribute__  (( __nothrow__ )) ; 
#line 258 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __tgammal(long double ) __attribute__  (( __nothrow__ )) ; 
#line 264 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double gammal(long double ) __attribute__  (( __nothrow__ )) ; 
#line 264 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __gammal(long double ) __attribute__  (( __nothrow__ )) ; 
#line 271 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double lgammal_r(long double , int *__signgamp) __attribute__  (( __nothrow__ )) ; 
#line 271 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __lgammal_r(long double , int *__signgamp) __attribute__  (( __nothrow__ )) ; 
#line 279 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double rintl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 279 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __rintl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 282 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double nextafterl(long double __x, long double __y) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 282 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __nextafterl(long double __x, long double __y) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 284 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double nexttowardl(long double __x, long double __y) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 284 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __nexttowardl(long double __x, long double __y) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 288 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double remainderl(long double __x, long double __y) __attribute__  (( __nothrow__ )) ; 
#line 288 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __remainderl(long double __x, long double __y) __attribute__  (( __nothrow__ )) ; 
#line 292 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double scalbnl(long double __x, int __n) __attribute__  (( __nothrow__ )) ; 
#line 292 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __scalbnl(long double __x, int __n) __attribute__  (( __nothrow__ )) ; 
#line 296 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int ilogbl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 296 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int __ilogbl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 301 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double scalblnl(long double __x, long int __n) __attribute__  (( __nothrow__ )) ; 
#line 301 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __scalblnl(long double __x, long int __n) __attribute__  (( __nothrow__ )) ; 
#line 305 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double nearbyintl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 305 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __nearbyintl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 309 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double roundl(long double __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 309 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __roundl(long double __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 313 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double truncl(long double __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 313 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __truncl(long double __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 318 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double remquol(long double __x, long double __y, int *__quo) __attribute__  (( __nothrow__ )) ; 
#line 318 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __remquol(long double __x, long double __y, int *__quo) __attribute__  (( __nothrow__ )) ; 
#line 325 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long int lrintl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 325 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long int __lrintl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 327 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
 __extension__ extern long long int llrintl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 327 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long long int __llrintl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 331 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long int lroundl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 331 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long int __lroundl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 333 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
 __extension__ extern long long int llroundl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 333 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long long int __llroundl(long double __x) __attribute__  (( __nothrow__ )) ; 
#line 337 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double fdiml(long double __x, long double __y) __attribute__  (( __nothrow__ )) ; 
#line 337 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __fdiml(long double __x, long double __y) __attribute__  (( __nothrow__ )) ; 
#line 340 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double fmaxl(long double __x, long double __y) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 340 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __fmaxl(long double __x, long double __y) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 343 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double fminl(long double __x, long double __y) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 343 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __fminl(long double __x, long double __y) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 348 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int __fpclassifyl(long double __value) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 352 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern int __signbitl(long double __value) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 356 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double fmal(long double __x, long double __y, long double __z) __attribute__  (( __nothrow__ )) ; 
#line 356 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __fmal(long double __x, long double __y, long double __z) __attribute__  (( __nothrow__ )) ; 
#line 371 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double scalbl(long double __x, long double __n) __attribute__  (( __nothrow__ )) ; 
#line 371 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
extern long double __scalbl(long double __x, long double __n) __attribute__  (( __nothrow__ )) ; 
# 371 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
# 133 "/usr/include/math.h" 2 3 4
# 148 "/usr/include/math.h" 3 4
extern int signgam; 
#line 206 "/usr/include/math.h"
enum {FP_NAN=0,FP_INFINITE=1,FP_ZERO=2,FP_SUBNORMAL=3,FP_NORMAL=4}; 
# 189 "/usr/include/math.h" 3 4
# 308 "/usr/include/math.h" 3 4
typedef enum {_IEEE_=(-1),_SVID_,_XOPEN_,_POSIX_,_ISOC_}_LIB_VERSION_TYPE; 
#line 313 "/usr/include/math.h"
extern  _LIB_VERSION_TYPE _LIB_VERSION; 
#line 334 "/usr/include/math.h"
struct exception {int type; char *name; double arg1; double arg2; double retval; 
}; 
#line 339 "/usr/include/math.h"
extern int matherr(struct exception *__exc); 
# 326 "/usr/include/math.h" 3 4
# 488 "/usr/include/math.h" 3 4
# 7 "patricia_advice.c" 2
# 1 "/usr/include/arpa/inet.h" 1 3 4
# 22 "/usr/include/arpa/inet.h" 3 4
# 1 "/usr/include/netinet/in.h" 1 3 4
# 22 "/usr/include/netinet/in.h" 3 4
# 1 "/usr/include/stdint.h" 1 3 4
# 26 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wchar.h" 1 3 4
# 27 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/stdint.h" 2 3 4
# 48 "/usr/include/stdint.h" 3 4
typedef unsigned char uint8_t; 
#line 49 "/usr/include/stdint.h"
typedef unsigned short int uint16_t; 
#line 51 "/usr/include/stdint.h"
typedef unsigned int uint32_t; 
#line 55 "/usr/include/stdint.h"
typedef unsigned long int uint64_t; 
#line 65 "/usr/include/stdint.h"
typedef signed char int_least8_t; 
#line 66 "/usr/include/stdint.h"
typedef short int int_least16_t; 
#line 67 "/usr/include/stdint.h"
typedef int int_least32_t; 
#line 69 "/usr/include/stdint.h"
typedef long int int_least64_t; 
#line 76 "/usr/include/stdint.h"
typedef unsigned char uint_least8_t; 
#line 77 "/usr/include/stdint.h"
typedef unsigned short int uint_least16_t; 
#line 78 "/usr/include/stdint.h"
typedef unsigned int uint_least32_t; 
#line 80 "/usr/include/stdint.h"
typedef unsigned long int uint_least64_t; 
# 65 "/usr/include/stdint.h" 3 4
# 90 "/usr/include/stdint.h" 3 4
typedef signed char int_fast8_t; 
#line 92 "/usr/include/stdint.h"
typedef long int int_fast16_t; 
#line 93 "/usr/include/stdint.h"
typedef long int int_fast32_t; 
#line 94 "/usr/include/stdint.h"
typedef long int int_fast64_t; 
#line 103 "/usr/include/stdint.h"
typedef unsigned char uint_fast8_t; 
#line 105 "/usr/include/stdint.h"
typedef unsigned long int uint_fast16_t; 
#line 106 "/usr/include/stdint.h"
typedef unsigned long int uint_fast32_t; 
#line 107 "/usr/include/stdint.h"
typedef unsigned long int uint_fast64_t; 
# 103 "/usr/include/stdint.h" 3 4
# 119 "/usr/include/stdint.h" 3 4
typedef long int intptr_t; 
#line 122 "/usr/include/stdint.h"
typedef unsigned long int uintptr_t; 
#line 134 "/usr/include/stdint.h"
typedef long int intmax_t; 
#line 135 "/usr/include/stdint.h"
typedef unsigned long int uintmax_t; 
# 134 "/usr/include/stdint.h" 3 4
# 23 "/usr/include/netinet/in.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/socket.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/uio.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/sys/uio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/uio.h" 1 3 4
# 47 "/usr/include/x86_64-linux-gnu/bits/uio.h" 3 4
struct iovec {void *iov_base;  size_t iov_len; 
}; 
# 29 "/usr/include/x86_64-linux-gnu/sys/uio.h" 2 3 4
# 40 "/usr/include/x86_64-linux-gnu/sys/uio.h" 3 4
extern  ssize_t readv(int __fd, const struct iovec *__iovec, int __count); 
#line 51 "/usr/include/x86_64-linux-gnu/sys/uio.h"
extern  ssize_t writev(int __fd, const struct iovec *__iovec, int __count); 
# 50 "/usr/include/x86_64-linux-gnu/sys/uio.h" 3 4
# 66 "/usr/include/x86_64-linux-gnu/sys/uio.h" 3 4
extern  ssize_t preadv(int __fd, const struct iovec *__iovec, int __count,  __off_t __offset); 
#line 78 "/usr/include/x86_64-linux-gnu/sys/uio.h"
extern  ssize_t pwritev(int __fd, const struct iovec *__iovec, int __count,  __off_t __offset); 
# 77 "/usr/include/x86_64-linux-gnu/sys/uio.h" 3 4
# 120 "/usr/include/x86_64-linux-gnu/sys/uio.h" 3 4
# 27 "/usr/include/x86_64-linux-gnu/sys/socket.h" 2 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stddef.h" 1 3 4
# 29 "/usr/include/x86_64-linux-gnu/sys/socket.h" 2 3 4
# 38 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/socket.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/socket.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stddef.h" 1 3 4
# 33 "/usr/include/x86_64-linux-gnu/bits/socket.h" 2 3 4
typedef  __socklen_t socklen_t; 
# 1 "/usr/include/x86_64-linux-gnu/bits/socket_type.h" 1 3 4
# 55 "/usr/include/x86_64-linux-gnu/bits/socket_type.h" 3 4
enum __socket_type {SOCK_STREAM=1,SOCK_DGRAM=2,SOCK_RAW=3,SOCK_RDM=4,SOCK_SEQPACKET=5,SOCK_DCCP=6,SOCK_PACKET=10,SOCK_CLOEXEC=02000000,SOCK_NONBLOCK=00004000}; 
# 39 "/usr/include/x86_64-linux-gnu/bits/socket.h" 2 3 4
# 146 "/usr/include/x86_64-linux-gnu/bits/socket.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/sockaddr.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/sockaddr.h" 3 4
typedef unsigned short int sa_family_t; 
#line 153 "/usr/include/x86_64-linux-gnu/bits/socket.h"
struct sockaddr { sa_family_t sa_family; char sa_data[14]; 
}; 
# 147 "/usr/include/x86_64-linux-gnu/bits/socket.h" 2 3 4
# 167 "/usr/include/x86_64-linux-gnu/bits/socket.h" 3 4
struct sockaddr_storage { sa_family_t ss_family; unsigned long int __ss_align; char __ss_padding[(128 - (2 * sizeof (unsigned long int )))]; 
}; 
#line 219 "/usr/include/x86_64-linux-gnu/bits/socket.h"
enum {MSG_OOB=0x01,MSG_PEEK=0x02,MSG_DONTROUTE=0x04,MSG_CTRUNC=0x08,MSG_PROXY=0x10,MSG_TRUNC=0x20,MSG_DONTWAIT=0x40,MSG_EOR=0x80,MSG_WAITALL=0x100,MSG_FIN=0x200,MSG_SYN=0x400,MSG_CONFIRM=0x800,MSG_RST=0x1000,MSG_ERRQUEUE=0x2000,MSG_NOSIGNAL=0x4000,MSG_MORE=0x8000,MSG_WAITFORONE=0x10000,MSG_FASTOPEN=0x20000000,MSG_CMSG_CLOEXEC=0x40000000}; 
#line 239 "/usr/include/x86_64-linux-gnu/bits/socket.h"
struct msghdr {void *msg_name;  socklen_t msg_namelen; struct iovec *msg_iov;  size_t msg_iovlen; void *msg_control;  size_t msg_controllen; int msg_flags; 
}; 
#line 254 "/usr/include/x86_64-linux-gnu/bits/socket.h"
struct cmsghdr { size_t cmsg_len; int cmsg_level; int cmsg_type;  __extension__ unsigned char __cmsg_data[]; 
}; 
#line 273 "/usr/include/x86_64-linux-gnu/bits/socket.h"
extern struct cmsghdr *__cmsg_nxthdr(struct msghdr *__mhdr, struct cmsghdr *__cmsg) __attribute__  (( __nothrow__ )) ; 
# 272 "/usr/include/x86_64-linux-gnu/bits/socket.h" 3 4
# 307 "/usr/include/x86_64-linux-gnu/bits/socket.h" 3 4
enum {SCM_RIGHTS=0x01}; 
# 345 "/usr/include/x86_64-linux-gnu/bits/socket.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/socket.h" 1 3 4
# 1 "/usr/include/asm-generic/socket.h" 1 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/sockios.h" 1 3 4
# 1 "/usr/include/asm-generic/sockios.h" 1 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/sockios.h" 2 3 4
# 5 "/usr/include/asm-generic/socket.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/socket.h" 2 3 4
# 346 "/usr/include/x86_64-linux-gnu/bits/socket.h" 2 3 4
# 383 "/usr/include/x86_64-linux-gnu/bits/socket.h" 3 4
struct linger {int l_onoff; int l_linger; 
}; 
#line 47 "/usr/include/x86_64-linux-gnu/sys/socket.h"
struct osockaddr {unsigned short int sa_family; unsigned char sa_data[14]; 
}; 
#line 60 "/usr/include/x86_64-linux-gnu/sys/socket.h"
enum {SHUT_RD=0,SHUT_WR,SHUT_RDWR}; 
# 39 "/usr/include/x86_64-linux-gnu/sys/socket.h" 2 3 4
# 113 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4
extern int socket(int __domain, int __type, int __protocol) __attribute__  (( __nothrow__ )) ; 
#line 120 "/usr/include/x86_64-linux-gnu/sys/socket.h"
extern int socketpair(int __domain, int __type, int __protocol, int __fds[2]) __attribute__  (( __nothrow__ )) ; 
#line 124 "/usr/include/x86_64-linux-gnu/sys/socket.h"
extern int bind(int __fd, const struct sockaddr *__addr,  socklen_t __len) __attribute__  (( __nothrow__ )) ; 
#line 128 "/usr/include/x86_64-linux-gnu/sys/socket.h"
extern int getsockname(int __fd, struct sockaddr *__restrict __addr,  socklen_t *__restrict __len) __attribute__  (( __nothrow__ )) ; 
#line 137 "/usr/include/x86_64-linux-gnu/sys/socket.h"
extern int connect(int __fd, const struct sockaddr *__addr,  socklen_t __len); 
#line 142 "/usr/include/x86_64-linux-gnu/sys/socket.h"
extern int getpeername(int __fd, struct sockaddr *__restrict __addr,  socklen_t *__restrict __len) __attribute__  (( __nothrow__ )) ; 
#line 149 "/usr/include/x86_64-linux-gnu/sys/socket.h"
extern  ssize_t send(int __fd, const void *__buf,  size_t __n, int __flags); 
#line 156 "/usr/include/x86_64-linux-gnu/sys/socket.h"
extern  ssize_t recv(int __fd, void *__buf,  size_t __n, int __flags); 
#line 165 "/usr/include/x86_64-linux-gnu/sys/socket.h"
extern  ssize_t sendto(int __fd, const void *__buf,  size_t __n, int __flags, const struct sockaddr *__addr,  socklen_t __addr_len); 
# 137 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4
# 176 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4
extern  ssize_t recvfrom(int __fd, void *__restrict __buf,  size_t __n, int __flags, struct sockaddr *__restrict __addr,  socklen_t *__restrict __addr_len); 
#line 185 "/usr/include/x86_64-linux-gnu/sys/socket.h"
extern  ssize_t sendmsg(int __fd, const struct msghdr *__message, int __flags); 
#line 202 "/usr/include/x86_64-linux-gnu/sys/socket.h"
extern  ssize_t recvmsg(int __fd, struct msghdr *__message, int __flags); 
# 202 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4
# 221 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4
extern int getsockopt(int __fd, int __level, int __optname, void *__restrict __optval,  socklen_t *__restrict __optlen) __attribute__  (( __nothrow__ )) ; 
#line 227 "/usr/include/x86_64-linux-gnu/sys/socket.h"
extern int setsockopt(int __fd, int __level, int __optname, const void *__optval,  socklen_t __optlen) __attribute__  (( __nothrow__ )) ; 
#line 233 "/usr/include/x86_64-linux-gnu/sys/socket.h"
extern int listen(int __fd, int __n) __attribute__  (( __nothrow__ )) ; 
#line 244 "/usr/include/x86_64-linux-gnu/sys/socket.h"
extern int accept(int __fd, struct sockaddr *__restrict __addr,  socklen_t *__restrict __addr_len); 
# 243 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4
# 261 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4
extern int shutdown(int __fd, int __how) __attribute__  (( __nothrow__ )) ; 
#line 266 "/usr/include/x86_64-linux-gnu/sys/socket.h"
extern int sockatmark(int __fd) __attribute__  (( __nothrow__ )) ; 
#line 274 "/usr/include/x86_64-linux-gnu/sys/socket.h"
extern int isfdtype(int __fd, int __fdtype) __attribute__  (( __nothrow__ )) ; 
# 283 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4
# 30 "/usr/include/netinet/in.h" 2 3 4
typedef  uint32_t in_addr_t; 
#line 34 "/usr/include/netinet/in.h"
struct in_addr { in_addr_t s_addr; 
}; 
# 1 "/usr/include/x86_64-linux-gnu/bits/in.h" 1 3 4
# 116 "/usr/include/x86_64-linux-gnu/bits/in.h" 3 4
struct ip_opts {struct in_addr ip_dst; char ip_opts[40]; 
}; 
#line 124 "/usr/include/x86_64-linux-gnu/bits/in.h"
struct ip_mreqn {struct in_addr imr_multiaddr; struct in_addr imr_address; int imr_ifindex; 
}; 
#line 132 "/usr/include/x86_64-linux-gnu/bits/in.h"
struct in_pktinfo {int ipi_ifindex; struct in_addr ipi_spec_dst; struct in_addr ipi_addr; 
}; 
#line 91 "/usr/include/netinet/in.h"
enum {IPPROTO_IP=0,IPPROTO_ICMP=1,IPPROTO_IGMP=2,IPPROTO_IPIP=4,IPPROTO_TCP=6,IPPROTO_EGP=8,IPPROTO_PUP=12,IPPROTO_UDP=17,IPPROTO_IDP=22,IPPROTO_TP=29,IPPROTO_DCCP=33,IPPROTO_IPV6=41,IPPROTO_RSVP=46,IPPROTO_GRE=47,IPPROTO_ESP=50,IPPROTO_AH=51,IPPROTO_MTP=92,IPPROTO_BEETPH=94,IPPROTO_ENCAP=98,IPPROTO_PIM=103,IPPROTO_COMP=108,IPPROTO_SCTP=132,IPPROTO_UDPLITE=136,IPPROTO_RAW=255,IPPROTO_MAX}; 
#line 113 "/usr/include/netinet/in.h"
enum {IPPROTO_HOPOPTS=0,IPPROTO_ROUTING=43,IPPROTO_FRAGMENT=44,IPPROTO_ICMPV6=58,IPPROTO_NONE=59,IPPROTO_DSTOPTS=60,IPPROTO_MH=135}; 
#line 117 "/usr/include/netinet/in.h"
typedef  uint16_t in_port_t; 
#line 157 "/usr/include/netinet/in.h"
enum {IPPORT_ECHO=7,IPPORT_DISCARD=9,IPPORT_SYSTAT=11,IPPORT_DAYTIME=13,IPPORT_NETSTAT=15,IPPORT_FTP=21,IPPORT_TELNET=23,IPPORT_SMTP=25,IPPORT_TIMESERVER=37,IPPORT_NAMESERVER=42,IPPORT_WHOIS=43,IPPORT_MTP=57,IPPORT_TFTP=69,IPPORT_RJE=77,IPPORT_FINGER=79,IPPORT_TTYLINK=87,IPPORT_SUPDUP=95,IPPORT_EXECSERVER=512,IPPORT_LOGINSERVER=513,IPPORT_CMDSERVER=514,IPPORT_EFSSERVER=520,IPPORT_BIFFUDP=512,IPPORT_WHOSERVER=513,IPPORT_ROUTESERVER=520,IPPORT_RESERVED=1024,IPPORT_USERRESERVED=5000}; 
# 38 "/usr/include/netinet/in.h" 2 3 4
# 224 "/usr/include/netinet/in.h" 3 4
struct in6_addr {union { uint8_t __u6_addr8[16];  uint16_t __u6_addr16[8];  uint32_t __u6_addr32[4]; 
}__in6_u; 
}; 
#line 227 "/usr/include/netinet/in.h"
extern const struct in6_addr in6addr_any; 
#line 228 "/usr/include/netinet/in.h"
extern const struct in6_addr in6addr_loopback; 
#line 248 "/usr/include/netinet/in.h"
struct sockaddr_in { sa_family_t sin_family;  in_port_t sin_port; struct in_addr sin_addr; unsigned char sin_zero[sizeof (struct sockaddr ) - (sizeof (unsigned short int )) - sizeof ( in_port_t ) - sizeof (struct in_addr )]; 
}; 
#line 259 "/usr/include/netinet/in.h"
struct sockaddr_in6 { sa_family_t sin6_family;  in_port_t sin6_port;  uint32_t sin6_flowinfo; struct in6_addr sin6_addr;  uint32_t sin6_scope_id; 
}; 
#line 271 "/usr/include/netinet/in.h"
struct ip_mreq {struct in_addr imr_multiaddr; struct in_addr imr_interface; 
}; 
#line 283 "/usr/include/netinet/in.h"
struct ip_mreq_source {struct in_addr imr_multiaddr; struct in_addr imr_interface; struct in_addr imr_sourceaddr; 
}; 
#line 295 "/usr/include/netinet/in.h"
struct ipv6_mreq {struct in6_addr ipv6mr_multiaddr; unsigned int ipv6mr_interface; 
}; 
#line 307 "/usr/include/netinet/in.h"
struct group_req { uint32_t gr_interface; struct sockaddr_storage gr_group; 
}; 
#line 319 "/usr/include/netinet/in.h"
struct group_source_req { uint32_t gsr_interface; struct sockaddr_storage gsr_group; struct sockaddr_storage gsr_source; 
}; 
#line 338 "/usr/include/netinet/in.h"
struct ip_msfilter {struct in_addr imsf_multiaddr; struct in_addr imsf_interface;  uint32_t imsf_fmode;  uint32_t imsf_numsrc; struct in_addr imsf_slist[1]; 
}; 
#line 359 "/usr/include/netinet/in.h"
struct group_filter { uint32_t gf_interface; struct sockaddr_storage gf_group;  uint32_t gf_fmode;  uint32_t gf_numsrc; struct sockaddr_storage gf_slist[1]; 
}; 
# 237 "/usr/include/netinet/in.h" 3 4
# 374 "/usr/include/netinet/in.h" 3 4
extern  uint32_t ntohl( uint32_t __netlong) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 376 "/usr/include/netinet/in.h"
extern  uint16_t ntohs( uint16_t __netshort) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 378 "/usr/include/netinet/in.h"
extern  uint32_t htonl( uint32_t __hostlong) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
#line 380 "/usr/include/netinet/in.h"
extern  uint16_t htons( uint16_t __hostshort) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 
# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 1 3 4
# 386 "/usr/include/netinet/in.h" 2 3 4
# 501 "/usr/include/netinet/in.h" 3 4
extern int bindresvport(int __sockfd, struct sockaddr_in *__sock_in) __attribute__  (( __nothrow__ )) ; 
#line 505 "/usr/include/netinet/in.h"
extern int bindresvport6(int __sockfd, struct sockaddr_in6 *__sock_in) __attribute__  (( __nothrow__ )) ; 
# 628 "/usr/include/netinet/in.h" 3 4
# 34 "/usr/include/arpa/inet.h" 2 3 4
extern  in_addr_t inet_addr(const char *__cp) __attribute__  (( __nothrow__ )) ; 
#line 37 "/usr/include/arpa/inet.h"
extern  in_addr_t inet_lnaof(struct in_addr __in) __attribute__  (( __nothrow__ )) ; 
#line 42 "/usr/include/arpa/inet.h"
extern struct in_addr inet_makeaddr( in_addr_t __net,  in_addr_t __host) __attribute__  (( __nothrow__ )) ; 
#line 45 "/usr/include/arpa/inet.h"
extern  in_addr_t inet_netof(struct in_addr __in) __attribute__  (( __nothrow__ )) ; 
#line 49 "/usr/include/arpa/inet.h"
extern  in_addr_t inet_network(const char *__cp) __attribute__  (( __nothrow__ )) ; 
#line 53 "/usr/include/arpa/inet.h"
extern char *inet_ntoa(struct in_addr __in) __attribute__  (( __nothrow__ )) ; 
#line 59 "/usr/include/arpa/inet.h"
extern int inet_pton(int __af, const char *__restrict __cp, void *__restrict __buf) __attribute__  (( __nothrow__ )) ; 
#line 66 "/usr/include/arpa/inet.h"
extern const char *inet_ntop(int __af, const void *__restrict __cp, char *__restrict __buf,  socklen_t __len) __attribute__  (( __nothrow__ )) ; 
#line 73 "/usr/include/arpa/inet.h"
extern int inet_aton(const char *__cp, struct in_addr *__inp) __attribute__  (( __nothrow__ )) ; 
#line 77 "/usr/include/arpa/inet.h"
extern char *inet_neta( in_addr_t __net, char *__buf,  size_t __len) __attribute__  (( __nothrow__ )) ; 
#line 83 "/usr/include/arpa/inet.h"
extern char *inet_net_ntop(int __af, const void *__cp, int __bits, char *__buf,  size_t __len) __attribute__  (( __nothrow__ )) ; 
#line 89 "/usr/include/arpa/inet.h"
extern int inet_net_pton(int __af, const char *__cp, void *__buf,  size_t __len) __attribute__  (( __nothrow__ )) ; 
#line 95 "/usr/include/arpa/inet.h"
extern unsigned int inet_nsap_addr(const char *__cp, unsigned char *__buf, int __len) __attribute__  (( __nothrow__ )) ; 
#line 100 "/usr/include/arpa/inet.h"
extern char *inet_nsap_ntoa(int __len, const unsigned char *__cp, char *__buf) __attribute__  (( __nothrow__ )) ; 
# 9 "patricia_advice.c" 2
# 1 "patricia.h" 1
# 37 "patricia.h" 
struct ptree_mask {unsigned long pm_mask; void *pm_data; 
}; 
#line 50 "patricia.h"
struct ptree {unsigned long p_key; struct ptree_mask *p_m; unsigned char p_mlen; char p_b; struct ptree *p_left; struct ptree *p_right; 
}; 
#line 53 "patricia.h"
extern struct ptree *pat_insert(struct ptree *n, struct ptree *head); 
#line 54 "patricia.h"
extern int pat_remove(struct ptree *n, struct ptree *head); 
#line 55 "patricia.h"
extern struct ptree *pat_search(unsigned long key, struct ptree *head); 
#line 16 "patricia_advice.c"
struct print_queue {int depth; struct ptree *p; struct print_queue *next; 
}; 
#line 19 "patricia_advice.c"
static void error()  
# 2229 "patricia_advice.c"
{



# 2234 "patricia_advice.c"
{

#line 20 "patricia_advice.c"
exit((-1)); 
# 2239 "patricia_advice.c"

}

# 2243 "patricia_advice.c"

}
 
#line 24 "patricia_advice.c"
static int tree_depth(struct ptree *phead, int father_pb)  
# 2249 "patricia_advice.c"
{
# 2251 "patricia_advice.c"
int retValue_acc;




# 2257 "patricia_advice.c"
{

#line 28 "patricia_advice.c"
if (father_pb >= (phead->p_b)){

# 2263 "patricia_advice.c"
retValue_acc = 0;
# 2265 "patricia_advice.c"
return (int )retValue_acc;
 }
#line 28 "patricia_advice.c"

#line 28 "patricia_advice.c"
int left = tree_depth((phead->p_left), (phead->p_b));
#line 29 "patricia_advice.c"

#line 29 "patricia_advice.c"
int right = tree_depth((phead->p_right), (phead->p_b));
#line 30 "patricia_advice.c"

# 2278 "patricia_advice.c"
retValue_acc = ((left > right?left:right)) + 1;
# 2280 "patricia_advice.c"
return (int )retValue_acc;
 
# 2283 "patricia_advice.c"

}

# 2287 "patricia_advice.c"
return (int )retValue_acc;

# 2290 "patricia_advice.c"

}
 
#line 34 "patricia_advice.c"
static void enqueue(struct print_queue *queue, struct print_queue *node)  
# 2296 "patricia_advice.c"
{



# 2301 "patricia_advice.c"
{

#line 35 "patricia_advice.c"
(((queue)?((void )(0)):__assert_fail("queue", "patricia_advice.c", 35, __PRETTY_FUNCTION__))); 
#line 36 "patricia_advice.c"
(((node)?((void )(0)):__assert_fail("node", "patricia_advice.c", 36, __PRETTY_FUNCTION__))); 
#line 38 "patricia_advice.c"

#line 38 "patricia_advice.c"
struct print_queue *end;
#line 39 "patricia_advice.c"
for(end = queue;(end->next) != (((void *)0));end = (end->next)) { ; } 
#line 41 "patricia_advice.c"
(end->next) = node; 
#line 42 "patricia_advice.c"
(node->next) = (((void *)0)); 
# 2318 "patricia_advice.c"

}

# 2322 "patricia_advice.c"

}
 
#line 46 "patricia_advice.c"
static void free_queue(struct print_queue *queue)  
# 2328 "patricia_advice.c"
{



# 2333 "patricia_advice.c"
{

#line 47 "patricia_advice.c"

#line 47 "patricia_advice.c"
struct print_queue *curr = queue;
#line 48 "patricia_advice.c"

#line 48 "patricia_advice.c"
struct print_queue *next;
#line 50 "patricia_advice.c"
while(curr) { { 
#line 52 "patricia_advice.c"
next = (curr->next); 
#line 53 "patricia_advice.c"
free(curr); 
#line 54 "patricia_advice.c"
curr = next; } } 
# 2352 "patricia_advice.c"

}

# 2356 "patricia_advice.c"

}
 
#line 59 "patricia_advice.c"
static struct print_queue *malloc_node(int depth, struct ptree *ptree_node)  
# 2362 "patricia_advice.c"
{
# 2364 "patricia_advice.c"
struct print_queue * retValue_acc;




# 2370 "patricia_advice.c"
{

#line 60 "patricia_advice.c"
(((depth >= 0)?((void )(0)):__assert_fail("depth >= 0", "patricia_advice.c", 60, __PRETTY_FUNCTION__))); 
#line 62 "patricia_advice.c"

#line 62 "patricia_advice.c"
struct print_queue *node;
#line 63 "patricia_advice.c"
node = malloc(sizeof (struct print_queue )); 
#line 64 "patricia_advice.c"
if ((!node)){
{ 
#line 66 "patricia_advice.c"
error(); } }
#line 68 "patricia_advice.c"
(node->depth) = depth; 
#line 69 "patricia_advice.c"
(node->p) = ptree_node; 
#line 70 "patricia_advice.c"
(node->next) = (((void *)0)); 
#line 72 "patricia_advice.c"

# 2394 "patricia_advice.c"
retValue_acc = node;
# 2396 "patricia_advice.c"
return (struct print_queue * )retValue_acc;
 
# 2399 "patricia_advice.c"

}

# 2403 "patricia_advice.c"
return (struct print_queue * )retValue_acc;

# 2406 "patricia_advice.c"

}
 
#line 76 "patricia_advice.c"
static struct print_queue *layer_traversing(struct ptree *phead)  
# 2412 "patricia_advice.c"
{
# 2414 "patricia_advice.c"
struct print_queue * retValue_acc;




# 2420 "patricia_advice.c"
{

#line 77 "patricia_advice.c"
(((phead)?((void )(0)):__assert_fail("phead", "patricia_advice.c", 77, __PRETTY_FUNCTION__))); 
#line 79 "patricia_advice.c"

#line 79 "patricia_advice.c"
struct print_queue *queue = malloc_node(0, phead);
#line 80 "patricia_advice.c"

#line 80 "patricia_advice.c"
struct print_queue *iter = queue;
#line 81 "patricia_advice.c"

#line 81 "patricia_advice.c"
int depth = tree_depth(phead, (-1)) - 1;
#line 83 "patricia_advice.c"
while((iter->depth) < depth) { { 
#line 94 "patricia_advice.c"
if ((iter->p)){
{ 
#line 87 "patricia_advice.c"
enqueue(queue, malloc_node((iter->depth) + 1, (((iter->p)->p_b) < (((iter->p)->p_left)->p_b)?((iter->p)->p_left):(((void *)0))))); 
#line 88 "patricia_advice.c"
enqueue(queue, malloc_node((iter->depth) + 1, (((iter->p)->p_b) < (((iter->p)->p_right)->p_b)?((iter->p)->p_right):(((void *)0))))); } }else{
{ 
#line 92 "patricia_advice.c"
enqueue(queue, malloc_node((iter->depth) + 1, (((void *)0)))); 
#line 93 "patricia_advice.c"
enqueue(queue, malloc_node((iter->depth) + 1, (((void *)0)))); } }
#line 96 "patricia_advice.c"
iter = (iter->next); } } 
#line 99 "patricia_advice.c"

# 2455 "patricia_advice.c"
retValue_acc = queue;
# 2457 "patricia_advice.c"
return (struct print_queue * )retValue_acc;
 
# 2460 "patricia_advice.c"

}

# 2464 "patricia_advice.c"
return (struct print_queue * )retValue_acc;

# 2467 "patricia_advice.c"

}
 
#line 103 "patricia_advice.c"
static void print_space(int num)  
# 2473 "patricia_advice.c"
{



# 2478 "patricia_advice.c"
{

#line 104 "patricia_advice.c"
(((num >= 0)?((void )(0)):__assert_fail("num >= 0", "patricia_advice.c", 104, __PRETTY_FUNCTION__))); 
#line 105 "patricia_advice.c"
while(num--) { printf(" "); } 
# 2485 "patricia_advice.c"

}

# 2489 "patricia_advice.c"

}
 
#line 109 "patricia_advice.c"
static void print_bar(int num)  
# 2495 "patricia_advice.c"
{



# 2500 "patricia_advice.c"
{

#line 110 "patricia_advice.c"
(((num >= 0)?((void )(0)):__assert_fail("num >= 0", "patricia_advice.c", 110, __PRETTY_FUNCTION__))); 
#line 111 "patricia_advice.c"
while(num--) { printf("-"); } 
# 2507 "patricia_advice.c"

}

# 2511 "patricia_advice.c"

}
 
#line 115 "patricia_advice.c"
static void print_node(int depth, int now_depth, struct print_queue *queue)  
# 2517 "patricia_advice.c"
{



# 2522 "patricia_advice.c"
{

#line 116 "patricia_advice.c"

#line 116 "patricia_advice.c"
struct ptree *node;
#line 117 "patricia_advice.c"

#line 117 "patricia_advice.c"
struct print_queue *i;
#line 118 "patricia_advice.c"

#line 118 "patricia_advice.c"
struct in_addr addr;
#line 119 "patricia_advice.c"

#line 119 "patricia_advice.c"
const char *addr_str;
#line 120 "patricia_advice.c"

#line 120 "patricia_advice.c"
int max_mask = 0;
#line 121 "patricia_advice.c"

#line 121 "patricia_advice.c"
int now_mask;
#line 122 "patricia_advice.c"

#line 122 "patricia_advice.c"
int count = 0;
#line 123 "patricia_advice.c"

#line 123 "patricia_advice.c"
int interval = ((int )pow(2, depth - now_depth)) * 18 - 18;
#line 124 "patricia_advice.c"

#line 124 "patricia_advice.c"
int start = interval / 2;
#line 127 "patricia_advice.c"
if (now_depth != 0){
{ 
#line 129 "patricia_advice.c"
print_space(start + 18 / 2); 
#line 130 "patricia_advice.c"
printf("|"); 
#line 131 "patricia_advice.c"
for(i = queue;i && (i->next) && ((i->next)->depth) == now_depth;i = (i->next)) { { 
#line 133 "patricia_advice.c"
print_space(interval + 17); 
#line 134 "patricia_advice.c"
printf("|"); } } 
#line 136 "patricia_advice.c"
printf("\n"); } }
#line 140 "patricia_advice.c"
print_space(start); 
#line 141 "patricia_advice.c"
for(i = queue;i && (i->depth) == now_depth;i = (i->next)) { { 
#line 143 "patricia_advice.c"
print_space(1); 
#line 144 "patricia_advice.c"
print_bar(16); 
#line 145 "patricia_advice.c"
print_space(1); 
#line 146 "patricia_advice.c"
print_space(interval); } } 
#line 148 "patricia_advice.c"
printf("\n"); 
#line 151 "patricia_advice.c"
print_space(start); 
#line 152 "patricia_advice.c"
for(i = queue;i && (i->depth) == now_depth;i = (i->next)) { { 
#line 154 "patricia_advice.c"
node = (i->p); 
#line 155 "patricia_advice.c"
if (node){
printf("|%-16d|", (node->p_b)); }else{
printf("|%-16s|", "-              -"); }
#line 160 "patricia_advice.c"
print_space(interval); } } 
#line 162 "patricia_advice.c"
printf("\n"); 
#line 165 "patricia_advice.c"
print_space(start); 
#line 166 "patricia_advice.c"
for(i = queue;i && (i->depth) == now_depth;i = (i->next)) { { 
#line 168 "patricia_advice.c"
node = (i->p); 
#line 169 "patricia_advice.c"
if (node){
{ 
#line 171 "patricia_advice.c"
addr.s_addr = ntohl((node->p_key)); 
#line 172 "patricia_advice.c"
printf("|%-16s|", inet_ntoa(addr)); } }else{
printf("|%-16s|", "-              -"); }
#line 177 "patricia_advice.c"
print_space(interval); } } 
#line 179 "patricia_advice.c"
printf("\n"); 
#line 182 "patricia_advice.c"
for(i = queue;i && (i->depth) == now_depth;i = (i->next)) { { 
#line 184 "patricia_advice.c"
node = (i->p); 
#line 185 "patricia_advice.c"
if (node){
{ 
#line 187 "patricia_advice.c"
max_mask = (max_mask < (node->p_mlen)?(node->p_mlen):max_mask); } }} } 
#line 191 "patricia_advice.c"
for(now_mask = 0;now_mask < max_mask;now_mask++) { { 
#line 193 "patricia_advice.c"
print_space(start); 
#line 194 "patricia_advice.c"
for(i = queue;i && (i->depth) == now_depth;i = (i->next)) { { 
#line 196 "patricia_advice.c"
node = (i->p); 
#line 197 "patricia_advice.c"
if (node && now_mask < (node->p_mlen)){
{ 
#line 199 "patricia_advice.c"
addr.s_addr = ntohl((node->p_m)[now_mask].pm_mask); 
#line 200 "patricia_advice.c"
printf("|%-16s|", inet_ntoa(addr)); } }else{
printf("|%-16s|", "-              -"); }
#line 205 "patricia_advice.c"
print_space(interval); } } 
#line 207 "patricia_advice.c"
printf("\n"); } } 
#line 212 "patricia_advice.c"
print_space(start); 
#line 213 "patricia_advice.c"
for(i = queue;i && (i->depth) == now_depth;i = (i->next)) { { 
#line 215 "patricia_advice.c"
print_space(1); 
#line 216 "patricia_advice.c"
print_bar(16); 
#line 217 "patricia_advice.c"
print_space(1); 
#line 218 "patricia_advice.c"
print_space(interval); } } 
#line 220 "patricia_advice.c"
printf("\n"); 
#line 223 "patricia_advice.c"
if (now_depth != depth){
{ 
#line 225 "patricia_advice.c"
print_space(start + 18 / 2); 
#line 226 "patricia_advice.c"
printf("|"); 
#line 227 "patricia_advice.c"
for(i = queue;i && (i->next) && ((i->next)->depth) == now_depth;i = (i->next)) { { 
#line 229 "patricia_advice.c"
print_space(interval + 17); 
#line 230 "patricia_advice.c"
printf("|"); } } 
#line 233 "patricia_advice.c"
printf("\n"); 
#line 234 "patricia_advice.c"
print_space((start + 18 / 2) / 2); 
#line 235 "patricia_advice.c"
print_bar((interval + 21) / 2); 
#line 236 "patricia_advice.c"
for(i = queue;i && (i->next) && ((i->next)->depth) == now_depth;i = (i->next)) { { 
#line 238 "patricia_advice.c"
print_space((interval + 17) / 2); 
#line 239 "patricia_advice.c"
print_bar((interval + 21) / 2); } } } }
#line 243 "patricia_advice.c"
printf("\n"); 
# 2692 "patricia_advice.c"

}

# 2696 "patricia_advice.c"

}
 
#line 247 "patricia_advice.c"
void __print_tree(void *phead)  
# 2702 "patricia_advice.c"
{



# 2707 "patricia_advice.c"
{

#line 248 "patricia_advice.c"

#line 248 "patricia_advice.c"
struct print_queue *queue = layer_traversing(phead);
#line 250 "patricia_advice.c"

#line 250 "patricia_advice.c"
struct print_queue *iter;
#line 251 "patricia_advice.c"

#line 251 "patricia_advice.c"
int depth = tree_depth(phead, (-1)) - 1;
#line 252 "patricia_advice.c"

#line 252 "patricia_advice.c"
int now_depth = (-1);
#line 254 "patricia_advice.c"
for(iter = queue;iter != (((void *)0));iter = (iter->next)) { { 
#line 261 "patricia_advice.c"
if (now_depth != (iter->depth)){
{ 
#line 258 "patricia_advice.c"
now_depth = (iter->depth); 
#line 259 "patricia_advice.c"
print_node(depth, now_depth, iter); } }} } 
#line 262 "patricia_advice.c"
printf("\n\n"); 
#line 264 "patricia_advice.c"
free_queue(queue); 
# 2739 "patricia_advice.c"

}

# 2743 "patricia_advice.c"

}
 