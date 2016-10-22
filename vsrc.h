/* information used to describe a single instance */

typedef struct vsource{
    char *name;  /* pointer to character string naming this vsource */
    int pNode; /* number of positive node of vsource */
    int nNode; /* number of negative node of vsource */
    int branchNum ; /* number of branch */
    double voltage;  /* value of vsource */
    double *pbn1;     /*pointer to sparse-matrix location (pNode, pNode)*/
    double *pbn2;     /*pointer to sparse-matrix location (pNode, nNode)*/
    double *pn2b;     /*pointer to sparse-matrix location (nNode, nNode)*/
    double *pn1b;     /*pointer to sparse-matrix location (nNode, pNode)*/
    double *prhsb;     /*pointer to sparse-matrix location (nNode, pNode)*/
    
} vsource ;

