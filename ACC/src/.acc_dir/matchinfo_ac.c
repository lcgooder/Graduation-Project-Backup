
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

extern void __utac__exception__cf_handler_set(void * exception, int (*cflow_func)(int, int), int val) ; 
extern void __utac__exception__cf_handler_free(void * exception);
extern void __utac__exception__cf_handler_reset(void * exception) ; 
extern void * __utac__error_stack_mgt(void * env , int mode, int count) ;


typedef long unsigned int size_t; 

typedef unsigned char __u_char; 

typedef unsigned short int __u_short; 

typedef unsigned int __u_int; 

typedef unsigned long int __u_long; 

typedef signed char __int8_t; 

typedef unsigned char __uint8_t; 

typedef signed short int __int16_t; 

typedef unsigned short int __uint16_t; 

typedef signed int __int32_t; 

typedef unsigned int __uint32_t; 

typedef signed long int __int64_t; 

typedef unsigned long int __uint64_t; 

typedef long int __quad_t; 

typedef unsigned long int __u_quad_t; 

typedef unsigned long int __dev_t; 

typedef unsigned int __uid_t; 

typedef unsigned int __gid_t; 

typedef unsigned long int __ino_t; 

typedef unsigned long int __ino64_t; 

typedef unsigned int __mode_t; 

typedef unsigned long int __nlink_t; 

typedef long int __off_t; 

typedef long int __off64_t; 

typedef int __pid_t; 

typedef struct {int __val[2]; 
}__fsid_t; 

typedef long int __clock_t; 

typedef unsigned long int __rlim_t; 

typedef unsigned long int __rlim64_t; 

typedef unsigned int __id_t; 

typedef long int __time_t; 

typedef unsigned int __useconds_t; 

typedef long int __suseconds_t; 

typedef int __daddr_t; 

typedef int __key_t; 

typedef int __clockid_t; 

typedef void *__timer_t; 

typedef long int __blksize_t; 

typedef long int __blkcnt_t; 

typedef long int __blkcnt64_t; 

typedef unsigned long int __fsblkcnt_t; 

typedef unsigned long int __fsblkcnt64_t; 

typedef unsigned long int __fsfilcnt_t; 

typedef unsigned long int __fsfilcnt64_t; 

typedef long int __fsword_t; 

typedef long int __ssize_t; 

typedef long int __syscall_slong_t; 

typedef unsigned long int __syscall_ulong_t; 

typedef  __off64_t __loff_t; 

typedef  __quad_t *__qaddr_t; 

typedef char *__caddr_t; 

typedef long int __intptr_t; 

typedef unsigned int __socklen_t; 

struct _IO_FILE ; 

typedef struct _IO_FILE FILE; 

typedef struct _IO_FILE __FILE; 

typedef struct {int __count; union {unsigned int __wch; char __wchb[4]; 
}__value; 
}__mbstate_t; 

typedef struct { __off_t __pos;  __mbstate_t __state; 
}_G_fpos_t; 

typedef struct { __off64_t __pos;  __mbstate_t __state; 
}_G_fpos64_t; 

typedef __builtin_va_list __gnuc_va_list; 

struct _IO_jump_t ; 

struct _IO_FILE ; 

typedef void _IO_lock_t; 

struct _IO_marker {struct _IO_marker *_next; struct _IO_FILE *_sbuf; int _pos; 
}; 

enum __codecvt_result {__codecvt_ok,__codecvt_partial,__codecvt_error,__codecvt_noconv}; 

struct _IO_FILE {int _flags; char *_IO_read_ptr; char *_IO_read_end; char *_IO_read_base; char *_IO_write_base; char *_IO_write_ptr; char *_IO_write_end; char *_IO_buf_base; char *_IO_buf_end; char *_IO_save_base; char *_IO_backup_base; char *_IO_save_end; struct _IO_marker *_markers; struct _IO_FILE *_chain; int _fileno; int _flags2;  __off_t _old_offset; unsigned short _cur_column; signed char _vtable_offset; char _shortbuf[1];  _IO_lock_t *_lock;  __off64_t _offset; void *__pad1; void *__pad2; void *__pad3; void *__pad4;  size_t __pad5; int _mode; char _unused2[15 * sizeof (int ) - 4 * sizeof (void *) - sizeof ( size_t )]; 
}; 

typedef struct _IO_FILE _IO_FILE; 

struct _IO_FILE_plus ; 

extern struct _IO_FILE_plus _IO_2_1_stdin_; 

extern struct _IO_FILE_plus _IO_2_1_stdout_; 

extern struct _IO_FILE_plus _IO_2_1_stderr_; 

typedef  __ssize_t __io_read_fn(void *__cookie, char *__buf,  size_t __nbytes); 

typedef  __ssize_t __io_write_fn(void *__cookie, const char *__buf,  size_t __n); 

typedef int __io_seek_fn(void *__cookie,  __off64_t *__pos, int __w); 

typedef int __io_close_fn(void *__cookie); 

extern int __underflow( _IO_FILE *); 

extern int __uflow( _IO_FILE *); 

extern int __overflow( _IO_FILE *, int ); 

extern int _IO_getc( _IO_FILE *__fp); 

extern int _IO_putc(int __c,  _IO_FILE *__fp); 

extern int _IO_feof( _IO_FILE *__fp) __attribute__  (( __nothrow__ )) ; 

extern int _IO_ferror( _IO_FILE *__fp) __attribute__  (( __nothrow__ )) ; 

extern int _IO_peekc_locked( _IO_FILE *__fp); 

extern void _IO_flockfile( _IO_FILE *) __attribute__  (( __nothrow__ )) ; 

extern void _IO_funlockfile( _IO_FILE *) __attribute__  (( __nothrow__ )) ; 

extern int _IO_ftrylockfile( _IO_FILE *) __attribute__  (( __nothrow__ )) ; 

extern int _IO_vfscanf( _IO_FILE *__restrict , const char *__restrict ,  __gnuc_va_list , int *__restrict ); 

extern int _IO_vfprintf( _IO_FILE *__restrict , const char *__restrict ,  __gnuc_va_list ); 

extern  __ssize_t _IO_padn( _IO_FILE *, int ,  __ssize_t ); 

extern  size_t _IO_sgetn( _IO_FILE *, void *,  size_t ); 

extern  __off64_t _IO_seekoff( _IO_FILE *,  __off64_t , int , int ); 

extern  __off64_t _IO_seekpos( _IO_FILE *,  __off64_t , int ); 

extern void _IO_free_backup_area( _IO_FILE *) __attribute__  (( __nothrow__ )) ; 

typedef  __gnuc_va_list va_list; 

typedef  __off_t off_t; 

typedef  __ssize_t ssize_t; 

typedef  _G_fpos_t fpos_t; 

extern struct _IO_FILE *stdin; 

extern struct _IO_FILE *stdout; 

extern struct _IO_FILE *stderr; 

extern int remove(const char *__filename) __attribute__  (( __nothrow__ )) ; 

extern int rename(const char *__old, const char *__new) __attribute__  (( __nothrow__ )) ; 

extern int renameat(int __oldfd, const char *__old, int __newfd, const char *__new) __attribute__  (( __nothrow__ )) ; 

extern  FILE *tmpfile(void ); 

extern char *tmpnam(char *__s) __attribute__  (( __nothrow__ )) ; 

extern char *tmpnam_r(char *__s) __attribute__  (( __nothrow__ )) ; 

extern char *tempnam(const char *__dir, const char *__pfx) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ )) ; 

extern int fclose( FILE *__stream); 

extern int fflush( FILE *__stream); 

extern int fflush_unlocked( FILE *__stream); 

extern  FILE *fopen(const char *__restrict __filename, const char *__restrict __modes); 

extern  FILE *freopen(const char *__restrict __filename, const char *__restrict __modes,  FILE *__restrict __stream); 

extern  FILE *fdopen(int __fd, const char *__modes) __attribute__  (( __nothrow__ )) ; 

extern  FILE *fmemopen(void *__s,  size_t __len, const char *__modes) __attribute__  (( __nothrow__ )) ; 

extern  FILE *open_memstream(char **__bufloc,  size_t *__sizeloc) __attribute__  (( __nothrow__ )) ; 

extern void setbuf( FILE *__restrict __stream, char *__restrict __buf) __attribute__  (( __nothrow__ )) ; 

extern int setvbuf( FILE *__restrict __stream, char *__restrict __buf, int __modes,  size_t __n) __attribute__  (( __nothrow__ )) ; 

extern void setbuffer( FILE *__restrict __stream, char *__restrict __buf,  size_t __size) __attribute__  (( __nothrow__ )) ; 

extern void setlinebuf( FILE *__stream) __attribute__  (( __nothrow__ )) ; 

extern int fprintf( FILE *__restrict __stream, const char *__restrict __format, ...); 

extern int printf(const char *__restrict __format, ...); 

extern int sprintf(char *__restrict __s, const char *__restrict __format, ...) __attribute__  (( __nothrow__ )) ; 

extern int vfprintf( FILE *__restrict __s, const char *__restrict __format,  __gnuc_va_list __arg); 

extern int vprintf(const char *__restrict __format,  __gnuc_va_list __arg); 

extern int vsprintf(char *__restrict __s, const char *__restrict __format,  __gnuc_va_list __arg) __attribute__  (( __nothrow__ )) ; 

extern int snprintf(char *__restrict __s,  size_t __maxlen, const char *__restrict __format, ...) __attribute__  (( __nothrow__ ))  __attribute__  (( __format__ ( __printf__, 3, 4 )  )) ; 

extern int vsnprintf(char *__restrict __s,  size_t __maxlen, const char *__restrict __format,  __gnuc_va_list __arg) __attribute__  (( __nothrow__ ))  __attribute__  (( __format__ ( __printf__, 3, 0 )  )) ; 

extern int vdprintf(int __fd, const char *__restrict __fmt,  __gnuc_va_list __arg) __attribute__  (( __format__ ( __printf__, 2, 0 )  )) ; 

extern int dprintf(int __fd, const char *__restrict __fmt, ...) __attribute__  (( __format__ ( __printf__, 2, 3 )  )) ; 

extern int fscanf( FILE *__restrict __stream, const char *__restrict __format, ...); 

extern int scanf(const char *__restrict __format, ...); 

extern int sscanf(const char *__restrict __s, const char *__restrict __format, ...) __attribute__  (( __nothrow__ )) ; 

extern int fscanf( FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("""__isoc99_fscanf"); 

extern int scanf(const char *__restrict __format, ...) __asm__ ("""__isoc99_scanf"); 

extern int sscanf(const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("""__isoc99_sscanf") __attribute__  (( __nothrow__ )) ; 

extern int vfscanf( FILE *__restrict __s, const char *__restrict __format,  __gnuc_va_list __arg) __attribute__  (( __format__ ( __scanf__, 2, 0 )  )) ; 

extern int vscanf(const char *__restrict __format,  __gnuc_va_list __arg) __attribute__  (( __format__ ( __scanf__, 1, 0 )  )) ; 

extern int vsscanf(const char *__restrict __s, const char *__restrict __format,  __gnuc_va_list __arg) __attribute__  (( __nothrow__ ))  __attribute__  (( __format__ ( __scanf__, 2, 0 )  )) ; 

extern int vfscanf( FILE *__restrict __s, const char *__restrict __format,  __gnuc_va_list __arg) __asm__ ("""__isoc99_vfscanf") __attribute__  (( __format__ ( __scanf__, 2, 0 )  )) ; 

extern int vscanf(const char *__restrict __format,  __gnuc_va_list __arg) __asm__ ("""__isoc99_vscanf") __attribute__  (( __format__ ( __scanf__, 1, 0 )  )) ; 

extern int vsscanf(const char *__restrict __s, const char *__restrict __format,  __gnuc_va_list __arg) __asm__ ("""__isoc99_vsscanf") __attribute__  (( __nothrow__ ))  __attribute__  (( __format__ ( __scanf__, 2, 0 )  )) ; 

extern int fgetc( FILE *__stream); 

extern int getc( FILE *__stream); 

extern int getchar(void ); 

extern int getc_unlocked( FILE *__stream); 

extern int getchar_unlocked(void ); 

extern int fgetc_unlocked( FILE *__stream); 

extern int fputc(int __c,  FILE *__stream); 

extern int putc(int __c,  FILE *__stream); 

extern int putchar(int __c); 

extern int fputc_unlocked(int __c,  FILE *__stream); 

extern int putc_unlocked(int __c,  FILE *__stream); 

extern int putchar_unlocked(int __c); 

extern int getw( FILE *__stream); 

extern int putw(int __w,  FILE *__stream); 

extern char *fgets(char *__restrict __s, int __n,  FILE *__restrict __stream); 

extern char *gets(char *__s) __attribute__  (( __deprecated__ )) ; 

extern  __ssize_t __getdelim(char **__restrict __lineptr,  size_t *__restrict __n, int __delimiter,  FILE *__restrict __stream); 

extern  __ssize_t getdelim(char **__restrict __lineptr,  size_t *__restrict __n, int __delimiter,  FILE *__restrict __stream); 

extern  __ssize_t getline(char **__restrict __lineptr,  size_t *__restrict __n,  FILE *__restrict __stream); 

extern int fputs(const char *__restrict __s,  FILE *__restrict __stream); 

extern int puts(const char *__s); 

extern int ungetc(int __c,  FILE *__stream); 

extern  size_t fread(void *__restrict __ptr,  size_t __size,  size_t __n,  FILE *__restrict __stream); 

extern  size_t fwrite(const void *__restrict __ptr,  size_t __size,  size_t __n,  FILE *__restrict __s); 

extern  size_t fread_unlocked(void *__restrict __ptr,  size_t __size,  size_t __n,  FILE *__restrict __stream); 

extern  size_t fwrite_unlocked(const void *__restrict __ptr,  size_t __size,  size_t __n,  FILE *__restrict __stream); 

extern int fseek( FILE *__stream, long int __off, int __whence); 

extern long int ftell( FILE *__stream); 

extern void rewind( FILE *__stream); 

extern int fseeko( FILE *__stream,  __off_t __off, int __whence); 

extern  __off_t ftello( FILE *__stream); 

extern int fgetpos( FILE *__restrict __stream,  fpos_t *__restrict __pos); 

extern int fsetpos( FILE *__stream, const  fpos_t *__pos); 

extern void clearerr( FILE *__stream) __attribute__  (( __nothrow__ )) ; 

extern int feof( FILE *__stream) __attribute__  (( __nothrow__ )) ; 

extern int ferror( FILE *__stream) __attribute__  (( __nothrow__ )) ; 

extern void clearerr_unlocked( FILE *__stream) __attribute__  (( __nothrow__ )) ; 

extern int feof_unlocked( FILE *__stream) __attribute__  (( __nothrow__ )) ; 

extern int ferror_unlocked( FILE *__stream) __attribute__  (( __nothrow__ )) ; 

extern void perror(const char *__s); 

extern int sys_nerr; 

extern const char *const sys_errlist[]; 

extern int fileno( FILE *__stream) __attribute__  (( __nothrow__ )) ; 

extern int fileno_unlocked( FILE *__stream) __attribute__  (( __nothrow__ )) ; 

extern  FILE *popen(const char *__command, const char *__modes); 

extern int pclose( FILE *__stream); 

extern char *ctermid(char *__s) __attribute__  (( __nothrow__ )) ; 

extern void flockfile( FILE *__stream) __attribute__  (( __nothrow__ )) ; 

extern int ftrylockfile( FILE *__stream) __attribute__  (( __nothrow__ )) ; 

extern void funlockfile( FILE *__stream) __attribute__  (( __nothrow__ )) ; 

typedef int wchar_t; 

typedef enum {P_ALL,P_PID,P_PGID}idtype_t; 

static __inline unsigned int __bswap_32(unsigned int __bsx)  {


return __builtin_bswap32(__bsx); }
 

static __inline  __uint64_t __bswap_64( __uint64_t __bsx)  {


return __builtin_bswap64(__bsx); }
 

union wait {int w_status; struct {unsigned int __w_termsig:7; unsigned int __w_coredump:1; unsigned int __w_retcode:8; unsigned int :16; 
}__wait_terminated; struct {unsigned int __w_stopval:8; unsigned int __w_stopsig:8; unsigned int :16; 
}__wait_stopped; 
}; 

typedef union {union wait *__uptr; int *__iptr; 
}__WAIT_STATUS __attribute__  (( __transparent_union__ )) ; 

typedef struct {int quot; int rem; 
}div_t; 

typedef struct {long int quot; long int rem; 
}ldiv_t; 

 __extension__ typedef struct {long long int quot; long long int rem; 
}lldiv_t; 

extern  size_t __ctype_get_mb_cur_max(void ) __attribute__  (( __nothrow__ )) ; 

extern double atof(const char *__nptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 

extern int atoi(const char *__nptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 

extern long int atol(const char *__nptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 

 __extension__ extern long long int atoll(const char *__nptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 

extern double strtod(const char *__restrict __nptr, char **__restrict __endptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 

extern float strtof(const char *__restrict __nptr, char **__restrict __endptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 

extern long double strtold(const char *__restrict __nptr, char **__restrict __endptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 

extern long int strtol(const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 

extern unsigned long int strtoul(const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 

 __extension__ extern long long int strtoq(const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 

 __extension__ extern unsigned long long int strtouq(const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 

 __extension__ extern long long int strtoll(const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 

 __extension__ extern unsigned long long int strtoull(const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 

extern char *l64a(long int __n) __attribute__  (( __nothrow__ )) ; 

extern long int a64l(const char *__s) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 

typedef  __u_char u_char; 

typedef  __u_short u_short; 

typedef  __u_int u_int; 

typedef  __u_long u_long; 

typedef  __quad_t quad_t; 

typedef  __u_quad_t u_quad_t; 

typedef  __fsid_t fsid_t; 

typedef  __loff_t loff_t; 

typedef  __ino_t ino_t; 

typedef  __dev_t dev_t; 

typedef  __gid_t gid_t; 

typedef  __mode_t mode_t; 

typedef  __nlink_t nlink_t; 

typedef  __uid_t uid_t; 

typedef  __pid_t pid_t; 

typedef  __id_t id_t; 

typedef  __daddr_t daddr_t; 

typedef  __caddr_t caddr_t; 

typedef  __key_t key_t; 

typedef  __clock_t clock_t; 

typedef  __time_t time_t; 

typedef  __clockid_t clockid_t; 

typedef  __timer_t timer_t; 

typedef unsigned long int ulong; 

typedef unsigned short int ushort; 

typedef unsigned int uint; 

typedef int int8_t __attribute__  (( __mode__ ( __QI__ )  )) ; 

typedef int int16_t __attribute__  (( __mode__ ( __HI__ )  )) ; 

typedef int int32_t __attribute__  (( __mode__ ( __SI__ )  )) ; 

typedef int int64_t __attribute__  (( __mode__ ( __DI__ )  )) ; 

typedef unsigned int u_int8_t __attribute__  (( __mode__ ( __QI__ )  )) ; 

typedef unsigned int u_int16_t __attribute__  (( __mode__ ( __HI__ )  )) ; 

typedef unsigned int u_int32_t __attribute__  (( __mode__ ( __SI__ )  )) ; 

typedef unsigned int u_int64_t __attribute__  (( __mode__ ( __DI__ )  )) ; 

typedef int register_t __attribute__  (( __mode__ ( __word__ )  )) ; 

typedef int __sig_atomic_t; 

typedef struct {unsigned long int __val[(1024 / (8 * sizeof (unsigned long int )))]; 
}__sigset_t; 

typedef  __sigset_t sigset_t; 

struct timespec { __time_t tv_sec;  __syscall_slong_t tv_nsec; 
}; 

struct timeval { __time_t tv_sec;  __suseconds_t tv_usec; 
}; 

typedef  __suseconds_t suseconds_t; 

typedef long int __fd_mask; 

typedef struct { __fd_mask __fds_bits[1024 / (8 * ((int )sizeof ( __fd_mask )))]; 
}fd_set; 

typedef  __fd_mask fd_mask; 

extern int select(int __nfds,  fd_set *__restrict __readfds,  fd_set *__restrict __writefds,  fd_set *__restrict __exceptfds, struct timeval *__restrict __timeout); 

extern int pselect(int __nfds,  fd_set *__restrict __readfds,  fd_set *__restrict __writefds,  fd_set *__restrict __exceptfds, const struct timespec *__restrict __timeout, const  __sigset_t *__restrict __sigmask); 

 __extension__ extern unsigned int gnu_dev_major(unsigned long long int __dev) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 

 __extension__ extern unsigned int gnu_dev_minor(unsigned long long int __dev) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 

 __extension__ extern unsigned long long int gnu_dev_makedev(unsigned int __major, unsigned int __minor) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 

typedef  __blksize_t blksize_t; 

typedef  __blkcnt_t blkcnt_t; 

typedef  __fsblkcnt_t fsblkcnt_t; 

typedef  __fsfilcnt_t fsfilcnt_t; 

typedef unsigned long int pthread_t; 

union pthread_attr_t {char __size[56]; long int __align; 
}; 

typedef union pthread_attr_t pthread_attr_t; 

typedef struct __pthread_internal_list {struct __pthread_internal_list *__prev; struct __pthread_internal_list *__next; 
}__pthread_list_t; 

typedef union {struct __pthread_mutex_s {int __lock; unsigned int __count; int __owner; unsigned int __nusers; int __kind; short __spins; short __elision;  __pthread_list_t __list; 
}__data; char __size[40]; long int __align; 
}pthread_mutex_t; 

typedef union {char __size[4]; int __align; 
}pthread_mutexattr_t; 

typedef union {struct {int __lock; unsigned int __futex;  __extension__ unsigned long long int __total_seq;  __extension__ unsigned long long int __wakeup_seq;  __extension__ unsigned long long int __woken_seq; void *__mutex; unsigned int __nwaiters; unsigned int __broadcast_seq; 
}__data; char __size[48];  __extension__ long long int __align; 
}pthread_cond_t; 

typedef union {char __size[4]; int __align; 
}pthread_condattr_t; 

typedef unsigned int pthread_key_t; 

typedef int pthread_once_t; 

typedef union {struct {int __lock; unsigned int __nr_readers; unsigned int __readers_wakeup; unsigned int __writer_wakeup; unsigned int __nr_readers_queued; unsigned int __nr_writers_queued; int __writer; int __shared; unsigned long int __pad1; unsigned long int __pad2; unsigned int __flags; 
}__data; char __size[56]; long int __align; 
}pthread_rwlock_t; 

typedef union {char __size[8]; long int __align; 
}pthread_rwlockattr_t; 

typedef volatile int pthread_spinlock_t; 

typedef union {char __size[32]; long int __align; 
}pthread_barrier_t; 

typedef union {char __size[4]; int __align; 
}pthread_barrierattr_t; 

extern long int random(void ) __attribute__  (( __nothrow__ )) ; 

extern void srandom(unsigned int __seed) __attribute__  (( __nothrow__ )) ; 

extern char *initstate(unsigned int __seed, char *__statebuf,  size_t __statelen) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 

extern char *setstate(char *__statebuf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 

struct random_data { int32_t *fptr;  int32_t *rptr;  int32_t *state; int rand_type; int rand_deg; int rand_sep;  int32_t *end_ptr; 
}; 

extern int random_r(struct random_data *__restrict __buf,  int32_t *__restrict __result) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 

extern int srandom_r(unsigned int __seed, struct random_data *__buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 

extern int initstate_r(unsigned int __seed, char *__restrict __statebuf,  size_t __statelen, struct random_data *__restrict __buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 4 )  )) ; 

extern int setstate_r(char *__restrict __statebuf, struct random_data *__restrict __buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 

extern int rand(void ) __attribute__  (( __nothrow__ )) ; 

extern void srand(unsigned int __seed) __attribute__  (( __nothrow__ )) ; 

extern int rand_r(unsigned int *__seed) __attribute__  (( __nothrow__ )) ; 

extern double drand48(void ) __attribute__  (( __nothrow__ )) ; 

extern double erand48(unsigned short int __xsubi[3]) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 

extern long int lrand48(void ) __attribute__  (( __nothrow__ )) ; 

extern long int nrand48(unsigned short int __xsubi[3]) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 

extern long int mrand48(void ) __attribute__  (( __nothrow__ )) ; 

extern long int jrand48(unsigned short int __xsubi[3]) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 

extern void srand48(long int __seedval) __attribute__  (( __nothrow__ )) ; 

extern unsigned short int *seed48(unsigned short int __seed16v[3]) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 

extern void lcong48(unsigned short int __param[7]) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 

struct drand48_data {unsigned short int __x[3]; unsigned short int __old_x[3]; unsigned short int __c; unsigned short int __init;  __extension__ unsigned long long int __a; 
}; 

extern int drand48_r(struct drand48_data *__restrict __buffer, double *__restrict __result) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 

extern int erand48_r(unsigned short int __xsubi[3], struct drand48_data *__restrict __buffer, double *__restrict __result) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 

extern int lrand48_r(struct drand48_data *__restrict __buffer, long int *__restrict __result) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 

extern int nrand48_r(unsigned short int __xsubi[3], struct drand48_data *__restrict __buffer, long int *__restrict __result) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 

extern int mrand48_r(struct drand48_data *__restrict __buffer, long int *__restrict __result) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 

extern int jrand48_r(unsigned short int __xsubi[3], struct drand48_data *__restrict __buffer, long int *__restrict __result) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 

extern int srand48_r(long int __seedval, struct drand48_data *__buffer) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 

extern int seed48_r(unsigned short int __seed16v[3], struct drand48_data *__buffer) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 

extern int lcong48_r(unsigned short int __param[7], struct drand48_data *__buffer) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 

extern void *malloc( size_t __size) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ )) ; 

extern void *calloc( size_t __nmemb,  size_t __size) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ )) ; 

extern void *realloc(void *__ptr,  size_t __size) __attribute__  (( __nothrow__ ))  __attribute__  (( __warn_unused_result__ )) ; 

extern void free(void *__ptr) __attribute__  (( __nothrow__ )) ; 

extern void cfree(void *__ptr) __attribute__  (( __nothrow__ )) ; 

extern void *alloca( size_t __size) __attribute__  (( __nothrow__ )) ; 

extern void *valloc( size_t __size) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ )) ; 

extern int posix_memalign(void **__memptr,  size_t __alignment,  size_t __size) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 

extern void abort(void ) __attribute__  (( __nothrow__ ))  __attribute__  (( __noreturn__ )) ; 

extern int atexit(void (*__func)(void )) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 

extern int on_exit(void (*__func)(int __status, void *__arg), void *__arg) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 

extern void exit(int __status) __attribute__  (( __nothrow__ ))  __attribute__  (( __noreturn__ )) ; 

extern void _Exit(int __status) __attribute__  (( __nothrow__ ))  __attribute__  (( __noreturn__ )) ; 

extern char *getenv(const char *__name) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 

extern int putenv(char *__string) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 

extern int setenv(const char *__name, const char *__value, int __replace) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 

extern int unsetenv(const char *__name) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 

extern int clearenv(void ) __attribute__  (( __nothrow__ )) ; 

extern char *mktemp(char *__template) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 

extern int mkstemp(char *__template) __attribute__  (( __nonnull__ ( 1 )  )) ; 

extern int mkstemps(char *__template, int __suffixlen) __attribute__  (( __nonnull__ ( 1 )  )) ; 

extern char *mkdtemp(char *__template) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 

extern int system(const char *__command); 

extern char *realpath(const char *__restrict __name, char *__restrict __resolved) __attribute__  (( __nothrow__ )) ; 

typedef int (*__compar_fn_t)(const void *, const void *); 

extern void *bsearch(const void *__key, const void *__base,  size_t __nmemb,  size_t __size,  __compar_fn_t __compar) __attribute__  (( __nonnull__ ( 1, 2, 5 )  )) ; 

extern void qsort(void *__base,  size_t __nmemb,  size_t __size,  __compar_fn_t __compar) __attribute__  (( __nonnull__ ( 1, 4 )  )) ; 

extern int abs(int __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 

extern long int labs(long int __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 

 __extension__ extern long long int llabs(long long int __x) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 

extern  div_t div(int __numer, int __denom) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 

extern  ldiv_t ldiv(long int __numer, long int __denom) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 

 __extension__ extern  lldiv_t lldiv(long long int __numer, long long int __denom) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 

extern char *ecvt(double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4 )  )) ; 

extern char *fcvt(double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4 )  )) ; 

extern char *gcvt(double __value, int __ndigit, char *__buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3 )  )) ; 

extern char *qecvt(long double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4 )  )) ; 

extern char *qfcvt(long double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4 )  )) ; 

extern char *qgcvt(long double __value, int __ndigit, char *__buf) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3 )  )) ; 

extern int ecvt_r(double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign, char *__restrict __buf,  size_t __len) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4, 5 )  )) ; 

extern int fcvt_r(double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign, char *__restrict __buf,  size_t __len) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4, 5 )  )) ; 

extern int qecvt_r(long double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign, char *__restrict __buf,  size_t __len) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4, 5 )  )) ; 

extern int qfcvt_r(long double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign, char *__restrict __buf,  size_t __len) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 3, 4, 5 )  )) ; 

extern int mblen(const char *__s,  size_t __n) __attribute__  (( __nothrow__ )) ; 

extern int mbtowc( wchar_t *__restrict __pwc, const char *__restrict __s,  size_t __n) __attribute__  (( __nothrow__ )) ; 

extern int wctomb(char *__s,  wchar_t __wchar) __attribute__  (( __nothrow__ )) ; 

extern  size_t mbstowcs( wchar_t *__restrict __pwcs, const char *__restrict __s,  size_t __n) __attribute__  (( __nothrow__ )) ; 

extern  size_t wcstombs(char *__restrict __s, const  wchar_t *__restrict __pwcs,  size_t __n) __attribute__  (( __nothrow__ )) ; 

extern int rpmatch(const char *__response) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 

extern int getsubopt(char **__restrict __optionp, char *const *__restrict __tokens, char **__restrict __valuep) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2, 3 )  )) ; 

extern int getloadavg(double __loadavg[], int __nelem) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 

extern void *memcpy(void *__restrict __dest, const void *__restrict __src,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 

extern void *memmove(void *__dest, const void *__src,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 

extern void *memccpy(void *__restrict __dest, const void *__restrict __src, int __c,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 

extern void *memset(void *__s, int __c,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 

extern int memcmp(const void *__s1, const void *__s2,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 

extern void *memchr(const void *__s, int __c,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 

extern char *strcpy(char *__restrict __dest, const char *__restrict __src) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 

extern char *strncpy(char *__restrict __dest, const char *__restrict __src,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 

extern char *strcat(char *__restrict __dest, const char *__restrict __src) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 

extern char *strncat(char *__restrict __dest, const char *__restrict __src,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 

extern int strcmp(const char *__s1, const char *__s2) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 

extern int strncmp(const char *__s1, const char *__s2,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 

extern int strcoll(const char *__s1, const char *__s2) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 

extern  size_t strxfrm(char *__restrict __dest, const char *__restrict __src,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 

typedef struct __locale_struct {struct __locale_data *__locales[13]; const unsigned short int *__ctype_b; const int *__ctype_tolower; const int *__ctype_toupper; const char *__names[13]; 
}*__locale_t; 

typedef  __locale_t locale_t; 

extern int strcoll_l(const char *__s1, const char *__s2,  __locale_t __l) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2, 3 )  )) ; 

extern  size_t strxfrm_l(char *__dest, const char *__src,  size_t __n,  __locale_t __l) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 4 )  )) ; 

extern char *strdup(const char *__s) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 

extern char *strndup(const char *__string,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __malloc__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 

extern char *strchr(const char *__s, int __c) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 

extern char *strrchr(const char *__s, int __c) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 

extern  size_t strcspn(const char *__s, const char *__reject) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 

extern  size_t strspn(const char *__s, const char *__accept) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 

extern char *strpbrk(const char *__s, const char *__accept) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 

extern char *strstr(const char *__haystack, const char *__needle) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 

extern char *strtok(char *__restrict __s, const char *__restrict __delim) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 

extern char *__strtok_r(char *__restrict __s, const char *__restrict __delim, char **__restrict __save_ptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 3 )  )) ; 

extern char *strtok_r(char *__restrict __s, const char *__restrict __delim, char **__restrict __save_ptr) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2, 3 )  )) ; 

extern  size_t strlen(const char *__s) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 

extern  size_t strnlen(const char *__string,  size_t __maxlen) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 

extern char *strerror(int __errnum) __attribute__  (( __nothrow__ )) ; 

extern int strerror_r(int __errnum, char *__buf,  size_t __buflen) __asm__ ("""__xpg_strerror_r") __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 2 )  )) ; 

extern char *strerror_l(int __errnum,  __locale_t __l) __attribute__  (( __nothrow__ )) ; 

extern void __bzero(void *__s,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 

extern void bcopy(const void *__src, void *__dest,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 

extern void bzero(void *__s,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 

extern int bcmp(const void *__s1, const void *__s2,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 

extern char *index(const char *__s, int __c) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 

extern char *rindex(const char *__s, int __c) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1 )  )) ; 

extern int ffs(int __i) __attribute__  (( __nothrow__ ))  __attribute__  (( __const__ )) ; 

extern int strcasecmp(const char *__s1, const char *__s2) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 

extern int strncasecmp(const char *__s1, const char *__s2,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __pure__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 

extern char *strsep(char **__restrict __stringp, const char *__restrict __delim) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 

extern char *strsignal(int __sig) __attribute__  (( __nothrow__ )) ; 

extern char *__stpcpy(char *__restrict __dest, const char *__restrict __src) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 

extern char *stpcpy(char *__restrict __dest, const char *__restrict __src) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 

extern char *__stpncpy(char *__restrict __dest, const char *__restrict __src,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 

extern char *stpncpy(char *__restrict __dest, const char *__restrict __src,  size_t __n) __attribute__  (( __nothrow__ ))  __attribute__  (( __nonnull__ ( 1, 2 )  )) ; 

typedef int boolean; 

typedef enum {FUNCDECL,FUNCBODY,STRUCTDECL,PARAMDECL,PARAMFPDECL,FUNCPDECL,TYPEDEFFPDECL,TYPEDEFDECL,PCMATCHING,ADFUNCDECL,GLOBVARDECL,UNKNOWNDECL}DeclType; 

struct Param {char *id; char *type; struct Param *next; 
}; 

struct FuncInfo {char *fname; char *rtType; struct Param *p; struct FuncInfo *next; int malInfo; 
}; 

struct TypedefInfo {char *source; char *target; struct TypedefInfo *next; 
}; 

struct checkFrame {int info;  DeclType type; int paramCount; struct FuncInfo *curFunc; struct TypedefInfo *curTypedef; struct checkFrame *parent; char *qualifier; int declaratorLevel; struct Param *paramFor2ndDeclarator;  boolean paramFor2ndDeclaratorIsSet; 
}; 

extern struct FuncInfo *funcTable; 

extern struct FuncInfo *fpTable; 

extern struct FuncInfo *varTable; 

extern struct TypedefInfo *typedefTable; 

void addFunc(struct FuncInfo **head, struct FuncInfo *data); 

struct FuncInfo *searchFunc(struct FuncInfo *head, char *key); 

struct FuncInfo *searchFP(struct FuncInfo *head, char *key, char *infunc); 

struct Param *addParam(struct Param **head, struct Param *data); 

struct Param *copy_parameters(struct Param *); 

char *copy_chars(char *); 

void setType(char *t); 

void setQualifier(char *); 

void setComplexType(long , char *); 

void setComplexTypeName(long , char ([]), char *); 

void setPointerType(); 

void setEllipsis(); 

void setStorageClass(char *); 

void addStarToType(char **); 

void removeStarToType(char **); 

char *addType(char *t1, char *t2); 

void setId(char *id); 

void appendId(char *id); 

char *add_chars_with_dot(char *str1, char *str2); 

void printFuncs(struct FuncInfo *table); 

void free_func(struct FuncInfo *); 

void free_typedefTable(struct TypedefInfo *); 

void free_declframe(struct checkFrame *f); 

void initDeclCollection(char *); 

void endDeclCollection(); 

void setFuncDecl(); 

void setFuncDecl_old(); 

void setInsideATypedefDecl(); 

char *make_param_name(int ); 

char *make_func_pointer_type(struct checkFrame *); 

void make_fp_name(struct checkFrame *frame); 

void enter_paren_declarator(); 

void leave_paren_declarator(); 

void setDeclaratorWithPointer(); 

void enter_gcc_attribute(); 

void leave_gcc_attribute(); 

void isATypeDefDecl(long *); 

void setTypeDefTarget(); 

void isKNRDecl(long *); 

void setNoNameTag(char **); 

void setTypedefTargetSource(char *); 

char *findRealType(char *name); 

void switchTypedefTargetSource(struct TypedefInfo *oneTypedef); 

void addQualifier(char **type, char **qualifier); 

void getPlainType(char *, char *); 

void setDeclIsFuncLike(); 

void isDiffName(char *, char *, long *); 

void setEndFuncDeclarator(); 

extern char *errmsg_fmt[]; 

extern void __assert_fail(const char *__assertion, const char *__file, unsigned int __line, const char *__function) __attribute__  (( __nothrow__ ))  __attribute__  (( __noreturn__ )) ; 

extern void __assert_perror_fail(int __errnum, const char *__file, unsigned int __line, const char *__function) __attribute__  (( __nothrow__ ))  __attribute__  (( __noreturn__ )) ; 

extern void __assert(const char *__assertion, const char *__file, int __line) __attribute__  (( __nothrow__ ))  __attribute__  (( __noreturn__ )) ; 

typedef enum {CALL,EXECUTION,CALLP,ARGS,RESULT,INFILE,INFUNC,INTYPE,COMPOUND,COMP_AND,COMP_OR,COMP_NOT,NAMEDPC,PCNAME,CFLOW,TRY,GETPC,SETPC,UNKNOWN_PC}PointcutType; 

typedef enum {BEFORE,AFTER,AROUND,INTRODUCE,CATCH,ADFORNAMEDPC,ADBEFORECFLOW,ADAFTERCFLOW,ADARGSCFLOW,ADBEFORETRY,ADAFTERTRY,UNKNOWN_AD}AdviceType; 

typedef enum {PROCEED,PRETURN,THROW,THIS,ARG,ARGTYPE,UNKNOWN_ADKEYWORD}AdviceKeyword; 

struct argIndexInContext {struct Context *c; int argIndex; struct argIndexInContext *nextContext; 
}; 

struct jpInfo {char *name; long pos;  PointcutType type; struct jpInfo *next; 
}; 

struct adviceParam {struct Param p; struct argIndexInContext *indexInContext; char *callCflowContextFunc;  boolean matchAddress;  boolean usedInPC; struct adviceParam *next; 
}; 

struct advice {char *name; char *rtType;  AdviceType type; struct adviceParam *p; int malInfo; char *acFileBaseName; char *cflowCondition; 





long insideFile;



struct jpInfo *jps;
}; 

struct AdviceQueue {struct advice *data; struct AdviceQueue *next;  boolean emitCond; 
}; 

struct pointcutParam {struct Param p; struct adviceParam *ap; struct pointcutParam *next; 
}; 

struct matchInfo {char *funcName; char *rtType; struct pointcutParam *p; 
}; 

union MatchingInfo {struct matchInfo *mInfo; struct Record *childPCs[2]; struct Record *childPC; char *inside; 
}; 

struct Record {int id; char *name;  PointcutType type; struct advice *aList; struct Record *next; union MatchingInfo info; struct Record *parentPC; char *cflowFuncName; 
}; 

struct ArgsInCflow {struct Record *pc; char *funcName; struct ArgsInCflow *next; 
}; 

struct CFlowRecord {struct Record *pc; struct CFlowRecord *next; struct ArgsInCflow *argsPCs;  boolean notPrinted; 
}; 

struct TryRecord {struct Record *pc; struct TryRecord *next; struct advice *ad; 
}; 

struct Context {long insideFile; char *insideFunc; char *funcName;  PointcutType type; char *rtType; struct Param *p; struct AdviceQueue *before_advices; struct AdviceQueue *after_advices; struct AdviceQueue *around_advices; int malInfo; long numOfCH; 
}; 

struct CallContext {struct Context context; char *newFuncName; struct CallContext *next; 
}; 

extern struct Record *pCutInfo; 

extern struct Record *PointCutTable; 

extern struct CFlowRecord *cflowTable; 

extern struct TypedefInfo *typedefTable; 

extern struct TryRecord *tryTable; 

extern char *currTypeQualifier; 

void addPointCutType2Current(char *type); 

void addNewAdvice(struct advice **head); 

void addPointCutToCFlowTable(struct Record *pc); 

struct ArgsInCflow *addArgsPCsInCFlow(struct Record *pc, char *baseFuncName, int *index); 

void startPointcutInfo(); 

void startAdFuncHeader(); 

void startAdReturnType(); 

void startJPReturnType(); 

void startAdFunctionBD(); 

void startGetDynInfo(); 

void endPointcutInfo(); 

void endAdFuncHeader(); 

void endAdReturnType(); 

void endJPReturnType(); 

void endAdFunctionBD(); 

void endPointcutName(); 

void endGetDynInfo(); 

void isPointcutInfo(long *flag); 

void isAdFuncHeader(long *flag); 

void isAdFunctionBD(long *flag); 

void assertKeyword(char *s, char *keyword); 

void assert2Keywords(char *s, char *keyword1, char *keyword2); 

void checkKeywordInAdvice(char *s, long *flag); 

struct Record *createNewRecord(int id); 

char *createAdName(char *fname, int counter); 

void createNewArgIndex(struct adviceParam *adParam, struct Context *, int initValue); 

void createPointcutMatchingInfo(struct checkFrame *cf); 

struct adviceParam *create_advice_parameter(struct Param *p); 

struct argIndexInContext *copy_argindex_incontext(struct argIndexInContext *); 

char *create_dot_types(struct Param *p); 

void setACName(char *id); 

void setACType(char *t); 

void setACComplexType(long type, char *t); 

void setACTypePointer(); 

void setAdviceType(char *); 

void resetCurrParamAndType(); 

void resetAdviceCounter(); 

void setInsideFile(char *); 

void setPointcutName(char *s); 

char *getPointCutTypeText( PointcutType p); 

char *getAdviceText( AdviceType a); 

void getAdviceName(char **); 

struct advice *getCurrAdvice(); 

struct Param *findParam(struct Param *head, char *name); 

struct Record *findPointcut(struct Record *head, char *name); 

struct CFlowRecord *findPointcutInTable(struct CFlowRecord *head, struct Record *target); 

 boolean hasIntypePCOnly(struct Record *pc); 

 boolean hasTryPCOnly(struct Record *pc); 

 AdviceType text2AdviceType(char *type); 

 PointcutType text2PointcutType(char *type); 

void pushAChildForCompPC(long index); 

void popChild(); 

void outputAdviceFuncBeginTag(); 

void outputAdviceFuncEndTag(); 

void endACParamDeclCollection(); 

void free_pointcut(struct Record *); 

void free_matchinginfo_struct(struct matchInfo *info); 

void free_pointcut_param(struct pointcutParam *pp); 

void free_matchinginfo(struct Record *rec); 

void free_advices(struct advice *a); 

void free_advice_param(struct adviceParam *p); 

void free_argIndexInContext(struct argIndexInContext *arg); 

void free_cflowTable(struct CFlowRecord *); 

void free_tryTable(struct TryRecord *); 

char *checkContextExposureInCflow(struct Record *pc, char *fName, int *index); 

struct Scope {struct Scope *parent; struct ScopeSym {struct FuncInfo *sym; int oriInfo; struct ScopeSym *next; 
}*syms; 
}; 

extern char *rtType; 

void setRtType(char *t); 

void setFuncId(char *id); 

void endFuncCollection(); 

void setCurrentExecContext(char *c); 

void setFuncDefinition(); 

void setTypedefTargetName(); 

void setDeclaratorTarget(char *); 

void unsetDeclaratorTarget(); 

void unsetFuncDefinition(); 

 boolean isAFuncDefinition(); 

void isCallMatch(long *flag); 

void isPointcutExist(long *flag); 

void get_curr_func_name(char **f); 

void getCurrentExecContext(char **c); 

char *getOneParam(char **ptr); 

void addMatchedCallContexts(struct CallContext **head, struct CallContext *d); 

void initFuncCollection(); 

void initFuncCalls(); 

void StartCallMatch(); 

void startNewFuncDefn(char *); 

void EndCallMatch(); 

void endNewFuncDefn(); 

void enqueueAdvice(struct AdviceQueue **head, struct advice *data,  boolean ); 

void newEnqueueAdvice( AdviceType aT, struct Context *c, struct advice *data,  boolean ); 

void appendAdvice( AdviceType aT, struct Context *c, struct advice *data); 

void insert_advice( AdviceType type, char *, long *); 

void insert_one_advice(struct advice *d, struct Context *c,  boolean ); 

void insert_call_bodys(); 

void insert_advice_with_context(struct AdviceQueue *, struct Context *,  boolean ,  boolean ); 

void insert_advice_for_args_in_cflow(struct ArgsInCflow *pc, struct Context *context); 

void delCurrentExecContext(); 

char *output_one_param(struct adviceParam *param, struct Context *context, int index); 

void outputUserReturn(); 

void outputReturn(); 

void outputReturnDecl(); 

void outputReturnDeclInContext(struct Context *); 

void outputReturnAssign(); 

void outputReturnAssignInContext(struct Context *); 

char *outputReturnInContext(struct Context *, int , char *); 

void outputExceptionHandlerVars(struct Context *c); 

char *output_one_advice_declaration(struct advice *ad,  boolean , char *); 

void output_cflow_function(); 

void output_exception_cflow_handler_func_decl(); 

void output_one_cflow_func(struct CFlowRecord *rec); 

void outputTypeInsertionMarker(char *); 

void outputTypeInsertionMarkerInAC(char *); 

void output_one_marker(char *); 

void outputTypeInsertionMarkers(char *buf); 

void outputJoinPointStrDecl(); 

void output_extra_args(int separator); 

char *output_one_variable_in_cflow_context(struct adviceParam *ap, int index); 

void output_one_cflow_context_func(struct ArgsInCflow *arg); 

void outputWithSrcLine(char *); 

void genCallBody(struct CallContext *callContext); 

void genNewProceedCall(); 

void genNewPreturnCall(); 

void enclosePreturnCall(); 

void genNewThrowCall(); 

void genNewWrapperFunction(struct Context *c); 

char *genFuncDecl(char *fName, char *retType, struct Param *p, char *buf, int malInfo); 

char *genFuncCall(char *fName, struct Param *p, char *buf); 

char *genTransWrapperFunction(struct AdviceQueue *aQ, struct Context *c); 

char *genSrcLineInfo(char *buf); 

void buildGenFuncDecl(char *buf, struct CallContext *c); 

void buildJoinPointContext(long srcinfo, char *infuncName, char *funcName, char *type, char **context); 

void buildType(long type, char *tag, char **name); 

char *buildParamDecl(char *buf, char *type, char *id); 

void build_func_pointer_type_decl(char *buf, struct CallContext *c); 

void match_call_join_point(char *context, char *realName, char **newFuncName); 

void match_get_join_point(char *context, char *realName, char **newFuncName); 

void match_set_join_point(char *context, char *realName, char **newFuncName); 

 boolean match_pointcut_type( PointcutType pattern,  PointcutType realJoinPoint); 

void match_join_point(char *context, long *findAMatch); 

 boolean match_pointcut_with_jp(struct Record *pc, struct Context *context, char **); 

 boolean match_name(char *pattern, char *name); 

 boolean match_type(char *type1, char *type2); 

 boolean match_parameters(struct pointcutParam *paramPattern, struct Param *param,  boolean extractParam, int currIndex, struct Context *); 

 boolean match_one_parameter(struct Param *paramPattern, struct Param *param,  boolean extractParam, int currIndex, struct Context *); 

 boolean match_pointcut(struct Record *pc1, struct Record *pc2); 

void match_intype_join_point(char *, char **); 

 boolean match_typedef_name(char *name1, char *source); 

void free_context(struct Context *temp); 

void free_call_context(struct CallContext *temp); 

void free_all_queues(); 

void free_parameters(struct Param *head); 

void free_advice_queue(struct AdviceQueue *queue); 

void free_intype_context(struct Context *); 

void free_scope(struct Scope *s); 

void free_scope_syms(struct ScopeSym *ss); 

struct Param *find_parameter_by_index(struct Param *head, int index); 

struct Param *find_parameter_by_type(struct Param *target, struct Param *head, int *indexIncrease); 

struct argIndexInContext *findArgIndexInContext(struct argIndexInContext *head, struct Context *c); 

void logAroundDeclaration(); 

void logWrapperFunction(struct AdviceQueue *aQ, struct Context *c, char *preBuf); 

void logSetjmp(char *); 

void needLogSetjmp(long *); 

void enterStrDecl(); 

void leaveStrDecl(); 

void setCollectFuncName(); 

void unsetCollectFuncName(); 

void setFirstDeclarator(); 

void unsetFirstDeclarator(); 

void isFirstDeclarator(long *); 

struct advice *create_advice_for_args_in_cflow(struct ArgsInCflow *p, struct Context *c); 

void append_cflow_func(struct advice *ad, char *buf, int *oldLen, int maxLen); 

void enterScope(); 

void leaveScope(); 

void isInLoFcalScope(long *); 

void incrLVal(); 

void decrLVal(); 

void isLVal(long *); 

void incrDisableGet(); 

void decrDisableGet(); 

void isDisableGet(long *); 

void incrMatchedPC(); 

void decrMatchedPC(); 

void hasMatchedPC(int *); 

typedef struct IdentRec *Ident; 

struct IdentRec {char *firstposptr; long length; long symbol_class; long meaning; long tagmeaning;  Ident next; 
}; 

struct file_pos_chain {unsigned long fpos; struct file_pos_chain *next; 
}; 

struct file_chain {char *name; char *mappedName; char *level; char returnAble; struct file_pos_chain *preFilePos; struct file_chain *next; 
}; 

extern long SYM; 

extern long CurCol; 

extern long CurLine; 

extern  Ident CurId; 

extern char CurChar; 

extern long CurNumber; 

extern double CurFloat; 

void addMapFileName(char *mapOption); 

struct file_chain *number_to_file(unsigned long n); 

char *number_to_name(unsigned long ); 

char *number_to_level(unsigned long ); 

int outputMatchInfo = 0; 

 FILE *outputFile = (((void *)0)); 



 inline int __utac_acc__matchinfo_ac__1(char **argv, int argc, int i , struct JoinPoint *  this  )  {
 



if (strcmp(argv[i], "-m") == 0 || strcmp(argv[i], "--matchinfo") == 0){
{ 

outputMatchInfo = 1; 

outputFile = (((void *)0)); 

return i + 1; } }else{
if (strstr(argv[i], "-m=") == argv[i] || strstr(argv[i], "--matchinfo=") == argv[i]){
{ 



char *tmp = strstr(argv[i], "=");

outputFile = fopen(tmp + 1, "w"); 

if (outputFile == (((void *)0))){
{ 

printf("Can not open files for outputing matching information, so the information is output to stdout. \n"); } }

outputMatchInfo = 1; 

return i + 1; } }else{
{ 

return (** (int **)(this->fp(this)) ) ; } }}}

 

 inline void __utac_acc__matchinfo_ac__2(void) { 




printf("%s", "-m[=<file name>] , --matchinfo[=<file name>]\n\tThe join point-advice matching information will be output.\n\n"); }

 

int jpcounter = 1; 

void printOneAdvice(char *suffix, int index, struct advice *ad)  {


if (outputFile == (((void *)0))){
{ 

printf("%s%d. ad:%s,%s,%s,%ld\n", suffix, index, (ad->name), getAdviceText((ad->type)), number_to_name((ad->insideFile) / 1000000), (ad->insideFile) % 1000000); } }else{
{ 

fprintf(outputFile, "%s%d. ad:%s,%s,%s,%ld\n", suffix, index, (ad->name), getAdviceText((ad->type)), number_to_name((ad->insideFile) / 1000000), (ad->insideFile) % 1000000); } }}
 

int printAdviceQueue(struct AdviceQueue *aq, int i)  {


while(aq) { { 

switch(((aq->data)->type)){ { 

case BEFORE: case AFTER: case AROUND: printOneAdvice("\t", i++, (aq->data)); } } 

aq = (aq->next); } } 

return i; }
 

void printAdviceInfo(struct Context *c)  {




struct AdviceQueue *ptr;



int i = 1;

i = printAdviceQueue((c->before_advices), i); 

i = printAdviceQueue((c->after_advices), i); 

i = printAdviceQueue((c->around_advices), i); }
 

void printOneJP(char *suffix, int index, char *name, char *type, long pos)  {


if (outputFile == (((void *)0))){
{ 

printf("%s%d. jp:%s,%s,%s,%ld\n", suffix, index, name, type, number_to_name(pos / 1000000), pos % 1000000); } }else{
{ 

fprintf(outputFile, "%s%d. jp:%s,%s,%s,%ld\n", suffix, index, name, type, number_to_name(pos / 1000000), pos % 1000000); } }}
 

void printJP_AD(struct Context *c)  {


printOneJP("", jpcounter++, (c->funcName), getPointCutTypeText((c->type)), (c->insideFile)); 

printAdviceInfo(c); 

if (outputFile == (((void *)0))){
{ 

printf("\n"); } }else{
{ 

fprintf(outputFile, "\n"); } }}
 

void addJP(struct Context *c, struct advice *ad)  {




struct jpInfo *newjp = ((struct jpInfo *)malloc(sizeof (struct jpInfo )));

(newjp->name) = copy_chars((c->funcName)); 

(newjp->pos) = (c->insideFile); 

(newjp->type) = (c->type); 

(newjp->next) = (ad->jps); 

(ad->jps) = newjp; }
 

void free_jps(struct jpInfo *jps)  {


if (jps == (((void *)0))){
return ; }

if ((jps->next)){
free_jps((jps->next)); }

if ((jps->name)){
free((jps->name)); }

if (jps){
free(jps); }}
 

void printAD_JP(struct Record *ptr)  {




int i = 1;



struct advice *ad;



struct jpInfo *jp;

while(ptr) { { 

if ((ptr->aList) && ((ptr->aList)->type) != ADFORNAMEDPC){
{ 



int j = 1;

ad = (ptr->aList); 

printOneAdvice("", i++, ad); 

jp = (ad->jps); 

while(jp != (((void *)0))) { { 

printOneJP("\t", j++, (jp->name), getPointCutTypeText((jp->type)), (jp->pos)); 

jp = (jp->next); } } 

if (outputFile == (((void *)0))){
{ 

printf("\n"); } }else{
{ 

fprintf(outputFile, "\n"); } }} }

ptr = (ptr->next); } } }
 

 inline void __utac_acc__matchinfo_ac__3(void) { 


/* __utac__introduce__begin@ */





long insideFile;



struct jpInfo *jps;
/* __utac__introduce__end@   */
}

 

 inline void __utac_acc__matchinfo_ac__4(struct advice **head) {






struct advice *tmp = (*head);

(tmp->jps) = (((void *)0)); 

GETVarLine((&((tmp->insideFile)))); }

 

 

 inline void __utac_acc__matchinfo_ac__6(struct advice *ad) {




switch((ad->type)){ { 

case ADARGSCFLOW: case ADBEFORECFLOW: case ADAFTERCFLOW: case ADBEFORETRY: case ADAFTERTRY: (ad->jps) = (((void *)0)); 

GETVarLine((&((ad->insideFile)))); 

break; } } }

 

 inline void __utac_acc__matchinfo_ac__7(struct Context *c, struct advice *data) {




addJP(c, data); }

 

 inline void __utac_acc__matchinfo_ac__8(char *c, long *match) {




if ((*match) == 1 && outputMatchInfo == 1){
{ 

printJP_AD(((struct Context *)c)); } }}

 

 inline void __utac_acc__matchinfo_ac__9(struct Record *pcPtr) {




if (outputMatchInfo == 1){
{ 

printAD_JP(pcPtr); } }}

 

 inline void __utac_acc__matchinfo_ac__10(void) { 




if (outputMatchInfo == 1 && outputFile != (((void *)0))){
{ 

fclose(outputFile); } }}

 

 inline void __utac_acc__matchinfo_ac__11(struct advice *ad) {




if (ad){
{ 

free_jps((ad->jps)); } }}

 



