#define N 24//��y 
#define M 39//��x 
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
};//�Qdefined�]�Qdeclared�B�bglobal�� 