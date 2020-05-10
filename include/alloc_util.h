/* This code is free ( free means free, Do whatever useful )
 *
 *      Author : Viki (a) Vignesh Natarajan
 *      Lab    : vikiworks.io  
 */
#ifndef ALLOC_UTIL_H
#define ALLOC_UTIL_H

#define SAFE_FREE(var){\
    if(var){\
        free(var);\
        var = NULL;\
    }\
}

#endif
