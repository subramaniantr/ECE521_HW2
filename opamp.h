typedef struct opamp{
    char *name;  /* pointer to character string naming this opamp */
    int oNode; /* number of output node of opamp */
    int pNode; /* number of positive control node of opamp */
    int nNode; /* number of negative control node of opamp */
    int branchNum ; /* number of branch */
    double A;  /* value of n */

    double *pbp;     /*pointer to sparse-matrix location (nNode, nNode)*/
    double *pbn;     /*pointer to sparse-matrix location (nNode, nNode)*/
    double *pbo;     /*pointer to sparse-matrix location (nNode, pNode)*/
    double *pob;     /*pointer to sparse-matrix location (nNode, nNode)*/
} opamp ;

