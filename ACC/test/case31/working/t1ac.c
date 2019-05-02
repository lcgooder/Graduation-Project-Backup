
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

# 1 "t1mc_mc.c" 
# 1 "<built-in>" 
# 1 "<command-line>" 
# 1 "t1mc_mc.c" 
# 10 "t1mc_mc.c" 
int beforebefore(int before); 
#line 10 "t1mc_mc.c"
struct beforebeforebefore {int before; 
}; 
#line 10 "t1mc_mc.c"
int before(); 
#line 11 "t1mc_mc.c"
int afterafter(int after); 
#line 11 "t1mc_mc.c"
struct afterafterafter {int after; 
}; 
#line 11 "t1mc_mc.c"
int after(); 
#line 12 "t1mc_mc.c"
int aroundaround(int around); 
#line 12 "t1mc_mc.c"
struct aroundaroundaround {int around; 
}; 
#line 12 "t1mc_mc.c"
int around(); 
#line 14 "t1mc_mc.c"
int callcall(int call); 
#line 14 "t1mc_mc.c"
struct callcallcall {int call; 
}; 
#line 14 "t1mc_mc.c"
int call(); 
#line 15 "t1mc_mc.c"
int executionexecution(int execution); 
#line 15 "t1mc_mc.c"
struct executionexecutionexecution {int execution; 
}; 
#line 15 "t1mc_mc.c"
int execution(); 
#line 16 "t1mc_mc.c"
int argsargs(int args); 
#line 16 "t1mc_mc.c"
struct argsargsargs {int args; 
}; 
#line 16 "t1mc_mc.c"
int args(); 
#line 17 "t1mc_mc.c"
int resultresult(int result); 
#line 17 "t1mc_mc.c"
struct resultresultresult {int result; 
}; 
#line 17 "t1mc_mc.c"
int result(); 
#line 18 "t1mc_mc.c"
int infileinfile(int infile); 
#line 18 "t1mc_mc.c"
struct infileinfileinfile {int infile; 
}; 
#line 18 "t1mc_mc.c"
int infile(); 
#line 19 "t1mc_mc.c"
int infuncinfunc(int infunc); 
#line 19 "t1mc_mc.c"
struct infuncinfuncinfunc {int infunc; 
}; 
#line 19 "t1mc_mc.c"
int infunc(); 
#line 21 "t1mc_mc.c"
int proceedproceed(int proceed); 
#line 21 "t1mc_mc.c"
struct proceedproceedproceed {int proceed; 
}; 
#line 21 "t1mc_mc.c"
int proceed(); 


