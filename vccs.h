/* information used to describe a single instance */

typedef struct vccs{
    char *name;  /* pointer to character string naming this vccs */
    int pNode; /* number of positive node of vccs */
    int nNode; /* number of negative node of vccs */
    int pCNode; /* number of positive control node of vccs */
    int nCNode; /* number of negative control node of vccs */
    double Gm;  /* value of trans-conductance */

    double *pppC;     /*pointer to sparse-matrix location (pNode, pNode)*/
    double *ppnC;     /*pointer to sparse-matrix location (pNode, nNode)*/
    double *pnpC;     /*pointer to sparse-matrix location (nNode, nNode)*/
    double *pnnC;     /*pointer to sparse-matrix location (nNode, pNode)*/
} vccs ;

