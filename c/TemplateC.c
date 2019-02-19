#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
#include <limits.h>
#include <time.h>
#include <assert.h>
#include <stdarg.h>
#include <stddef.h>
#define INT_INF 0x3f3f3f3f
#define LL_INF 0x3f3f3f3f3f3f3f3f
#define For(i,a,b) for(int i=(a);i<(b);i++)
#define FOR(i,b) For(i,0,b)
#define Rev(i,a,b) for(int i=(a);i>(b);i--)
#define REV(i,a) Rev(i,a,-1)
typedef long long ll;
typedef long double ld;
typedef unsigned int uint;
typedef unsigned long long ull;

#define INTERACTIVE_INPUT 0
#define _bufferSize (1<<16)
char _inputBuffer[_bufferSize+1],*_inputPtr=_inputBuffer,_c,_sign;int _cur;
#ifdef _WIN32
    #define getchar_unlocked getchar
    #define fread_unlocked fread
#endif
#if INTERACTIVE_INPUT
    #define _getchar() getchar_unlocked()
#else
    #define _peekchar() (*_inputPtr?*_inputPtr:(_inputBuffer[fread_unlocked(_inputPtr=_inputBuffer,1,_bufferSize,stdin)]='\0',*_inputPtr))
    #define _getchar() (*_inputPtr?*_inputPtr++:(_inputBuffer[fread_unlocked(_inputPtr=_inputBuffer,1,_bufferSize,stdin)]='\0',*_inputPtr++))
    #define _hasNext() (*_inputPtr||!feof(stdin))
    int hasNext(){while(_hasNext()&&_peekchar()<=' ')_getchar();return _hasNext();}int hasNextLine(){while(_hasNext()&&_peekchar()=='\r')_getchar();return _hasNext();}
#endif
#define _readSignAndNum(x) do{(x)=_getchar();}while((x)<=' ');_sign=(x)=='-';if(_sign)(x)=_getchar();for((x)-='0';(_c=_getchar())>='0';(x)=(x)*10+_c-'0')
#define _readFloatingPoint(x,T) for(T _div=1.0;(_c=_getchar())>='0';(x)+=(_c-'0')/(_div*=10))
#define rc(x) do{do{(x)=_getchar();}while((x)<=' ');}while(0)
#define ri(x) do{_readSignAndNum(x);if(_sign)(x)=-(x);}while(0)
#define rd(x) do{_readSignAndNum(x);if(_c=='.')_readFloatingPoint(x,double);if(_sign)(x)=-(x);}while(0)
#define rld(x) do{_readSignAndNum(x);if(_c=='.')_readFloatingPoint(x,ld);if(_sign)(x)=-(x);}while(0)
#define rcs(x) do{_cur=0;do{_c=_getchar();}while(_c<=' ');do{(x)[_cur++]=_c;}while((_c=_getchar())>' ');(x)[_cur]='\0';}while(0)
#define rcln(x) do{_cur=0;while((_c=_getchar())!='\n'){if(_c!='\r')(x)[_cur++]=_c;}(x)[_cur]='\0';}while(0)

int main() {
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    // freopen("err.txt", "w", stderr);
    return 0;
}
