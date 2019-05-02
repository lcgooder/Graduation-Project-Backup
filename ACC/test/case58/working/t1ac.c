
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

# 1 "t1ac_ac.c" 
# 1 "<built-in>" 
# 1 "<command-line>" 
# 5 "t1ac_ac.c" 
typedef union {struct A {int b; 



int a;
}d; 



int b;
}MYU; 
#line 11 "t1ac_ac.c"
typedef union X {struct {int c; 
}p; 



int c;



int d;
}MYU2; 
#line 13 "t1ac_ac.c"
 inline void __utac_acc__t1ac__1(void) { 


/* __utac__introduce__begin@ */


#line 14 "t1ac_ac.c"

#line 14 "t1ac_ac.c"
int a;
/* __utac__introduce__end@   */
}

 
#line 17 "t1ac_ac.c"
 inline void __utac_acc__t1ac__2(void) { 


/* __utac__introduce__begin@ */


#line 18 "t1ac_ac.c"

#line 18 "t1ac_ac.c"
int b;
/* __utac__introduce__end@   */
}

 
#line 21 "t1ac_ac.c"
 inline void __utac_acc__t1ac__3(void) { 


/* __utac__introduce__begin@ */


#line 22 "t1ac_ac.c"

#line 22 "t1ac_ac.c"
int c;
/* __utac__introduce__end@   */
}

 
#line 25 "t1ac_ac.c"
 inline void __utac_acc__t1ac__4(void) { 


/* __utac__introduce__begin@ */


#line 26 "t1ac_ac.c"

#line 26 "t1ac_ac.c"
int d;
/* __utac__introduce__end@   */
}

 


