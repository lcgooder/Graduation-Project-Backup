
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

#include <setjmp.h> 


#line 1 "t6a4.acc"
 inline void __utac_acc__t6a4__1(void) { 



#line 2 "t6a4.acc"
printf("before call foo3, throw exception 3\n"); 
#line 3 "t6a4.acc"

{ jmp_buf * p; 
 struct __UTAC__EXCEPTION * excep = (struct __UTAC__EXCEPTION *)__utac__error_stack_mgt(0, 1, 1 ) ; 
 p = (jmp_buf*)(excep->jumpbuf); 
longjmp(*p, 3);}; 
#line 4 "t6a4.acc"
printf("end of aspect\n"); }

 
#line 7 "t6a4.acc"
 inline void __utac_acc__t6a4__2(int e) {



#line 8 "t6a4.acc"
printf("catch for foo , e = %d\n", e); }

 


#line 12 "t6a4.acc"
 inline void __utac_acc__t6a4__3(int e , struct JoinPoint *  this  )  {
 


#line 13 "t6a4.acc"
printf("1st catch for foo2, exception = %d\n", e); 
#line 14 "t6a4.acc"

{ jmp_buf * p; 
 struct __UTAC__EXCEPTION * excep = (struct __UTAC__EXCEPTION *) this->excep_return  ; 
 if(excep->pops) __utac__error_stack_mgt (0 , 1, excep->pops);
p = (jmp_buf *)excep->jumpbuf; 
 ; excep->prtValue = (unsigned long long int)( 9);longjmp(*p, 1); }; }

 
#line 17 "t6a4.acc"
 inline void __utac_acc__t6a4__4(int e) {



#line 18 "t6a4.acc"
printf("2nd catch, it should not catch\n"); }

 



