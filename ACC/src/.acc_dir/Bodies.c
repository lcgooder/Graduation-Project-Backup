
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



typedef long *yy; 

static  yy yynull; 

extern  yy yyh; 

extern  yy yyhx; 

static yyErr(n,l)  
{
int retValue_acc;




{


yyAbort(n, "Bodies", l); 

}

return (int )retValue_acc;


}
 

 yy yyglov_Var_Line = (( yy )((-2147483647L))); 

yyeq_LabelList(t1,t2) 

 yy t1,t2;  
{
int retValue_acc;




{


switch(t1[0]){ { 

case 1: 
retValue_acc = (t2[0] == 1) && yyeq_Ident((( yy )t1[1]), (( yy )t2[1])) && yyeq_Label((( yy )t1[2]), (( yy )t2[2])) && yyeq_LabelList((( yy )t1[3]), (( yy )t2[3]));
return (int )retValue_acc;
 

case 2: 
retValue_acc = (t2[0] == 2);
return (int )retValue_acc;
 } } 

}

return (int )retValue_acc;


}
 

yyPrint_LabelList(t) 

 yy t;  
{
int retValue_acc;




{


switch(t[0]){ { 

case 1: yyTerm("lablist"); 

yyFirstArg(); 

yyPrint_Ident((( yy )t[1])); 

yyNextArg(); 

yyPrint_Label((( yy )t[2])); 

yyNextArg(); 

yyPrint_LabelList((( yy )t[3])); 

yyEndArgs(); 

break; 

case 2: yyTerm("lablist_nil"); 

yyNoArgs(); 

break; } } 

}

return (int )retValue_acc;


}
 

yybroadcast_LabelList(t,In,Out,Handler) 

 yy t,In,*Out; 

int (*Handler)();  
{
int retValue_acc;




{




 yy A,B;

A = In; 

if ((!Handler(yybroadcast_LabelList, t, In, Out))){
{ 

switch(t[0]){ { 

case 1: yybroadcast_Ident((( yy )t[1]), A, (&B), Handler); 

yybroadcast_Label((( yy )t[2]), B, (&A), Handler); 

yybroadcast_LabelList((( yy )t[3]), A, (&B), Handler); 

(*Out) = B; 

break; 

case 2: (*Out) = A; 

break; } } } }

}

return (int )retValue_acc;


}
 

yyeq_LabIdList(t1,t2) 

 yy t1,t2;  
{
int retValue_acc;




{


switch(t1[0]){ { 

case 1: 
retValue_acc = (t2[0] == 1) && yyeq_Ident((( yy )t1[1]), (( yy )t2[1])) && yyeq_LabIdList((( yy )t1[2]), (( yy )t2[2]));
return (int )retValue_acc;
 

case 2: 
retValue_acc = (t2[0] == 2);
return (int )retValue_acc;
 } } 

}

return (int )retValue_acc;


}
 

yyPrint_LabIdList(t) 

 yy t;  
{
int retValue_acc;




{


switch(t[0]){ { 

case 1: yyTerm("labidlist"); 

yyFirstArg(); 

yyPrint_Ident((( yy )t[1])); 

yyNextArg(); 

yyPrint_LabIdList((( yy )t[2])); 

yyEndArgs(); 

break; 

case 2: yyTerm("labidlist_nil"); 

yyNoArgs(); 

break; } } 

}

return (int )retValue_acc;


}
 

yybroadcast_LabIdList(t,In,Out,Handler) 

 yy t,In,*Out; 

int (*Handler)();  
{
int retValue_acc;




{




 yy A,B;

A = In; 

if ((!Handler(yybroadcast_LabIdList, t, In, Out))){
{ 

switch(t[0]){ { 

case 1: yybroadcast_Ident((( yy )t[1]), A, (&B), Handler); 

yybroadcast_LabIdList((( yy )t[2]), B, (&A), Handler); 

(*Out) = A; 

break; 

case 2: (*Out) = A; 

break; } } } }

}

return (int )retValue_acc;


}
 

yyeq_SwitchStack(t1,t2) 

 yy t1,t2;  
{
int retValue_acc;




{


switch(t1[0]){ { 

case 1: 
retValue_acc = (t2[0] == 1) && yyeq_SwitchDescr((( yy )t1[1]), (( yy )t2[1])) && yyeq_SwitchStack((( yy )t1[2]), (( yy )t2[2]));
return (int )retValue_acc;
 

case 2: 
retValue_acc = (t2[0] == 2);
return (int )retValue_acc;
 } } 

}

return (int )retValue_acc;


}
 

yyPrint_SwitchStack(t) 

 yy t;  
{
int retValue_acc;




{


switch(t[0]){ { 

case 1: yyTerm("switchstack"); 

yyFirstArg(); 

yyPrint_SwitchDescr((( yy )t[1])); 

yyNextArg(); 

yyPrint_SwitchStack((( yy )t[2])); 

yyEndArgs(); 

break; 

case 2: yyTerm("nil"); 

yyNoArgs(); 

break; } } 

}

return (int )retValue_acc;


}
 

yybroadcast_SwitchStack(t,In,Out,Handler) 

 yy t,In,*Out; 

int (*Handler)();  
{
int retValue_acc;




{




 yy A,B;

A = In; 

if ((!Handler(yybroadcast_SwitchStack, t, In, Out))){
{ 

switch(t[0]){ { 

case 1: yybroadcast_SwitchDescr((( yy )t[1]), A, (&B), Handler); 

yybroadcast_SwitchStack((( yy )t[2]), B, (&A), Handler); 

(*Out) = A; 

break; 

case 2: (*Out) = A; 

break; } } } }

}

return (int )retValue_acc;


}
 

yyeq_SwitchDescr(t1,t2) 

 yy t1,t2;  
{
int retValue_acc;




{


switch(t1[0]){ { 

case 1: 
retValue_acc = (t2[0] == 1) && yyeq_IR((( yy )t1[1]), (( yy )t2[1])) && yyeq_Tp((( yy )t1[2]), (( yy )t2[2])) && yyeq_CaseList((( yy )t1[3]), (( yy )t2[3])) && yyeq_Default((( yy )t1[4]), (( yy )t2[4])) && yyeq_Label((( yy )t1[5]), (( yy )t2[5]));
return (int )retValue_acc;
 } } 

}

return (int )retValue_acc;


}
 

yyPrint_SwitchDescr(t) 

 yy t;  
{
int retValue_acc;




{


switch(t[0]){ { 

case 1: yyTerm("switch_descr"); 

yyFirstArg(); 

yyPrint_IR((( yy )t[1])); 

yyNextArg(); 

yyPrint_Tp((( yy )t[2])); 

yyNextArg(); 

yyPrint_CaseList((( yy )t[3])); 

yyNextArg(); 

yyPrint_Default((( yy )t[4])); 

yyNextArg(); 

yyPrint_Label((( yy )t[5])); 

yyEndArgs(); 

break; } } 

}

return (int )retValue_acc;


}
 

yybroadcast_SwitchDescr(t,In,Out,Handler) 

 yy t,In,*Out; 

int (*Handler)();  
{
int retValue_acc;




{




 yy A,B;

A = In; 

if ((!Handler(yybroadcast_SwitchDescr, t, In, Out))){
{ 

switch(t[0]){ { 

case 1: yybroadcast_IR((( yy )t[1]), A, (&B), Handler); 

yybroadcast_CaseList((( yy )t[3]), B, (&A), Handler); 

yybroadcast_Default((( yy )t[4]), A, (&B), Handler); 

yybroadcast_Label((( yy )t[5]), B, (&A), Handler); 

(*Out) = A; 

break; } } } }

}

return (int )retValue_acc;


}
 

yyeq_Default(t1,t2) 

 yy t1,t2;  
{
int retValue_acc;




{


switch(t1[0]){ { 

case 1: 
retValue_acc = (t2[0] == 1);
return (int )retValue_acc;
 

case 2: 
retValue_acc = (t2[0] == 2) && yyeq_Label((( yy )t1[1]), (( yy )t2[1]));
return (int )retValue_acc;
 } } 

}

return (int )retValue_acc;


}
 

yyPrint_Default(t) 

 yy t;  
{
int retValue_acc;




{


switch(t[0]){ { 

case 1: yyTerm("no_default"); 

yyNoArgs(); 

break; 

case 2: yyTerm("default"); 

yyFirstArg(); 

yyPrint_Label((( yy )t[1])); 

yyEndArgs(); 

break; } } 

}

return (int )retValue_acc;


}
 

yybroadcast_Default(t,In,Out,Handler) 

 yy t,In,*Out; 

int (*Handler)();  
{
int retValue_acc;




{




 yy A,B;

A = In; 

if ((!Handler(yybroadcast_Default, t, In, Out))){
{ 

switch(t[0]){ { 

case 1: (*Out) = A; 

break; 

case 2: yybroadcast_Label((( yy )t[1]), A, (&B), Handler); 

(*Out) = B; 

break; } } } }

}

return (int )retValue_acc;


}
 

yyeq_EndLabelStack(t1,t2) 

 yy t1,t2;  
{
int retValue_acc;




{


switch(t1[0]){ { 

case 1: 
retValue_acc = (t2[0] == 1) && yyeq_Label((( yy )t1[1]), (( yy )t2[1])) && yyeq_EndLabelStack((( yy )t1[2]), (( yy )t2[2]));
return (int )retValue_acc;
 

case 2: 
retValue_acc = (t2[0] == 2);
return (int )retValue_acc;
 } } 

}

return (int )retValue_acc;


}
 

yyPrint_EndLabelStack(t) 

 yy t;  
{
int retValue_acc;




{


switch(t[0]){ { 

case 1: yyTerm("endlabel_stack"); 

yyFirstArg(); 

yyPrint_Label((( yy )t[1])); 

yyNextArg(); 

yyPrint_EndLabelStack((( yy )t[2])); 

yyEndArgs(); 

break; 

case 2: yyTerm("endlabel_stack_nil"); 

yyNoArgs(); 

break; } } 

}

return (int )retValue_acc;


}
 

yybroadcast_EndLabelStack(t,In,Out,Handler) 

 yy t,In,*Out; 

int (*Handler)();  
{
int retValue_acc;




{




 yy A,B;

A = In; 

if ((!Handler(yybroadcast_EndLabelStack, t, In, Out))){
{ 

switch(t[0]){ { 

case 1: yybroadcast_Label((( yy )t[1]), A, (&B), Handler); 

yybroadcast_EndLabelStack((( yy )t[2]), B, (&A), Handler); 

(*Out) = A; 

break; 

case 2: (*Out) = A; 

break; } } } }

}

return (int )retValue_acc;


}
 

yyeq_ContinueStack(t1,t2) 

 yy t1,t2;  
{
int retValue_acc;




{


switch(t1[0]){ { 

case 1: 
retValue_acc = (t2[0] == 1) && yyeq_Label((( yy )t1[1]), (( yy )t2[1])) && yyeq_ContinueStack((( yy )t1[2]), (( yy )t2[2]));
return (int )retValue_acc;
 

case 2: 
retValue_acc = (t2[0] == 2);
return (int )retValue_acc;
 } } 

}

return (int )retValue_acc;


}
 

yyPrint_ContinueStack(t) 

 yy t;  
{
int retValue_acc;




{


switch(t[0]){ { 

case 1: yyTerm("continue_stack"); 

yyFirstArg(); 

yyPrint_Label((( yy )t[1])); 

yyNextArg(); 

yyPrint_ContinueStack((( yy )t[2])); 

yyEndArgs(); 

break; 

case 2: yyTerm("continue_stack_nil"); 

yyNoArgs(); 

break; } } 

}

return (int )retValue_acc;


}
 

yybroadcast_ContinueStack(t,In,Out,Handler) 

 yy t,In,*Out; 

int (*Handler)();  
{
int retValue_acc;




{




 yy A,B;

A = In; 

if ((!Handler(yybroadcast_ContinueStack, t, In, Out))){
{ 

switch(t[0]){ { 

case 1: yybroadcast_Label((( yy )t[1]), A, (&B), Handler); 

yybroadcast_ContinueStack((( yy )t[2]), B, (&A), Handler); 

(*Out) = A; 

break; 

case 2: (*Out) = A; 

break; } } } }

}

return (int )retValue_acc;


}
 

 yy yyglov_Var_FullLabelList = (( yy )((-2147483647L))); 

 yy yyglov_Var_LabelList = (( yy )((-2147483647L))); 

 yy yyglov_Var_EndLabelStack = (( yy )((-2147483647L))); 

 yy yyglov_Var_ContinueStack = (( yy )((-2147483647L))); 

 yy yyglov_Var_SwitchStack = (( yy )((-2147483647L))); 

yyeq_L_OR_R_VALUE(t1,t2) 

 yy t1,t2;  
{
int retValue_acc;




{


switch(t1[0]){ { 

case 1: 
retValue_acc = (t2[0] == 1);
return (int )retValue_acc;
 

case 2: 
retValue_acc = (t2[0] == 2);
return (int )retValue_acc;
 } } 

}

return (int )retValue_acc;


}
 

yyPrint_L_OR_R_VALUE(t) 

 yy t;  
{
int retValue_acc;




{


switch(t[0]){ { 

case 1: yyTerm("lvalue"); 

yyNoArgs(); 

break; 

case 2: yyTerm("rvalue"); 

yyNoArgs(); 

break; } } 

}

return (int )retValue_acc;


}
 

yybroadcast_L_OR_R_VALUE(t,In,Out,Handler) 

 yy t,In,*Out; 

int (*Handler)();  
{
int retValue_acc;




{




 yy A,B;

A = In; 

if ((!Handler(yybroadcast_L_OR_R_VALUE, t, In, Out))){
{ 

switch(t[0]){ { 

case 1: (*Out) = A; 

break; 

case 2: (*Out) = A; 

break; } } } }

}

return (int )retValue_acc;


}
 

 yy yyglov_MatchContext = (( yy )((-2147483647L))); 

yyeq_Flag(t1,t2) 

 yy t1,t2;  
{
int retValue_acc;




{


switch(t1[0]){ { 

case 1: 
retValue_acc = (t2[0] == 1);
return (int )retValue_acc;
 

case 2: 
retValue_acc = (t2[0] == 2);
return (int )retValue_acc;
 } } 

}

return (int )retValue_acc;


}
 

yyPrint_Flag(t) 

 yy t;  
{
int retValue_acc;




{


switch(t[0]){ { 

case 1: yyTerm("yes"); 

yyNoArgs(); 

break; 

case 2: yyTerm("no"); 

yyNoArgs(); 

break; } } 

}

return (int )retValue_acc;


}
 

yybroadcast_Flag(t,In,Out,Handler) 

 yy t,In,*Out; 

int (*Handler)();  
{
int retValue_acc;




{




 yy A,B;

A = In; 

if ((!Handler(yybroadcast_Flag, t, In, Out))){
{ 

switch(t[0]){ { 

case 1: (*Out) = A; 

break; 

case 2: (*Out) = A; 

break; } } } }

}

return (int )retValue_acc;


}
 

trafo_begin_function()  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yy_1_1;



 yy yy_2_1;



 yy yy_3_1;



 yy yy_4_1;



 yy yy_5;

yyb = yyh; 

yyh += 5; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyb + 0; 

yy_1_1[0] = 2; 

PUTVarLabelList(yy_1_1); 

yy_2_1 = yyb + 1; 

yy_2_1[0] = 2; 

PUTVarFullLabelList(yy_2_1); 

yy_3_1 = yyb + 2; 

yy_3_1[0] = 2; 

PUTVarContinueStack(yy_3_1); 

yy_4_1 = yyb + 3; 

yy_4_1[0] = 2; 

PUTVarEndLabelStack(yy_4_1); 

yy_5 = yyb + 4; 

yy_5[0] = 2; 

yyglov_Var_SwitchStack = yy_5; 


return (int )retValue_acc;
 } 

}

return (int )retValue_acc;


}
 

trafo_expr_const(yyin_1,yyout_1) 

 yy yyin_1; 

 yy *yyout_1;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yyv_E;



 yy yy_0_1;



 yy yy_0_2;



 yy yy_1_1;



 yy yy_2_1;

yy_0_1 = yyin_1; 

yyv_E = yy_0_1; 

yyb = yyh; 

yyh += 1; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_E; 

if ((!test_illegal_const_expr(yy_1_1))){
goto yyfl_2_1; }

yy_2_1 = ((( yy )"in constant expressions the operator is only allowed as son of sizeof")); 

semantic_error(yy_2_1); 

yy_0_2 = yyb + 0; 

yy_0_2[0] = 6; 

(*yyout_1) = yy_0_2; 


return (int )retValue_acc;
 

yyfl_2_1:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;



 yy yyv_E3;



 yy yy_0_1_4;



 yy yy_0_2;



 yy yy_1_1;



 yy yyv_Res1;



 yy yy_1_2;



 yy yy_2_1;



 yy yy_2_2;



 yy yy_2_3;



 yy yyv_V;



 yy yy_2_4;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 10){
goto yyfl_2_2; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

yy_0_1_4 = ((( yy )yy_0_1[4])); 

if (yy_0_1_1[0] != 1){
goto yyfl_2_2; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 

yyv_E3 = yy_0_1_4; 

yy_1_1 = yyv_E1; 

trafo_expr_const(yy_1_1, (&yy_1_2)); 

yyv_Res1 = yy_1_2; 

yy_2_1 = yyv_Res1; 

yy_2_2 = yyv_E2; 

yy_2_3 = yyv_E3; 

compute_conditional(yy_2_1, yy_2_2, yy_2_3, (&yy_2_4)); 

yyv_V = yy_2_4; 

yy_0_2 = yyv_V; 

(*yyout_1) = yy_0_2; 


return (int )retValue_acc;
 

yyfl_2_2:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yy_0_1_2;



 yy yyv_T;



 yy yy_0_1_2_1;



 yy yyv_E;



 yy yy_0_1_3;



 yy yy_0_2;



 yy yy_1_1;



 yy yyv_Tp1;



 yy yy_1_2;



 yy yy_2_1;



 yy yyv_Res;



 yy yy_2_2;



 yy yy_3_1;



 yy yy_3_2;



 yy yyv_V;



 yy yy_3_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_2_3; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 36){
goto yyfl_2_3; }

if (yy_0_1_2[0] != 3){
goto yyfl_2_3; }

yy_0_1_2_1 = ((( yy )yy_0_1_2[1])); 

yyv_T = yy_0_1_2_1; 

yyv_E = yy_0_1_3; 

yy_1_1 = yyv_T; 

process_type_name(yy_1_1, (&yy_1_2)); 

yyv_Tp1 = yy_1_2; 

yy_2_1 = yyv_E; 

trafo_expr_const(yy_2_1, (&yy_2_2)); 

yyv_Res = yy_2_2; 

yy_3_1 = yyv_Tp1; 

yy_3_2 = yyv_Res; 

compute_cast(yy_3_1, yy_3_2, (&yy_3_3)); 

yyv_V = yy_3_3; 

yy_0_2 = yyv_V; 

(*yyout_1) = yy_0_2; 


return (int )retValue_acc;
 

yyfl_2_3:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;



 yy yy_0_2;



 yy yy_1_1;



 yy yyv_Res1;



 yy yy_1_2;



 yy yy_2_1;



 yy yy_2_2;



 yy yyv_V;



 yy yy_2_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_2_4; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 22){
goto yyfl_2_4; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 

yy_1_1 = yyv_E1; 

trafo_expr_const(yy_1_1, (&yy_1_2)); 

yyv_Res1 = yy_1_2; 

yy_2_1 = yyv_Res1; 

yy_2_2 = yyv_E2; 

compute_orelse(yy_2_1, yy_2_2, (&yy_2_3)); 

yyv_V = yy_2_3; 

yy_0_2 = yyv_V; 

(*yyout_1) = yy_0_2; 


return (int )retValue_acc;
 

yyfl_2_4:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;



 yy yy_0_2;



 yy yy_1_1;



 yy yyv_Res1;



 yy yy_1_2;



 yy yy_2_1;



 yy yy_2_2;



 yy yyv_V;



 yy yy_2_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_2_5; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 23){
goto yyfl_2_5; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 

yy_1_1 = yyv_E1; 

trafo_expr_const(yy_1_1, (&yy_1_2)); 

yyv_Res1 = yy_1_2; 

yy_2_1 = yyv_Res1; 

yy_2_2 = yyv_E2; 

compute_andthen(yy_2_1, yy_2_2, (&yy_2_3)); 

yyv_V = yy_2_3; 

yy_0_2 = yyv_V; 

(*yyout_1) = yy_0_2; 


return (int )retValue_acc;
 

yyfl_2_5:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_Op;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;



 yy yy_0_2;



 yy yy_1_1;



 yy yyv_Res1;



 yy yy_1_2;



 yy yy_2_1;



 yy yyv_Res2;



 yy yy_2_2;



 yy yy_3_1;



 yy yy_3_2;



 yy yy_3_3;



 yy yyv_V;



 yy yy_3_4;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_2_6; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

yyv_Op = yy_0_1_1; 

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 

yy_1_1 = yyv_E1; 

trafo_expr_const(yy_1_1, (&yy_1_2)); 

yyv_Res1 = yy_1_2; 

yy_2_1 = yyv_E2; 

trafo_expr_const(yy_2_1, (&yy_2_2)); 

yyv_Res2 = yy_2_2; 

yy_3_1 = yyv_Op; 

yy_3_2 = yyv_Res1; 

yy_3_3 = yyv_Res2; 

compute_biexpr(yy_3_1, yy_3_2, yy_3_3, (&yy_3_4)); 

yyv_V = yy_3_4; 

yy_0_2 = yyv_V; 

(*yyout_1) = yy_0_2; 


return (int )retValue_acc;
 

yyfl_2_6:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E;



 yy yy_0_1_2;



 yy yy_0_2;



 yy yy_1_1;



 yy yyv_V;



 yy yy_1_2;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 7){
goto yyfl_2_7; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

if (yy_0_1_1[0] != 42){
goto yyfl_2_7; }

yyv_E = yy_0_1_2; 

yy_1_1 = yyv_E; 

trafo_expr_const(yy_1_1, (&yy_1_2)); 

yyv_V = yy_1_2; 

yy_0_2 = yyv_V; 

(*yyout_1) = yy_0_2; 


return (int )retValue_acc;
 

yyfl_2_7:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yy_0_1_2;



 yy yyv_D;



 yy yy_0_1_2_1;



 yy yy_0_2;



 yy yy_0_2_1;



 yy yy_0_2_2;



 yy yy_1_1;



 yy yyv_Tp1;



 yy yy_1_2;



 yy yy_2_1;



 yy yyv_TgtIntConst;



 yy yy_2_2;



 yy yyv_AMode;



 yy yy_3_1;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 7){
goto yyfl_2_8; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

if (yy_0_1_1[0] != 47){
goto yyfl_2_8; }

if (yy_0_1_2[0] != 3){
goto yyfl_2_8; }

yy_0_1_2_1 = ((( yy )yy_0_1_2[1])); 

yyv_D = yy_0_1_2_1; 

yyb = yyh; 

yyh += 3; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_D; 

process_type_name(yy_1_1, (&yy_1_2)); 

yyv_Tp1 = yy_1_2; 

yy_2_1 = yyv_Tp1; 

get_tp_size(yy_2_1, (&yy_2_2)); 

yyv_TgtIntConst = yy_2_2; 

get_ulong_mode((&yy_3_1)); 

yyv_AMode = yy_3_1; 

yy_0_2_1 = yyv_AMode; 

yy_0_2_2 = yyv_TgtIntConst; 

yy_0_2 = yyb + 0; 

yy_0_2[0] = 21; 

yy_0_2[1] = (((long )yy_0_2_1)); 

yy_0_2[2] = (((long )yy_0_2_2)); 

(*yyout_1) = yy_0_2; 


return (int )retValue_acc;
 

yyfl_2_8:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E;



 yy yy_0_1_2;



 yy yy_0_2;



 yy yy_0_2_1;



 yy yy_0_2_2;



 yy yy_1_1;



 yy yy_2_1;



 yy yyv_Tp1;



 yy yy_2_2;



 yy yyv_Res;



 yy yy_2_3;



 yy yy_3_1;



 yy yyv_TgtIntConst;



 yy yy_3_2;



 yy yyv_AMode;



 yy yy_4_1;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 7){
goto yyfl_2_9; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

if (yy_0_1_1[0] != 47){
goto yyfl_2_9; }

yyv_E = yy_0_1_2; 

yyb = yyh; 

yyh += 3; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_E; 

if ((!test_not_valid_lvalue(yy_1_1))){
goto yyfl_2_9; }

yy_2_1 = yyv_E; 

trafo_expr_rvalue(yy_2_1, (&yy_2_2), (&yy_2_3)); 

yyv_Tp1 = yy_2_2; 

yyv_Res = yy_2_3; 

yy_3_1 = yyv_Tp1; 

get_tp_size(yy_3_1, (&yy_3_2)); 

yyv_TgtIntConst = yy_3_2; 

get_ulong_mode((&yy_4_1)); 

yyv_AMode = yy_4_1; 

yy_0_2_1 = yyv_AMode; 

yy_0_2_2 = yyv_TgtIntConst; 

yy_0_2 = yyb + 0; 

yy_0_2[0] = 21; 

yy_0_2[1] = (((long )yy_0_2_1)); 

yy_0_2[2] = (((long )yy_0_2_2)); 

(*yyout_1) = yy_0_2; 


return (int )retValue_acc;
 

yyfl_2_9:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E;



 yy yy_0_1_2;



 yy yy_0_2;



 yy yy_0_2_1;



 yy yy_0_2_2;



 yy yy_1_1;



 yy yyv_Tp1;



 yy yy_1_2;



 yy yyv_Res;



 yy yy_1_3;



 yy yy_2_1;



 yy yyv_TgtIntConst;



 yy yy_2_2;



 yy yyv_AMode;



 yy yy_3_1;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 7){
goto yyfl_2_10; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

if (yy_0_1_1[0] != 47){
goto yyfl_2_10; }

yyv_E = yy_0_1_2; 

yyb = yyh; 

yyh += 3; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_E; 

trafo_expr_lvalue(yy_1_1, (&yy_1_2), (&yy_1_3)); 

yyv_Tp1 = yy_1_2; 

yyv_Res = yy_1_3; 

yy_2_1 = yyv_Tp1; 

get_tp_size(yy_2_1, (&yy_2_2)); 

yyv_TgtIntConst = yy_2_2; 

get_ulong_mode((&yy_3_1)); 

yyv_AMode = yy_3_1; 

yy_0_2_1 = yyv_AMode; 

yy_0_2_2 = yyv_TgtIntConst; 

yy_0_2 = yyb + 0; 

yy_0_2[0] = 21; 

yy_0_2[1] = (((long )yy_0_2_1)); 

yy_0_2[2] = (((long )yy_0_2_2)); 

(*yyout_1) = yy_0_2; 


return (int )retValue_acc;
 

yyfl_2_10:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_Op;



 yy yy_0_1_1;



 yy yyv_E;



 yy yy_0_1_2;



 yy yy_0_2;



 yy yy_1_1;



 yy yyv_Res1;



 yy yy_1_2;



 yy yy_2_1;



 yy yy_2_2;



 yy yyv_V;



 yy yy_2_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 7){
goto yyfl_2_11; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yyv_Op = yy_0_1_1; 

yyv_E = yy_0_1_2; 

yy_1_1 = yyv_E; 

trafo_expr_const(yy_1_1, (&yy_1_2)); 

yyv_Res1 = yy_1_2; 

yy_2_1 = yyv_Op; 

yy_2_2 = yyv_Res1; 

compute_unexpr(yy_2_1, yy_2_2, (&yy_2_3)); 

yyv_V = yy_2_3; 

yy_0_2 = yyv_V; 

(*yyout_1) = yy_0_2; 


return (int )retValue_acc;
 

yyfl_2_11:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_Ident;



 yy yy_0_1_1;



 yy yy_0_2;



 yy yy_0_2_1;



 yy yy_0_2_2;



 yy yy_1_1;



 yy yy_1_2;



 yy yyv_TgtIntConst;



 yy yy_1_2_1;



 yy yyv_AMode;



 yy yy_2_1;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 22){
goto yyfl_2_12; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yyv_Ident = yy_0_1_1; 

yyb = yyh; 

yyh += 3; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_Ident; 

TestIdentification(yy_1_1, (&yy_1_2)); 

if (yy_1_2[0] != 6){
goto yyfl_2_12; }

yy_1_2_1 = ((( yy )yy_1_2[1])); 

yyv_TgtIntConst = yy_1_2_1; 

get_slong_mode((&yy_2_1)); 

yyv_AMode = yy_2_1; 

yy_0_2_1 = yyv_AMode; 

yy_0_2_2 = yyv_TgtIntConst; 

yy_0_2 = yyb + 0; 

yy_0_2[0] = 21; 

yy_0_2[1] = (((long )yy_0_2_1)); 

yy_0_2[2] = (((long )yy_0_2_2)); 

(*yyout_1) = yy_0_2; 


return (int )retValue_acc;
 

yyfl_2_12:  ; } 

{ 



 yy yyb;



 yy yyv_E;



 yy yy_0_1;



 yy yy_0_2;



 yy yy_1_1;



 yy yyv_Tp;



 yy yy_2_1;

yy_0_1 = yyin_1; 

yyv_E = yy_0_1; 

yyb = yyh; 

yyh += 1; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = ((( yy )"trafo_expr_const not defined")); 

compiler_error(yy_1_1); 

make_tp((&yy_2_1)); 

yyv_Tp = yy_2_1; 

yy_0_2 = yyb + 0; 

yy_0_2[0] = 6; 

(*yyout_1) = yy_0_2; 


return (int )retValue_acc;
 

yyfl_2_13:  ; } 

yyErr(2, 56); 

}

return (int )retValue_acc;


}
 

trafo_end_function()  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yyv_LabList;



 yy yy_1_1;



 yy yy_2_1;

GETVarFullLabelList((&yy_1_1)); 

yyv_LabList = yy_1_1; 

yy_2_1 = yyv_LabList; 

test_elems_in_labidlist(yy_2_1); 


return (int )retValue_acc;
 } 

}

return (int )retValue_acc;


}
 

GETVarLine(yyout_1) 

 yy *yyout_1;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_X;



 yy yy_1;

yy_1 = yyglov_Var_Line; 

if (yy_1 == (( yy )((-2147483647L)))){
yyErr(1, 158); }

yyv_X = yy_1; 

yy_0_1 = yyv_X; 

(*yyout_1) = yy_0_1; 


return (int )retValue_acc;
 } 

}

return (int )retValue_acc;


}
 

PUTVarLine(yyin_1) 

 yy yyin_1;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yyv_X;



 yy yy_0_1;



 yy yy_1;

yy_0_1 = yyin_1; 

yyv_X = yy_0_1; 

yy_1 = yyv_X; 

yyglov_Var_Line = yy_1; 


return (int )retValue_acc;
 } 

}

return (int )retValue_acc;


}
 

declare_label_if_not_double_declaration(yyin_1) 

 yy yyin_1;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yyv_Id;



 yy yy_0_1;



 yy yyv_L;



 yy yy_1_1;



 yy yy_2_1;



 yy yy_2_2;



 yy yy_3_1;



 yy yy_3_1_1;



 yy yy_3_1_2;

yy_0_1 = yyin_1; 

yyv_Id = yy_0_1; 

yyb = yyh; 

yyh += 3; 

if (yyh > yyhx){
yyExtend(); }

GETVarLabelList((&yy_1_1)); 

yyv_L = yy_1_1; 

yy_2_1 = yyv_Id; 

yy_2_2 = yyv_L; 

check_not_already_declared(yy_2_1, yy_2_2); 

yy_3_1_1 = yyv_Id; 

yy_3_1_2 = yyv_L; 

yy_3_1 = yyb + 0; 

yy_3_1[0] = 1; 

yy_3_1[1] = (((long )yy_3_1_1)); 

yy_3_1[2] = (((long )yy_3_1_2)); 

PUTVarLabelList(yy_3_1); 


return (int )retValue_acc;
 } 

}

return (int )retValue_acc;


}
 

check_not_already_declared(yyin_1,yyin_2) 

 yy yyin_1; 

 yy yyin_2;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yyv_Id;



 yy yy_0_1;



 yy yy_0_2;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yyv_Id = yy_0_1; 

if (yy_0_2[0] != 2){
goto yyfl_15_1; }


return (int )retValue_acc;
 

yyfl_15_1:  ; } 

{ 



 yy yyb;



 yy yyv_Id;



 yy yy_0_1;



 yy yy_0_2;



 yy yyv_Id2;



 yy yy_0_2_1;



 yy yyv_List;



 yy yy_0_2_2;



 yy yy_1_1;



 yy yy_1_2;



 yy yy_2_1;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yyv_Id = yy_0_1; 

if (yy_0_2[0] != 1){
goto yyfl_15_2; }

yy_0_2_1 = ((( yy )yy_0_2[1])); 

yy_0_2_2 = ((( yy )yy_0_2[2])); 

yyv_Id2 = yy_0_2_1; 

yyv_List = yy_0_2_2; 

yy_1_1 = yyv_Id; 

yy_1_2 = yyv_Id2; 

if ((!equal_Ident(yy_1_1, yy_1_2))){
goto yyfl_15_2; }

yy_2_1 = ((( yy )"double definition of label")); 

semantic_error(yy_2_1); 


return (int )retValue_acc;
 

yyfl_15_2:  ; } 

{ 



 yy yyb;



 yy yyv_Id;



 yy yy_0_1;



 yy yy_0_2;



 yy yyv_Id2;



 yy yy_0_2_1;



 yy yyv_List;



 yy yy_0_2_2;



 yy yy_1_1;



 yy yy_1_2;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yyv_Id = yy_0_1; 

if (yy_0_2[0] != 1){
goto yyfl_15_3; }

yy_0_2_1 = ((( yy )yy_0_2[1])); 

yy_0_2_2 = ((( yy )yy_0_2[2])); 

yyv_Id2 = yy_0_2_1; 

yyv_List = yy_0_2_2; 

yy_1_1 = yyv_Id; 

yy_1_2 = yyv_List; 

check_not_already_declared(yy_1_1, yy_1_2); 


return (int )retValue_acc;
 

yyfl_15_3:  ; } 

yyErr(2, 215); 

}

return (int )retValue_acc;


}
 

declare_not_yet_declared_label(yyin_1,yyin_2,yyout_1) 

 yy yyin_1; 

 yy yyin_2; 

 yy *yyout_1;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yyv_Id;



 yy yy_0_1;



 yy yy_0_2;



 yy yy_0_3;



 yy yyv_Label;



 yy yy_1_1;



 yy yyv_L;



 yy yy_2_1;



 yy yy_3_1;



 yy yy_3_1_1;



 yy yy_3_1_2;



 yy yy_3_1_3;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yyv_Id = yy_0_1; 

if (yy_0_2[0] != 2){
goto yyfl_16_1; }

yyb = yyh; 

yyh += 4; 

if (yyh > yyhx){
yyExtend(); }

cg_new_label((&yy_1_1)); 

yyv_Label = yy_1_1; 

GETVarFullLabelList((&yy_2_1)); 

yyv_L = yy_2_1; 

yy_3_1_1 = yyv_Id; 

yy_3_1_2 = yyv_Label; 

yy_3_1_3 = yyv_L; 

yy_3_1 = yyb + 0; 

yy_3_1[0] = 1; 

yy_3_1[1] = (((long )yy_3_1_1)); 

yy_3_1[2] = (((long )yy_3_1_2)); 

yy_3_1[3] = (((long )yy_3_1_3)); 

PUTVarFullLabelList(yy_3_1); 

yy_0_3 = yyv_Label; 

(*yyout_1) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_16_1:  ; } 

{ 



 yy yyb;



 yy yyv_Id;



 yy yy_0_1;



 yy yy_0_2;



 yy yyv_Id1;



 yy yy_0_2_1;



 yy yyv_Label;



 yy yy_0_2_2;



 yy yyv_L;



 yy yy_0_2_3;



 yy yy_0_3;



 yy yy_1_1;



 yy yy_1_2;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yyv_Id = yy_0_1; 

if (yy_0_2[0] != 1){
goto yyfl_16_2; }

yy_0_2_1 = ((( yy )yy_0_2[1])); 

yy_0_2_2 = ((( yy )yy_0_2[2])); 

yy_0_2_3 = ((( yy )yy_0_2[3])); 

yyv_Id1 = yy_0_2_1; 

yyv_Label = yy_0_2_2; 

yyv_L = yy_0_2_3; 

yy_1_1 = yyv_Id; 

yy_1_2 = yyv_Id1; 

if ((!equal_Ident(yy_1_1, yy_1_2))){
goto yyfl_16_2; }

yy_0_3 = yyv_Label; 

(*yyout_1) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_16_2:  ; } 

{ 



 yy yyb;



 yy yyv_Id;



 yy yy_0_1;



 yy yy_0_2;



 yy yyv_Id1;



 yy yy_0_2_1;



 yy yyv_Label1;



 yy yy_0_2_2;



 yy yyv_L;



 yy yy_0_2_3;



 yy yy_0_3;



 yy yy_1_1;



 yy yy_1_2;



 yy yyv_Label;



 yy yy_1_3;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yyv_Id = yy_0_1; 

if (yy_0_2[0] != 1){
goto yyfl_16_3; }

yy_0_2_1 = ((( yy )yy_0_2[1])); 

yy_0_2_2 = ((( yy )yy_0_2[2])); 

yy_0_2_3 = ((( yy )yy_0_2[3])); 

yyv_Id1 = yy_0_2_1; 

yyv_Label1 = yy_0_2_2; 

yyv_L = yy_0_2_3; 

yy_1_1 = yyv_Id; 

yy_1_2 = yyv_L; 

declare_not_yet_declared_label(yy_1_1, yy_1_2, (&yy_1_3)); 

yyv_Label = yy_1_3; 

yy_0_3 = yyv_Label; 

(*yyout_1) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_16_3:  ; } 

yyErr(2, 232); 

}

return (int )retValue_acc;


}
 

test_elems_in_labidlist(yyin_1) 

 yy yyin_1;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_Ident;



 yy yy_0_1_1;



 yy yyv_Label;



 yy yy_0_1_2;



 yy yyv_LabelList;



 yy yy_0_1_3;



 yy yyv_L;



 yy yy_1_1;



 yy yy_2_1;



 yy yy_2_2;



 yy yy_3_1;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 1){
goto yyfl_17_1; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

yyv_Ident = yy_0_1_1; 

yyv_Label = yy_0_1_2; 

yyv_LabelList = yy_0_1_3; 

GETVarLabelList((&yy_1_1)); 

yyv_L = yy_1_1; 

yy_2_1 = yyv_Ident; 

yy_2_2 = yyv_L; 

test_elem_in_list(yy_2_1, yy_2_2); 

yy_3_1 = yyv_LabelList; 

test_elems_in_labidlist(yy_3_1); 


return (int )retValue_acc;
 

yyfl_17_1:  ; } 

{ 



 yy yyb;



 yy yy_0_1;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 2){
goto yyfl_17_2; }


return (int )retValue_acc;
 

yyfl_17_2:  ; } 

yyErr(2, 251); 

}

return (int )retValue_acc;


}
 

test_elem_in_list(yyin_1,yyin_2) 

 yy yyin_1; 

 yy yyin_2;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yyv_Ident;



 yy yy_0_1;



 yy yy_0_2;



 yy yyv_Id2;



 yy yy_0_2_1;



 yy yyv_LabelList;



 yy yy_0_2_2;



 yy yy_1_1;



 yy yy_1_2;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yyv_Ident = yy_0_1; 

if (yy_0_2[0] != 1){
goto yyfl_18_1; }

yy_0_2_1 = ((( yy )yy_0_2[1])); 

yy_0_2_2 = ((( yy )yy_0_2[2])); 

yyv_Id2 = yy_0_2_1; 

yyv_LabelList = yy_0_2_2; 

yy_1_1 = yyv_Ident; 

yy_1_2 = yyv_Id2; 

if ((!equal_Ident(yy_1_1, yy_1_2))){
goto yyfl_18_1; }


return (int )retValue_acc;
 

yyfl_18_1:  ; } 

{ 



 yy yyb;



 yy yyv_Ident;



 yy yy_0_1;



 yy yy_0_2;



 yy yyv_Id2;



 yy yy_0_2_1;



 yy yyv_LabelList;



 yy yy_0_2_2;



 yy yy_1_1;



 yy yy_1_2;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yyv_Ident = yy_0_1; 

if (yy_0_2[0] != 1){
goto yyfl_18_2; }

yy_0_2_1 = ((( yy )yy_0_2[1])); 

yy_0_2_2 = ((( yy )yy_0_2[2])); 

yyv_Id2 = yy_0_2_1; 

yyv_LabelList = yy_0_2_2; 

yy_1_1 = yyv_Ident; 

yy_1_2 = yyv_LabelList; 

test_elem_in_list(yy_1_1, yy_1_2); 


return (int )retValue_acc;
 

yyfl_18_2:  ; } 

{ 



 yy yyb;



 yy yyv_Ident;



 yy yy_0_1;



 yy yy_0_2;



 yy yy_1_1;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yyv_Ident = yy_0_1; 

if (yy_0_2[0] != 2){
goto yyfl_18_3; }

yy_1_1 = ((( yy )"not defined in a labeled statement")); 

semantic_error(yy_1_1); 


return (int )retValue_acc;
 

yyfl_18_3:  ; } 

yyErr(2, 264); 

}

return (int )retValue_acc;


}
 

GETVarFullLabelList(yyout_1) 

 yy *yyout_1;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_L;



 yy yy_1;

yy_1 = yyglov_Var_FullLabelList; 

if (yy_1 == (( yy )((-2147483647L)))){
yyErr(1, 289); }

yyv_L = yy_1; 

yy_0_1 = yyv_L; 

(*yyout_1) = yy_0_1; 


return (int )retValue_acc;
 } 

}

return (int )retValue_acc;


}
 

PUTVarFullLabelList(yyin_1) 

 yy yyin_1;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yyv_L;



 yy yy_0_1;



 yy yy_1;

yy_0_1 = yyin_1; 

yyv_L = yy_0_1; 

yy_1 = yyv_L; 

yyglov_Var_FullLabelList = yy_1; 


return (int )retValue_acc;
 } 

}

return (int )retValue_acc;


}
 

GETVarLabelList(yyout_1) 

 yy *yyout_1;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_L;



 yy yy_1;

yy_1 = yyglov_Var_LabelList; 

if (yy_1 == (( yy )((-2147483647L)))){
yyErr(1, 302); }

yyv_L = yy_1; 

yy_0_1 = yyv_L; 

(*yyout_1) = yy_0_1; 


return (int )retValue_acc;
 } 

}

return (int )retValue_acc;


}
 

PUTVarLabelList(yyin_1) 

 yy yyin_1;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yyv_L;



 yy yy_0_1;



 yy yy_1;

yy_0_1 = yyin_1; 

yyv_L = yy_0_1; 

yy_1 = yyv_L; 

yyglov_Var_LabelList = yy_1; 


return (int )retValue_acc;
 } 

}

return (int )retValue_acc;


}
 

GETVarEndLabelStack(yyout_1) 

 yy *yyout_1;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_X;



 yy yy_1;

yy_1 = yyglov_Var_EndLabelStack; 

if (yy_1 == (( yy )((-2147483647L)))){
yyErr(1, 314); }

yyv_X = yy_1; 

yy_0_1 = yyv_X; 

(*yyout_1) = yy_0_1; 


return (int )retValue_acc;
 } 

}

return (int )retValue_acc;


}
 

PUTVarEndLabelStack(yyin_1) 

 yy yyin_1;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yyv_X;



 yy yy_0_1;



 yy yy_1;

yy_0_1 = yyin_1; 

yyv_X = yy_0_1; 

yy_1 = yyv_X; 

yyglov_Var_EndLabelStack = yy_1; 


return (int )retValue_acc;
 } 

}

return (int )retValue_acc;


}
 

GETVarContinueStack(yyout_1) 

 yy *yyout_1;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_X;



 yy yy_1;

yy_1 = yyglov_Var_ContinueStack; 

if (yy_1 == (( yy )((-2147483647L)))){
yyErr(1, 327); }

yyv_X = yy_1; 

yy_0_1 = yyv_X; 

(*yyout_1) = yy_0_1; 


return (int )retValue_acc;
 } 

}

return (int )retValue_acc;


}
 

PUTVarContinueStack(yyin_1) 

 yy yyin_1;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yyv_X;



 yy yy_0_1;



 yy yy_1;

yy_0_1 = yyin_1; 

yyv_X = yy_0_1; 

yy_1 = yyv_X; 

yyglov_Var_ContinueStack = yy_1; 


return (int )retValue_acc;
 } 

}

return (int )retValue_acc;


}
 

trafo_expr_lvalue(yyin_1,yyout_1,yyout_2) 

 yy yyin_1; 

 yy *yyout_1; 

 yy *yyout_2;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yyv_E;



 yy yy_0_1;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_1_1;



 yy yy_2_1;



 yy yyv_Tp;



 yy yy_3_1;

yy_0_1 = yyin_1; 

yyv_E = yy_0_1; 

yyb = yyh; 

yyh += 1; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_E; 

if ((!test_not_valid_lvalue(yy_1_1))){
goto yyfl_32_1; }

yy_2_1 = ((( yy )"illegal lvalue")); 

semantic_error(yy_2_1); 

make_tp((&yy_3_1)); 

yyv_Tp = yy_3_1; 

yy_0_2 = yyv_Tp; 

yy_0_3 = yyb + 0; 

yy_0_3[0] = 6; 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_32_1:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_Id;



 yy yy_0_1_1;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_1_1;



 yy yyv_ObjDescr;



 yy yy_1_2;



 yy yy_2_1;



 yy yyv_Tp;



 yy yy_2_2;



 yy yyv_Res;



 yy yy_2_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 6){
goto yyfl_32_2; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yyv_Id = yy_0_1_1; 

yy_1_1 = yyv_Id; 

TestIdentification(yy_1_1, (&yy_1_2)); 

yyv_ObjDescr = yy_1_2; 

yy_2_1 = yyv_ObjDescr; 

compute_code_and_get_tp_from_objdescr(yy_2_1, (&yy_2_2), (&yy_2_3)); 

yyv_Tp = yy_2_2; 

yyv_Res = yy_2_3; 

yy_0_2 = yyv_Tp; 

yy_0_3 = yyv_Res; 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_32_2:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_1_1;



 yy yy_1_2;



 yy yy_1_3;



 yy yyv_Tp;



 yy yy_1_4;



 yy yyv_Res3;



 yy yy_1_5;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_32_3; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 4){
goto yyfl_32_3; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 

yyb = yyh; 

yyh += 1; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyb + 0; 

yy_1_1[0] = 1; 

yy_1_2 = yyv_E1; 

yy_1_3 = yyv_E2; 

trafo_expr_subscript(yy_1_1, yy_1_2, yy_1_3, (&yy_1_4), (&yy_1_5)); 

yyv_Tp = yy_1_4; 

yyv_Res3 = yy_1_5; 

yy_0_2 = yyv_Tp; 

yy_0_3 = yyv_Res3; 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_32_3:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E;



 yy yy_0_1_2;



 yy yyv_Id;



 yy yy_0_1_3;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_0_3_1;



 yy yy_0_3_2;



 yy yy_0_3_2_1;



 yy yy_1_1;



 yy yyv_Tp;



 yy yy_1_2;



 yy yyv_Res;



 yy yy_1_3;



 yy yy_2_1;



 yy yy_2_2;



 yy yyv_Tp1;



 yy yy_2_3;



 yy yyv_Offset;



 yy yy_2_4;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 8){
goto yyfl_32_4; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 2){
goto yyfl_32_4; }

yyv_E = yy_0_1_2; 

yyv_Id = yy_0_1_3; 

yyb = yyh; 

yyh += 5; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_E; 

trafo_expr_lvalue(yy_1_1, (&yy_1_2), (&yy_1_3)); 

yyv_Tp = yy_1_2; 

yyv_Res = yy_1_3; 

yy_2_1 = yyv_Tp; 

yy_2_2 = yyv_Id; 

get_offset_and_type(yy_2_1, yy_2_2, (&yy_2_3), (&yy_2_4)); 

yyv_Tp1 = yy_2_3; 

yyv_Offset = yy_2_4; 

yy_0_2 = yyv_Tp1; 

yy_0_3_1 = yyv_Res; 

yy_0_3_2_1 = yyv_Offset; 

yy_0_3_2 = yyb + 3; 

yy_0_3_2[0] = 54; 

yy_0_3_2[1] = (((long )yy_0_3_2_1)); 

yy_0_3 = yyb + 0; 

yy_0_3[0] = 12; 

yy_0_3[1] = (((long )yy_0_3_1)); 

yy_0_3[2] = (((long )yy_0_3_2)); 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_32_4:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E;



 yy yy_0_1_2;



 yy yyv_Id;



 yy yy_0_1_3;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_0_3_1;



 yy yy_0_3_2;



 yy yy_0_3_2_1;



 yy yy_1_1;



 yy yyv_Tp;



 yy yy_1_2;



 yy yyv_Res;



 yy yy_1_3;



 yy yy_2_1;



 yy yyv_Qual;



 yy yy_2_2;



 yy yyv_Tp0;



 yy yy_2_3;



 yy yy_3_1;



 yy yy_3_2;



 yy yyv_Tp1;



 yy yy_3_3;



 yy yyv_Offset;



 yy yy_3_4;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 8){
goto yyfl_32_5; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 3){
goto yyfl_32_5; }

yyv_E = yy_0_1_2; 

yyv_Id = yy_0_1_3; 

yyb = yyh; 

yyh += 5; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_E; 

trafo_expr_rvalue(yy_1_1, (&yy_1_2), (&yy_1_3)); 

yyv_Tp = yy_1_2; 

yyv_Res = yy_1_3; 

yy_2_1 = yyv_Tp; 

test_pointer_type(yy_2_1, (&yy_2_2), (&yy_2_3)); 

yyv_Qual = yy_2_2; 

yyv_Tp0 = yy_2_3; 

yy_3_1 = yyv_Tp0; 

yy_3_2 = yyv_Id; 

get_offset_and_type(yy_3_1, yy_3_2, (&yy_3_3), (&yy_3_4)); 

yyv_Tp1 = yy_3_3; 

yyv_Offset = yy_3_4; 

yy_0_2 = yyv_Tp1; 

yy_0_3_1 = yyv_Res; 

yy_0_3_2_1 = yyv_Offset; 

yy_0_3_2 = yyb + 3; 

yy_0_3_2[0] = 54; 

yy_0_3_2[1] = (((long )yy_0_3_2_1)); 

yy_0_3 = yyb + 0; 

yy_0_3[0] = 12; 

yy_0_3[1] = (((long )yy_0_3_1)); 

yy_0_3[2] = (((long )yy_0_3_2)); 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_32_5:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E;



 yy yy_0_1_2;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_1_1;



 yy yyv_Tp;



 yy yy_1_2;



 yy yyv_Res;



 yy yy_1_3;



 yy yy_2_1;



 yy yyv_Qual;



 yy yy_2_2;



 yy yyv_Tp0;



 yy yy_2_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 7){
goto yyfl_32_6; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

if (yy_0_1_1[0] != 45){
goto yyfl_32_6; }

yyv_E = yy_0_1_2; 

yy_1_1 = yyv_E; 

trafo_expr_rvalue(yy_1_1, (&yy_1_2), (&yy_1_3)); 

yyv_Tp = yy_1_2; 

yyv_Res = yy_1_3; 

yy_2_1 = yyv_Tp; 

test_pointer_type(yy_2_1, (&yy_2_2), (&yy_2_3)); 

yyv_Qual = yy_2_2; 

yyv_Tp0 = yy_2_3; 

yy_0_2 = yyv_Tp0; 

yy_0_3 = yyv_Res; 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_32_6:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_String;



 yy yy_0_1_1;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_0_3_1;



 yy yy_1_1;



 yy yy_1_1_1;



 yy yy_1_1_2;



 yy yy_1_1_3;



 yy yyv_Tp1;



 yy yy_1_2;



 yy yy_2_1;



 yy yy_2_1_1;



 yy yy_2_1_2;



 yy yyv_Tp2;



 yy yy_2_2;



 yy yy_3_1;



 yy yy_3_1_1;



 yy yy_3_1_2;



 yy yyv_Tp;



 yy yy_3_2;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 17){
goto yyfl_32_7; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yyv_String = yy_0_1_1; 

yyb = yyh; 

yyh += 16; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1_1 = yyb + 6; 

yy_1_1_1[0] = 1; 

yy_1_1_2 = yyb + 7; 

yy_1_1_2[0] = 1; 

yy_1_1_3 = yyb + 8; 

yy_1_1_3[0] = 3; 

yy_1_1 = yyb + 2; 

yy_1_1[0] = 13; 

yy_1_1[1] = (((long )yy_1_1_1)); 

yy_1_1[2] = (((long )yy_1_1_2)); 

yy_1_1[3] = (((long )yy_1_1_3)); 

make_type_and_size(yy_1_1, (&yy_1_2)); 

yyv_Tp1 = yy_1_2; 

yy_2_1_1 = yyb + 12; 

yy_2_1_1[0] = 4; 

yy_2_1_2 = yyv_Tp1; 

yy_2_1 = yyb + 9; 

yy_2_1[0] = 12; 

yy_2_1[1] = (((long )yy_2_1_1)); 

yy_2_1[2] = (((long )yy_2_1_2)); 

make_type_and_size(yy_2_1, (&yy_2_2)); 

yyv_Tp2 = yy_2_2; 

yy_3_1_1 = ((( yy )1)); 

yy_3_1_2 = yyv_Tp2; 

yy_3_1 = yyb + 13; 

yy_3_1[0] = 2; 

yy_3_1[1] = (((long )yy_3_1_1)); 

yy_3_1[2] = (((long )yy_3_1_2)); 

make_type_and_size(yy_3_1, (&yy_3_2)); 

yyv_Tp = yy_3_2; 

yy_0_2 = yyv_Tp; 

yy_0_3_1 = yyv_String; 

yy_0_3 = yyb + 0; 

yy_0_3[0] = 8; 

yy_0_3[1] = (((long )yy_0_3_1)); 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_32_7:  ; } 

{ 



 yy yyb;



 yy yyv_E;



 yy yy_0_1;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_1_1;



 yy yyv_Tp;



 yy yy_2_1;

yy_0_1 = yyin_1; 

yyv_E = yy_0_1; 

yyb = yyh; 

yyh += 1; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = ((( yy )"trafo_expr_lvalue not defined")); 

compiler_error(yy_1_1); 

make_tp((&yy_2_1)); 

yyv_Tp = yy_2_1; 

yy_0_2 = yyv_Tp; 

yy_0_3 = yyb + 0; 

yy_0_3[0] = 6; 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_32_8:  ; } 

yyErr(2, 339); 

}

return (int )retValue_acc;


}
 

trafo_expr_subscript(yyin_1,yyin_2,yyin_3,yyout_1,yyout_2) 

 yy yyin_1; 

 yy yyin_2; 

 yy yyin_3; 

 yy *yyout_1; 

 yy *yyout_2;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yyv_Flag;



 yy yy_0_1;



 yy yyv_E1;



 yy yy_0_2;



 yy yyv_E2;



 yy yy_0_3;



 yy yy_0_4;



 yy yy_0_5;



 yy yy_1_1;



 yy yyv_Tp1;



 yy yy_1_2;



 yy yyv_Res1;



 yy yy_1_3;



 yy yy_2_1;



 yy yyv_Tp2;



 yy yy_2_2;



 yy yyv_Res2;



 yy yy_2_3;



 yy yy_3_1;



 yy yyv_D1;



 yy yy_3_2;



 yy yy_4_1;



 yy yyv_D2;



 yy yy_4_2;



 yy yy_5_1;



 yy yy_5_2;



 yy yy_5_3;



 yy yy_5_4;



 yy yy_5_5;



 yy yy_5_6;



 yy yyv_Tp;



 yy yy_5_7;



 yy yyv_Res3;



 yy yy_5_8;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yyv_Flag = yy_0_1; 

yyv_E1 = yy_0_2; 

yyv_E2 = yy_0_3; 

yy_1_1 = yyv_E1; 

trafo_expr_rvalue(yy_1_1, (&yy_1_2), (&yy_1_3)); 

yyv_Tp1 = yy_1_2; 

yyv_Res1 = yy_1_3; 

yy_2_1 = yyv_E2; 

trafo_expr_rvalue(yy_2_1, (&yy_2_2), (&yy_2_3)); 

yyv_Tp2 = yy_2_2; 

yyv_Res2 = yy_2_3; 

yy_3_1 = yyv_Tp1; 

get_tp_descr(yy_3_1, (&yy_3_2)); 

yyv_D1 = yy_3_2; 

yy_4_1 = yyv_Tp2; 

get_tp_descr(yy_4_1, (&yy_4_2)); 

yyv_D2 = yy_4_2; 

yy_5_1 = yyv_Tp1; 

yy_5_2 = yyv_D1; 

yy_5_3 = yyv_Res1; 

yy_5_4 = yyv_Tp2; 

yy_5_5 = yyv_D2; 

yy_5_6 = yyv_Res2; 

test_pointer_type_and_return_subscript_code(yy_5_1, yy_5_2, yy_5_3, yy_5_4, yy_5_5, yy_5_6, (&yy_5_7), (&yy_5_8)); 

yyv_Tp = yy_5_7; 

yyv_Res3 = yy_5_8; 

yy_0_4 = yyv_Tp; 

yy_0_5 = yyv_Res3; 

(*yyout_1) = yy_0_4; 

(*yyout_2) = yy_0_5; 


return (int )retValue_acc;
 } 

}

return (int )retValue_acc;


}
 

trafo_expr_mod_lvalue(yyin_1,yyout_1,yyout_2) 

 yy yyin_1; 

 yy *yyout_1; 

 yy *yyout_2;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yyv_E;



 yy yy_0_1;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_1_1;



 yy yyv_Tp;



 yy yy_1_2;



 yy yyv_IR;



 yy yy_1_3;



 yy yy_2_1;



 yy yyv_Descr;



 yy yy_2_2;



 yy yy_3_1;

yy_0_1 = yyin_1; 

yyv_E = yy_0_1; 

yy_1_1 = yyv_E; 

trafo_expr_lvalue(yy_1_1, (&yy_1_2), (&yy_1_3)); 

yyv_Tp = yy_1_2; 

yyv_IR = yy_1_3; 

yy_2_1 = yyv_Tp; 

get_tp_descr(yy_2_1, (&yy_2_2)); 

yyv_Descr = yy_2_2; 

yy_3_1 = yyv_Descr; 

if ((!test_modifiable_lvalue(yy_3_1))){
goto yyfl_35_1; }

yy_0_2 = yyv_Tp; 

yy_0_3 = yyv_IR; 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_35_1:  ; } 

yyErr(2, 407); 

}

return (int )retValue_acc;


}
 

trafo_expr_rvalue(yyin_1,yyout_1,yyout_2) 

 yy yyin_1; 

 yy *yyout_1; 

 yy *yyout_2;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_0_3_1;



 yy yy_0_3_2;



 yy yy_0_3_3;



 yy yy_1_1;



 yy yyv_Tp1;



 yy yy_1_2;



 yy yyv_Res1;



 yy yy_1_3;



 yy yy_2_1;



 yy yyv_Tp2;



 yy yy_2_2;



 yy yyv_Res2;



 yy yy_2_3;



 yy yy_3_1;



 yy yyv_D;



 yy yy_3_2;



 yy yy_4_1;



 yy yyv_AMode;



 yy yy_4_2;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_36_1; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 35){
goto yyfl_36_1; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 

yyb = yyh; 

yyh += 4; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_E1; 

trafo_expr_rvalue(yy_1_1, (&yy_1_2), (&yy_1_3)); 

yyv_Tp1 = yy_1_2; 

yyv_Res1 = yy_1_3; 

yy_2_1 = yyv_E2; 

trafo_expr_rvalue(yy_2_1, (&yy_2_2), (&yy_2_3)); 

yyv_Tp2 = yy_2_2; 

yyv_Res2 = yy_2_3; 

yy_3_1 = yyv_Tp2; 

get_tp_descr(yy_3_1, (&yy_3_2)); 

yyv_D = yy_3_2; 

yy_4_1 = yyv_D; 

td_map_to_mode(yy_4_1, (&yy_4_2)); 

yyv_AMode = yy_4_2; 

yy_0_2 = yyv_Tp2; 

yy_0_3_1 = yyv_AMode; 

yy_0_3_2 = yyv_Res1; 

yy_0_3_3 = yyv_Res2; 

yy_0_3 = yyb + 0; 

yy_0_3[0] = 45; 

yy_0_3[1] = (((long )yy_0_3_1)); 

yy_0_3[2] = (((long )yy_0_3_2)); 

yy_0_3[3] = (((long )yy_0_3_3)); 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_36_1:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_0_3_1;



 yy yy_0_3_2;



 yy yy_0_3_3;



 yy yy_1_1;



 yy yyv_Tp1;



 yy yy_1_2;



 yy yyv_Lval;



 yy yy_1_3;



 yy yy_2_1;



 yy yyv_Tp2;



 yy yy_2_2;



 yy yyv_Rval;



 yy yy_2_3;



 yy yy_3_1;



 yy yy_3_2;



 yy yy_3_3;



 yy yyv_RvalC;



 yy yy_3_4;



 yy yy_4_1;



 yy yyv_D;



 yy yy_4_2;



 yy yy_5_1;



 yy yyv_AMode;



 yy yy_5_2;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_36_2; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 24){
goto yyfl_36_2; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 

yyb = yyh; 

yyh += 4; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_E1; 

trafo_expr_mod_lvalue(yy_1_1, (&yy_1_2), (&yy_1_3)); 

yyv_Tp1 = yy_1_2; 

yyv_Lval = yy_1_3; 

yy_2_1 = yyv_E2; 

trafo_expr_rvalue(yy_2_1, (&yy_2_2), (&yy_2_3)); 

yyv_Tp2 = yy_2_2; 

yyv_Rval = yy_2_3; 

yy_3_1 = yyv_Tp1; 

yy_3_2 = yyv_Tp2; 

yy_3_3 = yyv_Rval; 

simple_assign_params(yy_3_1, yy_3_2, yy_3_3, (&yy_3_4)); 

yyv_RvalC = yy_3_4; 

yy_4_1 = yyv_Tp1; 

get_tp_descr(yy_4_1, (&yy_4_2)); 

yyv_D = yy_4_2; 

yy_5_1 = yyv_D; 

td_map_to_mode(yy_5_1, (&yy_5_2)); 

yyv_AMode = yy_5_2; 

yy_0_2 = yyv_Tp1; 

yy_0_3_1 = yyv_AMode; 

yy_0_3_2 = yyv_Lval; 

yy_0_3_3 = yyv_RvalC; 

yy_0_3 = yyb + 0; 

yy_0_3[0] = 44; 

yy_0_3[1] = (((long )yy_0_3_1)); 

yy_0_3[2] = (((long )yy_0_3_2)); 

yy_0_3[3] = (((long )yy_0_3_3)); 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_36_2:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_0_3_1;



 yy yy_0_3_2;



 yy yy_0_3_2_1;



 yy yy_0_3_2_2;



 yy yy_0_3_3;



 yy yy_0_3_3_1;



 yy yy_0_3_3_2;



 yy yy_0_3_3_2_1;



 yy yy_0_3_3_3;



 yy yy_1_1;



 yy yyv_Tp1;



 yy yy_1_2;



 yy yyv_Lval;



 yy yy_1_3;



 yy yy_2_1;



 yy yyv_Tp2;



 yy yy_2_2;



 yy yyv_Rval;



 yy yy_2_3;



 yy yy_3_1;



 yy yyv_D1;



 yy yy_3_2;



 yy yy_4_1;



 yy yyv_AMode1;



 yy yy_4_2;



 yy yyv_T;



 yy yy_5_1;



 yy yy_6_1;



 yy yy_6_2;



 yy yy_6_3;



 yy yy_6_4;



 yy yy_6_4_1;



 yy yy_6_4_2;



 yy yy_6_4_2_1;



 yy yy_6_5;



 yy yyv_RvalC1;



 yy yy_6_6;



 yy yyv_RvalC2;



 yy yy_6_7;



 yy yyv_Tp3;



 yy yy_6_8;



 yy yyv_M3;



 yy yy_6_9;



 yy yy_7_1;



 yy yy_7_2;



 yy yy_7_3;



 yy yy_7_3_1;



 yy yy_7_3_2;



 yy yy_7_3_3;



 yy yyv_RvalC;



 yy yy_7_4;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_36_3; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 28){
goto yyfl_36_3; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 

yyb = yyh; 

yyh += 23; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_E1; 

trafo_expr_mod_lvalue(yy_1_1, (&yy_1_2), (&yy_1_3)); 

yyv_Tp1 = yy_1_2; 

yyv_Lval = yy_1_3; 

yy_2_1 = yyv_E2; 

trafo_expr_rvalue(yy_2_1, (&yy_2_2), (&yy_2_3)); 

yyv_Tp2 = yy_2_2; 

yyv_Rval = yy_2_3; 

yy_3_1 = yyv_Tp1; 

get_tp_descr(yy_3_1, (&yy_3_2)); 

yyv_D1 = yy_3_2; 

yy_4_1 = yyv_D1; 

td_map_to_mode(yy_4_1, (&yy_4_2)); 

yyv_AMode1 = yy_4_2; 

cg_new_address_tempo((&yy_5_1)); 

yyv_T = yy_5_1; 

yy_6_1 = yyb + 13; 

yy_6_1[0] = 8; 

yy_6_2 = yyv_Tp1; 

yy_6_3 = yyv_Tp2; 

yy_6_4_1 = yyv_AMode1; 

yy_6_4_2_1 = yyv_T; 

yy_6_4_2 = yyb + 17; 

yy_6_4_2[0] = 50; 

yy_6_4_2[1] = (((long )yy_6_4_2_1)); 

yy_6_4 = yyb + 14; 

yy_6_4[0] = 22; 

yy_6_4[1] = (((long )yy_6_4_1)); 

yy_6_4[2] = (((long )yy_6_4_2)); 

yy_6_5 = yyv_Rval; 

params(yy_6_1, yy_6_2, yy_6_3, yy_6_4, yy_6_5, (&yy_6_6), (&yy_6_7), (&yy_6_8), (&yy_6_9)); 

yyv_RvalC1 = yy_6_6; 

yyv_RvalC2 = yy_6_7; 

yyv_Tp3 = yy_6_8; 

yyv_M3 = yy_6_9; 

yy_7_1 = yyv_Tp1; 

yy_7_2 = yyv_Tp3; 

yy_7_3_1 = yyv_M3; 

yy_7_3_2 = yyv_RvalC1; 

yy_7_3_3 = yyv_RvalC2; 

yy_7_3 = yyb + 19; 

yy_7_3[0] = 42; 

yy_7_3[1] = (((long )yy_7_3_1)); 

yy_7_3[2] = (((long )yy_7_3_2)); 

yy_7_3[3] = (((long )yy_7_3_3)); 

simple_assign_params(yy_7_1, yy_7_2, yy_7_3, (&yy_7_4)); 

yyv_RvalC = yy_7_4; 

yy_0_2 = yyv_Tp1; 

yy_0_3_1 = yyv_AMode1; 

yy_0_3_2_1 = yyv_T; 

yy_0_3_2_2 = yyv_Lval; 

yy_0_3_2 = yyb + 4; 

yy_0_3_2[0] = 49; 

yy_0_3_2[1] = (((long )yy_0_3_2_1)); 

yy_0_3_2[2] = (((long )yy_0_3_2_2)); 

yy_0_3_3_1 = yyv_AMode1; 

yy_0_3_3_2_1 = yyv_T; 

yy_0_3_3_2 = yyb + 11; 

yy_0_3_3_2[0] = 50; 

yy_0_3_3_2[1] = (((long )yy_0_3_3_2_1)); 

yy_0_3_3_3 = yyv_RvalC; 

yy_0_3_3 = yyb + 7; 

yy_0_3_3[0] = 44; 

yy_0_3_3[1] = (((long )yy_0_3_3_1)); 

yy_0_3_3[2] = (((long )yy_0_3_3_2)); 

yy_0_3_3[3] = (((long )yy_0_3_3_3)); 

yy_0_3 = yyb + 0; 

yy_0_3[0] = 45; 

yy_0_3[1] = (((long )yy_0_3_1)); 

yy_0_3[2] = (((long )yy_0_3_2)); 

yy_0_3[3] = (((long )yy_0_3_3)); 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_36_3:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_0_3_1;



 yy yy_0_3_2;



 yy yy_0_3_2_1;



 yy yy_0_3_2_2;



 yy yy_0_3_3;



 yy yy_0_3_3_1;



 yy yy_0_3_3_2;



 yy yy_0_3_3_2_1;



 yy yy_0_3_3_3;



 yy yy_1_1;



 yy yyv_Tp1;



 yy yy_1_2;



 yy yyv_Lval;



 yy yy_1_3;



 yy yy_2_1;



 yy yyv_Tp2;



 yy yy_2_2;



 yy yyv_Rval;



 yy yy_2_3;



 yy yy_3_1;



 yy yyv_D1;



 yy yy_3_2;



 yy yy_4_1;



 yy yyv_AMode1;



 yy yy_4_2;



 yy yyv_T;



 yy yy_5_1;



 yy yy_6_1;



 yy yy_6_2;



 yy yy_6_3;



 yy yy_6_4;



 yy yy_6_4_1;



 yy yy_6_4_2;



 yy yy_6_4_2_1;



 yy yy_6_5;



 yy yyv_RvalC1;



 yy yy_6_6;



 yy yyv_RvalC2;



 yy yy_6_7;



 yy yyv_Tp3;



 yy yy_6_8;



 yy yyv_M3;



 yy yy_6_9;



 yy yy_7_1;



 yy yy_7_2;



 yy yy_7_3;



 yy yy_7_3_1;



 yy yy_7_3_2;



 yy yy_7_3_3;



 yy yyv_RvalC;



 yy yy_7_4;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_36_4; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 29){
goto yyfl_36_4; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 

yyb = yyh; 

yyh += 23; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_E1; 

trafo_expr_mod_lvalue(yy_1_1, (&yy_1_2), (&yy_1_3)); 

yyv_Tp1 = yy_1_2; 

yyv_Lval = yy_1_3; 

yy_2_1 = yyv_E2; 

trafo_expr_rvalue(yy_2_1, (&yy_2_2), (&yy_2_3)); 

yyv_Tp2 = yy_2_2; 

yyv_Rval = yy_2_3; 

yy_3_1 = yyv_Tp1; 

get_tp_descr(yy_3_1, (&yy_3_2)); 

yyv_D1 = yy_3_2; 

yy_4_1 = yyv_D1; 

td_map_to_mode(yy_4_1, (&yy_4_2)); 

yyv_AMode1 = yy_4_2; 

cg_new_address_tempo((&yy_5_1)); 

yyv_T = yy_5_1; 

yy_6_1 = yyb + 13; 

yy_6_1[0] = 9; 

yy_6_2 = yyv_Tp1; 

yy_6_3 = yyv_Tp2; 

yy_6_4_1 = yyv_AMode1; 

yy_6_4_2_1 = yyv_T; 

yy_6_4_2 = yyb + 17; 

yy_6_4_2[0] = 50; 

yy_6_4_2[1] = (((long )yy_6_4_2_1)); 

yy_6_4 = yyb + 14; 

yy_6_4[0] = 22; 

yy_6_4[1] = (((long )yy_6_4_1)); 

yy_6_4[2] = (((long )yy_6_4_2)); 

yy_6_5 = yyv_Rval; 

params(yy_6_1, yy_6_2, yy_6_3, yy_6_4, yy_6_5, (&yy_6_6), (&yy_6_7), (&yy_6_8), (&yy_6_9)); 

yyv_RvalC1 = yy_6_6; 

yyv_RvalC2 = yy_6_7; 

yyv_Tp3 = yy_6_8; 

yyv_M3 = yy_6_9; 

yy_7_1 = yyv_Tp1; 

yy_7_2 = yyv_Tp3; 

yy_7_3_1 = yyv_M3; 

yy_7_3_2 = yyv_RvalC1; 

yy_7_3_3 = yyv_RvalC2; 

yy_7_3 = yyb + 19; 

yy_7_3[0] = 43; 

yy_7_3[1] = (((long )yy_7_3_1)); 

yy_7_3[2] = (((long )yy_7_3_2)); 

yy_7_3[3] = (((long )yy_7_3_3)); 

simple_assign_params(yy_7_1, yy_7_2, yy_7_3, (&yy_7_4)); 

yyv_RvalC = yy_7_4; 

yy_0_2 = yyv_Tp1; 

yy_0_3_1 = yyv_AMode1; 

yy_0_3_2_1 = yyv_T; 

yy_0_3_2_2 = yyv_Lval; 

yy_0_3_2 = yyb + 4; 

yy_0_3_2[0] = 49; 

yy_0_3_2[1] = (((long )yy_0_3_2_1)); 

yy_0_3_2[2] = (((long )yy_0_3_2_2)); 

yy_0_3_3_1 = yyv_AMode1; 

yy_0_3_3_2_1 = yyv_T; 

yy_0_3_3_2 = yyb + 11; 

yy_0_3_3_2[0] = 50; 

yy_0_3_3_2[1] = (((long )yy_0_3_3_2_1)); 

yy_0_3_3_3 = yyv_RvalC; 

yy_0_3_3 = yyb + 7; 

yy_0_3_3[0] = 44; 

yy_0_3_3[1] = (((long )yy_0_3_3_1)); 

yy_0_3_3[2] = (((long )yy_0_3_3_2)); 

yy_0_3_3[3] = (((long )yy_0_3_3_3)); 

yy_0_3 = yyb + 0; 

yy_0_3[0] = 45; 

yy_0_3[1] = (((long )yy_0_3_1)); 

yy_0_3[2] = (((long )yy_0_3_2)); 

yy_0_3[3] = (((long )yy_0_3_3)); 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_36_4:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_0_3_1;



 yy yy_0_3_2;



 yy yy_0_3_2_1;



 yy yy_0_3_2_2;



 yy yy_0_3_3;



 yy yy_0_3_3_1;



 yy yy_0_3_3_2;



 yy yy_0_3_3_2_1;



 yy yy_0_3_3_3;



 yy yy_1_1;



 yy yyv_Tp1;



 yy yy_1_2;



 yy yyv_Lval;



 yy yy_1_3;



 yy yy_2_1;



 yy yyv_Tp2;



 yy yy_2_2;



 yy yyv_Rval;



 yy yy_2_3;



 yy yy_3_1;



 yy yyv_D1;



 yy yy_3_2;



 yy yy_4_1;



 yy yyv_AMode1;



 yy yy_4_2;



 yy yyv_T;



 yy yy_5_1;



 yy yy_6_1;



 yy yy_6_2;



 yy yy_6_3;



 yy yy_6_4;



 yy yy_6_4_1;



 yy yy_6_4_2;



 yy yy_6_4_2_1;



 yy yy_6_5;



 yy yyv_RvalC1;



 yy yy_6_6;



 yy yyv_RvalC2;



 yy yy_6_7;



 yy yyv_Tp3;



 yy yy_6_8;



 yy yyv_M3;



 yy yy_6_9;



 yy yy_7_1;



 yy yy_7_2;



 yy yy_7_3;



 yy yy_7_3_1;



 yy yy_7_3_2;



 yy yy_7_3_3;



 yy yyv_RvalC;



 yy yy_7_4;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_36_5; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 30){
goto yyfl_36_5; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 

yyb = yyh; 

yyh += 23; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_E1; 

trafo_expr_mod_lvalue(yy_1_1, (&yy_1_2), (&yy_1_3)); 

yyv_Tp1 = yy_1_2; 

yyv_Lval = yy_1_3; 

yy_2_1 = yyv_E2; 

trafo_expr_rvalue(yy_2_1, (&yy_2_2), (&yy_2_3)); 

yyv_Tp2 = yy_2_2; 

yyv_Rval = yy_2_3; 

yy_3_1 = yyv_Tp1; 

get_tp_descr(yy_3_1, (&yy_3_2)); 

yyv_D1 = yy_3_2; 

yy_4_1 = yyv_D1; 

td_map_to_mode(yy_4_1, (&yy_4_2)); 

yyv_AMode1 = yy_4_2; 

cg_new_address_tempo((&yy_5_1)); 

yyv_T = yy_5_1; 

yy_6_1 = yyb + 13; 

yy_6_1[0] = 10; 

yy_6_2 = yyv_Tp1; 

yy_6_3 = yyv_Tp2; 

yy_6_4_1 = yyv_AMode1; 

yy_6_4_2_1 = yyv_T; 

yy_6_4_2 = yyb + 17; 

yy_6_4_2[0] = 50; 

yy_6_4_2[1] = (((long )yy_6_4_2_1)); 

yy_6_4 = yyb + 14; 

yy_6_4[0] = 22; 

yy_6_4[1] = (((long )yy_6_4_1)); 

yy_6_4[2] = (((long )yy_6_4_2)); 

yy_6_5 = yyv_Rval; 

params(yy_6_1, yy_6_2, yy_6_3, yy_6_4, yy_6_5, (&yy_6_6), (&yy_6_7), (&yy_6_8), (&yy_6_9)); 

yyv_RvalC1 = yy_6_6; 

yyv_RvalC2 = yy_6_7; 

yyv_Tp3 = yy_6_8; 

yyv_M3 = yy_6_9; 

yy_7_1 = yyv_Tp1; 

yy_7_2 = yyv_Tp3; 

yy_7_3_1 = yyv_M3; 

yy_7_3_2 = yyv_RvalC1; 

yy_7_3_3 = yyv_RvalC2; 

yy_7_3 = yyb + 19; 

yy_7_3[0] = 39; 

yy_7_3[1] = (((long )yy_7_3_1)); 

yy_7_3[2] = (((long )yy_7_3_2)); 

yy_7_3[3] = (((long )yy_7_3_3)); 

simple_assign_params(yy_7_1, yy_7_2, yy_7_3, (&yy_7_4)); 

yyv_RvalC = yy_7_4; 

yy_0_2 = yyv_Tp1; 

yy_0_3_1 = yyv_AMode1; 

yy_0_3_2_1 = yyv_T; 

yy_0_3_2_2 = yyv_Lval; 

yy_0_3_2 = yyb + 4; 

yy_0_3_2[0] = 49; 

yy_0_3_2[1] = (((long )yy_0_3_2_1)); 

yy_0_3_2[2] = (((long )yy_0_3_2_2)); 

yy_0_3_3_1 = yyv_AMode1; 

yy_0_3_3_2_1 = yyv_T; 

yy_0_3_3_2 = yyb + 11; 

yy_0_3_3_2[0] = 50; 

yy_0_3_3_2[1] = (((long )yy_0_3_3_2_1)); 

yy_0_3_3_3 = yyv_RvalC; 

yy_0_3_3 = yyb + 7; 

yy_0_3_3[0] = 44; 

yy_0_3_3[1] = (((long )yy_0_3_3_1)); 

yy_0_3_3[2] = (((long )yy_0_3_3_2)); 

yy_0_3_3[3] = (((long )yy_0_3_3_3)); 

yy_0_3 = yyb + 0; 

yy_0_3[0] = 45; 

yy_0_3[1] = (((long )yy_0_3_1)); 

yy_0_3[2] = (((long )yy_0_3_2)); 

yy_0_3[3] = (((long )yy_0_3_3)); 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_36_5:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_0_3_1;



 yy yy_0_3_2;



 yy yy_0_3_2_1;



 yy yy_0_3_2_2;



 yy yy_0_3_3;



 yy yy_0_3_3_1;



 yy yy_0_3_3_2;



 yy yy_0_3_3_2_1;



 yy yy_0_3_3_3;



 yy yy_1_1;



 yy yyv_Tp1;



 yy yy_1_2;



 yy yyv_Lval;



 yy yy_1_3;



 yy yy_2_1;



 yy yyv_Tp2;



 yy yy_2_2;



 yy yyv_Rval;



 yy yy_2_3;



 yy yy_3_1;



 yy yyv_D1;



 yy yy_3_2;



 yy yy_4_1;



 yy yyv_AMode1;



 yy yy_4_2;



 yy yyv_T;



 yy yy_5_1;



 yy yy_6_1;



 yy yy_6_2;



 yy yy_6_3;



 yy yy_6_3_1;



 yy yy_6_3_2;



 yy yy_6_3_2_1;



 yy yy_6_4;



 yy yyv_RvalPlus;



 yy yy_6_5;



 yy yyv_Tp3;



 yy yy_6_6;



 yy yy_7_1;



 yy yy_7_2;



 yy yy_7_3;



 yy yyv_RvalC;



 yy yy_7_4;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_36_6; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 31){
goto yyfl_36_6; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 

yyb = yyh; 

yyh += 18; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_E1; 

trafo_expr_mod_lvalue(yy_1_1, (&yy_1_2), (&yy_1_3)); 

yyv_Tp1 = yy_1_2; 

yyv_Lval = yy_1_3; 

yy_2_1 = yyv_E2; 

trafo_expr_rvalue(yy_2_1, (&yy_2_2), (&yy_2_3)); 

yyv_Tp2 = yy_2_2; 

yyv_Rval = yy_2_3; 

yy_3_1 = yyv_Tp1; 

get_tp_descr(yy_3_1, (&yy_3_2)); 

yyv_D1 = yy_3_2; 

yy_4_1 = yyv_D1; 

td_map_to_mode(yy_4_1, (&yy_4_2)); 

yyv_AMode1 = yy_4_2; 

cg_new_address_tempo((&yy_5_1)); 

yyv_T = yy_5_1; 

yy_6_1 = yyv_Tp1; 

yy_6_2 = yyv_Tp2; 

yy_6_3_1 = yyv_AMode1; 

yy_6_3_2_1 = yyv_T; 

yy_6_3_2 = yyb + 16; 

yy_6_3_2[0] = 50; 

yy_6_3_2[1] = (((long )yy_6_3_2_1)); 

yy_6_3 = yyb + 13; 

yy_6_3[0] = 22; 

yy_6_3[1] = (((long )yy_6_3_1)); 

yy_6_3[2] = (((long )yy_6_3_2)); 

yy_6_4 = yyv_Rval; 

plus_params(yy_6_1, yy_6_2, yy_6_3, yy_6_4, (&yy_6_5), (&yy_6_6)); 

yyv_RvalPlus = yy_6_5; 

yyv_Tp3 = yy_6_6; 

yy_7_1 = yyv_Tp1; 

yy_7_2 = yyv_Tp3; 

yy_7_3 = yyv_RvalPlus; 

simple_assign_params(yy_7_1, yy_7_2, yy_7_3, (&yy_7_4)); 

yyv_RvalC = yy_7_4; 

yy_0_2 = yyv_Tp1; 

yy_0_3_1 = yyv_AMode1; 

yy_0_3_2_1 = yyv_T; 

yy_0_3_2_2 = yyv_Lval; 

yy_0_3_2 = yyb + 4; 

yy_0_3_2[0] = 49; 

yy_0_3_2[1] = (((long )yy_0_3_2_1)); 

yy_0_3_2[2] = (((long )yy_0_3_2_2)); 

yy_0_3_3_1 = yyv_AMode1; 

yy_0_3_3_2_1 = yyv_T; 

yy_0_3_3_2 = yyb + 11; 

yy_0_3_3_2[0] = 50; 

yy_0_3_3_2[1] = (((long )yy_0_3_3_2_1)); 

yy_0_3_3_3 = yyv_RvalC; 

yy_0_3_3 = yyb + 7; 

yy_0_3_3[0] = 44; 

yy_0_3_3[1] = (((long )yy_0_3_3_1)); 

yy_0_3_3[2] = (((long )yy_0_3_3_2)); 

yy_0_3_3[3] = (((long )yy_0_3_3_3)); 

yy_0_3 = yyb + 0; 

yy_0_3[0] = 45; 

yy_0_3[1] = (((long )yy_0_3_1)); 

yy_0_3[2] = (((long )yy_0_3_2)); 

yy_0_3[3] = (((long )yy_0_3_3)); 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_36_6:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_0_3_1;



 yy yy_0_3_2;



 yy yy_0_3_2_1;



 yy yy_0_3_2_2;



 yy yy_0_3_3;



 yy yy_0_3_3_1;



 yy yy_0_3_3_2;



 yy yy_0_3_3_2_1;



 yy yy_0_3_3_3;



 yy yy_1_1;



 yy yyv_Tp1;



 yy yy_1_2;



 yy yyv_Lval;



 yy yy_1_3;



 yy yy_2_1;



 yy yyv_Tp2;



 yy yy_2_2;



 yy yyv_Rval;



 yy yy_2_3;



 yy yy_3_1;



 yy yyv_D1;



 yy yy_3_2;



 yy yy_4_1;



 yy yyv_AMode1;



 yy yy_4_2;



 yy yyv_T;



 yy yy_5_1;



 yy yy_6_1;



 yy yy_6_2;



 yy yy_6_3;



 yy yy_6_3_1;



 yy yy_6_3_2;



 yy yy_6_3_2_1;



 yy yy_6_4;



 yy yyv_RvalMinus;



 yy yy_6_5;



 yy yyv_Tp3;



 yy yy_6_6;



 yy yy_7_1;



 yy yy_7_2;



 yy yy_7_3;



 yy yyv_RvalC;



 yy yy_7_4;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_36_7; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 32){
goto yyfl_36_7; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 

yyb = yyh; 

yyh += 18; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_E1; 

trafo_expr_mod_lvalue(yy_1_1, (&yy_1_2), (&yy_1_3)); 

yyv_Tp1 = yy_1_2; 

yyv_Lval = yy_1_3; 

yy_2_1 = yyv_E2; 

trafo_expr_rvalue(yy_2_1, (&yy_2_2), (&yy_2_3)); 

yyv_Tp2 = yy_2_2; 

yyv_Rval = yy_2_3; 

yy_3_1 = yyv_Tp1; 

get_tp_descr(yy_3_1, (&yy_3_2)); 

yyv_D1 = yy_3_2; 

yy_4_1 = yyv_D1; 

td_map_to_mode(yy_4_1, (&yy_4_2)); 

yyv_AMode1 = yy_4_2; 

cg_new_address_tempo((&yy_5_1)); 

yyv_T = yy_5_1; 

yy_6_1 = yyv_Tp1; 

yy_6_2 = yyv_Tp2; 

yy_6_3_1 = yyv_AMode1; 

yy_6_3_2_1 = yyv_T; 

yy_6_3_2 = yyb + 16; 

yy_6_3_2[0] = 50; 

yy_6_3_2[1] = (((long )yy_6_3_2_1)); 

yy_6_3 = yyb + 13; 

yy_6_3[0] = 22; 

yy_6_3[1] = (((long )yy_6_3_1)); 

yy_6_3[2] = (((long )yy_6_3_2)); 

yy_6_4 = yyv_Rval; 

minus_params(yy_6_1, yy_6_2, yy_6_3, yy_6_4, (&yy_6_5), (&yy_6_6)); 

yyv_RvalMinus = yy_6_5; 

yyv_Tp3 = yy_6_6; 

yy_7_1 = yyv_Tp1; 

yy_7_2 = yyv_Tp3; 

yy_7_3 = yyv_RvalMinus; 

simple_assign_params(yy_7_1, yy_7_2, yy_7_3, (&yy_7_4)); 

yyv_RvalC = yy_7_4; 

yy_0_2 = yyv_Tp1; 

yy_0_3_1 = yyv_AMode1; 

yy_0_3_2_1 = yyv_T; 

yy_0_3_2_2 = yyv_Lval; 

yy_0_3_2 = yyb + 4; 

yy_0_3_2[0] = 49; 

yy_0_3_2[1] = (((long )yy_0_3_2_1)); 

yy_0_3_2[2] = (((long )yy_0_3_2_2)); 

yy_0_3_3_1 = yyv_AMode1; 

yy_0_3_3_2_1 = yyv_T; 

yy_0_3_3_2 = yyb + 11; 

yy_0_3_3_2[0] = 50; 

yy_0_3_3_2[1] = (((long )yy_0_3_3_2_1)); 

yy_0_3_3_3 = yyv_RvalC; 

yy_0_3_3 = yyb + 7; 

yy_0_3_3[0] = 44; 

yy_0_3_3[1] = (((long )yy_0_3_3_1)); 

yy_0_3_3[2] = (((long )yy_0_3_3_2)); 

yy_0_3_3[3] = (((long )yy_0_3_3_3)); 

yy_0_3 = yyb + 0; 

yy_0_3[0] = 45; 

yy_0_3[1] = (((long )yy_0_3_1)); 

yy_0_3[2] = (((long )yy_0_3_2)); 

yy_0_3[3] = (((long )yy_0_3_3)); 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_36_7:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_0_3_1;



 yy yy_0_3_2;



 yy yy_0_3_2_1;



 yy yy_0_3_2_2;



 yy yy_0_3_3;



 yy yy_0_3_3_1;



 yy yy_0_3_3_2;



 yy yy_0_3_3_2_1;



 yy yy_0_3_3_3;



 yy yy_1_1;



 yy yyv_Tp1;



 yy yy_1_2;



 yy yyv_Lval;



 yy yy_1_3;



 yy yy_2_1;



 yy yyv_Tp2;



 yy yy_2_2;



 yy yyv_Rval;



 yy yy_2_3;



 yy yy_3_1;



 yy yyv_D1;



 yy yy_3_2;



 yy yy_4_1;



 yy yyv_AMode1;



 yy yy_4_2;



 yy yyv_T;



 yy yy_5_1;



 yy yy_6_1;



 yy yy_6_2;



 yy yy_6_3;



 yy yy_6_4;



 yy yy_6_4_1;



 yy yy_6_4_2;



 yy yy_6_4_2_1;



 yy yy_6_5;



 yy yyv_RvalC1;



 yy yy_6_6;



 yy yyv_RvalC2;



 yy yy_6_7;



 yy yyv_Tp3;



 yy yy_6_8;



 yy yyv_M3;



 yy yy_6_9;



 yy yy_7_1;



 yy yy_7_2;



 yy yy_7_3;



 yy yy_7_3_1;



 yy yy_7_3_2;



 yy yy_7_3_3;



 yy yyv_RvalC;



 yy yy_7_4;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_36_8; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 33){
goto yyfl_36_8; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 

yyb = yyh; 

yyh += 23; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_E1; 

trafo_expr_mod_lvalue(yy_1_1, (&yy_1_2), (&yy_1_3)); 

yyv_Tp1 = yy_1_2; 

yyv_Lval = yy_1_3; 

yy_2_1 = yyv_E2; 

trafo_expr_rvalue(yy_2_1, (&yy_2_2), (&yy_2_3)); 

yyv_Tp2 = yy_2_2; 

yyv_Rval = yy_2_3; 

yy_3_1 = yyv_Tp1; 

get_tp_descr(yy_3_1, (&yy_3_2)); 

yyv_D1 = yy_3_2; 

yy_4_1 = yyv_D1; 

td_map_to_mode(yy_4_1, (&yy_4_2)); 

yyv_AMode1 = yy_4_2; 

cg_new_address_tempo((&yy_5_1)); 

yyv_T = yy_5_1; 

yy_6_1 = yyb + 13; 

yy_6_1[0] = 11; 

yy_6_2 = yyv_Tp1; 

yy_6_3 = yyv_Tp2; 

yy_6_4_1 = yyv_AMode1; 

yy_6_4_2_1 = yyv_T; 

yy_6_4_2 = yyb + 17; 

yy_6_4_2[0] = 50; 

yy_6_4_2[1] = (((long )yy_6_4_2_1)); 

yy_6_4 = yyb + 14; 

yy_6_4[0] = 22; 

yy_6_4[1] = (((long )yy_6_4_1)); 

yy_6_4[2] = (((long )yy_6_4_2)); 

yy_6_5 = yyv_Rval; 

params(yy_6_1, yy_6_2, yy_6_3, yy_6_4, yy_6_5, (&yy_6_6), (&yy_6_7), (&yy_6_8), (&yy_6_9)); 

yyv_RvalC1 = yy_6_6; 

yyv_RvalC2 = yy_6_7; 

yyv_Tp3 = yy_6_8; 

yyv_M3 = yy_6_9; 

yy_7_1 = yyv_Tp1; 

yy_7_2 = yyv_Tp3; 

yy_7_3_1 = yyv_M3; 

yy_7_3_2 = yyv_RvalC1; 

yy_7_3_3 = yyv_RvalC2; 

yy_7_3 = yyb + 19; 

yy_7_3[0] = 28; 

yy_7_3[1] = (((long )yy_7_3_1)); 

yy_7_3[2] = (((long )yy_7_3_2)); 

yy_7_3[3] = (((long )yy_7_3_3)); 

simple_assign_params(yy_7_1, yy_7_2, yy_7_3, (&yy_7_4)); 

yyv_RvalC = yy_7_4; 

yy_0_2 = yyv_Tp1; 

yy_0_3_1 = yyv_AMode1; 

yy_0_3_2_1 = yyv_T; 

yy_0_3_2_2 = yyv_Lval; 

yy_0_3_2 = yyb + 4; 

yy_0_3_2[0] = 49; 

yy_0_3_2[1] = (((long )yy_0_3_2_1)); 

yy_0_3_2[2] = (((long )yy_0_3_2_2)); 

yy_0_3_3_1 = yyv_AMode1; 

yy_0_3_3_2_1 = yyv_T; 

yy_0_3_3_2 = yyb + 11; 

yy_0_3_3_2[0] = 50; 

yy_0_3_3_2[1] = (((long )yy_0_3_3_2_1)); 

yy_0_3_3_3 = yyv_RvalC; 

yy_0_3_3 = yyb + 7; 

yy_0_3_3[0] = 44; 

yy_0_3_3[1] = (((long )yy_0_3_3_1)); 

yy_0_3_3[2] = (((long )yy_0_3_3_2)); 

yy_0_3_3[3] = (((long )yy_0_3_3_3)); 

yy_0_3 = yyb + 0; 

yy_0_3[0] = 45; 

yy_0_3[1] = (((long )yy_0_3_1)); 

yy_0_3[2] = (((long )yy_0_3_2)); 

yy_0_3[3] = (((long )yy_0_3_3)); 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_36_8:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_0_3_1;



 yy yy_0_3_2;



 yy yy_0_3_2_1;



 yy yy_0_3_2_2;



 yy yy_0_3_3;



 yy yy_0_3_3_1;



 yy yy_0_3_3_2;



 yy yy_0_3_3_2_1;



 yy yy_0_3_3_3;



 yy yy_1_1;



 yy yyv_Tp1;



 yy yy_1_2;



 yy yyv_Lval;



 yy yy_1_3;



 yy yy_2_1;



 yy yyv_Tp2;



 yy yy_2_2;



 yy yyv_Rval;



 yy yy_2_3;



 yy yy_3_1;



 yy yyv_D1;



 yy yy_3_2;



 yy yy_4_1;



 yy yyv_AMode1;



 yy yy_4_2;



 yy yyv_T;



 yy yy_5_1;



 yy yy_6_1;



 yy yy_6_2;



 yy yy_6_3;



 yy yy_6_4;



 yy yy_6_4_1;



 yy yy_6_4_2;



 yy yy_6_4_2_1;



 yy yy_6_5;



 yy yyv_RvalC1;



 yy yy_6_6;



 yy yyv_RvalC2;



 yy yy_6_7;



 yy yyv_Tp3;



 yy yy_6_8;



 yy yyv_M3;



 yy yy_6_9;



 yy yy_7_1;



 yy yy_7_2;



 yy yy_7_3;



 yy yy_7_3_1;



 yy yy_7_3_2;



 yy yy_7_3_3;



 yy yyv_RvalC;



 yy yy_7_4;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_36_9; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 34){
goto yyfl_36_9; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 

yyb = yyh; 

yyh += 23; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_E1; 

trafo_expr_mod_lvalue(yy_1_1, (&yy_1_2), (&yy_1_3)); 

yyv_Tp1 = yy_1_2; 

yyv_Lval = yy_1_3; 

yy_2_1 = yyv_E2; 

trafo_expr_rvalue(yy_2_1, (&yy_2_2), (&yy_2_3)); 

yyv_Tp2 = yy_2_2; 

yyv_Rval = yy_2_3; 

yy_3_1 = yyv_Tp1; 

get_tp_descr(yy_3_1, (&yy_3_2)); 

yyv_D1 = yy_3_2; 

yy_4_1 = yyv_D1; 

td_map_to_mode(yy_4_1, (&yy_4_2)); 

yyv_AMode1 = yy_4_2; 

cg_new_address_tempo((&yy_5_1)); 

yyv_T = yy_5_1; 

yy_6_1 = yyb + 13; 

yy_6_1[0] = 12; 

yy_6_2 = yyv_Tp1; 

yy_6_3 = yyv_Tp2; 

yy_6_4_1 = yyv_AMode1; 

yy_6_4_2_1 = yyv_T; 

yy_6_4_2 = yyb + 17; 

yy_6_4_2[0] = 50; 

yy_6_4_2[1] = (((long )yy_6_4_2_1)); 

yy_6_4 = yyb + 14; 

yy_6_4[0] = 22; 

yy_6_4[1] = (((long )yy_6_4_1)); 

yy_6_4[2] = (((long )yy_6_4_2)); 

yy_6_5 = yyv_Rval; 

params(yy_6_1, yy_6_2, yy_6_3, yy_6_4, yy_6_5, (&yy_6_6), (&yy_6_7), (&yy_6_8), (&yy_6_9)); 

yyv_RvalC1 = yy_6_6; 

yyv_RvalC2 = yy_6_7; 

yyv_Tp3 = yy_6_8; 

yyv_M3 = yy_6_9; 

yy_7_1 = yyv_Tp1; 

yy_7_2 = yyv_Tp3; 

yy_7_3_1 = yyv_M3; 

yy_7_3_2 = yyv_RvalC1; 

yy_7_3_3 = yyv_RvalC2; 

yy_7_3 = yyb + 19; 

yy_7_3[0] = 29; 

yy_7_3[1] = (((long )yy_7_3_1)); 

yy_7_3[2] = (((long )yy_7_3_2)); 

yy_7_3[3] = (((long )yy_7_3_3)); 

simple_assign_params(yy_7_1, yy_7_2, yy_7_3, (&yy_7_4)); 

yyv_RvalC = yy_7_4; 

yy_0_2 = yyv_Tp1; 

yy_0_3_1 = yyv_AMode1; 

yy_0_3_2_1 = yyv_T; 

yy_0_3_2_2 = yyv_Lval; 

yy_0_3_2 = yyb + 4; 

yy_0_3_2[0] = 49; 

yy_0_3_2[1] = (((long )yy_0_3_2_1)); 

yy_0_3_2[2] = (((long )yy_0_3_2_2)); 

yy_0_3_3_1 = yyv_AMode1; 

yy_0_3_3_2_1 = yyv_T; 

yy_0_3_3_2 = yyb + 11; 

yy_0_3_3_2[0] = 50; 

yy_0_3_3_2[1] = (((long )yy_0_3_3_2_1)); 

yy_0_3_3_3 = yyv_RvalC; 

yy_0_3_3 = yyb + 7; 

yy_0_3_3[0] = 44; 

yy_0_3_3[1] = (((long )yy_0_3_3_1)); 

yy_0_3_3[2] = (((long )yy_0_3_3_2)); 

yy_0_3_3[3] = (((long )yy_0_3_3_3)); 

yy_0_3 = yyb + 0; 

yy_0_3[0] = 45; 

yy_0_3[1] = (((long )yy_0_3_1)); 

yy_0_3[2] = (((long )yy_0_3_2)); 

yy_0_3[3] = (((long )yy_0_3_3)); 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_36_9:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_0_3_1;



 yy yy_0_3_2;



 yy yy_0_3_2_1;



 yy yy_0_3_2_2;



 yy yy_0_3_3;



 yy yy_0_3_3_1;



 yy yy_0_3_3_2;



 yy yy_0_3_3_2_1;



 yy yy_0_3_3_3;



 yy yy_1_1;



 yy yyv_Tp1;



 yy yy_1_2;



 yy yyv_Lval;



 yy yy_1_3;



 yy yy_2_1;



 yy yyv_Tp2;



 yy yy_2_2;



 yy yyv_Rval;



 yy yy_2_3;



 yy yy_3_1;



 yy yyv_D1;



 yy yy_3_2;



 yy yy_4_1;



 yy yyv_AMode1;



 yy yy_4_2;



 yy yyv_T;



 yy yy_5_1;



 yy yy_6_1;



 yy yy_6_2;



 yy yy_6_3;



 yy yy_6_4;



 yy yy_6_4_1;



 yy yy_6_4_2;



 yy yy_6_4_2_1;



 yy yy_6_5;



 yy yyv_RvalC1;



 yy yy_6_6;



 yy yyv_RvalC2;



 yy yy_6_7;



 yy yyv_Tp3;



 yy yy_6_8;



 yy yyv_M3;



 yy yy_6_9;



 yy yy_7_1;



 yy yy_7_2;



 yy yy_7_3;



 yy yy_7_3_1;



 yy yy_7_3_2;



 yy yy_7_3_3;



 yy yyv_RvalC;



 yy yy_7_4;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_36_10; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 25){
goto yyfl_36_10; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 

yyb = yyh; 

yyh += 23; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_E1; 

trafo_expr_mod_lvalue(yy_1_1, (&yy_1_2), (&yy_1_3)); 

yyv_Tp1 = yy_1_2; 

yyv_Lval = yy_1_3; 

yy_2_1 = yyv_E2; 

trafo_expr_rvalue(yy_2_1, (&yy_2_2), (&yy_2_3)); 

yyv_Tp2 = yy_2_2; 

yyv_Rval = yy_2_3; 

yy_3_1 = yyv_Tp1; 

get_tp_descr(yy_3_1, (&yy_3_2)); 

yyv_D1 = yy_3_2; 

yy_4_1 = yyv_D1; 

td_map_to_mode(yy_4_1, (&yy_4_2)); 

yyv_AMode1 = yy_4_2; 

cg_new_address_tempo((&yy_5_1)); 

yyv_T = yy_5_1; 

yy_6_1 = yyb + 13; 

yy_6_1[0] = 21; 

yy_6_2 = yyv_Tp1; 

yy_6_3 = yyv_Tp2; 

yy_6_4_1 = yyv_AMode1; 

yy_6_4_2_1 = yyv_T; 

yy_6_4_2 = yyb + 17; 

yy_6_4_2[0] = 50; 

yy_6_4_2[1] = (((long )yy_6_4_2_1)); 

yy_6_4 = yyb + 14; 

yy_6_4[0] = 22; 

yy_6_4[1] = (((long )yy_6_4_1)); 

yy_6_4[2] = (((long )yy_6_4_2)); 

yy_6_5 = yyv_Rval; 

params(yy_6_1, yy_6_2, yy_6_3, yy_6_4, yy_6_5, (&yy_6_6), (&yy_6_7), (&yy_6_8), (&yy_6_9)); 

yyv_RvalC1 = yy_6_6; 

yyv_RvalC2 = yy_6_7; 

yyv_Tp3 = yy_6_8; 

yyv_M3 = yy_6_9; 

yy_7_1 = yyv_Tp1; 

yy_7_2 = yyv_Tp3; 

yy_7_3_1 = yyv_M3; 

yy_7_3_2 = yyv_RvalC1; 

yy_7_3_3 = yyv_RvalC2; 

yy_7_3 = yyb + 19; 

yy_7_3[0] = 30; 

yy_7_3[1] = (((long )yy_7_3_1)); 

yy_7_3[2] = (((long )yy_7_3_2)); 

yy_7_3[3] = (((long )yy_7_3_3)); 

simple_assign_params(yy_7_1, yy_7_2, yy_7_3, (&yy_7_4)); 

yyv_RvalC = yy_7_4; 

yy_0_2 = yyv_Tp1; 

yy_0_3_1 = yyv_AMode1; 

yy_0_3_2_1 = yyv_T; 

yy_0_3_2_2 = yyv_Lval; 

yy_0_3_2 = yyb + 4; 

yy_0_3_2[0] = 49; 

yy_0_3_2[1] = (((long )yy_0_3_2_1)); 

yy_0_3_2[2] = (((long )yy_0_3_2_2)); 

yy_0_3_3_1 = yyv_AMode1; 

yy_0_3_3_2_1 = yyv_T; 

yy_0_3_3_2 = yyb + 11; 

yy_0_3_3_2[0] = 50; 

yy_0_3_3_2[1] = (((long )yy_0_3_3_2_1)); 

yy_0_3_3_3 = yyv_RvalC; 

yy_0_3_3 = yyb + 7; 

yy_0_3_3[0] = 44; 

yy_0_3_3[1] = (((long )yy_0_3_3_1)); 

yy_0_3_3[2] = (((long )yy_0_3_3_2)); 

yy_0_3_3[3] = (((long )yy_0_3_3_3)); 

yy_0_3 = yyb + 0; 

yy_0_3[0] = 45; 

yy_0_3[1] = (((long )yy_0_3_1)); 

yy_0_3[2] = (((long )yy_0_3_2)); 

yy_0_3[3] = (((long )yy_0_3_3)); 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_36_10:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_0_3_1;



 yy yy_0_3_2;



 yy yy_0_3_2_1;



 yy yy_0_3_2_2;



 yy yy_0_3_3;



 yy yy_0_3_3_1;



 yy yy_0_3_3_2;



 yy yy_0_3_3_2_1;



 yy yy_0_3_3_3;



 yy yy_1_1;



 yy yyv_Tp1;



 yy yy_1_2;



 yy yyv_Lval;



 yy yy_1_3;



 yy yy_2_1;



 yy yyv_Tp2;



 yy yy_2_2;



 yy yyv_Rval;



 yy yy_2_3;



 yy yy_3_1;



 yy yyv_D1;



 yy yy_3_2;



 yy yy_4_1;



 yy yyv_AMode1;



 yy yy_4_2;



 yy yyv_T;



 yy yy_5_1;



 yy yy_6_1;



 yy yy_6_2;



 yy yy_6_3;



 yy yy_6_4;



 yy yy_6_4_1;



 yy yy_6_4_2;



 yy yy_6_4_2_1;



 yy yy_6_5;



 yy yyv_RvalC1;



 yy yy_6_6;



 yy yyv_RvalC2;



 yy yy_6_7;



 yy yyv_Tp3;



 yy yy_6_8;



 yy yyv_M3;



 yy yy_6_9;



 yy yy_7_1;



 yy yy_7_2;



 yy yy_7_3;



 yy yy_7_3_1;



 yy yy_7_3_2;



 yy yy_7_3_3;



 yy yyv_RvalC;



 yy yy_7_4;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_36_11; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 26){
goto yyfl_36_11; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 

yyb = yyh; 

yyh += 23; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_E1; 

trafo_expr_mod_lvalue(yy_1_1, (&yy_1_2), (&yy_1_3)); 

yyv_Tp1 = yy_1_2; 

yyv_Lval = yy_1_3; 

yy_2_1 = yyv_E2; 

trafo_expr_rvalue(yy_2_1, (&yy_2_2), (&yy_2_3)); 

yyv_Tp2 = yy_2_2; 

yyv_Rval = yy_2_3; 

yy_3_1 = yyv_Tp1; 

get_tp_descr(yy_3_1, (&yy_3_2)); 

yyv_D1 = yy_3_2; 

yy_4_1 = yyv_D1; 

td_map_to_mode(yy_4_1, (&yy_4_2)); 

yyv_AMode1 = yy_4_2; 

cg_new_address_tempo((&yy_5_1)); 

yyv_T = yy_5_1; 

yy_6_1 = yyb + 13; 

yy_6_1[0] = 19; 

yy_6_2 = yyv_Tp1; 

yy_6_3 = yyv_Tp2; 

yy_6_4_1 = yyv_AMode1; 

yy_6_4_2_1 = yyv_T; 

yy_6_4_2 = yyb + 17; 

yy_6_4_2[0] = 50; 

yy_6_4_2[1] = (((long )yy_6_4_2_1)); 

yy_6_4 = yyb + 14; 

yy_6_4[0] = 22; 

yy_6_4[1] = (((long )yy_6_4_1)); 

yy_6_4[2] = (((long )yy_6_4_2)); 

yy_6_5 = yyv_Rval; 

params(yy_6_1, yy_6_2, yy_6_3, yy_6_4, yy_6_5, (&yy_6_6), (&yy_6_7), (&yy_6_8), (&yy_6_9)); 

yyv_RvalC1 = yy_6_6; 

yyv_RvalC2 = yy_6_7; 

yyv_Tp3 = yy_6_8; 

yyv_M3 = yy_6_9; 

yy_7_1 = yyv_Tp1; 

yy_7_2 = yyv_Tp3; 

yy_7_3_1 = yyv_M3; 

yy_7_3_2 = yyv_RvalC1; 

yy_7_3_3 = yyv_RvalC2; 

yy_7_3 = yyb + 19; 

yy_7_3[0] = 32; 

yy_7_3[1] = (((long )yy_7_3_1)); 

yy_7_3[2] = (((long )yy_7_3_2)); 

yy_7_3[3] = (((long )yy_7_3_3)); 

simple_assign_params(yy_7_1, yy_7_2, yy_7_3, (&yy_7_4)); 

yyv_RvalC = yy_7_4; 

yy_0_2 = yyv_Tp1; 

yy_0_3_1 = yyv_AMode1; 

yy_0_3_2_1 = yyv_T; 

yy_0_3_2_2 = yyv_Lval; 

yy_0_3_2 = yyb + 4; 

yy_0_3_2[0] = 49; 

yy_0_3_2[1] = (((long )yy_0_3_2_1)); 

yy_0_3_2[2] = (((long )yy_0_3_2_2)); 

yy_0_3_3_1 = yyv_AMode1; 

yy_0_3_3_2_1 = yyv_T; 

yy_0_3_3_2 = yyb + 11; 

yy_0_3_3_2[0] = 50; 

yy_0_3_3_2[1] = (((long )yy_0_3_3_2_1)); 

yy_0_3_3_3 = yyv_RvalC; 

yy_0_3_3 = yyb + 7; 

yy_0_3_3[0] = 44; 

yy_0_3_3[1] = (((long )yy_0_3_3_1)); 

yy_0_3_3[2] = (((long )yy_0_3_3_2)); 

yy_0_3_3[3] = (((long )yy_0_3_3_3)); 

yy_0_3 = yyb + 0; 

yy_0_3[0] = 45; 

yy_0_3[1] = (((long )yy_0_3_1)); 

yy_0_3[2] = (((long )yy_0_3_2)); 

yy_0_3[3] = (((long )yy_0_3_3)); 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_36_11:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_0_3_1;



 yy yy_0_3_2;



 yy yy_0_3_2_1;



 yy yy_0_3_2_2;



 yy yy_0_3_3;



 yy yy_0_3_3_1;



 yy yy_0_3_3_2;



 yy yy_0_3_3_2_1;



 yy yy_0_3_3_3;



 yy yy_1_1;



 yy yyv_Tp1;



 yy yy_1_2;



 yy yyv_Lval;



 yy yy_1_3;



 yy yy_2_1;



 yy yyv_Tp2;



 yy yy_2_2;



 yy yyv_Rval;



 yy yy_2_3;



 yy yy_3_1;



 yy yyv_D1;



 yy yy_3_2;



 yy yy_4_1;



 yy yyv_AMode1;



 yy yy_4_2;



 yy yyv_T;



 yy yy_5_1;



 yy yy_6_1;



 yy yy_6_2;



 yy yy_6_3;



 yy yy_6_4;



 yy yy_6_4_1;



 yy yy_6_4_2;



 yy yy_6_4_2_1;



 yy yy_6_5;



 yy yyv_RvalC1;



 yy yy_6_6;



 yy yyv_RvalC2;



 yy yy_6_7;



 yy yyv_Tp3;



 yy yy_6_8;



 yy yyv_M3;



 yy yy_6_9;



 yy yy_7_1;



 yy yy_7_2;



 yy yy_7_3;



 yy yy_7_3_1;



 yy yy_7_3_2;



 yy yy_7_3_3;



 yy yyv_RvalC;



 yy yy_7_4;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_36_12; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 27){
goto yyfl_36_12; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 

yyb = yyh; 

yyh += 23; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_E1; 

trafo_expr_mod_lvalue(yy_1_1, (&yy_1_2), (&yy_1_3)); 

yyv_Tp1 = yy_1_2; 

yyv_Lval = yy_1_3; 

yy_2_1 = yyv_E2; 

trafo_expr_rvalue(yy_2_1, (&yy_2_2), (&yy_2_3)); 

yyv_Tp2 = yy_2_2; 

yyv_Rval = yy_2_3; 

yy_3_1 = yyv_Tp1; 

get_tp_descr(yy_3_1, (&yy_3_2)); 

yyv_D1 = yy_3_2; 

yy_4_1 = yyv_D1; 

td_map_to_mode(yy_4_1, (&yy_4_2)); 

yyv_AMode1 = yy_4_2; 

cg_new_address_tempo((&yy_5_1)); 

yyv_T = yy_5_1; 

yy_6_1 = yyb + 13; 

yy_6_1[0] = 18; 

yy_6_2 = yyv_Tp1; 

yy_6_3 = yyv_Tp2; 

yy_6_4_1 = yyv_AMode1; 

yy_6_4_2_1 = yyv_T; 

yy_6_4_2 = yyb + 17; 

yy_6_4_2[0] = 50; 

yy_6_4_2[1] = (((long )yy_6_4_2_1)); 

yy_6_4 = yyb + 14; 

yy_6_4[0] = 22; 

yy_6_4[1] = (((long )yy_6_4_1)); 

yy_6_4[2] = (((long )yy_6_4_2)); 

yy_6_5 = yyv_Rval; 

params(yy_6_1, yy_6_2, yy_6_3, yy_6_4, yy_6_5, (&yy_6_6), (&yy_6_7), (&yy_6_8), (&yy_6_9)); 

yyv_RvalC1 = yy_6_6; 

yyv_RvalC2 = yy_6_7; 

yyv_Tp3 = yy_6_8; 

yyv_M3 = yy_6_9; 

yy_7_1 = yyv_Tp1; 

yy_7_2 = yyv_Tp3; 

yy_7_3_1 = yyv_M3; 

yy_7_3_2 = yyv_RvalC1; 

yy_7_3_3 = yyv_RvalC2; 

yy_7_3 = yyb + 19; 

yy_7_3[0] = 31; 

yy_7_3[1] = (((long )yy_7_3_1)); 

yy_7_3[2] = (((long )yy_7_3_2)); 

yy_7_3[3] = (((long )yy_7_3_3)); 

simple_assign_params(yy_7_1, yy_7_2, yy_7_3, (&yy_7_4)); 

yyv_RvalC = yy_7_4; 

yy_0_2 = yyv_Tp1; 

yy_0_3_1 = yyv_AMode1; 

yy_0_3_2_1 = yyv_T; 

yy_0_3_2_2 = yyv_Lval; 

yy_0_3_2 = yyb + 4; 

yy_0_3_2[0] = 49; 

yy_0_3_2[1] = (((long )yy_0_3_2_1)); 

yy_0_3_2[2] = (((long )yy_0_3_2_2)); 

yy_0_3_3_1 = yyv_AMode1; 

yy_0_3_3_2_1 = yyv_T; 

yy_0_3_3_2 = yyb + 11; 

yy_0_3_3_2[0] = 50; 

yy_0_3_3_2[1] = (((long )yy_0_3_3_2_1)); 

yy_0_3_3_3 = yyv_RvalC; 

yy_0_3_3 = yyb + 7; 

yy_0_3_3[0] = 44; 

yy_0_3_3[1] = (((long )yy_0_3_3_1)); 

yy_0_3_3[2] = (((long )yy_0_3_3_2)); 

yy_0_3_3[3] = (((long )yy_0_3_3_3)); 

yy_0_3 = yyb + 0; 

yy_0_3[0] = 45; 

yy_0_3[1] = (((long )yy_0_3_1)); 

yy_0_3[2] = (((long )yy_0_3_2)); 

yy_0_3[3] = (((long )yy_0_3_3)); 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_36_12:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;



 yy yyv_E3;



 yy yy_0_1_4;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_0_3_1;



 yy yy_0_3_2;



 yy yy_0_3_3;



 yy yy_0_3_4;



 yy yy_1_1;



 yy yyv_Tp1;



 yy yy_1_2;



 yy yyv_Res1;



 yy yy_1_3;



 yy yy_2_1;



 yy yyv_Tp2;



 yy yy_2_2;



 yy yyv_Res2;



 yy yy_2_3;



 yy yy_3_1;



 yy yyv_Tp3;



 yy yy_3_2;



 yy yyv_Res3;



 yy yy_3_3;



 yy yy_4_1;



 yy yy_4_2;



 yy yy_4_3;



 yy yy_4_4;



 yy yy_4_5;



 yy yyv_ResC2;



 yy yy_4_6;



 yy yyv_ResC3;



 yy yy_4_7;



 yy yyv_Tp;



 yy yy_4_8;



 yy yyv_AMode;



 yy yy_4_9;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 10){
goto yyfl_36_13; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

yy_0_1_4 = ((( yy )yy_0_1[4])); 

if (yy_0_1_1[0] != 1){
goto yyfl_36_13; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 

yyv_E3 = yy_0_1_4; 

yyb = yyh; 

yyh += 5; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_E1; 

trafo_expr_rvalue(yy_1_1, (&yy_1_2), (&yy_1_3)); 

yyv_Tp1 = yy_1_2; 

yyv_Res1 = yy_1_3; 

yy_2_1 = yyv_E2; 

trafo_expr_rvalue(yy_2_1, (&yy_2_2), (&yy_2_3)); 

yyv_Tp2 = yy_2_2; 

yyv_Res2 = yy_2_3; 

yy_3_1 = yyv_E3; 

trafo_expr_rvalue(yy_3_1, (&yy_3_2), (&yy_3_3)); 

yyv_Tp3 = yy_3_2; 

yyv_Res3 = yy_3_3; 

yy_4_1 = yyv_Tp1; 

yy_4_2 = yyv_Tp2; 

yy_4_3 = yyv_Tp3; 

yy_4_4 = yyv_Res2; 

yy_4_5 = yyv_Res3; 

conditional_params(yy_4_1, yy_4_2, yy_4_3, yy_4_4, yy_4_5, (&yy_4_6), (&yy_4_7), (&yy_4_8), (&yy_4_9)); 

yyv_ResC2 = yy_4_6; 

yyv_ResC3 = yy_4_7; 

yyv_Tp = yy_4_8; 

yyv_AMode = yy_4_9; 

yy_0_2 = yyv_Tp; 

yy_0_3_1 = yyv_AMode; 

yy_0_3_2 = yyv_Res1; 

yy_0_3_3 = yyv_ResC2; 

yy_0_3_4 = yyv_ResC3; 

yy_0_3 = yyb + 0; 

yy_0_3[0] = 46; 

yy_0_3[1] = (((long )yy_0_3_1)); 

yy_0_3[2] = (((long )yy_0_3_2)); 

yy_0_3[3] = (((long )yy_0_3_3)); 

yy_0_3[4] = (((long )yy_0_3_4)); 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_36_13:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_0_3_1;



 yy yy_0_3_2;



 yy yy_0_3_3;



 yy yy_1_1;



 yy yyv_Tp1;



 yy yy_1_2;



 yy yyv_Res1;



 yy yy_1_3;



 yy yy_2_1;



 yy yyv_Tp2;



 yy yy_2_2;



 yy yyv_Res2;



 yy yy_2_3;



 yy yy_3_1;



 yy yy_3_2;



 yy yy_3_3;



 yy yy_3_4;



 yy yy_3_5;



 yy yyv_ResC1;



 yy yy_3_6;



 yy yyv_ResC2;



 yy yy_3_7;



 yy yyv_Tp;



 yy yy_3_8;



 yy yyv_AMode;



 yy yy_3_9;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_36_14; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 22){
goto yyfl_36_14; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 

yyb = yyh; 

yyh += 5; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_E1; 

trafo_expr_rvalue(yy_1_1, (&yy_1_2), (&yy_1_3)); 

yyv_Tp1 = yy_1_2; 

yyv_Res1 = yy_1_3; 

yy_2_1 = yyv_E2; 

trafo_expr_rvalue(yy_2_1, (&yy_2_2), (&yy_2_3)); 

yyv_Tp2 = yy_2_2; 

yyv_Res2 = yy_2_3; 

yy_3_1 = yyb + 4; 

yy_3_1[0] = 22; 

yy_3_2 = yyv_Tp1; 

yy_3_3 = yyv_Tp2; 

yy_3_4 = yyv_Res1; 

yy_3_5 = yyv_Res2; 

params(yy_3_1, yy_3_2, yy_3_3, yy_3_4, yy_3_5, (&yy_3_6), (&yy_3_7), (&yy_3_8), (&yy_3_9)); 

yyv_ResC1 = yy_3_6; 

yyv_ResC2 = yy_3_7; 

yyv_Tp = yy_3_8; 

yyv_AMode = yy_3_9; 

yy_0_2 = yyv_Tp; 

yy_0_3_1 = yyv_AMode; 

yy_0_3_2 = yyv_ResC1; 

yy_0_3_3 = yyv_ResC2; 

yy_0_3 = yyb + 0; 

yy_0_3[0] = 26; 

yy_0_3[1] = (((long )yy_0_3_1)); 

yy_0_3[2] = (((long )yy_0_3_2)); 

yy_0_3[3] = (((long )yy_0_3_3)); 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_36_14:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_0_3_1;



 yy yy_0_3_2;



 yy yy_0_3_3;



 yy yy_1_1;



 yy yyv_Tp1;



 yy yy_1_2;



 yy yyv_Res1;



 yy yy_1_3;



 yy yy_2_1;



 yy yyv_Tp2;



 yy yy_2_2;



 yy yyv_Res2;



 yy yy_2_3;



 yy yy_3_1;



 yy yy_3_2;



 yy yy_3_3;



 yy yy_3_4;



 yy yy_3_5;



 yy yyv_ResC1;



 yy yy_3_6;



 yy yyv_ResC2;



 yy yy_3_7;



 yy yyv_Tp;



 yy yy_3_8;



 yy yyv_M;



 yy yy_3_9;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_36_15; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 23){
goto yyfl_36_15; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 

yyb = yyh; 

yyh += 5; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_E1; 

trafo_expr_rvalue(yy_1_1, (&yy_1_2), (&yy_1_3)); 

yyv_Tp1 = yy_1_2; 

yyv_Res1 = yy_1_3; 

yy_2_1 = yyv_E2; 

trafo_expr_rvalue(yy_2_1, (&yy_2_2), (&yy_2_3)); 

yyv_Tp2 = yy_2_2; 

yyv_Res2 = yy_2_3; 

yy_3_1 = yyb + 4; 

yy_3_1[0] = 23; 

yy_3_2 = yyv_Tp1; 

yy_3_3 = yyv_Tp2; 

yy_3_4 = yyv_Res1; 

yy_3_5 = yyv_Res2; 

params(yy_3_1, yy_3_2, yy_3_3, yy_3_4, yy_3_5, (&yy_3_6), (&yy_3_7), (&yy_3_8), (&yy_3_9)); 

yyv_ResC1 = yy_3_6; 

yyv_ResC2 = yy_3_7; 

yyv_Tp = yy_3_8; 

yyv_M = yy_3_9; 

yy_0_2 = yyv_Tp1; 

yy_0_3_1 = yyv_M; 

yy_0_3_2 = yyv_ResC1; 

yy_0_3_3 = yyv_ResC2; 

yy_0_3 = yyb + 0; 

yy_0_3[0] = 27; 

yy_0_3[1] = (((long )yy_0_3_1)); 

yy_0_3[2] = (((long )yy_0_3_2)); 

yy_0_3[3] = (((long )yy_0_3_3)); 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_36_15:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_0_3_1;



 yy yy_0_3_2;



 yy yy_0_3_3;



 yy yy_1_1;



 yy yyv_Tp1;



 yy yy_1_2;



 yy yyv_Res1;



 yy yy_1_3;



 yy yy_2_1;



 yy yyv_Tp2;



 yy yy_2_2;



 yy yyv_Res2;



 yy yy_2_3;



 yy yy_3_1;



 yy yy_3_2;



 yy yy_3_3;



 yy yy_3_4;



 yy yy_3_5;



 yy yyv_ResC1;



 yy yy_3_6;



 yy yyv_ResC2;



 yy yy_3_7;



 yy yyv_Tp;



 yy yy_3_8;



 yy yyv_M;



 yy yy_3_9;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_36_16; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 21){
goto yyfl_36_16; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 

yyb = yyh; 

yyh += 5; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_E1; 

trafo_expr_rvalue(yy_1_1, (&yy_1_2), (&yy_1_3)); 

yyv_Tp1 = yy_1_2; 

yyv_Res1 = yy_1_3; 

yy_2_1 = yyv_E2; 

trafo_expr_rvalue(yy_2_1, (&yy_2_2), (&yy_2_3)); 

yyv_Tp2 = yy_2_2; 

yyv_Res2 = yy_2_3; 

yy_3_1 = yyb + 4; 

yy_3_1[0] = 21; 

yy_3_2 = yyv_Tp1; 

yy_3_3 = yyv_Tp2; 

yy_3_4 = yyv_Res1; 

yy_3_5 = yyv_Res2; 

params(yy_3_1, yy_3_2, yy_3_3, yy_3_4, yy_3_5, (&yy_3_6), (&yy_3_7), (&yy_3_8), (&yy_3_9)); 

yyv_ResC1 = yy_3_6; 

yyv_ResC2 = yy_3_7; 

yyv_Tp = yy_3_8; 

yyv_M = yy_3_9; 

yy_0_2 = yyv_Tp; 

yy_0_3_1 = yyv_M; 

yy_0_3_2 = yyv_ResC1; 

yy_0_3_3 = yyv_ResC2; 

yy_0_3 = yyb + 0; 

yy_0_3[0] = 30; 

yy_0_3[1] = (((long )yy_0_3_1)); 

yy_0_3[2] = (((long )yy_0_3_2)); 

yy_0_3[3] = (((long )yy_0_3_3)); 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_36_16:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_0_3_1;



 yy yy_0_3_2;



 yy yy_0_3_3;



 yy yy_1_1;



 yy yyv_Tp1;



 yy yy_1_2;



 yy yyv_Res1;



 yy yy_1_3;



 yy yy_2_1;



 yy yyv_Tp2;



 yy yy_2_2;



 yy yyv_Res2;



 yy yy_2_3;



 yy yy_3_1;



 yy yy_3_2;



 yy yy_3_3;



 yy yy_3_4;



 yy yy_3_5;



 yy yyv_ResC1;



 yy yy_3_6;



 yy yyv_ResC2;



 yy yy_3_7;



 yy yyv_Tp;



 yy yy_3_8;



 yy yyv_M;



 yy yy_3_9;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_36_17; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 18){
goto yyfl_36_17; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 

yyb = yyh; 

yyh += 5; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_E1; 

trafo_expr_rvalue(yy_1_1, (&yy_1_2), (&yy_1_3)); 

yyv_Tp1 = yy_1_2; 

yyv_Res1 = yy_1_3; 

yy_2_1 = yyv_E2; 

trafo_expr_rvalue(yy_2_1, (&yy_2_2), (&yy_2_3)); 

yyv_Tp2 = yy_2_2; 

yyv_Res2 = yy_2_3; 

yy_3_1 = yyb + 4; 

yy_3_1[0] = 18; 

yy_3_2 = yyv_Tp1; 

yy_3_3 = yyv_Tp2; 

yy_3_4 = yyv_Res1; 

yy_3_5 = yyv_Res2; 

params(yy_3_1, yy_3_2, yy_3_3, yy_3_4, yy_3_5, (&yy_3_6), (&yy_3_7), (&yy_3_8), (&yy_3_9)); 

yyv_ResC1 = yy_3_6; 

yyv_ResC2 = yy_3_7; 

yyv_Tp = yy_3_8; 

yyv_M = yy_3_9; 

yy_0_2 = yyv_Tp; 

yy_0_3_1 = yyv_M; 

yy_0_3_2 = yyv_ResC1; 

yy_0_3_3 = yyv_ResC2; 

yy_0_3 = yyb + 0; 

yy_0_3[0] = 31; 

yy_0_3[1] = (((long )yy_0_3_1)); 

yy_0_3[2] = (((long )yy_0_3_2)); 

yy_0_3[3] = (((long )yy_0_3_3)); 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_36_17:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_0_3_1;



 yy yy_0_3_2;



 yy yy_0_3_3;



 yy yy_1_1;



 yy yyv_Tp1;



 yy yy_1_2;



 yy yyv_Res1;



 yy yy_1_3;



 yy yy_2_1;



 yy yyv_Tp2;



 yy yy_2_2;



 yy yyv_Res2;



 yy yy_2_3;



 yy yy_3_1;



 yy yy_3_2;



 yy yy_3_3;



 yy yy_3_4;



 yy yy_3_5;



 yy yyv_ResC1;



 yy yy_3_6;



 yy yyv_ResC2;



 yy yy_3_7;



 yy yyv_Tp;



 yy yy_3_8;



 yy yyv_M;



 yy yy_3_9;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_36_18; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 19){
goto yyfl_36_18; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 

yyb = yyh; 

yyh += 5; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_E1; 

trafo_expr_rvalue(yy_1_1, (&yy_1_2), (&yy_1_3)); 

yyv_Tp1 = yy_1_2; 

yyv_Res1 = yy_1_3; 

yy_2_1 = yyv_E2; 

trafo_expr_rvalue(yy_2_1, (&yy_2_2), (&yy_2_3)); 

yyv_Tp2 = yy_2_2; 

yyv_Res2 = yy_2_3; 

yy_3_1 = yyb + 4; 

yy_3_1[0] = 19; 

yy_3_2 = yyv_Tp1; 

yy_3_3 = yyv_Tp2; 

yy_3_4 = yyv_Res1; 

yy_3_5 = yyv_Res2; 

params(yy_3_1, yy_3_2, yy_3_3, yy_3_4, yy_3_5, (&yy_3_6), (&yy_3_7), (&yy_3_8), (&yy_3_9)); 

yyv_ResC1 = yy_3_6; 

yyv_ResC2 = yy_3_7; 

yyv_Tp = yy_3_8; 

yyv_M = yy_3_9; 

yy_0_2 = yyv_Tp; 

yy_0_3_1 = yyv_M; 

yy_0_3_2 = yyv_ResC1; 

yy_0_3_3 = yyv_ResC2; 

yy_0_3 = yyb + 0; 

yy_0_3[0] = 32; 

yy_0_3[1] = (((long )yy_0_3_1)); 

yy_0_3[2] = (((long )yy_0_3_2)); 

yy_0_3[3] = (((long )yy_0_3_3)); 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_36_18:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_0_3_1;



 yy yy_0_3_2;



 yy yy_0_3_3;



 yy yy_1_1;



 yy yyv_Tp1;



 yy yy_1_2;



 yy yyv_Res1;



 yy yy_1_3;



 yy yy_2_1;



 yy yyv_Tp2;



 yy yy_2_2;



 yy yyv_Res2;



 yy yy_2_3;



 yy yy_3_1;



 yy yy_3_2;



 yy yy_3_3;



 yy yy_3_4;



 yy yy_3_5;



 yy yyv_ResC1;



 yy yy_3_6;



 yy yyv_ResC2;



 yy yy_3_7;



 yy yyv_Tp;



 yy yy_3_8;



 yy yyv_M;



 yy yy_3_9;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_36_19; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 20){
goto yyfl_36_19; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 

yyb = yyh; 

yyh += 5; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_E1; 

trafo_expr_rvalue(yy_1_1, (&yy_1_2), (&yy_1_3)); 

yyv_Tp1 = yy_1_2; 

yyv_Res1 = yy_1_3; 

yy_2_1 = yyv_E2; 

trafo_expr_rvalue(yy_2_1, (&yy_2_2), (&yy_2_3)); 

yyv_Tp2 = yy_2_2; 

yyv_Res2 = yy_2_3; 

yy_3_1 = yyb + 4; 

yy_3_1[0] = 20; 

yy_3_2 = yyv_Tp1; 

yy_3_3 = yyv_Tp2; 

yy_3_4 = yyv_Res1; 

yy_3_5 = yyv_Res2; 

params(yy_3_1, yy_3_2, yy_3_3, yy_3_4, yy_3_5, (&yy_3_6), (&yy_3_7), (&yy_3_8), (&yy_3_9)); 

yyv_ResC1 = yy_3_6; 

yyv_ResC2 = yy_3_7; 

yyv_Tp = yy_3_8; 

yyv_M = yy_3_9; 

yy_0_2 = yyv_Tp; 

yy_0_3_1 = yyv_M; 

yy_0_3_2 = yyv_ResC1; 

yy_0_3_3 = yyv_ResC2; 

yy_0_3 = yyb + 0; 

yy_0_3[0] = 33; 

yy_0_3[1] = (((long )yy_0_3_1)); 

yy_0_3[2] = (((long )yy_0_3_2)); 

yy_0_3[3] = (((long )yy_0_3_3)); 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_36_19:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_0_3_1;



 yy yy_0_3_2;



 yy yy_0_3_3;



 yy yy_1_1;



 yy yyv_Tp1;



 yy yy_1_2;



 yy yyv_Res1;



 yy yy_1_3;



 yy yy_2_1;



 yy yyv_Tp2;



 yy yy_2_2;



 yy yyv_Res2;



 yy yy_2_3;



 yy yy_3_1;



 yy yy_3_2;



 yy yy_3_3;



 yy yy_3_4;



 yy yy_3_5;



 yy yyv_ResC1;



 yy yy_3_6;



 yy yyv_ResC2;



 yy yy_3_7;



 yy yyv_Tp;



 yy yy_3_8;



 yy yyv_M;



 yy yy_3_9;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_36_20; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 13){
goto yyfl_36_20; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 

yyb = yyh; 

yyh += 5; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_E1; 

trafo_expr_rvalue(yy_1_1, (&yy_1_2), (&yy_1_3)); 

yyv_Tp1 = yy_1_2; 

yyv_Res1 = yy_1_3; 

yy_2_1 = yyv_E2; 

trafo_expr_rvalue(yy_2_1, (&yy_2_2), (&yy_2_3)); 

yyv_Tp2 = yy_2_2; 

yyv_Res2 = yy_2_3; 

yy_3_1 = yyb + 4; 

yy_3_1[0] = 13; 

yy_3_2 = yyv_Tp1; 

yy_3_3 = yyv_Tp2; 

yy_3_4 = yyv_Res1; 

yy_3_5 = yyv_Res2; 

params(yy_3_1, yy_3_2, yy_3_3, yy_3_4, yy_3_5, (&yy_3_6), (&yy_3_7), (&yy_3_8), (&yy_3_9)); 

yyv_ResC1 = yy_3_6; 

yyv_ResC2 = yy_3_7; 

yyv_Tp = yy_3_8; 

yyv_M = yy_3_9; 

yy_0_2 = yyv_Tp; 

yy_0_3_1 = yyv_M; 

yy_0_3_2 = yyv_ResC1; 

yy_0_3_3 = yyv_ResC2; 

yy_0_3 = yyb + 0; 

yy_0_3[0] = 34; 

yy_0_3[1] = (((long )yy_0_3_1)); 

yy_0_3[2] = (((long )yy_0_3_2)); 

yy_0_3[3] = (((long )yy_0_3_3)); 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_36_20:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_0_3_1;



 yy yy_0_3_2;



 yy yy_0_3_3;



 yy yy_1_1;



 yy yyv_Tp1;



 yy yy_1_2;



 yy yyv_Res1;



 yy yy_1_3;



 yy yy_2_1;



 yy yyv_Tp2;



 yy yy_2_2;



 yy yyv_Res2;



 yy yy_2_3;



 yy yy_3_1;



 yy yy_3_2;



 yy yy_3_3;



 yy yy_3_4;



 yy yy_3_5;



 yy yyv_ResC1;



 yy yy_3_6;



 yy yyv_ResC2;



 yy yy_3_7;



 yy yyv_Tp;



 yy yy_3_8;



 yy yyv_M;



 yy yy_3_9;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_36_21; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 14){
goto yyfl_36_21; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 

yyb = yyh; 

yyh += 5; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_E1; 

trafo_expr_rvalue(yy_1_1, (&yy_1_2), (&yy_1_3)); 

yyv_Tp1 = yy_1_2; 

yyv_Res1 = yy_1_3; 

yy_2_1 = yyv_E2; 

trafo_expr_rvalue(yy_2_1, (&yy_2_2), (&yy_2_3)); 

yyv_Tp2 = yy_2_2; 

yyv_Res2 = yy_2_3; 

yy_3_1 = yyb + 4; 

yy_3_1[0] = 14; 

yy_3_2 = yyv_Tp1; 

yy_3_3 = yyv_Tp2; 

yy_3_4 = yyv_Res1; 

yy_3_5 = yyv_Res2; 

params(yy_3_1, yy_3_2, yy_3_3, yy_3_4, yy_3_5, (&yy_3_6), (&yy_3_7), (&yy_3_8), (&yy_3_9)); 

yyv_ResC1 = yy_3_6; 

yyv_ResC2 = yy_3_7; 

yyv_Tp = yy_3_8; 

yyv_M = yy_3_9; 

yy_0_2 = yyv_Tp; 

yy_0_3_1 = yyv_M; 

yy_0_3_2 = yyv_ResC1; 

yy_0_3_3 = yyv_ResC2; 

yy_0_3 = yyb + 0; 

yy_0_3[0] = 36; 

yy_0_3[1] = (((long )yy_0_3_1)); 

yy_0_3[2] = (((long )yy_0_3_2)); 

yy_0_3[3] = (((long )yy_0_3_3)); 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_36_21:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_0_3_1;



 yy yy_0_3_2;



 yy yy_0_3_3;



 yy yy_1_1;



 yy yyv_Tp1;



 yy yy_1_2;



 yy yyv_Res1;



 yy yy_1_3;



 yy yy_2_1;



 yy yyv_Tp2;



 yy yy_2_2;



 yy yyv_Res2;



 yy yy_2_3;



 yy yy_3_1;



 yy yy_3_2;



 yy yy_3_3;



 yy yy_3_4;



 yy yy_3_5;



 yy yyv_ResC1;



 yy yy_3_6;



 yy yyv_ResC2;



 yy yy_3_7;



 yy yyv_Tp;



 yy yy_3_8;



 yy yyv_M;



 yy yy_3_9;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_36_22; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 16){
goto yyfl_36_22; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 

yyb = yyh; 

yyh += 5; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_E1; 

trafo_expr_rvalue(yy_1_1, (&yy_1_2), (&yy_1_3)); 

yyv_Tp1 = yy_1_2; 

yyv_Res1 = yy_1_3; 

yy_2_1 = yyv_E2; 

trafo_expr_rvalue(yy_2_1, (&yy_2_2), (&yy_2_3)); 

yyv_Tp2 = yy_2_2; 

yyv_Res2 = yy_2_3; 

yy_3_1 = yyb + 4; 

yy_3_1[0] = 16; 

yy_3_2 = yyv_Tp1; 

yy_3_3 = yyv_Tp2; 

yy_3_4 = yyv_Res1; 

yy_3_5 = yyv_Res2; 

params(yy_3_1, yy_3_2, yy_3_3, yy_3_4, yy_3_5, (&yy_3_6), (&yy_3_7), (&yy_3_8), (&yy_3_9)); 

yyv_ResC1 = yy_3_6; 

yyv_ResC2 = yy_3_7; 

yyv_Tp = yy_3_8; 

yyv_M = yy_3_9; 

yy_0_2 = yyv_Tp; 

yy_0_3_1 = yyv_M; 

yy_0_3_2 = yyv_ResC1; 

yy_0_3_3 = yyv_ResC2; 

yy_0_3 = yyb + 0; 

yy_0_3[0] = 38; 

yy_0_3[1] = (((long )yy_0_3_1)); 

yy_0_3[2] = (((long )yy_0_3_2)); 

yy_0_3[3] = (((long )yy_0_3_3)); 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_36_22:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_0_3_1;



 yy yy_0_3_2;



 yy yy_0_3_3;



 yy yy_1_1;



 yy yyv_Tp1;



 yy yy_1_2;



 yy yyv_Res1;



 yy yy_1_3;



 yy yy_2_1;



 yy yyv_Tp2;



 yy yy_2_2;



 yy yyv_Res2;



 yy yy_2_3;



 yy yy_3_1;



 yy yy_3_2;



 yy yy_3_3;



 yy yy_3_4;



 yy yy_3_5;



 yy yyv_ResC1;



 yy yy_3_6;



 yy yyv_ResC2;



 yy yy_3_7;



 yy yyv_Tp;



 yy yy_3_8;



 yy yyv_M;



 yy yy_3_9;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_36_23; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 15){
goto yyfl_36_23; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 

yyb = yyh; 

yyh += 5; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_E1; 

trafo_expr_rvalue(yy_1_1, (&yy_1_2), (&yy_1_3)); 

yyv_Tp1 = yy_1_2; 

yyv_Res1 = yy_1_3; 

yy_2_1 = yyv_E2; 

trafo_expr_rvalue(yy_2_1, (&yy_2_2), (&yy_2_3)); 

yyv_Tp2 = yy_2_2; 

yyv_Res2 = yy_2_3; 

yy_3_1 = yyb + 4; 

yy_3_1[0] = 15; 

yy_3_2 = yyv_Tp1; 

yy_3_3 = yyv_Tp2; 

yy_3_4 = yyv_Res1; 

yy_3_5 = yyv_Res2; 

params(yy_3_1, yy_3_2, yy_3_3, yy_3_4, yy_3_5, (&yy_3_6), (&yy_3_7), (&yy_3_8), (&yy_3_9)); 

yyv_ResC1 = yy_3_6; 

yyv_ResC2 = yy_3_7; 

yyv_Tp = yy_3_8; 

yyv_M = yy_3_9; 

yy_0_2 = yyv_Tp; 

yy_0_3_1 = yyv_M; 

yy_0_3_2 = yyv_ResC1; 

yy_0_3_3 = yyv_ResC2; 

yy_0_3 = yyb + 0; 

yy_0_3[0] = 35; 

yy_0_3[1] = (((long )yy_0_3_1)); 

yy_0_3[2] = (((long )yy_0_3_2)); 

yy_0_3[3] = (((long )yy_0_3_3)); 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_36_23:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_0_3_1;



 yy yy_0_3_2;



 yy yy_0_3_3;



 yy yy_1_1;



 yy yyv_Tp1;



 yy yy_1_2;



 yy yyv_Res1;



 yy yy_1_3;



 yy yy_2_1;



 yy yyv_Tp2;



 yy yy_2_2;



 yy yyv_Res2;



 yy yy_2_3;



 yy yy_3_1;



 yy yy_3_2;



 yy yy_3_3;



 yy yy_3_4;



 yy yy_3_5;



 yy yyv_ResC1;



 yy yy_3_6;



 yy yyv_ResC2;



 yy yy_3_7;



 yy yyv_Tp;



 yy yy_3_8;



 yy yyv_M;



 yy yy_3_9;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_36_24; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 17){
goto yyfl_36_24; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 

yyb = yyh; 

yyh += 5; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_E1; 

trafo_expr_rvalue(yy_1_1, (&yy_1_2), (&yy_1_3)); 

yyv_Tp1 = yy_1_2; 

yyv_Res1 = yy_1_3; 

yy_2_1 = yyv_E2; 

trafo_expr_rvalue(yy_2_1, (&yy_2_2), (&yy_2_3)); 

yyv_Tp2 = yy_2_2; 

yyv_Res2 = yy_2_3; 

yy_3_1 = yyb + 4; 

yy_3_1[0] = 17; 

yy_3_2 = yyv_Tp1; 

yy_3_3 = yyv_Tp2; 

yy_3_4 = yyv_Res1; 

yy_3_5 = yyv_Res2; 

params(yy_3_1, yy_3_2, yy_3_3, yy_3_4, yy_3_5, (&yy_3_6), (&yy_3_7), (&yy_3_8), (&yy_3_9)); 

yyv_ResC1 = yy_3_6; 

yyv_ResC2 = yy_3_7; 

yyv_Tp = yy_3_8; 

yyv_M = yy_3_9; 

yy_0_2 = yyv_Tp; 

yy_0_3_1 = yyv_M; 

yy_0_3_2 = yyv_ResC1; 

yy_0_3_3 = yyv_ResC2; 

yy_0_3 = yyb + 0; 

yy_0_3[0] = 37; 

yy_0_3[1] = (((long )yy_0_3_1)); 

yy_0_3[2] = (((long )yy_0_3_2)); 

yy_0_3[3] = (((long )yy_0_3_3)); 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_36_24:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_0_3_1;



 yy yy_0_3_2;



 yy yy_0_3_3;



 yy yy_1_1;



 yy yyv_Tp1;



 yy yy_1_2;



 yy yyv_Res1;



 yy yy_1_3;



 yy yy_2_1;



 yy yyv_Tp2;



 yy yy_2_2;



 yy yyv_Res2;



 yy yy_2_3;



 yy yy_3_1;



 yy yy_3_2;



 yy yy_3_3;



 yy yy_3_4;



 yy yy_3_5;



 yy yyv_ResC1;



 yy yy_3_6;



 yy yyv_ResC2;



 yy yy_3_7;



 yy yyv_Tp;



 yy yy_3_8;



 yy yyv_M;



 yy yy_3_9;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_36_25; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 11){
goto yyfl_36_25; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 

yyb = yyh; 

yyh += 5; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_E1; 

trafo_expr_rvalue(yy_1_1, (&yy_1_2), (&yy_1_3)); 

yyv_Tp1 = yy_1_2; 

yyv_Res1 = yy_1_3; 

yy_2_1 = yyv_E2; 

trafo_expr_rvalue(yy_2_1, (&yy_2_2), (&yy_2_3)); 

yyv_Tp2 = yy_2_2; 

yyv_Res2 = yy_2_3; 

yy_3_1 = yyb + 4; 

yy_3_1[0] = 11; 

yy_3_2 = yyv_Tp1; 

yy_3_3 = yyv_Tp2; 

yy_3_4 = yyv_Res1; 

yy_3_5 = yyv_Res2; 

params(yy_3_1, yy_3_2, yy_3_3, yy_3_4, yy_3_5, (&yy_3_6), (&yy_3_7), (&yy_3_8), (&yy_3_9)); 

yyv_ResC1 = yy_3_6; 

yyv_ResC2 = yy_3_7; 

yyv_Tp = yy_3_8; 

yyv_M = yy_3_9; 

yy_0_2 = yyv_Tp; 

yy_0_3_1 = yyv_M; 

yy_0_3_2 = yyv_ResC1; 

yy_0_3_3 = yyv_ResC2; 

yy_0_3 = yyb + 0; 

yy_0_3[0] = 28; 

yy_0_3[1] = (((long )yy_0_3_1)); 

yy_0_3[2] = (((long )yy_0_3_2)); 

yy_0_3[3] = (((long )yy_0_3_3)); 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_36_25:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_0_3_1;



 yy yy_0_3_2;



 yy yy_0_3_3;



 yy yy_1_1;



 yy yyv_Tp1;



 yy yy_1_2;



 yy yyv_Res1;



 yy yy_1_3;



 yy yy_2_1;



 yy yyv_Tp2;



 yy yy_2_2;



 yy yyv_Res2;



 yy yy_2_3;



 yy yy_3_1;



 yy yy_3_2;



 yy yy_3_3;



 yy yy_3_4;



 yy yy_3_5;



 yy yyv_ResC1;



 yy yy_3_6;



 yy yyv_ResC2;



 yy yy_3_7;



 yy yyv_Tp;



 yy yy_3_8;



 yy yyv_M;



 yy yy_3_9;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_36_26; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 12){
goto yyfl_36_26; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 

yyb = yyh; 

yyh += 5; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_E1; 

trafo_expr_rvalue(yy_1_1, (&yy_1_2), (&yy_1_3)); 

yyv_Tp1 = yy_1_2; 

yyv_Res1 = yy_1_3; 

yy_2_1 = yyv_E2; 

trafo_expr_rvalue(yy_2_1, (&yy_2_2), (&yy_2_3)); 

yyv_Tp2 = yy_2_2; 

yyv_Res2 = yy_2_3; 

yy_3_1 = yyb + 4; 

yy_3_1[0] = 12; 

yy_3_2 = yyv_Tp1; 

yy_3_3 = yyv_Tp2; 

yy_3_4 = yyv_Res1; 

yy_3_5 = yyv_Res2; 

params(yy_3_1, yy_3_2, yy_3_3, yy_3_4, yy_3_5, (&yy_3_6), (&yy_3_7), (&yy_3_8), (&yy_3_9)); 

yyv_ResC1 = yy_3_6; 

yyv_ResC2 = yy_3_7; 

yyv_Tp = yy_3_8; 

yyv_M = yy_3_9; 

yy_0_2 = yyv_Tp; 

yy_0_3_1 = yyv_M; 

yy_0_3_2 = yyv_ResC1; 

yy_0_3_3 = yyv_ResC2; 

yy_0_3 = yyb + 0; 

yy_0_3[0] = 29; 

yy_0_3[1] = (((long )yy_0_3_1)); 

yy_0_3[2] = (((long )yy_0_3_2)); 

yy_0_3[3] = (((long )yy_0_3_3)); 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_36_26:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_1_1;



 yy yyv_Tp1;



 yy yy_1_2;



 yy yyv_Res1;



 yy yy_1_3;



 yy yy_2_1;



 yy yyv_Tp2;



 yy yy_2_2;



 yy yyv_Res2;



 yy yy_2_3;



 yy yy_3_1;



 yy yy_3_2;



 yy yy_3_3;



 yy yy_3_4;



 yy yyv_RvalMinus;



 yy yy_3_5;



 yy yyv_Tp;



 yy yy_3_6;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_36_27; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 7){
goto yyfl_36_27; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 

yy_1_1 = yyv_E1; 

trafo_expr_rvalue(yy_1_1, (&yy_1_2), (&yy_1_3)); 

yyv_Tp1 = yy_1_2; 

yyv_Res1 = yy_1_3; 

yy_2_1 = yyv_E2; 

trafo_expr_rvalue(yy_2_1, (&yy_2_2), (&yy_2_3)); 

yyv_Tp2 = yy_2_2; 

yyv_Res2 = yy_2_3; 

yy_3_1 = yyv_Tp1; 

yy_3_2 = yyv_Tp2; 

yy_3_3 = yyv_Res1; 

yy_3_4 = yyv_Res2; 

minus_params(yy_3_1, yy_3_2, yy_3_3, yy_3_4, (&yy_3_5), (&yy_3_6)); 

yyv_RvalMinus = yy_3_5; 

yyv_Tp = yy_3_6; 

yy_0_2 = yyv_Tp; 

yy_0_3 = yyv_RvalMinus; 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_36_27:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_1_1;



 yy yyv_Tp1;



 yy yy_1_2;



 yy yyv_Res1;



 yy yy_1_3;



 yy yy_2_1;



 yy yyv_Tp2;



 yy yy_2_2;



 yy yyv_Res2;



 yy yy_2_3;



 yy yy_3_1;



 yy yy_3_2;



 yy yy_3_3;



 yy yy_3_4;



 yy yyv_RvalPlus;



 yy yy_3_5;



 yy yyv_Tp;



 yy yy_3_6;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_36_28; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 6){
goto yyfl_36_28; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 

yy_1_1 = yyv_E1; 

trafo_expr_rvalue(yy_1_1, (&yy_1_2), (&yy_1_3)); 

yyv_Tp1 = yy_1_2; 

yyv_Res1 = yy_1_3; 

yy_2_1 = yyv_E2; 

trafo_expr_rvalue(yy_2_1, (&yy_2_2), (&yy_2_3)); 

yyv_Tp2 = yy_2_2; 

yyv_Res2 = yy_2_3; 

yy_3_1 = yyv_Tp1; 

yy_3_2 = yyv_Tp2; 

yy_3_3 = yyv_Res1; 

yy_3_4 = yyv_Res2; 

plus_params(yy_3_1, yy_3_2, yy_3_3, yy_3_4, (&yy_3_5), (&yy_3_6)); 

yyv_RvalPlus = yy_3_5; 

yyv_Tp = yy_3_6; 

yy_0_2 = yyv_Tp; 

yy_0_3 = yyv_RvalPlus; 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_36_28:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_0_3_1;



 yy yy_0_3_2;



 yy yy_0_3_3;



 yy yy_1_1;



 yy yyv_Tp1;



 yy yy_1_2;



 yy yyv_Res1;



 yy yy_1_3;



 yy yy_2_1;



 yy yyv_Tp2;



 yy yy_2_2;



 yy yyv_Res2;



 yy yy_2_3;



 yy yy_3_1;



 yy yy_3_2;



 yy yy_3_3;



 yy yy_3_4;



 yy yy_3_5;



 yy yyv_ResC1;



 yy yy_3_6;



 yy yyv_ResC2;



 yy yy_3_7;



 yy yyv_Tp;



 yy yy_3_8;



 yy yyv_M;



 yy yy_3_9;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_36_29; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 8){
goto yyfl_36_29; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 

yyb = yyh; 

yyh += 5; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_E1; 

trafo_expr_rvalue(yy_1_1, (&yy_1_2), (&yy_1_3)); 

yyv_Tp1 = yy_1_2; 

yyv_Res1 = yy_1_3; 

yy_2_1 = yyv_E2; 

trafo_expr_rvalue(yy_2_1, (&yy_2_2), (&yy_2_3)); 

yyv_Tp2 = yy_2_2; 

yyv_Res2 = yy_2_3; 

yy_3_1 = yyb + 4; 

yy_3_1[0] = 8; 

yy_3_2 = yyv_Tp1; 

yy_3_3 = yyv_Tp2; 

yy_3_4 = yyv_Res1; 

yy_3_5 = yyv_Res2; 

params(yy_3_1, yy_3_2, yy_3_3, yy_3_4, yy_3_5, (&yy_3_6), (&yy_3_7), (&yy_3_8), (&yy_3_9)); 

yyv_ResC1 = yy_3_6; 

yyv_ResC2 = yy_3_7; 

yyv_Tp = yy_3_8; 

yyv_M = yy_3_9; 

yy_0_2 = yyv_Tp; 

yy_0_3_1 = yyv_M; 

yy_0_3_2 = yyv_ResC1; 

yy_0_3_3 = yyv_ResC2; 

yy_0_3 = yyb + 0; 

yy_0_3[0] = 42; 

yy_0_3[1] = (((long )yy_0_3_1)); 

yy_0_3[2] = (((long )yy_0_3_2)); 

yy_0_3[3] = (((long )yy_0_3_3)); 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_36_29:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_0_3_1;



 yy yy_0_3_2;



 yy yy_0_3_3;



 yy yy_1_1;



 yy yyv_Tp1;



 yy yy_1_2;



 yy yyv_Res1;



 yy yy_1_3;



 yy yy_2_1;



 yy yyv_Tp2;



 yy yy_2_2;



 yy yyv_Res2;



 yy yy_2_3;



 yy yy_3_1;



 yy yy_3_2;



 yy yy_3_3;



 yy yy_3_4;



 yy yy_3_5;



 yy yyv_ResC1;



 yy yy_3_6;



 yy yyv_ResC2;



 yy yy_3_7;



 yy yyv_Tp;



 yy yy_3_8;



 yy yyv_M;



 yy yy_3_9;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_36_30; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 9){
goto yyfl_36_30; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 

yyb = yyh; 

yyh += 5; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_E1; 

trafo_expr_rvalue(yy_1_1, (&yy_1_2), (&yy_1_3)); 

yyv_Tp1 = yy_1_2; 

yyv_Res1 = yy_1_3; 

yy_2_1 = yyv_E2; 

trafo_expr_rvalue(yy_2_1, (&yy_2_2), (&yy_2_3)); 

yyv_Tp2 = yy_2_2; 

yyv_Res2 = yy_2_3; 

yy_3_1 = yyb + 4; 

yy_3_1[0] = 9; 

yy_3_2 = yyv_Tp1; 

yy_3_3 = yyv_Tp2; 

yy_3_4 = yyv_Res1; 

yy_3_5 = yyv_Res2; 

params(yy_3_1, yy_3_2, yy_3_3, yy_3_4, yy_3_5, (&yy_3_6), (&yy_3_7), (&yy_3_8), (&yy_3_9)); 

yyv_ResC1 = yy_3_6; 

yyv_ResC2 = yy_3_7; 

yyv_Tp = yy_3_8; 

yyv_M = yy_3_9; 

yy_0_2 = yyv_Tp; 

yy_0_3_1 = yyv_M; 

yy_0_3_2 = yyv_ResC1; 

yy_0_3_3 = yyv_ResC2; 

yy_0_3 = yyb + 0; 

yy_0_3[0] = 43; 

yy_0_3[1] = (((long )yy_0_3_1)); 

yy_0_3[2] = (((long )yy_0_3_2)); 

yy_0_3[3] = (((long )yy_0_3_3)); 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_36_30:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_0_3_1;



 yy yy_0_3_2;



 yy yy_0_3_3;



 yy yy_1_1;



 yy yyv_Tp1;



 yy yy_1_2;



 yy yyv_Res1;



 yy yy_1_3;



 yy yy_2_1;



 yy yyv_Tp2;



 yy yy_2_2;



 yy yyv_Res2;



 yy yy_2_3;



 yy yy_3_1;



 yy yy_3_2;



 yy yy_3_3;



 yy yy_3_4;



 yy yy_3_5;



 yy yyv_ResC1;



 yy yy_3_6;



 yy yyv_ResC2;



 yy yy_3_7;



 yy yyv_Tp;



 yy yy_3_8;



 yy yyv_M;



 yy yy_3_9;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_36_31; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 10){
goto yyfl_36_31; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 

yyb = yyh; 

yyh += 5; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_E1; 

trafo_expr_rvalue(yy_1_1, (&yy_1_2), (&yy_1_3)); 

yyv_Tp1 = yy_1_2; 

yyv_Res1 = yy_1_3; 

yy_2_1 = yyv_E2; 

trafo_expr_rvalue(yy_2_1, (&yy_2_2), (&yy_2_3)); 

yyv_Tp2 = yy_2_2; 

yyv_Res2 = yy_2_3; 

yy_3_1 = yyb + 4; 

yy_3_1[0] = 10; 

yy_3_2 = yyv_Tp1; 

yy_3_3 = yyv_Tp2; 

yy_3_4 = yyv_Res1; 

yy_3_5 = yyv_Res2; 

params(yy_3_1, yy_3_2, yy_3_3, yy_3_4, yy_3_5, (&yy_3_6), (&yy_3_7), (&yy_3_8), (&yy_3_9)); 

yyv_ResC1 = yy_3_6; 

yyv_ResC2 = yy_3_7; 

yyv_Tp = yy_3_8; 

yyv_M = yy_3_9; 

yy_0_2 = yyv_Tp; 

yy_0_3_1 = yyv_M; 

yy_0_3_2 = yyv_ResC1; 

yy_0_3_3 = yyv_ResC2; 

yy_0_3 = yyb + 0; 

yy_0_3[0] = 39; 

yy_0_3[1] = (((long )yy_0_3_1)); 

yy_0_3[2] = (((long )yy_0_3_2)); 

yy_0_3[3] = (((long )yy_0_3_3)); 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_36_31:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yy_0_1_2;



 yy yyv_Id;



 yy yy_0_1_2_1;



 yy yyv_L;



 yy yy_0_1_3;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_0_3_1;



 yy yy_0_3_2;



 yy yy_0_3_3;



 yy yy_0_3_4;



 yy yy_1_1;



 yy yyv_Tp;



 yy yy_1_2;



 yy yyv_Res;



 yy yy_1_3;



 yy yy_2_1;



 yy yyv_Tp1;



 yy yy_2_2;



 yy yyv_TpF;



 yy yy_2_3;



 yy yy_3_1;



 yy yyv_D1;



 yy yy_3_2;



 yy yy_4_1;



 yy yyv_M;



 yy yy_4_2;



 yy yy_5_1;



 yy yyv_D;



 yy yy_5_2;



 yy yy_6_1;



 yy yy_6_2;



 yy yyv_Size;



 yy yy_6_3;



 yy yyv_IRlist;



 yy yy_6_4;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_36_32; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 5){
goto yyfl_36_32; }

if (yy_0_1_2[0] != 6){
goto yyfl_36_32; }

yy_0_1_2_1 = ((( yy )yy_0_1_2[1])); 

yyv_Id = yy_0_1_2_1; 

yyv_L = yy_0_1_3; 

yyb = yyh; 

yyh += 5; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_Id; 

apply_and_declare_function_id(yy_1_1, (&yy_1_2), (&yy_1_3)); 

yyv_Tp = yy_1_2; 

yyv_Res = yy_1_3; 

yy_2_1 = yyv_Tp; 

if ((!test_pointer_to_function_and_get_return_and_function_type(yy_2_1, (&yy_2_2), (&yy_2_3)))){
goto yyfl_36_32; }

yyv_Tp1 = yy_2_2; 

yyv_TpF = yy_2_3; 

yy_3_1 = yyv_Tp1; 

get_tp_descr(yy_3_1, (&yy_3_2)); 

yyv_D1 = yy_3_2; 

yy_4_1 = yyv_D1; 

td_map_to_mode(yy_4_1, (&yy_4_2)); 

yyv_M = yy_4_2; 

yy_5_1 = yyv_TpF; 

get_tp_descr(yy_5_1, (&yy_5_2)); 

yyv_D = yy_5_2; 

yy_6_1 = yyv_L; 

yy_6_2 = yyv_D; 

trafo_arg_list(yy_6_1, yy_6_2, (&yy_6_3), (&yy_6_4)); 

yyv_Size = yy_6_3; 

yyv_IRlist = yy_6_4; 

yy_0_2 = yyv_Tp1; 

yy_0_3_1 = yyv_M; 

yy_0_3_2 = yyv_Size; 

yy_0_3_3 = yyv_Res; 

yy_0_3_4 = yyv_IRlist; 

yy_0_3 = yyb + 0; 

yy_0_3[0] = 9; 

yy_0_3[1] = (((long )yy_0_3_1)); 

yy_0_3[2] = (((long )yy_0_3_2)); 

yy_0_3[3] = (((long )yy_0_3_3)); 

yy_0_3[4] = (((long )yy_0_3_4)); 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_36_32:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E;



 yy yy_0_1_2;



 yy yyv_L;



 yy yy_0_1_3;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_0_3_1;



 yy yy_0_3_2;



 yy yy_0_3_3;



 yy yy_0_3_4;



 yy yy_1_1;



 yy yyv_Tp;



 yy yy_1_2;



 yy yyv_Ptrtofun;



 yy yy_1_3;



 yy yy_2_1;



 yy yyv_Tp1;



 yy yy_2_2;



 yy yyv_TpF;



 yy yy_2_3;



 yy yy_3_1;



 yy yyv_D1;



 yy yy_3_2;



 yy yy_4_1;



 yy yyv_M;



 yy yy_4_2;



 yy yy_5_1;



 yy yyv_D;



 yy yy_5_2;



 yy yy_6_1;



 yy yy_6_2;



 yy yyv_Size;



 yy yy_6_3;



 yy yyv_IRlist;



 yy yy_6_4;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_36_33; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 5){
goto yyfl_36_33; }

yyv_E = yy_0_1_2; 

yyv_L = yy_0_1_3; 

yyb = yyh; 

yyh += 5; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_E; 

trafo_expr_rvalue(yy_1_1, (&yy_1_2), (&yy_1_3)); 

yyv_Tp = yy_1_2; 

yyv_Ptrtofun = yy_1_3; 

yy_2_1 = yyv_Tp; 

if ((!test_pointer_to_function_and_get_return_and_function_type(yy_2_1, (&yy_2_2), (&yy_2_3)))){
goto yyfl_36_33; }

yyv_Tp1 = yy_2_2; 

yyv_TpF = yy_2_3; 

yy_3_1 = yyv_Tp1; 

get_tp_descr(yy_3_1, (&yy_3_2)); 

yyv_D1 = yy_3_2; 

yy_4_1 = yyv_D1; 

td_map_to_mode(yy_4_1, (&yy_4_2)); 

yyv_M = yy_4_2; 

yy_5_1 = yyv_TpF; 

get_tp_descr(yy_5_1, (&yy_5_2)); 

yyv_D = yy_5_2; 

yy_6_1 = yyv_L; 

yy_6_2 = yyv_D; 

trafo_arg_list(yy_6_1, yy_6_2, (&yy_6_3), (&yy_6_4)); 

yyv_Size = yy_6_3; 

yyv_IRlist = yy_6_4; 

yy_0_2 = yyv_Tp1; 

yy_0_3_1 = yyv_M; 

yy_0_3_2 = yyv_Size; 

yy_0_3_3 = yyv_Ptrtofun; 

yy_0_3_4 = yyv_IRlist; 

yy_0_3 = yyb + 0; 

yy_0_3[0] = 9; 

yy_0_3[1] = (((long )yy_0_3_1)); 

yy_0_3[2] = (((long )yy_0_3_2)); 

yy_0_3[3] = (((long )yy_0_3_3)); 

yy_0_3[4] = (((long )yy_0_3_4)); 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_36_33:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yy_0_1_2;



 yy yyv_T;



 yy yy_0_1_2_1;



 yy yyv_E;



 yy yy_0_1_3;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_1_1;



 yy yyv_Tp1;



 yy yy_1_2;



 yy yy_2_1;



 yy yyv_Tp2;



 yy yy_2_2;



 yy yyv_Res;



 yy yy_2_3;



 yy yy_3_1;



 yy yy_3_2;



 yy yy_3_3;



 yy yyv_ResC;



 yy yy_3_4;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_36_34; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 36){
goto yyfl_36_34; }

if (yy_0_1_2[0] != 3){
goto yyfl_36_34; }

yy_0_1_2_1 = ((( yy )yy_0_1_2[1])); 

yyv_T = yy_0_1_2_1; 

yyv_E = yy_0_1_3; 

yy_1_1 = yyv_T; 

process_type_name(yy_1_1, (&yy_1_2)); 

yyv_Tp1 = yy_1_2; 

yy_2_1 = yyv_E; 

trafo_expr_rvalue(yy_2_1, (&yy_2_2), (&yy_2_3)); 

yyv_Tp2 = yy_2_2; 

yyv_Res = yy_2_3; 

yy_3_1 = yyv_Tp1; 

yy_3_2 = yyv_Tp2; 

yy_3_3 = yyv_Res; 

cast_param(yy_3_1, yy_3_2, yy_3_3, (&yy_3_4)); 

yyv_ResC = yy_3_4; 

yy_0_2 = yyv_Tp1; 

yy_0_3 = yyv_ResC; 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_36_34:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E;



 yy yy_0_1_2;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_0_3_1;



 yy yy_0_3_2;



 yy yy_0_3_2_1;



 yy yy_0_3_2_2;



 yy yy_0_3_3;



 yy yy_0_3_3_1;



 yy yy_0_3_3_2;



 yy yy_0_3_3_2_1;



 yy yy_0_3_3_3;



 yy yy_1_1;



 yy yyv_Tp1;



 yy yy_1_2;



 yy yyv_Lval;



 yy yy_1_3;



 yy yy_2_1;



 yy yyv_D1;



 yy yy_2_2;



 yy yy_3_1;



 yy yyv_M1;



 yy yy_3_2;



 yy yyv_T;



 yy yy_4_1;



 yy yy_5_1;



 yy yy_5_1_1;



 yy yy_5_1_2;



 yy yy_5_1_3;



 yy yyv_Tp2;



 yy yy_5_2;



 yy yyv_M2;



 yy yy_5_3;



 yy yy_6_1;



 yy yy_6_2;



 yy yy_6_3;



 yy yy_6_3_1;



 yy yy_6_3_2;



 yy yy_6_3_2_1;



 yy yy_6_4;



 yy yy_6_4_1;



 yy yy_6_4_2;



 yy yyv_RvalPlus;



 yy yy_6_5;



 yy yyv_Tp3;



 yy yy_6_6;



 yy yy_7_1;



 yy yy_7_2;



 yy yy_7_3;



 yy yyv_RvalC;



 yy yy_7_4;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 7){
goto yyfl_36_35; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

if (yy_0_1_1[0] != 39){
goto yyfl_36_35; }

yyv_E = yy_0_1_2; 

yyb = yyh; 

yyh += 28; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_E; 

trafo_expr_mod_lvalue(yy_1_1, (&yy_1_2), (&yy_1_3)); 

yyv_Tp1 = yy_1_2; 

yyv_Lval = yy_1_3; 

yy_2_1 = yyv_Tp1; 

get_tp_descr(yy_2_1, (&yy_2_2)); 

yyv_D1 = yy_2_2; 

yy_3_1 = yyv_D1; 

td_map_to_mode(yy_3_1, (&yy_3_2)); 

yyv_M1 = yy_3_2; 

cg_new_address_tempo((&yy_4_1)); 

yyv_T = yy_4_1; 

yy_5_1_1 = yyb + 17; 

yy_5_1_1[0] = 2; 

yy_5_1_2 = yyb + 18; 

yy_5_1_2[0] = 2; 

yy_5_1_3 = yyb + 19; 

yy_5_1_3[0] = 6; 

yy_5_1 = yyb + 13; 

yy_5_1[0] = 13; 

yy_5_1[1] = (((long )yy_5_1_1)); 

yy_5_1[2] = (((long )yy_5_1_2)); 

yy_5_1[3] = (((long )yy_5_1_3)); 

make_type_and_size_and_mode(yy_5_1, (&yy_5_2), (&yy_5_3)); 

yyv_Tp2 = yy_5_2; 

yyv_M2 = yy_5_3; 

yy_6_1 = yyv_Tp1; 

yy_6_2 = yyv_Tp2; 

yy_6_3_1 = yyv_M1; 

yy_6_3_2_1 = yyv_T; 

yy_6_3_2 = yyb + 23; 

yy_6_3_2[0] = 50; 

yy_6_3_2[1] = (((long )yy_6_3_2_1)); 

yy_6_3 = yyb + 20; 

yy_6_3[0] = 22; 

yy_6_3[1] = (((long )yy_6_3_1)); 

yy_6_3[2] = (((long )yy_6_3_2)); 

yy_6_4_1 = yyv_M2; 

yy_6_4_2 = ((( yy )1)); 

yy_6_4 = yyb + 25; 

yy_6_4[0] = 21; 

yy_6_4[1] = (((long )yy_6_4_1)); 

yy_6_4[2] = (((long )yy_6_4_2)); 

inc_params(yy_6_1, yy_6_2, yy_6_3, yy_6_4, (&yy_6_5), (&yy_6_6)); 

yyv_RvalPlus = yy_6_5; 

yyv_Tp3 = yy_6_6; 

yy_7_1 = yyv_Tp1; 

yy_7_2 = yyv_Tp3; 

yy_7_3 = yyv_RvalPlus; 

simple_assign_params(yy_7_1, yy_7_2, yy_7_3, (&yy_7_4)); 

yyv_RvalC = yy_7_4; 

yy_0_2 = yyv_Tp1; 

yy_0_3_1 = yyv_M1; 

yy_0_3_2_1 = yyv_T; 

yy_0_3_2_2 = yyv_Lval; 

yy_0_3_2 = yyb + 4; 

yy_0_3_2[0] = 49; 

yy_0_3_2[1] = (((long )yy_0_3_2_1)); 

yy_0_3_2[2] = (((long )yy_0_3_2_2)); 

yy_0_3_3_1 = yyv_M1; 

yy_0_3_3_2_1 = yyv_T; 

yy_0_3_3_2 = yyb + 11; 

yy_0_3_3_2[0] = 50; 

yy_0_3_3_2[1] = (((long )yy_0_3_3_2_1)); 

yy_0_3_3_3 = yyv_RvalC; 

yy_0_3_3 = yyb + 7; 

yy_0_3_3[0] = 44; 

yy_0_3_3[1] = (((long )yy_0_3_3_1)); 

yy_0_3_3[2] = (((long )yy_0_3_3_2)); 

yy_0_3_3[3] = (((long )yy_0_3_3_3)); 

yy_0_3 = yyb + 0; 

yy_0_3[0] = 45; 

yy_0_3[1] = (((long )yy_0_3_1)); 

yy_0_3[2] = (((long )yy_0_3_2)); 

yy_0_3[3] = (((long )yy_0_3_3)); 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_36_35:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E;



 yy yy_0_1_2;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_0_3_1;



 yy yy_0_3_2;



 yy yy_0_3_2_1;



 yy yy_0_3_2_2;



 yy yy_0_3_3;



 yy yy_0_3_3_1;



 yy yy_0_3_3_2;



 yy yy_0_3_3_2_1;



 yy yy_0_3_3_3;



 yy yy_1_1;



 yy yyv_Tp1;



 yy yy_1_2;



 yy yyv_Lval;



 yy yy_1_3;



 yy yy_2_1;



 yy yyv_D;



 yy yy_2_2;



 yy yy_3_1;



 yy yyv_M1;



 yy yy_3_2;



 yy yyv_T;



 yy yy_4_1;



 yy yy_5_1;



 yy yy_5_1_1;



 yy yy_5_1_2;



 yy yy_5_1_3;



 yy yyv_Tp2;



 yy yy_5_2;



 yy yyv_M2;



 yy yy_5_3;



 yy yy_6_1;



 yy yy_6_2;



 yy yy_6_3;



 yy yy_6_3_1;



 yy yy_6_3_2;



 yy yy_6_3_2_1;



 yy yy_6_4;



 yy yy_6_4_1;



 yy yy_6_4_2;



 yy yyv_RvalMinus;



 yy yy_6_5;



 yy yyv_Tp3;



 yy yy_6_6;



 yy yy_7_1;



 yy yy_7_2;



 yy yy_7_3;



 yy yyv_RvalC;



 yy yy_7_4;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 7){
goto yyfl_36_36; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

if (yy_0_1_1[0] != 40){
goto yyfl_36_36; }

yyv_E = yy_0_1_2; 

yyb = yyh; 

yyh += 28; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_E; 

trafo_expr_mod_lvalue(yy_1_1, (&yy_1_2), (&yy_1_3)); 

yyv_Tp1 = yy_1_2; 

yyv_Lval = yy_1_3; 

yy_2_1 = yyv_Tp1; 

get_tp_descr(yy_2_1, (&yy_2_2)); 

yyv_D = yy_2_2; 

yy_3_1 = yyv_D; 

td_map_to_mode(yy_3_1, (&yy_3_2)); 

yyv_M1 = yy_3_2; 

cg_new_address_tempo((&yy_4_1)); 

yyv_T = yy_4_1; 

yy_5_1_1 = yyb + 17; 

yy_5_1_1[0] = 2; 

yy_5_1_2 = yyb + 18; 

yy_5_1_2[0] = 2; 

yy_5_1_3 = yyb + 19; 

yy_5_1_3[0] = 6; 

yy_5_1 = yyb + 13; 

yy_5_1[0] = 13; 

yy_5_1[1] = (((long )yy_5_1_1)); 

yy_5_1[2] = (((long )yy_5_1_2)); 

yy_5_1[3] = (((long )yy_5_1_3)); 

make_type_and_size_and_mode(yy_5_1, (&yy_5_2), (&yy_5_3)); 

yyv_Tp2 = yy_5_2; 

yyv_M2 = yy_5_3; 

yy_6_1 = yyv_Tp1; 

yy_6_2 = yyv_Tp2; 

yy_6_3_1 = yyv_M1; 

yy_6_3_2_1 = yyv_T; 

yy_6_3_2 = yyb + 23; 

yy_6_3_2[0] = 50; 

yy_6_3_2[1] = (((long )yy_6_3_2_1)); 

yy_6_3 = yyb + 20; 

yy_6_3[0] = 22; 

yy_6_3[1] = (((long )yy_6_3_1)); 

yy_6_3[2] = (((long )yy_6_3_2)); 

yy_6_4_1 = yyv_M2; 

yy_6_4_2 = ((( yy )1)); 

yy_6_4 = yyb + 25; 

yy_6_4[0] = 21; 

yy_6_4[1] = (((long )yy_6_4_1)); 

yy_6_4[2] = (((long )yy_6_4_2)); 

dec_params(yy_6_1, yy_6_2, yy_6_3, yy_6_4, (&yy_6_5), (&yy_6_6)); 

yyv_RvalMinus = yy_6_5; 

yyv_Tp3 = yy_6_6; 

yy_7_1 = yyv_Tp1; 

yy_7_2 = yyv_Tp3; 

yy_7_3 = yyv_RvalMinus; 

simple_assign_params(yy_7_1, yy_7_2, yy_7_3, (&yy_7_4)); 

yyv_RvalC = yy_7_4; 

yy_0_2 = yyv_Tp1; 

yy_0_3_1 = yyv_M1; 

yy_0_3_2_1 = yyv_T; 

yy_0_3_2_2 = yyv_Lval; 

yy_0_3_2 = yyb + 4; 

yy_0_3_2[0] = 49; 

yy_0_3_2[1] = (((long )yy_0_3_2_1)); 

yy_0_3_2[2] = (((long )yy_0_3_2_2)); 

yy_0_3_3_1 = yyv_M1; 

yy_0_3_3_2_1 = yyv_T; 

yy_0_3_3_2 = yyb + 11; 

yy_0_3_3_2[0] = 50; 

yy_0_3_3_2[1] = (((long )yy_0_3_3_2_1)); 

yy_0_3_3_3 = yyv_RvalC; 

yy_0_3_3 = yyb + 7; 

yy_0_3_3[0] = 44; 

yy_0_3_3[1] = (((long )yy_0_3_3_1)); 

yy_0_3_3[2] = (((long )yy_0_3_3_2)); 

yy_0_3_3[3] = (((long )yy_0_3_3_3)); 

yy_0_3 = yyb + 0; 

yy_0_3[0] = 45; 

yy_0_3[1] = (((long )yy_0_3_1)); 

yy_0_3[2] = (((long )yy_0_3_2)); 

yy_0_3[3] = (((long )yy_0_3_3)); 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_36_36:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E;



 yy yy_0_1_2;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_1_1;



 yy yyv_Tp1;



 yy yy_1_2;



 yy yyv_Res;



 yy yy_1_3;



 yy yy_2_1;



 yy yyv_D1;



 yy yy_2_2;



 yy yy_3_1;



 yy yy_3_1_1;



 yy yy_3_1_2;



 yy yyv_Tp;



 yy yy_3_2;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 7){
goto yyfl_36_37; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

if (yy_0_1_1[0] != 41){
goto yyfl_36_37; }

yyv_E = yy_0_1_2; 

yyb = yyh; 

yyh += 4; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_E; 

trafo_expr_lvalue(yy_1_1, (&yy_1_2), (&yy_1_3)); 

yyv_Tp1 = yy_1_2; 

yyv_Res = yy_1_3; 

yy_2_1 = yyv_Tp1; 

get_tp_descr(yy_2_1, (&yy_2_2)); 

yyv_D1 = yy_2_2; 

yy_3_1_1 = yyb + 3; 

yy_3_1_1[0] = 4; 

yy_3_1_2 = yyv_Tp1; 

yy_3_1 = yyb + 0; 

yy_3_1[0] = 5; 

yy_3_1[1] = (((long )yy_3_1_1)); 

yy_3_1[2] = (((long )yy_3_1_2)); 

make_type_and_size(yy_3_1, (&yy_3_2)); 

yyv_Tp = yy_3_2; 

yy_0_2 = yyv_Tp; 

yy_0_3 = yyv_Res; 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_36_37:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E;



 yy yy_0_1_2;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_0_3_1;



 yy yy_0_3_2;



 yy yy_1_1;



 yy yyv_Tp1;



 yy yy_1_2;



 yy yyv_Res1;



 yy yy_1_3;



 yy yy_2_1;



 yy yy_2_2;



 yy yy_2_3;



 yy yyv_Tp;



 yy yy_2_4;



 yy yyv_Res;



 yy yy_2_5;



 yy yy_3_1;



 yy yyv_D;



 yy yy_3_2;



 yy yy_4_1;



 yy yyv_AMode;



 yy yy_4_2;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 7){
goto yyfl_36_38; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

if (yy_0_1_1[0] != 42){
goto yyfl_36_38; }

yyv_E = yy_0_1_2; 

yyb = yyh; 

yyh += 4; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_E; 

trafo_expr_rvalue(yy_1_1, (&yy_1_2), (&yy_1_3)); 

yyv_Tp1 = yy_1_2; 

yyv_Res1 = yy_1_3; 

yy_2_1 = yyb + 3; 

yy_2_1[0] = 42; 

yy_2_2 = yyv_Tp1; 

yy_2_3 = yyv_Res1; 

param_coerce(yy_2_1, yy_2_2, yy_2_3, (&yy_2_4), (&yy_2_5)); 

yyv_Tp = yy_2_4; 

yyv_Res = yy_2_5; 

yy_3_1 = yyv_Tp; 

get_tp_descr(yy_3_1, (&yy_3_2)); 

yyv_D = yy_3_2; 

yy_4_1 = yyv_D; 

td_map_to_mode(yy_4_1, (&yy_4_2)); 

yyv_AMode = yy_4_2; 

yy_0_2 = yyv_Tp; 

yy_0_3_1 = yyv_AMode; 

yy_0_3_2 = yyv_Res; 

yy_0_3 = yyb + 0; 

yy_0_3[0] = 53; 

yy_0_3[1] = (((long )yy_0_3_1)); 

yy_0_3[2] = (((long )yy_0_3_2)); 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_36_38:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E;



 yy yy_0_1_2;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_0_3_1;



 yy yy_0_3_2;



 yy yy_1_1;



 yy yyv_Tp1;



 yy yy_1_2;



 yy yyv_Res1;



 yy yy_1_3;



 yy yy_2_1;



 yy yy_2_2;



 yy yy_2_3;



 yy yyv_Tp;



 yy yy_2_4;



 yy yyv_Res;



 yy yy_2_5;



 yy yy_3_1;



 yy yyv_D;



 yy yy_3_2;



 yy yy_4_1;



 yy yyv_AMode;



 yy yy_4_2;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 7){
goto yyfl_36_39; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

if (yy_0_1_1[0] != 43){
goto yyfl_36_39; }

yyv_E = yy_0_1_2; 

yyb = yyh; 

yyh += 4; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_E; 

trafo_expr_rvalue(yy_1_1, (&yy_1_2), (&yy_1_3)); 

yyv_Tp1 = yy_1_2; 

yyv_Res1 = yy_1_3; 

yy_2_1 = yyb + 3; 

yy_2_1[0] = 43; 

yy_2_2 = yyv_Tp1; 

yy_2_3 = yyv_Res1; 

param_coerce(yy_2_1, yy_2_2, yy_2_3, (&yy_2_4), (&yy_2_5)); 

yyv_Tp = yy_2_4; 

yyv_Res = yy_2_5; 

yy_3_1 = yyv_Tp; 

get_tp_descr(yy_3_1, (&yy_3_2)); 

yyv_D = yy_3_2; 

yy_4_1 = yyv_D; 

td_map_to_mode(yy_4_1, (&yy_4_2)); 

yyv_AMode = yy_4_2; 

yy_0_2 = yyv_Tp; 

yy_0_3_1 = yyv_AMode; 

yy_0_3_2 = yyv_Res; 

yy_0_3 = yyb + 0; 

yy_0_3[0] = 19; 

yy_0_3[1] = (((long )yy_0_3_1)); 

yy_0_3[2] = (((long )yy_0_3_2)); 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_36_39:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E;



 yy yy_0_1_2;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_0_3_1;



 yy yy_0_3_2;



 yy yy_1_1;



 yy yyv_Tp1;



 yy yy_1_2;



 yy yyv_Res1;



 yy yy_1_3;



 yy yy_2_1;



 yy yy_2_2;



 yy yy_2_3;



 yy yyv_Tp;



 yy yy_2_4;



 yy yyv_Res;



 yy yy_2_5;



 yy yy_3_1;



 yy yyv_D;



 yy yy_3_2;



 yy yy_4_1;



 yy yyv_AMode;



 yy yy_4_2;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 7){
goto yyfl_36_40; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

if (yy_0_1_1[0] != 44){
goto yyfl_36_40; }

yyv_E = yy_0_1_2; 

yyb = yyh; 

yyh += 4; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_E; 

trafo_expr_rvalue(yy_1_1, (&yy_1_2), (&yy_1_3)); 

yyv_Tp1 = yy_1_2; 

yyv_Res1 = yy_1_3; 

yy_2_1 = yyb + 3; 

yy_2_1[0] = 44; 

yy_2_2 = yyv_Tp1; 

yy_2_3 = yyv_Res1; 

param_coerce(yy_2_1, yy_2_2, yy_2_3, (&yy_2_4), (&yy_2_5)); 

yyv_Tp = yy_2_4; 

yyv_Res = yy_2_5; 

yy_3_1 = yyv_Tp; 

get_tp_descr(yy_3_1, (&yy_3_2)); 

yyv_D = yy_3_2; 

yy_4_1 = yyv_D; 

td_map_to_mode(yy_4_1, (&yy_4_2)); 

yyv_AMode = yy_4_2; 

yy_0_2 = yyv_Tp; 

yy_0_3_1 = yyv_AMode; 

yy_0_3_2 = yyv_Res; 

yy_0_3 = yyb + 0; 

yy_0_3[0] = 24; 

yy_0_3[1] = (((long )yy_0_3_1)); 

yy_0_3[2] = (((long )yy_0_3_2)); 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_36_40:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E;



 yy yy_0_1_2;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_0_3_1;



 yy yy_0_3_2;



 yy yy_1_1;



 yy yyv_Tp1;



 yy yy_1_2;



 yy yyv_Res1;



 yy yy_1_3;



 yy yy_2_1;



 yy yy_2_2;



 yy yy_2_3;



 yy yyv_Tp;



 yy yy_2_4;



 yy yyv_Res;



 yy yy_2_5;



 yy yy_3_1;



 yy yyv_D;



 yy yy_3_2;



 yy yy_4_1;



 yy yyv_AMode;



 yy yy_4_2;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 7){
goto yyfl_36_41; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

if (yy_0_1_1[0] != 46){
goto yyfl_36_41; }

yyv_E = yy_0_1_2; 

yyb = yyh; 

yyh += 4; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_E; 

trafo_expr_rvalue(yy_1_1, (&yy_1_2), (&yy_1_3)); 

yyv_Tp1 = yy_1_2; 

yyv_Res1 = yy_1_3; 

yy_2_1 = yyb + 3; 

yy_2_1[0] = 46; 

yy_2_2 = yyv_Tp1; 

yy_2_3 = yyv_Res1; 

param_coerce(yy_2_1, yy_2_2, yy_2_3, (&yy_2_4), (&yy_2_5)); 

yyv_Tp = yy_2_4; 

yyv_Res = yy_2_5; 

yy_3_1 = yyv_Tp; 

get_tp_descr(yy_3_1, (&yy_3_2)); 

yyv_D = yy_3_2; 

yy_4_1 = yyv_D; 

td_map_to_mode(yy_4_1, (&yy_4_2)); 

yyv_AMode = yy_4_2; 

yy_0_2 = yyv_Tp; 

yy_0_3_1 = yyv_AMode; 

yy_0_3_2 = yyv_Res; 

yy_0_3 = yyb + 0; 

yy_0_3[0] = 25; 

yy_0_3[1] = (((long )yy_0_3_1)); 

yy_0_3[2] = (((long )yy_0_3_2)); 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_36_41:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yy_0_1_2;



 yy yyv_D;



 yy yy_0_1_2_1;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_0_3_1;



 yy yy_0_3_2;



 yy yy_1_1;



 yy yyv_Tp1;



 yy yy_1_2;



 yy yy_2_1;



 yy yyv_TgtIntConst;



 yy yy_2_2;



 yy yy_3_1;



 yy yy_3_1_1;



 yy yy_3_1_2;



 yy yy_3_1_3;



 yy yyv_Tp2;



 yy yy_3_2;



 yy yyv_M;



 yy yy_3_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 7){
goto yyfl_36_42; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

if (yy_0_1_1[0] != 47){
goto yyfl_36_42; }

if (yy_0_1_2[0] != 3){
goto yyfl_36_42; }

yy_0_1_2_1 = ((( yy )yy_0_1_2[1])); 

yyv_D = yy_0_1_2_1; 

yyb = yyh; 

yyh += 10; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_D; 

process_type_name(yy_1_1, (&yy_1_2)); 

yyv_Tp1 = yy_1_2; 

yy_2_1 = yyv_Tp1; 

get_tp_size(yy_2_1, (&yy_2_2)); 

yyv_TgtIntConst = yy_2_2; 

yy_3_1_1 = yyb + 7; 

yy_3_1_1[0] = 3; 

yy_3_1_2 = yyb + 8; 

yy_3_1_2[0] = 3; 

yy_3_1_3 = yyb + 9; 

yy_3_1_3[0] = 6; 

yy_3_1 = yyb + 3; 

yy_3_1[0] = 13; 

yy_3_1[1] = (((long )yy_3_1_1)); 

yy_3_1[2] = (((long )yy_3_1_2)); 

yy_3_1[3] = (((long )yy_3_1_3)); 

make_type_and_size_and_mode(yy_3_1, (&yy_3_2), (&yy_3_3)); 

yyv_Tp2 = yy_3_2; 

yyv_M = yy_3_3; 

yy_0_2 = yyv_Tp2; 

yy_0_3_1 = yyv_M; 

yy_0_3_2 = yyv_TgtIntConst; 

yy_0_3 = yyb + 0; 

yy_0_3[0] = 21; 

yy_0_3[1] = (((long )yy_0_3_1)); 

yy_0_3[2] = (((long )yy_0_3_2)); 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_36_42:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E;



 yy yy_0_1_2;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_0_3_1;



 yy yy_0_3_2;



 yy yy_1_1;



 yy yy_2_1;



 yy yyv_Tp1;



 yy yy_2_2;



 yy yyv_Res;



 yy yy_2_3;



 yy yy_3_1;



 yy yyv_TgtIntConst;



 yy yy_3_2;



 yy yy_4_1;



 yy yy_4_1_1;



 yy yy_4_1_2;



 yy yy_4_1_3;



 yy yyv_Tp2;



 yy yy_4_2;



 yy yyv_M;



 yy yy_4_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 7){
goto yyfl_36_43; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

if (yy_0_1_1[0] != 47){
goto yyfl_36_43; }

yyv_E = yy_0_1_2; 

yyb = yyh; 

yyh += 10; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_E; 

if ((!test_not_valid_lvalue(yy_1_1))){
goto yyfl_36_43; }

yy_2_1 = yyv_E; 

trafo_expr_rvalue(yy_2_1, (&yy_2_2), (&yy_2_3)); 

yyv_Tp1 = yy_2_2; 

yyv_Res = yy_2_3; 

yy_3_1 = yyv_Tp1; 

get_tp_size(yy_3_1, (&yy_3_2)); 

yyv_TgtIntConst = yy_3_2; 

yy_4_1_1 = yyb + 7; 

yy_4_1_1[0] = 3; 

yy_4_1_2 = yyb + 8; 

yy_4_1_2[0] = 3; 

yy_4_1_3 = yyb + 9; 

yy_4_1_3[0] = 6; 

yy_4_1 = yyb + 3; 

yy_4_1[0] = 13; 

yy_4_1[1] = (((long )yy_4_1_1)); 

yy_4_1[2] = (((long )yy_4_1_2)); 

yy_4_1[3] = (((long )yy_4_1_3)); 

make_type_and_size_and_mode(yy_4_1, (&yy_4_2), (&yy_4_3)); 

yyv_Tp2 = yy_4_2; 

yyv_M = yy_4_3; 

yy_0_2 = yyv_Tp2; 

yy_0_3_1 = yyv_M; 

yy_0_3_2 = yyv_TgtIntConst; 

yy_0_3 = yyb + 0; 

yy_0_3[0] = 21; 

yy_0_3[1] = (((long )yy_0_3_1)); 

yy_0_3[2] = (((long )yy_0_3_2)); 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_36_43:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E;



 yy yy_0_1_2;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_0_3_1;



 yy yy_0_3_2;



 yy yy_1_1;



 yy yyv_Tp1;



 yy yy_1_2;



 yy yyv_Res;



 yy yy_1_3;



 yy yy_2_1;



 yy yyv_TgtIntConst;



 yy yy_2_2;



 yy yy_3_1;



 yy yy_3_1_1;



 yy yy_3_1_2;



 yy yy_3_1_3;



 yy yyv_Tp2;



 yy yy_3_2;



 yy yyv_M;



 yy yy_3_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 7){
goto yyfl_36_44; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

if (yy_0_1_1[0] != 47){
goto yyfl_36_44; }

yyv_E = yy_0_1_2; 

yyb = yyh; 

yyh += 10; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_E; 

trafo_expr_lvalue(yy_1_1, (&yy_1_2), (&yy_1_3)); 

yyv_Tp1 = yy_1_2; 

yyv_Res = yy_1_3; 

yy_2_1 = yyv_Tp1; 

get_tp_size(yy_2_1, (&yy_2_2)); 

yyv_TgtIntConst = yy_2_2; 

yy_3_1_1 = yyb + 7; 

yy_3_1_1[0] = 3; 

yy_3_1_2 = yyb + 8; 

yy_3_1_2[0] = 3; 

yy_3_1_3 = yyb + 9; 

yy_3_1_3[0] = 6; 

yy_3_1 = yyb + 3; 

yy_3_1[0] = 13; 

yy_3_1[1] = (((long )yy_3_1_1)); 

yy_3_1[2] = (((long )yy_3_1_2)); 

yy_3_1[3] = (((long )yy_3_1_3)); 

make_type_and_size_and_mode(yy_3_1, (&yy_3_2), (&yy_3_3)); 

yyv_Tp2 = yy_3_2; 

yyv_M = yy_3_3; 

yy_0_2 = yyv_Tp2; 

yy_0_3_1 = yyv_M; 

yy_0_3_2 = yyv_TgtIntConst; 

yy_0_3 = yyb + 0; 

yy_0_3[0] = 21; 

yy_0_3[1] = (((long )yy_0_3_1)); 

yy_0_3[2] = (((long )yy_0_3_2)); 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_36_44:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E;



 yy yy_0_1_2;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_0_3_1;



 yy yy_0_3_2;



 yy yy_0_3_2_1;



 yy yy_0_3_2_2;



 yy yy_0_3_3;



 yy yy_0_3_3_1;



 yy yy_0_3_3_2;



 yy yy_0_3_3_2_1;



 yy yy_0_3_3_2_2;



 yy yy_0_3_3_2_3;



 yy yy_0_3_3_2_3_1;



 yy yy_0_3_3_2_3_2;



 yy yy_0_3_3_2_3_2_1;



 yy yy_0_3_3_3;



 yy yy_0_3_3_3_1;



 yy yy_0_3_3_3_2;



 yy yy_0_3_3_3_2_1;



 yy yy_0_3_3_3_2_2;



 yy yy_0_3_3_3_2_2_1;



 yy yy_0_3_3_3_2_3;



 yy yy_0_3_3_3_3;



 yy yy_0_3_3_3_3_1;



 yy yy_0_3_3_3_3_2;



 yy yy_1_1;



 yy yyv_Tp1;



 yy yy_1_2;



 yy yyv_Lval;



 yy yy_1_3;



 yy yy_2_1;



 yy yyv_D;



 yy yy_2_2;



 yy yy_3_1;



 yy yyv_M1;



 yy yy_3_2;



 yy yyv_T;



 yy yy_4_1;



 yy yy_5_1;



 yy yyv_T1;



 yy yy_5_2;



 yy yy_6_1;



 yy yy_6_1_1;



 yy yy_6_1_2;



 yy yy_6_1_3;



 yy yyv_Tp2;



 yy yy_6_2;



 yy yyv_M2;



 yy yy_6_3;



 yy yy_7_1;



 yy yy_7_2;



 yy yy_7_3;



 yy yy_7_3_1;



 yy yy_7_3_2;



 yy yy_7_4;



 yy yy_7_4_1;



 yy yy_7_4_2;



 yy yyv_RvalPlus;



 yy yy_7_5;



 yy yyv_Tp3;



 yy yy_7_6;



 yy yy_8_1;



 yy yyv_D3;



 yy yy_8_2;



 yy yy_9_1;



 yy yy_9_2;



 yy yy_9_3;



 yy yyv_RvalC;



 yy yy_9_4;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 7){
goto yyfl_36_45; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

if (yy_0_1_1[0] != 37){
goto yyfl_36_45; }

yyv_E = yy_0_1_2; 

yyb = yyh; 

yyh += 46; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_E; 

trafo_expr_mod_lvalue(yy_1_1, (&yy_1_2), (&yy_1_3)); 

yyv_Tp1 = yy_1_2; 

yyv_Lval = yy_1_3; 

yy_2_1 = yyv_Tp1; 

get_tp_descr(yy_2_1, (&yy_2_2)); 

yyv_D = yy_2_2; 

yy_3_1 = yyv_D; 

td_map_to_mode(yy_3_1, (&yy_3_2)); 

yyv_M1 = yy_3_2; 

cg_new_address_tempo((&yy_4_1)); 

yyv_T = yy_4_1; 

yy_5_1 = yyv_D; 

cg_new_tempo(yy_5_1, (&yy_5_2)); 

yyv_T1 = yy_5_2; 

yy_6_1_1 = yyb + 37; 

yy_6_1_1[0] = 2; 

yy_6_1_2 = yyb + 38; 

yy_6_1_2[0] = 2; 

yy_6_1_3 = yyb + 39; 

yy_6_1_3[0] = 6; 

yy_6_1 = yyb + 33; 

yy_6_1[0] = 13; 

yy_6_1[1] = (((long )yy_6_1_1)); 

yy_6_1[2] = (((long )yy_6_1_2)); 

yy_6_1[3] = (((long )yy_6_1_3)); 

make_type_and_size_and_mode(yy_6_1, (&yy_6_2), (&yy_6_3)); 

yyv_Tp2 = yy_6_2; 

yyv_M2 = yy_6_3; 

yy_7_1 = yyv_Tp1; 

yy_7_2 = yyv_Tp2; 

yy_7_3_1 = yyv_M1; 

yy_7_3_2 = yyv_T1; 

yy_7_3 = yyb + 40; 

yy_7_3[0] = 52; 

yy_7_3[1] = (((long )yy_7_3_1)); 

yy_7_3[2] = (((long )yy_7_3_2)); 

yy_7_4_1 = yyv_M2; 

yy_7_4_2 = ((( yy )1)); 

yy_7_4 = yyb + 43; 

yy_7_4[0] = 21; 

yy_7_4[1] = (((long )yy_7_4_1)); 

yy_7_4[2] = (((long )yy_7_4_2)); 

inc_params(yy_7_1, yy_7_2, yy_7_3, yy_7_4, (&yy_7_5), (&yy_7_6)); 

yyv_RvalPlus = yy_7_5; 

yyv_Tp3 = yy_7_6; 

yy_8_1 = yyv_Tp3; 

get_tp_descr(yy_8_1, (&yy_8_2)); 

yyv_D3 = yy_8_2; 

yy_9_1 = yyv_Tp1; 

yy_9_2 = yyv_Tp3; 

yy_9_3 = yyv_RvalPlus; 

simple_assign_params(yy_9_1, yy_9_2, yy_9_3, (&yy_9_4)); 

yyv_RvalC = yy_9_4; 

yy_0_2 = yyv_Tp1; 

yy_0_3_1 = yyv_M1; 

yy_0_3_2_1 = yyv_T; 

yy_0_3_2_2 = yyv_Lval; 

yy_0_3_2 = yyb + 4; 

yy_0_3_2[0] = 49; 

yy_0_3_2[1] = (((long )yy_0_3_2_1)); 

yy_0_3_2[2] = (((long )yy_0_3_2_2)); 

yy_0_3_3_1 = yyv_M1; 

yy_0_3_3_2_1 = yyv_M1; 

yy_0_3_3_2_2 = yyv_T1; 

yy_0_3_3_2_3_1 = yyv_M1; 

yy_0_3_3_2_3_2_1 = yyv_T; 

yy_0_3_3_2_3_2 = yyb + 18; 

yy_0_3_3_2_3_2[0] = 50; 

yy_0_3_3_2_3_2[1] = (((long )yy_0_3_3_2_3_2_1)); 

yy_0_3_3_2_3 = yyb + 15; 

yy_0_3_3_2_3[0] = 22; 

yy_0_3_3_2_3[1] = (((long )yy_0_3_3_2_3_1)); 

yy_0_3_3_2_3[2] = (((long )yy_0_3_3_2_3_2)); 

yy_0_3_3_2 = yyb + 11; 

yy_0_3_3_2[0] = 51; 

yy_0_3_3_2[1] = (((long )yy_0_3_3_2_1)); 

yy_0_3_3_2[2] = (((long )yy_0_3_3_2_2)); 

yy_0_3_3_2[3] = (((long )yy_0_3_3_2_3)); 

yy_0_3_3_3_1 = yyv_M1; 

yy_0_3_3_3_2_1 = yyv_M1; 

yy_0_3_3_3_2_2_1 = yyv_T; 

yy_0_3_3_3_2_2 = yyb + 28; 

yy_0_3_3_3_2_2[0] = 50; 

yy_0_3_3_3_2_2[1] = (((long )yy_0_3_3_3_2_2_1)); 

yy_0_3_3_3_2_3 = yyv_RvalC; 

yy_0_3_3_3_2 = yyb + 24; 

yy_0_3_3_3_2[0] = 44; 

yy_0_3_3_3_2[1] = (((long )yy_0_3_3_3_2_1)); 

yy_0_3_3_3_2[2] = (((long )yy_0_3_3_3_2_2)); 

yy_0_3_3_3_2[3] = (((long )yy_0_3_3_3_2_3)); 

yy_0_3_3_3_3_1 = yyv_M1; 

yy_0_3_3_3_3_2 = yyv_T1; 

yy_0_3_3_3_3 = yyb + 30; 

yy_0_3_3_3_3[0] = 52; 

yy_0_3_3_3_3[1] = (((long )yy_0_3_3_3_3_1)); 

yy_0_3_3_3_3[2] = (((long )yy_0_3_3_3_3_2)); 

yy_0_3_3_3 = yyb + 20; 

yy_0_3_3_3[0] = 45; 

yy_0_3_3_3[1] = (((long )yy_0_3_3_3_1)); 

yy_0_3_3_3[2] = (((long )yy_0_3_3_3_2)); 

yy_0_3_3_3[3] = (((long )yy_0_3_3_3_3)); 

yy_0_3_3 = yyb + 7; 

yy_0_3_3[0] = 45; 

yy_0_3_3[1] = (((long )yy_0_3_3_1)); 

yy_0_3_3[2] = (((long )yy_0_3_3_2)); 

yy_0_3_3[3] = (((long )yy_0_3_3_3)); 

yy_0_3 = yyb + 0; 

yy_0_3[0] = 45; 

yy_0_3[1] = (((long )yy_0_3_1)); 

yy_0_3[2] = (((long )yy_0_3_2)); 

yy_0_3[3] = (((long )yy_0_3_3)); 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_36_45:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E;



 yy yy_0_1_2;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_0_3_1;



 yy yy_0_3_2;



 yy yy_0_3_2_1;



 yy yy_0_3_2_2;



 yy yy_0_3_3;



 yy yy_0_3_3_1;



 yy yy_0_3_3_2;



 yy yy_0_3_3_2_1;



 yy yy_0_3_3_2_2;



 yy yy_0_3_3_2_3;



 yy yy_0_3_3_2_3_1;



 yy yy_0_3_3_2_3_2;



 yy yy_0_3_3_2_3_2_1;



 yy yy_0_3_3_3;



 yy yy_0_3_3_3_1;



 yy yy_0_3_3_3_2;



 yy yy_0_3_3_3_2_1;



 yy yy_0_3_3_3_2_2;



 yy yy_0_3_3_3_2_2_1;



 yy yy_0_3_3_3_2_3;



 yy yy_0_3_3_3_3;



 yy yy_0_3_3_3_3_1;



 yy yy_0_3_3_3_3_2;



 yy yy_1_1;



 yy yyv_Tp1;



 yy yy_1_2;



 yy yyv_Lval;



 yy yy_1_3;



 yy yy_2_1;



 yy yyv_D;



 yy yy_2_2;



 yy yy_3_1;



 yy yyv_M1;



 yy yy_3_2;



 yy yyv_T;



 yy yy_4_1;



 yy yy_5_1;



 yy yyv_T1;



 yy yy_5_2;



 yy yy_6_1;



 yy yy_6_1_1;



 yy yy_6_1_2;



 yy yy_6_1_3;



 yy yyv_Tp2;



 yy yy_6_2;



 yy yyv_M2;



 yy yy_6_3;



 yy yy_7_1;



 yy yy_7_2;



 yy yy_7_3;



 yy yy_7_3_1;



 yy yy_7_3_2;



 yy yy_7_4;



 yy yy_7_4_1;



 yy yy_7_4_2;



 yy yyv_RvalMinus;



 yy yy_7_5;



 yy yyv_Tp3;



 yy yy_7_6;



 yy yy_8_1;



 yy yy_8_2;



 yy yy_8_3;



 yy yyv_RvalC;



 yy yy_8_4;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 7){
goto yyfl_36_46; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

if (yy_0_1_1[0] != 38){
goto yyfl_36_46; }

yyv_E = yy_0_1_2; 

yyb = yyh; 

yyh += 46; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_E; 

trafo_expr_mod_lvalue(yy_1_1, (&yy_1_2), (&yy_1_3)); 

yyv_Tp1 = yy_1_2; 

yyv_Lval = yy_1_3; 

yy_2_1 = yyv_Tp1; 

get_tp_descr(yy_2_1, (&yy_2_2)); 

yyv_D = yy_2_2; 

yy_3_1 = yyv_D; 

td_map_to_mode(yy_3_1, (&yy_3_2)); 

yyv_M1 = yy_3_2; 

cg_new_address_tempo((&yy_4_1)); 

yyv_T = yy_4_1; 

yy_5_1 = yyv_D; 

cg_new_tempo(yy_5_1, (&yy_5_2)); 

yyv_T1 = yy_5_2; 

yy_6_1_1 = yyb + 37; 

yy_6_1_1[0] = 2; 

yy_6_1_2 = yyb + 38; 

yy_6_1_2[0] = 2; 

yy_6_1_3 = yyb + 39; 

yy_6_1_3[0] = 6; 

yy_6_1 = yyb + 33; 

yy_6_1[0] = 13; 

yy_6_1[1] = (((long )yy_6_1_1)); 

yy_6_1[2] = (((long )yy_6_1_2)); 

yy_6_1[3] = (((long )yy_6_1_3)); 

make_type_and_size_and_mode(yy_6_1, (&yy_6_2), (&yy_6_3)); 

yyv_Tp2 = yy_6_2; 

yyv_M2 = yy_6_3; 

yy_7_1 = yyv_Tp1; 

yy_7_2 = yyv_Tp2; 

yy_7_3_1 = yyv_M1; 

yy_7_3_2 = yyv_T1; 

yy_7_3 = yyb + 40; 

yy_7_3[0] = 52; 

yy_7_3[1] = (((long )yy_7_3_1)); 

yy_7_3[2] = (((long )yy_7_3_2)); 

yy_7_4_1 = yyv_M2; 

yy_7_4_2 = ((( yy )1)); 

yy_7_4 = yyb + 43; 

yy_7_4[0] = 21; 

yy_7_4[1] = (((long )yy_7_4_1)); 

yy_7_4[2] = (((long )yy_7_4_2)); 

dec_params(yy_7_1, yy_7_2, yy_7_3, yy_7_4, (&yy_7_5), (&yy_7_6)); 

yyv_RvalMinus = yy_7_5; 

yyv_Tp3 = yy_7_6; 

yy_8_1 = yyv_Tp1; 

yy_8_2 = yyv_Tp3; 

yy_8_3 = yyv_RvalMinus; 

simple_assign_params(yy_8_1, yy_8_2, yy_8_3, (&yy_8_4)); 

yyv_RvalC = yy_8_4; 

yy_0_2 = yyv_Tp1; 

yy_0_3_1 = yyv_M1; 

yy_0_3_2_1 = yyv_T; 

yy_0_3_2_2 = yyv_Lval; 

yy_0_3_2 = yyb + 4; 

yy_0_3_2[0] = 49; 

yy_0_3_2[1] = (((long )yy_0_3_2_1)); 

yy_0_3_2[2] = (((long )yy_0_3_2_2)); 

yy_0_3_3_1 = yyv_M1; 

yy_0_3_3_2_1 = yyv_M1; 

yy_0_3_3_2_2 = yyv_T1; 

yy_0_3_3_2_3_1 = yyv_M1; 

yy_0_3_3_2_3_2_1 = yyv_T; 

yy_0_3_3_2_3_2 = yyb + 18; 

yy_0_3_3_2_3_2[0] = 50; 

yy_0_3_3_2_3_2[1] = (((long )yy_0_3_3_2_3_2_1)); 

yy_0_3_3_2_3 = yyb + 15; 

yy_0_3_3_2_3[0] = 22; 

yy_0_3_3_2_3[1] = (((long )yy_0_3_3_2_3_1)); 

yy_0_3_3_2_3[2] = (((long )yy_0_3_3_2_3_2)); 

yy_0_3_3_2 = yyb + 11; 

yy_0_3_3_2[0] = 51; 

yy_0_3_3_2[1] = (((long )yy_0_3_3_2_1)); 

yy_0_3_3_2[2] = (((long )yy_0_3_3_2_2)); 

yy_0_3_3_2[3] = (((long )yy_0_3_3_2_3)); 

yy_0_3_3_3_1 = yyv_M1; 

yy_0_3_3_3_2_1 = yyv_M1; 

yy_0_3_3_3_2_2_1 = yyv_T; 

yy_0_3_3_3_2_2 = yyb + 28; 

yy_0_3_3_3_2_2[0] = 50; 

yy_0_3_3_3_2_2[1] = (((long )yy_0_3_3_3_2_2_1)); 

yy_0_3_3_3_2_3 = yyv_RvalC; 

yy_0_3_3_3_2 = yyb + 24; 

yy_0_3_3_3_2[0] = 44; 

yy_0_3_3_3_2[1] = (((long )yy_0_3_3_3_2_1)); 

yy_0_3_3_3_2[2] = (((long )yy_0_3_3_3_2_2)); 

yy_0_3_3_3_2[3] = (((long )yy_0_3_3_3_2_3)); 

yy_0_3_3_3_3_1 = yyv_M1; 

yy_0_3_3_3_3_2 = yyv_T1; 

yy_0_3_3_3_3 = yyb + 30; 

yy_0_3_3_3_3[0] = 52; 

yy_0_3_3_3_3[1] = (((long )yy_0_3_3_3_3_1)); 

yy_0_3_3_3_3[2] = (((long )yy_0_3_3_3_3_2)); 

yy_0_3_3_3 = yyb + 20; 

yy_0_3_3_3[0] = 45; 

yy_0_3_3_3[1] = (((long )yy_0_3_3_3_1)); 

yy_0_3_3_3[2] = (((long )yy_0_3_3_3_2)); 

yy_0_3_3_3[3] = (((long )yy_0_3_3_3_3)); 

yy_0_3_3 = yyb + 7; 

yy_0_3_3[0] = 45; 

yy_0_3_3[1] = (((long )yy_0_3_3_1)); 

yy_0_3_3[2] = (((long )yy_0_3_3_2)); 

yy_0_3_3[3] = (((long )yy_0_3_3_3)); 

yy_0_3 = yyb + 0; 

yy_0_3[0] = 45; 

yy_0_3[1] = (((long )yy_0_3_1)); 

yy_0_3[2] = (((long )yy_0_3_2)); 

yy_0_3[3] = (((long )yy_0_3_3)); 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_36_46:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_1_1;



 yy yy_1_2;



 yy yy_1_3;



 yy yyv_Tp1;



 yy yy_1_4;



 yy yyv_Res1;



 yy yy_1_5;



 yy yy_2_1;



 yy yy_2_2;



 yy yyv_Tp;



 yy yy_2_3;



 yy yyv_Res;



 yy yy_2_4;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_36_47; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 4){
goto yyfl_36_47; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 

yyb = yyh; 

yyh += 1; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyb + 0; 

yy_1_1[0] = 2; 

yy_1_2 = yyv_E1; 

yy_1_3 = yyv_E2; 

trafo_expr_subscript(yy_1_1, yy_1_2, yy_1_3, (&yy_1_4), (&yy_1_5)); 

yyv_Tp1 = yy_1_4; 

yyv_Res1 = yy_1_5; 

yy_2_1 = yyv_Tp1; 

yy_2_2 = yyv_Res1; 

conv_lvalue_to_rvalue(yy_2_1, yy_2_2, (&yy_2_3), (&yy_2_4)); 

yyv_Tp = yy_2_3; 

yyv_Res = yy_2_4; 

yy_0_2 = yyv_Tp; 

yy_0_3 = yyv_Res; 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_36_47:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_Op;



 yy yy_0_1_1;



 yy yy_0_1_1_1;



 yy yyv_E;



 yy yy_0_1_2;



 yy yyv_Id;



 yy yy_0_1_3;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_1_1;



 yy yy_1_1_1;



 yy yy_1_1_2;



 yy yy_1_1_3;



 yy yyv_Tp1;



 yy yy_1_2;



 yy yyv_Res1;



 yy yy_1_3;



 yy yy_2_1;



 yy yy_2_2;



 yy yyv_Tp;



 yy yy_2_3;



 yy yyv_Res;



 yy yy_2_4;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 8){
goto yyfl_36_48; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

yy_0_1_1_1 = yy_0_1_1; 

yyv_Op = yy_0_1_1; 

if (yy_0_1_1_1[0] != 3){
goto yyfl_36_48; }

yyv_E = yy_0_1_2; 

yyv_Id = yy_0_1_3; 

yyb = yyh; 

yyh += 4; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1_1 = yyv_Op; 

yy_1_1_2 = yyv_E; 

yy_1_1_3 = yyv_Id; 

yy_1_1 = yyb + 0; 

yy_1_1[0] = 8; 

yy_1_1[1] = (((long )yy_1_1_1)); 

yy_1_1[2] = (((long )yy_1_1_2)); 

yy_1_1[3] = (((long )yy_1_1_3)); 

trafo_expr_lvalue(yy_1_1, (&yy_1_2), (&yy_1_3)); 

yyv_Tp1 = yy_1_2; 

yyv_Res1 = yy_1_3; 

yy_2_1 = yyv_Tp1; 

yy_2_2 = yyv_Res1; 

conv_lvalue_to_rvalue(yy_2_1, yy_2_2, (&yy_2_3), (&yy_2_4)); 

yyv_Tp = yy_2_3; 

yyv_Res = yy_2_4; 

yy_0_2 = yyv_Tp; 

yy_0_3 = yyv_Res; 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_36_48:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E;



 yy yy_0_1_2;



 yy yyv_Id;



 yy yy_0_1_3;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_1_1;



 yy yy_1_1_1;



 yy yy_1_1_2;



 yy yy_1_1_3;



 yy yyv_Tp1;



 yy yy_1_2;



 yy yyv_Res1;



 yy yy_1_3;



 yy yy_2_1;



 yy yy_2_2;



 yy yyv_Tp;



 yy yy_2_3;



 yy yyv_Res;



 yy yy_2_4;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 8){
goto yyfl_36_49; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 2){
goto yyfl_36_49; }

yyv_E = yy_0_1_2; 

yyv_Id = yy_0_1_3; 

yyb = yyh; 

yyh += 5; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1_1 = yyb + 4; 

yy_1_1_1[0] = 2; 

yy_1_1_2 = yyv_E; 

yy_1_1_3 = yyv_Id; 

yy_1_1 = yyb + 0; 

yy_1_1[0] = 8; 

yy_1_1[1] = (((long )yy_1_1_1)); 

yy_1_1[2] = (((long )yy_1_1_2)); 

yy_1_1[3] = (((long )yy_1_1_3)); 

trafo_expr_lvalue(yy_1_1, (&yy_1_2), (&yy_1_3)); 

yyv_Tp1 = yy_1_2; 

yyv_Res1 = yy_1_3; 

yy_2_1 = yyv_Tp1; 

yy_2_2 = yyv_Res1; 

conv_lvalue_to_rvalue(yy_2_1, yy_2_2, (&yy_2_3), (&yy_2_4)); 

yyv_Tp = yy_2_3; 

yyv_Res = yy_2_4; 

yy_0_2 = yyv_Tp; 

yy_0_3 = yyv_Res; 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_36_49:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E;



 yy yy_0_1_2;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_1_1;



 yy yy_1_1_1;



 yy yy_1_1_2;



 yy yyv_Tp1;



 yy yy_1_2;



 yy yyv_Res1;



 yy yy_1_3;



 yy yy_2_1;



 yy yy_2_2;



 yy yyv_Tp;



 yy yy_2_3;



 yy yyv_Res;



 yy yy_2_4;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 7){
goto yyfl_36_50; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

if (yy_0_1_1[0] != 45){
goto yyfl_36_50; }

yyv_E = yy_0_1_2; 

yyb = yyh; 

yyh += 4; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1_1 = yyb + 3; 

yy_1_1_1[0] = 45; 

yy_1_1_2 = yyv_E; 

yy_1_1 = yyb + 0; 

yy_1_1[0] = 7; 

yy_1_1[1] = (((long )yy_1_1_1)); 

yy_1_1[2] = (((long )yy_1_1_2)); 

trafo_expr_lvalue(yy_1_1, (&yy_1_2), (&yy_1_3)); 

yyv_Tp1 = yy_1_2; 

yyv_Res1 = yy_1_3; 

yy_2_1 = yyv_Tp1; 

yy_2_2 = yyv_Res1; 

conv_lvalue_to_rvalue(yy_2_1, yy_2_2, (&yy_2_3), (&yy_2_4)); 

yyv_Tp = yy_2_3; 

yyv_Res = yy_2_4; 

yy_0_2 = yyv_Tp; 

yy_0_3 = yyv_Res; 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_36_50:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_Id;



 yy yy_0_1_1;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_1_1;



 yy yy_1_1_1;



 yy yyv_Tp1;



 yy yy_1_2;



 yy yyv_Res1;



 yy yy_1_3;



 yy yy_2_1;



 yy yy_2_2;



 yy yyv_Tp;



 yy yy_2_3;



 yy yyv_Res;



 yy yy_2_4;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 6){
goto yyfl_36_51; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yyv_Id = yy_0_1_1; 

yyb = yyh; 

yyh += 2; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1_1 = yyv_Id; 

yy_1_1 = yyb + 0; 

yy_1_1[0] = 6; 

yy_1_1[1] = (((long )yy_1_1_1)); 

trafo_expr_lvalue(yy_1_1, (&yy_1_2), (&yy_1_3)); 

yyv_Tp1 = yy_1_2; 

yyv_Res1 = yy_1_3; 

yy_2_1 = yyv_Tp1; 

yy_2_2 = yyv_Res1; 

conv_lvalue_to_rvalue(yy_2_1, yy_2_2, (&yy_2_3), (&yy_2_4)); 

yyv_Tp = yy_2_3; 

yyv_Res = yy_2_4; 

yy_0_2 = yyv_Tp; 

yy_0_3 = yyv_Res; 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_36_51:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_Ident;



 yy yy_0_1_1;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_0_3_1;



 yy yy_0_3_2;



 yy yy_1_1;



 yy yy_1_2;



 yy yyv_TgtIntConst;



 yy yy_1_2_1;



 yy yy_2_1;



 yy yy_2_1_1;



 yy yy_2_1_2;



 yy yy_2_1_3;



 yy yyv_Tp;



 yy yy_2_2;



 yy yyv_M;



 yy yy_2_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 22){
goto yyfl_36_52; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yyv_Ident = yy_0_1_1; 

yyb = yyh; 

yyh += 10; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_Ident; 

TestIdentification(yy_1_1, (&yy_1_2)); 

if (yy_1_2[0] != 6){
goto yyfl_36_52; }

yy_1_2_1 = ((( yy )yy_1_2[1])); 

yyv_TgtIntConst = yy_1_2_1; 

yy_2_1_1 = yyb + 7; 

yy_2_1_1[0] = 2; 

yy_2_1_2 = yyb + 8; 

yy_2_1_2[0] = 1; 

yy_2_1_3 = yyb + 9; 

yy_2_1_3[0] = 6; 

yy_2_1 = yyb + 3; 

yy_2_1[0] = 13; 

yy_2_1[1] = (((long )yy_2_1_1)); 

yy_2_1[2] = (((long )yy_2_1_2)); 

yy_2_1[3] = (((long )yy_2_1_3)); 

make_type_and_size_and_mode(yy_2_1, (&yy_2_2), (&yy_2_3)); 

yyv_Tp = yy_2_2; 

yyv_M = yy_2_3; 

yy_0_2 = yyv_Tp; 

yy_0_3_1 = yyv_M; 

yy_0_3_2 = yyv_TgtIntConst; 

yy_0_3 = yyb + 0; 

yy_0_3[0] = 21; 

yy_0_3[1] = (((long )yy_0_3_1)); 

yy_0_3[2] = (((long )yy_0_3_2)); 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_36_52:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_String;



 yy yy_0_1_1;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_1_1;



 yy yy_1_1_1;



 yy yyv_Tp1;



 yy yy_1_2;



 yy yyv_Res1;



 yy yy_1_3;



 yy yy_2_1;



 yy yy_2_2;



 yy yyv_Tp;



 yy yy_2_3;



 yy yyv_Res;



 yy yy_2_4;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 17){
goto yyfl_36_53; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yyv_String = yy_0_1_1; 

yyb = yyh; 

yyh += 2; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1_1 = yyv_String; 

yy_1_1 = yyb + 0; 

yy_1_1[0] = 17; 

yy_1_1[1] = (((long )yy_1_1_1)); 

trafo_expr_lvalue(yy_1_1, (&yy_1_2), (&yy_1_3)); 

yyv_Tp1 = yy_1_2; 

yyv_Res1 = yy_1_3; 

yy_2_1 = yyv_Tp1; 

yy_2_2 = yyv_Res1; 

conv_lvalue_to_rvalue(yy_2_1, yy_2_2, (&yy_2_3), (&yy_2_4)); 

yyv_Tp = yy_2_3; 

yyv_Res = yy_2_4; 

yy_0_2 = yyv_Tp; 

yy_0_3 = yyv_Res; 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_36_53:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_FloatConst;



 yy yy_0_1_1;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_0_3_1;



 yy yy_0_3_2;



 yy yy_1_1;



 yy yy_1_1_1;



 yy yy_1_1_2;



 yy yy_1_1_3;



 yy yyv_Tp;



 yy yy_1_2;



 yy yyv_M;



 yy yy_1_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 21){
goto yyfl_36_54; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yyv_FloatConst = yy_0_1_1; 

yyb = yyh; 

yyh += 10; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1_1 = yyb + 7; 

yy_1_1_1[0] = 1; 

yy_1_1_2 = yyb + 8; 

yy_1_1_2[0] = 1; 

yy_1_1_3 = yyb + 9; 

yy_1_1_3[0] = 5; 

yy_1_1 = yyb + 3; 

yy_1_1[0] = 13; 

yy_1_1[1] = (((long )yy_1_1_1)); 

yy_1_1[2] = (((long )yy_1_1_2)); 

yy_1_1[3] = (((long )yy_1_1_3)); 

make_type_and_size_and_mode(yy_1_1, (&yy_1_2), (&yy_1_3)); 

yyv_Tp = yy_1_2; 

yyv_M = yy_1_3; 

yy_0_2 = yyv_Tp; 

yy_0_3_1 = yyv_M; 

yy_0_3_2 = yyv_FloatConst; 

yy_0_3 = yyb + 0; 

yy_0_3[0] = 20; 

yy_0_3[1] = (((long )yy_0_3_1)); 

yy_0_3[2] = (((long )yy_0_3_2)); 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_36_54:  ; } 

{ 



 yy yyb;



 yy yyv_E;



 yy yy_0_1;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_1_1;



 yy yyv_Tp;



 yy yy_2_1;

yy_0_1 = yyin_1; 

yyv_E = yy_0_1; 

yyb = yyh; 

yyh += 1; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = ((( yy )"trafo_expr_rvalue not defined")); 

compiler_error(yy_1_1); 

make_tp((&yy_2_1)); 

yyv_Tp = yy_2_1; 

yy_0_2 = yyv_Tp; 

yy_0_3 = yyb + 0; 

yy_0_3[0] = 6; 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_36_55:  ; } 

yyErr(2, 420); 

}

return (int )retValue_acc;


}
 

trafo_test_expr(yyin_1,yyout_1,yyout_2) 

 yy yyin_1; 

 yy *yyout_1; 

 yy *yyout_2;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yyv_TestExpr;



 yy yy_0_1;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_1_1;



 yy yyv_Tp;



 yy yy_1_2;



 yy yyv_Res;



 yy yy_1_3;



 yy yy_2_1;



 yy yyv_Descr;



 yy yy_2_2;



 yy yy_3_1;



 yy yy_4_1;



 yy yyv_AMode;



 yy yy_4_2;

yy_0_1 = yyin_1; 

yyv_TestExpr = yy_0_1; 

yy_1_1 = yyv_TestExpr; 

trafo_expr_rvalue(yy_1_1, (&yy_1_2), (&yy_1_3)); 

yyv_Tp = yy_1_2; 

yyv_Res = yy_1_3; 

yy_2_1 = yyv_Tp; 

get_tp_descr(yy_2_1, (&yy_2_2)); 

yyv_Descr = yy_2_2; 

yy_3_1 = yyv_Descr; 

scalar_type_or_error(yy_3_1); 

yy_4_1 = yyv_Descr; 

td_map_to_mode(yy_4_1, (&yy_4_2)); 

yyv_AMode = yy_4_2; 

yy_0_2 = yyv_AMode; 

yy_0_3 = yyv_Res; 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


return (int )retValue_acc;
 } 

}

return (int )retValue_acc;


}
 

compute_code_and_get_tp_from_objdescr(yyin_1,yyout_1,yyout_2) 

 yy yyin_1; 

 yy *yyout_1; 

 yy *yyout_2;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_Tp;



 yy yy_0_1_1;



 yy yyv_NStClass;



 yy yy_0_1_2;



 yy yyv_ObjNr;



 yy yy_0_1_3;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_0_3_1;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 2){
goto yyfl_38_1; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

yyv_Tp = yy_0_1_1; 

yyv_NStClass = yy_0_1_2; 

yyv_ObjNr = yy_0_1_3; 

yyb = yyh; 

yyh += 2; 

if (yyh > yyhx){
yyExtend(); }

yy_0_2 = yyv_Tp; 

yy_0_3_1 = yyv_ObjNr; 

yy_0_3 = yyb + 0; 

yy_0_3[0] = 14; 

yy_0_3[1] = (((long )yy_0_3_1)); 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_38_1:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_Tp;



 yy yy_0_1_1;



 yy yyv_C;



 yy yy_0_1_2;



 yy yyv_Linkage;



 yy yy_0_1_3;



 yy yyv_Ident;



 yy yy_0_1_4;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_0_3_1;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 1){
goto yyfl_38_2; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

yy_0_1_4 = ((( yy )yy_0_1[4])); 

yyv_Tp = yy_0_1_1; 

yyv_C = yy_0_1_2; 

yyv_Linkage = yy_0_1_3; 

yyv_Ident = yy_0_1_4; 

yyb = yyh; 

yyh += 2; 

if (yyh > yyhx){
yyExtend(); }

yy_0_2 = yyv_Tp; 

yy_0_3_1 = yyv_Ident; 

yy_0_3 = yyb + 0; 

yy_0_3[0] = 15; 

yy_0_3[1] = (((long )yy_0_3_1)); 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_38_2:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_Tp;



 yy yy_0_1_1;



 yy yyv_C;



 yy yy_0_1_2;



 yy yyv_ObjNr;



 yy yy_0_1_3;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_0_3_1;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 3){
goto yyfl_38_3; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

yyv_Tp = yy_0_1_1; 

yyv_C = yy_0_1_2; 

yyv_ObjNr = yy_0_1_3; 

yyb = yyh; 

yyh += 2; 

if (yyh > yyhx){
yyExtend(); }

yy_0_2 = yyv_Tp; 

yy_0_3_1 = yyv_ObjNr; 

yy_0_3 = yyb + 0; 

yy_0_3[0] = 16; 

yy_0_3[1] = (((long )yy_0_3_1)); 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_38_3:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_Tp;



 yy yy_0_1_1;



 yy yyv_Linkage;



 yy yy_0_1_2;



 yy yyv_Ident;



 yy yy_0_1_3;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_0_3_1;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 4){
goto yyfl_38_4; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

yyv_Tp = yy_0_1_1; 

yyv_Linkage = yy_0_1_2; 

yyv_Ident = yy_0_1_3; 

yyb = yyh; 

yyh += 2; 

if (yyh > yyhx){
yyExtend(); }

yy_0_2 = yyv_Tp; 

yy_0_3_1 = yyv_Ident; 

yy_0_3 = yyb + 0; 

yy_0_3[0] = 17; 

yy_0_3[1] = (((long )yy_0_3_1)); 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_38_4:  ; } 

yyErr(2, 883); 

}

return (int )retValue_acc;


}
 

trafo_init_or_inc_expr(yyin_1,yyout_1) 

 yy yyin_1; 

 yy *yyout_1;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_2;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 13){
goto yyfl_39_1; }

yyb = yyh; 

yyh += 1; 

if (yyh > yyhx){
yyExtend(); }

yy_0_2 = yyb + 0; 

yy_0_2[0] = 6; 

(*yyout_1) = yy_0_2; 


return (int )retValue_acc;
 

yyfl_39_1:  ; } 

{ 



 yy yyb;



 yy yyv_E;



 yy yy_0_1;



 yy yy_0_2;



 yy yy_1_1;



 yy yyv_Tp;



 yy yy_1_2;



 yy yyv_Res;



 yy yy_1_3;

yy_0_1 = yyin_1; 

yyv_E = yy_0_1; 

yy_1_1 = yyv_E; 

trafo_expr_rvalue(yy_1_1, (&yy_1_2), (&yy_1_3)); 

yyv_Tp = yy_1_2; 

yyv_Res = yy_1_3; 

yy_0_2 = yyv_Res; 

(*yyout_1) = yy_0_2; 


return (int )retValue_acc;
 

yyfl_39_2:  ; } 

yyErr(2, 896); 

}

return (int )retValue_acc;


}
 

trafo_new_arg_list(yyin_1,yyin_2,yyin_3,yyout_1,yyout_2) 

 yy yyin_1; 

 yy yyin_2; 

 yy yyin_3; 

 yy *yyout_1; 

 yy *yyout_2;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_P;



 yy yy_0_2;



 yy yyv_Size;



 yy yy_0_3;



 yy yy_0_4;



 yy yy_0_5;



 yy yy_1_1;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

if (yy_0_1[0] != 1){
goto yyfl_40_1; }

yyv_P = yy_0_2; 

yyv_Size = yy_0_3; 

yyb = yyh; 

yyh += 1; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_P; 

test_empty_param_types(yy_1_1); 

yy_0_4 = yyv_Size; 

yy_0_5 = yyb + 0; 

yy_0_5[0] = 10; 

(*yyout_1) = yy_0_4; 

(*yyout_2) = yy_0_5; 


return (int )retValue_acc;
 

yyfl_40_1:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_E;



 yy yy_0_1_1;



 yy yyv_L;



 yy yy_0_1_2;



 yy yy_0_2;



 yy yy_0_2_1;



 yy yy_0_2_2;



 yy yyv_Size;



 yy yy_0_3;



 yy yy_0_4;



 yy yy_0_5;



 yy yy_1_1;



 yy yy_1_1_1;



 yy yy_1_1_2;



 yy yy_1_2;



 yy yyv_NewSize;



 yy yy_1_3;



 yy yyv_Params;



 yy yy_1_4;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

if (yy_0_1[0] != 2){
goto yyfl_40_2; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yyv_E = yy_0_1_1; 

yyv_L = yy_0_1_2; 

if (yy_0_2[0] != 2){
goto yyfl_40_2; }

yy_0_2_1 = ((( yy )yy_0_2[1])); 

yy_0_2_2 = ((( yy )yy_0_2[2])); 

if (yy_0_2_1[0] != 1){
goto yyfl_40_2; }

if (yy_0_2_2[0] != 1){
goto yyfl_40_2; }

yyv_Size = yy_0_3; 

yyb = yyh; 

yyh += 3; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1_1 = yyv_E; 

yy_1_1_2 = yyv_L; 

yy_1_1 = yyb + 0; 

yy_1_1[0] = 2; 

yy_1_1[1] = (((long )yy_1_1_1)); 

yy_1_1[2] = (((long )yy_1_1_2)); 

yy_1_2 = yyv_Size; 

trafo_old_arg_list(yy_1_1, yy_1_2, (&yy_1_3), (&yy_1_4)); 

yyv_NewSize = yy_1_3; 

yyv_Params = yy_1_4; 

yy_0_4 = yyv_NewSize; 

yy_0_5 = yyv_Params; 

(*yyout_1) = yy_0_4; 

(*yyout_2) = yy_0_5; 


return (int )retValue_acc;
 

yyfl_40_2:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_E;



 yy yy_0_1_1;



 yy yyv_L;



 yy yy_0_1_2;



 yy yy_0_2;



 yy yyv_P;



 yy yy_0_2_1;



 yy yyv_PL;



 yy yy_0_2_2;



 yy yyv_Size;



 yy yy_0_3;



 yy yy_0_4;



 yy yy_0_5;



 yy yy_0_5_1;



 yy yy_0_5_2;



 yy yy_1_1;



 yy yyv_Tp2;



 yy yy_1_2;



 yy yyv_Rval;



 yy yy_1_3;



 yy yy_2_1;



 yy yyv_Tp1;



 yy yy_2_2;



 yy yy_3_1;



 yy yy_3_2;



 yy yy_3_3;



 yy yyv_RvalC;



 yy yy_3_4;



 yy yy_4_1;



 yy yyv_Descr;



 yy yy_4_2;



 yy yy_5_1;



 yy yyv_PSize;



 yy yy_5_2;



 yy yy_6_1;



 yy yy_6_2;



 yy yyv_Size2;



 yy yy_6_3;



 yy yy_7_1;



 yy yy_7_2;



 yy yy_7_3;



 yy yyv_NewSize;



 yy yy_7_4;



 yy yyv_L1;



 yy yy_7_5;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

if (yy_0_1[0] != 2){
goto yyfl_40_3; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yyv_E = yy_0_1_1; 

yyv_L = yy_0_1_2; 

if (yy_0_2[0] != 2){
goto yyfl_40_3; }

yy_0_2_1 = ((( yy )yy_0_2[1])); 

yy_0_2_2 = ((( yy )yy_0_2[2])); 

yyv_P = yy_0_2_1; 

yyv_PL = yy_0_2_2; 

yyv_Size = yy_0_3; 

yyb = yyh; 

yyh += 3; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_E; 

trafo_expr_rvalue(yy_1_1, (&yy_1_2), (&yy_1_3)); 

yyv_Tp2 = yy_1_2; 

yyv_Rval = yy_1_3; 

yy_2_1 = yyv_P; 

get_formal_param_type(yy_2_1, (&yy_2_2)); 

yyv_Tp1 = yy_2_2; 

yy_3_1 = yyv_Tp1; 

yy_3_2 = yyv_Tp2; 

yy_3_3 = yyv_Rval; 

simple_assign_params(yy_3_1, yy_3_2, yy_3_3, (&yy_3_4)); 

yyv_RvalC = yy_3_4; 

yy_4_1 = yyv_Tp1; 

get_tp_descr(yy_4_1, (&yy_4_2)); 

yyv_Descr = yy_4_2; 

yy_5_1 = yyv_Descr; 

td_map_to_param_size(yy_5_1, (&yy_5_2)); 

yyv_PSize = yy_5_2; 

yy_6_1 = yyv_PSize; 

yy_6_2 = yyv_Size; 

compute_param_list_size(yy_6_1, yy_6_2, (&yy_6_3)); 

yyv_Size2 = yy_6_3; 

yy_7_1 = yyv_L; 

yy_7_2 = yyv_PL; 

yy_7_3 = yyv_Size2; 

trafo_new_arg_list(yy_7_1, yy_7_2, yy_7_3, (&yy_7_4), (&yy_7_5)); 

yyv_NewSize = yy_7_4; 

yyv_L1 = yy_7_5; 

yy_0_4 = yyv_NewSize; 

yy_0_5_1 = yyv_RvalC; 

yy_0_5_2 = yyv_L1; 

yy_0_5 = yyb + 0; 

yy_0_5[0] = 11; 

yy_0_5[1] = (((long )yy_0_5_1)); 

yy_0_5[2] = (((long )yy_0_5_2)); 

(*yyout_1) = yy_0_4; 

(*yyout_2) = yy_0_5; 


return (int )retValue_acc;
 

yyfl_40_3:  ; } 

{ 



 yy yyb;



 yy yyv_L;



 yy yy_0_1;



 yy yyv_PL;



 yy yy_0_2;



 yy yyv_S;



 yy yy_0_3;



 yy yy_0_4;



 yy yy_0_5;



 yy yy_1_1;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yyv_L = yy_0_1; 

yyv_PL = yy_0_2; 

yyv_S = yy_0_3; 

yyb = yyh; 

yyh += 1; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = ((( yy )"number of parameters in function call and function prototype is not equal")); 

semantic_error(yy_1_1); 

yy_0_4 = yyv_S; 

yy_0_5 = yyb + 0; 

yy_0_5[0] = 6; 

(*yyout_1) = yy_0_4; 

(*yyout_2) = yy_0_5; 


return (int )retValue_acc;
 

yyfl_40_4:  ; } 

yyErr(2, 907); 

}

return (int )retValue_acc;


}
 

trafo_old_arg_list(yyin_1,yyin_2,yyout_1,yyout_2) 

 yy yyin_1; 

 yy yyin_2; 

 yy *yyout_1; 

 yy *yyout_2;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_Size;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_0_4;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

if (yy_0_1[0] != 1){
goto yyfl_41_1; }

yyv_Size = yy_0_2; 

yyb = yyh; 

yyh += 1; 

if (yyh > yyhx){
yyExtend(); }

yy_0_3 = yyv_Size; 

yy_0_4 = yyb + 0; 

yy_0_4[0] = 10; 

(*yyout_1) = yy_0_3; 

(*yyout_2) = yy_0_4; 


return (int )retValue_acc;
 

yyfl_41_1:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_E;



 yy yy_0_1_1;



 yy yyv_L;



 yy yy_0_1_2;



 yy yyv_Size1;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_0_4;



 yy yy_0_4_1;



 yy yy_0_4_2;



 yy yy_1_1;



 yy yyv_Tp;



 yy yy_1_2;



 yy yyv_Res;



 yy yy_1_3;



 yy yy_2_1;



 yy yyv_Descr;



 yy yy_2_2;



 yy yy_3_1;



 yy yy_3_2;



 yy yyv_ResC;



 yy yy_3_3;



 yy yy_4_1;



 yy yyv_PSize;



 yy yy_4_2;



 yy yy_5_1;



 yy yy_5_2;



 yy yyv_Size2;



 yy yy_5_3;



 yy yy_6_1;



 yy yy_6_2;



 yy yyv_NewSize;



 yy yy_6_3;



 yy yyv_L1;



 yy yy_6_4;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

if (yy_0_1[0] != 2){
goto yyfl_41_2; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yyv_E = yy_0_1_1; 

yyv_L = yy_0_1_2; 

yyv_Size1 = yy_0_2; 

yyb = yyh; 

yyh += 3; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_E; 

trafo_expr_rvalue(yy_1_1, (&yy_1_2), (&yy_1_3)); 

yyv_Tp = yy_1_2; 

yyv_Res = yy_1_3; 

yy_2_1 = yyv_Tp; 

get_tp_descr(yy_2_1, (&yy_2_2)); 

yyv_Descr = yy_2_2; 

yy_3_1 = yyv_Descr; 

yy_3_2 = yyv_Res; 

perform_default_argument_promotions(yy_3_1, yy_3_2, (&yy_3_3)); 

yyv_ResC = yy_3_3; 

yy_4_1 = yyv_Descr; 

td_map_to_param_size(yy_4_1, (&yy_4_2)); 

yyv_PSize = yy_4_2; 

yy_5_1 = yyv_PSize; 

yy_5_2 = yyv_Size1; 

compute_param_list_size(yy_5_1, yy_5_2, (&yy_5_3)); 

yyv_Size2 = yy_5_3; 

yy_6_1 = yyv_L; 

yy_6_2 = yyv_Size2; 

trafo_old_arg_list(yy_6_1, yy_6_2, (&yy_6_3), (&yy_6_4)); 

yyv_NewSize = yy_6_3; 

yyv_L1 = yy_6_4; 

yy_0_3 = yyv_NewSize; 

yy_0_4_1 = yyv_ResC; 

yy_0_4_2 = yyv_L1; 

yy_0_4 = yyb + 0; 

yy_0_4[0] = 11; 

yy_0_4[1] = (((long )yy_0_4_1)); 

yy_0_4[2] = (((long )yy_0_4_2)); 

(*yyout_1) = yy_0_3; 

(*yyout_2) = yy_0_4; 


return (int )retValue_acc;
 

yyfl_41_2:  ; } 

yyErr(2, 936); 

}

return (int )retValue_acc;


}
 

trafo_arg_list(yyin_1,yyin_2,yyout_1,yyout_2) 

 yy yyin_1; 

 yy yyin_2; 

 yy *yyout_1; 

 yy *yyout_2;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yyv_L;



 yy yy_0_1;



 yy yy_0_2;



 yy yyv_N;



 yy yy_0_2_1;



 yy yyv_Tp;



 yy yy_0_2_2;



 yy yy_0_3;



 yy yy_0_4;



 yy yy_1_1;



 yy yy_1_2;



 yy yyv_RL;



 yy yy_1_3;



 yy yy_2_1;



 yy yy_2_2;



 yy yyv_NewSize;



 yy yy_2_3;



 yy yyv_ParamList;



 yy yy_2_4;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yyv_L = yy_0_1; 

if (yy_0_2[0] != 4){
goto yyfl_42_1; }

yy_0_2_1 = ((( yy )yy_0_2[1])); 

yy_0_2_2 = ((( yy )yy_0_2[2])); 

yyv_N = yy_0_2_1; 

yyv_Tp = yy_0_2_2; 

yyb = yyh; 

yyh += 1; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_L; 

yy_1_2 = yyb + 0; 

yy_1_2[0] = 1; 

convert_to_right_recursion(yy_1_1, yy_1_2, (&yy_1_3)); 

yyv_RL = yy_1_3; 

yy_2_1 = yyv_RL; 

yy_2_2 = ((( yy )0)); 

trafo_old_arg_list(yy_2_1, yy_2_2, (&yy_2_3), (&yy_2_4)); 

yyv_NewSize = yy_2_3; 

yyv_ParamList = yy_2_4; 

yy_0_3 = yyv_NewSize; 

yy_0_4 = yyv_ParamList; 

(*yyout_1) = yy_0_3; 

(*yyout_2) = yy_0_4; 


return (int )retValue_acc;
 

yyfl_42_1:  ; } 

{ 



 yy yyb;



 yy yyv_L;



 yy yy_0_1;



 yy yy_0_2;



 yy yyv_P;



 yy yy_0_2_1;



 yy yyv_Tp;



 yy yy_0_2_2;



 yy yy_0_3;



 yy yy_0_4;



 yy yy_1_1;



 yy yy_1_2;



 yy yyv_RL;



 yy yy_1_3;



 yy yy_2_1;



 yy yy_2_2;



 yy yy_2_3;



 yy yyv_NewSize;



 yy yy_2_4;



 yy yyv_ParamList;



 yy yy_2_5;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yyv_L = yy_0_1; 

if (yy_0_2[0] != 3){
goto yyfl_42_2; }

yy_0_2_1 = ((( yy )yy_0_2[1])); 

yy_0_2_2 = ((( yy )yy_0_2[2])); 

yyv_P = yy_0_2_1; 

yyv_Tp = yy_0_2_2; 

yyb = yyh; 

yyh += 1; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_L; 

yy_1_2 = yyb + 0; 

yy_1_2[0] = 1; 

convert_to_right_recursion(yy_1_1, yy_1_2, (&yy_1_3)); 

yyv_RL = yy_1_3; 

yy_2_1 = yyv_RL; 

yy_2_2 = yyv_P; 

yy_2_3 = ((( yy )0)); 

trafo_new_arg_list(yy_2_1, yy_2_2, yy_2_3, (&yy_2_4), (&yy_2_5)); 

yyv_NewSize = yy_2_4; 

yyv_ParamList = yy_2_5; 

yy_0_3 = yyv_NewSize; 

yy_0_4 = yyv_ParamList; 

(*yyout_1) = yy_0_3; 

(*yyout_2) = yy_0_4; 


return (int )retValue_acc;
 

yyfl_42_2:  ; } 

yyErr(2, 953); 

}

return (int )retValue_acc;


}
 

get_return_type(yyin_1,yyout_1) 

 yy yyin_1; 

 yy *yyout_1;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_P;



 yy yy_0_1_1;



 yy yyv_Tp;



 yy yy_0_1_2;



 yy yy_0_2;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 3){
goto yyfl_43_1; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yyv_P = yy_0_1_1; 

yyv_Tp = yy_0_1_2; 

yy_0_2 = yyv_Tp; 

(*yyout_1) = yy_0_2; 


return (int )retValue_acc;
 

yyfl_43_1:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_D;



 yy yy_0_1_1;



 yy yyv_Tp;



 yy yy_0_1_2;



 yy yy_0_2;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 4){
goto yyfl_43_2; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yyv_D = yy_0_1_1; 

yyv_Tp = yy_0_1_2; 

yy_0_2 = yyv_Tp; 

(*yyout_1) = yy_0_2; 


return (int )retValue_acc;
 

yyfl_43_2:  ; } 

yyErr(2, 968); 

}

return (int )retValue_acc;


}
 

pushContinueStack(yyin_1) 

 yy yyin_1;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yyv_Label;



 yy yy_0_1;



 yy yyv_ContinueStack;



 yy yy_1_1;



 yy yy_2_1;



 yy yy_2_1_1;



 yy yy_2_1_2;

yy_0_1 = yyin_1; 

yyv_Label = yy_0_1; 

yyb = yyh; 

yyh += 3; 

if (yyh > yyhx){
yyExtend(); }

GETVarContinueStack((&yy_1_1)); 

yyv_ContinueStack = yy_1_1; 

yy_2_1_1 = yyv_Label; 

yy_2_1_2 = yyv_ContinueStack; 

yy_2_1 = yyb + 0; 

yy_2_1[0] = 1; 

yy_2_1[1] = (((long )yy_2_1_1)); 

yy_2_1[2] = (((long )yy_2_1_2)); 

PUTVarContinueStack(yy_2_1); 


return (int )retValue_acc;
 } 

}

return (int )retValue_acc;


}
 

popContinueStack()  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yy_1_1;



 yy yyv_Label;



 yy yy_1_1_1;



 yy yyv_ContinueStack;



 yy yy_1_1_2;



 yy yy_2_1;

GETVarContinueStack((&yy_1_1)); 

if (yy_1_1[0] != 1){
goto yyfl_45_1; }

yy_1_1_1 = ((( yy )yy_1_1[1])); 

yy_1_1_2 = ((( yy )yy_1_1[2])); 

yyv_Label = yy_1_1_1; 

yyv_ContinueStack = yy_1_1_2; 

yy_2_1 = yyv_ContinueStack; 

PUTVarContinueStack(yy_2_1); 


return (int )retValue_acc;
 

yyfl_45_1:  ; } 

yyErr(2, 986); 

}

return (int )retValue_acc;


}
 

pushEndLabelStack(yyin_1) 

 yy yyin_1;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yyv_Label;



 yy yy_0_1;



 yy yyv_EndLabelStack;



 yy yy_1_1;



 yy yy_2_1;



 yy yy_2_1_1;



 yy yy_2_1_2;

yy_0_1 = yyin_1; 

yyv_Label = yy_0_1; 

yyb = yyh; 

yyh += 3; 

if (yyh > yyhx){
yyExtend(); }

GETVarEndLabelStack((&yy_1_1)); 

yyv_EndLabelStack = yy_1_1; 

yy_2_1_1 = yyv_Label; 

yy_2_1_2 = yyv_EndLabelStack; 

yy_2_1 = yyb + 0; 

yy_2_1[0] = 1; 

yy_2_1[1] = (((long )yy_2_1_1)); 

yy_2_1[2] = (((long )yy_2_1_2)); 

PUTVarEndLabelStack(yy_2_1); 


return (int )retValue_acc;
 } 

}

return (int )retValue_acc;


}
 

popEndLabelStack()  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yy_1_1;



 yy yyv_EndLabel;



 yy yy_1_1_1;



 yy yyv_EndLabelStack;



 yy yy_1_1_2;



 yy yy_2_1;

GETVarEndLabelStack((&yy_1_1)); 

if (yy_1_1[0] != 1){
goto yyfl_47_1; }

yy_1_1_1 = ((( yy )yy_1_1[1])); 

yy_1_1_2 = ((( yy )yy_1_1[2])); 

yyv_EndLabel = yy_1_1_1; 

yyv_EndLabelStack = yy_1_1_2; 

yy_2_1 = yyv_EndLabelStack; 

PUTVarEndLabelStack(yy_2_1); 


return (int )retValue_acc;
 

yyfl_47_1:  ; } 

yyErr(2, 1005); 

}

return (int )retValue_acc;


}
 

param_coerce(yyin_1,yyin_2,yyin_3,yyout_1,yyout_2) 

 yy yyin_1; 

 yy yyin_2; 

 yy yyin_3; 

 yy *yyout_1; 

 yy *yyout_2;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_Tp1;



 yy yy_0_2;



 yy yyv_Res1;



 yy yy_0_3;



 yy yy_0_4;



 yy yy_0_5;



 yy yy_1_1;



 yy yyv_D;



 yy yy_1_2;



 yy yy_2_1;



 yy yy_3_1;



 yy yy_3_2;



 yy yyv_D1;



 yy yy_3_3;



 yy yyv_RC;



 yy yy_3_4;



 yy yy_4_1;



 yy yyv_Tp;



 yy yy_4_2;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

if (yy_0_1[0] != 42){
goto yyfl_48_1; }

yyv_Tp1 = yy_0_2; 

yyv_Res1 = yy_0_3; 

yy_1_1 = yyv_Tp1; 

get_tp_descr(yy_1_1, (&yy_1_2)); 

yyv_D = yy_1_2; 

yy_2_1 = yyv_D; 

if ((!test_scalar_type(yy_2_1))){
goto yyfl_48_1; }

yy_3_1 = yyv_D; 

yy_3_2 = yyv_Res1; 

perform_integral_promotions(yy_3_1, yy_3_2, (&yy_3_3), (&yy_3_4)); 

yyv_D1 = yy_3_3; 

yyv_RC = yy_3_4; 

yy_4_1 = yyv_D1; 

make_type_and_size(yy_4_1, (&yy_4_2)); 

yyv_Tp = yy_4_2; 

yy_0_4 = yyv_Tp; 

yy_0_5 = yyv_RC; 

(*yyout_1) = yy_0_4; 

(*yyout_2) = yy_0_5; 


return (int )retValue_acc;
 

yyfl_48_1:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_Tp1;



 yy yy_0_2;



 yy yyv_Res1;



 yy yy_0_3;



 yy yy_0_4;



 yy yy_0_5;



 yy yy_1_1;



 yy yyv_D;



 yy yy_1_2;



 yy yy_2_1;



 yy yy_3_1;



 yy yy_3_2;



 yy yyv_D1;



 yy yy_3_3;



 yy yyv_RC;



 yy yy_3_4;



 yy yy_4_1;



 yy yyv_Tp;



 yy yy_4_2;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

if (yy_0_1[0] != 43){
goto yyfl_48_2; }

yyv_Tp1 = yy_0_2; 

yyv_Res1 = yy_0_3; 

yy_1_1 = yyv_Tp1; 

get_tp_descr(yy_1_1, (&yy_1_2)); 

yyv_D = yy_1_2; 

yy_2_1 = yyv_D; 

if ((!test_arithmetic_type(yy_2_1))){
goto yyfl_48_2; }

yy_3_1 = yyv_D; 

yy_3_2 = yyv_Res1; 

perform_integral_promotions(yy_3_1, yy_3_2, (&yy_3_3), (&yy_3_4)); 

yyv_D1 = yy_3_3; 

yyv_RC = yy_3_4; 

yy_4_1 = yyv_D1; 

make_type_and_size(yy_4_1, (&yy_4_2)); 

yyv_Tp = yy_4_2; 

yy_0_4 = yyv_Tp; 

yy_0_5 = yyv_RC; 

(*yyout_1) = yy_0_4; 

(*yyout_2) = yy_0_5; 


return (int )retValue_acc;
 

yyfl_48_2:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_Tp1;



 yy yy_0_2;



 yy yyv_Res1;



 yy yy_0_3;



 yy yy_0_4;



 yy yy_0_5;



 yy yy_1_1;



 yy yyv_Descr1;



 yy yy_1_2;



 yy yy_2_1;



 yy yyv_Tp;



 yy yy_3_1;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

if (yy_0_1[0] != 44){
goto yyfl_48_3; }

yyv_Tp1 = yy_0_2; 

yyv_Res1 = yy_0_3; 

yy_1_1 = yyv_Tp1; 

get_tp_descr(yy_1_1, (&yy_1_2)); 

yyv_Descr1 = yy_1_2; 

yy_2_1 = yyv_Descr1; 

if ((!test_scalar_type(yy_2_1))){
goto yyfl_48_3; }

make_tp_signed_int((&yy_3_1)); 

yyv_Tp = yy_3_1; 

yy_0_4 = yyv_Tp; 

yy_0_5 = yyv_Res1; 

(*yyout_1) = yy_0_4; 

(*yyout_2) = yy_0_5; 


return (int )retValue_acc;
 

yyfl_48_3:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_Tp1;



 yy yy_0_2;



 yy yyv_Res1;



 yy yy_0_3;



 yy yy_0_4;



 yy yy_0_5;



 yy yy_1_1;



 yy yyv_D;



 yy yy_1_2;



 yy yy_2_1;



 yy yy_3_1;



 yy yy_3_2;



 yy yyv_D1;



 yy yy_3_3;



 yy yyv_RC;



 yy yy_3_4;



 yy yy_4_1;



 yy yyv_Tp;



 yy yy_4_2;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

if (yy_0_1[0] != 46){
goto yyfl_48_4; }

yyv_Tp1 = yy_0_2; 

yyv_Res1 = yy_0_3; 

yy_1_1 = yyv_Tp1; 

get_tp_descr(yy_1_1, (&yy_1_2)); 

yyv_D = yy_1_2; 

yy_2_1 = yyv_D; 

if ((!is_integral(yy_2_1))){
goto yyfl_48_4; }

yy_3_1 = yyv_D; 

yy_3_2 = yyv_Res1; 

perform_integral_promotions(yy_3_1, yy_3_2, (&yy_3_3), (&yy_3_4)); 

yyv_D1 = yy_3_3; 

yyv_RC = yy_3_4; 

yy_4_1 = yyv_D1; 

make_type_and_size(yy_4_1, (&yy_4_2)); 

yyv_Tp = yy_4_2; 

yy_0_4 = yyv_Tp; 

yy_0_5 = yyv_RC; 

(*yyout_1) = yy_0_4; 

(*yyout_2) = yy_0_5; 


return (int )retValue_acc;
 

yyfl_48_4:  ; } 

{ 



 yy yyb;



 yy yyv_Op;



 yy yy_0_1;



 yy yyv_Tp1;



 yy yy_0_2;



 yy yyv_Res1;



 yy yy_0_3;



 yy yy_0_4;



 yy yy_0_5;



 yy yy_1_1;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yyv_Op = yy_0_1; 

yyv_Tp1 = yy_0_2; 

yyv_Res1 = yy_0_3; 

yy_1_1 = ((( yy )"invalid argument of unary operator")); 

semantic_error(yy_1_1); 

yy_0_4 = yyv_Tp1; 

yy_0_5 = yyv_Res1; 

(*yyout_1) = yy_0_4; 

(*yyout_2) = yy_0_5; 


return (int )retValue_acc;
 

yyfl_48_5:  ; } 

yyErr(2, 1012); 

}

return (int )retValue_acc;


}
 

dec_params(yyin_1,yyin_2,yyin_3,yyin_4,yyout_1,yyout_2) 

 yy yyin_1; 

 yy yyin_2; 

 yy yyin_3; 

 yy yyin_4; 

 yy *yyout_1; 

 yy *yyout_2;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yyv_Tp1;



 yy yy_0_1;



 yy yyv_Tp2;



 yy yy_0_2;



 yy yyv_IR1;



 yy yy_0_3;



 yy yyv_IR2;



 yy yy_0_4;



 yy yy_0_5;



 yy yy_0_6;



 yy yy_1_1;



 yy yyv_D1;



 yy yy_1_2;



 yy yy_2_1;



 yy yy_3_1;



 yy yy_3_2;



 yy yy_3_3;



 yy yy_3_4;



 yy yyv_RvalPlus;



 yy yy_3_5;



 yy yyv_Tp3;



 yy yy_3_6;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yy_0_4 = yyin_4; 

yyv_Tp1 = yy_0_1; 

yyv_Tp2 = yy_0_2; 

yyv_IR1 = yy_0_3; 

yyv_IR2 = yy_0_4; 

yy_1_1 = yyv_Tp1; 

get_tp_descr(yy_1_1, (&yy_1_2)); 

yyv_D1 = yy_1_2; 

yy_2_1 = yyv_D1; 

if ((!test_scalar_type(yy_2_1))){
goto yyfl_49_1; }

yy_3_1 = yyv_Tp1; 

yy_3_2 = yyv_Tp2; 

yy_3_3 = yyv_IR1; 

yy_3_4 = yyv_IR2; 

minus_params(yy_3_1, yy_3_2, yy_3_3, yy_3_4, (&yy_3_5), (&yy_3_6)); 

yyv_RvalPlus = yy_3_5; 

yyv_Tp3 = yy_3_6; 

yy_0_5 = yyv_RvalPlus; 

yy_0_6 = yyv_Tp3; 

(*yyout_1) = yy_0_5; 

(*yyout_2) = yy_0_6; 


return (int )retValue_acc;
 

yyfl_49_1:  ; } 

{ 



 yy yyb;



 yy yyv_Tp1;



 yy yy_0_1;



 yy yyv_Tp2;



 yy yy_0_2;



 yy yyv_IR1;



 yy yy_0_3;



 yy yyv_IR2;



 yy yy_0_4;



 yy yy_0_5;



 yy yy_0_6;



 yy yy_1_1;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yy_0_4 = yyin_4; 

yyv_Tp1 = yy_0_1; 

yyv_Tp2 = yy_0_2; 

yyv_IR1 = yy_0_3; 

yyv_IR2 = yy_0_4; 

yy_1_1 = ((( yy )"scalar type expected")); 

semantic_error(yy_1_1); 

yy_0_5 = yyv_IR1; 

yy_0_6 = yyv_Tp1; 

(*yyout_1) = yy_0_5; 

(*yyout_2) = yy_0_6; 


return (int )retValue_acc;
 

yyfl_49_2:  ; } 

yyErr(2, 1048); 

}

return (int )retValue_acc;


}
 

inc_params(yyin_1,yyin_2,yyin_3,yyin_4,yyout_1,yyout_2) 

 yy yyin_1; 

 yy yyin_2; 

 yy yyin_3; 

 yy yyin_4; 

 yy *yyout_1; 

 yy *yyout_2;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yyv_Tp1;



 yy yy_0_1;



 yy yyv_Tp2;



 yy yy_0_2;



 yy yyv_IR1;



 yy yy_0_3;



 yy yyv_IR2;



 yy yy_0_4;



 yy yy_0_5;



 yy yy_0_6;



 yy yy_1_1;



 yy yyv_D1;



 yy yy_1_2;



 yy yy_2_1;



 yy yy_3_1;



 yy yy_3_2;



 yy yy_3_3;



 yy yy_3_4;



 yy yyv_RvalPlus;



 yy yy_3_5;



 yy yyv_Tp3;



 yy yy_3_6;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yy_0_4 = yyin_4; 

yyv_Tp1 = yy_0_1; 

yyv_Tp2 = yy_0_2; 

yyv_IR1 = yy_0_3; 

yyv_IR2 = yy_0_4; 

yy_1_1 = yyv_Tp1; 

get_tp_descr(yy_1_1, (&yy_1_2)); 

yyv_D1 = yy_1_2; 

yy_2_1 = yyv_D1; 

if ((!test_scalar_type(yy_2_1))){
goto yyfl_50_1; }

yy_3_1 = yyv_Tp1; 

yy_3_2 = yyv_Tp2; 

yy_3_3 = yyv_IR1; 

yy_3_4 = yyv_IR2; 

plus_params(yy_3_1, yy_3_2, yy_3_3, yy_3_4, (&yy_3_5), (&yy_3_6)); 

yyv_RvalPlus = yy_3_5; 

yyv_Tp3 = yy_3_6; 

yy_0_5 = yyv_RvalPlus; 

yy_0_6 = yyv_Tp3; 

(*yyout_1) = yy_0_5; 

(*yyout_2) = yy_0_6; 


return (int )retValue_acc;
 

yyfl_50_1:  ; } 

{ 



 yy yyb;



 yy yyv_Tp1;



 yy yy_0_1;



 yy yyv_Tp2;



 yy yy_0_2;



 yy yyv_IR1;



 yy yy_0_3;



 yy yyv_IR2;



 yy yy_0_4;



 yy yy_0_5;



 yy yy_0_6;



 yy yy_1_1;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yy_0_4 = yyin_4; 

yyv_Tp1 = yy_0_1; 

yyv_Tp2 = yy_0_2; 

yyv_IR1 = yy_0_3; 

yyv_IR2 = yy_0_4; 

yy_1_1 = ((( yy )"scalar type expected")); 

semantic_error(yy_1_1); 

yy_0_5 = yyv_IR1; 

yy_0_6 = yyv_Tp1; 

(*yyout_1) = yy_0_5; 

(*yyout_2) = yy_0_6; 


return (int )retValue_acc;
 

yyfl_50_2:  ; } 

yyErr(2, 1062); 

}

return (int )retValue_acc;


}
 

minus_params(yyin_1,yyin_2,yyin_3,yyin_4,yyout_1,yyout_2) 

 yy yyin_1; 

 yy yyin_2; 

 yy yyin_3; 

 yy yyin_4; 

 yy *yyout_1; 

 yy *yyout_2;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yyv_Tp1;



 yy yy_0_1;



 yy yyv_Tp2;



 yy yy_0_2;



 yy yyv_Rval1;



 yy yy_0_3;



 yy yyv_Rval2;



 yy yy_0_4;



 yy yy_0_5;



 yy yy_0_5_1;



 yy yy_0_5_2;



 yy yy_0_5_3;



 yy yy_0_6;



 yy yy_1_1;



 yy yyv_Descr1;



 yy yy_1_2;



 yy yy_2_1;



 yy yyv_Descr2;



 yy yy_2_2;



 yy yy_3_1;



 yy yy_4_1;



 yy yy_5_1;



 yy yy_5_2;



 yy yy_5_3;



 yy yy_5_4;



 yy yyv_RvalC1;



 yy yy_5_5;



 yy yyv_RvalC2;



 yy yy_5_6;



 yy yyv_Tp;



 yy yy_5_7;



 yy yyv_AMode;



 yy yy_5_8;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yy_0_4 = yyin_4; 

yyv_Tp1 = yy_0_1; 

yyv_Tp2 = yy_0_2; 

yyv_Rval1 = yy_0_3; 

yyv_Rval2 = yy_0_4; 

yyb = yyh; 

yyh += 4; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_Tp1; 

get_tp_descr(yy_1_1, (&yy_1_2)); 

yyv_Descr1 = yy_1_2; 

yy_2_1 = yyv_Tp2; 

get_tp_descr(yy_2_1, (&yy_2_2)); 

yyv_Descr2 = yy_2_2; 

yy_3_1 = yyv_Descr1; 

if ((!test_arithmetic_type(yy_3_1))){
goto yyfl_51_1; }

yy_4_1 = yyv_Descr2; 

if ((!test_arithmetic_type(yy_4_1))){
goto yyfl_51_1; }

yy_5_1 = yyv_Descr1; 

yy_5_2 = yyv_Descr2; 

yy_5_3 = yyv_Rval1; 

yy_5_4 = yyv_Rval2; 

perform_arithmetic_conversions(yy_5_1, yy_5_2, yy_5_3, yy_5_4, (&yy_5_5), (&yy_5_6), (&yy_5_7), (&yy_5_8)); 

yyv_RvalC1 = yy_5_5; 

yyv_RvalC2 = yy_5_6; 

yyv_Tp = yy_5_7; 

yyv_AMode = yy_5_8; 

yy_0_5_1 = yyv_AMode; 

yy_0_5_2 = yyv_RvalC1; 

yy_0_5_3 = yyv_RvalC2; 

yy_0_5 = yyb + 0; 

yy_0_5[0] = 41; 

yy_0_5[1] = (((long )yy_0_5_1)); 

yy_0_5[2] = (((long )yy_0_5_2)); 

yy_0_5[3] = (((long )yy_0_5_3)); 

yy_0_6 = yyv_Tp; 

(*yyout_1) = yy_0_5; 

(*yyout_2) = yy_0_6; 


return (int )retValue_acc;
 

yyfl_51_1:  ; } 

{ 



 yy yyb;



 yy yyv_Tp1;



 yy yy_0_1;



 yy yyv_Tp2;



 yy yy_0_2;



 yy yyv_Rval1;



 yy yy_0_3;



 yy yyv_Rval2;



 yy yy_0_4;



 yy yy_0_5;



 yy yy_0_6;



 yy yy_1_1;



 yy yyv_Descr1;



 yy yy_1_2;



 yy yy_2_1;



 yy yyv_Descr2;



 yy yy_2_2;



 yy yy_3_1;



 yy yy_4_1;



 yy yy_5_1;



 yy yy_5_2;



 yy yy_5_3;



 yy yy_5_4;



 yy yy_5_5;



 yy yy_5_6;



 yy yyv_RvalMinus;



 yy yy_5_7;



 yy yyv_Tp;



 yy yy_5_8;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yy_0_4 = yyin_4; 

yyv_Tp1 = yy_0_1; 

yyv_Tp2 = yy_0_2; 

yyv_Rval1 = yy_0_3; 

yyv_Rval2 = yy_0_4; 

yy_1_1 = yyv_Tp1; 

get_tp_descr(yy_1_1, (&yy_1_2)); 

yyv_Descr1 = yy_1_2; 

yy_2_1 = yyv_Tp2; 

get_tp_descr(yy_2_1, (&yy_2_2)); 

yyv_Descr2 = yy_2_2; 

yy_3_1 = yyv_Descr1; 

if ((!test_pointer_to_object(yy_3_1))){
goto yyfl_51_2; }

yy_4_1 = yyv_Descr2; 

if ((!is_integral(yy_4_1))){
goto yyfl_51_2; }

yy_5_1 = yyv_Tp1; 

yy_5_2 = yyv_Descr1; 

yy_5_3 = yyv_Rval1; 

yy_5_4 = yyv_Tp2; 

yy_5_5 = yyv_Descr2; 

yy_5_6 = yyv_Rval2; 

compute_pointer_minus_intgral(yy_5_1, yy_5_2, yy_5_3, yy_5_4, yy_5_5, yy_5_6, (&yy_5_7), (&yy_5_8)); 

yyv_RvalMinus = yy_5_7; 

yyv_Tp = yy_5_8; 

yy_0_5 = yyv_RvalMinus; 

yy_0_6 = yyv_Tp; 

(*yyout_1) = yy_0_5; 

(*yyout_2) = yy_0_6; 


return (int )retValue_acc;
 

yyfl_51_2:  ; } 

{ 



 yy yyb;



 yy yyv_Tp1;



 yy yy_0_1;



 yy yyv_Tp2;



 yy yy_0_2;



 yy yyv_Rval1;



 yy yy_0_3;



 yy yyv_Rval2;



 yy yy_0_4;



 yy yy_0_5;



 yy yy_0_6;



 yy yy_1_1;



 yy yyv_Descr1;



 yy yy_1_2;



 yy yy_2_1;



 yy yyv_Descr2;



 yy yy_2_2;



 yy yy_3_1;



 yy yy_4_1;



 yy yy_5_1;



 yy yy_5_2;



 yy yy_5_3;



 yy yy_5_4;



 yy yy_5_5;



 yy yy_5_6;



 yy yyv_RvalPlus;



 yy yy_5_7;



 yy yyv_Tp;



 yy yy_5_8;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yy_0_4 = yyin_4; 

yyv_Tp1 = yy_0_1; 

yyv_Tp2 = yy_0_2; 

yyv_Rval1 = yy_0_3; 

yyv_Rval2 = yy_0_4; 

yy_1_1 = yyv_Tp1; 

get_tp_descr(yy_1_1, (&yy_1_2)); 

yyv_Descr1 = yy_1_2; 

yy_2_1 = yyv_Tp2; 

get_tp_descr(yy_2_1, (&yy_2_2)); 

yyv_Descr2 = yy_2_2; 

yy_3_1 = yyv_Descr1; 

if ((!test_pointer_to_object(yy_3_1))){
goto yyfl_51_3; }

yy_4_1 = yyv_Descr2; 

if ((!test_pointer_to_object(yy_4_1))){
goto yyfl_51_3; }

yy_5_1 = yyv_Tp1; 

yy_5_2 = yyv_Descr1; 

yy_5_3 = yyv_Rval1; 

yy_5_4 = yyv_Tp2; 

yy_5_5 = yyv_Descr2; 

yy_5_6 = yyv_Rval2; 

compute_pointer_minus_pointer(yy_5_1, yy_5_2, yy_5_3, yy_5_4, yy_5_5, yy_5_6, (&yy_5_7), (&yy_5_8)); 

yyv_RvalPlus = yy_5_7; 

yyv_Tp = yy_5_8; 

yy_0_5 = yyv_RvalPlus; 

yy_0_6 = yyv_Tp; 

(*yyout_1) = yy_0_5; 

(*yyout_2) = yy_0_6; 


return (int )retValue_acc;
 

yyfl_51_3:  ; } 

{ 



 yy yyb;



 yy yyv_Tp1;



 yy yy_0_1;



 yy yyv_Tp2;



 yy yy_0_2;



 yy yyv_Rval1;



 yy yy_0_3;



 yy yyv_Rval2;



 yy yy_0_4;



 yy yy_0_5;



 yy yy_0_6;



 yy yy_1_1;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yy_0_4 = yyin_4; 

yyv_Tp1 = yy_0_1; 

yyv_Tp2 = yy_0_2; 

yyv_Rval1 = yy_0_3; 

yyv_Rval2 = yy_0_4; 

yy_1_1 = ((( yy )"illegal parameter types for minus operator")); 

semantic_error(yy_1_1); 

yy_0_5 = yyv_Rval1; 

yy_0_6 = yyv_Tp1; 

(*yyout_1) = yy_0_5; 

(*yyout_2) = yy_0_6; 


return (int )retValue_acc;
 

yyfl_51_4:  ; } 

yyErr(2, 1076); 

}

return (int )retValue_acc;


}
 

plus_params(yyin_1,yyin_2,yyin_3,yyin_4,yyout_1,yyout_2) 

 yy yyin_1; 

 yy yyin_2; 

 yy yyin_3; 

 yy yyin_4; 

 yy *yyout_1; 

 yy *yyout_2;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yyv_Tp1;



 yy yy_0_1;



 yy yyv_Tp2;



 yy yy_0_2;



 yy yyv_Rval1;



 yy yy_0_3;



 yy yyv_Rval2;



 yy yy_0_4;



 yy yy_0_5;



 yy yy_0_5_1;



 yy yy_0_5_2;



 yy yy_0_5_3;



 yy yy_0_6;



 yy yy_1_1;



 yy yyv_Descr1;



 yy yy_1_2;



 yy yy_2_1;



 yy yyv_Descr2;



 yy yy_2_2;



 yy yy_3_1;



 yy yy_4_1;



 yy yy_5_1;



 yy yy_5_2;



 yy yy_5_3;



 yy yy_5_4;



 yy yyv_RvalC1;



 yy yy_5_5;



 yy yyv_RvalC2;



 yy yy_5_6;



 yy yyv_Tp;



 yy yy_5_7;



 yy yyv_AMode;



 yy yy_5_8;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yy_0_4 = yyin_4; 

yyv_Tp1 = yy_0_1; 

yyv_Tp2 = yy_0_2; 

yyv_Rval1 = yy_0_3; 

yyv_Rval2 = yy_0_4; 

yyb = yyh; 

yyh += 4; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_Tp1; 

get_tp_descr(yy_1_1, (&yy_1_2)); 

yyv_Descr1 = yy_1_2; 

yy_2_1 = yyv_Tp2; 

get_tp_descr(yy_2_1, (&yy_2_2)); 

yyv_Descr2 = yy_2_2; 

yy_3_1 = yyv_Descr1; 

if ((!test_arithmetic_type(yy_3_1))){
goto yyfl_52_1; }

yy_4_1 = yyv_Descr2; 

if ((!test_arithmetic_type(yy_4_1))){
goto yyfl_52_1; }

yy_5_1 = yyv_Descr1; 

yy_5_2 = yyv_Descr2; 

yy_5_3 = yyv_Rval1; 

yy_5_4 = yyv_Rval2; 

perform_arithmetic_conversions(yy_5_1, yy_5_2, yy_5_3, yy_5_4, (&yy_5_5), (&yy_5_6), (&yy_5_7), (&yy_5_8)); 

yyv_RvalC1 = yy_5_5; 

yyv_RvalC2 = yy_5_6; 

yyv_Tp = yy_5_7; 

yyv_AMode = yy_5_8; 

yy_0_5_1 = yyv_AMode; 

yy_0_5_2 = yyv_RvalC1; 

yy_0_5_3 = yyv_RvalC2; 

yy_0_5 = yyb + 0; 

yy_0_5[0] = 40; 

yy_0_5[1] = (((long )yy_0_5_1)); 

yy_0_5[2] = (((long )yy_0_5_2)); 

yy_0_5[3] = (((long )yy_0_5_3)); 

yy_0_6 = yyv_Tp; 

(*yyout_1) = yy_0_5; 

(*yyout_2) = yy_0_6; 


return (int )retValue_acc;
 

yyfl_52_1:  ; } 

{ 



 yy yyb;



 yy yyv_Tp1;



 yy yy_0_1;



 yy yyv_Tp2;



 yy yy_0_2;



 yy yyv_Rval1;



 yy yy_0_3;



 yy yyv_Rval2;



 yy yy_0_4;



 yy yy_0_5;



 yy yy_0_6;



 yy yy_1_1;



 yy yyv_Descr1;



 yy yy_1_2;



 yy yy_2_1;



 yy yyv_Descr2;



 yy yy_2_2;



 yy yy_3_1;



 yy yy_4_1;



 yy yy_5_1;



 yy yy_5_2;



 yy yy_5_3;



 yy yy_5_4;



 yy yy_5_5;



 yy yy_5_6;



 yy yyv_RvalPlus;



 yy yy_5_7;



 yy yyv_Tp;



 yy yy_5_8;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yy_0_4 = yyin_4; 

yyv_Tp1 = yy_0_1; 

yyv_Tp2 = yy_0_2; 

yyv_Rval1 = yy_0_3; 

yyv_Rval2 = yy_0_4; 

yy_1_1 = yyv_Tp1; 

get_tp_descr(yy_1_1, (&yy_1_2)); 

yyv_Descr1 = yy_1_2; 

yy_2_1 = yyv_Tp2; 

get_tp_descr(yy_2_1, (&yy_2_2)); 

yyv_Descr2 = yy_2_2; 

yy_3_1 = yyv_Descr1; 

if ((!test_pointer_to_object(yy_3_1))){
goto yyfl_52_2; }

yy_4_1 = yyv_Descr2; 

if ((!is_integral(yy_4_1))){
goto yyfl_52_2; }

yy_5_1 = yyv_Tp1; 

yy_5_2 = yyv_Descr1; 

yy_5_3 = yyv_Rval1; 

yy_5_4 = yyv_Tp2; 

yy_5_5 = yyv_Descr2; 

yy_5_6 = yyv_Rval2; 

compute_pointer_plus_intgral(yy_5_1, yy_5_2, yy_5_3, yy_5_4, yy_5_5, yy_5_6, (&yy_5_7), (&yy_5_8)); 

yyv_RvalPlus = yy_5_7; 

yyv_Tp = yy_5_8; 

yy_0_5 = yyv_RvalPlus; 

yy_0_6 = yyv_Tp; 

(*yyout_1) = yy_0_5; 

(*yyout_2) = yy_0_6; 


return (int )retValue_acc;
 

yyfl_52_2:  ; } 

{ 



 yy yyb;



 yy yyv_Tp1;



 yy yy_0_1;



 yy yyv_Tp2;



 yy yy_0_2;



 yy yyv_Rval1;



 yy yy_0_3;



 yy yyv_Rval2;



 yy yy_0_4;



 yy yy_0_5;



 yy yy_0_6;



 yy yy_1_1;



 yy yyv_Descr1;



 yy yy_1_2;



 yy yy_2_1;



 yy yyv_Descr2;



 yy yy_2_2;



 yy yy_3_1;



 yy yy_4_1;



 yy yy_5_1;



 yy yy_5_2;



 yy yy_5_3;



 yy yy_5_4;



 yy yy_5_5;



 yy yy_5_6;



 yy yyv_RvalPlus;



 yy yy_5_7;



 yy yyv_Tp;



 yy yy_5_8;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yy_0_4 = yyin_4; 

yyv_Tp1 = yy_0_1; 

yyv_Tp2 = yy_0_2; 

yyv_Rval1 = yy_0_3; 

yyv_Rval2 = yy_0_4; 

yy_1_1 = yyv_Tp1; 

get_tp_descr(yy_1_1, (&yy_1_2)); 

yyv_Descr1 = yy_1_2; 

yy_2_1 = yyv_Tp2; 

get_tp_descr(yy_2_1, (&yy_2_2)); 

yyv_Descr2 = yy_2_2; 

yy_3_1 = yyv_Descr2; 

if ((!test_pointer_to_object(yy_3_1))){
goto yyfl_52_3; }

yy_4_1 = yyv_Descr1; 

if ((!is_integral(yy_4_1))){
goto yyfl_52_3; }

yy_5_1 = yyv_Tp2; 

yy_5_2 = yyv_Descr2; 

yy_5_3 = yyv_Rval2; 

yy_5_4 = yyv_Tp1; 

yy_5_5 = yyv_Descr1; 

yy_5_6 = yyv_Rval1; 

compute_pointer_plus_intgral(yy_5_1, yy_5_2, yy_5_3, yy_5_4, yy_5_5, yy_5_6, (&yy_5_7), (&yy_5_8)); 

yyv_RvalPlus = yy_5_7; 

yyv_Tp = yy_5_8; 

yy_0_5 = yyv_RvalPlus; 

yy_0_6 = yyv_Tp; 

(*yyout_1) = yy_0_5; 

(*yyout_2) = yy_0_6; 


return (int )retValue_acc;
 

yyfl_52_3:  ; } 

{ 



 yy yyb;



 yy yyv_Tp1;



 yy yy_0_1;



 yy yyv_Tp2;



 yy yy_0_2;



 yy yyv_Rval1;



 yy yy_0_3;



 yy yyv_Rval2;



 yy yy_0_4;



 yy yy_0_5;



 yy yy_0_6;



 yy yy_1_1;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yy_0_4 = yyin_4; 

yyv_Tp1 = yy_0_1; 

yyv_Tp2 = yy_0_2; 

yyv_Rval1 = yy_0_3; 

yyv_Rval2 = yy_0_4; 

yy_1_1 = ((( yy )"illegal parameter types for plus operator")); 

semantic_error(yy_1_1); 

yy_0_5 = yyv_Rval1; 

yy_0_6 = yyv_Tp1; 

(*yyout_1) = yy_0_5; 

(*yyout_2) = yy_0_6; 


return (int )retValue_acc;
 

yyfl_52_4:  ; } 

yyErr(2, 1108); 

}

return (int )retValue_acc;


}
 

equality_pointer_params(yyin_1,yyin_2,yyin_3,yyin_4,yyin_5,yyin_6,yyout_1,yyout_2,yyout_3,yyout_4) 

 yy yyin_1; 

 yy yyin_2; 

 yy yyin_3; 

 yy yyin_4; 

 yy yyin_5; 

 yy yyin_6; 

 yy *yyout_1; 

 yy *yyout_2; 

 yy *yyout_3; 

 yy *yyout_4;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yyv_Tp1;



 yy yy_0_1;



 yy yyv_Descr1;



 yy yy_0_2;



 yy yyv_Res1;



 yy yy_0_3;



 yy yyv_Tp2;



 yy yy_0_4;



 yy yyv_Descr2;



 yy yy_0_5;



 yy yyv_Res2;



 yy yy_0_6;



 yy yy_0_7;



 yy yy_0_8;



 yy yy_0_9;



 yy yy_0_10;



 yy yy_1_1;



 yy yy_2_1;



 yy yy_3_1;



 yy yy_3_2;



 yy yyv_Tp;



 yy yy_4_1;



 yy yyv_M;



 yy yy_4_2;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yy_0_4 = yyin_4; 

yy_0_5 = yyin_5; 

yy_0_6 = yyin_6; 

yyv_Tp1 = yy_0_1; 

yyv_Descr1 = yy_0_2; 

yyv_Res1 = yy_0_3; 

yyv_Tp2 = yy_0_4; 

yyv_Descr2 = yy_0_5; 

yyv_Res2 = yy_0_6; 

yy_1_1 = yyv_Descr1; 

if ((!test_pointer(yy_1_1))){
goto yyfl_53_1; }

yy_2_1 = yyv_Descr2; 

if ((!test_pointer(yy_2_1))){
goto yyfl_53_1; }

yy_3_1 = yyv_Tp1; 

yy_3_2 = yyv_Tp2; 

if ((!test_equal_types(yy_3_1, yy_3_2))){
goto yyfl_53_1; }

make_tp_signed_int_and_mode((&yy_4_1), (&yy_4_2)); 

yyv_Tp = yy_4_1; 

yyv_M = yy_4_2; 

yy_0_7 = yyv_Res1; 

yy_0_8 = yyv_Res2; 

yy_0_9 = yyv_Tp; 

yy_0_10 = yyv_M; 

(*yyout_1) = yy_0_7; 

(*yyout_2) = yy_0_8; 

(*yyout_3) = yy_0_9; 

(*yyout_4) = yy_0_10; 


return (int )retValue_acc;
 

yyfl_53_1:  ; } 

{ 



 yy yyb;



 yy yyv_Tp1;



 yy yy_0_1;



 yy yyv_Descr1;



 yy yy_0_2;



 yy yyv_Res1;



 yy yy_0_3;



 yy yyv_Tp2;



 yy yy_0_4;



 yy yyv_Descr2;



 yy yy_0_5;



 yy yyv_Res2;



 yy yy_0_6;



 yy yy_0_7;



 yy yy_0_8;



 yy yy_0_9;



 yy yy_0_10;



 yy yy_1_1;



 yy yy_2_1;



 yy yyv_Tp;



 yy yy_3_1;



 yy yyv_M;



 yy yy_3_2;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yy_0_4 = yyin_4; 

yy_0_5 = yyin_5; 

yy_0_6 = yyin_6; 

yyv_Tp1 = yy_0_1; 

yyv_Descr1 = yy_0_2; 

yyv_Res1 = yy_0_3; 

yyv_Tp2 = yy_0_4; 

yyv_Descr2 = yy_0_5; 

yyv_Res2 = yy_0_6; 

yy_1_1 = yyv_Descr1; 

if ((!test_pointer_to_object(yy_1_1))){
goto yyfl_53_2; }

yy_2_1 = yyv_Descr2; 

if ((!test_pointer_to_void(yy_2_1))){
goto yyfl_53_2; }

make_tp_signed_int_and_mode((&yy_3_1), (&yy_3_2)); 

yyv_Tp = yy_3_1; 

yyv_M = yy_3_2; 

yy_0_7 = yyv_Res1; 

yy_0_8 = yyv_Res2; 

yy_0_9 = yyv_Tp; 

yy_0_10 = yyv_M; 

(*yyout_1) = yy_0_7; 

(*yyout_2) = yy_0_8; 

(*yyout_3) = yy_0_9; 

(*yyout_4) = yy_0_10; 


return (int )retValue_acc;
 

yyfl_53_2:  ; } 

{ 



 yy yyb;



 yy yyv_Tp1;



 yy yy_0_1;



 yy yyv_Descr1;



 yy yy_0_2;



 yy yyv_Res1;



 yy yy_0_3;



 yy yyv_Tp2;



 yy yy_0_4;



 yy yyv_Descr2;



 yy yy_0_5;



 yy yyv_Res2;



 yy yy_0_6;



 yy yy_0_7;



 yy yy_0_8;



 yy yy_0_9;



 yy yy_0_10;



 yy yy_1_1;



 yy yy_2_1;



 yy yyv_Tp;



 yy yy_3_1;



 yy yyv_M;



 yy yy_3_2;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yy_0_4 = yyin_4; 

yy_0_5 = yyin_5; 

yy_0_6 = yyin_6; 

yyv_Tp1 = yy_0_1; 

yyv_Descr1 = yy_0_2; 

yyv_Res1 = yy_0_3; 

yyv_Tp2 = yy_0_4; 

yyv_Descr2 = yy_0_5; 

yyv_Res2 = yy_0_6; 

yy_1_1 = yyv_Descr2; 

if ((!test_pointer_to_object(yy_1_1))){
goto yyfl_53_3; }

yy_2_1 = yyv_Descr1; 

if ((!test_pointer_to_void(yy_2_1))){
goto yyfl_53_3; }

make_tp_signed_int_and_mode((&yy_3_1), (&yy_3_2)); 

yyv_Tp = yy_3_1; 

yyv_M = yy_3_2; 

yy_0_7 = yyv_Res1; 

yy_0_8 = yyv_Res2; 

yy_0_9 = yyv_Tp; 

yy_0_10 = yyv_M; 

(*yyout_1) = yy_0_7; 

(*yyout_2) = yy_0_8; 

(*yyout_3) = yy_0_9; 

(*yyout_4) = yy_0_10; 


return (int )retValue_acc;
 

yyfl_53_3:  ; } 

{ 



 yy yyb;



 yy yyv_Tp1;



 yy yy_0_1;



 yy yyv_Descr1;



 yy yy_0_2;



 yy yyv_Res1;



 yy yy_0_3;



 yy yyv_Tp2;



 yy yy_0_4;



 yy yyv_Descr2;



 yy yy_0_5;



 yy yyv_Res2;



 yy yy_0_6;



 yy yy_0_7;



 yy yy_0_8;



 yy yy_0_9;



 yy yy_0_10;



 yy yy_1_1;



 yy yy_2_1;



 yy yyv_Tp;



 yy yy_3_1;



 yy yyv_M;



 yy yy_3_2;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yy_0_4 = yyin_4; 

yy_0_5 = yyin_5; 

yy_0_6 = yyin_6; 

yyv_Tp1 = yy_0_1; 

yyv_Descr1 = yy_0_2; 

yyv_Res1 = yy_0_3; 

yyv_Tp2 = yy_0_4; 

yyv_Descr2 = yy_0_5; 

yyv_Res2 = yy_0_6; 

yyb = yyh; 

yyh += 1; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_Descr2; 

if ((!test_pointer_to_object(yy_1_1))){
goto yyfl_53_4; }

yy_2_1 = yyv_Res1; 

if ((!test_null_pointer_constant(yy_2_1))){
goto yyfl_53_4; }

make_tp_signed_int_and_mode((&yy_3_1), (&yy_3_2)); 

yyv_Tp = yy_3_1; 

yyv_M = yy_3_2; 

yy_0_7 = yyb + 0; 

yy_0_7[0] = 7; 

yy_0_8 = yyv_Res2; 

yy_0_9 = yyv_Tp; 

yy_0_10 = yyv_M; 

(*yyout_1) = yy_0_7; 

(*yyout_2) = yy_0_8; 

(*yyout_3) = yy_0_9; 

(*yyout_4) = yy_0_10; 


return (int )retValue_acc;
 

yyfl_53_4:  ; } 

{ 



 yy yyb;



 yy yyv_Tp1;



 yy yy_0_1;



 yy yyv_Descr1;



 yy yy_0_2;



 yy yyv_Res1;



 yy yy_0_3;



 yy yyv_Tp2;



 yy yy_0_4;



 yy yyv_Descr2;



 yy yy_0_5;



 yy yyv_Res2;



 yy yy_0_6;



 yy yy_0_7;



 yy yy_0_8;



 yy yy_0_9;



 yy yy_0_10;



 yy yy_1_1;



 yy yy_2_1;



 yy yyv_Tp;



 yy yy_3_1;



 yy yyv_M;



 yy yy_3_2;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yy_0_4 = yyin_4; 

yy_0_5 = yyin_5; 

yy_0_6 = yyin_6; 

yyv_Tp1 = yy_0_1; 

yyv_Descr1 = yy_0_2; 

yyv_Res1 = yy_0_3; 

yyv_Tp2 = yy_0_4; 

yyv_Descr2 = yy_0_5; 

yyv_Res2 = yy_0_6; 

yyb = yyh; 

yyh += 1; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_Descr1; 

if ((!test_pointer_to_object(yy_1_1))){
goto yyfl_53_5; }

yy_2_1 = yyv_Res2; 

if ((!test_null_pointer_constant(yy_2_1))){
goto yyfl_53_5; }

make_tp_signed_int_and_mode((&yy_3_1), (&yy_3_2)); 

yyv_Tp = yy_3_1; 

yyv_M = yy_3_2; 

yy_0_7 = yyv_Res1; 

yy_0_8 = yyb + 0; 

yy_0_8[0] = 7; 

yy_0_9 = yyv_Tp; 

yy_0_10 = yyv_M; 

(*yyout_1) = yy_0_7; 

(*yyout_2) = yy_0_8; 

(*yyout_3) = yy_0_9; 

(*yyout_4) = yy_0_10; 


return (int )retValue_acc;
 

yyfl_53_5:  ; } 

{ 



 yy yyb;



 yy yyv_Tp1;



 yy yy_0_1;



 yy yyv_Descr1;



 yy yy_0_2;



 yy yyv_Res1;



 yy yy_0_3;



 yy yyv_Tp2;



 yy yy_0_4;



 yy yyv_Descr2;



 yy yy_0_5;



 yy yyv_Res2;



 yy yy_0_6;



 yy yy_0_7;



 yy yy_0_8;



 yy yy_0_9;



 yy yy_0_10;



 yy yy_1_1;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yy_0_4 = yyin_4; 

yy_0_5 = yyin_5; 

yy_0_6 = yyin_6; 

yyv_Tp1 = yy_0_1; 

yyv_Descr1 = yy_0_2; 

yyv_Res1 = yy_0_3; 

yyv_Tp2 = yy_0_4; 

yyv_Descr2 = yy_0_5; 

yyv_Res2 = yy_0_6; 

yyb = yyh; 

yyh += 1; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = ((( yy )"illegal types for equality operation")); 

semantic_error(yy_1_1); 

yy_0_7 = yyv_Res1; 

yy_0_8 = yyv_Res2; 

yy_0_9 = yyv_Tp1; 

yy_0_10 = yyb + 0; 

yy_0_10[0] = 11; 

(*yyout_1) = yy_0_7; 

(*yyout_2) = yy_0_8; 

(*yyout_3) = yy_0_9; 

(*yyout_4) = yy_0_10; 


return (int )retValue_acc;
 

yyfl_53_6:  ; } 

yyErr(2, 1140); 

}

return (int )retValue_acc;


}
 

condit_params(yyin_1,yyin_2,yyin_3,yyin_4,yyout_1,yyout_2,yyout_3,yyout_4) 

 yy yyin_1; 

 yy yyin_2; 

 yy yyin_3; 

 yy yyin_4; 

 yy *yyout_1; 

 yy *yyout_2; 

 yy *yyout_3; 

 yy *yyout_4;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yyv_Tp2;



 yy yy_0_1;



 yy yyv_Tp3;



 yy yy_0_2;



 yy yyv_Res2;



 yy yy_0_3;



 yy yyv_Res3;



 yy yy_0_4;



 yy yy_0_5;



 yy yy_0_6;



 yy yy_0_7;



 yy yy_0_8;



 yy yy_1_1;



 yy yyv_D2;



 yy yy_1_2;



 yy yy_2_1;



 yy yy_3_1;



 yy yyv_D3;



 yy yy_3_2;



 yy yy_4_1;



 yy yy_5_1;



 yy yy_5_2;



 yy yy_5_3;



 yy yy_5_4;



 yy yyv_ResC2;



 yy yy_5_5;



 yy yyv_ResC3;



 yy yy_5_6;



 yy yyv_Tp;



 yy yy_5_7;



 yy yyv_Mode;



 yy yy_5_8;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yy_0_4 = yyin_4; 

yyv_Tp2 = yy_0_1; 

yyv_Tp3 = yy_0_2; 

yyv_Res2 = yy_0_3; 

yyv_Res3 = yy_0_4; 

yy_1_1 = yyv_Tp2; 

get_tp_descr(yy_1_1, (&yy_1_2)); 

yyv_D2 = yy_1_2; 

yy_2_1 = yyv_D2; 

if ((!test_arithmetic_type(yy_2_1))){
goto yyfl_54_1; }

yy_3_1 = yyv_Tp3; 

get_tp_descr(yy_3_1, (&yy_3_2)); 

yyv_D3 = yy_3_2; 

yy_4_1 = yyv_D3; 

if ((!test_arithmetic_type(yy_4_1))){
goto yyfl_54_1; }

yy_5_1 = yyv_D2; 

yy_5_2 = yyv_D3; 

yy_5_3 = yyv_Res2; 

yy_5_4 = yyv_Res3; 

perform_arithmetic_conversions(yy_5_1, yy_5_2, yy_5_3, yy_5_4, (&yy_5_5), (&yy_5_6), (&yy_5_7), (&yy_5_8)); 

yyv_ResC2 = yy_5_5; 

yyv_ResC3 = yy_5_6; 

yyv_Tp = yy_5_7; 

yyv_Mode = yy_5_8; 

yy_0_5 = yyv_ResC2; 

yy_0_6 = yyv_ResC3; 

yy_0_7 = yyv_Tp; 

yy_0_8 = yyv_Mode; 

(*yyout_1) = yy_0_5; 

(*yyout_2) = yy_0_6; 

(*yyout_3) = yy_0_7; 

(*yyout_4) = yy_0_8; 


return (int )retValue_acc;
 

yyfl_54_1:  ; } 

{ 



 yy yyb;



 yy yyv_Tp1;



 yy yy_0_1;



 yy yyv_Tp2;



 yy yy_0_2;



 yy yyv_Res1;



 yy yy_0_3;



 yy yyv_Res2;



 yy yy_0_4;



 yy yy_0_5;



 yy yy_0_6;



 yy yy_0_7;



 yy yy_0_8;



 yy yy_1_1;



 yy yyv_D1;



 yy yy_1_2;



 yy yy_2_1;



 yy yy_3_1;



 yy yy_3_2;



 yy yy_4_1;



 yy yyv_Mode;



 yy yy_4_2;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yy_0_4 = yyin_4; 

yyv_Tp1 = yy_0_1; 

yyv_Tp2 = yy_0_2; 

yyv_Res1 = yy_0_3; 

yyv_Res2 = yy_0_4; 

yy_1_1 = yyv_Tp1; 

get_tp_descr(yy_1_1, (&yy_1_2)); 

yyv_D1 = yy_1_2; 

yy_2_1 = yyv_D1; 

if ((!test_struct_or_union_or_pointer(yy_2_1))){
goto yyfl_54_2; }

yy_3_1 = yyv_Tp1; 

yy_3_2 = yyv_Tp2; 

if ((!test_equal_types(yy_3_1, yy_3_2))){
goto yyfl_54_2; }

yy_4_1 = yyv_D1; 

td_map_to_mode(yy_4_1, (&yy_4_2)); 

yyv_Mode = yy_4_2; 

yy_0_5 = yyv_Res1; 

yy_0_6 = yyv_Res2; 

yy_0_7 = yyv_Tp1; 

yy_0_8 = yyv_Mode; 

(*yyout_1) = yy_0_5; 

(*yyout_2) = yy_0_6; 

(*yyout_3) = yy_0_7; 

(*yyout_4) = yy_0_8; 


return (int )retValue_acc;
 

yyfl_54_2:  ; } 

{ 



 yy yyb;



 yy yyv_Tp2;



 yy yy_0_1;



 yy yyv_Tp3;



 yy yy_0_2;



 yy yyv_Res2;



 yy yy_0_3;



 yy yyv_Res3;



 yy yy_0_4;



 yy yy_0_5;



 yy yy_0_6;



 yy yy_0_7;



 yy yy_0_8;



 yy yy_1_1;



 yy yyv_D2;



 yy yy_1_2;



 yy yy_2_1;



 yy yy_3_1;



 yy yyv_D3;



 yy yy_3_2;



 yy yy_4_1;



 yy yy_5_1;



 yy yyv_Mode;



 yy yy_5_2;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yy_0_4 = yyin_4; 

yyv_Tp2 = yy_0_1; 

yyv_Tp3 = yy_0_2; 

yyv_Res2 = yy_0_3; 

yyv_Res3 = yy_0_4; 

yy_1_1 = yyv_Tp2; 

get_tp_descr(yy_1_1, (&yy_1_2)); 

yyv_D2 = yy_1_2; 

yy_2_1 = yyv_D2; 

if ((!test_void(yy_2_1))){
goto yyfl_54_3; }

yy_3_1 = yyv_Tp3; 

get_tp_descr(yy_3_1, (&yy_3_2)); 

yyv_D3 = yy_3_2; 

yy_4_1 = yyv_D2; 

if ((!test_void(yy_4_1))){
goto yyfl_54_3; }

yy_5_1 = yyv_D2; 

td_map_to_mode(yy_5_1, (&yy_5_2)); 

yyv_Mode = yy_5_2; 

yy_0_5 = yyv_Res2; 

yy_0_6 = yyv_Res3; 

yy_0_7 = yyv_Tp2; 

yy_0_8 = yyv_Mode; 

(*yyout_1) = yy_0_5; 

(*yyout_2) = yy_0_6; 

(*yyout_3) = yy_0_7; 

(*yyout_4) = yy_0_8; 


return (int )retValue_acc;
 

yyfl_54_3:  ; } 

{ 



 yy yyb;



 yy yyv_Tp2;



 yy yy_0_1;



 yy yyv_Tp3;



 yy yy_0_2;



 yy yyv_Res2;



 yy yy_0_3;



 yy yyv_Res3;



 yy yy_0_4;



 yy yy_0_5;



 yy yy_0_6;



 yy yy_0_7;



 yy yy_0_8;



 yy yy_1_1;



 yy yyv_D2;



 yy yy_1_2;



 yy yy_2_1;



 yy yy_3_1;



 yy yyv_D3;



 yy yy_3_2;



 yy yy_4_1;



 yy yy_5_1;



 yy yyv_Mode;



 yy yy_5_2;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yy_0_4 = yyin_4; 

yyv_Tp2 = yy_0_1; 

yyv_Tp3 = yy_0_2; 

yyv_Res2 = yy_0_3; 

yyv_Res3 = yy_0_4; 

yy_1_1 = yyv_Tp2; 

get_tp_descr(yy_1_1, (&yy_1_2)); 

yyv_D2 = yy_1_2; 

yy_2_1 = yyv_D2; 

if ((!test_pointer_to_object(yy_2_1))){
goto yyfl_54_4; }

yy_3_1 = yyv_Tp3; 

get_tp_descr(yy_3_1, (&yy_3_2)); 

yyv_D3 = yy_3_2; 

yy_4_1 = yyv_D3; 

if ((!test_pointer_to_void(yy_4_1))){
goto yyfl_54_4; }

yy_5_1 = yyv_D3; 

td_map_to_mode(yy_5_1, (&yy_5_2)); 

yyv_Mode = yy_5_2; 

yy_0_5 = yyv_Res2; 

yy_0_6 = yyv_Res3; 

yy_0_7 = yyv_Tp3; 

yy_0_8 = yyv_Mode; 

(*yyout_1) = yy_0_5; 

(*yyout_2) = yy_0_6; 

(*yyout_3) = yy_0_7; 

(*yyout_4) = yy_0_8; 


return (int )retValue_acc;
 

yyfl_54_4:  ; } 

{ 



 yy yyb;



 yy yyv_Tp2;



 yy yy_0_1;



 yy yyv_Tp3;



 yy yy_0_2;



 yy yyv_Res2;



 yy yy_0_3;



 yy yyv_Res3;



 yy yy_0_4;



 yy yy_0_5;



 yy yy_0_6;



 yy yy_0_7;



 yy yy_0_8;



 yy yy_1_1;



 yy yyv_D2;



 yy yy_1_2;



 yy yy_2_1;



 yy yy_3_1;



 yy yyv_D3;



 yy yy_3_2;



 yy yy_4_1;



 yy yy_5_1;



 yy yyv_Mode;



 yy yy_5_2;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yy_0_4 = yyin_4; 

yyv_Tp2 = yy_0_1; 

yyv_Tp3 = yy_0_2; 

yyv_Res2 = yy_0_3; 

yyv_Res3 = yy_0_4; 

yy_1_1 = yyv_Tp2; 

get_tp_descr(yy_1_1, (&yy_1_2)); 

yyv_D2 = yy_1_2; 

yy_2_1 = yyv_D2; 

if ((!test_pointer_to_void(yy_2_1))){
goto yyfl_54_5; }

yy_3_1 = yyv_Tp3; 

get_tp_descr(yy_3_1, (&yy_3_2)); 

yyv_D3 = yy_3_2; 

yy_4_1 = yyv_D3; 

if ((!test_pointer_to_object(yy_4_1))){
goto yyfl_54_5; }

yy_5_1 = yyv_D2; 

td_map_to_mode(yy_5_1, (&yy_5_2)); 

yyv_Mode = yy_5_2; 

yy_0_5 = yyv_Res2; 

yy_0_6 = yyv_Res3; 

yy_0_7 = yyv_Tp2; 

yy_0_8 = yyv_Mode; 

(*yyout_1) = yy_0_5; 

(*yyout_2) = yy_0_6; 

(*yyout_3) = yy_0_7; 

(*yyout_4) = yy_0_8; 


return (int )retValue_acc;
 

yyfl_54_5:  ; } 

{ 



 yy yyb;



 yy yyv_Tp2;



 yy yy_0_1;



 yy yyv_Tp3;



 yy yy_0_2;



 yy yyv_Res2;



 yy yy_0_3;



 yy yyv_Res3;



 yy yy_0_4;



 yy yy_0_5;



 yy yy_0_6;



 yy yy_0_7;



 yy yy_0_8;



 yy yy_1_1;



 yy yyv_D2;



 yy yy_1_2;



 yy yy_2_1;



 yy yy_3_1;



 yy yy_4_1;



 yy yyv_Mode;



 yy yy_4_2;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yy_0_4 = yyin_4; 

yyv_Tp2 = yy_0_1; 

yyv_Tp3 = yy_0_2; 

yyv_Res2 = yy_0_3; 

yyv_Res3 = yy_0_4; 

yyb = yyh; 

yyh += 1; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_Tp2; 

get_tp_descr(yy_1_1, (&yy_1_2)); 

yyv_D2 = yy_1_2; 

yy_2_1 = yyv_D2; 

if ((!test_pointer(yy_2_1))){
goto yyfl_54_6; }

yy_3_1 = yyv_Res3; 

if ((!test_null_pointer_constant(yy_3_1))){
goto yyfl_54_6; }

yy_4_1 = yyv_D2; 

td_map_to_mode(yy_4_1, (&yy_4_2)); 

yyv_Mode = yy_4_2; 

yy_0_5 = yyv_Res2; 

yy_0_6 = yyb + 0; 

yy_0_6[0] = 7; 

yy_0_7 = yyv_Tp2; 

yy_0_8 = yyv_Mode; 

(*yyout_1) = yy_0_5; 

(*yyout_2) = yy_0_6; 

(*yyout_3) = yy_0_7; 

(*yyout_4) = yy_0_8; 


return (int )retValue_acc;
 

yyfl_54_6:  ; } 

{ 



 yy yyb;



 yy yyv_Tp2;



 yy yy_0_1;



 yy yyv_Tp3;



 yy yy_0_2;



 yy yyv_Res2;



 yy yy_0_3;



 yy yyv_Res3;



 yy yy_0_4;



 yy yy_0_5;



 yy yy_0_6;



 yy yy_0_7;



 yy yy_0_8;



 yy yy_1_1;



 yy yyv_D3;



 yy yy_1_2;



 yy yy_2_1;



 yy yy_3_1;



 yy yy_4_1;



 yy yyv_Mode;



 yy yy_4_2;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yy_0_4 = yyin_4; 

yyv_Tp2 = yy_0_1; 

yyv_Tp3 = yy_0_2; 

yyv_Res2 = yy_0_3; 

yyv_Res3 = yy_0_4; 

yyb = yyh; 

yyh += 1; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_Tp3; 

get_tp_descr(yy_1_1, (&yy_1_2)); 

yyv_D3 = yy_1_2; 

yy_2_1 = yyv_D3; 

if ((!test_pointer(yy_2_1))){
goto yyfl_54_7; }

yy_3_1 = yyv_Res2; 

if ((!test_null_pointer_constant(yy_3_1))){
goto yyfl_54_7; }

yy_4_1 = yyv_D3; 

td_map_to_mode(yy_4_1, (&yy_4_2)); 

yyv_Mode = yy_4_2; 

yy_0_5 = yyb + 0; 

yy_0_5[0] = 7; 

yy_0_6 = yyv_Res3; 

yy_0_7 = yyv_Tp3; 

yy_0_8 = yyv_Mode; 

(*yyout_1) = yy_0_5; 

(*yyout_2) = yy_0_6; 

(*yyout_3) = yy_0_7; 

(*yyout_4) = yy_0_8; 


return (int )retValue_acc;
 

yyfl_54_7:  ; } 

{ 



 yy yyb;



 yy yyv_Tp1;



 yy yy_0_1;



 yy yyv_Tp2;



 yy yy_0_2;



 yy yyv_Res1;



 yy yy_0_3;



 yy yyv_Res2;



 yy yy_0_4;



 yy yy_0_5;



 yy yy_0_6;



 yy yy_0_7;



 yy yy_0_8;



 yy yy_1_1;



 yy yyv_D1;



 yy yy_1_2;



 yy yy_2_1;



 yy yyv_D2;



 yy yy_2_2;



 yy yy_3_1;



 yy yy_4_1;



 yy yyv_Mode;



 yy yy_4_2;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yy_0_4 = yyin_4; 

yyv_Tp1 = yy_0_1; 

yyv_Tp2 = yy_0_2; 

yyv_Res1 = yy_0_3; 

yyv_Res2 = yy_0_4; 

yy_1_1 = yyv_Tp1; 

get_tp_descr(yy_1_1, (&yy_1_2)); 

yyv_D1 = yy_1_2; 

yy_2_1 = yyv_Tp2; 

get_tp_descr(yy_2_1, (&yy_2_2)); 

yyv_D2 = yy_2_2; 

yy_3_1 = ((( yy )"types of second and third operand of conditional are not compatible")); 

semantic_error(yy_3_1); 

yy_4_1 = yyv_D1; 

td_map_to_mode(yy_4_1, (&yy_4_2)); 

yyv_Mode = yy_4_2; 

yy_0_5 = yyv_Res1; 

yy_0_6 = yyv_Res2; 

yy_0_7 = yyv_Tp1; 

yy_0_8 = yyv_Mode; 

(*yyout_1) = yy_0_5; 

(*yyout_2) = yy_0_6; 

(*yyout_3) = yy_0_7; 

(*yyout_4) = yy_0_8; 


return (int )retValue_acc;
 

yyfl_54_8:  ; } 

yyErr(2, 1182); 

}

return (int )retValue_acc;


}
 

conditional_params(yyin_1,yyin_2,yyin_3,yyin_4,yyin_5,yyout_1,yyout_2,yyout_3,yyout_4) 

 yy yyin_1; 

 yy yyin_2; 

 yy yyin_3; 

 yy yyin_4; 

 yy yyin_5; 

 yy *yyout_1; 

 yy *yyout_2; 

 yy *yyout_3; 

 yy *yyout_4;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yyv_Tp1;



 yy yy_0_1;



 yy yyv_Tp2;



 yy yy_0_2;



 yy yyv_Tp3;



 yy yy_0_3;



 yy yyv_Res2;



 yy yy_0_4;



 yy yyv_Res3;



 yy yy_0_5;



 yy yy_0_6;



 yy yy_0_7;



 yy yy_0_8;



 yy yy_0_9;



 yy yy_1_1;



 yy yyv_D1;



 yy yy_1_2;



 yy yy_2_1;



 yy yy_3_1;



 yy yy_3_2;



 yy yy_3_3;



 yy yy_3_4;



 yy yyv_ResC2;



 yy yy_3_5;



 yy yyv_ResC3;



 yy yy_3_6;



 yy yyv_Tp;



 yy yy_3_7;



 yy yyv_Mode;



 yy yy_3_8;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yy_0_4 = yyin_4; 

yy_0_5 = yyin_5; 

yyv_Tp1 = yy_0_1; 

yyv_Tp2 = yy_0_2; 

yyv_Tp3 = yy_0_3; 

yyv_Res2 = yy_0_4; 

yyv_Res3 = yy_0_5; 

yy_1_1 = yyv_Tp1; 

get_tp_descr(yy_1_1, (&yy_1_2)); 

yyv_D1 = yy_1_2; 

yy_2_1 = yyv_D1; 

if ((!test_scalar_type(yy_2_1))){
goto yyfl_55_1; }

yy_3_1 = yyv_Tp2; 

yy_3_2 = yyv_Tp3; 

yy_3_3 = yyv_Res2; 

yy_3_4 = yyv_Res3; 

condit_params(yy_3_1, yy_3_2, yy_3_3, yy_3_4, (&yy_3_5), (&yy_3_6), (&yy_3_7), (&yy_3_8)); 

yyv_ResC2 = yy_3_5; 

yyv_ResC3 = yy_3_6; 

yyv_Tp = yy_3_7; 

yyv_Mode = yy_3_8; 

yy_0_6 = yyv_ResC2; 

yy_0_7 = yyv_ResC3; 

yy_0_8 = yyv_Tp; 

yy_0_9 = yyv_Mode; 

(*yyout_1) = yy_0_6; 

(*yyout_2) = yy_0_7; 

(*yyout_3) = yy_0_8; 

(*yyout_4) = yy_0_9; 


return (int )retValue_acc;
 

yyfl_55_1:  ; } 

{ 



 yy yyb;



 yy yyv_Tp1;



 yy yy_0_1;



 yy yyv_Tp2;



 yy yy_0_2;



 yy yyv_Tp3;



 yy yy_0_3;



 yy yyv_Res2;



 yy yy_0_4;



 yy yyv_Res3;



 yy yy_0_5;



 yy yy_0_6;



 yy yy_0_7;



 yy yy_0_8;



 yy yy_0_9;



 yy yy_1_1;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yy_0_4 = yyin_4; 

yy_0_5 = yyin_5; 

yyv_Tp1 = yy_0_1; 

yyv_Tp2 = yy_0_2; 

yyv_Tp3 = yy_0_3; 

yyv_Res2 = yy_0_4; 

yyv_Res3 = yy_0_5; 

yyb = yyh; 

yyh += 1; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = ((( yy )"first argument of conditional does not have scalar type")); 

semantic_error(yy_1_1); 

yy_0_6 = yyv_Res2; 

yy_0_7 = yyv_Res3; 

yy_0_8 = yyv_Tp1; 

yy_0_9 = yyb + 0; 

yy_0_9[0] = 11; 

(*yyout_1) = yy_0_6; 

(*yyout_2) = yy_0_7; 

(*yyout_3) = yy_0_8; 

(*yyout_4) = yy_0_9; 


return (int )retValue_acc;
 

yyfl_55_2:  ; } 

yyErr(2, 1255); 

}

return (int )retValue_acc;


}
 

simple_assign_params(yyin_1,yyin_2,yyin_3,yyout_1) 

 yy yyin_1; 

 yy yyin_2; 

 yy yyin_3; 

 yy *yyout_1;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yyv_Tp1;



 yy yy_0_1;



 yy yyv_Tp2;



 yy yy_0_2;



 yy yyv_Rval;



 yy yy_0_3;



 yy yy_0_4;



 yy yy_1_1;



 yy yyv_Descr;



 yy yy_1_2;



 yy yy_2_1;



 yy yy_3_1;



 yy yy_3_2;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yyv_Tp1 = yy_0_1; 

yyv_Tp2 = yy_0_2; 

yyv_Rval = yy_0_3; 

yy_1_1 = yyv_Tp1; 

get_tp_descr(yy_1_1, (&yy_1_2)); 

yyv_Descr = yy_1_2; 

yy_2_1 = yyv_Descr; 

if ((!test_struct_or_union_or_pointer(yy_2_1))){
goto yyfl_56_1; }

yy_3_1 = yyv_Tp1; 

yy_3_2 = yyv_Tp2; 

if ((!test_equal_types(yy_3_1, yy_3_2))){
goto yyfl_56_1; }

yy_0_4 = yyv_Rval; 

(*yyout_1) = yy_0_4; 


return (int )retValue_acc;
 

yyfl_56_1:  ; } 

{ 



 yy yyb;



 yy yyv_Tp1;



 yy yy_0_1;



 yy yyv_Tp2;



 yy yy_0_2;



 yy yyv_Rval;



 yy yy_0_3;



 yy yy_0_4;



 yy yy_1_1;



 yy yyv_Descr;



 yy yy_1_2;



 yy yy_2_1;



 yy yy_3_1;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yyv_Tp1 = yy_0_1; 

yyv_Tp2 = yy_0_2; 

yyv_Rval = yy_0_3; 

yyb = yyh; 

yyh += 1; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_Tp1; 

get_tp_descr(yy_1_1, (&yy_1_2)); 

yyv_Descr = yy_1_2; 

yy_2_1 = yyv_Descr; 

if ((!test_pointer(yy_2_1))){
goto yyfl_56_2; }

yy_3_1 = yyv_Rval; 

if ((!test_null_pointer_constant(yy_3_1))){
goto yyfl_56_2; }

yy_0_4 = yyb + 0; 

yy_0_4[0] = 7; 

(*yyout_1) = yy_0_4; 


return (int )retValue_acc;
 

yyfl_56_2:  ; } 

{ 



 yy yyb;



 yy yyv_Tp1;



 yy yy_0_1;



 yy yyv_Tp2;



 yy yy_0_2;



 yy yyv_Rval;



 yy yy_0_3;



 yy yy_0_4;



 yy yy_1_1;



 yy yyv_Descr1;



 yy yy_1_2;



 yy yy_2_1;



 yy yy_3_1;



 yy yyv_Descr2;



 yy yy_3_2;



 yy yy_4_1;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yyv_Tp1 = yy_0_1; 

yyv_Tp2 = yy_0_2; 

yyv_Rval = yy_0_3; 

yy_1_1 = yyv_Tp1; 

get_tp_descr(yy_1_1, (&yy_1_2)); 

yyv_Descr1 = yy_1_2; 

yy_2_1 = yyv_Descr1; 

if ((!test_pointer_to_object(yy_2_1))){
goto yyfl_56_3; }

yy_3_1 = yyv_Tp2; 

get_tp_descr(yy_3_1, (&yy_3_2)); 

yyv_Descr2 = yy_3_2; 

yy_4_1 = yyv_Descr2; 

if ((!test_pointer_to_void(yy_4_1))){
goto yyfl_56_3; }

yy_0_4 = yyv_Rval; 

(*yyout_1) = yy_0_4; 


return (int )retValue_acc;
 

yyfl_56_3:  ; } 

{ 



 yy yyb;



 yy yyv_Tp1;



 yy yy_0_1;



 yy yyv_Tp2;



 yy yy_0_2;



 yy yyv_Rval;



 yy yy_0_3;



 yy yy_0_4;



 yy yy_1_1;



 yy yyv_Descr1;



 yy yy_1_2;



 yy yy_2_1;



 yy yy_3_1;



 yy yyv_Descr2;



 yy yy_3_2;



 yy yy_4_1;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yyv_Tp1 = yy_0_1; 

yyv_Tp2 = yy_0_2; 

yyv_Rval = yy_0_3; 

yy_1_1 = yyv_Tp1; 

get_tp_descr(yy_1_1, (&yy_1_2)); 

yyv_Descr1 = yy_1_2; 

yy_2_1 = yyv_Descr1; 

if ((!test_pointer_to_void(yy_2_1))){
goto yyfl_56_4; }

yy_3_1 = yyv_Tp2; 

get_tp_descr(yy_3_1, (&yy_3_2)); 

yyv_Descr2 = yy_3_2; 

yy_4_1 = yyv_Descr2; 

if ((!test_pointer_to_object(yy_4_1))){
goto yyfl_56_4; }

yy_0_4 = yyv_Rval; 

(*yyout_1) = yy_0_4; 


return (int )retValue_acc;
 

yyfl_56_4:  ; } 

{ 



 yy yyb;



 yy yyv_Tp1;



 yy yy_0_1;



 yy yyv_Tp2;



 yy yy_0_2;



 yy yyv_Rval;



 yy yy_0_3;



 yy yy_0_4;



 yy yy_1_1;



 yy yyv_Descr1;



 yy yy_1_2;



 yy yy_2_1;



 yy yy_3_1;



 yy yyv_Descr2;



 yy yy_3_2;



 yy yy_4_1;



 yy yy_5_1;



 yy yy_5_2;



 yy yy_5_3;



 yy yyv_RvalC;



 yy yy_5_4;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yyv_Tp1 = yy_0_1; 

yyv_Tp2 = yy_0_2; 

yyv_Rval = yy_0_3; 

yy_1_1 = yyv_Tp1; 

get_tp_descr(yy_1_1, (&yy_1_2)); 

yyv_Descr1 = yy_1_2; 

yy_2_1 = yyv_Descr1; 

if ((!test_arithmetic_type(yy_2_1))){
goto yyfl_56_5; }

yy_3_1 = yyv_Tp2; 

get_tp_descr(yy_3_1, (&yy_3_2)); 

yyv_Descr2 = yy_3_2; 

yy_4_1 = yyv_Descr2; 

if ((!test_arithmetic_type(yy_4_1))){
goto yyfl_56_5; }

yy_5_1 = yyv_Descr1; 

yy_5_2 = yyv_Descr2; 

yy_5_3 = yyv_Rval; 

convert_type2_to_type1(yy_5_1, yy_5_2, yy_5_3, (&yy_5_4)); 

yyv_RvalC = yy_5_4; 

yy_0_4 = yyv_RvalC; 

(*yyout_1) = yy_0_4; 


return (int )retValue_acc;
 

yyfl_56_5:  ; } 

{ 



 yy yyb;



 yy yyv_Tp1;



 yy yy_0_1;



 yy yyv_Tp2;



 yy yy_0_2;



 yy yyv_Rval;



 yy yy_0_3;



 yy yy_0_4;



 yy yy_1_1;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yyv_Tp1 = yy_0_1; 

yyv_Tp2 = yy_0_2; 

yyv_Rval = yy_0_3; 

yy_1_1 = ((( yy )"types are not compatible")); 

semantic_error(yy_1_1); 

yy_0_4 = yyv_Rval; 

(*yyout_1) = yy_0_4; 


return (int )retValue_acc;
 

yyfl_56_6:  ; } 

yyErr(2, 1278); 

}

return (int )retValue_acc;


}
 

params(yyin_1,yyin_2,yyin_3,yyin_4,yyin_5,yyout_1,yyout_2,yyout_3,yyout_4) 

 yy yyin_1; 

 yy yyin_2; 

 yy yyin_3; 

 yy yyin_4; 

 yy yyin_5; 

 yy *yyout_1; 

 yy *yyout_2; 

 yy *yyout_3; 

 yy *yyout_4;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yyv_Op;



 yy yy_0_1;



 yy yyv_Tp1;



 yy yy_0_2;



 yy yyv_Tp2;



 yy yy_0_3;



 yy yyv_Res1;



 yy yy_0_4;



 yy yyv_Res2;



 yy yy_0_5;



 yy yy_0_6;



 yy yy_0_7;



 yy yy_0_8;



 yy yy_0_9;



 yy yy_1_1;



 yy yy_2_1;



 yy yyv_Descr1;



 yy yy_2_2;



 yy yy_3_1;



 yy yyv_Descr2;



 yy yy_3_2;



 yy yy_4_1;



 yy yy_5_1;



 yy yy_6_1;



 yy yy_6_2;



 yy yyv_D1;



 yy yy_6_3;



 yy yyv_ResC1;



 yy yy_6_4;



 yy yy_7_1;



 yy yy_7_2;



 yy yyv_D2;



 yy yy_7_3;



 yy yyv_RC2;



 yy yy_7_4;



 yy yyv_Tp;



 yy yy_8_1;



 yy yy_9_1;



 yy yyv_D;



 yy yy_9_2;



 yy yy_10_1;



 yy yy_10_2;



 yy yy_10_3;



 yy yyv_ResC2;



 yy yy_10_4;



 yy yy_11_1;



 yy yyv_TpRes;



 yy yy_11_2;



 yy yyv_Mode;



 yy yy_11_3;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yy_0_4 = yyin_4; 

yy_0_5 = yyin_5; 

yyv_Op = yy_0_1; 

yyv_Tp1 = yy_0_2; 

yyv_Tp2 = yy_0_3; 

yyv_Res1 = yy_0_4; 

yyv_Res2 = yy_0_5; 

yy_1_1 = yyv_Op; 

if ((!is_shift(yy_1_1))){
goto yyfl_57_1; }

yy_2_1 = yyv_Tp1; 

get_tp_descr(yy_2_1, (&yy_2_2)); 

yyv_Descr1 = yy_2_2; 

yy_3_1 = yyv_Tp2; 

get_tp_descr(yy_3_1, (&yy_3_2)); 

yyv_Descr2 = yy_3_2; 

yy_4_1 = yyv_Descr1; 

if ((!is_integral(yy_4_1))){
goto yyfl_57_1; }

yy_5_1 = yyv_Descr2; 

if ((!is_integral(yy_5_1))){
goto yyfl_57_1; }

yy_6_1 = yyv_Descr1; 

yy_6_2 = yyv_Res1; 

perform_integral_promotions(yy_6_1, yy_6_2, (&yy_6_3), (&yy_6_4)); 

yyv_D1 = yy_6_3; 

yyv_ResC1 = yy_6_4; 

yy_7_1 = yyv_Descr2; 

yy_7_2 = yyv_Res2; 

perform_integral_promotions(yy_7_1, yy_7_2, (&yy_7_3), (&yy_7_4)); 

yyv_D2 = yy_7_3; 

yyv_RC2 = yy_7_4; 

make_tp_signed_int((&yy_8_1)); 

yyv_Tp = yy_8_1; 

yy_9_1 = yyv_Tp; 

get_tp_descr(yy_9_1, (&yy_9_2)); 

yyv_D = yy_9_2; 

yy_10_1 = yyv_D2; 

yy_10_2 = yyv_D; 

yy_10_3 = yyv_RC2; 

convert_type2_to_type1(yy_10_1, yy_10_2, yy_10_3, (&yy_10_4)); 

yyv_ResC2 = yy_10_4; 

yy_11_1 = yyv_D1; 

make_type_and_size_and_mode(yy_11_1, (&yy_11_2), (&yy_11_3)); 

yyv_TpRes = yy_11_2; 

yyv_Mode = yy_11_3; 

yy_0_6 = yyv_ResC1; 

yy_0_7 = yyv_ResC2; 

yy_0_8 = yyv_TpRes; 

yy_0_9 = yyv_Mode; 

(*yyout_1) = yy_0_6; 

(*yyout_2) = yy_0_7; 

(*yyout_3) = yy_0_8; 

(*yyout_4) = yy_0_9; 


return (int )retValue_acc;
 

yyfl_57_1:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_Tp1;



 yy yy_0_2;



 yy yyv_Tp2;



 yy yy_0_3;



 yy yyv_Res1;



 yy yy_0_4;



 yy yyv_Res2;



 yy yy_0_5;



 yy yy_0_6;



 yy yy_0_7;



 yy yy_0_8;



 yy yy_0_9;



 yy yy_1_1;



 yy yyv_Descr1;



 yy yy_1_2;



 yy yy_2_1;



 yy yyv_Descr2;



 yy yy_2_2;



 yy yy_3_1;



 yy yy_4_1;



 yy yyv_Tp;



 yy yy_5_1;



 yy yyv_Mode;



 yy yy_5_2;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yy_0_4 = yyin_4; 

yy_0_5 = yyin_5; 

if (yy_0_1[0] != 22){
goto yyfl_57_2; }

yyv_Tp1 = yy_0_2; 

yyv_Tp2 = yy_0_3; 

yyv_Res1 = yy_0_4; 

yyv_Res2 = yy_0_5; 

yy_1_1 = yyv_Tp1; 

get_tp_descr(yy_1_1, (&yy_1_2)); 

yyv_Descr1 = yy_1_2; 

yy_2_1 = yyv_Tp2; 

get_tp_descr(yy_2_1, (&yy_2_2)); 

yyv_Descr2 = yy_2_2; 

yy_3_1 = yyv_Descr1; 

if ((!test_scalar_type(yy_3_1))){
goto yyfl_57_2; }

yy_4_1 = yyv_Descr2; 

if ((!test_scalar_type(yy_4_1))){
goto yyfl_57_2; }

make_tp_signed_int_and_mode((&yy_5_1), (&yy_5_2)); 

yyv_Tp = yy_5_1; 

yyv_Mode = yy_5_2; 

yy_0_6 = yyv_Res1; 

yy_0_7 = yyv_Res2; 

yy_0_8 = yyv_Tp; 

yy_0_9 = yyv_Mode; 

(*yyout_1) = yy_0_6; 

(*yyout_2) = yy_0_7; 

(*yyout_3) = yy_0_8; 

(*yyout_4) = yy_0_9; 


return (int )retValue_acc;
 

yyfl_57_2:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_Tp1;



 yy yy_0_2;



 yy yyv_Tp2;



 yy yy_0_3;



 yy yyv_Res1;



 yy yy_0_4;



 yy yyv_Res2;



 yy yy_0_5;



 yy yy_0_6;



 yy yy_0_7;



 yy yy_0_8;



 yy yy_0_9;



 yy yy_1_1;



 yy yyv_Descr1;



 yy yy_1_2;



 yy yy_2_1;



 yy yyv_Descr2;



 yy yy_2_2;



 yy yy_3_1;



 yy yy_4_1;



 yy yyv_Tp;



 yy yy_5_1;



 yy yyv_Mode;



 yy yy_5_2;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yy_0_4 = yyin_4; 

yy_0_5 = yyin_5; 

if (yy_0_1[0] != 23){
goto yyfl_57_3; }

yyv_Tp1 = yy_0_2; 

yyv_Tp2 = yy_0_3; 

yyv_Res1 = yy_0_4; 

yyv_Res2 = yy_0_5; 

yy_1_1 = yyv_Tp1; 

get_tp_descr(yy_1_1, (&yy_1_2)); 

yyv_Descr1 = yy_1_2; 

yy_2_1 = yyv_Tp2; 

get_tp_descr(yy_2_1, (&yy_2_2)); 

yyv_Descr2 = yy_2_2; 

yy_3_1 = yyv_Descr1; 

if ((!test_scalar_type(yy_3_1))){
goto yyfl_57_3; }

yy_4_1 = yyv_Descr2; 

if ((!test_scalar_type(yy_4_1))){
goto yyfl_57_3; }

make_tp_signed_int_and_mode((&yy_5_1), (&yy_5_2)); 

yyv_Tp = yy_5_1; 

yyv_Mode = yy_5_2; 

yy_0_6 = yyv_Res1; 

yy_0_7 = yyv_Res2; 

yy_0_8 = yyv_Tp; 

yy_0_9 = yyv_Mode; 

(*yyout_1) = yy_0_6; 

(*yyout_2) = yy_0_7; 

(*yyout_3) = yy_0_8; 

(*yyout_4) = yy_0_9; 


return (int )retValue_acc;
 

yyfl_57_3:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_Tp1;



 yy yy_0_2;



 yy yyv_Tp2;



 yy yy_0_3;



 yy yyv_Rval1;



 yy yy_0_4;



 yy yyv_Rval2;



 yy yy_0_5;



 yy yy_0_6;



 yy yy_0_7;



 yy yy_0_8;



 yy yy_0_9;



 yy yy_1_1;



 yy yyv_Descr1;



 yy yy_1_2;



 yy yy_2_1;



 yy yyv_Descr2;



 yy yy_2_2;



 yy yy_3_1;



 yy yy_4_1;



 yy yy_5_1;



 yy yy_5_2;



 yy yy_5_3;



 yy yy_5_4;



 yy yyv_RvalC1;



 yy yy_5_5;



 yy yyv_RvalC2;



 yy yy_5_6;



 yy yyv_Tp;



 yy yy_5_7;



 yy yyv_Mode;



 yy yy_5_8;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yy_0_4 = yyin_4; 

yy_0_5 = yyin_5; 

if (yy_0_1[0] != 18){
goto yyfl_57_4; }

yyv_Tp1 = yy_0_2; 

yyv_Tp2 = yy_0_3; 

yyv_Rval1 = yy_0_4; 

yyv_Rval2 = yy_0_5; 

yy_1_1 = yyv_Tp1; 

get_tp_descr(yy_1_1, (&yy_1_2)); 

yyv_Descr1 = yy_1_2; 

yy_2_1 = yyv_Tp2; 

get_tp_descr(yy_2_1, (&yy_2_2)); 

yyv_Descr2 = yy_2_2; 

yy_3_1 = yyv_Descr1; 

if ((!is_integral(yy_3_1))){
goto yyfl_57_4; }

yy_4_1 = yyv_Descr2; 

if ((!is_integral(yy_4_1))){
goto yyfl_57_4; }

yy_5_1 = yyv_Descr1; 

yy_5_2 = yyv_Descr2; 

yy_5_3 = yyv_Rval1; 

yy_5_4 = yyv_Rval2; 

perform_arithmetic_conversions(yy_5_1, yy_5_2, yy_5_3, yy_5_4, (&yy_5_5), (&yy_5_6), (&yy_5_7), (&yy_5_8)); 

yyv_RvalC1 = yy_5_5; 

yyv_RvalC2 = yy_5_6; 

yyv_Tp = yy_5_7; 

yyv_Mode = yy_5_8; 

yy_0_6 = yyv_RvalC1; 

yy_0_7 = yyv_RvalC2; 

yy_0_8 = yyv_Tp; 

yy_0_9 = yyv_Mode; 

(*yyout_1) = yy_0_6; 

(*yyout_2) = yy_0_7; 

(*yyout_3) = yy_0_8; 

(*yyout_4) = yy_0_9; 


return (int )retValue_acc;
 

yyfl_57_4:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_Tp1;



 yy yy_0_2;



 yy yyv_Tp2;



 yy yy_0_3;



 yy yyv_Rval1;



 yy yy_0_4;



 yy yyv_Rval2;



 yy yy_0_5;



 yy yy_0_6;



 yy yy_0_7;



 yy yy_0_8;



 yy yy_0_9;



 yy yy_1_1;



 yy yyv_Descr1;



 yy yy_1_2;



 yy yy_2_1;



 yy yyv_Descr2;



 yy yy_2_2;



 yy yy_3_1;



 yy yy_4_1;



 yy yy_5_1;



 yy yy_5_2;



 yy yy_5_3;



 yy yy_5_4;



 yy yyv_RvalC1;



 yy yy_5_5;



 yy yyv_RvalC2;



 yy yy_5_6;



 yy yyv_Tp;



 yy yy_5_7;



 yy yyv_Mode;



 yy yy_5_8;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yy_0_4 = yyin_4; 

yy_0_5 = yyin_5; 

if (yy_0_1[0] != 19){
goto yyfl_57_5; }

yyv_Tp1 = yy_0_2; 

yyv_Tp2 = yy_0_3; 

yyv_Rval1 = yy_0_4; 

yyv_Rval2 = yy_0_5; 

yy_1_1 = yyv_Tp1; 

get_tp_descr(yy_1_1, (&yy_1_2)); 

yyv_Descr1 = yy_1_2; 

yy_2_1 = yyv_Tp2; 

get_tp_descr(yy_2_1, (&yy_2_2)); 

yyv_Descr2 = yy_2_2; 

yy_3_1 = yyv_Descr1; 

if ((!is_integral(yy_3_1))){
goto yyfl_57_5; }

yy_4_1 = yyv_Descr2; 

if ((!is_integral(yy_4_1))){
goto yyfl_57_5; }

yy_5_1 = yyv_Descr1; 

yy_5_2 = yyv_Descr2; 

yy_5_3 = yyv_Rval1; 

yy_5_4 = yyv_Rval2; 

perform_arithmetic_conversions(yy_5_1, yy_5_2, yy_5_3, yy_5_4, (&yy_5_5), (&yy_5_6), (&yy_5_7), (&yy_5_8)); 

yyv_RvalC1 = yy_5_5; 

yyv_RvalC2 = yy_5_6; 

yyv_Tp = yy_5_7; 

yyv_Mode = yy_5_8; 

yy_0_6 = yyv_RvalC1; 

yy_0_7 = yyv_RvalC2; 

yy_0_8 = yyv_Tp; 

yy_0_9 = yyv_Mode; 

(*yyout_1) = yy_0_6; 

(*yyout_2) = yy_0_7; 

(*yyout_3) = yy_0_8; 

(*yyout_4) = yy_0_9; 


return (int )retValue_acc;
 

yyfl_57_5:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_Tp1;



 yy yy_0_2;



 yy yyv_Tp2;



 yy yy_0_3;



 yy yyv_Rval1;



 yy yy_0_4;



 yy yyv_Rval2;



 yy yy_0_5;



 yy yy_0_6;



 yy yy_0_7;



 yy yy_0_8;



 yy yy_0_9;



 yy yy_1_1;



 yy yyv_Descr1;



 yy yy_1_2;



 yy yy_2_1;



 yy yyv_Descr2;



 yy yy_2_2;



 yy yy_3_1;



 yy yy_4_1;



 yy yy_5_1;



 yy yy_5_2;



 yy yy_5_3;



 yy yy_5_4;



 yy yyv_RvalC1;



 yy yy_5_5;



 yy yyv_RvalC2;



 yy yy_5_6;



 yy yyv_Tp;



 yy yy_5_7;



 yy yyv_Mode;



 yy yy_5_8;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yy_0_4 = yyin_4; 

yy_0_5 = yyin_5; 

if (yy_0_1[0] != 21){
goto yyfl_57_6; }

yyv_Tp1 = yy_0_2; 

yyv_Tp2 = yy_0_3; 

yyv_Rval1 = yy_0_4; 

yyv_Rval2 = yy_0_5; 

yy_1_1 = yyv_Tp1; 

get_tp_descr(yy_1_1, (&yy_1_2)); 

yyv_Descr1 = yy_1_2; 

yy_2_1 = yyv_Tp2; 

get_tp_descr(yy_2_1, (&yy_2_2)); 

yyv_Descr2 = yy_2_2; 

yy_3_1 = yyv_Descr1; 

if ((!is_integral(yy_3_1))){
goto yyfl_57_6; }

yy_4_1 = yyv_Descr2; 

if ((!is_integral(yy_4_1))){
goto yyfl_57_6; }

yy_5_1 = yyv_Descr1; 

yy_5_2 = yyv_Descr2; 

yy_5_3 = yyv_Rval1; 

yy_5_4 = yyv_Rval2; 

perform_arithmetic_conversions(yy_5_1, yy_5_2, yy_5_3, yy_5_4, (&yy_5_5), (&yy_5_6), (&yy_5_7), (&yy_5_8)); 

yyv_RvalC1 = yy_5_5; 

yyv_RvalC2 = yy_5_6; 

yyv_Tp = yy_5_7; 

yyv_Mode = yy_5_8; 

yy_0_6 = yyv_RvalC1; 

yy_0_7 = yyv_RvalC2; 

yy_0_8 = yyv_Tp; 

yy_0_9 = yyv_Mode; 

(*yyout_1) = yy_0_6; 

(*yyout_2) = yy_0_7; 

(*yyout_3) = yy_0_8; 

(*yyout_4) = yy_0_9; 


return (int )retValue_acc;
 

yyfl_57_6:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_Tp1;



 yy yy_0_2;



 yy yyv_Tp2;



 yy yy_0_3;



 yy yyv_Rval1;



 yy yy_0_4;



 yy yyv_Rval2;



 yy yy_0_5;



 yy yy_0_6;



 yy yy_0_7;



 yy yy_0_8;



 yy yy_0_9;



 yy yy_1_1;



 yy yyv_Descr1;



 yy yy_1_2;



 yy yy_2_1;



 yy yyv_Descr2;



 yy yy_2_2;



 yy yy_3_1;



 yy yy_4_1;



 yy yy_5_1;



 yy yy_5_2;



 yy yy_5_3;



 yy yy_5_4;



 yy yyv_RvalC1;



 yy yy_5_5;



 yy yyv_RvalC2;



 yy yy_5_6;



 yy yyv_Tp;



 yy yy_5_7;



 yy yyv_Mode;



 yy yy_5_8;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yy_0_4 = yyin_4; 

yy_0_5 = yyin_5; 

if (yy_0_1[0] != 8){
goto yyfl_57_7; }

yyv_Tp1 = yy_0_2; 

yyv_Tp2 = yy_0_3; 

yyv_Rval1 = yy_0_4; 

yyv_Rval2 = yy_0_5; 

yy_1_1 = yyv_Tp1; 

get_tp_descr(yy_1_1, (&yy_1_2)); 

yyv_Descr1 = yy_1_2; 

yy_2_1 = yyv_Tp2; 

get_tp_descr(yy_2_1, (&yy_2_2)); 

yyv_Descr2 = yy_2_2; 

yy_3_1 = yyv_Descr1; 

if ((!test_arithmetic_type(yy_3_1))){
goto yyfl_57_7; }

yy_4_1 = yyv_Descr2; 

if ((!test_arithmetic_type(yy_4_1))){
goto yyfl_57_7; }

yy_5_1 = yyv_Descr1; 

yy_5_2 = yyv_Descr2; 

yy_5_3 = yyv_Rval1; 

yy_5_4 = yyv_Rval2; 

perform_arithmetic_conversions(yy_5_1, yy_5_2, yy_5_3, yy_5_4, (&yy_5_5), (&yy_5_6), (&yy_5_7), (&yy_5_8)); 

yyv_RvalC1 = yy_5_5; 

yyv_RvalC2 = yy_5_6; 

yyv_Tp = yy_5_7; 

yyv_Mode = yy_5_8; 

yy_0_6 = yyv_RvalC1; 

yy_0_7 = yyv_RvalC2; 

yy_0_8 = yyv_Tp; 

yy_0_9 = yyv_Mode; 

(*yyout_1) = yy_0_6; 

(*yyout_2) = yy_0_7; 

(*yyout_3) = yy_0_8; 

(*yyout_4) = yy_0_9; 


return (int )retValue_acc;
 

yyfl_57_7:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_Tp1;



 yy yy_0_2;



 yy yyv_Tp2;



 yy yy_0_3;



 yy yyv_Rval1;



 yy yy_0_4;



 yy yyv_Rval2;



 yy yy_0_5;



 yy yy_0_6;



 yy yy_0_7;



 yy yy_0_8;



 yy yy_0_9;



 yy yy_1_1;



 yy yyv_Descr1;



 yy yy_1_2;



 yy yy_2_1;



 yy yyv_Descr2;



 yy yy_2_2;



 yy yy_3_1;



 yy yy_4_1;



 yy yy_5_1;



 yy yy_5_2;



 yy yy_5_3;



 yy yy_5_4;



 yy yyv_RvalC1;



 yy yy_5_5;



 yy yyv_RvalC2;



 yy yy_5_6;



 yy yyv_Tp;



 yy yy_5_7;



 yy yyv_Mode;



 yy yy_5_8;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yy_0_4 = yyin_4; 

yy_0_5 = yyin_5; 

if (yy_0_1[0] != 9){
goto yyfl_57_8; }

yyv_Tp1 = yy_0_2; 

yyv_Tp2 = yy_0_3; 

yyv_Rval1 = yy_0_4; 

yyv_Rval2 = yy_0_5; 

yy_1_1 = yyv_Tp1; 

get_tp_descr(yy_1_1, (&yy_1_2)); 

yyv_Descr1 = yy_1_2; 

yy_2_1 = yyv_Tp2; 

get_tp_descr(yy_2_1, (&yy_2_2)); 

yyv_Descr2 = yy_2_2; 

yy_3_1 = yyv_Descr1; 

if ((!test_arithmetic_type(yy_3_1))){
goto yyfl_57_8; }

yy_4_1 = yyv_Descr2; 

if ((!test_arithmetic_type(yy_4_1))){
goto yyfl_57_8; }

yy_5_1 = yyv_Descr1; 

yy_5_2 = yyv_Descr2; 

yy_5_3 = yyv_Rval1; 

yy_5_4 = yyv_Rval2; 

perform_arithmetic_conversions(yy_5_1, yy_5_2, yy_5_3, yy_5_4, (&yy_5_5), (&yy_5_6), (&yy_5_7), (&yy_5_8)); 

yyv_RvalC1 = yy_5_5; 

yyv_RvalC2 = yy_5_6; 

yyv_Tp = yy_5_7; 

yyv_Mode = yy_5_8; 

yy_0_6 = yyv_RvalC1; 

yy_0_7 = yyv_RvalC2; 

yy_0_8 = yyv_Tp; 

yy_0_9 = yyv_Mode; 

(*yyout_1) = yy_0_6; 

(*yyout_2) = yy_0_7; 

(*yyout_3) = yy_0_8; 

(*yyout_4) = yy_0_9; 


return (int )retValue_acc;
 

yyfl_57_8:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_Tp1;



 yy yy_0_2;



 yy yyv_Tp2;



 yy yy_0_3;



 yy yyv_Rval1;



 yy yy_0_4;



 yy yyv_Rval2;



 yy yy_0_5;



 yy yy_0_6;



 yy yy_0_7;



 yy yy_0_8;



 yy yy_0_9;



 yy yy_1_1;



 yy yyv_Descr1;



 yy yy_1_2;



 yy yy_2_1;



 yy yyv_Descr2;



 yy yy_2_2;



 yy yy_3_1;



 yy yy_4_1;



 yy yy_5_1;



 yy yy_5_2;



 yy yy_5_3;



 yy yy_5_4;



 yy yyv_RvalC1;



 yy yy_5_5;



 yy yyv_RvalC2;



 yy yy_5_6;



 yy yyv_Tp;



 yy yy_5_7;



 yy yyv_Mode;



 yy yy_5_8;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yy_0_4 = yyin_4; 

yy_0_5 = yyin_5; 

if (yy_0_1[0] != 10){
goto yyfl_57_9; }

yyv_Tp1 = yy_0_2; 

yyv_Tp2 = yy_0_3; 

yyv_Rval1 = yy_0_4; 

yyv_Rval2 = yy_0_5; 

yy_1_1 = yyv_Tp1; 

get_tp_descr(yy_1_1, (&yy_1_2)); 

yyv_Descr1 = yy_1_2; 

yy_2_1 = yyv_Tp2; 

get_tp_descr(yy_2_1, (&yy_2_2)); 

yyv_Descr2 = yy_2_2; 

yy_3_1 = yyv_Descr1; 

if ((!is_integral(yy_3_1))){
goto yyfl_57_9; }

yy_4_1 = yyv_Descr2; 

if ((!is_integral(yy_4_1))){
goto yyfl_57_9; }

yy_5_1 = yyv_Descr1; 

yy_5_2 = yyv_Descr2; 

yy_5_3 = yyv_Rval1; 

yy_5_4 = yyv_Rval2; 

perform_arithmetic_conversions(yy_5_1, yy_5_2, yy_5_3, yy_5_4, (&yy_5_5), (&yy_5_6), (&yy_5_7), (&yy_5_8)); 

yyv_RvalC1 = yy_5_5; 

yyv_RvalC2 = yy_5_6; 

yyv_Tp = yy_5_7; 

yyv_Mode = yy_5_8; 

yy_0_6 = yyv_RvalC1; 

yy_0_7 = yyv_RvalC2; 

yy_0_8 = yyv_Tp; 

yy_0_9 = yyv_Mode; 

(*yyout_1) = yy_0_6; 

(*yyout_2) = yy_0_7; 

(*yyout_3) = yy_0_8; 

(*yyout_4) = yy_0_9; 


return (int )retValue_acc;
 

yyfl_57_9:  ; } 

{ 



 yy yyb;



 yy yyv_Op;



 yy yy_0_1;



 yy yyv_Tp1;



 yy yy_0_2;



 yy yyv_Tp2;



 yy yy_0_3;



 yy yyv_Res1;



 yy yy_0_4;



 yy yyv_Res2;



 yy yy_0_5;



 yy yy_0_6;



 yy yy_0_7;



 yy yy_0_8;



 yy yy_0_9;



 yy yy_1_1;



 yy yy_2_1;



 yy yyv_Descr1;



 yy yy_2_2;



 yy yy_3_1;



 yy yyv_Descr2;



 yy yy_3_2;



 yy yy_4_1;



 yy yy_5_1;



 yy yy_6_1;



 yy yy_6_2;



 yy yy_6_3;



 yy yy_6_4;



 yy yyv_ResC1;



 yy yy_6_5;



 yy yyv_ResC2;



 yy yy_6_6;



 yy yyv_Tp;



 yy yy_6_7;



 yy yyv_Mode;



 yy yy_6_8;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yy_0_4 = yyin_4; 

yy_0_5 = yyin_5; 

yyv_Op = yy_0_1; 

yyv_Tp1 = yy_0_2; 

yyv_Tp2 = yy_0_3; 

yyv_Res1 = yy_0_4; 

yyv_Res2 = yy_0_5; 

yy_1_1 = yyv_Op; 

if ((!is_equality_op(yy_1_1))){
goto yyfl_57_10; }

yy_2_1 = yyv_Tp1; 

get_tp_descr(yy_2_1, (&yy_2_2)); 

yyv_Descr1 = yy_2_2; 

yy_3_1 = yyv_Tp2; 

get_tp_descr(yy_3_1, (&yy_3_2)); 

yyv_Descr2 = yy_3_2; 

yy_4_1 = yyv_Descr1; 

if ((!test_arithmetic_type(yy_4_1))){
goto yyfl_57_10; }

yy_5_1 = yyv_Descr2; 

if ((!test_arithmetic_type(yy_5_1))){
goto yyfl_57_10; }

yy_6_1 = yyv_Descr1; 

yy_6_2 = yyv_Descr2; 

yy_6_3 = yyv_Res1; 

yy_6_4 = yyv_Res2; 

perform_arithmetic_conversions(yy_6_1, yy_6_2, yy_6_3, yy_6_4, (&yy_6_5), (&yy_6_6), (&yy_6_7), (&yy_6_8)); 

yyv_ResC1 = yy_6_5; 

yyv_ResC2 = yy_6_6; 

yyv_Tp = yy_6_7; 

yyv_Mode = yy_6_8; 

yy_0_6 = yyv_ResC1; 

yy_0_7 = yyv_ResC2; 

yy_0_8 = yyv_Tp; 

yy_0_9 = yyv_Mode; 

(*yyout_1) = yy_0_6; 

(*yyout_2) = yy_0_7; 

(*yyout_3) = yy_0_8; 

(*yyout_4) = yy_0_9; 


return (int )retValue_acc;
 

yyfl_57_10:  ; } 

{ 



 yy yyb;



 yy yyv_Op;



 yy yy_0_1;



 yy yyv_Tp1;



 yy yy_0_2;



 yy yyv_Tp2;



 yy yy_0_3;



 yy yyv_Res1;



 yy yy_0_4;



 yy yyv_Res2;



 yy yy_0_5;



 yy yy_0_6;



 yy yy_0_7;



 yy yy_0_8;



 yy yy_0_9;



 yy yy_1_1;



 yy yy_2_1;



 yy yyv_Descr1;



 yy yy_2_2;



 yy yy_3_1;



 yy yyv_Descr2;



 yy yy_3_2;



 yy yy_4_1;



 yy yy_4_2;



 yy yy_4_3;



 yy yy_4_4;



 yy yy_4_5;



 yy yy_4_6;



 yy yyv_ResC1;



 yy yy_4_7;



 yy yyv_ResC2;



 yy yy_4_8;



 yy yyv_Tp;



 yy yy_4_9;



 yy yyv_Mode;



 yy yy_4_10;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yy_0_4 = yyin_4; 

yy_0_5 = yyin_5; 

yyv_Op = yy_0_1; 

yyv_Tp1 = yy_0_2; 

yyv_Tp2 = yy_0_3; 

yyv_Res1 = yy_0_4; 

yyv_Res2 = yy_0_5; 

yy_1_1 = yyv_Op; 

if ((!is_equality_op(yy_1_1))){
goto yyfl_57_11; }

yy_2_1 = yyv_Tp1; 

get_tp_descr(yy_2_1, (&yy_2_2)); 

yyv_Descr1 = yy_2_2; 

yy_3_1 = yyv_Tp2; 

get_tp_descr(yy_3_1, (&yy_3_2)); 

yyv_Descr2 = yy_3_2; 

yy_4_1 = yyv_Tp1; 

yy_4_2 = yyv_Descr1; 

yy_4_3 = yyv_Res1; 

yy_4_4 = yyv_Tp2; 

yy_4_5 = yyv_Descr2; 

yy_4_6 = yyv_Res2; 

equality_pointer_params(yy_4_1, yy_4_2, yy_4_3, yy_4_4, yy_4_5, yy_4_6, (&yy_4_7), (&yy_4_8), (&yy_4_9), (&yy_4_10)); 

yyv_ResC1 = yy_4_7; 

yyv_ResC2 = yy_4_8; 

yyv_Tp = yy_4_9; 

yyv_Mode = yy_4_10; 

yy_0_6 = yyv_ResC1; 

yy_0_7 = yyv_ResC2; 

yy_0_8 = yyv_Tp; 

yy_0_9 = yyv_Mode; 

(*yyout_1) = yy_0_6; 

(*yyout_2) = yy_0_7; 

(*yyout_3) = yy_0_8; 

(*yyout_4) = yy_0_9; 


return (int )retValue_acc;
 

yyfl_57_11:  ; } 

{ 



 yy yyb;



 yy yyv_Op;



 yy yy_0_1;



 yy yyv_Tp1;



 yy yy_0_2;



 yy yyv_Tp2;



 yy yy_0_3;



 yy yyv_Res1;



 yy yy_0_4;



 yy yyv_Res2;



 yy yy_0_5;



 yy yy_0_6;



 yy yy_0_7;



 yy yy_0_8;



 yy yy_0_9;



 yy yy_1_1;



 yy yy_2_1;



 yy yyv_Descr1;



 yy yy_2_2;



 yy yy_3_1;



 yy yyv_Descr2;



 yy yy_3_2;



 yy yy_4_1;



 yy yy_5_1;



 yy yy_6_1;



 yy yy_6_2;



 yy yy_6_3;



 yy yy_6_4;



 yy yyv_ResC1;



 yy yy_6_5;



 yy yyv_ResC2;



 yy yy_6_6;



 yy yyv_Tp3;



 yy yy_6_7;



 yy yyv_M1;



 yy yy_6_8;



 yy yyv_Tp;



 yy yy_7_1;



 yy yyv_Mode;



 yy yy_7_2;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yy_0_4 = yyin_4; 

yy_0_5 = yyin_5; 

yyv_Op = yy_0_1; 

yyv_Tp1 = yy_0_2; 

yyv_Tp2 = yy_0_3; 

yyv_Res1 = yy_0_4; 

yyv_Res2 = yy_0_5; 

yy_1_1 = yyv_Op; 

if ((!is_relational_op(yy_1_1))){
goto yyfl_57_12; }

yy_2_1 = yyv_Tp1; 

get_tp_descr(yy_2_1, (&yy_2_2)); 

yyv_Descr1 = yy_2_2; 

yy_3_1 = yyv_Tp2; 

get_tp_descr(yy_3_1, (&yy_3_2)); 

yyv_Descr2 = yy_3_2; 

yy_4_1 = yyv_Descr1; 

if ((!test_arithmetic_type(yy_4_1))){
goto yyfl_57_12; }

yy_5_1 = yyv_Descr2; 

if ((!test_arithmetic_type(yy_5_1))){
goto yyfl_57_12; }

yy_6_1 = yyv_Descr1; 

yy_6_2 = yyv_Descr2; 

yy_6_3 = yyv_Res1; 

yy_6_4 = yyv_Res2; 

perform_arithmetic_conversions(yy_6_1, yy_6_2, yy_6_3, yy_6_4, (&yy_6_5), (&yy_6_6), (&yy_6_7), (&yy_6_8)); 

yyv_ResC1 = yy_6_5; 

yyv_ResC2 = yy_6_6; 

yyv_Tp3 = yy_6_7; 

yyv_M1 = yy_6_8; 

make_tp_signed_int_and_mode((&yy_7_1), (&yy_7_2)); 

yyv_Tp = yy_7_1; 

yyv_Mode = yy_7_2; 

yy_0_6 = yyv_ResC1; 

yy_0_7 = yyv_ResC2; 

yy_0_8 = yyv_Tp; 

yy_0_9 = yyv_Mode; 

(*yyout_1) = yy_0_6; 

(*yyout_2) = yy_0_7; 

(*yyout_3) = yy_0_8; 

(*yyout_4) = yy_0_9; 


return (int )retValue_acc;
 

yyfl_57_12:  ; } 

{ 



 yy yyb;



 yy yyv_Op;



 yy yy_0_1;



 yy yyv_Tp1;



 yy yy_0_2;



 yy yyv_Tp2;



 yy yy_0_3;



 yy yyv_Res1;



 yy yy_0_4;



 yy yyv_Res2;



 yy yy_0_5;



 yy yy_0_6;



 yy yy_0_7;



 yy yy_0_8;



 yy yy_0_9;



 yy yy_1_1;



 yy yy_2_1;



 yy yyv_Descr1;



 yy yy_2_2;



 yy yy_3_1;



 yy yyv_Descr2;



 yy yy_3_2;



 yy yy_4_1;



 yy yy_5_1;



 yy yy_6_1;



 yy yy_6_2;



 yy yyv_Tp;



 yy yy_7_1;



 yy yyv_Mode;



 yy yy_7_2;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yy_0_4 = yyin_4; 

yy_0_5 = yyin_5; 

yyv_Op = yy_0_1; 

yyv_Tp1 = yy_0_2; 

yyv_Tp2 = yy_0_3; 

yyv_Res1 = yy_0_4; 

yyv_Res2 = yy_0_5; 

yy_1_1 = yyv_Op; 

if ((!is_relational_op(yy_1_1))){
goto yyfl_57_13; }

yy_2_1 = yyv_Tp1; 

get_tp_descr(yy_2_1, (&yy_2_2)); 

yyv_Descr1 = yy_2_2; 

yy_3_1 = yyv_Tp2; 

get_tp_descr(yy_3_1, (&yy_3_2)); 

yyv_Descr2 = yy_3_2; 

yy_4_1 = yyv_Descr1; 

if ((!test_pointer_to_object(yy_4_1))){
goto yyfl_57_13; }

yy_5_1 = yyv_Descr2; 

if ((!test_pointer_to_object(yy_5_1))){
goto yyfl_57_13; }

yy_6_1 = yyv_Descr1; 

yy_6_2 = yyv_Descr2; 

if ((!test_equal_pointer_types(yy_6_1, yy_6_2))){
goto yyfl_57_13; }

make_tp_signed_int_and_mode((&yy_7_1), (&yy_7_2)); 

yyv_Tp = yy_7_1; 

yyv_Mode = yy_7_2; 

yy_0_6 = yyv_Res1; 

yy_0_7 = yyv_Res2; 

yy_0_8 = yyv_Tp; 

yy_0_9 = yyv_Mode; 

(*yyout_1) = yy_0_6; 

(*yyout_2) = yy_0_7; 

(*yyout_3) = yy_0_8; 

(*yyout_4) = yy_0_9; 


return (int )retValue_acc;
 

yyfl_57_13:  ; } 

{ 



 yy yyb;



 yy yyv_Op;



 yy yy_0_1;



 yy yyv_Tp1;



 yy yy_0_2;



 yy yyv_Tp2;



 yy yy_0_3;



 yy yyv_IR1;



 yy yy_0_4;



 yy yyv_IR2;



 yy yy_0_5;



 yy yy_0_6;



 yy yy_0_7;



 yy yy_0_8;



 yy yy_0_9;



 yy yy_1_1;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yy_0_4 = yyin_4; 

yy_0_5 = yyin_5; 

yyv_Op = yy_0_1; 

yyv_Tp1 = yy_0_2; 

yyv_Tp2 = yy_0_3; 

yyv_IR1 = yy_0_4; 

yyv_IR2 = yy_0_5; 

yyb = yyh; 

yyh += 1; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = ((( yy )"params not defined")); 

compiler_error(yy_1_1); 

yy_0_6 = yyv_IR1; 

yy_0_7 = yyv_IR2; 

yy_0_8 = yyv_Tp1; 

yy_0_9 = yyb + 0; 

yy_0_9[0] = 11; 

(*yyout_1) = yy_0_6; 

(*yyout_2) = yy_0_7; 

(*yyout_3) = yy_0_8; 

(*yyout_4) = yy_0_9; 


return (int )retValue_acc;
 

yyfl_57_14:  ; } 

yyErr(2, 1326); 

}

return (int )retValue_acc;


}
 

cast_param(yyin_1,yyin_2,yyin_3,yyout_1) 

 yy yyin_1; 

 yy yyin_2; 

 yy yyin_3; 

 yy *yyout_1;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yyv_Tp1;



 yy yy_0_1;



 yy yyv_Tp2;



 yy yy_0_2;



 yy yyv_Res;



 yy yy_0_3;



 yy yy_0_4;



 yy yy_1_1;



 yy yyv_Descr1;



 yy yy_1_2;



 yy yy_2_1;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yyv_Tp1 = yy_0_1; 

yyv_Tp2 = yy_0_2; 

yyv_Res = yy_0_3; 

yy_1_1 = yyv_Tp1; 

get_tp_descr(yy_1_1, (&yy_1_2)); 

yyv_Descr1 = yy_1_2; 

yy_2_1 = yyv_Descr1; 

if ((!test_void(yy_2_1))){
goto yyfl_58_1; }

yy_0_4 = yyv_Res; 

(*yyout_1) = yy_0_4; 


return (int )retValue_acc;
 

yyfl_58_1:  ; } 

{ 



 yy yyb;



 yy yyv_Tp1;



 yy yy_0_1;



 yy yyv_Tp2;



 yy yy_0_2;



 yy yyv_Res;



 yy yy_0_3;



 yy yy_0_4;



 yy yy_1_1;



 yy yyv_Descr1;



 yy yy_1_2;



 yy yy_2_1;



 yy yyv_Descr2;



 yy yy_2_2;



 yy yy_3_1;



 yy yy_4_1;



 yy yy_5_1;



 yy yyv_Mode1;



 yy yy_5_2;



 yy yy_6_1;



 yy yyv_Mode2;



 yy yy_6_2;



 yy yy_7_1;



 yy yy_7_2;



 yy yy_7_3;



 yy yyv_ResC;



 yy yy_7_4;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yyv_Tp1 = yy_0_1; 

yyv_Tp2 = yy_0_2; 

yyv_Res = yy_0_3; 

yy_1_1 = yyv_Tp1; 

get_tp_descr(yy_1_1, (&yy_1_2)); 

yyv_Descr1 = yy_1_2; 

yy_2_1 = yyv_Tp2; 

get_tp_descr(yy_2_1, (&yy_2_2)); 

yyv_Descr2 = yy_2_2; 

yy_3_1 = yyv_Descr1; 

if ((!test_scalar_type(yy_3_1))){
goto yyfl_58_2; }

yy_4_1 = yyv_Descr2; 

if ((!test_scalar_type(yy_4_1))){
goto yyfl_58_2; }

yy_5_1 = yyv_Descr1; 

td_map_to_mode(yy_5_1, (&yy_5_2)); 

yyv_Mode1 = yy_5_2; 

yy_6_1 = yyv_Descr2; 

td_map_to_mode(yy_6_1, (&yy_6_2)); 

yyv_Mode2 = yy_6_2; 

yy_7_1 = yyv_Mode2; 

yy_7_2 = yyv_Mode1; 

yy_7_3 = yyv_Res; 

convert_if_necessary(yy_7_1, yy_7_2, yy_7_3, (&yy_7_4)); 

yyv_ResC = yy_7_4; 

yy_0_4 = yyv_ResC; 

(*yyout_1) = yy_0_4; 


return (int )retValue_acc;
 

yyfl_58_2:  ; } 

{ 



 yy yyb;



 yy yyv_Tp1;



 yy yy_0_1;



 yy yyv_Tp2;



 yy yy_0_2;



 yy yyv_Res;



 yy yy_0_3;



 yy yy_0_4;



 yy yy_1_1;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yyv_Tp1 = yy_0_1; 

yyv_Tp2 = yy_0_2; 

yyv_Res = yy_0_3; 

yy_1_1 = ((( yy )"illegal types in cast")); 

semantic_error(yy_1_1); 

yy_0_4 = yyv_Res; 

(*yyout_1) = yy_0_4; 


return (int )retValue_acc;
 

yyfl_58_3:  ; } 

yyErr(2, 1454); 

}

return (int )retValue_acc;


}
 

perform_arithmetic_conversions(yyin_1,yyin_2,yyin_3,yyin_4,yyout_1,yyout_2,yyout_3,yyout_4) 

 yy yyin_1; 

 yy yyin_2; 

 yy yyin_3; 

 yy yyin_4; 

 yy *yyout_1; 

 yy *yyout_2; 

 yy *yyout_3; 

 yy *yyout_4;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_Q;



 yy yy_0_1_1;



 yy yyv_Tp;



 yy yy_0_1_2;



 yy yyv_Descr2;



 yy yy_0_2;



 yy yyv_Rval1;



 yy yy_0_3;



 yy yyv_Rval2;



 yy yy_0_4;



 yy yy_0_5;



 yy yy_0_6;



 yy yy_0_7;



 yy yy_0_8;



 yy yy_1_1;



 yy yyv_Descr1;



 yy yy_1_2;



 yy yy_2_1;



 yy yy_2_2;



 yy yy_2_3;



 yy yy_2_4;



 yy yyv_RvalC1;



 yy yy_2_5;



 yy yyv_RvalC2;



 yy yy_2_6;



 yy yyv_Tp1;



 yy yy_2_7;



 yy yyv_Mode;



 yy yy_2_8;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yy_0_4 = yyin_4; 

if (yy_0_1[0] != 12){
goto yyfl_59_1; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yyv_Q = yy_0_1_1; 

yyv_Tp = yy_0_1_2; 

yyv_Descr2 = yy_0_2; 

yyv_Rval1 = yy_0_3; 

yyv_Rval2 = yy_0_4; 

yy_1_1 = yyv_Tp; 

get_tp_descr(yy_1_1, (&yy_1_2)); 

yyv_Descr1 = yy_1_2; 

yy_2_1 = yyv_Descr1; 

yy_2_2 = yyv_Descr2; 

yy_2_3 = yyv_Rval1; 

yy_2_4 = yyv_Rval2; 

perform_arithmetic_conversions(yy_2_1, yy_2_2, yy_2_3, yy_2_4, (&yy_2_5), (&yy_2_6), (&yy_2_7), (&yy_2_8)); 

yyv_RvalC1 = yy_2_5; 

yyv_RvalC2 = yy_2_6; 

yyv_Tp1 = yy_2_7; 

yyv_Mode = yy_2_8; 

yy_0_5 = yyv_RvalC1; 

yy_0_6 = yyv_RvalC2; 

yy_0_7 = yyv_Tp1; 

yy_0_8 = yyv_Mode; 

(*yyout_1) = yy_0_5; 

(*yyout_2) = yy_0_6; 

(*yyout_3) = yy_0_7; 

(*yyout_4) = yy_0_8; 


return (int )retValue_acc;
 

yyfl_59_1:  ; } 

{ 



 yy yyb;



 yy yyv_Descr1;



 yy yy_0_1;



 yy yy_0_2;



 yy yyv_Q;



 yy yy_0_2_1;



 yy yyv_Tp;



 yy yy_0_2_2;



 yy yyv_Rval1;



 yy yy_0_3;



 yy yyv_Rval2;



 yy yy_0_4;



 yy yy_0_5;



 yy yy_0_6;



 yy yy_0_7;



 yy yy_0_8;



 yy yy_1_1;



 yy yyv_Descr2;



 yy yy_1_2;



 yy yy_2_1;



 yy yy_2_2;



 yy yy_2_3;



 yy yy_2_4;



 yy yyv_RvalC1;



 yy yy_2_5;



 yy yyv_RvalC2;



 yy yy_2_6;



 yy yyv_Tp1;



 yy yy_2_7;



 yy yyv_Mode;



 yy yy_2_8;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yy_0_4 = yyin_4; 

yyv_Descr1 = yy_0_1; 

if (yy_0_2[0] != 12){
goto yyfl_59_2; }

yy_0_2_1 = ((( yy )yy_0_2[1])); 

yy_0_2_2 = ((( yy )yy_0_2[2])); 

yyv_Q = yy_0_2_1; 

yyv_Tp = yy_0_2_2; 

yyv_Rval1 = yy_0_3; 

yyv_Rval2 = yy_0_4; 

yy_1_1 = yyv_Tp; 

get_tp_descr(yy_1_1, (&yy_1_2)); 

yyv_Descr2 = yy_1_2; 

yy_2_1 = yyv_Descr1; 

yy_2_2 = yyv_Descr2; 

yy_2_3 = yyv_Rval1; 

yy_2_4 = yyv_Rval2; 

perform_arithmetic_conversions(yy_2_1, yy_2_2, yy_2_3, yy_2_4, (&yy_2_5), (&yy_2_6), (&yy_2_7), (&yy_2_8)); 

yyv_RvalC1 = yy_2_5; 

yyv_RvalC2 = yy_2_6; 

yyv_Tp1 = yy_2_7; 

yyv_Mode = yy_2_8; 

yy_0_5 = yyv_RvalC1; 

yy_0_6 = yyv_RvalC2; 

yy_0_7 = yyv_Tp1; 

yy_0_8 = yyv_Mode; 

(*yyout_1) = yy_0_5; 

(*yyout_2) = yy_0_6; 

(*yyout_3) = yy_0_7; 

(*yyout_4) = yy_0_8; 


return (int )retValue_acc;
 

yyfl_59_2:  ; } 

{ 



 yy yyb;



 yy yyv_Descr1;



 yy yy_0_1;



 yy yy_0_2;



 yy yyv_Sign;



 yy yy_0_2_1;



 yy yy_0_2_2;



 yy yy_0_2_3;



 yy yyv_Rval1;



 yy yy_0_3;



 yy yyv_Rval2;



 yy yy_0_4;



 yy yy_0_5;



 yy yy_0_6;



 yy yy_0_7;



 yy yy_0_8;



 yy yy_1_1;



 yy yyv_M1;



 yy yy_1_2;



 yy yy_2_1;



 yy yy_2_1_1;



 yy yy_2_1_2;



 yy yy_2_1_3;



 yy yyv_Tp;



 yy yy_2_2;



 yy yyv_M2;



 yy yy_2_3;



 yy yy_3_1;



 yy yy_3_2;



 yy yy_3_3;



 yy yyv_RvalC;



 yy yy_3_4;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yy_0_4 = yyin_4; 

yyv_Descr1 = yy_0_1; 

if (yy_0_2[0] != 13){
goto yyfl_59_3; }

yy_0_2_1 = ((( yy )yy_0_2[1])); 

yy_0_2_2 = ((( yy )yy_0_2[2])); 

yy_0_2_3 = ((( yy )yy_0_2[3])); 

yyv_Sign = yy_0_2_1; 

if (yy_0_2_2[0] != 3){
goto yyfl_59_3; }

if (yy_0_2_3[0] != 5){
goto yyfl_59_3; }

yyv_Rval1 = yy_0_3; 

yyv_Rval2 = yy_0_4; 

yyb = yyh; 

yyh += 6; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_Descr1; 

td_map_to_mode(yy_1_1, (&yy_1_2)); 

yyv_M1 = yy_1_2; 

yy_2_1_1 = yyv_Sign; 

yy_2_1_2 = yyb + 4; 

yy_2_1_2[0] = 3; 

yy_2_1_3 = yyb + 5; 

yy_2_1_3[0] = 5; 

yy_2_1 = yyb + 0; 

yy_2_1[0] = 13; 

yy_2_1[1] = (((long )yy_2_1_1)); 

yy_2_1[2] = (((long )yy_2_1_2)); 

yy_2_1[3] = (((long )yy_2_1_3)); 

make_type_and_size_and_mode(yy_2_1, (&yy_2_2), (&yy_2_3)); 

yyv_Tp = yy_2_2; 

yyv_M2 = yy_2_3; 

yy_3_1 = yyv_M1; 

yy_3_2 = yyv_M2; 

yy_3_3 = yyv_Rval1; 

convert_if_necessary(yy_3_1, yy_3_2, yy_3_3, (&yy_3_4)); 

yyv_RvalC = yy_3_4; 

yy_0_5 = yyv_RvalC; 

yy_0_6 = yyv_Rval2; 

yy_0_7 = yyv_Tp; 

yy_0_8 = yyv_M2; 

(*yyout_1) = yy_0_5; 

(*yyout_2) = yy_0_6; 

(*yyout_3) = yy_0_7; 

(*yyout_4) = yy_0_8; 


return (int )retValue_acc;
 

yyfl_59_3:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_Sign;



 yy yy_0_1_1;



 yy yy_0_1_2;



 yy yy_0_1_3;



 yy yyv_Descr2;



 yy yy_0_2;



 yy yyv_Rval1;



 yy yy_0_3;



 yy yyv_Rval2;



 yy yy_0_4;



 yy yy_0_5;



 yy yy_0_6;



 yy yy_0_7;



 yy yy_0_8;



 yy yy_1_1;



 yy yyv_M1;



 yy yy_1_2;



 yy yy_2_1;



 yy yy_2_1_1;



 yy yy_2_1_2;



 yy yy_2_1_3;



 yy yyv_Tp;



 yy yy_2_2;



 yy yyv_M2;



 yy yy_2_3;



 yy yy_3_1;



 yy yy_3_2;



 yy yy_3_3;



 yy yyv_RvalC;



 yy yy_3_4;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yy_0_4 = yyin_4; 

if (yy_0_1[0] != 13){
goto yyfl_59_4; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

yyv_Sign = yy_0_1_1; 

if (yy_0_1_2[0] != 3){
goto yyfl_59_4; }

if (yy_0_1_3[0] != 5){
goto yyfl_59_4; }

yyv_Descr2 = yy_0_2; 

yyv_Rval1 = yy_0_3; 

yyv_Rval2 = yy_0_4; 

yyb = yyh; 

yyh += 6; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_Descr2; 

td_map_to_mode(yy_1_1, (&yy_1_2)); 

yyv_M1 = yy_1_2; 

yy_2_1_1 = yyv_Sign; 

yy_2_1_2 = yyb + 4; 

yy_2_1_2[0] = 3; 

yy_2_1_3 = yyb + 5; 

yy_2_1_3[0] = 5; 

yy_2_1 = yyb + 0; 

yy_2_1[0] = 13; 

yy_2_1[1] = (((long )yy_2_1_1)); 

yy_2_1[2] = (((long )yy_2_1_2)); 

yy_2_1[3] = (((long )yy_2_1_3)); 

make_type_and_size_and_mode(yy_2_1, (&yy_2_2), (&yy_2_3)); 

yyv_Tp = yy_2_2; 

yyv_M2 = yy_2_3; 

yy_3_1 = yyv_M1; 

yy_3_2 = yyv_M2; 

yy_3_3 = yyv_Rval2; 

convert_if_necessary(yy_3_1, yy_3_2, yy_3_3, (&yy_3_4)); 

yyv_RvalC = yy_3_4; 

yy_0_5 = yyv_Rval1; 

yy_0_6 = yyv_RvalC; 

yy_0_7 = yyv_Tp; 

yy_0_8 = yyv_M2; 

(*yyout_1) = yy_0_5; 

(*yyout_2) = yy_0_6; 

(*yyout_3) = yy_0_7; 

(*yyout_4) = yy_0_8; 


return (int )retValue_acc;
 

yyfl_59_4:  ; } 

{ 



 yy yyb;



 yy yyv_Descr1;



 yy yy_0_1;



 yy yy_0_2;



 yy yyv_Sign;



 yy yy_0_2_1;



 yy yyv_Sz;



 yy yy_0_2_2;



 yy yy_0_2_3;



 yy yyv_Rval1;



 yy yy_0_3;



 yy yyv_Rval2;



 yy yy_0_4;



 yy yy_0_5;



 yy yy_0_6;



 yy yy_0_7;



 yy yy_0_8;



 yy yy_1_1;



 yy yyv_M1;



 yy yy_1_2;



 yy yy_2_1;



 yy yy_2_1_1;



 yy yy_2_1_2;



 yy yy_2_1_3;



 yy yyv_Tp;



 yy yy_2_2;



 yy yyv_M2;



 yy yy_2_3;



 yy yy_3_1;



 yy yy_3_2;



 yy yy_3_3;



 yy yyv_RvalC;



 yy yy_3_4;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yy_0_4 = yyin_4; 

yyv_Descr1 = yy_0_1; 

if (yy_0_2[0] != 13){
goto yyfl_59_5; }

yy_0_2_1 = ((( yy )yy_0_2[1])); 

yy_0_2_2 = ((( yy )yy_0_2[2])); 

yy_0_2_3 = ((( yy )yy_0_2[3])); 

yyv_Sign = yy_0_2_1; 

yyv_Sz = yy_0_2_2; 

if (yy_0_2_3[0] != 5){
goto yyfl_59_5; }

yyv_Rval1 = yy_0_3; 

yyv_Rval2 = yy_0_4; 

yyb = yyh; 

yyh += 5; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_Descr1; 

td_map_to_mode(yy_1_1, (&yy_1_2)); 

yyv_M1 = yy_1_2; 

yy_2_1_1 = yyv_Sign; 

yy_2_1_2 = yyv_Sz; 

yy_2_1_3 = yyb + 4; 

yy_2_1_3[0] = 5; 

yy_2_1 = yyb + 0; 

yy_2_1[0] = 13; 

yy_2_1[1] = (((long )yy_2_1_1)); 

yy_2_1[2] = (((long )yy_2_1_2)); 

yy_2_1[3] = (((long )yy_2_1_3)); 

make_type_and_size_and_mode(yy_2_1, (&yy_2_2), (&yy_2_3)); 

yyv_Tp = yy_2_2; 

yyv_M2 = yy_2_3; 

yy_3_1 = yyv_M1; 

yy_3_2 = yyv_M2; 

yy_3_3 = yyv_Rval1; 

convert_if_necessary(yy_3_1, yy_3_2, yy_3_3, (&yy_3_4)); 

yyv_RvalC = yy_3_4; 

yy_0_5 = yyv_RvalC; 

yy_0_6 = yyv_Rval2; 

yy_0_7 = yyv_Tp; 

yy_0_8 = yyv_M2; 

(*yyout_1) = yy_0_5; 

(*yyout_2) = yy_0_6; 

(*yyout_3) = yy_0_7; 

(*yyout_4) = yy_0_8; 


return (int )retValue_acc;
 

yyfl_59_5:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_Sign;



 yy yy_0_1_1;



 yy yyv_Sz;



 yy yy_0_1_2;



 yy yy_0_1_3;



 yy yyv_Descr2;



 yy yy_0_2;



 yy yyv_Rval1;



 yy yy_0_3;



 yy yyv_Rval2;



 yy yy_0_4;



 yy yy_0_5;



 yy yy_0_6;



 yy yy_0_7;



 yy yy_0_8;



 yy yy_1_1;



 yy yyv_M1;



 yy yy_1_2;



 yy yy_2_1;



 yy yy_2_1_1;



 yy yy_2_1_2;



 yy yy_2_1_3;



 yy yyv_Tp;



 yy yy_2_2;



 yy yyv_M2;



 yy yy_2_3;



 yy yy_3_1;



 yy yy_3_2;



 yy yy_3_3;



 yy yyv_RvalC;



 yy yy_3_4;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yy_0_4 = yyin_4; 

if (yy_0_1[0] != 13){
goto yyfl_59_6; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

yyv_Sign = yy_0_1_1; 

yyv_Sz = yy_0_1_2; 

if (yy_0_1_3[0] != 5){
goto yyfl_59_6; }

yyv_Descr2 = yy_0_2; 

yyv_Rval1 = yy_0_3; 

yyv_Rval2 = yy_0_4; 

yyb = yyh; 

yyh += 5; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_Descr2; 

td_map_to_mode(yy_1_1, (&yy_1_2)); 

yyv_M1 = yy_1_2; 

yy_2_1_1 = yyv_Sign; 

yy_2_1_2 = yyv_Sz; 

yy_2_1_3 = yyb + 4; 

yy_2_1_3[0] = 5; 

yy_2_1 = yyb + 0; 

yy_2_1[0] = 13; 

yy_2_1[1] = (((long )yy_2_1_1)); 

yy_2_1[2] = (((long )yy_2_1_2)); 

yy_2_1[3] = (((long )yy_2_1_3)); 

make_type_and_size_and_mode(yy_2_1, (&yy_2_2), (&yy_2_3)); 

yyv_Tp = yy_2_2; 

yyv_M2 = yy_2_3; 

yy_3_1 = yyv_M1; 

yy_3_2 = yyv_M2; 

yy_3_3 = yyv_Rval2; 

convert_if_necessary(yy_3_1, yy_3_2, yy_3_3, (&yy_3_4)); 

yyv_RvalC = yy_3_4; 

yy_0_5 = yyv_Rval1; 

yy_0_6 = yyv_RvalC; 

yy_0_7 = yyv_Tp; 

yy_0_8 = yyv_M2; 

(*yyout_1) = yy_0_5; 

(*yyout_2) = yy_0_6; 

(*yyout_3) = yy_0_7; 

(*yyout_4) = yy_0_8; 


return (int )retValue_acc;
 

yyfl_59_6:  ; } 

{ 



 yy yyb;



 yy yyv_Descr1;



 yy yy_0_1;



 yy yy_0_2;



 yy yyv_Sign;



 yy yy_0_2_1;



 yy yyv_Sz;



 yy yy_0_2_2;



 yy yy_0_2_3;



 yy yyv_Rval1;



 yy yy_0_3;



 yy yyv_Rval2;



 yy yy_0_4;



 yy yy_0_5;



 yy yy_0_6;



 yy yy_0_7;



 yy yy_0_8;



 yy yy_1_1;



 yy yyv_M1;



 yy yy_1_2;



 yy yy_2_1;



 yy yy_2_1_1;



 yy yy_2_1_2;



 yy yy_2_1_3;



 yy yyv_Tp;



 yy yy_2_2;



 yy yyv_M2;



 yy yy_2_3;



 yy yy_3_1;



 yy yy_3_2;



 yy yy_3_3;



 yy yyv_RvalC;



 yy yy_3_4;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yy_0_4 = yyin_4; 

yyv_Descr1 = yy_0_1; 

if (yy_0_2[0] != 13){
goto yyfl_59_7; }

yy_0_2_1 = ((( yy )yy_0_2[1])); 

yy_0_2_2 = ((( yy )yy_0_2[2])); 

yy_0_2_3 = ((( yy )yy_0_2[3])); 

yyv_Sign = yy_0_2_1; 

yyv_Sz = yy_0_2_2; 

if (yy_0_2_3[0] != 4){
goto yyfl_59_7; }

yyv_Rval1 = yy_0_3; 

yyv_Rval2 = yy_0_4; 

yyb = yyh; 

yyh += 5; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_Descr1; 

td_map_to_mode(yy_1_1, (&yy_1_2)); 

yyv_M1 = yy_1_2; 

yy_2_1_1 = yyv_Sign; 

yy_2_1_2 = yyv_Sz; 

yy_2_1_3 = yyb + 4; 

yy_2_1_3[0] = 4; 

yy_2_1 = yyb + 0; 

yy_2_1[0] = 13; 

yy_2_1[1] = (((long )yy_2_1_1)); 

yy_2_1[2] = (((long )yy_2_1_2)); 

yy_2_1[3] = (((long )yy_2_1_3)); 

make_type_and_size_and_mode(yy_2_1, (&yy_2_2), (&yy_2_3)); 

yyv_Tp = yy_2_2; 

yyv_M2 = yy_2_3; 

yy_3_1 = yyv_M1; 

yy_3_2 = yyv_M2; 

yy_3_3 = yyv_Rval1; 

convert_if_necessary(yy_3_1, yy_3_2, yy_3_3, (&yy_3_4)); 

yyv_RvalC = yy_3_4; 

yy_0_5 = yyv_RvalC; 

yy_0_6 = yyv_Rval2; 

yy_0_7 = yyv_Tp; 

yy_0_8 = yyv_M2; 

(*yyout_1) = yy_0_5; 

(*yyout_2) = yy_0_6; 

(*yyout_3) = yy_0_7; 

(*yyout_4) = yy_0_8; 


return (int )retValue_acc;
 

yyfl_59_7:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_Sign;



 yy yy_0_1_1;



 yy yyv_Sz;



 yy yy_0_1_2;



 yy yy_0_1_3;



 yy yyv_Descr2;



 yy yy_0_2;



 yy yyv_Rval1;



 yy yy_0_3;



 yy yyv_Rval2;



 yy yy_0_4;



 yy yy_0_5;



 yy yy_0_6;



 yy yy_0_7;



 yy yy_0_8;



 yy yy_1_1;



 yy yyv_M1;



 yy yy_1_2;



 yy yy_2_1;



 yy yy_2_1_1;



 yy yy_2_1_2;



 yy yy_2_1_3;



 yy yyv_Tp;



 yy yy_2_2;



 yy yyv_M2;



 yy yy_2_3;



 yy yy_3_1;



 yy yy_3_2;



 yy yy_3_3;



 yy yyv_RvalC;



 yy yy_3_4;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yy_0_4 = yyin_4; 

if (yy_0_1[0] != 13){
goto yyfl_59_8; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

yyv_Sign = yy_0_1_1; 

yyv_Sz = yy_0_1_2; 

if (yy_0_1_3[0] != 4){
goto yyfl_59_8; }

yyv_Descr2 = yy_0_2; 

yyv_Rval1 = yy_0_3; 

yyv_Rval2 = yy_0_4; 

yyb = yyh; 

yyh += 5; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_Descr2; 

td_map_to_mode(yy_1_1, (&yy_1_2)); 

yyv_M1 = yy_1_2; 

yy_2_1_1 = yyv_Sign; 

yy_2_1_2 = yyv_Sz; 

yy_2_1_3 = yyb + 4; 

yy_2_1_3[0] = 4; 

yy_2_1 = yyb + 0; 

yy_2_1[0] = 13; 

yy_2_1[1] = (((long )yy_2_1_1)); 

yy_2_1[2] = (((long )yy_2_1_2)); 

yy_2_1[3] = (((long )yy_2_1_3)); 

make_type_and_size_and_mode(yy_2_1, (&yy_2_2), (&yy_2_3)); 

yyv_Tp = yy_2_2; 

yyv_M2 = yy_2_3; 

yy_3_1 = yyv_M1; 

yy_3_2 = yyv_M2; 

yy_3_3 = yyv_Rval2; 

convert_if_necessary(yy_3_1, yy_3_2, yy_3_3, (&yy_3_4)); 

yyv_RvalC = yy_3_4; 

yy_0_5 = yyv_Rval1; 

yy_0_6 = yyv_RvalC; 

yy_0_7 = yyv_Tp; 

yy_0_8 = yyv_M2; 

(*yyout_1) = yy_0_5; 

(*yyout_2) = yy_0_6; 

(*yyout_3) = yy_0_7; 

(*yyout_4) = yy_0_8; 


return (int )retValue_acc;
 

yyfl_59_8:  ; } 

{ 



 yy yyb;



 yy yyv_Descr1;



 yy yy_0_1;



 yy yy_0_2;



 yy yy_0_2_1;



 yy yy_0_2_2;



 yy yy_0_2_3;



 yy yyv_Rval1;



 yy yy_0_3;



 yy yyv_Rval2;



 yy yy_0_4;



 yy yy_0_5;



 yy yy_0_6;



 yy yy_0_7;



 yy yy_0_8;



 yy yy_1_1;



 yy yyv_M1;



 yy yy_1_2;



 yy yy_2_1;



 yy yy_2_1_1;



 yy yy_2_1_2;



 yy yy_2_1_3;



 yy yyv_Tp;



 yy yy_2_2;



 yy yyv_M2;



 yy yy_2_3;



 yy yy_3_1;



 yy yy_3_2;



 yy yy_3_3;



 yy yyv_RvalC;



 yy yy_3_4;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yy_0_4 = yyin_4; 

yyv_Descr1 = yy_0_1; 

if (yy_0_2[0] != 13){
goto yyfl_59_9; }

yy_0_2_1 = ((( yy )yy_0_2[1])); 

yy_0_2_2 = ((( yy )yy_0_2[2])); 

yy_0_2_3 = ((( yy )yy_0_2[3])); 

if (yy_0_2_1[0] != 3){
goto yyfl_59_9; }

if (yy_0_2_2[0] != 3){
goto yyfl_59_9; }

if (yy_0_2_3[0] != 6){
goto yyfl_59_9; }

yyv_Rval1 = yy_0_3; 

yyv_Rval2 = yy_0_4; 

yyb = yyh; 

yyh += 7; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_Descr1; 

td_map_to_mode(yy_1_1, (&yy_1_2)); 

yyv_M1 = yy_1_2; 

yy_2_1_1 = yyb + 4; 

yy_2_1_1[0] = 3; 

yy_2_1_2 = yyb + 5; 

yy_2_1_2[0] = 3; 

yy_2_1_3 = yyb + 6; 

yy_2_1_3[0] = 6; 

yy_2_1 = yyb + 0; 

yy_2_1[0] = 13; 

yy_2_1[1] = (((long )yy_2_1_1)); 

yy_2_1[2] = (((long )yy_2_1_2)); 

yy_2_1[3] = (((long )yy_2_1_3)); 

make_type_and_size_and_mode(yy_2_1, (&yy_2_2), (&yy_2_3)); 

yyv_Tp = yy_2_2; 

yyv_M2 = yy_2_3; 

yy_3_1 = yyv_M1; 

yy_3_2 = yyv_M2; 

yy_3_3 = yyv_Rval1; 

convert_if_necessary(yy_3_1, yy_3_2, yy_3_3, (&yy_3_4)); 

yyv_RvalC = yy_3_4; 

yy_0_5 = yyv_RvalC; 

yy_0_6 = yyv_Rval2; 

yy_0_7 = yyv_Tp; 

yy_0_8 = yyv_M2; 

(*yyout_1) = yy_0_5; 

(*yyout_2) = yy_0_6; 

(*yyout_3) = yy_0_7; 

(*yyout_4) = yy_0_8; 


return (int )retValue_acc;
 

yyfl_59_9:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yy_0_1_2;



 yy yy_0_1_3;



 yy yyv_Descr2;



 yy yy_0_2;



 yy yyv_Rval1;



 yy yy_0_3;



 yy yyv_Rval2;



 yy yy_0_4;



 yy yy_0_5;



 yy yy_0_6;



 yy yy_0_7;



 yy yy_0_8;



 yy yy_1_1;



 yy yyv_M1;



 yy yy_1_2;



 yy yy_2_1;



 yy yy_2_1_1;



 yy yy_2_1_2;



 yy yy_2_1_3;



 yy yyv_Tp;



 yy yy_2_2;



 yy yyv_M2;



 yy yy_2_3;



 yy yy_3_1;



 yy yy_3_2;



 yy yy_3_3;



 yy yyv_RvalC;



 yy yy_3_4;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yy_0_4 = yyin_4; 

if (yy_0_1[0] != 13){
goto yyfl_59_10; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 3){
goto yyfl_59_10; }

if (yy_0_1_2[0] != 3){
goto yyfl_59_10; }

if (yy_0_1_3[0] != 6){
goto yyfl_59_10; }

yyv_Descr2 = yy_0_2; 

yyv_Rval1 = yy_0_3; 

yyv_Rval2 = yy_0_4; 

yyb = yyh; 

yyh += 7; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_Descr2; 

td_map_to_mode(yy_1_1, (&yy_1_2)); 

yyv_M1 = yy_1_2; 

yy_2_1_1 = yyb + 4; 

yy_2_1_1[0] = 3; 

yy_2_1_2 = yyb + 5; 

yy_2_1_2[0] = 3; 

yy_2_1_3 = yyb + 6; 

yy_2_1_3[0] = 6; 

yy_2_1 = yyb + 0; 

yy_2_1[0] = 13; 

yy_2_1[1] = (((long )yy_2_1_1)); 

yy_2_1[2] = (((long )yy_2_1_2)); 

yy_2_1[3] = (((long )yy_2_1_3)); 

make_type_and_size_and_mode(yy_2_1, (&yy_2_2), (&yy_2_3)); 

yyv_Tp = yy_2_2; 

yyv_M2 = yy_2_3; 

yy_3_1 = yyv_M1; 

yy_3_2 = yyv_M2; 

yy_3_3 = yyv_Rval2; 

convert_if_necessary(yy_3_1, yy_3_2, yy_3_3, (&yy_3_4)); 

yyv_RvalC = yy_3_4; 

yy_0_5 = yyv_Rval1; 

yy_0_6 = yyv_RvalC; 

yy_0_7 = yyv_Tp; 

yy_0_8 = yyv_M2; 

(*yyout_1) = yy_0_5; 

(*yyout_2) = yy_0_6; 

(*yyout_3) = yy_0_7; 

(*yyout_4) = yy_0_8; 


return (int )retValue_acc;
 

yyfl_59_10:  ; } 

{ 



 yy yyb;



 yy yyv_Descr1;



 yy yy_0_1;



 yy yy_0_2;



 yy yyv_Sign;



 yy yy_0_2_1;



 yy yy_0_2_2;



 yy yy_0_2_3;



 yy yyv_Rval1;



 yy yy_0_3;



 yy yyv_Rval2;



 yy yy_0_4;



 yy yy_0_5;



 yy yy_0_6;



 yy yy_0_7;



 yy yy_0_8;



 yy yy_1_1;



 yy yyv_M1;



 yy yy_1_2;



 yy yy_2_1;



 yy yy_2_1_1;



 yy yy_2_1_2;



 yy yy_2_1_3;



 yy yyv_Tp;



 yy yy_2_2;



 yy yyv_M2;



 yy yy_2_3;



 yy yy_3_1;



 yy yy_3_2;



 yy yy_3_3;



 yy yyv_RvalC;



 yy yy_3_4;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yy_0_4 = yyin_4; 

yyv_Descr1 = yy_0_1; 

if (yy_0_2[0] != 13){
goto yyfl_59_11; }

yy_0_2_1 = ((( yy )yy_0_2[1])); 

yy_0_2_2 = ((( yy )yy_0_2[2])); 

yy_0_2_3 = ((( yy )yy_0_2[3])); 

yyv_Sign = yy_0_2_1; 

if (yy_0_2_2[0] != 3){
goto yyfl_59_11; }

if (yy_0_2_3[0] != 6){
goto yyfl_59_11; }

yyv_Rval1 = yy_0_3; 

yyv_Rval2 = yy_0_4; 

yyb = yyh; 

yyh += 6; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_Descr1; 

td_map_to_mode(yy_1_1, (&yy_1_2)); 

yyv_M1 = yy_1_2; 

yy_2_1_1 = yyv_Sign; 

yy_2_1_2 = yyb + 4; 

yy_2_1_2[0] = 3; 

yy_2_1_3 = yyb + 5; 

yy_2_1_3[0] = 6; 

yy_2_1 = yyb + 0; 

yy_2_1[0] = 13; 

yy_2_1[1] = (((long )yy_2_1_1)); 

yy_2_1[2] = (((long )yy_2_1_2)); 

yy_2_1[3] = (((long )yy_2_1_3)); 

make_type_and_size_and_mode(yy_2_1, (&yy_2_2), (&yy_2_3)); 

yyv_Tp = yy_2_2; 

yyv_M2 = yy_2_3; 

yy_3_1 = yyv_M1; 

yy_3_2 = yyv_M2; 

yy_3_3 = yyv_Rval1; 

convert_if_necessary(yy_3_1, yy_3_2, yy_3_3, (&yy_3_4)); 

yyv_RvalC = yy_3_4; 

yy_0_5 = yyv_RvalC; 

yy_0_6 = yyv_Rval2; 

yy_0_7 = yyv_Tp; 

yy_0_8 = yyv_M2; 

(*yyout_1) = yy_0_5; 

(*yyout_2) = yy_0_6; 

(*yyout_3) = yy_0_7; 

(*yyout_4) = yy_0_8; 


return (int )retValue_acc;
 

yyfl_59_11:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_Sign;



 yy yy_0_1_1;



 yy yy_0_1_2;



 yy yy_0_1_3;



 yy yyv_Descr2;



 yy yy_0_2;



 yy yyv_Rval1;



 yy yy_0_3;



 yy yyv_Rval2;



 yy yy_0_4;



 yy yy_0_5;



 yy yy_0_6;



 yy yy_0_7;



 yy yy_0_8;



 yy yy_1_1;



 yy yyv_M1;



 yy yy_1_2;



 yy yy_2_1;



 yy yy_2_1_1;



 yy yy_2_1_2;



 yy yy_2_1_3;



 yy yyv_Tp;



 yy yy_2_2;



 yy yyv_M2;



 yy yy_2_3;



 yy yy_3_1;



 yy yy_3_2;



 yy yy_3_3;



 yy yyv_RvalC;



 yy yy_3_4;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yy_0_4 = yyin_4; 

if (yy_0_1[0] != 13){
goto yyfl_59_12; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

yyv_Sign = yy_0_1_1; 

if (yy_0_1_2[0] != 3){
goto yyfl_59_12; }

if (yy_0_1_3[0] != 6){
goto yyfl_59_12; }

yyv_Descr2 = yy_0_2; 

yyv_Rval1 = yy_0_3; 

yyv_Rval2 = yy_0_4; 

yyb = yyh; 

yyh += 6; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_Descr2; 

td_map_to_mode(yy_1_1, (&yy_1_2)); 

yyv_M1 = yy_1_2; 

yy_2_1_1 = yyv_Sign; 

yy_2_1_2 = yyb + 4; 

yy_2_1_2[0] = 3; 

yy_2_1_3 = yyb + 5; 

yy_2_1_3[0] = 6; 

yy_2_1 = yyb + 0; 

yy_2_1[0] = 13; 

yy_2_1[1] = (((long )yy_2_1_1)); 

yy_2_1[2] = (((long )yy_2_1_2)); 

yy_2_1[3] = (((long )yy_2_1_3)); 

make_type_and_size_and_mode(yy_2_1, (&yy_2_2), (&yy_2_3)); 

yyv_Tp = yy_2_2; 

yyv_M2 = yy_2_3; 

yy_3_1 = yyv_M1; 

yy_3_2 = yyv_M2; 

yy_3_3 = yyv_Rval2; 

convert_if_necessary(yy_3_1, yy_3_2, yy_3_3, (&yy_3_4)); 

yyv_RvalC = yy_3_4; 

yy_0_5 = yyv_Rval1; 

yy_0_6 = yyv_RvalC; 

yy_0_7 = yyv_Tp; 

yy_0_8 = yyv_M2; 

(*yyout_1) = yy_0_5; 

(*yyout_2) = yy_0_6; 

(*yyout_3) = yy_0_7; 

(*yyout_4) = yy_0_8; 


return (int )retValue_acc;
 

yyfl_59_12:  ; } 

{ 



 yy yyb;



 yy yyv_Descr1;



 yy yy_0_1;



 yy yy_0_2;



 yy yyv_Sign;



 yy yy_0_2_1;



 yy yy_0_2_2;



 yy yy_0_2_3;



 yy yyv_Rval1;



 yy yy_0_3;



 yy yyv_Rval2;



 yy yy_0_4;



 yy yy_0_5;



 yy yy_0_6;



 yy yy_0_7;



 yy yy_0_8;



 yy yy_1_1;



 yy yyv_M1;



 yy yy_1_2;



 yy yy_2_1;



 yy yy_2_1_1;



 yy yy_2_1_2;



 yy yy_2_1_3;



 yy yyv_Tp;



 yy yy_2_2;



 yy yyv_M2;



 yy yy_2_3;



 yy yy_3_1;



 yy yy_3_2;



 yy yy_3_3;



 yy yyv_RvalC;



 yy yy_3_4;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yy_0_4 = yyin_4; 

yyv_Descr1 = yy_0_1; 

if (yy_0_2[0] != 13){
goto yyfl_59_13; }

yy_0_2_1 = ((( yy )yy_0_2[1])); 

yy_0_2_2 = ((( yy )yy_0_2[2])); 

yy_0_2_3 = ((( yy )yy_0_2[3])); 

yyv_Sign = yy_0_2_1; 

if (yy_0_2_2[0] != 3){
goto yyfl_59_13; }

if (yy_0_2_3[0] != 6){
goto yyfl_59_13; }

yyv_Rval1 = yy_0_3; 

yyv_Rval2 = yy_0_4; 

yyb = yyh; 

yyh += 6; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_Descr1; 

td_map_to_mode(yy_1_1, (&yy_1_2)); 

yyv_M1 = yy_1_2; 

yy_2_1_1 = yyv_Sign; 

yy_2_1_2 = yyb + 4; 

yy_2_1_2[0] = 3; 

yy_2_1_3 = yyb + 5; 

yy_2_1_3[0] = 6; 

yy_2_1 = yyb + 0; 

yy_2_1[0] = 13; 

yy_2_1[1] = (((long )yy_2_1_1)); 

yy_2_1[2] = (((long )yy_2_1_2)); 

yy_2_1[3] = (((long )yy_2_1_3)); 

make_type_and_size_and_mode(yy_2_1, (&yy_2_2), (&yy_2_3)); 

yyv_Tp = yy_2_2; 

yyv_M2 = yy_2_3; 

yy_3_1 = yyv_M1; 

yy_3_2 = yyv_M2; 

yy_3_3 = yyv_Rval1; 

convert_if_necessary(yy_3_1, yy_3_2, yy_3_3, (&yy_3_4)); 

yyv_RvalC = yy_3_4; 

yy_0_5 = yyv_RvalC; 

yy_0_6 = yyv_Rval2; 

yy_0_7 = yyv_Tp; 

yy_0_8 = yyv_M2; 

(*yyout_1) = yy_0_5; 

(*yyout_2) = yy_0_6; 

(*yyout_3) = yy_0_7; 

(*yyout_4) = yy_0_8; 


return (int )retValue_acc;
 

yyfl_59_13:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_Sign;



 yy yy_0_1_1;



 yy yy_0_1_2;



 yy yy_0_1_3;



 yy yyv_Descr2;



 yy yy_0_2;



 yy yyv_Rval1;



 yy yy_0_3;



 yy yyv_Rval2;



 yy yy_0_4;



 yy yy_0_5;



 yy yy_0_6;



 yy yy_0_7;



 yy yy_0_8;



 yy yy_1_1;



 yy yyv_M1;



 yy yy_1_2;



 yy yy_2_1;



 yy yy_2_1_1;



 yy yy_2_1_2;



 yy yy_2_1_3;



 yy yyv_Tp;



 yy yy_2_2;



 yy yyv_M2;



 yy yy_2_3;



 yy yy_3_1;



 yy yy_3_2;



 yy yy_3_3;



 yy yyv_RvalC;



 yy yy_3_4;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yy_0_4 = yyin_4; 

if (yy_0_1[0] != 13){
goto yyfl_59_14; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

yyv_Sign = yy_0_1_1; 

if (yy_0_1_2[0] != 3){
goto yyfl_59_14; }

if (yy_0_1_3[0] != 6){
goto yyfl_59_14; }

yyv_Descr2 = yy_0_2; 

yyv_Rval1 = yy_0_3; 

yyv_Rval2 = yy_0_4; 

yyb = yyh; 

yyh += 6; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_Descr2; 

td_map_to_mode(yy_1_1, (&yy_1_2)); 

yyv_M1 = yy_1_2; 

yy_2_1_1 = yyv_Sign; 

yy_2_1_2 = yyb + 4; 

yy_2_1_2[0] = 3; 

yy_2_1_3 = yyb + 5; 

yy_2_1_3[0] = 6; 

yy_2_1 = yyb + 0; 

yy_2_1[0] = 13; 

yy_2_1[1] = (((long )yy_2_1_1)); 

yy_2_1[2] = (((long )yy_2_1_2)); 

yy_2_1[3] = (((long )yy_2_1_3)); 

make_type_and_size_and_mode(yy_2_1, (&yy_2_2), (&yy_2_3)); 

yyv_Tp = yy_2_2; 

yyv_M2 = yy_2_3; 

yy_3_1 = yyv_M1; 

yy_3_2 = yyv_M2; 

yy_3_3 = yyv_Rval2; 

convert_if_necessary(yy_3_1, yy_3_2, yy_3_3, (&yy_3_4)); 

yyv_RvalC = yy_3_4; 

yy_0_5 = yyv_Rval1; 

yy_0_6 = yyv_RvalC; 

yy_0_7 = yyv_Tp; 

yy_0_8 = yyv_M2; 

(*yyout_1) = yy_0_5; 

(*yyout_2) = yy_0_6; 

(*yyout_3) = yy_0_7; 

(*yyout_4) = yy_0_8; 


return (int )retValue_acc;
 

yyfl_59_14:  ; } 

{ 



 yy yyb;



 yy yyv_Descr1;



 yy yy_0_1;



 yy yyv_Descr2;



 yy yy_0_2;



 yy yyv_Rval1;



 yy yy_0_3;



 yy yyv_Rval2;



 yy yy_0_4;



 yy yy_0_5;



 yy yy_0_6;



 yy yy_0_7;



 yy yy_0_8;



 yy yy_1_1;



 yy yy_1_2;



 yy yyv_D1;



 yy yy_1_3;



 yy yyv_RC1;



 yy yy_1_4;



 yy yy_2_1;



 yy yy_2_2;



 yy yyv_D2;



 yy yy_2_3;



 yy yyv_RC2;



 yy yy_2_4;



 yy yy_3_1;



 yy yy_3_2;



 yy yy_3_3;



 yy yy_3_4;



 yy yyv_RvalC1;



 yy yy_3_5;



 yy yyv_RvalC2;



 yy yy_3_6;



 yy yyv_Tp;



 yy yy_3_7;



 yy yy_4_1;



 yy yyv_Descr;



 yy yy_4_2;



 yy yy_5_1;



 yy yyv_Mode;



 yy yy_5_2;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yy_0_4 = yyin_4; 

yyv_Descr1 = yy_0_1; 

yyv_Descr2 = yy_0_2; 

yyv_Rval1 = yy_0_3; 

yyv_Rval2 = yy_0_4; 

yy_1_1 = yyv_Descr1; 

yy_1_2 = yyv_Rval1; 

perform_integral_promotions(yy_1_1, yy_1_2, (&yy_1_3), (&yy_1_4)); 

yyv_D1 = yy_1_3; 

yyv_RC1 = yy_1_4; 

yy_2_1 = yyv_Descr2; 

yy_2_2 = yyv_Rval2; 

perform_integral_promotions(yy_2_1, yy_2_2, (&yy_2_3), (&yy_2_4)); 

yyv_D2 = yy_2_3; 

yyv_RC2 = yy_2_4; 

yy_3_1 = yyv_D1; 

yy_3_2 = yyv_D2; 

yy_3_3 = yyv_RC1; 

yy_3_4 = yyv_RC2; 

convert_to_unsigned_int_if_necessary(yy_3_1, yy_3_2, yy_3_3, yy_3_4, (&yy_3_5), (&yy_3_6), (&yy_3_7)); 

yyv_RvalC1 = yy_3_5; 

yyv_RvalC2 = yy_3_6; 

yyv_Tp = yy_3_7; 

yy_4_1 = yyv_Tp; 

get_tp_descr(yy_4_1, (&yy_4_2)); 

yyv_Descr = yy_4_2; 

yy_5_1 = yyv_Descr; 

td_map_to_mode(yy_5_1, (&yy_5_2)); 

yyv_Mode = yy_5_2; 

yy_0_5 = yyv_RvalC1; 

yy_0_6 = yyv_RvalC2; 

yy_0_7 = yyv_Tp; 

yy_0_8 = yyv_Mode; 

(*yyout_1) = yy_0_5; 

(*yyout_2) = yy_0_6; 

(*yyout_3) = yy_0_7; 

(*yyout_4) = yy_0_8; 


return (int )retValue_acc;
 

yyfl_59_15:  ; } 

{ 



 yy yyb;



 yy yyv_Descr1;



 yy yy_0_1;



 yy yyv_Descr2;



 yy yy_0_2;



 yy yyv_Rval1;



 yy yy_0_3;



 yy yyv_Rval2;



 yy yy_0_4;



 yy yy_0_5;



 yy yy_0_6;



 yy yy_0_7;



 yy yy_0_8;



 yy yy_1_1;



 yy yyv_Tp;



 yy yy_2_1;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yy_0_4 = yyin_4; 

yyv_Descr1 = yy_0_1; 

yyv_Descr2 = yy_0_2; 

yyv_Rval1 = yy_0_3; 

yyv_Rval2 = yy_0_4; 

yyb = yyh; 

yyh += 1; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = ((( yy )"perform arithmetic conversions not defined")); 

compiler_error(yy_1_1); 

make_tp((&yy_2_1)); 

yyv_Tp = yy_2_1; 

yy_0_5 = yyv_Rval1; 

yy_0_6 = yyv_Rval2; 

yy_0_7 = yyv_Tp; 

yy_0_8 = yyb + 0; 

yy_0_8[0] = 11; 

(*yyout_1) = yy_0_5; 

(*yyout_2) = yy_0_6; 

(*yyout_3) = yy_0_7; 

(*yyout_4) = yy_0_8; 


return (int )retValue_acc;
 

yyfl_59_16:  ; } 

yyErr(2, 1477); 

}

return (int )retValue_acc;


}
 

convert_to_unsigned_int_if_necessary(yyin_1,yyin_2,yyin_3,yyin_4,yyout_1,yyout_2,yyout_3) 

 yy yyin_1; 

 yy yyin_2; 

 yy yyin_3; 

 yy yyin_4; 

 yy *yyout_1; 

 yy *yyout_2; 

 yy *yyout_3;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yyv_Descr1;



 yy yy_0_1;



 yy yy_0_2;



 yy yy_0_2_1;



 yy yyv_Size;



 yy yy_0_2_2;



 yy yy_0_2_3;



 yy yyv_Rval1;



 yy yy_0_3;



 yy yyv_Rval2;



 yy yy_0_4;



 yy yy_0_5;



 yy yy_0_6;



 yy yy_0_7;



 yy yy_1_1;



 yy yyv_M1;



 yy yy_1_2;



 yy yy_2_1;



 yy yy_2_1_1;



 yy yy_2_1_2;



 yy yy_2_1_3;



 yy yyv_M2;



 yy yy_2_2;



 yy yy_3_1;



 yy yy_3_1_1;



 yy yy_3_1_2;



 yy yy_3_1_3;



 yy yyv_Tp;



 yy yy_3_2;



 yy yy_4_1;



 yy yy_4_2;



 yy yy_4_3;



 yy yyv_RvalC;



 yy yy_4_4;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yy_0_4 = yyin_4; 

yyv_Descr1 = yy_0_1; 

if (yy_0_2[0] != 13){
goto yyfl_60_1; }

yy_0_2_1 = ((( yy )yy_0_2[1])); 

yy_0_2_2 = ((( yy )yy_0_2[2])); 

yy_0_2_3 = ((( yy )yy_0_2[3])); 

if (yy_0_2_1[0] != 3){
goto yyfl_60_1; }

yyv_Size = yy_0_2_2; 

if (yy_0_2_3[0] != 6){
goto yyfl_60_1; }

yyv_Rval1 = yy_0_3; 

yyv_Rval2 = yy_0_4; 

yyb = yyh; 

yyh += 12; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_Descr1; 

td_map_to_mode(yy_1_1, (&yy_1_2)); 

yyv_M1 = yy_1_2; 

yy_2_1_1 = yyb + 4; 

yy_2_1_1[0] = 3; 

yy_2_1_2 = yyv_Size; 

yy_2_1_3 = yyb + 5; 

yy_2_1_3[0] = 6; 

yy_2_1 = yyb + 0; 

yy_2_1[0] = 13; 

yy_2_1[1] = (((long )yy_2_1_1)); 

yy_2_1[2] = (((long )yy_2_1_2)); 

yy_2_1[3] = (((long )yy_2_1_3)); 

td_map_to_mode(yy_2_1, (&yy_2_2)); 

yyv_M2 = yy_2_2; 

yy_3_1_1 = yyb + 10; 

yy_3_1_1[0] = 3; 

yy_3_1_2 = yyv_Size; 

yy_3_1_3 = yyb + 11; 

yy_3_1_3[0] = 6; 

yy_3_1 = yyb + 6; 

yy_3_1[0] = 13; 

yy_3_1[1] = (((long )yy_3_1_1)); 

yy_3_1[2] = (((long )yy_3_1_2)); 

yy_3_1[3] = (((long )yy_3_1_3)); 

make_type_and_size(yy_3_1, (&yy_3_2)); 

yyv_Tp = yy_3_2; 

yy_4_1 = yyv_M1; 

yy_4_2 = yyv_M2; 

yy_4_3 = yyv_Rval1; 

convert_if_necessary(yy_4_1, yy_4_2, yy_4_3, (&yy_4_4)); 

yyv_RvalC = yy_4_4; 

yy_0_5 = yyv_RvalC; 

yy_0_6 = yyv_Rval2; 

yy_0_7 = yyv_Tp; 

(*yyout_1) = yy_0_5; 

(*yyout_2) = yy_0_6; 

(*yyout_3) = yy_0_7; 


return (int )retValue_acc;
 

yyfl_60_1:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_Size;



 yy yy_0_1_2;



 yy yy_0_1_3;



 yy yyv_Descr2;



 yy yy_0_2;



 yy yyv_Rval1;



 yy yy_0_3;



 yy yyv_Rval2;



 yy yy_0_4;



 yy yy_0_5;



 yy yy_0_6;



 yy yy_0_7;



 yy yy_1_1;



 yy yyv_M1;



 yy yy_1_2;



 yy yy_2_1;



 yy yy_2_1_1;



 yy yy_2_1_2;



 yy yy_2_1_3;



 yy yyv_M2;



 yy yy_2_2;



 yy yy_3_1;



 yy yy_3_1_1;



 yy yy_3_1_2;



 yy yy_3_1_3;



 yy yyv_Tp;



 yy yy_3_2;



 yy yy_4_1;



 yy yy_4_2;



 yy yy_4_3;



 yy yyv_RvalC;



 yy yy_4_4;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yy_0_4 = yyin_4; 

if (yy_0_1[0] != 13){
goto yyfl_60_2; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 3){
goto yyfl_60_2; }

yyv_Size = yy_0_1_2; 

if (yy_0_1_3[0] != 6){
goto yyfl_60_2; }

yyv_Descr2 = yy_0_2; 

yyv_Rval1 = yy_0_3; 

yyv_Rval2 = yy_0_4; 

yyb = yyh; 

yyh += 12; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_Descr2; 

td_map_to_mode(yy_1_1, (&yy_1_2)); 

yyv_M1 = yy_1_2; 

yy_2_1_1 = yyb + 4; 

yy_2_1_1[0] = 3; 

yy_2_1_2 = yyv_Size; 

yy_2_1_3 = yyb + 5; 

yy_2_1_3[0] = 6; 

yy_2_1 = yyb + 0; 

yy_2_1[0] = 13; 

yy_2_1[1] = (((long )yy_2_1_1)); 

yy_2_1[2] = (((long )yy_2_1_2)); 

yy_2_1[3] = (((long )yy_2_1_3)); 

td_map_to_mode(yy_2_1, (&yy_2_2)); 

yyv_M2 = yy_2_2; 

yy_3_1_1 = yyb + 10; 

yy_3_1_1[0] = 3; 

yy_3_1_2 = yyv_Size; 

yy_3_1_3 = yyb + 11; 

yy_3_1_3[0] = 6; 

yy_3_1 = yyb + 6; 

yy_3_1[0] = 13; 

yy_3_1[1] = (((long )yy_3_1_1)); 

yy_3_1[2] = (((long )yy_3_1_2)); 

yy_3_1[3] = (((long )yy_3_1_3)); 

make_type_and_size(yy_3_1, (&yy_3_2)); 

yyv_Tp = yy_3_2; 

yy_4_1 = yyv_M1; 

yy_4_2 = yyv_M2; 

yy_4_3 = yyv_Rval2; 

convert_if_necessary(yy_4_1, yy_4_2, yy_4_3, (&yy_4_4)); 

yyv_RvalC = yy_4_4; 

yy_0_5 = yyv_Rval1; 

yy_0_6 = yyv_RvalC; 

yy_0_7 = yyv_Tp; 

(*yyout_1) = yy_0_5; 

(*yyout_2) = yy_0_6; 

(*yyout_3) = yy_0_7; 


return (int )retValue_acc;
 

yyfl_60_2:  ; } 

{ 



 yy yyb;



 yy yyv_Descr1;



 yy yy_0_1;



 yy yyv_Descr2;



 yy yy_0_2;



 yy yyv_Rval1;



 yy yy_0_3;



 yy yyv_Rval2;



 yy yy_0_4;



 yy yy_0_5;



 yy yy_0_6;



 yy yy_0_7;



 yy yy_1_1;



 yy yy_1_1_1;



 yy yy_1_1_2;



 yy yy_1_1_3;



 yy yyv_Tp;



 yy yy_1_2;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yy_0_4 = yyin_4; 

yyv_Descr1 = yy_0_1; 

yyv_Descr2 = yy_0_2; 

yyv_Rval1 = yy_0_3; 

yyv_Rval2 = yy_0_4; 

yyb = yyh; 

yyh += 7; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1_1 = yyb + 4; 

yy_1_1_1[0] = 2; 

yy_1_1_2 = yyb + 5; 

yy_1_1_2[0] = 1; 

yy_1_1_3 = yyb + 6; 

yy_1_1_3[0] = 6; 

yy_1_1 = yyb + 0; 

yy_1_1[0] = 13; 

yy_1_1[1] = (((long )yy_1_1_1)); 

yy_1_1[2] = (((long )yy_1_1_2)); 

yy_1_1[3] = (((long )yy_1_1_3)); 

make_type_and_size(yy_1_1, (&yy_1_2)); 

yyv_Tp = yy_1_2; 

yy_0_5 = yyv_Rval1; 

yy_0_6 = yyv_Rval2; 

yy_0_7 = yyv_Tp; 

(*yyout_1) = yy_0_5; 

(*yyout_2) = yy_0_6; 

(*yyout_3) = yy_0_7; 


return (int )retValue_acc;
 

yyfl_60_3:  ; } 

yyErr(2, 1580); 

}

return (int )retValue_acc;


}
 

test_pointer_type(yyin_1,yyout_1,yyout_2) 

 yy yyin_1; 

 yy *yyout_1; 

 yy *yyout_2;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yyv_Tp;



 yy yy_0_1;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_1_1;



 yy yy_1_2;



 yy yyv_Qual;



 yy yy_1_2_1;



 yy yyv_Tp1;



 yy yy_1_2_2;

yy_0_1 = yyin_1; 

yyv_Tp = yy_0_1; 

yy_1_1 = yyv_Tp; 

get_tp_descr(yy_1_1, (&yy_1_2)); 

if (yy_1_2[0] != 5){
goto yyfl_61_1; }

yy_1_2_1 = ((( yy )yy_1_2[1])); 

yy_1_2_2 = ((( yy )yy_1_2[2])); 

yyv_Qual = yy_1_2_1; 

yyv_Tp1 = yy_1_2_2; 

yy_0_2 = yyv_Qual; 

yy_0_3 = yyv_Tp1; 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_61_1:  ; } 

{ 



 yy yyb;



 yy yyv_Tp;



 yy yy_0_1;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_1_1;

yy_0_1 = yyin_1; 

yyv_Tp = yy_0_1; 

yyb = yyh; 

yyh += 1; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = ((( yy )"not a pointer type")); 

semantic_error(yy_1_1); 

yy_0_2 = yyb + 0; 

yy_0_2[0] = 4; 

yy_0_3 = yyv_Tp; 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_61_2:  ; } 

yyErr(2, 1607); 

}

return (int )retValue_acc;


}
 

compute_pointer_minus_intgral(yyin_1,yyin_2,yyin_3,yyin_4,yyin_5,yyin_6,yyout_1,yyout_2) 

 yy yyin_1; 

 yy yyin_2; 

 yy yyin_3; 

 yy yyin_4; 

 yy yyin_5; 

 yy yyin_6; 

 yy *yyout_1; 

 yy *yyout_2;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yyv_Tp1;



 yy yy_0_1;



 yy yy_0_2;



 yy yyv_Q;



 yy yy_0_2_1;



 yy yyv_Tp;



 yy yy_0_2_2;



 yy yyv_Rval1;



 yy yy_0_3;



 yy yyv_Tp2;



 yy yy_0_4;



 yy yyv_Descr2;



 yy yy_0_5;



 yy yyv_Rval2;



 yy yy_0_6;



 yy yy_0_7;



 yy yy_0_7_1;



 yy yy_0_7_2;



 yy yy_0_7_2_1;



 yy yy_0_7_2_2;



 yy yy_0_7_2_3;



 yy yy_0_8;



 yy yy_1_1;



 yy yyv_Size;



 yy yy_1_2;



 yy yy_2_1;



 yy yy_2_1_1;



 yy yy_2_1_2;



 yy yy_2_1_3;



 yy yyv_TpC;



 yy yy_2_2;



 yy yyv_M;



 yy yy_2_3;



 yy yy_3_1;



 yy yy_3_2;



 yy yy_3_3;



 yy yy_3_4;



 yy yy_3_5;



 yy yy_3_5_1;



 yy yy_3_5_2;



 yy yyv_ResC2;



 yy yy_3_6;



 yy yyv_ResConst;



 yy yy_3_7;



 yy yyv_Tp3;



 yy yy_3_8;



 yy yyv_M3;



 yy yy_3_9;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yy_0_4 = yyin_4; 

yy_0_5 = yyin_5; 

yy_0_6 = yyin_6; 

yyv_Tp1 = yy_0_1; 

if (yy_0_2[0] != 5){
goto yyfl_62_1; }

yy_0_2_1 = ((( yy )yy_0_2[1])); 

yy_0_2_2 = ((( yy )yy_0_2[2])); 

yyv_Q = yy_0_2_1; 

yyv_Tp = yy_0_2_2; 

yyv_Rval1 = yy_0_3; 

yyv_Tp2 = yy_0_4; 

yyv_Descr2 = yy_0_5; 

yyv_Rval2 = yy_0_6; 

yyb = yyh; 

yyh += 18; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_Tp; 

get_tp_size(yy_1_1, (&yy_1_2)); 

yyv_Size = yy_1_2; 

yy_2_1_1 = yyb + 11; 

yy_2_1_1[0] = 3; 

yy_2_1_2 = yyb + 12; 

yy_2_1_2[0] = 3; 

yy_2_1_3 = yyb + 13; 

yy_2_1_3[0] = 6; 

yy_2_1 = yyb + 7; 

yy_2_1[0] = 13; 

yy_2_1[1] = (((long )yy_2_1_1)); 

yy_2_1[2] = (((long )yy_2_1_2)); 

yy_2_1[3] = (((long )yy_2_1_3)); 

make_type_and_size_and_mode(yy_2_1, (&yy_2_2), (&yy_2_3)); 

yyv_TpC = yy_2_2; 

yyv_M = yy_2_3; 

yy_3_1 = yyb + 14; 

yy_3_1[0] = 8; 

yy_3_2 = yyv_Tp2; 

yy_3_3 = yyv_TpC; 

yy_3_4 = yyv_Rval2; 

yy_3_5_1 = yyv_M; 

yy_3_5_2 = yyv_Size; 

yy_3_5 = yyb + 15; 

yy_3_5[0] = 21; 

yy_3_5[1] = (((long )yy_3_5_1)); 

yy_3_5[2] = (((long )yy_3_5_2)); 

params(yy_3_1, yy_3_2, yy_3_3, yy_3_4, yy_3_5, (&yy_3_6), (&yy_3_7), (&yy_3_8), (&yy_3_9)); 

yyv_ResC2 = yy_3_6; 

yyv_ResConst = yy_3_7; 

yyv_Tp3 = yy_3_8; 

yyv_M3 = yy_3_9; 

yy_0_7_1 = yyv_Rval1; 

yy_0_7_2_1 = yyv_M3; 

yy_0_7_2_2 = yyv_ResC2; 

yy_0_7_2_3 = yyv_ResConst; 

yy_0_7_2 = yyb + 3; 

yy_0_7_2[0] = 42; 

yy_0_7_2[1] = (((long )yy_0_7_2_1)); 

yy_0_7_2[2] = (((long )yy_0_7_2_2)); 

yy_0_7_2[3] = (((long )yy_0_7_2_3)); 

yy_0_7 = yyb + 0; 

yy_0_7[0] = 13; 

yy_0_7[1] = (((long )yy_0_7_1)); 

yy_0_7[2] = (((long )yy_0_7_2)); 

yy_0_8 = yyv_Tp1; 

(*yyout_1) = yy_0_7; 

(*yyout_2) = yy_0_8; 


return (int )retValue_acc;
 

yyfl_62_1:  ; } 

yyErr(2, 1621); 

}

return (int )retValue_acc;


}
 

compute_pointer_minus_pointer(yyin_1,yyin_2,yyin_3,yyin_4,yyin_5,yyin_6,yyout_1,yyout_2) 

 yy yyin_1; 

 yy yyin_2; 

 yy yyin_3; 

 yy yyin_4; 

 yy yyin_5; 

 yy yyin_6; 

 yy *yyout_1; 

 yy *yyout_2;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yyv_Tp1;



 yy yy_0_1;



 yy yy_0_2;



 yy yyv_Q1;



 yy yy_0_2_1;



 yy yyv_Tp3;



 yy yy_0_2_2;



 yy yyv_Rval1;



 yy yy_0_3;



 yy yyv_Tp2;



 yy yy_0_4;



 yy yy_0_5;



 yy yyv_Q2;



 yy yy_0_5_1;



 yy yyv_Tp4;



 yy yy_0_5_2;



 yy yyv_Rval2;



 yy yy_0_6;



 yy yy_0_7;



 yy yy_0_7_1;



 yy yy_0_7_2;



 yy yy_0_7_3;



 yy yy_0_8;



 yy yy_1_1;



 yy yy_1_2;



 yy yy_2_1;



 yy yyv_Size;



 yy yy_2_2;



 yy yy_3_1;



 yy yy_3_1_1;



 yy yy_3_1_2;



 yy yy_3_1_3;



 yy yyv_TpC;



 yy yy_3_2;



 yy yyv_M;



 yy yy_3_3;



 yy yyv_DiffDescr;



 yy yy_4_1;



 yy yy_5_1;



 yy yyv_AMode1;



 yy yy_5_2;



 yy yy_6_1;



 yy yyv_DiffTp;



 yy yy_6_2;



 yy yy_7_1;



 yy yy_7_2;



 yy yy_7_3;



 yy yy_7_4;



 yy yy_7_4_1;



 yy yy_7_4_2;



 yy yy_7_4_3;



 yy yy_7_5;



 yy yy_7_5_1;



 yy yy_7_5_2;



 yy yyv_C1;



 yy yy_7_6;



 yy yyv_C2;



 yy yy_7_7;



 yy yyv_TpRes;



 yy yy_7_8;



 yy yyv_AMode;



 yy yy_7_9;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yy_0_4 = yyin_4; 

yy_0_5 = yyin_5; 

yy_0_6 = yyin_6; 

yyv_Tp1 = yy_0_1; 

if (yy_0_2[0] != 5){
goto yyfl_63_1; }

yy_0_2_1 = ((( yy )yy_0_2[1])); 

yy_0_2_2 = ((( yy )yy_0_2[2])); 

yyv_Q1 = yy_0_2_1; 

yyv_Tp3 = yy_0_2_2; 

yyv_Rval1 = yy_0_3; 

yyv_Tp2 = yy_0_4; 

if (yy_0_5[0] != 5){
goto yyfl_63_1; }

yy_0_5_1 = ((( yy )yy_0_5[1])); 

yy_0_5_2 = ((( yy )yy_0_5[2])); 

yyv_Q2 = yy_0_5_1; 

yyv_Tp4 = yy_0_5_2; 

yyv_Rval2 = yy_0_6; 

yyb = yyh; 

yyh += 19; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_Tp3; 

yy_1_2 = yyv_Tp4; 

if ((!test_equal_types(yy_1_1, yy_1_2))){
goto yyfl_63_1; }

yy_2_1 = yyv_Tp3; 

get_tp_size(yy_2_1, (&yy_2_2)); 

yyv_Size = yy_2_2; 

yy_3_1_1 = yyb + 8; 

yy_3_1_1[0] = 3; 

yy_3_1_2 = yyb + 9; 

yy_3_1_2[0] = 3; 

yy_3_1_3 = yyb + 10; 

yy_3_1_3[0] = 6; 

yy_3_1 = yyb + 4; 

yy_3_1[0] = 13; 

yy_3_1[1] = (((long )yy_3_1_1)); 

yy_3_1[2] = (((long )yy_3_1_2)); 

yy_3_1[3] = (((long )yy_3_1_3)); 

make_type_and_size_and_mode(yy_3_1, (&yy_3_2), (&yy_3_3)); 

yyv_TpC = yy_3_2; 

yyv_M = yy_3_3; 

get_pointer_diff_type((&yy_4_1)); 

yyv_DiffDescr = yy_4_1; 

yy_5_1 = yyv_DiffDescr; 

td_map_to_mode(yy_5_1, (&yy_5_2)); 

yyv_AMode1 = yy_5_2; 

yy_6_1 = yyv_DiffDescr; 

make_type_and_size(yy_6_1, (&yy_6_2)); 

yyv_DiffTp = yy_6_2; 

yy_7_1 = yyb + 11; 

yy_7_1[0] = 9; 

yy_7_2 = yyv_DiffTp; 

yy_7_3 = yyv_TpC; 

yy_7_4_1 = yyv_AMode1; 

yy_7_4_2 = yyv_Rval1; 

yy_7_4_3 = yyv_Rval2; 

yy_7_4 = yyb + 12; 

yy_7_4[0] = 41; 

yy_7_4[1] = (((long )yy_7_4_1)); 

yy_7_4[2] = (((long )yy_7_4_2)); 

yy_7_4[3] = (((long )yy_7_4_3)); 

yy_7_5_1 = yyv_M; 

yy_7_5_2 = yyv_Size; 

yy_7_5 = yyb + 16; 

yy_7_5[0] = 21; 

yy_7_5[1] = (((long )yy_7_5_1)); 

yy_7_5[2] = (((long )yy_7_5_2)); 

params(yy_7_1, yy_7_2, yy_7_3, yy_7_4, yy_7_5, (&yy_7_6), (&yy_7_7), (&yy_7_8), (&yy_7_9)); 

yyv_C1 = yy_7_6; 

yyv_C2 = yy_7_7; 

yyv_TpRes = yy_7_8; 

yyv_AMode = yy_7_9; 

yy_0_7_1 = yyv_AMode; 

yy_0_7_2 = yyv_C1; 

yy_0_7_3 = yyv_C2; 

yy_0_7 = yyb + 0; 

yy_0_7[0] = 43; 

yy_0_7[1] = (((long )yy_0_7_1)); 

yy_0_7[2] = (((long )yy_0_7_2)); 

yy_0_7[3] = (((long )yy_0_7_3)); 

yy_0_8 = yyv_TpRes; 

(*yyout_1) = yy_0_7; 

(*yyout_2) = yy_0_8; 


return (int )retValue_acc;
 

yyfl_63_1:  ; } 

{ 



 yy yyb;



 yy yyv_Tp;



 yy yy_0_1;



 yy yyv_D1;



 yy yy_0_2;



 yy yyv_Rval1;



 yy yy_0_3;



 yy yyv_Tp1;



 yy yy_0_4;



 yy yyv_D2;



 yy yy_0_5;



 yy yyv_Rval2;



 yy yy_0_6;



 yy yy_0_7;



 yy yy_0_8;



 yy yy_1_1;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yy_0_4 = yyin_4; 

yy_0_5 = yyin_5; 

yy_0_6 = yyin_6; 

yyv_Tp = yy_0_1; 

yyv_D1 = yy_0_2; 

yyv_Rval1 = yy_0_3; 

yyv_Tp1 = yy_0_4; 

yyv_D2 = yy_0_5; 

yyv_Rval2 = yy_0_6; 

yy_1_1 = ((( yy )"pointer types are not equal")); 

semantic_error(yy_1_1); 

yy_0_7 = yyv_Rval1; 

yy_0_8 = yyv_Tp; 

(*yyout_1) = yy_0_7; 

(*yyout_2) = yy_0_8; 


return (int )retValue_acc;
 

yyfl_63_2:  ; } 

yyErr(2, 1633); 

}

return (int )retValue_acc;


}
 

compute_pointer_plus_intgral(yyin_1,yyin_2,yyin_3,yyin_4,yyin_5,yyin_6,yyout_1,yyout_2) 

 yy yyin_1; 

 yy yyin_2; 

 yy yyin_3; 

 yy yyin_4; 

 yy yyin_5; 

 yy yyin_6; 

 yy *yyout_1; 

 yy *yyout_2;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yyv_Tp1;



 yy yy_0_1;



 yy yy_0_2;



 yy yyv_Q;



 yy yy_0_2_1;



 yy yyv_Tp;



 yy yy_0_2_2;



 yy yyv_Rval1;



 yy yy_0_3;



 yy yyv_Tp2;



 yy yy_0_4;



 yy yyv_Descr2;



 yy yy_0_5;



 yy yyv_Rval2;



 yy yy_0_6;



 yy yy_0_7;



 yy yy_0_7_1;



 yy yy_0_7_2;



 yy yy_0_7_2_1;



 yy yy_0_7_2_2;



 yy yy_0_7_2_3;



 yy yy_0_8;



 yy yy_1_1;



 yy yyv_Size;



 yy yy_1_2;



 yy yy_2_1;



 yy yy_2_1_1;



 yy yy_2_1_2;



 yy yy_2_1_3;



 yy yyv_TpC;



 yy yy_2_2;



 yy yyv_M;



 yy yy_2_3;



 yy yy_3_1;



 yy yy_3_2;



 yy yy_3_3;



 yy yy_3_4;



 yy yy_3_5;



 yy yy_3_5_1;



 yy yy_3_5_2;



 yy yyv_ResC2;



 yy yy_3_6;



 yy yyv_ResConst;



 yy yy_3_7;



 yy yyv_Tp3;



 yy yy_3_8;



 yy yyv_M3;



 yy yy_3_9;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yy_0_4 = yyin_4; 

yy_0_5 = yyin_5; 

yy_0_6 = yyin_6; 

yyv_Tp1 = yy_0_1; 

if (yy_0_2[0] != 5){
goto yyfl_64_1; }

yy_0_2_1 = ((( yy )yy_0_2[1])); 

yy_0_2_2 = ((( yy )yy_0_2[2])); 

yyv_Q = yy_0_2_1; 

yyv_Tp = yy_0_2_2; 

yyv_Rval1 = yy_0_3; 

yyv_Tp2 = yy_0_4; 

yyv_Descr2 = yy_0_5; 

yyv_Rval2 = yy_0_6; 

yyb = yyh; 

yyh += 18; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_Tp; 

get_tp_size(yy_1_1, (&yy_1_2)); 

yyv_Size = yy_1_2; 

yy_2_1_1 = yyb + 11; 

yy_2_1_1[0] = 3; 

yy_2_1_2 = yyb + 12; 

yy_2_1_2[0] = 3; 

yy_2_1_3 = yyb + 13; 

yy_2_1_3[0] = 6; 

yy_2_1 = yyb + 7; 

yy_2_1[0] = 13; 

yy_2_1[1] = (((long )yy_2_1_1)); 

yy_2_1[2] = (((long )yy_2_1_2)); 

yy_2_1[3] = (((long )yy_2_1_3)); 

make_type_and_size_and_mode(yy_2_1, (&yy_2_2), (&yy_2_3)); 

yyv_TpC = yy_2_2; 

yyv_M = yy_2_3; 

yy_3_1 = yyb + 14; 

yy_3_1[0] = 8; 

yy_3_2 = yyv_Tp2; 

yy_3_3 = yyv_TpC; 

yy_3_4 = yyv_Rval2; 

yy_3_5_1 = yyv_M; 

yy_3_5_2 = yyv_Size; 

yy_3_5 = yyb + 15; 

yy_3_5[0] = 21; 

yy_3_5[1] = (((long )yy_3_5_1)); 

yy_3_5[2] = (((long )yy_3_5_2)); 

params(yy_3_1, yy_3_2, yy_3_3, yy_3_4, yy_3_5, (&yy_3_6), (&yy_3_7), (&yy_3_8), (&yy_3_9)); 

yyv_ResC2 = yy_3_6; 

yyv_ResConst = yy_3_7; 

yyv_Tp3 = yy_3_8; 

yyv_M3 = yy_3_9; 

yy_0_7_1 = yyv_Rval1; 

yy_0_7_2_1 = yyv_M3; 

yy_0_7_2_2 = yyv_ResC2; 

yy_0_7_2_3 = yyv_ResConst; 

yy_0_7_2 = yyb + 3; 

yy_0_7_2[0] = 42; 

yy_0_7_2[1] = (((long )yy_0_7_2_1)); 

yy_0_7_2[2] = (((long )yy_0_7_2_2)); 

yy_0_7_2[3] = (((long )yy_0_7_2_3)); 

yy_0_7 = yyb + 0; 

yy_0_7[0] = 12; 

yy_0_7[1] = (((long )yy_0_7_1)); 

yy_0_7[2] = (((long )yy_0_7_2)); 

yy_0_8 = yyv_Tp1; 

(*yyout_1) = yy_0_7; 

(*yyout_2) = yy_0_8; 


return (int )retValue_acc;
 

yyfl_64_1:  ; } 

yyErr(2, 1654); 

}

return (int )retValue_acc;


}
 

test_empty_param_types(yyin_1) 

 yy yyin_1;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yy_0_1_2;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 2){
goto yyfl_65_1; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

if (yy_0_1_1[0] != 1){
goto yyfl_65_1; }

if (yy_0_1_2[0] != 1){
goto yyfl_65_1; }


return (int )retValue_acc;
 

yyfl_65_1:  ; } 

{ 



 yy yyb;



 yy yy_0_1;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 1){
goto yyfl_65_2; }


return (int )retValue_acc;
 

yyfl_65_2:  ; } 

{ 



 yy yyb;



 yy yyv_P;



 yy yy_0_1;



 yy yy_1_1;

yy_0_1 = yyin_1; 

yyv_P = yy_0_1; 

yy_1_1 = ((( yy )"number of parameters in function call and function prototype is not equal")); 

semantic_error(yy_1_1); 


return (int )retValue_acc;
 

yyfl_65_3:  ; } 

yyErr(2, 1666); 

}

return (int )retValue_acc;


}
 

test_pointer_type_and_return_subscript_code(yyin_1,yyin_2,yyin_3,yyin_4,yyin_5,yyin_6,yyout_1,yyout_2) 

 yy yyin_1; 

 yy yyin_2; 

 yy yyin_3; 

 yy yyin_4; 

 yy yyin_5; 

 yy yyin_6; 

 yy *yyout_1; 

 yy *yyout_2;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yyv_Tp1;



 yy yy_0_1;



 yy yy_0_2;



 yy yyv_Q;



 yy yy_0_2_1;



 yy yyv_Tp;



 yy yy_0_2_2;



 yy yyv_Res1;



 yy yy_0_3;



 yy yyv_Tp2;



 yy yy_0_4;



 yy yyv_D2;



 yy yy_0_5;



 yy yyv_Res2;



 yy yy_0_6;



 yy yy_0_7;



 yy yy_0_8;



 yy yy_1_1;



 yy yy_2_1;



 yy yy_2_2;



 yy yy_2_2_1;



 yy yy_2_2_2;



 yy yy_2_3;



 yy yy_2_4;



 yy yy_2_5;



 yy yy_2_6;



 yy yyv_RvalPlus;



 yy yy_2_7;



 yy yyv_Tp4;



 yy yy_2_8;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yy_0_4 = yyin_4; 

yy_0_5 = yyin_5; 

yy_0_6 = yyin_6; 

yyv_Tp1 = yy_0_1; 

if (yy_0_2[0] != 5){
goto yyfl_66_1; }

yy_0_2_1 = ((( yy )yy_0_2[1])); 

yy_0_2_2 = ((( yy )yy_0_2[2])); 

yyv_Q = yy_0_2_1; 

yyv_Tp = yy_0_2_2; 

yyv_Res1 = yy_0_3; 

yyv_Tp2 = yy_0_4; 

yyv_D2 = yy_0_5; 

yyv_Res2 = yy_0_6; 

yyb = yyh; 

yyh += 3; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_D2; 

if ((!is_integral(yy_1_1))){
goto yyfl_66_1; }

yy_2_1 = yyv_Tp1; 

yy_2_2_1 = yyv_Q; 

yy_2_2_2 = yyv_Tp; 

yy_2_2 = yyb + 0; 

yy_2_2[0] = 5; 

yy_2_2[1] = (((long )yy_2_2_1)); 

yy_2_2[2] = (((long )yy_2_2_2)); 

yy_2_3 = yyv_Res1; 

yy_2_4 = yyv_Tp2; 

yy_2_5 = yyv_D2; 

yy_2_6 = yyv_Res2; 

compute_pointer_plus_intgral(yy_2_1, yy_2_2, yy_2_3, yy_2_4, yy_2_5, yy_2_6, (&yy_2_7), (&yy_2_8)); 

yyv_RvalPlus = yy_2_7; 

yyv_Tp4 = yy_2_8; 

yy_0_7 = yyv_Tp; 

yy_0_8 = yyv_RvalPlus; 

(*yyout_1) = yy_0_7; 

(*yyout_2) = yy_0_8; 


return (int )retValue_acc;
 

yyfl_66_1:  ; } 

{ 



 yy yyb;



 yy yyv_Tp1;



 yy yy_0_1;



 yy yyv_D1;



 yy yy_0_2;



 yy yyv_Res1;



 yy yy_0_3;



 yy yyv_Tp2;



 yy yy_0_4;



 yy yy_0_5;



 yy yyv_Q;



 yy yy_0_5_1;



 yy yyv_Tp;



 yy yy_0_5_2;



 yy yyv_Res2;



 yy yy_0_6;



 yy yy_0_7;



 yy yy_0_8;



 yy yy_1_1;



 yy yy_2_1;



 yy yy_2_2;



 yy yy_2_2_1;



 yy yy_2_2_2;



 yy yy_2_3;



 yy yy_2_4;



 yy yy_2_5;



 yy yy_2_6;



 yy yyv_RvalPlus;



 yy yy_2_7;



 yy yyv_Tp4;



 yy yy_2_8;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yy_0_4 = yyin_4; 

yy_0_5 = yyin_5; 

yy_0_6 = yyin_6; 

yyv_Tp1 = yy_0_1; 

yyv_D1 = yy_0_2; 

yyv_Res1 = yy_0_3; 

yyv_Tp2 = yy_0_4; 

if (yy_0_5[0] != 5){
goto yyfl_66_2; }

yy_0_5_1 = ((( yy )yy_0_5[1])); 

yy_0_5_2 = ((( yy )yy_0_5[2])); 

yyv_Q = yy_0_5_1; 

yyv_Tp = yy_0_5_2; 

yyv_Res2 = yy_0_6; 

yyb = yyh; 

yyh += 3; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_D1; 

if ((!is_integral(yy_1_1))){
goto yyfl_66_2; }

yy_2_1 = yyv_Tp2; 

yy_2_2_1 = yyv_Q; 

yy_2_2_2 = yyv_Tp; 

yy_2_2 = yyb + 0; 

yy_2_2[0] = 5; 

yy_2_2[1] = (((long )yy_2_2_1)); 

yy_2_2[2] = (((long )yy_2_2_2)); 

yy_2_3 = yyv_Res2; 

yy_2_4 = yyv_Tp1; 

yy_2_5 = yyv_D1; 

yy_2_6 = yyv_Res1; 

compute_pointer_plus_intgral(yy_2_1, yy_2_2, yy_2_3, yy_2_4, yy_2_5, yy_2_6, (&yy_2_7), (&yy_2_8)); 

yyv_RvalPlus = yy_2_7; 

yyv_Tp4 = yy_2_8; 

yy_0_7 = yyv_Tp; 

yy_0_8 = yyv_RvalPlus; 

(*yyout_1) = yy_0_7; 

(*yyout_2) = yy_0_8; 


return (int )retValue_acc;
 

yyfl_66_2:  ; } 

{ 



 yy yyb;



 yy yyv_Tp1;



 yy yy_0_1;



 yy yyv_D1;



 yy yy_0_2;



 yy yyv_Res1;



 yy yy_0_3;



 yy yyv_Tp2;



 yy yy_0_4;



 yy yyv_D2;



 yy yy_0_5;



 yy yyv_Res2;



 yy yy_0_6;



 yy yy_0_7;



 yy yy_0_8;



 yy yy_1_1;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yy_0_4 = yyin_4; 

yy_0_5 = yyin_5; 

yy_0_6 = yyin_6; 

yyv_Tp1 = yy_0_1; 

yyv_D1 = yy_0_2; 

yyv_Res1 = yy_0_3; 

yyv_Tp2 = yy_0_4; 

yyv_D2 = yy_0_5; 

yyv_Res2 = yy_0_6; 

yy_1_1 = ((( yy )"type error in subscript")); 

semantic_error(yy_1_1); 

yy_0_7 = yyv_Tp2; 

yy_0_8 = yyv_Res1; 

(*yyout_1) = yy_0_7; 

(*yyout_2) = yy_0_8; 


return (int )retValue_acc;
 

yyfl_66_3:  ; } 

yyErr(2, 1679); 

}

return (int )retValue_acc;


}
 

convert_type2_to_type1(yyin_1,yyin_2,yyin_3,yyout_1) 

 yy yyin_1; 

 yy yyin_2; 

 yy yyin_3; 

 yy *yyout_1;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_Q;



 yy yy_0_1_1;



 yy yyv_Tp;



 yy yy_0_1_2;



 yy yyv_Descr2;



 yy yy_0_2;



 yy yyv_Rval1;



 yy yy_0_3;



 yy yy_0_4;



 yy yy_1_1;



 yy yyv_Descr1;



 yy yy_1_2;



 yy yy_2_1;



 yy yy_2_2;



 yy yy_2_3;



 yy yyv_Rval;



 yy yy_2_4;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

if (yy_0_1[0] != 12){
goto yyfl_67_1; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yyv_Q = yy_0_1_1; 

yyv_Tp = yy_0_1_2; 

yyv_Descr2 = yy_0_2; 

yyv_Rval1 = yy_0_3; 

yy_1_1 = yyv_Tp; 

get_tp_descr(yy_1_1, (&yy_1_2)); 

yyv_Descr1 = yy_1_2; 

yy_2_1 = yyv_Descr1; 

yy_2_2 = yyv_Descr2; 

yy_2_3 = yyv_Rval1; 

convert_type2_to_type1(yy_2_1, yy_2_2, yy_2_3, (&yy_2_4)); 

yyv_Rval = yy_2_4; 

yy_0_4 = yyv_Rval; 

(*yyout_1) = yy_0_4; 


return (int )retValue_acc;
 

yyfl_67_1:  ; } 

{ 



 yy yyb;



 yy yyv_Descr1;



 yy yy_0_1;



 yy yy_0_2;



 yy yyv_Q;



 yy yy_0_2_1;



 yy yyv_Tp;



 yy yy_0_2_2;



 yy yyv_Rval1;



 yy yy_0_3;



 yy yy_0_4;



 yy yy_1_1;



 yy yyv_Descr2;



 yy yy_1_2;



 yy yy_2_1;



 yy yy_2_2;



 yy yy_2_3;



 yy yyv_Rval;



 yy yy_2_4;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yyv_Descr1 = yy_0_1; 

if (yy_0_2[0] != 12){
goto yyfl_67_2; }

yy_0_2_1 = ((( yy )yy_0_2[1])); 

yy_0_2_2 = ((( yy )yy_0_2[2])); 

yyv_Q = yy_0_2_1; 

yyv_Tp = yy_0_2_2; 

yyv_Rval1 = yy_0_3; 

yy_1_1 = yyv_Tp; 

get_tp_descr(yy_1_1, (&yy_1_2)); 

yyv_Descr2 = yy_1_2; 

yy_2_1 = yyv_Descr1; 

yy_2_2 = yyv_Descr2; 

yy_2_3 = yyv_Rval1; 

convert_type2_to_type1(yy_2_1, yy_2_2, yy_2_3, (&yy_2_4)); 

yyv_Rval = yy_2_4; 

yy_0_4 = yyv_Rval; 

(*yyout_1) = yy_0_4; 


return (int )retValue_acc;
 

yyfl_67_2:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_S1;



 yy yy_0_1_1;



 yy yyv_L1;



 yy yy_0_1_2;



 yy yyv_M1;



 yy yy_0_1_3;



 yy yy_0_2;



 yy yyv_S2;



 yy yy_0_2_1;



 yy yyv_L2;



 yy yy_0_2_2;



 yy yyv_M2;



 yy yy_0_2_3;



 yy yyv_Rval;



 yy yy_0_3;



 yy yy_0_4;



 yy yy_1_1;



 yy yy_1_2;



 yy yy_1_3;



 yy yyv_Mode1;



 yy yy_1_4;



 yy yy_2_1;



 yy yy_2_2;



 yy yy_2_3;



 yy yyv_Mode2;



 yy yy_2_4;



 yy yy_3_1;



 yy yy_3_2;



 yy yy_3_3;



 yy yyv_ResC;



 yy yy_3_4;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

if (yy_0_1[0] != 13){
goto yyfl_67_3; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

yyv_S1 = yy_0_1_1; 

yyv_L1 = yy_0_1_2; 

yyv_M1 = yy_0_1_3; 

if (yy_0_2[0] != 13){
goto yyfl_67_3; }

yy_0_2_1 = ((( yy )yy_0_2[1])); 

yy_0_2_2 = ((( yy )yy_0_2[2])); 

yy_0_2_3 = ((( yy )yy_0_2[3])); 

yyv_S2 = yy_0_2_1; 

yyv_L2 = yy_0_2_2; 

yyv_M2 = yy_0_2_3; 

yyv_Rval = yy_0_3; 

yy_1_1 = yyv_S1; 

yy_1_2 = yyv_L1; 

yy_1_3 = yyv_M1; 

td_map_triple_to_mode(yy_1_1, yy_1_2, yy_1_3, (&yy_1_4)); 

yyv_Mode1 = yy_1_4; 

yy_2_1 = yyv_S2; 

yy_2_2 = yyv_L2; 

yy_2_3 = yyv_M2; 

td_map_triple_to_mode(yy_2_1, yy_2_2, yy_2_3, (&yy_2_4)); 

yyv_Mode2 = yy_2_4; 

yy_3_1 = yyv_Mode2; 

yy_3_2 = yyv_Mode1; 

yy_3_3 = yyv_Rval; 

convert_if_necessary(yy_3_1, yy_3_2, yy_3_3, (&yy_3_4)); 

yyv_ResC = yy_3_4; 

yy_0_4 = yyv_ResC; 

(*yyout_1) = yy_0_4; 


return (int )retValue_acc;
 

yyfl_67_3:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_I1;



 yy yy_0_1_1;



 yy yyv_Mode1;



 yy yy_0_1_2;



 yy yy_0_2;



 yy yyv_I2;



 yy yy_0_2_1;



 yy yyv_Mode2;



 yy yy_0_2_2;



 yy yyv_Rval;



 yy yy_0_3;



 yy yy_0_4;



 yy yy_1_1;



 yy yy_1_2;



 yy yy_1_3;



 yy yyv_ResC;



 yy yy_1_4;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

if (yy_0_1[0] != 10){
goto yyfl_67_4; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yyv_I1 = yy_0_1_1; 

yyv_Mode1 = yy_0_1_2; 

if (yy_0_2[0] != 10){
goto yyfl_67_4; }

yy_0_2_1 = ((( yy )yy_0_2[1])); 

yy_0_2_2 = ((( yy )yy_0_2[2])); 

yyv_I2 = yy_0_2_1; 

yyv_Mode2 = yy_0_2_2; 

yyv_Rval = yy_0_3; 

yy_1_1 = yyv_Mode2; 

yy_1_2 = yyv_Mode1; 

yy_1_3 = yyv_Rval; 

convert_if_necessary(yy_1_1, yy_1_2, yy_1_3, (&yy_1_4)); 

yyv_ResC = yy_1_4; 

yy_0_4 = yyv_ResC; 

(*yyout_1) = yy_0_4; 


return (int )retValue_acc;
 

yyfl_67_4:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_S1;



 yy yy_0_1_1;



 yy yyv_L1;



 yy yy_0_1_2;



 yy yyv_M1;



 yy yy_0_1_3;



 yy yy_0_2;



 yy yyv_I;



 yy yy_0_2_1;



 yy yyv_Mode2;



 yy yy_0_2_2;



 yy yyv_Rval;



 yy yy_0_3;



 yy yy_0_4;



 yy yy_1_1;



 yy yy_1_2;



 yy yy_1_3;



 yy yyv_Mode1;



 yy yy_1_4;



 yy yy_2_1;



 yy yy_2_2;



 yy yy_2_3;



 yy yyv_ResC;



 yy yy_2_4;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

if (yy_0_1[0] != 13){
goto yyfl_67_5; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

yyv_S1 = yy_0_1_1; 

yyv_L1 = yy_0_1_2; 

yyv_M1 = yy_0_1_3; 

if (yy_0_2[0] != 10){
goto yyfl_67_5; }

yy_0_2_1 = ((( yy )yy_0_2[1])); 

yy_0_2_2 = ((( yy )yy_0_2[2])); 

yyv_I = yy_0_2_1; 

yyv_Mode2 = yy_0_2_2; 

yyv_Rval = yy_0_3; 

yy_1_1 = yyv_S1; 

yy_1_2 = yyv_L1; 

yy_1_3 = yyv_M1; 

td_map_triple_to_mode(yy_1_1, yy_1_2, yy_1_3, (&yy_1_4)); 

yyv_Mode1 = yy_1_4; 

yy_2_1 = yyv_Mode2; 

yy_2_2 = yyv_Mode1; 

yy_2_3 = yyv_Rval; 

convert_if_necessary(yy_2_1, yy_2_2, yy_2_3, (&yy_2_4)); 

yyv_ResC = yy_2_4; 

yy_0_4 = yyv_ResC; 

(*yyout_1) = yy_0_4; 


return (int )retValue_acc;
 

yyfl_67_5:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_I;



 yy yy_0_1_1;



 yy yyv_Mode1;



 yy yy_0_1_2;



 yy yy_0_2;



 yy yyv_S2;



 yy yy_0_2_1;



 yy yyv_L2;



 yy yy_0_2_2;



 yy yyv_M2;



 yy yy_0_2_3;



 yy yyv_Rval;



 yy yy_0_3;



 yy yy_0_4;



 yy yy_1_1;



 yy yy_1_2;



 yy yy_1_3;



 yy yyv_Mode2;



 yy yy_1_4;



 yy yy_2_1;



 yy yy_2_2;



 yy yy_2_3;



 yy yyv_ResC;



 yy yy_2_4;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

if (yy_0_1[0] != 10){
goto yyfl_67_6; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yyv_I = yy_0_1_1; 

yyv_Mode1 = yy_0_1_2; 

if (yy_0_2[0] != 13){
goto yyfl_67_6; }

yy_0_2_1 = ((( yy )yy_0_2[1])); 

yy_0_2_2 = ((( yy )yy_0_2[2])); 

yy_0_2_3 = ((( yy )yy_0_2[3])); 

yyv_S2 = yy_0_2_1; 

yyv_L2 = yy_0_2_2; 

yyv_M2 = yy_0_2_3; 

yyv_Rval = yy_0_3; 

yy_1_1 = yyv_S2; 

yy_1_2 = yyv_L2; 

yy_1_3 = yyv_M2; 

td_map_triple_to_mode(yy_1_1, yy_1_2, yy_1_3, (&yy_1_4)); 

yyv_Mode2 = yy_1_4; 

yy_2_1 = yyv_Mode2; 

yy_2_2 = yyv_Mode1; 

yy_2_3 = yyv_Rval; 

convert_if_necessary(yy_2_1, yy_2_2, yy_2_3, (&yy_2_4)); 

yyv_ResC = yy_2_4; 

yy_0_4 = yyv_ResC; 

(*yyout_1) = yy_0_4; 


return (int )retValue_acc;
 

yyfl_67_6:  ; } 

{ 



 yy yyb;



 yy yyv_Descr1;



 yy yy_0_1;



 yy yyv_Descr2;



 yy yy_0_2;



 yy yyv_Rval;



 yy yy_0_3;



 yy yy_0_4;



 yy yy_1_1;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yyv_Descr1 = yy_0_1; 

yyv_Descr2 = yy_0_2; 

yyv_Rval = yy_0_3; 

yy_1_1 = ((( yy )"convert_type2_to_type1 failed")); 

compiler_error(yy_1_1); 

yy_0_4 = yyv_Rval; 

(*yyout_1) = yy_0_4; 


return (int )retValue_acc;
 

yyfl_67_7:  ; } 

yyErr(2, 1707); 

}

return (int )retValue_acc;


}
 

conv_lvalue_to_rvalue(yyin_1,yyin_2,yyout_1,yyout_2) 

 yy yyin_1; 

 yy yyin_2; 

 yy *yyout_1; 

 yy *yyout_2;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yyv_Tp1;



 yy yy_0_1;



 yy yyv_Res1;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_0_4;



 yy yy_1_1;



 yy yy_1_2;



 yy yyv_Size;



 yy yy_1_2_1;



 yy yyv_Tp2;



 yy yy_1_2_2;



 yy yy_2_1;



 yy yy_2_1_1;



 yy yy_2_1_2;



 yy yyv_Tp;



 yy yy_2_2;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yyv_Tp1 = yy_0_1; 

yyv_Res1 = yy_0_2; 

yyb = yyh; 

yyh += 4; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_Tp1; 

get_tp_descr(yy_1_1, (&yy_1_2)); 

if (yy_1_2[0] != 2){
goto yyfl_68_1; }

yy_1_2_1 = ((( yy )yy_1_2[1])); 

yy_1_2_2 = ((( yy )yy_1_2[2])); 

yyv_Size = yy_1_2_1; 

yyv_Tp2 = yy_1_2_2; 

yy_2_1_1 = yyb + 3; 

yy_2_1_1[0] = 4; 

yy_2_1_2 = yyv_Tp2; 

yy_2_1 = yyb + 0; 

yy_2_1[0] = 5; 

yy_2_1[1] = (((long )yy_2_1_1)); 

yy_2_1[2] = (((long )yy_2_1_2)); 

make_type_and_size(yy_2_1, (&yy_2_2)); 

yyv_Tp = yy_2_2; 

yy_0_3 = yyv_Tp; 

yy_0_4 = yyv_Res1; 

(*yyout_1) = yy_0_3; 

(*yyout_2) = yy_0_4; 


return (int )retValue_acc;
 

yyfl_68_1:  ; } 

{ 



 yy yyb;



 yy yyv_Tp1;



 yy yy_0_1;



 yy yyv_Res1;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_0_4;



 yy yy_1_1;



 yy yy_1_2;



 yy yyv_L;



 yy yy_1_2_1;



 yy yyv_Tp2;



 yy yy_1_2_2;



 yy yy_2_1;



 yy yy_2_1_1;



 yy yy_2_1_2;



 yy yyv_Tp;



 yy yy_2_2;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yyv_Tp1 = yy_0_1; 

yyv_Res1 = yy_0_2; 

yyb = yyh; 

yyh += 4; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_Tp1; 

get_tp_descr(yy_1_1, (&yy_1_2)); 

if (yy_1_2[0] != 4){
goto yyfl_68_2; }

yy_1_2_1 = ((( yy )yy_1_2[1])); 

yy_1_2_2 = ((( yy )yy_1_2[2])); 

yyv_L = yy_1_2_1; 

yyv_Tp2 = yy_1_2_2; 

yy_2_1_1 = yyb + 3; 

yy_2_1_1[0] = 4; 

yy_2_1_2 = yyv_Tp1; 

yy_2_1 = yyb + 0; 

yy_2_1[0] = 5; 

yy_2_1[1] = (((long )yy_2_1_1)); 

yy_2_1[2] = (((long )yy_2_1_2)); 

make_type_and_size(yy_2_1, (&yy_2_2)); 

yyv_Tp = yy_2_2; 

yy_0_3 = yyv_Tp; 

yy_0_4 = yyv_Res1; 

(*yyout_1) = yy_0_3; 

(*yyout_2) = yy_0_4; 


return (int )retValue_acc;
 

yyfl_68_2:  ; } 

{ 



 yy yyb;



 yy yyv_Tp1;



 yy yy_0_1;



 yy yyv_Res1;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_0_4;



 yy yy_1_1;



 yy yy_1_2;



 yy yyv_ParamTypes;



 yy yy_1_2_1;



 yy yyv_Tp2;



 yy yy_1_2_2;



 yy yy_2_1;



 yy yy_2_1_1;



 yy yy_2_1_2;



 yy yyv_Tp;



 yy yy_2_2;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yyv_Tp1 = yy_0_1; 

yyv_Res1 = yy_0_2; 

yyb = yyh; 

yyh += 4; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_Tp1; 

get_tp_descr(yy_1_1, (&yy_1_2)); 

if (yy_1_2[0] != 3){
goto yyfl_68_3; }

yy_1_2_1 = ((( yy )yy_1_2[1])); 

yy_1_2_2 = ((( yy )yy_1_2[2])); 

yyv_ParamTypes = yy_1_2_1; 

yyv_Tp2 = yy_1_2_2; 

yy_2_1_1 = yyb + 3; 

yy_2_1_1[0] = 4; 

yy_2_1_2 = yyv_Tp1; 

yy_2_1 = yyb + 0; 

yy_2_1[0] = 5; 

yy_2_1[1] = (((long )yy_2_1_1)); 

yy_2_1[2] = (((long )yy_2_1_2)); 

make_type_and_size(yy_2_1, (&yy_2_2)); 

yyv_Tp = yy_2_2; 

yy_0_3 = yyv_Tp; 

yy_0_4 = yyv_Res1; 

(*yyout_1) = yy_0_3; 

(*yyout_2) = yy_0_4; 


return (int )retValue_acc;
 

yyfl_68_3:  ; } 

{ 



 yy yyb;



 yy yyv_Tp1;



 yy yy_0_1;



 yy yyv_Res1;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_0_4;



 yy yy_0_4_1;



 yy yy_0_4_2;



 yy yy_1_1;



 yy yyv_Descr;



 yy yy_1_2;



 yy yy_2_1;



 yy yy_2_2;



 yy yy_3_1;



 yy yyv_Size;



 yy yy_3_2;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yyv_Tp1 = yy_0_1; 

yyv_Res1 = yy_0_2; 

yyb = yyh; 

yyh += 3; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_Tp1; 

get_tp_descr(yy_1_1, (&yy_1_2)); 

yyv_Descr = yy_1_2; 

yy_2_1 = yyv_Descr; 

td_map_to_mode(yy_2_1, (&yy_2_2)); 

if (yy_2_2[0] != 10){
goto yyfl_68_4; }

yy_3_1 = yyv_Tp1; 

get_tp_size(yy_3_1, (&yy_3_2)); 

yyv_Size = yy_3_2; 

yy_0_3 = yyv_Tp1; 

yy_0_4_1 = yyv_Size; 

yy_0_4_2 = yyv_Res1; 

yy_0_4 = yyb + 0; 

yy_0_4[0] = 23; 

yy_0_4[1] = (((long )yy_0_4_1)); 

yy_0_4[2] = (((long )yy_0_4_2)); 

(*yyout_1) = yy_0_3; 

(*yyout_2) = yy_0_4; 


return (int )retValue_acc;
 

yyfl_68_4:  ; } 

{ 



 yy yyb;



 yy yyv_Tp1;



 yy yy_0_1;



 yy yyv_Res1;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_0_4;



 yy yy_0_4_1;



 yy yy_0_4_2;



 yy yy_1_1;



 yy yyv_Descr;



 yy yy_1_2;



 yy yy_2_1;



 yy yyv_AMode;



 yy yy_2_2;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yyv_Tp1 = yy_0_1; 

yyv_Res1 = yy_0_2; 

yyb = yyh; 

yyh += 3; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_Tp1; 

get_tp_descr(yy_1_1, (&yy_1_2)); 

yyv_Descr = yy_1_2; 

yy_2_1 = yyv_Descr; 

td_map_to_mode(yy_2_1, (&yy_2_2)); 

yyv_AMode = yy_2_2; 

yy_0_3 = yyv_Tp1; 

yy_0_4_1 = yyv_AMode; 

yy_0_4_2 = yyv_Res1; 

yy_0_4 = yyb + 0; 

yy_0_4[0] = 22; 

yy_0_4[1] = (((long )yy_0_4_1)); 

yy_0_4[2] = (((long )yy_0_4_2)); 

(*yyout_1) = yy_0_3; 

(*yyout_2) = yy_0_4; 


return (int )retValue_acc;
 

yyfl_68_5:  ; } 

yyErr(2, 1747); 

}

return (int )retValue_acc;


}
 

make_tp_signed_int_and_mode(yyout_1,yyout_2) 

 yy *yyout_1; 

 yy *yyout_2;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_2;



 yy yy_1_1;



 yy yy_1_1_1;



 yy yy_1_1_2;



 yy yy_1_1_3;



 yy yyv_Tp;



 yy yy_1_2;



 yy yyv_M;



 yy yy_1_3;

yyb = yyh; 

yyh += 7; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1_1 = yyb + 4; 

yy_1_1_1[0] = 2; 

yy_1_1_2 = yyb + 5; 

yy_1_1_2[0] = 1; 

yy_1_1_3 = yyb + 6; 

yy_1_1_3[0] = 6; 

yy_1_1 = yyb + 0; 

yy_1_1[0] = 13; 

yy_1_1[1] = (((long )yy_1_1_1)); 

yy_1_1[2] = (((long )yy_1_1_2)); 

yy_1_1[3] = (((long )yy_1_1_3)); 

make_type_and_size_and_mode(yy_1_1, (&yy_1_2), (&yy_1_3)); 

yyv_Tp = yy_1_2; 

yyv_M = yy_1_3; 

yy_0_1 = yyv_Tp; 

yy_0_2 = yyv_M; 

(*yyout_1) = yy_0_1; 

(*yyout_2) = yy_0_2; 


return (int )retValue_acc;
 } 

}

return (int )retValue_acc;


}
 

make_tp_signed_int(yyout_1) 

 yy *yyout_1;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yy_0_1;



 yy yy_1_1;



 yy yy_1_1_1;



 yy yy_1_1_2;



 yy yy_1_1_3;



 yy yyv_Tp;



 yy yy_1_2;

yyb = yyh; 

yyh += 7; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1_1 = yyb + 4; 

yy_1_1_1[0] = 2; 

yy_1_1_2 = yyb + 5; 

yy_1_1_2[0] = 1; 

yy_1_1_3 = yyb + 6; 

yy_1_1_3[0] = 6; 

yy_1_1 = yyb + 0; 

yy_1_1[0] = 13; 

yy_1_1[1] = (((long )yy_1_1_1)); 

yy_1_1[2] = (((long )yy_1_1_2)); 

yy_1_1[3] = (((long )yy_1_1_3)); 

make_type_and_size(yy_1_1, (&yy_1_2)); 

yyv_Tp = yy_1_2; 

yy_0_1 = yyv_Tp; 

(*yyout_1) = yy_0_1; 


return (int )retValue_acc;
 } 

}

return (int )retValue_acc;


}
 

convert_to_right_recursion(yyin_1,yyin_2,yyout_1) 

 yy yyin_1; 

 yy yyin_2; 

 yy *yyout_1;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_RL;



 yy yy_0_2;



 yy yy_0_3;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

if (yy_0_1[0] != 2){
goto yyfl_71_1; }

yyv_RL = yy_0_2; 

yy_0_3 = yyv_RL; 

(*yyout_1) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_71_1:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_L;



 yy yy_0_1_1;



 yy yyv_E;



 yy yy_0_1_2;



 yy yyv_RL;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_1_1;



 yy yy_1_2;



 yy yy_1_2_1;



 yy yy_1_2_2;



 yy yyv_RL2;



 yy yy_1_3;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

if (yy_0_1[0] != 1){
goto yyfl_71_2; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yyv_L = yy_0_1_1; 

yyv_E = yy_0_1_2; 

yyv_RL = yy_0_2; 

yyb = yyh; 

yyh += 3; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_L; 

yy_1_2_1 = yyv_E; 

yy_1_2_2 = yyv_RL; 

yy_1_2 = yyb + 0; 

yy_1_2[0] = 2; 

yy_1_2[1] = (((long )yy_1_2_1)); 

yy_1_2[2] = (((long )yy_1_2_2)); 

convert_to_right_recursion(yy_1_1, yy_1_2, (&yy_1_3)); 

yyv_RL2 = yy_1_3; 

yy_0_3 = yyv_RL2; 

(*yyout_1) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_71_2:  ; } 

yyErr(2, 1794); 

}

return (int )retValue_acc;


}
 

get_formal_param_type(yyin_1,yyout_1) 

 yy yyin_1; 

 yy *yyout_1;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_I;



 yy yy_0_1_1;



 yy yyv_Tp;



 yy yy_0_1_2;



 yy yyv_C;



 yy yy_0_1_3;



 yy yy_0_2;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 2){
goto yyfl_72_1; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

yyv_I = yy_0_1_1; 

yyv_Tp = yy_0_1_2; 

yyv_C = yy_0_1_3; 

yy_0_2 = yyv_Tp; 

(*yyout_1) = yy_0_2; 


return (int )retValue_acc;
 

yyfl_72_1:  ; } 

yyErr(2, 1806); 

}

return (int )retValue_acc;


}
 

perform_default_argument_promotions(yyin_1,yyin_2,yyout_1) 

 yy yyin_1; 

 yy yyin_2; 

 yy *yyout_1;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yyv_Descr;



 yy yy_0_1;



 yy yyv_Res;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_1_1;



 yy yyv_FMode;



 yy yy_2_1;



 yy yyv_DMode;



 yy yy_3_1;



 yy yy_4_1;



 yy yy_4_2;



 yy yy_4_3;



 yy yyv_ResC;



 yy yy_4_4;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yyv_Descr = yy_0_1; 

yyv_Res = yy_0_2; 

yy_1_1 = yyv_Descr; 

if ((!is_float(yy_1_1))){
goto yyfl_73_1; }

get_float_mode((&yy_2_1)); 

yyv_FMode = yy_2_1; 

get_double_mode((&yy_3_1)); 

yyv_DMode = yy_3_1; 

yy_4_1 = yyv_FMode; 

yy_4_2 = yyv_DMode; 

yy_4_3 = yyv_Res; 

convert_if_necessary(yy_4_1, yy_4_2, yy_4_3, (&yy_4_4)); 

yyv_ResC = yy_4_4; 

yy_0_3 = yyv_ResC; 

(*yyout_1) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_73_1:  ; } 

{ 



 yy yyb;



 yy yyv_Descr;



 yy yy_0_1;



 yy yyv_Res;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_1_1;



 yy yy_1_2;



 yy yyv_D;



 yy yy_1_3;



 yy yyv_ResC;



 yy yy_1_4;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yyv_Descr = yy_0_1; 

yyv_Res = yy_0_2; 

yy_1_1 = yyv_Descr; 

yy_1_2 = yyv_Res; 

perform_integral_promotions(yy_1_1, yy_1_2, (&yy_1_3), (&yy_1_4)); 

yyv_D = yy_1_3; 

yyv_ResC = yy_1_4; 

yy_0_3 = yyv_ResC; 

(*yyout_1) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_73_2:  ; } 

yyErr(2, 1812); 

}

return (int )retValue_acc;


}
 

integral_type_or_error(yyin_1) 

 yy yyin_1;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yyv_Tp;



 yy yy_0_1;



 yy yy_1_1;



 yy yyv_D;



 yy yy_1_2;



 yy yy_2_1;

yy_0_1 = yyin_1; 

yyv_Tp = yy_0_1; 

yy_1_1 = yyv_Tp; 

get_tp_descr(yy_1_1, (&yy_1_2)); 

yyv_D = yy_1_2; 

yy_2_1 = yyv_D; 

if ((!is_integral(yy_2_1))){
goto yyfl_74_1; }


return (int )retValue_acc;
 

yyfl_74_1:  ; } 

{ 



 yy yyb;



 yy yyv_Tp;



 yy yy_0_1;



 yy yy_1_1;

yy_0_1 = yyin_1; 

yyv_Tp = yy_0_1; 

yy_1_1 = ((( yy )"integral type expected")); 

semantic_error(yy_1_1); 


return (int )retValue_acc;
 

yyfl_74_2:  ; } 

yyErr(2, 1827); 

}

return (int )retValue_acc;


}
 

scalar_type_or_error(yyin_1) 

 yy yyin_1;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yyv_D;



 yy yy_0_1;



 yy yy_1_1;

yy_0_1 = yyin_1; 

yyv_D = yy_0_1; 

yy_1_1 = yyv_D; 

if ((!test_scalar_type(yy_1_1))){
goto yyfl_75_1; }


return (int )retValue_acc;
 

yyfl_75_1:  ; } 

{ 



 yy yyb;



 yy yyv_D;



 yy yy_0_1;



 yy yy_1_1;

yy_0_1 = yyin_1; 

yyv_D = yy_0_1; 

yy_1_1 = ((( yy )"controlling expression must have scalar type")); 

semantic_error(yy_1_1); 


return (int )retValue_acc;
 

yyfl_75_2:  ; } 

yyErr(2, 1840); 

}

return (int )retValue_acc;


}
 

compute_cast(yyin_1,yyin_2,yyout_1) 

 yy yyin_1; 

 yy yyin_2; 

 yy *yyout_1;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yyv_Tp;



 yy yy_0_1;



 yy yyv_IR1;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_0_3_1;



 yy yy_0_3_2;



 yy yy_1_1;



 yy yyv_C1;



 yy yy_1_2;



 yy yy_2_1;



 yy yyv_D;



 yy yy_2_2;



 yy yy_3_1;



 yy yyv_M;



 yy yy_3_2;



 yy yy_4_1;



 yy yy_5_1;



 yy yyv_C;



 yy yy_5_2;



 yy yyv_M1;



 yy yy_6_1;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yyv_Tp = yy_0_1; 

yyv_IR1 = yy_0_2; 

yyb = yyh; 

yyh += 3; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_IR1; 

get_constant(yy_1_1, (&yy_1_2)); 

yyv_C1 = yy_1_2; 

yy_2_1 = yyv_Tp; 

get_tp_descr(yy_2_1, (&yy_2_2)); 

yyv_D = yy_2_2; 

yy_3_1 = yyv_D; 

td_map_to_mode(yy_3_1, (&yy_3_2)); 

yyv_M = yy_3_2; 

yy_4_1 = yyv_M; 

if ((!test_unsigned(yy_4_1))){
goto yyfl_76_1; }

yy_5_1 = yyv_C1; 

c_unsigned(yy_5_1, (&yy_5_2)); 

yyv_C = yy_5_2; 

get_ulong_mode((&yy_6_1)); 

yyv_M1 = yy_6_1; 

yy_0_3_1 = yyv_M1; 

yy_0_3_2 = yyv_C; 

yy_0_3 = yyb + 0; 

yy_0_3[0] = 21; 

yy_0_3[1] = (((long )yy_0_3_1)); 

yy_0_3[2] = (((long )yy_0_3_2)); 

(*yyout_1) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_76_1:  ; } 

{ 



 yy yyb;



 yy yyv_Tp;



 yy yy_0_1;



 yy yyv_IR1;



 yy yy_0_2;



 yy yy_0_3;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yyv_Tp = yy_0_1; 

yyv_IR1 = yy_0_2; 

yy_0_3 = yyv_IR1; 

(*yyout_1) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_76_2:  ; } 

yyErr(2, 1852); 

}

return (int )retValue_acc;


}
 

compute_conditional(yyin_1,yyin_2,yyin_3,yyout_1) 

 yy yyin_1; 

 yy yyin_2; 

 yy yyin_3; 

 yy *yyout_1;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yyv_IR1;



 yy yy_0_1;



 yy yyv_E2;



 yy yy_0_2;



 yy yyv_E3;



 yy yy_0_3;



 yy yy_0_4;



 yy yy_1_1;



 yy yyv_C1;



 yy yy_1_2;



 yy yy_2_1;



 yy yy_3_1;



 yy yyv_IR2;



 yy yy_3_2;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yyv_IR1 = yy_0_1; 

yyv_E2 = yy_0_2; 

yyv_E3 = yy_0_3; 

yy_1_1 = yyv_IR1; 

get_constant(yy_1_1, (&yy_1_2)); 

yyv_C1 = yy_1_2; 

yy_2_1 = yyv_C1; 

if ((!is_not_zero(yy_2_1))){
goto yyfl_77_1; }

yy_3_1 = yyv_E2; 

trafo_expr_const(yy_3_1, (&yy_3_2)); 

yyv_IR2 = yy_3_2; 

yy_0_4 = yyv_IR2; 

(*yyout_1) = yy_0_4; 


return (int )retValue_acc;
 

yyfl_77_1:  ; } 

{ 



 yy yyb;



 yy yyv_IR1;



 yy yy_0_1;



 yy yyv_E2;



 yy yy_0_2;



 yy yyv_E3;



 yy yy_0_3;



 yy yy_0_4;



 yy yy_1_1;



 yy yyv_IR3;



 yy yy_1_2;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yyv_IR1 = yy_0_1; 

yyv_E2 = yy_0_2; 

yyv_E3 = yy_0_3; 

yy_1_1 = yyv_E3; 

trafo_expr_const(yy_1_1, (&yy_1_2)); 

yyv_IR3 = yy_1_2; 

yy_0_4 = yyv_IR3; 

(*yyout_1) = yy_0_4; 


return (int )retValue_acc;
 

yyfl_77_2:  ; } 

yyErr(2, 1868); 

}

return (int )retValue_acc;


}
 

compute_andthen(yyin_1,yyin_2,yyout_1) 

 yy yyin_1; 

 yy yyin_2; 

 yy *yyout_1;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yyv_IR1;



 yy yy_0_1;



 yy yyv_E2;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_0_3_1;



 yy yy_0_3_2;



 yy yy_1_1;



 yy yyv_C1;



 yy yy_1_2;



 yy yy_2_1;



 yy yy_3_1;



 yy yyv_IR2;



 yy yy_3_2;



 yy yy_4_1;



 yy yyv_C;



 yy yy_4_2;



 yy yy_5_1;



 yy yyv_M;



 yy yy_6_1;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yyv_IR1 = yy_0_1; 

yyv_E2 = yy_0_2; 

yyb = yyh; 

yyh += 3; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_IR1; 

get_constant(yy_1_1, (&yy_1_2)); 

yyv_C1 = yy_1_2; 

yy_2_1 = yyv_C1; 

if ((!is_not_zero(yy_2_1))){
goto yyfl_78_1; }

yy_3_1 = yyv_E2; 

trafo_expr_const(yy_3_1, (&yy_3_2)); 

yyv_IR2 = yy_3_2; 

yy_4_1 = yyv_IR2; 

get_constant(yy_4_1, (&yy_4_2)); 

yyv_C = yy_4_2; 

yy_5_1 = yyv_C; 

if ((!is_not_zero(yy_5_1))){
goto yyfl_78_1; }

get_slong_mode((&yy_6_1)); 

yyv_M = yy_6_1; 

yy_0_3_1 = yyv_M; 

yy_0_3_2 = ((( yy )1)); 

yy_0_3 = yyb + 0; 

yy_0_3[0] = 21; 

yy_0_3[1] = (((long )yy_0_3_1)); 

yy_0_3[2] = (((long )yy_0_3_2)); 

(*yyout_1) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_78_1:  ; } 

{ 



 yy yyb;



 yy yyv_IR1;



 yy yy_0_1;



 yy yyv_E2;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_0_3_1;



 yy yy_0_3_2;



 yy yyv_M;



 yy yy_1_1;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yyv_IR1 = yy_0_1; 

yyv_E2 = yy_0_2; 

yyb = yyh; 

yyh += 3; 

if (yyh > yyhx){
yyExtend(); }

get_slong_mode((&yy_1_1)); 

yyv_M = yy_1_1; 

yy_0_3_1 = yyv_M; 

yy_0_3_2 = ((( yy )0)); 

yy_0_3 = yyb + 0; 

yy_0_3[0] = 21; 

yy_0_3[1] = (((long )yy_0_3_1)); 

yy_0_3[2] = (((long )yy_0_3_2)); 

(*yyout_1) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_78_2:  ; } 

yyErr(2, 1882); 

}

return (int )retValue_acc;


}
 

compute_orelse(yyin_1,yyin_2,yyout_1) 

 yy yyin_1; 

 yy yyin_2; 

 yy *yyout_1;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yyv_IR1;



 yy yy_0_1;



 yy yyv_E2;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_0_3_1;



 yy yy_0_3_2;



 yy yy_1_1;



 yy yyv_C1;



 yy yy_1_2;



 yy yy_2_1;



 yy yy_3_1;



 yy yyv_IR2;



 yy yy_3_2;



 yy yy_4_1;



 yy yyv_C;



 yy yy_4_2;



 yy yy_5_1;



 yy yyv_M;



 yy yy_6_1;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yyv_IR1 = yy_0_1; 

yyv_E2 = yy_0_2; 

yyb = yyh; 

yyh += 3; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_IR1; 

get_constant(yy_1_1, (&yy_1_2)); 

yyv_C1 = yy_1_2; 

yy_2_1 = yyv_C1; 

if ((!is_zero(yy_2_1))){
goto yyfl_79_1; }

yy_3_1 = yyv_E2; 

trafo_expr_const(yy_3_1, (&yy_3_2)); 

yyv_IR2 = yy_3_2; 

yy_4_1 = yyv_IR2; 

get_constant(yy_4_1, (&yy_4_2)); 

yyv_C = yy_4_2; 

yy_5_1 = yyv_C; 

if ((!is_zero(yy_5_1))){
goto yyfl_79_1; }

get_slong_mode((&yy_6_1)); 

yyv_M = yy_6_1; 

yy_0_3_1 = yyv_M; 

yy_0_3_2 = ((( yy )0)); 

yy_0_3 = yyb + 0; 

yy_0_3[0] = 21; 

yy_0_3[1] = (((long )yy_0_3_1)); 

yy_0_3[2] = (((long )yy_0_3_2)); 

(*yyout_1) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_79_1:  ; } 

{ 



 yy yyb;



 yy yyv_IR1;



 yy yy_0_1;



 yy yyv_E2;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_0_3_1;



 yy yy_0_3_2;



 yy yyv_M;



 yy yy_1_1;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yyv_IR1 = yy_0_1; 

yyv_E2 = yy_0_2; 

yyb = yyh; 

yyh += 3; 

if (yyh > yyhx){
yyExtend(); }

get_slong_mode((&yy_1_1)); 

yyv_M = yy_1_1; 

yy_0_3_1 = yyv_M; 

yy_0_3_2 = ((( yy )1)); 

yy_0_3 = yyb + 0; 

yy_0_3[0] = 21; 

yy_0_3[1] = (((long )yy_0_3_1)); 

yy_0_3[2] = (((long )yy_0_3_2)); 

(*yyout_1) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_79_2:  ; } 

yyErr(2, 1899); 

}

return (int )retValue_acc;


}
 

c_unexpr(yyin_1,yyin_2,yyout_1) 

 yy yyin_1; 

 yy yyin_2; 

 yy *yyout_1;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_C1;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_1_1;



 yy yyv_C;



 yy yy_1_2;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

if (yy_0_1[0] != 43){
goto yyfl_80_1; }

yyv_C1 = yy_0_2; 

yy_1_1 = yyv_C1; 

c_unminus(yy_1_1, (&yy_1_2)); 

yyv_C = yy_1_2; 

yy_0_3 = yyv_C; 

(*yyout_1) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_80_1:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_C1;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_1_1;



 yy yyv_C;



 yy yy_1_2;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

if (yy_0_1[0] != 44){
goto yyfl_80_2; }

yyv_C1 = yy_0_2; 

yy_1_1 = yyv_C1; 

c_not(yy_1_1, (&yy_1_2)); 

yyv_C = yy_1_2; 

yy_0_3 = yyv_C; 

(*yyout_1) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_80_2:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_C1;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_1_1;



 yy yyv_C;



 yy yy_1_2;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

if (yy_0_1[0] != 46){
goto yyfl_80_3; }

yyv_C1 = yy_0_2; 

yy_1_1 = yyv_C1; 

c_complement(yy_1_1, (&yy_1_2)); 

yyv_C = yy_1_2; 

yy_0_3 = yyv_C; 

(*yyout_1) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_80_3:  ; } 

yyErr(2, 1916); 

}

return (int )retValue_acc;


}
 

compute_unexpr(yyin_1,yyin_2,yyout_1) 

 yy yyin_1; 

 yy yyin_2; 

 yy *yyout_1;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yyv_Op;



 yy yy_0_1;



 yy yyv_IR1;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_0_3_1;



 yy yy_0_3_2;



 yy yy_1_1;



 yy yyv_C1;



 yy yy_1_2;



 yy yy_2_1;



 yy yy_2_2;



 yy yyv_C;



 yy yy_2_3;



 yy yyv_M;



 yy yy_3_1;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yyv_Op = yy_0_1; 

yyv_IR1 = yy_0_2; 

yyb = yyh; 

yyh += 3; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_IR1; 

get_constant(yy_1_1, (&yy_1_2)); 

yyv_C1 = yy_1_2; 

yy_2_1 = yyv_Op; 

yy_2_2 = yyv_C1; 

c_unexpr(yy_2_1, yy_2_2, (&yy_2_3)); 

yyv_C = yy_2_3; 

get_slong_mode((&yy_3_1)); 

yyv_M = yy_3_1; 

yy_0_3_1 = yyv_M; 

yy_0_3_2 = yyv_C; 

yy_0_3 = yyb + 0; 

yy_0_3[0] = 21; 

yy_0_3[1] = (((long )yy_0_3_1)); 

yy_0_3[2] = (((long )yy_0_3_2)); 

(*yyout_1) = yy_0_3; 


return (int )retValue_acc;
 } 

}

return (int )retValue_acc;


}
 

compute_biexpr(yyin_1,yyin_2,yyin_3,yyout_1) 

 yy yyin_1; 

 yy yyin_2; 

 yy yyin_3; 

 yy *yyout_1;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yyv_Op;



 yy yy_0_1;



 yy yyv_IR1;



 yy yy_0_2;



 yy yyv_IR2;



 yy yy_0_3;



 yy yy_0_4;



 yy yy_0_4_1;



 yy yy_0_4_2;



 yy yy_1_1;



 yy yyv_C1;



 yy yy_1_2;



 yy yy_2_1;



 yy yyv_C2;



 yy yy_2_2;



 yy yy_3_1;



 yy yy_3_2;



 yy yy_3_3;



 yy yyv_C;



 yy yy_3_4;



 yy yyv_M;



 yy yy_4_1;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yyv_Op = yy_0_1; 

yyv_IR1 = yy_0_2; 

yyv_IR2 = yy_0_3; 

yyb = yyh; 

yyh += 3; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_IR1; 

get_constant(yy_1_1, (&yy_1_2)); 

yyv_C1 = yy_1_2; 

yy_2_1 = yyv_IR2; 

get_constant(yy_2_1, (&yy_2_2)); 

yyv_C2 = yy_2_2; 

yy_3_1 = yyv_Op; 

yy_3_2 = yyv_C1; 

yy_3_3 = yyv_C2; 

c_biexpr(yy_3_1, yy_3_2, yy_3_3, (&yy_3_4)); 

yyv_C = yy_3_4; 

get_slong_mode((&yy_4_1)); 

yyv_M = yy_4_1; 

yy_0_4_1 = yyv_M; 

yy_0_4_2 = yyv_C; 

yy_0_4 = yyb + 0; 

yy_0_4[0] = 21; 

yy_0_4[1] = (((long )yy_0_4_1)); 

yy_0_4[2] = (((long )yy_0_4_2)); 

(*yyout_1) = yy_0_4; 


return (int )retValue_acc;
 } 

}

return (int )retValue_acc;


}
 

c_biexpr(yyin_1,yyin_2,yyin_3,yyout_1) 

 yy yyin_1; 

 yy yyin_2; 

 yy yyin_3; 

 yy *yyout_1;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_C1;



 yy yy_0_2;



 yy yyv_C2;



 yy yy_0_3;



 yy yy_0_4;



 yy yy_1_1;



 yy yy_1_2;



 yy yyv_C;



 yy yy_1_3;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

if (yy_0_1[0] != 21){
goto yyfl_83_1; }

yyv_C1 = yy_0_2; 

yyv_C2 = yy_0_3; 

yy_1_1 = yyv_C1; 

yy_1_2 = yyv_C2; 

c_and(yy_1_1, yy_1_2, (&yy_1_3)); 

yyv_C = yy_1_3; 

yy_0_4 = yyv_C; 

(*yyout_1) = yy_0_4; 


return (int )retValue_acc;
 

yyfl_83_1:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_C1;



 yy yy_0_2;



 yy yyv_C2;



 yy yy_0_3;



 yy yy_0_4;



 yy yy_1_1;



 yy yy_1_2;



 yy yyv_C;



 yy yy_1_3;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

if (yy_0_1[0] != 18){
goto yyfl_83_2; }

yyv_C1 = yy_0_2; 

yyv_C2 = yy_0_3; 

yy_1_1 = yyv_C1; 

yy_1_2 = yyv_C2; 

c_or(yy_1_1, yy_1_2, (&yy_1_3)); 

yyv_C = yy_1_3; 

yy_0_4 = yyv_C; 

(*yyout_1) = yy_0_4; 


return (int )retValue_acc;
 

yyfl_83_2:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_C1;



 yy yy_0_2;



 yy yyv_C2;



 yy yy_0_3;



 yy yy_0_4;



 yy yy_1_1;



 yy yy_1_2;



 yy yyv_C;



 yy yy_1_3;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

if (yy_0_1[0] != 19){
goto yyfl_83_3; }

yyv_C1 = yy_0_2; 

yyv_C2 = yy_0_3; 

yy_1_1 = yyv_C1; 

yy_1_2 = yyv_C2; 

c_xor(yy_1_1, yy_1_2, (&yy_1_3)); 

yyv_C = yy_1_3; 

yy_0_4 = yyv_C; 

(*yyout_1) = yy_0_4; 


return (int )retValue_acc;
 

yyfl_83_3:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_C1;



 yy yy_0_2;



 yy yyv_C2;



 yy yy_0_3;



 yy yy_0_4;



 yy yy_1_1;



 yy yy_1_2;



 yy yyv_C;



 yy yy_1_3;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

if (yy_0_1[0] != 20){
goto yyfl_83_4; }

yyv_C1 = yy_0_2; 

yyv_C2 = yy_0_3; 

yy_1_1 = yyv_C1; 

yy_1_2 = yyv_C2; 

c_eq(yy_1_1, yy_1_2, (&yy_1_3)); 

yyv_C = yy_1_3; 

yy_0_4 = yyv_C; 

(*yyout_1) = yy_0_4; 


return (int )retValue_acc;
 

yyfl_83_4:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_C1;



 yy yy_0_2;



 yy yyv_C2;



 yy yy_0_3;



 yy yy_0_4;



 yy yy_1_1;



 yy yy_1_2;



 yy yyv_C;



 yy yy_1_3;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

if (yy_0_1[0] != 13){
goto yyfl_83_5; }

yyv_C1 = yy_0_2; 

yyv_C2 = yy_0_3; 

yy_1_1 = yyv_C1; 

yy_1_2 = yyv_C2; 

c_ne(yy_1_1, yy_1_2, (&yy_1_3)); 

yyv_C = yy_1_3; 

yy_0_4 = yyv_C; 

(*yyout_1) = yy_0_4; 


return (int )retValue_acc;
 

yyfl_83_5:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_C1;



 yy yy_0_2;



 yy yyv_C2;



 yy yy_0_3;



 yy yy_0_4;



 yy yy_1_1;



 yy yy_1_2;



 yy yyv_C;



 yy yy_1_3;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

if (yy_0_1[0] != 14){
goto yyfl_83_6; }

yyv_C1 = yy_0_2; 

yyv_C2 = yy_0_3; 

yy_1_1 = yyv_C1; 

yy_1_2 = yyv_C2; 

c_lt(yy_1_1, yy_1_2, (&yy_1_3)); 

yyv_C = yy_1_3; 

yy_0_4 = yyv_C; 

(*yyout_1) = yy_0_4; 


return (int )retValue_acc;
 

yyfl_83_6:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_C1;



 yy yy_0_2;



 yy yyv_C2;



 yy yy_0_3;



 yy yy_0_4;



 yy yy_1_1;



 yy yy_1_2;



 yy yyv_C;



 yy yy_1_3;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

if (yy_0_1[0] != 16){
goto yyfl_83_7; }

yyv_C1 = yy_0_2; 

yyv_C2 = yy_0_3; 

yy_1_1 = yyv_C1; 

yy_1_2 = yyv_C2; 

c_gt(yy_1_1, yy_1_2, (&yy_1_3)); 

yyv_C = yy_1_3; 

yy_0_4 = yyv_C; 

(*yyout_1) = yy_0_4; 


return (int )retValue_acc;
 

yyfl_83_7:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_C1;



 yy yy_0_2;



 yy yyv_C2;



 yy yy_0_3;



 yy yy_0_4;



 yy yy_1_1;



 yy yy_1_2;



 yy yyv_C;



 yy yy_1_3;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

if (yy_0_1[0] != 17){
goto yyfl_83_8; }

yyv_C1 = yy_0_2; 

yyv_C2 = yy_0_3; 

yy_1_1 = yyv_C1; 

yy_1_2 = yyv_C2; 

c_ge(yy_1_1, yy_1_2, (&yy_1_3)); 

yyv_C = yy_1_3; 

yy_0_4 = yyv_C; 

(*yyout_1) = yy_0_4; 


return (int )retValue_acc;
 

yyfl_83_8:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_C1;



 yy yy_0_2;



 yy yyv_C2;



 yy yy_0_3;



 yy yy_0_4;



 yy yy_1_1;



 yy yy_1_2;



 yy yyv_C;



 yy yy_1_3;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

if (yy_0_1[0] != 15){
goto yyfl_83_9; }

yyv_C1 = yy_0_2; 

yyv_C2 = yy_0_3; 

yy_1_1 = yyv_C1; 

yy_1_2 = yyv_C2; 

c_le(yy_1_1, yy_1_2, (&yy_1_3)); 

yyv_C = yy_1_3; 

yy_0_4 = yyv_C; 

(*yyout_1) = yy_0_4; 


return (int )retValue_acc;
 

yyfl_83_9:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_C1;



 yy yy_0_2;



 yy yyv_C2;



 yy yy_0_3;



 yy yy_0_4;



 yy yy_1_1;



 yy yy_1_2;



 yy yyv_C;



 yy yy_1_3;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

if (yy_0_1[0] != 11){
goto yyfl_83_10; }

yyv_C1 = yy_0_2; 

yyv_C2 = yy_0_3; 

yy_1_1 = yyv_C1; 

yy_1_2 = yyv_C2; 

c_lshift(yy_1_1, yy_1_2, (&yy_1_3)); 

yyv_C = yy_1_3; 

yy_0_4 = yyv_C; 

(*yyout_1) = yy_0_4; 


return (int )retValue_acc;
 

yyfl_83_10:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_C1;



 yy yy_0_2;



 yy yyv_C2;



 yy yy_0_3;



 yy yy_0_4;



 yy yy_1_1;



 yy yy_1_2;



 yy yyv_C;



 yy yy_1_3;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

if (yy_0_1[0] != 12){
goto yyfl_83_11; }

yyv_C1 = yy_0_2; 

yyv_C2 = yy_0_3; 

yy_1_1 = yyv_C1; 

yy_1_2 = yyv_C2; 

c_rshift(yy_1_1, yy_1_2, (&yy_1_3)); 

yyv_C = yy_1_3; 

yy_0_4 = yyv_C; 

(*yyout_1) = yy_0_4; 


return (int )retValue_acc;
 

yyfl_83_11:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_C1;



 yy yy_0_2;



 yy yyv_C2;



 yy yy_0_3;



 yy yy_0_4;



 yy yy_1_1;



 yy yy_1_2;



 yy yyv_C;



 yy yy_1_3;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

if (yy_0_1[0] != 7){
goto yyfl_83_12; }

yyv_C1 = yy_0_2; 

yyv_C2 = yy_0_3; 

yy_1_1 = yyv_C1; 

yy_1_2 = yyv_C2; 

c_minus(yy_1_1, yy_1_2, (&yy_1_3)); 

yyv_C = yy_1_3; 

yy_0_4 = yyv_C; 

(*yyout_1) = yy_0_4; 


return (int )retValue_acc;
 

yyfl_83_12:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_C1;



 yy yy_0_2;



 yy yyv_C2;



 yy yy_0_3;



 yy yy_0_4;



 yy yy_1_1;



 yy yy_1_2;



 yy yyv_C;



 yy yy_1_3;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

if (yy_0_1[0] != 6){
goto yyfl_83_13; }

yyv_C1 = yy_0_2; 

yyv_C2 = yy_0_3; 

yy_1_1 = yyv_C1; 

yy_1_2 = yyv_C2; 

c_plus(yy_1_1, yy_1_2, (&yy_1_3)); 

yyv_C = yy_1_3; 

yy_0_4 = yyv_C; 

(*yyout_1) = yy_0_4; 


return (int )retValue_acc;
 

yyfl_83_13:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_C1;



 yy yy_0_2;



 yy yyv_C2;



 yy yy_0_3;



 yy yy_0_4;



 yy yy_1_1;



 yy yy_1_2;



 yy yyv_C;



 yy yy_1_3;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

if (yy_0_1[0] != 8){
goto yyfl_83_14; }

yyv_C1 = yy_0_2; 

yyv_C2 = yy_0_3; 

yy_1_1 = yyv_C1; 

yy_1_2 = yyv_C2; 

c_mult(yy_1_1, yy_1_2, (&yy_1_3)); 

yyv_C = yy_1_3; 

yy_0_4 = yyv_C; 

(*yyout_1) = yy_0_4; 


return (int )retValue_acc;
 

yyfl_83_14:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_C1;



 yy yy_0_2;



 yy yyv_C2;



 yy yy_0_3;



 yy yy_0_4;



 yy yy_1_1;



 yy yy_1_2;



 yy yyv_C;



 yy yy_1_3;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

if (yy_0_1[0] != 9){
goto yyfl_83_15; }

yyv_C1 = yy_0_2; 

yyv_C2 = yy_0_3; 

yy_1_1 = yyv_C1; 

yy_1_2 = yyv_C2; 

c_div(yy_1_1, yy_1_2, (&yy_1_3)); 

yyv_C = yy_1_3; 

yy_0_4 = yyv_C; 

(*yyout_1) = yy_0_4; 


return (int )retValue_acc;
 

yyfl_83_15:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_C1;



 yy yy_0_2;



 yy yyv_C2;



 yy yy_0_3;



 yy yy_0_4;



 yy yy_1_1;



 yy yy_1_2;



 yy yyv_C;



 yy yy_1_3;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

if (yy_0_1[0] != 10){
goto yyfl_83_16; }

yyv_C1 = yy_0_2; 

yyv_C2 = yy_0_3; 

yy_1_1 = yyv_C1; 

yy_1_2 = yyv_C2; 

c_mod(yy_1_1, yy_1_2, (&yy_1_3)); 

yyv_C = yy_1_3; 

yy_0_4 = yyv_C; 

(*yyout_1) = yy_0_4; 


return (int )retValue_acc;
 

yyfl_83_16:  ; } 

{ 



 yy yyb;



 yy yyv_Op;



 yy yy_0_1;



 yy yyv_C1;



 yy yy_0_2;



 yy yyv_C2;



 yy yy_0_3;



 yy yy_0_4;



 yy yy_1_1;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yyv_Op = yy_0_1; 

yyv_C1 = yy_0_2; 

yyv_C2 = yy_0_3; 

yy_1_1 = ((( yy )"c_biexpr not defined")); 

compiler_error(yy_1_1); 

yy_0_4 = yyv_C1; 

(*yyout_1) = yy_0_4; 


return (int )retValue_acc;
 

yyfl_83_17:  ; } 

yyErr(2, 1956); 

}

return (int )retValue_acc;


}
 

get_constant(yyin_1,yyout_1) 

 yy yyin_1; 

 yy *yyout_1;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_M;



 yy yy_0_1_1;



 yy yyv_C;



 yy yy_0_1_2;



 yy yy_0_2;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 21){
goto yyfl_84_1; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yyv_M = yy_0_1_1; 

yyv_C = yy_0_1_2; 

yy_0_2 = yyv_C; 

(*yyout_1) = yy_0_2; 


return (int )retValue_acc;
 

yyfl_84_1:  ; } 

yyErr(2, 2029); 

}

return (int )retValue_acc;


}
 

convert_if_necessary(yyin_1,yyin_2,yyin_3,yyout_1) 

 yy yyin_1; 

 yy yyin_2; 

 yy yyin_3; 

 yy *yyout_1;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yyv_AMode1;



 yy yy_0_1;



 yy yyv_AMode2;



 yy yy_0_2;



 yy yyv_Res;



 yy yy_0_3;



 yy yy_0_4;



 yy yy_1_1;



 yy yy_1_2;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yyv_AMode1 = yy_0_1; 

yyv_AMode2 = yy_0_2; 

yyv_Res = yy_0_3; 

yy_1_1 = yyv_AMode1; 

yy_1_2 = yyv_AMode2; 

if ((!compare_amode(yy_1_1, yy_1_2))){
goto yyfl_85_1; }

yy_0_4 = yyv_Res; 

(*yyout_1) = yy_0_4; 


return (int )retValue_acc;
 

yyfl_85_1:  ; } 

{ 



 yy yyb;



 yy yyv_AMode1;



 yy yy_0_1;



 yy yyv_AMode2;



 yy yy_0_2;



 yy yyv_Res;



 yy yy_0_3;



 yy yy_0_4;



 yy yy_0_4_1;



 yy yy_0_4_2;



 yy yy_0_4_3;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

yy_0_3 = yyin_3; 

yyv_AMode1 = yy_0_1; 

yyv_AMode2 = yy_0_2; 

yyv_Res = yy_0_3; 

yyb = yyh; 

yyh += 4; 

if (yyh > yyhx){
yyExtend(); }

yy_0_4_1 = yyv_AMode1; 

yy_0_4_2 = yyv_AMode2; 

yy_0_4_3 = yyv_Res; 

yy_0_4 = yyb + 0; 

yy_0_4[0] = 55; 

yy_0_4[1] = (((long )yy_0_4_1)); 

yy_0_4[2] = (((long )yy_0_4_2)); 

yy_0_4[3] = (((long )yy_0_4_3)); 

(*yyout_1) = yy_0_4; 


return (int )retValue_acc;
 

yyfl_85_2:  ; } 

yyErr(2, 2036); 

}

return (int )retValue_acc;


}
 

compute_default_label(yyin_1,yyin_2,yyout_1) 

 yy yyin_1; 

 yy yyin_2; 

 yy *yyout_1;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_Label;



 yy yy_0_2;



 yy yy_0_3;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

if (yy_0_1[0] != 1){
goto yyfl_86_1; }

yyv_Label = yy_0_2; 

yy_0_3 = yyv_Label; 

(*yyout_1) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_86_1:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_L;



 yy yy_0_1_1;



 yy yyv_Label;



 yy yy_0_2;



 yy yy_0_3;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

if (yy_0_1[0] != 2){
goto yyfl_86_2; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yyv_L = yy_0_1_1; 

yyv_Label = yy_0_2; 

yy_0_3 = yyv_L; 

(*yyout_1) = yy_0_3; 


return (int )retValue_acc;
 

yyfl_86_2:  ; } 

yyErr(2, 2047); 

}

return (int )retValue_acc;


}
 

int is_float(yyin_1) 

 yy yyin_1;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_Q;



 yy yy_0_1_1;



 yy yyv_Tp;



 yy yy_0_1_2;



 yy yy_1_1;



 yy yyv_D;



 yy yy_1_2;



 yy yy_2_1;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 12){
goto yyfl_87_1; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yyv_Q = yy_0_1_1; 

yyv_Tp = yy_0_1_2; 

yy_1_1 = yyv_Tp; 

get_tp_descr(yy_1_1, (&yy_1_2)); 

yyv_D = yy_1_2; 

yy_2_1 = yyv_D; 

if ((!is_float(yy_2_1))){
goto yyfl_87_1; }


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_87_1:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_Sign;



 yy yy_0_1_1;



 yy yyv_Size;



 yy yy_0_1_2;



 yy yy_0_1_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 13){
goto yyfl_87_2; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

yyv_Sign = yy_0_1_1; 

yyv_Size = yy_0_1_2; 

if (yy_0_1_3[0] != 4){
goto yyfl_87_2; }


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_87_2:  ; } 


retValue_acc = 0;
return (int )retValue_acc;
 

}

return (int )retValue_acc;


}
 

int test_illegal_const_expr(yyin_1) 

 yy yyin_1;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_88_1; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 35){
goto yyfl_88_1; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_88_1:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_88_2; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 24){
goto yyfl_88_2; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_88_2:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_88_3; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 28){
goto yyfl_88_3; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_88_3:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_88_4; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 29){
goto yyfl_88_4; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_88_4:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_88_5; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 30){
goto yyfl_88_5; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_88_5:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_88_6; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 31){
goto yyfl_88_6; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_88_6:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_88_7; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 32){
goto yyfl_88_7; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_88_7:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_88_8; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 33){
goto yyfl_88_8; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_88_8:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_88_9; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 34){
goto yyfl_88_9; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_88_9:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_88_10; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 25){
goto yyfl_88_10; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_88_10:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_88_11; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 26){
goto yyfl_88_11; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_88_11:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_88_12; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 27){
goto yyfl_88_12; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_88_12:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E;



 yy yy_0_1_2;



 yy yyv_L;



 yy yy_0_1_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_88_13; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 5){
goto yyfl_88_13; }

yyv_E = yy_0_1_2; 

yyv_L = yy_0_1_3; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_88_13:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E;



 yy yy_0_1_2;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 7){
goto yyfl_88_14; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

if (yy_0_1_1[0] != 39){
goto yyfl_88_14; }

yyv_E = yy_0_1_2; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_88_14:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E;



 yy yy_0_1_2;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 7){
goto yyfl_88_15; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

if (yy_0_1_1[0] != 40){
goto yyfl_88_15; }

yyv_E = yy_0_1_2; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_88_15:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E;



 yy yy_0_1_2;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 7){
goto yyfl_88_16; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

if (yy_0_1_1[0] != 41){
goto yyfl_88_16; }

yyv_E = yy_0_1_2; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_88_16:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E;



 yy yy_0_1_2;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 7){
goto yyfl_88_17; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

if (yy_0_1_1[0] != 37){
goto yyfl_88_17; }

yyv_E = yy_0_1_2; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_88_17:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E;



 yy yy_0_1_2;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 7){
goto yyfl_88_18; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

if (yy_0_1_1[0] != 38){
goto yyfl_88_18; }

yyv_E = yy_0_1_2; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_88_18:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_88_19; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 4){
goto yyfl_88_19; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_88_19:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E;



 yy yy_0_1_2;



 yy yyv_Id;



 yy yy_0_1_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 8){
goto yyfl_88_20; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 3){
goto yyfl_88_20; }

yyv_E = yy_0_1_2; 

yyv_Id = yy_0_1_3; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_88_20:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E;



 yy yy_0_1_2;



 yy yyv_Id;



 yy yy_0_1_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 8){
goto yyfl_88_21; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 2){
goto yyfl_88_21; }

yyv_E = yy_0_1_2; 

yyv_Id = yy_0_1_3; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_88_21:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E;



 yy yy_0_1_2;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 7){
goto yyfl_88_22; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

if (yy_0_1_1[0] != 45){
goto yyfl_88_22; }

yyv_E = yy_0_1_2; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_88_22:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_Id;



 yy yy_0_1_1;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 6){
goto yyfl_88_23; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yyv_Id = yy_0_1_1; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_88_23:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_String;



 yy yy_0_1_1;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 17){
goto yyfl_88_24; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yyv_String = yy_0_1_1; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_88_24:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_FloatConst;



 yy yy_0_1_1;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 21){
goto yyfl_88_25; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yyv_FloatConst = yy_0_1_1; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_88_25:  ; } 


retValue_acc = 0;
return (int )retValue_acc;
 

}

return (int )retValue_acc;


}
 

int test_equal_pointer_types(yyin_1,yyin_2) 

 yy yyin_1; 

 yy yyin_2;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_Q1;



 yy yy_0_1_1;



 yy yyv_Tp1;



 yy yy_0_1_2;



 yy yy_0_2;



 yy yyv_Q2;



 yy yy_0_2_1;



 yy yyv_Tp2;



 yy yy_0_2_2;



 yy yy_1_1;



 yy yy_1_2;

yy_0_1 = yyin_1; 

yy_0_2 = yyin_2; 

if (yy_0_1[0] != 5){
goto yyfl_89_1; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yyv_Q1 = yy_0_1_1; 

yyv_Tp1 = yy_0_1_2; 

if (yy_0_2[0] != 5){
goto yyfl_89_1; }

yy_0_2_1 = ((( yy )yy_0_2[1])); 

yy_0_2_2 = ((( yy )yy_0_2[2])); 

yyv_Q2 = yy_0_2_1; 

yyv_Tp2 = yy_0_2_2; 

yy_1_1 = yyv_Tp1; 

yy_1_2 = yyv_Tp2; 

if ((!test_equal_types(yy_1_1, yy_1_2))){
goto yyfl_89_1; }


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_89_1:  ; } 


retValue_acc = 0;
return (int )retValue_acc;
 

}

return (int )retValue_acc;


}
 

int is_shift(yyin_1) 

 yy yyin_1;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yy_0_1;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 11){
goto yyfl_90_1; }


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_90_1:  ; } 

{ 



 yy yyb;



 yy yy_0_1;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 12){
goto yyfl_90_2; }


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_90_2:  ; } 


retValue_acc = 0;
return (int )retValue_acc;
 

}

return (int )retValue_acc;


}
 

int is_equality_op(yyin_1) 

 yy yyin_1;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yy_0_1;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 20){
goto yyfl_91_1; }


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_91_1:  ; } 

{ 



 yy yyb;



 yy yy_0_1;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 13){
goto yyfl_91_2; }


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_91_2:  ; } 


retValue_acc = 0;
return (int )retValue_acc;
 

}

return (int )retValue_acc;


}
 

int is_relational_op(yyin_1) 

 yy yyin_1;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yy_0_1;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 15){
goto yyfl_92_1; }


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_92_1:  ; } 

{ 



 yy yyb;



 yy yy_0_1;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 14){
goto yyfl_92_2; }


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_92_2:  ; } 

{ 



 yy yyb;



 yy yy_0_1;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 16){
goto yyfl_92_3; }


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_92_3:  ; } 

{ 



 yy yyb;



 yy yy_0_1;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 17){
goto yyfl_92_4; }


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_92_4:  ; } 


retValue_acc = 0;
return (int )retValue_acc;
 

}

return (int )retValue_acc;


}
 

int test_arithmetic_type(yyin_1) 

 yy yyin_1;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_Sign;



 yy yy_0_1_1;



 yy yyv_Size;



 yy yy_0_1_2;



 yy yy_0_1_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 13){
goto yyfl_93_1; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

yyv_Sign = yy_0_1_1; 

yyv_Size = yy_0_1_2; 

if (yy_0_1_3[0] != 6){
goto yyfl_93_1; }


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_93_1:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_Sign;



 yy yy_0_1_1;



 yy yyv_Size;



 yy yy_0_1_2;



 yy yy_0_1_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 13){
goto yyfl_93_2; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

yyv_Sign = yy_0_1_1; 

yyv_Size = yy_0_1_2; 

if (yy_0_1_3[0] != 3){
goto yyfl_93_2; }


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_93_2:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_Sign;



 yy yy_0_1_1;



 yy yyv_Size;



 yy yy_0_1_2;



 yy yy_0_1_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 13){
goto yyfl_93_3; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

yyv_Sign = yy_0_1_1; 

yyv_Size = yy_0_1_2; 

if (yy_0_1_3[0] != 4){
goto yyfl_93_3; }


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_93_3:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_Sign;



 yy yy_0_1_1;



 yy yyv_Size;



 yy yy_0_1_2;



 yy yy_0_1_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 13){
goto yyfl_93_4; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

yyv_Sign = yy_0_1_1; 

yyv_Size = yy_0_1_2; 

if (yy_0_1_3[0] != 5){
goto yyfl_93_4; }


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_93_4:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_Q;



 yy yy_0_1_1;



 yy yyv_Tp;



 yy yy_0_1_2;



 yy yy_1_1;



 yy yyv_Descr;



 yy yy_1_2;



 yy yy_2_1;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 12){
goto yyfl_93_5; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yyv_Q = yy_0_1_1; 

yyv_Tp = yy_0_1_2; 

yy_1_1 = yyv_Tp; 

get_tp_descr(yy_1_1, (&yy_1_2)); 

yyv_Descr = yy_1_2; 

yy_2_1 = yyv_Descr; 

if ((!test_arithmetic_type(yy_2_1))){
goto yyfl_93_5; }


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_93_5:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_IdOpt;



 yy yy_0_1_1;



 yy yyv_AMode;



 yy yy_0_1_2;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 10){
goto yyfl_93_6; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yyv_IdOpt = yy_0_1_1; 

yyv_AMode = yy_0_1_2; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_93_6:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_Ident;



 yy yy_0_1_1;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 11){
goto yyfl_93_7; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yyv_Ident = yy_0_1_1; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_93_7:  ; } 


retValue_acc = 0;
return (int )retValue_acc;
 

}

return (int )retValue_acc;


}
 

int is_not_zero(yyin_1) 

 yy yyin_1;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yyv_X;



 yy yy_0_1;



 yy yy_1_1;



 yy yy_1_2;

yy_0_1 = yyin_1; 

yyv_X = yy_0_1; 

yy_1_1 = yyv_X; 

yy_1_2 = ((( yy )0)); 

if (((long )yy_1_1) == ((long )yy_1_2)){
goto yyfl_94_1; }


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_94_1:  ; } 


retValue_acc = 0;
return (int )retValue_acc;
 

}

return (int )retValue_acc;


}
 

int is_zero(yyin_1) 

 yy yyin_1;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yyv_X;



 yy yy_0_1;



 yy yy_1_1;



 yy yy_1_2;

yy_0_1 = yyin_1; 

yyv_X = yy_0_1; 

yy_1_1 = yyv_X; 

yy_1_2 = ((( yy )0)); 

if (((long )yy_1_1) != ((long )yy_1_2)){
goto yyfl_95_1; }


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_95_1:  ; } 


retValue_acc = 0;
return (int )retValue_acc;
 

}

return (int )retValue_acc;


}
 

int test_null_pointer_constant(yyin_1) 

 yy yyin_1;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yy_0_1;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 7){
goto yyfl_96_1; }


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_96_1:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_M;



 yy yy_0_1_1;



 yy yyv_C;



 yy yy_0_1_2;



 yy yy_1_1;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 21){
goto yyfl_96_2; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yyv_M = yy_0_1_1; 

yyv_C = yy_0_1_2; 

yy_1_1 = yyv_C; 

if ((!is_zero(yy_1_1))){
goto yyfl_96_2; }


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_96_2:  ; } 


retValue_acc = 0;
return (int )retValue_acc;
 

}

return (int )retValue_acc;


}
 

int test_scalar_type(yyin_1) 

 yy yyin_1;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yyv_Descr;



 yy yy_0_1;



 yy yy_1_1;

yy_0_1 = yyin_1; 

yyv_Descr = yy_0_1; 

yy_1_1 = yyv_Descr; 

if ((!test_arithmetic_type(yy_1_1))){
goto yyfl_97_1; }


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_97_1:  ; } 

{ 



 yy yyb;



 yy yyv_Descr;



 yy yy_0_1;



 yy yy_1_1;

yy_0_1 = yyin_1; 

yyv_Descr = yy_0_1; 

yy_1_1 = yyv_Descr; 

if ((!test_pointer(yy_1_1))){
goto yyfl_97_2; }


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_97_2:  ; } 


retValue_acc = 0;
return (int )retValue_acc;
 

}

return (int )retValue_acc;


}
 

int test_pointer(yyin_1) 

 yy yyin_1;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_Q;



 yy yy_0_1_1;



 yy yyv_Tp;



 yy yy_0_1_2;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 5){
goto yyfl_98_1; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yyv_Q = yy_0_1_1; 

yyv_Tp = yy_0_1_2; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_98_1:  ; } 


retValue_acc = 0;
return (int )retValue_acc;
 

}

return (int )retValue_acc;


}
 

int test_pointer_to_object(yyin_1) 

 yy yyin_1;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_Q;



 yy yy_0_1_1;



 yy yyv_Tp;



 yy yy_0_1_2;



 yy yy_1_1;



 yy yyv_Descr;



 yy yy_1_2;



 yy yy_2_1;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 5){
goto yyfl_99_1; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yyv_Q = yy_0_1_1; 

yyv_Tp = yy_0_1_2; 

yy_1_1 = yyv_Tp; 

get_tp_descr(yy_1_1, (&yy_1_2)); 

yyv_Descr = yy_1_2; 

yy_2_1 = yyv_Descr; 

if ((!test_not_void(yy_2_1))){
goto yyfl_99_1; }


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_99_1:  ; } 


retValue_acc = 0;
return (int )retValue_acc;
 

}

return (int )retValue_acc;


}
 

int test_not_void(yyin_1) 

 yy yyin_1;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_Q;



 yy yy_0_1_1;



 yy yyv_Tp;



 yy yy_0_1_2;



 yy yy_1_1;



 yy yyv_Descr;



 yy yy_1_2;



 yy yy_2_1;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 12){
goto yyfl_100_1; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yyv_Q = yy_0_1_1; 

yyv_Tp = yy_0_1_2; 

yy_1_1 = yyv_Tp; 

get_tp_descr(yy_1_1, (&yy_1_2)); 

yyv_Descr = yy_1_2; 

yy_2_1 = yyv_Descr; 

if ((!test_not_void(yy_2_1))){
goto yyfl_100_1; }


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_100_1:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_S1;



 yy yy_0_1_1;



 yy yyv_S2;



 yy yy_0_1_2;



 yy yy_0_1_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 13){
goto yyfl_100_2; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

yyv_S1 = yy_0_1_1; 

yyv_S2 = yy_0_1_2; 

if (yy_0_1_3[0] != 6){
goto yyfl_100_2; }


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_100_2:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_S1;



 yy yy_0_1_1;



 yy yyv_S2;



 yy yy_0_1_2;



 yy yy_0_1_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 13){
goto yyfl_100_3; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

yyv_S1 = yy_0_1_1; 

yyv_S2 = yy_0_1_2; 

if (yy_0_1_3[0] != 3){
goto yyfl_100_3; }


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_100_3:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_S1;



 yy yy_0_1_1;



 yy yyv_S2;



 yy yy_0_1_2;



 yy yy_0_1_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 13){
goto yyfl_100_4; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

yyv_S1 = yy_0_1_1; 

yyv_S2 = yy_0_1_2; 

if (yy_0_1_3[0] != 4){
goto yyfl_100_4; }


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_100_4:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_S1;



 yy yy_0_1_1;



 yy yyv_S2;



 yy yy_0_1_2;



 yy yy_0_1_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 13){
goto yyfl_100_5; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

yyv_S1 = yy_0_1_1; 

yyv_S2 = yy_0_1_2; 

if (yy_0_1_3[0] != 5){
goto yyfl_100_5; }


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_100_5:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_TgtIntConst;



 yy yy_0_1_1;



 yy yyv_Tp;



 yy yy_0_1_2;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 2){
goto yyfl_100_6; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yyv_TgtIntConst = yy_0_1_1; 

yyv_Tp = yy_0_1_2; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_100_6:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_ParamTypes;



 yy yy_0_1_1;



 yy yyv_Tp;



 yy yy_0_1_2;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 3){
goto yyfl_100_7; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yyv_ParamTypes = yy_0_1_1; 

yyv_Tp = yy_0_1_2; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_100_7:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_D;



 yy yy_0_1_1;



 yy yyv_Tp;



 yy yy_0_1_2;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 4){
goto yyfl_100_8; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yyv_D = yy_0_1_1; 

yyv_Tp = yy_0_1_2; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_100_8:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_Qual;



 yy yy_0_1_1;



 yy yyv_Tp;



 yy yy_0_1_2;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 5){
goto yyfl_100_9; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yyv_Qual = yy_0_1_1; 

yyv_Tp = yy_0_1_2; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_100_9:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_Ident;



 yy yy_0_1_1;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 6){
goto yyfl_100_10; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yyv_Ident = yy_0_1_1; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_100_10:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_Ident;



 yy yy_0_1_1;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 7){
goto yyfl_100_11; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yyv_Ident = yy_0_1_1; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_100_11:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_IdOpt;



 yy yy_0_1_1;



 yy yyv_Fields;



 yy yy_0_1_2;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 8){
goto yyfl_100_12; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yyv_IdOpt = yy_0_1_1; 

yyv_Fields = yy_0_1_2; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_100_12:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_IdOpt;



 yy yy_0_1_1;



 yy yyv_Fields;



 yy yy_0_1_2;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_100_13; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yyv_IdOpt = yy_0_1_1; 

yyv_Fields = yy_0_1_2; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_100_13:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_IdOpt;



 yy yy_0_1_1;



 yy yyv_AMode;



 yy yy_0_1_2;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 10){
goto yyfl_100_14; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yyv_IdOpt = yy_0_1_1; 

yyv_AMode = yy_0_1_2; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_100_14:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_Ident;



 yy yy_0_1_1;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 11){
goto yyfl_100_15; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yyv_Ident = yy_0_1_1; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_100_15:  ; } 


retValue_acc = 0;
return (int )retValue_acc;
 

}

return (int )retValue_acc;


}
 

int test_pointer_to_void(yyin_1) 

 yy yyin_1;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_Q;



 yy yy_0_1_1;



 yy yyv_Tp;



 yy yy_0_1_2;



 yy yy_1_1;



 yy yyv_Descr;



 yy yy_1_2;



 yy yy_2_1;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 5){
goto yyfl_101_1; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yyv_Q = yy_0_1_1; 

yyv_Tp = yy_0_1_2; 

yy_1_1 = yyv_Tp; 

get_tp_descr(yy_1_1, (&yy_1_2)); 

yyv_Descr = yy_1_2; 

yy_2_1 = yyv_Descr; 

if ((!test_void(yy_2_1))){
goto yyfl_101_1; }


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_101_1:  ; } 


retValue_acc = 0;
return (int )retValue_acc;
 

}

return (int )retValue_acc;


}
 

int test_void(yyin_1) 

 yy yyin_1;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yy_0_1_2;



 yy yy_0_1_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 13){
goto yyfl_102_1; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 1){
goto yyfl_102_1; }

if (yy_0_1_2[0] != 1){
goto yyfl_102_1; }

if (yy_0_1_3[0] != 2){
goto yyfl_102_1; }


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_102_1:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_Q;



 yy yy_0_1_1;



 yy yyv_Tp;



 yy yy_0_1_2;



 yy yy_1_1;



 yy yyv_Descr;



 yy yy_1_2;



 yy yy_2_1;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 12){
goto yyfl_102_2; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yyv_Q = yy_0_1_1; 

yyv_Tp = yy_0_1_2; 

yy_1_1 = yyv_Tp; 

get_tp_descr(yy_1_1, (&yy_1_2)); 

yyv_Descr = yy_1_2; 

yy_2_1 = yyv_Descr; 

if ((!test_void(yy_2_1))){
goto yyfl_102_2; }


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_102_2:  ; } 


retValue_acc = 0;
return (int )retValue_acc;
 

}

return (int )retValue_acc;


}
 

int test_struct_or_union_or_pointer(yyin_1) 

 yy yyin_1;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_Qual;



 yy yy_0_1_1;



 yy yyv_Tp;



 yy yy_0_1_2;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 5){
goto yyfl_103_1; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yyv_Qual = yy_0_1_1; 

yyv_Tp = yy_0_1_2; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_103_1:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_Ident;



 yy yy_0_1_1;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 6){
goto yyfl_103_2; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yyv_Ident = yy_0_1_1; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_103_2:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_Ident;



 yy yy_0_1_1;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 7){
goto yyfl_103_3; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yyv_Ident = yy_0_1_1; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_103_3:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_IdOpt;



 yy yy_0_1_1;



 yy yyv_Fields;



 yy yy_0_1_2;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 8){
goto yyfl_103_4; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yyv_IdOpt = yy_0_1_1; 

yyv_Fields = yy_0_1_2; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_103_4:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_IdOpt;



 yy yy_0_1_1;



 yy yyv_Fields;



 yy yy_0_1_2;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_103_5; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yyv_IdOpt = yy_0_1_1; 

yyv_Fields = yy_0_1_2; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_103_5:  ; } 


retValue_acc = 0;
return (int )retValue_acc;
 

}

return (int )retValue_acc;


}
 

int is_integral(yyin_1) 

 yy yyin_1;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_Sign;



 yy yy_0_1_1;



 yy yyv_Size;



 yy yy_0_1_2;



 yy yy_0_1_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 13){
goto yyfl_104_1; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

yyv_Sign = yy_0_1_1; 

yyv_Size = yy_0_1_2; 

if (yy_0_1_3[0] != 6){
goto yyfl_104_1; }


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_104_1:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_Sign;



 yy yy_0_1_1;



 yy yyv_Size;



 yy yy_0_1_2;



 yy yy_0_1_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 13){
goto yyfl_104_2; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

yyv_Sign = yy_0_1_1; 

yyv_Size = yy_0_1_2; 

if (yy_0_1_3[0] != 3){
goto yyfl_104_2; }


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_104_2:  ; } 

{ 



 yy yyb;



 yy yy_0_1;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 10){
goto yyfl_104_3; }


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_104_3:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_Qual;



 yy yy_0_1_1;



 yy yyv_Tp;



 yy yy_0_1_2;



 yy yy_1_1;



 yy yyv_D;



 yy yy_1_2;



 yy yy_2_1;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 12){
goto yyfl_104_4; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yyv_Qual = yy_0_1_1; 

yyv_Tp = yy_0_1_2; 

yy_1_1 = yyv_Tp; 

get_tp_descr(yy_1_1, (&yy_1_2)); 

yyv_D = yy_1_2; 

yy_2_1 = yyv_D; 

if ((!is_integral(yy_2_1))){
goto yyfl_104_4; }


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_104_4:  ; } 


retValue_acc = 0;
return (int )retValue_acc;
 

}

return (int )retValue_acc;


}
 

int test_not_valid_lvalue(yyin_1) 

 yy yyin_1;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yy_0_1;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 13){
goto yyfl_105_1; }


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_105_1:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_C;



 yy yy_0_1_1;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 23){
goto yyfl_105_2; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yyv_C = yy_0_1_1; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_105_2:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_C;



 yy yy_0_1_1;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 22){
goto yyfl_105_3; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yyv_C = yy_0_1_1; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_105_3:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_C;



 yy yy_0_1_1;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 19){
goto yyfl_105_4; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yyv_C = yy_0_1_1; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_105_4:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_Ident;



 yy yy_0_1_1;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 22){
goto yyfl_105_5; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yyv_Ident = yy_0_1_1; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_105_5:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_C;



 yy yy_0_1_1;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 21){
goto yyfl_105_6; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yyv_C = yy_0_1_1; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_105_6:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E;



 yy yy_0_1_2;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 7){
goto yyfl_105_7; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

if (yy_0_1_1[0] != 38){
goto yyfl_105_7; }

yyv_E = yy_0_1_2; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_105_7:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E;



 yy yy_0_1_2;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 7){
goto yyfl_105_8; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

if (yy_0_1_1[0] != 37){
goto yyfl_105_8; }

yyv_E = yy_0_1_2; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_105_8:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E;



 yy yy_0_1_2;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 7){
goto yyfl_105_9; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

if (yy_0_1_1[0] != 40){
goto yyfl_105_9; }

yyv_E = yy_0_1_2; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_105_9:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E;



 yy yy_0_1_2;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 7){
goto yyfl_105_10; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

if (yy_0_1_1[0] != 39){
goto yyfl_105_10; }

yyv_E = yy_0_1_2; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_105_10:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E;



 yy yy_0_1_2;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 7){
goto yyfl_105_11; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

if (yy_0_1_1[0] != 42){
goto yyfl_105_11; }

yyv_E = yy_0_1_2; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_105_11:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E;



 yy yy_0_1_2;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 7){
goto yyfl_105_12; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

if (yy_0_1_1[0] != 43){
goto yyfl_105_12; }

yyv_E = yy_0_1_2; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_105_12:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E;



 yy yy_0_1_2;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 7){
goto yyfl_105_13; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

if (yy_0_1_1[0] != 44){
goto yyfl_105_13; }

yyv_E = yy_0_1_2; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_105_13:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E;



 yy yy_0_1_2;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 7){
goto yyfl_105_14; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

if (yy_0_1_1[0] != 46){
goto yyfl_105_14; }

yyv_E = yy_0_1_2; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_105_14:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E;



 yy yy_0_1_2;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 7){
goto yyfl_105_15; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

if (yy_0_1_1[0] != 47){
goto yyfl_105_15; }

yyv_E = yy_0_1_2; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_105_15:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E;



 yy yy_0_1_2;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 7){
goto yyfl_105_16; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

if (yy_0_1_1[0] != 41){
goto yyfl_105_16; }

yyv_E = yy_0_1_2; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_105_16:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_T;



 yy yy_0_1_2;



 yy yyv_E;



 yy yy_0_1_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_105_17; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 36){
goto yyfl_105_17; }

yyv_T = yy_0_1_2; 

yyv_E = yy_0_1_3; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_105_17:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_105_18; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 5){
goto yyfl_105_18; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_105_18:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_105_19; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 6){
goto yyfl_105_19; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_105_19:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_105_20; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 7){
goto yyfl_105_20; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_105_20:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_105_21; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 8){
goto yyfl_105_21; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_105_21:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_105_22; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 9){
goto yyfl_105_22; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_105_22:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_105_23; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 10){
goto yyfl_105_23; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_105_23:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_105_24; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 11){
goto yyfl_105_24; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_105_24:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_105_25; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 12){
goto yyfl_105_25; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_105_25:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_105_26; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 13){
goto yyfl_105_26; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_105_26:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_105_27; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 20){
goto yyfl_105_27; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_105_27:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_105_28; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 14){
goto yyfl_105_28; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_105_28:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_105_29; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 15){
goto yyfl_105_29; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_105_29:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_105_30; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 16){
goto yyfl_105_30; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_105_30:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_105_31; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 17){
goto yyfl_105_31; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_105_31:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_105_32; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 18){
goto yyfl_105_32; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_105_32:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_105_33; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 19){
goto yyfl_105_33; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_105_33:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_105_34; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 21){
goto yyfl_105_34; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_105_34:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_105_35; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 23){
goto yyfl_105_35; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_105_35:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_105_36; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 22){
goto yyfl_105_36; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_105_36:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_105_37; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 24){
goto yyfl_105_37; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_105_37:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_105_38; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 25){
goto yyfl_105_38; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_105_38:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_105_39; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 26){
goto yyfl_105_39; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_105_39:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_105_40; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 27){
goto yyfl_105_40; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_105_40:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_105_41; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 24){
goto yyfl_105_41; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_105_41:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_105_42; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 28){
goto yyfl_105_42; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_105_42:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_105_43; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 29){
goto yyfl_105_43; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_105_43:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_105_44; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 30){
goto yyfl_105_44; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_105_44:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_105_45; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 31){
goto yyfl_105_45; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_105_45:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_105_46; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 32){
goto yyfl_105_46; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_105_46:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_105_47; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 33){
goto yyfl_105_47; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_105_47:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_105_48; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 34){
goto yyfl_105_48; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_105_48:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_105_49; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

if (yy_0_1_1[0] != 35){
goto yyfl_105_49; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_105_49:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_E1;



 yy yy_0_1_2;



 yy yyv_E2;



 yy yy_0_1_3;



 yy yyv_E3;



 yy yy_0_1_4;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 10){
goto yyfl_105_50; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

yy_0_1_4 = ((( yy )yy_0_1[4])); 

if (yy_0_1_1[0] != 1){
goto yyfl_105_50; }

yyv_E1 = yy_0_1_2; 

yyv_E2 = yy_0_1_3; 

yyv_E3 = yy_0_1_4; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_105_50:  ; } 


retValue_acc = 0;
return (int )retValue_acc;
 

}

return (int )retValue_acc;


}
 

int test_modifiable_lvalue(yyin_1) 

 yy yyin_1;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_TgtIntConst;



 yy yy_0_1_1;



 yy yyv_Tp;



 yy yy_0_1_2;



 yy yy_1_1;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 2){
goto yyfl_106_1; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yyv_TgtIntConst = yy_0_1_1; 

yyv_Tp = yy_0_1_2; 

yy_1_1 = ((( yy )"array type is not a modifiable lvalue")); 

semantic_error(yy_1_1); 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_106_1:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_ParamTypes;



 yy yy_0_1_1;



 yy yyv_Tp;



 yy yy_0_1_2;



 yy yy_1_1;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 3){
goto yyfl_106_2; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yyv_ParamTypes = yy_0_1_1; 

yyv_Tp = yy_0_1_2; 

yy_1_1 = ((( yy )"function type is not a modifiable lvalue")); 

semantic_error(yy_1_1); 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_106_2:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_L;



 yy yy_0_1_1;



 yy yyv_Tp;



 yy yy_0_1_2;



 yy yy_1_1;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 4){
goto yyfl_106_3; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yyv_L = yy_0_1_1; 

yyv_Tp = yy_0_1_2; 

yy_1_1 = ((( yy )"function type is not a modifiable lvalue")); 

semantic_error(yy_1_1); 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_106_3:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_Tp;



 yy yy_0_1_2;



 yy yy_1_1;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 12){
goto yyfl_106_4; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

if (yy_0_1_1[0] != 3){
goto yyfl_106_4; }

yyv_Tp = yy_0_1_2; 

yy_1_1 = ((( yy )"type is not a modifiable lvalue")); 

semantic_error(yy_1_1); 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_106_4:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_Tp;



 yy yy_0_1_2;



 yy yy_1_1;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 12){
goto yyfl_106_5; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

if (yy_0_1_1[0] != 1){
goto yyfl_106_5; }

yyv_Tp = yy_0_1_2; 

yy_1_1 = ((( yy )"type is not a modifiable lvalue")); 

semantic_error(yy_1_1); 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_106_5:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_Tp;



 yy yy_0_1_2;



 yy yy_1_1;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 5){
goto yyfl_106_6; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

if (yy_0_1_1[0] != 3){
goto yyfl_106_6; }

yyv_Tp = yy_0_1_2; 

yy_1_1 = ((( yy )"type is not a modifiable lvalue")); 

semantic_error(yy_1_1); 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_106_6:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yyv_Tp;



 yy yy_0_1_2;



 yy yy_1_1;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 5){
goto yyfl_106_7; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

if (yy_0_1_1[0] != 1){
goto yyfl_106_7; }

yyv_Tp = yy_0_1_2; 

yy_1_1 = ((( yy )"type is not a modifiable lvalue")); 

semantic_error(yy_1_1); 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_106_7:  ; } 

{ 



 yy yyb;



 yy yyv_Descr;



 yy yy_0_1;

yy_0_1 = yyin_1; 

yyv_Descr = yy_0_1; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_106_8:  ; } 


retValue_acc = 0;
return (int )retValue_acc;
 

}

return (int )retValue_acc;


}
 

int is_pointer_to_function_type(yyin_1,yyout_1,yyout_2) 

 yy yyin_1; 

 yy *yyout_1; 

 yy *yyout_2;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_Q;



 yy yy_0_1_1;



 yy yyv_Tp;



 yy yy_0_1_2;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_1_1;



 yy yyv_Descr;



 yy yy_1_2;



 yy yy_2_1;



 yy yyv_Tp1;



 yy yy_2_2;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 5){
goto yyfl_107_1; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yyv_Q = yy_0_1_1; 

yyv_Tp = yy_0_1_2; 

yy_1_1 = yyv_Tp; 

get_tp_descr(yy_1_1, (&yy_1_2)); 

yyv_Descr = yy_1_2; 

yy_2_1 = yyv_Descr; 

if ((!is_function_type(yy_2_1, (&yy_2_2)))){
goto yyfl_107_1; }

yyv_Tp1 = yy_2_2; 

yy_0_2 = yyv_Tp1; 

yy_0_3 = yyv_Tp; 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_107_1:  ; } 


retValue_acc = 0;
return (int )retValue_acc;
 

}

return (int )retValue_acc;


}
 

int is_function_type(yyin_1,yyout_1) 

 yy yyin_1; 

 yy *yyout_1;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_ParamTypes;



 yy yy_0_1_1;



 yy yyv_Tp;



 yy yy_0_1_2;



 yy yy_0_2;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 3){
goto yyfl_108_1; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yyv_ParamTypes = yy_0_1_1; 

yyv_Tp = yy_0_1_2; 

yy_0_2 = yyv_Tp; 

(*yyout_1) = yy_0_2; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_108_1:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_D;



 yy yy_0_1_1;



 yy yyv_Tp;



 yy yy_0_1_2;



 yy yy_0_2;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 4){
goto yyfl_108_2; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yyv_D = yy_0_1_1; 

yyv_Tp = yy_0_1_2; 

yy_0_2 = yyv_Tp; 

(*yyout_1) = yy_0_2; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_108_2:  ; } 


retValue_acc = 0;
return (int )retValue_acc;
 

}

return (int )retValue_acc;


}
 

int test_pointer_to_function_and_get_return_and_function_type(yyin_1,yyout_1,yyout_2) 

 yy yyin_1; 

 yy *yyout_1; 

 yy *yyout_2;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yyv_Tp;



 yy yy_0_1;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_1_1;



 yy yyv_Descr;



 yy yy_1_2;



 yy yy_2_1;



 yy yyv_Tp1;



 yy yy_2_2;



 yy yyv_TpF;



 yy yy_2_3;

yy_0_1 = yyin_1; 

yyv_Tp = yy_0_1; 

yy_1_1 = yyv_Tp; 

get_tp_descr(yy_1_1, (&yy_1_2)); 

yyv_Descr = yy_1_2; 

yy_2_1 = yyv_Descr; 

if ((!is_pointer_to_function_type(yy_2_1, (&yy_2_2), (&yy_2_3)))){
goto yyfl_109_1; }

yyv_Tp1 = yy_2_2; 

yyv_TpF = yy_2_3; 

yy_0_2 = yyv_Tp1; 

yy_0_3 = yyv_TpF; 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_109_1:  ; } 

{ 



 yy yyb;



 yy yyv_Tp;



 yy yy_0_1;



 yy yy_0_2;



 yy yy_0_3;



 yy yy_1_1;

yy_0_1 = yyin_1; 

yyv_Tp = yy_0_1; 

yy_1_1 = ((( yy )"type is not pointer to function")); 

semantic_error(yy_1_1); 

yy_0_2 = yyv_Tp; 

yy_0_3 = yyv_Tp; 

(*yyout_1) = yy_0_2; 

(*yyout_2) = yy_0_3; 


retValue_acc = 1;
return (int )retValue_acc;
 

yyfl_109_2:  ; } 


retValue_acc = 0;
return (int )retValue_acc;
 

}

return (int )retValue_acc;


}
 

TrafoStatement(yyin_1,yyout_1) 

 yy yyin_1; 

 yy *yyout_1;  
{
int retValue_acc;




{


{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_L;



 yy yy_0_1_1;



 yy yy_0_2;



 yy yy_1_1;



 yy yyv_LC;



 yy yy_1_2;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 5){
goto yyfl_112_1; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yyv_L = yy_0_1_1; 

yy_1_1 = yyv_L; 

TrafoStatement(yy_1_1, (&yy_1_2)); 

yyv_LC = yy_1_2; 

yy_0_2 = yyv_LC; 

(*yyout_1) = yy_0_2; 


return (int )retValue_acc;
 

yyfl_112_1:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_L;



 yy yy_0_1_1;



 yy yy_0_2;



 yy yy_2_1;



 yy yyv_LC;



 yy yy_2_2;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 6){
goto yyfl_112_2; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yyv_L = yy_0_1_1; 

enter_scope(); 

yy_2_1 = yyv_L; 

TrafoStatement(yy_2_1, (&yy_2_2)); 

yyv_LC = yy_2_2; 

leave_scope(); 

yy_0_2 = yyv_LC; 

(*yyout_1) = yy_0_2; 


return (int )retValue_acc;
 

yyfl_112_2:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_InitExpr;



 yy yy_0_1_1;



 yy yyv_TestExpr;



 yy yy_0_1_2;



 yy yyv_IncExpr;



 yy yy_0_1_3;



 yy yyv_S;



 yy yy_0_1_4;



 yy yy_0_2;



 yy yy_0_2_1;



 yy yy_0_2_2;



 yy yy_0_2_3;



 yy yy_0_2_4;



 yy yy_0_2_5;



 yy yy_0_2_6;



 yy yy_0_2_7;



 yy yyv_EndLabel;



 yy yy_1_1;



 yy yyv_Continue;



 yy yy_2_1;



 yy yy_3_1;



 yy yy_4_1;



 yy yy_5_1;



 yy yyv_InitExprC;



 yy yy_5_2;



 yy yy_6_1;



 yy yyv_SC;



 yy yy_6_2;



 yy yy_7_1;



 yy yyv_IncExprC;



 yy yy_7_2;



 yy yy_8_1;



 yy yyv_AMode;



 yy yy_8_2;



 yy yyv_TestExprC;



 yy yy_8_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 4){
goto yyfl_112_3; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

yy_0_1_4 = ((( yy )yy_0_1[4])); 

yyv_InitExpr = yy_0_1_1; 

yyv_TestExpr = yy_0_1_2; 

yyv_IncExpr = yy_0_1_3; 

yyv_S = yy_0_1_4; 

yyb = yyh; 

yyh += 8; 

if (yyh > yyhx){
yyExtend(); }

cg_new_label((&yy_1_1)); 

yyv_EndLabel = yy_1_1; 

cg_new_label((&yy_2_1)); 

yyv_Continue = yy_2_1; 

yy_3_1 = yyv_EndLabel; 

pushEndLabelStack(yy_3_1); 

yy_4_1 = yyv_Continue; 

pushContinueStack(yy_4_1); 

yy_5_1 = yyv_InitExpr; 

trafo_init_or_inc_expr(yy_5_1, (&yy_5_2)); 

yyv_InitExprC = yy_5_2; 

yy_6_1 = yyv_S; 

TrafoStatement(yy_6_1, (&yy_6_2)); 

yyv_SC = yy_6_2; 

yy_7_1 = yyv_IncExpr; 

trafo_init_or_inc_expr(yy_7_1, (&yy_7_2)); 

yyv_IncExprC = yy_7_2; 

yy_8_1 = yyv_TestExpr; 

trafo_test_expr(yy_8_1, (&yy_8_2), (&yy_8_3)); 

yyv_AMode = yy_8_2; 

yyv_TestExprC = yy_8_3; 

popEndLabelStack(); 

popContinueStack(); 

yy_0_2_1 = yyv_InitExprC; 

yy_0_2_2 = yyv_TestExprC; 

yy_0_2_3 = yyv_IncExprC; 

yy_0_2_4 = yyv_SC; 

yy_0_2_5 = yyv_AMode; 

yy_0_2_6 = yyv_EndLabel; 

yy_0_2_7 = yyv_Continue; 

yy_0_2 = yyb + 0; 

yy_0_2[0] = 4; 

yy_0_2[1] = (((long )yy_0_2_1)); 

yy_0_2[2] = (((long )yy_0_2_2)); 

yy_0_2[3] = (((long )yy_0_2_3)); 

yy_0_2[4] = (((long )yy_0_2_4)); 

yy_0_2[5] = (((long )yy_0_2_5)); 

yy_0_2[6] = (((long )yy_0_2_6)); 

yy_0_2[7] = (((long )yy_0_2_7)); 

(*yyout_1) = yy_0_2; 


return (int )retValue_acc;
 

yyfl_112_3:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_E;



 yy yy_0_1_1;



 yy yyv_S;



 yy yy_0_1_2;



 yy yy_0_2;



 yy yy_0_2_1;



 yy yy_0_2_2;



 yy yy_0_2_3;



 yy yy_0_2_4;



 yy yy_0_2_5;



 yy yyv_EndLabel;



 yy yy_1_1;



 yy yyv_Continue;



 yy yy_2_1;



 yy yy_3_1;



 yy yy_4_1;



 yy yy_5_1;



 yy yyv_SC;



 yy yy_5_2;



 yy yy_6_1;



 yy yyv_Tp;



 yy yy_6_2;



 yy yyv_EC;



 yy yy_6_3;



 yy yy_7_1;



 yy yyv_D;



 yy yy_7_2;



 yy yy_8_1;



 yy yy_9_1;



 yy yyv_AMode;



 yy yy_9_2;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 2){
goto yyfl_112_4; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yyv_E = yy_0_1_1; 

yyv_S = yy_0_1_2; 

yyb = yyh; 

yyh += 6; 

if (yyh > yyhx){
yyExtend(); }

cg_new_label((&yy_1_1)); 

yyv_EndLabel = yy_1_1; 

cg_new_label((&yy_2_1)); 

yyv_Continue = yy_2_1; 

yy_3_1 = yyv_EndLabel; 

pushEndLabelStack(yy_3_1); 

yy_4_1 = yyv_Continue; 

pushContinueStack(yy_4_1); 

yy_5_1 = yyv_S; 

TrafoStatement(yy_5_1, (&yy_5_2)); 

yyv_SC = yy_5_2; 

yy_6_1 = yyv_E; 

trafo_expr_rvalue(yy_6_1, (&yy_6_2), (&yy_6_3)); 

yyv_Tp = yy_6_2; 

yyv_EC = yy_6_3; 

yy_7_1 = yyv_Tp; 

get_tp_descr(yy_7_1, (&yy_7_2)); 

yyv_D = yy_7_2; 

yy_8_1 = yyv_D; 

scalar_type_or_error(yy_8_1); 

yy_9_1 = yyv_D; 

td_map_to_mode(yy_9_1, (&yy_9_2)); 

yyv_AMode = yy_9_2; 

popContinueStack(); 

popEndLabelStack(); 

yy_0_2_1 = yyv_EC; 

yy_0_2_2 = yyv_SC; 

yy_0_2_3 = yyv_AMode; 

yy_0_2_4 = yyv_EndLabel; 

yy_0_2_5 = yyv_Continue; 

yy_0_2 = yyb + 0; 

yy_0_2[0] = 5; 

yy_0_2[1] = (((long )yy_0_2_1)); 

yy_0_2[2] = (((long )yy_0_2_2)); 

yy_0_2[3] = (((long )yy_0_2_3)); 

yy_0_2[4] = (((long )yy_0_2_4)); 

yy_0_2[5] = (((long )yy_0_2_5)); 

(*yyout_1) = yy_0_2; 


return (int )retValue_acc;
 

yyfl_112_4:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_E;



 yy yy_0_1_1;



 yy yyv_S;



 yy yy_0_1_2;



 yy yy_0_2;



 yy yy_0_2_1;



 yy yy_0_2_2;



 yy yy_0_2_3;



 yy yy_0_2_4;



 yy yy_0_2_5;



 yy yyv_EndLabel;



 yy yy_1_1;



 yy yyv_TestLabel;



 yy yy_2_1;



 yy yy_3_1;



 yy yy_4_1;



 yy yy_5_1;



 yy yyv_SC;



 yy yy_5_2;



 yy yy_6_1;



 yy yyv_Tp;



 yy yy_6_2;



 yy yyv_EC;



 yy yy_6_3;



 yy yy_7_1;



 yy yyv_D;



 yy yy_7_2;



 yy yy_8_1;



 yy yy_9_1;



 yy yyv_AMode;



 yy yy_9_2;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 3){
goto yyfl_112_5; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yyv_E = yy_0_1_1; 

yyv_S = yy_0_1_2; 

yyb = yyh; 

yyh += 6; 

if (yyh > yyhx){
yyExtend(); }

cg_new_label((&yy_1_1)); 

yyv_EndLabel = yy_1_1; 

cg_new_label((&yy_2_1)); 

yyv_TestLabel = yy_2_1; 

yy_3_1 = yyv_EndLabel; 

pushEndLabelStack(yy_3_1); 

yy_4_1 = yyv_TestLabel; 

pushContinueStack(yy_4_1); 

yy_5_1 = yyv_S; 

TrafoStatement(yy_5_1, (&yy_5_2)); 

yyv_SC = yy_5_2; 

yy_6_1 = yyv_E; 

trafo_expr_rvalue(yy_6_1, (&yy_6_2), (&yy_6_3)); 

yyv_Tp = yy_6_2; 

yyv_EC = yy_6_3; 

yy_7_1 = yyv_Tp; 

get_tp_descr(yy_7_1, (&yy_7_2)); 

yyv_D = yy_7_2; 

yy_8_1 = yyv_D; 

scalar_type_or_error(yy_8_1); 

yy_9_1 = yyv_D; 

td_map_to_mode(yy_9_1, (&yy_9_2)); 

yyv_AMode = yy_9_2; 

popContinueStack(); 

popEndLabelStack(); 

yy_0_2_1 = yyv_EC; 

yy_0_2_2 = yyv_SC; 

yy_0_2_3 = yyv_AMode; 

yy_0_2_4 = yyv_EndLabel; 

yy_0_2_5 = yyv_TestLabel; 

yy_0_2 = yyb + 0; 

yy_0_2[0] = 6; 

yy_0_2[1] = (((long )yy_0_2_1)); 

yy_0_2[2] = (((long )yy_0_2_2)); 

yy_0_2[3] = (((long )yy_0_2_3)); 

yy_0_2[4] = (((long )yy_0_2_4)); 

yy_0_2[5] = (((long )yy_0_2_5)); 

(*yyout_1) = yy_0_2; 


return (int )retValue_acc;
 

yyfl_112_5:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yy_0_2;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 1){
goto yyfl_112_6; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

if (yy_0_1_1[0] != 13){
goto yyfl_112_6; }

yyb = yyh; 

yyh += 1; 

if (yyh > yyhx){
yyExtend(); }

yy_0_2 = yyb + 0; 

yy_0_2[0] = 2; 

(*yyout_1) = yy_0_2; 


return (int )retValue_acc;
 

yyfl_112_6:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_E;



 yy yy_0_1_1;



 yy yy_0_2;



 yy yy_0_2_1;



 yy yy_1_1;



 yy yyv_Tp;



 yy yy_1_2;



 yy yyv_EC;



 yy yy_1_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 1){
goto yyfl_112_7; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yyv_E = yy_0_1_1; 

yyb = yyh; 

yyh += 2; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_E; 

trafo_expr_rvalue(yy_1_1, (&yy_1_2), (&yy_1_3)); 

yyv_Tp = yy_1_2; 

yyv_EC = yy_1_3; 

yy_0_2_1 = yyv_EC; 

yy_0_2 = yyb + 0; 

yy_0_2[0] = 10; 

yy_0_2[1] = (((long )yy_0_2_1)); 

(*yyout_1) = yy_0_2; 


return (int )retValue_acc;
 

yyfl_112_7:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_Labelname;



 yy yy_0_1_1;



 yy yyv_GccAttr;



 yy yy_0_1_2;



 yy yyv_Statement;



 yy yy_0_1_3;



 yy yy_0_2;



 yy yy_0_2_1;



 yy yy_0_2_1_1;



 yy yy_0_2_2;



 yy yy_1_1;



 yy yyv_L;



 yy yy_2_1;



 yy yy_3_1;



 yy yy_3_2;



 yy yyv_Label;



 yy yy_3_3;



 yy yy_4_1;



 yy yyv_StatementC;



 yy yy_4_2;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 7){
goto yyfl_112_8; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

yyv_Labelname = yy_0_1_1; 

yyv_GccAttr = yy_0_1_2; 

yyv_Statement = yy_0_1_3; 

yyb = yyh; 

yyh += 5; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_Labelname; 

declare_label_if_not_double_declaration(yy_1_1); 

GETVarFullLabelList((&yy_2_1)); 

yyv_L = yy_2_1; 

yy_3_1 = yyv_Labelname; 

yy_3_2 = yyv_L; 

declare_not_yet_declared_label(yy_3_1, yy_3_2, (&yy_3_3)); 

yyv_Label = yy_3_3; 

yy_4_1 = yyv_Statement; 

TrafoStatement(yy_4_1, (&yy_4_2)); 

yyv_StatementC = yy_4_2; 

yy_0_2_1_1 = yyv_Label; 

yy_0_2_1 = yyb + 3; 

yy_0_2_1[0] = 11; 

yy_0_2_1[1] = (((long )yy_0_2_1_1)); 

yy_0_2_2 = yyv_StatementC; 

yy_0_2 = yyb + 0; 

yy_0_2[0] = 3; 

yy_0_2[1] = (((long )yy_0_2_1)); 

yy_0_2[2] = (((long )yy_0_2_2)); 

(*yyout_1) = yy_0_2; 


return (int )retValue_acc;
 

yyfl_112_8:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_Expression;



 yy yy_0_1_1;



 yy yyv_Statement;



 yy yy_0_1_2;



 yy yy_0_2;



 yy yy_0_2_1;



 yy yy_0_2_2;



 yy yy_0_2_3;



 yy yy_1_1;



 yy yyv_Tp;



 yy yy_1_2;



 yy yyv_ExpressionC;



 yy yy_1_3;



 yy yy_2_1;



 yy yyv_D;



 yy yy_2_2;



 yy yy_3_1;



 yy yy_4_1;



 yy yyv_AMode;



 yy yy_4_2;



 yy yy_5_1;



 yy yyv_StatementC;



 yy yy_5_2;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 10){
goto yyfl_112_9; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yyv_Expression = yy_0_1_1; 

yyv_Statement = yy_0_1_2; 

yyb = yyh; 

yyh += 4; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_Expression; 

trafo_expr_rvalue(yy_1_1, (&yy_1_2), (&yy_1_3)); 

yyv_Tp = yy_1_2; 

yyv_ExpressionC = yy_1_3; 

yy_2_1 = yyv_Tp; 

get_tp_descr(yy_2_1, (&yy_2_2)); 

yyv_D = yy_2_2; 

yy_3_1 = yyv_D; 

scalar_type_or_error(yy_3_1); 

yy_4_1 = yyv_D; 

td_map_to_mode(yy_4_1, (&yy_4_2)); 

yyv_AMode = yy_4_2; 

yy_5_1 = yyv_Statement; 

TrafoStatement(yy_5_1, (&yy_5_2)); 

yyv_StatementC = yy_5_2; 

yy_0_2_1 = yyv_ExpressionC; 

yy_0_2_2 = yyv_StatementC; 

yy_0_2_3 = yyv_AMode; 

yy_0_2 = yyb + 0; 

yy_0_2[0] = 7; 

yy_0_2[1] = (((long )yy_0_2_1)); 

yy_0_2[2] = (((long )yy_0_2_2)); 

yy_0_2[3] = (((long )yy_0_2_3)); 

(*yyout_1) = yy_0_2; 


return (int )retValue_acc;
 

yyfl_112_9:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_E;



 yy yy_0_1_1;



 yy yyv_Stmt1;



 yy yy_0_1_2;



 yy yyv_Stmt2;



 yy yy_0_1_3;



 yy yy_0_2;



 yy yy_0_2_1;



 yy yy_0_2_2;



 yy yy_0_2_3;



 yy yy_0_2_4;



 yy yy_1_1;



 yy yyv_Tp;



 yy yy_1_2;



 yy yyv_EC;



 yy yy_1_3;



 yy yy_2_1;



 yy yyv_D;



 yy yy_2_2;



 yy yy_3_1;



 yy yy_4_1;



 yy yyv_AMode;



 yy yy_4_2;



 yy yy_5_1;



 yy yyv_Stmt1C;



 yy yy_5_2;



 yy yy_6_1;



 yy yyv_Stmt2C;



 yy yy_6_2;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 11){
goto yyfl_112_10; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yy_0_1_3 = ((( yy )yy_0_1[3])); 

yyv_E = yy_0_1_1; 

yyv_Stmt1 = yy_0_1_2; 

yyv_Stmt2 = yy_0_1_3; 

yyb = yyh; 

yyh += 5; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_E; 

trafo_expr_rvalue(yy_1_1, (&yy_1_2), (&yy_1_3)); 

yyv_Tp = yy_1_2; 

yyv_EC = yy_1_3; 

yy_2_1 = yyv_Tp; 

get_tp_descr(yy_2_1, (&yy_2_2)); 

yyv_D = yy_2_2; 

yy_3_1 = yyv_D; 

scalar_type_or_error(yy_3_1); 

yy_4_1 = yyv_D; 

td_map_to_mode(yy_4_1, (&yy_4_2)); 

yyv_AMode = yy_4_2; 

yy_5_1 = yyv_Stmt1; 

TrafoStatement(yy_5_1, (&yy_5_2)); 

yyv_Stmt1C = yy_5_2; 

yy_6_1 = yyv_Stmt2; 

TrafoStatement(yy_6_1, (&yy_6_2)); 

yyv_Stmt2C = yy_6_2; 

yy_0_2_1 = yyv_EC; 

yy_0_2_2 = yyv_Stmt1C; 

yy_0_2_3 = yyv_Stmt2C; 

yy_0_2_4 = yyv_AMode; 

yy_0_2 = yyb + 0; 

yy_0_2[0] = 8; 

yy_0_2[1] = (((long )yy_0_2_1)); 

yy_0_2[2] = (((long )yy_0_2_2)); 

yy_0_2[3] = (((long )yy_0_2_3)); 

yy_0_2[4] = (((long )yy_0_2_4)); 

(*yyout_1) = yy_0_2; 


return (int )retValue_acc;
 

yyfl_112_10:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_E;



 yy yy_0_1_1;



 yy yyv_Stmt;



 yy yy_0_1_2;



 yy yy_0_2;



 yy yy_0_2_1;



 yy yy_0_2_2;



 yy yy_0_2_3;



 yy yy_0_2_4;



 yy yy_0_2_5;



 yy yy_0_2_6;



 yy yyv_EndLabel;



 yy yy_1_1;



 yy yy_2_1;



 yy yy_3_1;



 yy yyv_Tp;



 yy yy_3_2;



 yy yyv_IR;



 yy yy_3_3;



 yy yy_4_1;



 yy yy_5_1;



 yy yyv_D;



 yy yy_5_2;



 yy yy_6_1;



 yy yy_6_2;



 yy yyv_D2;



 yy yy_6_3;



 yy yyv_IR2;



 yy yy_6_4;



 yy yy_7_1;



 yy yyv_Tp2;



 yy yy_7_2;



 yy yyv_OldStack;



 yy yy_8;



 yy yy_9;



 yy yy_9_1;



 yy yy_9_1_1;



 yy yy_9_1_2;



 yy yy_9_1_3;



 yy yy_9_1_4;



 yy yy_9_1_5;



 yy yy_9_2;



 yy yy_10_1;



 yy yyv_StmtC;



 yy yy_10_2;



 yy yy_11;



 yy yy_11_1;



 yy yyv_SIR;



 yy yy_11_1_1;



 yy yyv_STp;



 yy yy_11_1_2;



 yy yyv_CaseList;



 yy yy_11_1_3;



 yy yyv_Default;



 yy yy_11_1_4;



 yy yyv_Label;



 yy yy_11_1_5;



 yy yy_11_2;



 yy yy_12_1;



 yy yyv_SD;



 yy yy_12_2;



 yy yy_13_1;



 yy yyv_AMode;



 yy yy_13_2;



 yy yy_14_1;



 yy yy_14_2;



 yy yyv_SDefault;



 yy yy_14_3;



 yy yy_15;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 12){
goto yyfl_112_11; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yyv_E = yy_0_1_1; 

yyv_Stmt = yy_0_1_2; 

yyb = yyh; 

yyh += 18; 

if (yyh > yyhx){
yyExtend(); }

cg_new_label((&yy_1_1)); 

yyv_EndLabel = yy_1_1; 

yy_2_1 = yyv_EndLabel; 

pushEndLabelStack(yy_2_1); 

yy_3_1 = yyv_E; 

trafo_expr_rvalue(yy_3_1, (&yy_3_2), (&yy_3_3)); 

yyv_Tp = yy_3_2; 

yyv_IR = yy_3_3; 

yy_4_1 = yyv_Tp; 

integral_type_or_error(yy_4_1); 

yy_5_1 = yyv_Tp; 

get_tp_descr(yy_5_1, (&yy_5_2)); 

yyv_D = yy_5_2; 

yy_6_1 = yyv_D; 

yy_6_2 = yyv_IR; 

perform_integral_promotions(yy_6_1, yy_6_2, (&yy_6_3), (&yy_6_4)); 

yyv_D2 = yy_6_3; 

yyv_IR2 = yy_6_4; 

yy_7_1 = yyv_D2; 

make_type_and_size(yy_7_1, (&yy_7_2)); 

yyv_Tp2 = yy_7_2; 

yy_8 = yyglov_Var_SwitchStack; 

if (yy_8 == (( yy )((-2147483647L)))){
yyErr(1, 2637); }

yyv_OldStack = yy_8; 

yy_9_1_1 = yyv_IR2; 

yy_9_1_2 = yyv_Tp2; 

yy_9_1_3 = yyb + 16; 

yy_9_1_3[0] = 2; 

yy_9_1_4 = yyb + 17; 

yy_9_1_4[0] = 1; 

yy_9_1_5 = yyv_EndLabel; 

yy_9_1 = yyb + 10; 

yy_9_1[0] = 1; 

yy_9_1[1] = (((long )yy_9_1_1)); 

yy_9_1[2] = (((long )yy_9_1_2)); 

yy_9_1[3] = (((long )yy_9_1_3)); 

yy_9_1[4] = (((long )yy_9_1_4)); 

yy_9_1[5] = (((long )yy_9_1_5)); 

yy_9_2 = yyv_OldStack; 

yy_9 = yyb + 7; 

yy_9[0] = 1; 

yy_9[1] = (((long )yy_9_1)); 

yy_9[2] = (((long )yy_9_2)); 

yyglov_Var_SwitchStack = yy_9; 

yy_10_1 = yyv_Stmt; 

TrafoStatement(yy_10_1, (&yy_10_2)); 

yyv_StmtC = yy_10_2; 

yy_11 = yyglov_Var_SwitchStack; 

if (yy_11 == (( yy )((-2147483647L)))){
yyErr(1, 2644); }

if (yy_11[0] != 1){
goto yyfl_112_11; }

yy_11_1 = ((( yy )yy_11[1])); 

yy_11_2 = ((( yy )yy_11[2])); 

if (yy_11_1[0] != 1){
goto yyfl_112_11; }

yy_11_1_1 = ((( yy )yy_11_1[1])); 

yy_11_1_2 = ((( yy )yy_11_1[2])); 

yy_11_1_3 = ((( yy )yy_11_1[3])); 

yy_11_1_4 = ((( yy )yy_11_1[4])); 

yy_11_1_5 = ((( yy )yy_11_1[5])); 

yyv_SIR = yy_11_1_1; 

yyv_STp = yy_11_1_2; 

yyv_CaseList = yy_11_1_3; 

yyv_Default = yy_11_1_4; 

yyv_Label = yy_11_1_5; 

yy_12_1 = yyv_STp; 

get_tp_descr(yy_12_1, (&yy_12_2)); 

yyv_SD = yy_12_2; 

yy_13_1 = yyv_SD; 

td_map_to_mode(yy_13_1, (&yy_13_2)); 

yyv_AMode = yy_13_2; 

yy_14_1 = yyv_Default; 

yy_14_2 = yyv_Label; 

compute_default_label(yy_14_1, yy_14_2, (&yy_14_3)); 

yyv_SDefault = yy_14_3; 

yy_15 = yyv_OldStack; 

yyglov_Var_SwitchStack = yy_15; 

popEndLabelStack(); 

yy_0_2_1 = yyv_SIR; 

yy_0_2_2 = yyv_AMode; 

yy_0_2_3 = yyv_CaseList; 

yy_0_2_4 = yyv_SDefault; 

yy_0_2_5 = yyv_EndLabel; 

yy_0_2_6 = yyv_StmtC; 

yy_0_2 = yyb + 0; 

yy_0_2[0] = 12; 

yy_0_2[1] = (((long )yy_0_2_1)); 

yy_0_2[2] = (((long )yy_0_2_2)); 

yy_0_2[3] = (((long )yy_0_2_3)); 

yy_0_2[4] = (((long )yy_0_2_4)); 

yy_0_2[5] = (((long )yy_0_2_5)); 

yy_0_2[6] = (((long )yy_0_2_6)); 

(*yyout_1) = yy_0_2; 


return (int )retValue_acc;
 

yyfl_112_11:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_Expression;



 yy yy_0_1_1;



 yy yyv_Statement;



 yy yy_0_1_2;



 yy yy_0_2;



 yy yy_0_2_1;



 yy yy_0_2_1_1;



 yy yy_0_2_2;



 yy yyv_CaseLabel;



 yy yy_1_1;



 yy yy_2_1;



 yy yyv_IR;



 yy yy_2_2;



 yy yyv_Tp;



 yy yy_3_1;



 yy yy_4_1;



 yy yyv_D;



 yy yy_4_2;



 yy yy_5;



 yy yy_5_1;



 yy yyv_IR0;



 yy yy_5_1_1;



 yy yyv_Tp0;



 yy yy_5_1_2;



 yy yyv_L;



 yy yy_5_1_3;



 yy yyv_Default;



 yy yy_5_1_4;



 yy yyv_EndLabel;



 yy yy_5_1_5;



 yy yyv_OldStack;



 yy yy_5_2;



 yy yy_6_1;



 yy yyv_D0;



 yy yy_6_2;



 yy yy_7_1;



 yy yy_7_2;



 yy yy_7_3;



 yy yyv_IRC;



 yy yy_7_4;



 yy yy_8;



 yy yy_8_1;



 yy yy_8_1_1;



 yy yy_8_1_2;



 yy yy_8_1_3;



 yy yy_8_1_3_1;



 yy yy_8_1_3_1_1;



 yy yy_8_1_3_1_2;



 yy yy_8_1_3_2;



 yy yy_8_1_4;



 yy yy_8_1_5;



 yy yy_8_2;



 yy yy_9_1;



 yy yyv_StatementC;



 yy yy_9_2;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 8){
goto yyfl_112_12; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yy_0_1_2 = ((( yy )yy_0_1[2])); 

yyv_Expression = yy_0_1_1; 

yyv_Statement = yy_0_1_2; 

yyb = yyh; 

yyh += 20; 

if (yyh > yyhx){
yyExtend(); }

cg_new_label((&yy_1_1)); 

yyv_CaseLabel = yy_1_1; 

yy_2_1 = yyv_Expression; 

trafo_expr_const(yy_2_1, (&yy_2_2)); 

yyv_IR = yy_2_2; 

make_tp_signed_int((&yy_3_1)); 

yyv_Tp = yy_3_1; 

yy_4_1 = yyv_Tp; 

get_tp_descr(yy_4_1, (&yy_4_2)); 

yyv_D = yy_4_2; 

yy_5 = yyglov_Var_SwitchStack; 

if (yy_5 == (( yy )((-2147483647L)))){
yyErr(1, 2667); }

if (yy_5[0] != 1){
goto yyfl_112_12; }

yy_5_1 = ((( yy )yy_5[1])); 

yy_5_2 = ((( yy )yy_5[2])); 

if (yy_5_1[0] != 1){
goto yyfl_112_12; }

yy_5_1_1 = ((( yy )yy_5_1[1])); 

yy_5_1_2 = ((( yy )yy_5_1[2])); 

yy_5_1_3 = ((( yy )yy_5_1[3])); 

yy_5_1_4 = ((( yy )yy_5_1[4])); 

yy_5_1_5 = ((( yy )yy_5_1[5])); 

yyv_IR0 = yy_5_1_1; 

yyv_Tp0 = yy_5_1_2; 

yyv_L = yy_5_1_3; 

yyv_Default = yy_5_1_4; 

yyv_EndLabel = yy_5_1_5; 

yyv_OldStack = yy_5_2; 

yy_6_1 = yyv_Tp0; 

get_tp_descr(yy_6_1, (&yy_6_2)); 

yyv_D0 = yy_6_2; 

yy_7_1 = yyv_D0; 

yy_7_2 = yyv_D; 

yy_7_3 = yyv_IR; 

convert_type2_to_type1(yy_7_1, yy_7_2, yy_7_3, (&yy_7_4)); 

yyv_IRC = yy_7_4; 

yy_8_1_1 = yyv_IR0; 

yy_8_1_2 = yyv_Tp0; 

yy_8_1_3_1_1 = yyv_IRC; 

yy_8_1_3_1_2 = yyv_CaseLabel; 

yy_8_1_3_1 = yyb + 17; 

yy_8_1_3_1[0] = 1; 

yy_8_1_3_1[1] = (((long )yy_8_1_3_1_1)); 

yy_8_1_3_1[2] = (((long )yy_8_1_3_1_2)); 

yy_8_1_3_2 = yyv_L; 

yy_8_1_3 = yyb + 14; 

yy_8_1_3[0] = 1; 

yy_8_1_3[1] = (((long )yy_8_1_3_1)); 

yy_8_1_3[2] = (((long )yy_8_1_3_2)); 

yy_8_1_4 = yyv_Default; 

yy_8_1_5 = yyv_EndLabel; 

yy_8_1 = yyb + 8; 

yy_8_1[0] = 1; 

yy_8_1[1] = (((long )yy_8_1_1)); 

yy_8_1[2] = (((long )yy_8_1_2)); 

yy_8_1[3] = (((long )yy_8_1_3)); 

yy_8_1[4] = (((long )yy_8_1_4)); 

yy_8_1[5] = (((long )yy_8_1_5)); 

yy_8_2 = yyv_OldStack; 

yy_8 = yyb + 5; 

yy_8[0] = 1; 

yy_8[1] = (((long )yy_8_1)); 

yy_8[2] = (((long )yy_8_2)); 

yyglov_Var_SwitchStack = yy_8; 

yy_9_1 = yyv_Statement; 

TrafoStatement(yy_9_1, (&yy_9_2)); 

yyv_StatementC = yy_9_2; 

yy_0_2_1_1 = yyv_CaseLabel; 

yy_0_2_1 = yyb + 3; 

yy_0_2_1[0] = 11; 

yy_0_2_1[1] = (((long )yy_0_2_1_1)); 

yy_0_2_2 = yyv_StatementC; 

yy_0_2 = yyb + 0; 

yy_0_2[0] = 3; 

yy_0_2[1] = (((long )yy_0_2_1)); 

yy_0_2[2] = (((long )yy_0_2_2)); 

(*yyout_1) = yy_0_2; 


return (int )retValue_acc;
 

yyfl_112_12:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_Statement;



 yy yy_0_1_1;



 yy yy_0_2;



 yy yy_0_2_1;



 yy yy_0_2_1_1;



 yy yy_0_2_2;



 yy yyv_DefaultLabel;



 yy yy_1_1;



 yy yy_2;



 yy yy_2_1;



 yy yyv_IR0;



 yy yy_2_1_1;



 yy yyv_Tp0;



 yy yy_2_1_2;



 yy yyv_L;



 yy yy_2_1_3;



 yy yy_2_1_4;



 yy yyv_EndLabel;



 yy yy_2_1_5;



 yy yyv_OldStack;



 yy yy_2_2;



 yy yy_3;



 yy yy_3_1;



 yy yy_3_1_1;



 yy yy_3_1_2;



 yy yy_3_1_3;



 yy yy_3_1_4;



 yy yy_3_1_4_1;



 yy yy_3_1_5;



 yy yy_3_2;



 yy yy_4_1;



 yy yyv_StatementC;



 yy yy_4_2;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 9){
goto yyfl_112_13; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yyv_Statement = yy_0_1_1; 

yyb = yyh; 

yyh += 16; 

if (yyh > yyhx){
yyExtend(); }

cg_new_label((&yy_1_1)); 

yyv_DefaultLabel = yy_1_1; 

yy_2 = yyglov_Var_SwitchStack; 

if (yy_2 == (( yy )((-2147483647L)))){
yyErr(1, 2688); }

if (yy_2[0] != 1){
goto yyfl_112_13; }

yy_2_1 = ((( yy )yy_2[1])); 

yy_2_2 = ((( yy )yy_2[2])); 

if (yy_2_1[0] != 1){
goto yyfl_112_13; }

yy_2_1_1 = ((( yy )yy_2_1[1])); 

yy_2_1_2 = ((( yy )yy_2_1[2])); 

yy_2_1_3 = ((( yy )yy_2_1[3])); 

yy_2_1_4 = ((( yy )yy_2_1[4])); 

yy_2_1_5 = ((( yy )yy_2_1[5])); 

yyv_IR0 = yy_2_1_1; 

yyv_Tp0 = yy_2_1_2; 

yyv_L = yy_2_1_3; 

if (yy_2_1_4[0] != 1){
goto yyfl_112_13; }

yyv_EndLabel = yy_2_1_5; 

yyv_OldStack = yy_2_2; 

yy_3_1_1 = yyv_IR0; 

yy_3_1_2 = yyv_Tp0; 

yy_3_1_3 = yyv_L; 

yy_3_1_4_1 = yyv_DefaultLabel; 

yy_3_1_4 = yyb + 14; 

yy_3_1_4[0] = 2; 

yy_3_1_4[1] = (((long )yy_3_1_4_1)); 

yy_3_1_5 = yyv_EndLabel; 

yy_3_1 = yyb + 8; 

yy_3_1[0] = 1; 

yy_3_1[1] = (((long )yy_3_1_1)); 

yy_3_1[2] = (((long )yy_3_1_2)); 

yy_3_1[3] = (((long )yy_3_1_3)); 

yy_3_1[4] = (((long )yy_3_1_4)); 

yy_3_1[5] = (((long )yy_3_1_5)); 

yy_3_2 = yyv_OldStack; 

yy_3 = yyb + 5; 

yy_3[0] = 1; 

yy_3[1] = (((long )yy_3_1)); 

yy_3[2] = (((long )yy_3_2)); 

yyglov_Var_SwitchStack = yy_3; 

yy_4_1 = yyv_Statement; 

TrafoStatement(yy_4_1, (&yy_4_2)); 

yyv_StatementC = yy_4_2; 

yy_0_2_1_1 = yyv_DefaultLabel; 

yy_0_2_1 = yyb + 3; 

yy_0_2_1[0] = 11; 

yy_0_2_1[1] = (((long )yy_0_2_1_1)); 

yy_0_2_2 = yyv_StatementC; 

yy_0_2 = yyb + 0; 

yy_0_2[0] = 3; 

yy_0_2[1] = (((long )yy_0_2_1)); 

yy_0_2[2] = (((long )yy_0_2_2)); 

(*yyout_1) = yy_0_2; 


return (int )retValue_acc;
 

yyfl_112_13:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_Ident;



 yy yy_0_1_1;



 yy yy_0_2;



 yy yy_0_2_1;



 yy yyv_L;



 yy yy_1_1;



 yy yy_2_1;



 yy yy_2_2;



 yy yyv_Label;



 yy yy_2_3;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 13){
goto yyfl_112_14; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yyv_Ident = yy_0_1_1; 

yyb = yyh; 

yyh += 2; 

if (yyh > yyhx){
yyExtend(); }

GETVarFullLabelList((&yy_1_1)); 

yyv_L = yy_1_1; 

yy_2_1 = yyv_Ident; 

yy_2_2 = yyv_L; 

declare_not_yet_declared_label(yy_2_1, yy_2_2, (&yy_2_3)); 

yyv_Label = yy_2_3; 

yy_0_2_1 = yyv_Label; 

yy_0_2 = yyb + 0; 

yy_0_2[0] = 9; 

yy_0_2[1] = (((long )yy_0_2_1)); 

(*yyout_1) = yy_0_2; 


return (int )retValue_acc;
 

yyfl_112_14:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_2;



 yy yy_0_2_1;



 yy yy_1_1;



 yy yyv_Continue;



 yy yy_1_1_1;



 yy yyv_S;



 yy yy_1_1_2;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 14){
goto yyfl_112_15; }

yyb = yyh; 

yyh += 2; 

if (yyh > yyhx){
yyExtend(); }

GETVarContinueStack((&yy_1_1)); 

if (yy_1_1[0] != 1){
goto yyfl_112_15; }

yy_1_1_1 = ((( yy )yy_1_1[1])); 

yy_1_1_2 = ((( yy )yy_1_1[2])); 

yyv_Continue = yy_1_1_1; 

yyv_S = yy_1_1_2; 

yy_0_2_1 = yyv_Continue; 

yy_0_2 = yyb + 0; 

yy_0_2[0] = 9; 

yy_0_2[1] = (((long )yy_0_2_1)); 

(*yyout_1) = yy_0_2; 


return (int )retValue_acc;
 

yyfl_112_15:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_2;



 yy yy_0_2_1;



 yy yy_1_1;



 yy yyv_Label;



 yy yy_1_1_1;



 yy yyv_Stack;



 yy yy_1_1_2;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 15){
goto yyfl_112_16; }

yyb = yyh; 

yyh += 2; 

if (yyh > yyhx){
yyExtend(); }

GETVarEndLabelStack((&yy_1_1)); 

if (yy_1_1[0] != 1){
goto yyfl_112_16; }

yy_1_1_1 = ((( yy )yy_1_1[1])); 

yy_1_1_2 = ((( yy )yy_1_1[2])); 

yyv_Label = yy_1_1_1; 

yyv_Stack = yy_1_1_2; 

yy_0_2_1 = yyv_Label; 

yy_0_2 = yyb + 0; 

yy_0_2[0] = 11; 

yy_0_2[1] = (((long )yy_0_2_1)); 

(*yyout_1) = yy_0_2; 


return (int )retValue_acc;
 

yyfl_112_16:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yy_0_1_1;



 yy yy_0_2;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 16){
goto yyfl_112_17; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

if (yy_0_1_1[0] != 13){
goto yyfl_112_17; }

yyb = yyh; 

yyh += 1; 

if (yyh > yyhx){
yyExtend(); }

yy_0_2 = yyb + 0; 

yy_0_2[0] = 13; 

(*yyout_1) = yy_0_2; 


return (int )retValue_acc;
 

yyfl_112_17:  ; } 

{ 



 yy yyb;



 yy yy_0_1;



 yy yyv_E;



 yy yy_0_1_1;



 yy yy_0_2;



 yy yy_0_2_1;



 yy yy_0_2_2;



 yy yy_1_1;



 yy yyv_Tp;



 yy yy_1_2;



 yy yyv_EC;



 yy yy_1_3;



 yy yy_2_1;



 yy yyv_D;



 yy yy_2_2;



 yy yy_3_1;



 yy yyv_AMode;



 yy yy_3_2;



 yy yyv_Tp1;



 yy yy_4_1;



 yy yy_5_1;



 yy yyv_D1;



 yy yy_5_2;



 yy yy_6_1;



 yy yyv_Tp2;



 yy yy_6_2;



 yy yy_7_1;



 yy yyv_D2;



 yy yy_7_2;



 yy yy_8_1;



 yy yyv_AMode2;



 yy yy_8_2;



 yy yy_9_1;



 yy yy_9_2;



 yy yy_9_3;



 yy yyv_EC3;



 yy yy_9_4;

yy_0_1 = yyin_1; 

if (yy_0_1[0] != 16){
goto yyfl_112_18; }

yy_0_1_1 = ((( yy )yy_0_1[1])); 

yyv_E = yy_0_1_1; 

yyb = yyh; 

yyh += 3; 

if (yyh > yyhx){
yyExtend(); }

yy_1_1 = yyv_E; 

trafo_expr_rvalue(yy_1_1, (&yy_1_2), (&yy_1_3)); 

yyv_Tp = yy_1_2; 

yyv_EC = yy_1_3; 

yy_2_1 = yyv_Tp; 

get_tp_descr(yy_2_1, (&yy_2_2)); 

yyv_D = yy_2_2; 

yy_3_1 = yyv_D; 

td_map_to_mode(yy_3_1, (&yy_3_2)); 

yyv_AMode = yy_3_2; 

GETVarFunctionType((&yy_4_1)); 

yyv_Tp1 = yy_4_1; 

yy_5_1 = yyv_Tp1; 

get_tp_descr(yy_5_1, (&yy_5_2)); 

yyv_D1 = yy_5_2; 

yy_6_1 = yyv_D1; 

get_return_type(yy_6_1, (&yy_6_2)); 

yyv_Tp2 = yy_6_2; 

yy_7_1 = yyv_Tp2; 

get_tp_descr(yy_7_1, (&yy_7_2)); 

yyv_D2 = yy_7_2; 

yy_8_1 = yyv_D2; 

td_map_to_mode(yy_8_1, (&yy_8_2)); 

yyv_AMode2 = yy_8_2; 

yy_9_1 = yyv_Tp2; 

yy_9_2 = yyv_Tp; 

yy_9_3 = yyv_EC; 

simple_assign_params(yy_9_1, yy_9_2, yy_9_3, (&yy_9_4)); 

yyv_EC3 = yy_9_4; 

yy_0_2_1 = yyv_EC3; 

yy_0_2_2 = yyv_AMode2; 

yy_0_2 = yyb + 0; 

yy_0_2[0] = 14; 

yy_0_2[1] = (((long )yy_0_2_1)); 

yy_0_2[2] = (((long )yy_0_2_2)); 

(*yyout_1) = yy_0_2; 


return (int )retValue_acc;
 

yyfl_112_18:  ; } 

yyErr(2, 2499); 

}

return (int )retValue_acc;


}
 
