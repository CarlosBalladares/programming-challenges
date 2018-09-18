// Printing macros
#define print_l(a) cout << a << endl;
#define print(a) cout << a;
#define print_val(message, val) cout << message << val << endl;
#define endl() cout << endl;

// Max, min macros
#define MAX(x, y) (((x) > (y)) ? (x) : (y))
#define MIN(x, y) (((x) < (y)) ? (x) : (y))

// Loop macros
#define FOR(x, n) for(int x = 0; x < n; x++)
#define FOR_BACK(x, n) for(int x = n-1 x >= 0; x--)

// debug macros
#define DEBUG 1
#define DEBUG_DO(x) if (DEBUG) x

// debug print combined macros
#define DEBUG 1
#define print_val(message, val) if(DEBUG) cout << message << val << endl;
#define print_l(a) if(DEBUG) cout << a << endl;
#define print_vec(a) if(DEBUG) for(int i =0; i <a.size();i++)cout << a <<", "; cout << endl;


