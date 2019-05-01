
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

# 1 "t2ac_ac.c" 
# 1 "<built-in>" 
# 1 "<command-line>" 
# 3 "t2ac_ac.c" 
typedef struct X {int b; 



int c1;



int d1;



int c2;



int d2;
}MYU3; 
#line 6 "t2ac_ac.c"
 inline void __utac_acc__t2ac__1(void) { 


/* __utac__introduce__begin@ */


#line 7 "t2ac_ac.c"

#line 7 "t2ac_ac.c"
int c2;
/* __utac__introduce__end@   */
}

 
#line 10 "t2ac_ac.c"
 inline void __utac_acc__t2ac__2(void) { 


/* __utac__introduce__begin@ */


#line 11 "t2ac_ac.c"

#line 11 "t2ac_ac.c"
int d2;
/* __utac__introduce__end@   */
}

 



