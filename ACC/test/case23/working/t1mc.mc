# 1 "t1mc_mc.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "t1mc_mc.c"
typedef int INT ;

int foo3(INT * a) {
 printf("inside foo3\n");
 return 0;
}

int foo4(INT a) {
 printf("inside foo4\n");
}


int main() {

 int * p;
 int q;

 foo3(p);

 foo4(q);

        return 0;
}
