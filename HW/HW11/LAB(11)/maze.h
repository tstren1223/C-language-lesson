#define N 24//表y 
#define M 39//表x 
int map[24][39]= {
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,1,0,1,1,1,1,0,1,0,1,1,1,0,1,0,0,1,1,1,1,0,0,1,1,1,1,1,0,1,1,1,1,1,0,1,0,0,0},
{0,1,1,1,0,0,1,1,1,1,1,0,1,0,1,1,1,1,0,0,1,1,0,0,1,0,0,1,0,0,1,0,0,1,0,1,1,1,0},
{0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,1,1,0,1,0,1,1,1,1,1,0,1,1,1,1,0,0,0},
{0,1,1,1,1,1,1,1,0,1,1,0,1,1,1,1,1,0,1,1,0,0,1,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0},
{0,1,0,0,0,1,0,1,1,1,0,0,0,0,0,0,0,0,1,0,0,0,1,1,1,0,1,1,1,0,1,0,1,1,1,0,0,0,0},
{0,1,0,0,1,1,0,0,0,1,0,0,1,1,1,1,1,0,1,1,1,0,0,0,0,0,1,0,1,1,1,0,0,0,1,1,1,1,0},
{0,1,1,0,1,0,0,0,1,1,1,0,1,0,1,0,0,0,1,0,1,1,1,1,1,0,1,0,0,1,0,0,1,0,0,0,1,0,0},
{0,0,0,0,1,0,1,0,0,0,1,0,0,0,1,0,0,1,1,0,0,0,0,0,1,1,1,0,0,0,0,1,1,1,1,0,1,1,0},
{0,0,1,1,1,0,1,0,1,1,1,1,1,1,1,0,1,1,0,0,1,1,1,0,0,0,1,1,1,1,1,1,0,0,1,0,1,0,0},
{0,1,1,0,1,0,1,1,1,0,0,0,0,0,1,0,1,0,0,0,1,0,1,1,1,0,0,0,0,0,0,0,0,0,1,1,1,1,0},
{0,1,0,0,1,0,0,0,0,0,1,1,1,0,0,0,1,0,1,0,1,0,0,0,1,1,0,1,0,0,1,1,1,0,0,0,0,0,0},
{0,1,1,0,1,0,0,1,1,1,1,0,1,1,1,1,1,0,1,1,1,0,1,0,0,1,1,1,0,1,1,0,1,1,1,1,1,1,0},
{0,0,1,0,1,0,1,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,1,1,0,0,0,1,0,0,1,0,0,1,0,0,0},
{0,1,1,0,0,0,1,0,0,1,0,1,1,1,0,1,1,1,1,1,1,1,1,0,1,0,0,0,1,1,1,0,1,0,1,1,1,1,0},
{0,0,1,1,1,0,1,0,1,1,1,1,0,1,1,1,0,1,0,0,1,0,1,0,1,1,0,1,1,0,1,0,1,0,0,0,1,0,0},
{0,1,1,0,1,1,1,0,0,0,0,0,0,0,1,0,0,1,1,0,0,0,0,0,0,1,1,1,0,0,0,0,1,0,1,1,1,1,0},
{0,1,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,1,1,0,1,1,1,0,0,1,0,0,0,0,1,1,0,0,0,1,0,0},
{0,1,0,1,1,1,1,1,1,1,0,0,1,0,1,1,1,0,0,0,0,1,0,1,1,0,0,0,1,0,1,1,0,0,0,1,1,1,0},
{0,1,0,0,0,1,0,0,0,0,0,1,1,1,1,0,1,0,0,1,1,1,0,0,1,0,1,1,1,0,1,0,0,1,0,0,1,0,0},
{0,1,1,1,1,1,0,1,1,1,1,1,0,0,1,0,1,1,1,1,0,1,0,1,1,1,1,0,1,1,1,0,1,1,1,1,1,1,0},
{0,1,0,1,0,1,0,0,1,0,1,0,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,0},
{0,1,0,1,0,1,0,0,1,0,1,0,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
};//被defined也被declared且在global區 
