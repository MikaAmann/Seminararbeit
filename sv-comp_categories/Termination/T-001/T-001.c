// SPDX-FileCopyrightText: 2021 Y. Cyrus Liu <yliu195@stevens.edu>
//
// SPDX-License-Identifier: Apache-2.0

/*
 * Date: 2021-06-21
 * Author: yliu195@stevens.edu
 */

extern int __VERIFIER_nondet_int(void);
int main (){
    int x;
    x = __VERIFIER_nondet_int();
    while (x==0){

        if (x >= 0 ){
           x = x&(x-1);
        }
        else {
            x++;
        }
    }
    return 0;
}