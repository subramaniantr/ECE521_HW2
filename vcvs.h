/* information used to describe a single instance */

typedef struct vcvs{
    char *name;  /* pointer to character string naming this vcvs */
    int pNode; /* number of positive node of vcvs */
    int nNode; /* number of negative node of vcvs */
    int pCNode; /* number of positive control node of vcvs */
    int nCNode; /* number of negative control node of vcvs */ 
    int branchNum ; /* number of branch */
    double gain;  /* value of gain */

    double *ppb;     /*pointer to sparse-matrix location (nNode, nNode)*/
    double *pnb;     /*pointer to sparse-matrix location (nNode, pNode)*/
    double *pbp;     /*pointer to sparse-matrix location (pNode, pNode)*/
    double *pbn;     /*pointer to sparse-matrix location (pNode, nNode)*/
    double *pbpC;     /*pointer to sparse-matrix location (pNode, nNode)*/
    double *pbnC;     /*pointer to sparse-matrix location (pNode, nNode)*/
} vcvs ;

