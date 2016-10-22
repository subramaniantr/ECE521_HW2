typedef struct gyrator{
    char *name;  /* pointer to character string naming this gyrator */
    int pCNode; /* number of positive node of gyrator */
    int nCNode; /* number of negative node of gyrator */
    int pNode; /* number of positive control node of gyrator */
    int nNode; /* number of negative control node of gyrator */
    double g;  /* value of n */

    double *pnCp;     /*pointer to sparse-matrix location (nNode, nNode)*/
    double *pnCn;     /*pointer to sparse-matrix location (nNode, pNode)*/
    double *ppCp;     /*pointer to sparse-matrix location (nNode, nNode)*/
    double *ppCn;     /*pointer to sparse-matrix location (nNode, pNode)*/
    double *pppC;     /*pointer to sparse-matrix location (nNode, nNode)*/
    double *ppnC;     /*pointer to sparse-matrix location (nNode, pNode)*/
    double *pnpC;     /*pointer to sparse-matrix location (nNode, nNode)*/
    double *pnnC;     /*pointer to sparse-matrix location (nNode, pNode)*/
} gyrator ;

