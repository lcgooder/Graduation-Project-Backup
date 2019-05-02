
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

#line 1 "t1ac.ac"
 inline void __utac_acc__t1ac__1(void) { 



#line 2 "t1ac.ac"
printf("aspect 1: before call foo\n"); }

 
#line 5 "t1ac.ac"
 inline void __utac_acc__t1ac__2(void) { 



#line 6 "t1ac.ac"
printf("aspect 2: before call foo2\n"); }

 
#line 9 "t1ac.ac"
 inline void __utac_acc__t1ac__3(void) { 



#line 10 "t1ac.ac"
printf("aspect 3: before call call1\n"); }

 
#line 13 "t1ac.ac"
 inline void __utac_acc__t1ac__4(void) { 



#line 14 "t1ac.ac"
printf("aspect 4: before call call2\n"); }

 


