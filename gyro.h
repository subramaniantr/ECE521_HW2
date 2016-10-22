typedef struct gyrator{
    char *name;  /* pointer to character string naming this gyrator */
    int p2Node; /* number of positive node of gyrator */
    int n2Node; /* number of negative node of gyrator */
    int p1Node; /* number of positive control node of gyrator */
    int n1Node; /* number of negative control node of gyrator */
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

