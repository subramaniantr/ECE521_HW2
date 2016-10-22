/* information used to describe a single instance */

typedef struct ccvs{
    char *name;  /* pointer to character string naming this ccvs */
    int pNode; /* number of positive node of ccvs */
    int nNode; /* number of negative node of ccvs */
    int cbranchNum ; /* number of control branch */
    int branchNum ; /* number of ccvs branch */
    double Rt;  /* value of trans-resistance */

    double *ppb;     /*pointer to sparse-matrix location (nNode, nNode)*/
    double *pnb;     /*pointer to sparse-matrix location (nNode, pNode)*/
    double *pbp;     /*pointer to sparse-matrix location (pNode, pNode)*/
    double *pbn;     /*pointer to sparse-matrix location (pNode, nNode)*/
    double *pbpC;     /*pointer to sparse-matrix location (pNode, nNode)*/
    double *pbnC;     /*pointer to sparse-matrix location (pNode, nNode)*/
} ccvs ;

