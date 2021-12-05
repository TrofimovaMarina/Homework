#ifdef FILE_SEEN_TWICE
#error file MyLib.h is already included twice
#else
#ifdef FILE_SEEN_ONCE
#define FILE_SEEN_TWICE
#else
#define FILE_SEEN_ONCE

int count(int n);
void print_circle(int r);

#endif
#endif