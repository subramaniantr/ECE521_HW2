typedef struct transformer{
    char *name;  /* pointer to character string naming this transformer */
    int pCNode; /* number of positive node of transformer */
    int nCNode; /* number of negative node of transformer */
    int pNode; /* number of positive control node of transformer */
    int nNode; /* number of negative control node of transformer */
    int branchNum ; /* number of branch */
    double n;  /* value of n */

    double *ppCb;     /*pointer to sparse-matrix location (nNode, nNode)*/
    double *pnCb;     /*pointer to sparse-matrix location (nNode, pNode)*/
    double *ppb;     /*pointer to sparse-matrix location (nNode, nNode)*/
    double *pnb;     /*pointer to sparse-matrix location (nNode, pNode)*/
    double *pbpC;     /*pointer to sparse-matrix location (nNode, nNode)*/
    double *pbnC;     /*pointer to sparse-matrix location (nNode, pNode)*/
    double *pbp;     /*pointer to sparse-matrix location (nNode, nNode)*/
    double *pbn;     /*pointer to sparse-matrix location (nNode, pNode)*/
} transformer ;

