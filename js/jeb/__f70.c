void __f70(long long* param0, int param1, int param2) {
    int v0;
    int v1;
    int v2;
    unsigned int v3;
    int v4;
    unsigned int v5;
    long long v6;
    long long v7;
    long long v8;
    unsigned int* ptr0;
    long long v9;
    unsigned int v10;
    if(__g1 == 2) {
        *__g2 -= 7;
        unsigned int* ptr1 = *__g2;
        param0 = *ptr1;
        param1 = *(int*)(ptr1 + 1);
        param2 = *(int*)((int)&gvar_8 + (int)ptr1);
        v5 = *((unsigned int*)((int)&gvar_8 + (int)ptr1) + 1);
        v4 = *(unsigned long long*)((int)&gvar_10 + (int)ptr1);
        v3 = *(unsigned int*)((int)&gvar_18 + (int)ptr1);
    }
    if(__g1 == 2) {
        --*__g2;
        v2 = **__g2;
    }
    if(__g1 == 0) {
        v3 = __g0 - &gvar_10;
        __g0 = (unsigned int)(__g0 - &gvar_10);
        v5 = param1 == 67428;
    }
    if(__g1 != 0) {
    loc_50005331:
        if(__g1 == 0) {
            if(v0 == 0 && param2 == 0) {
            loc_50005401:
                if(__g1 != 0) {
                loc_50005407:
                    if(!__g1) {
                        v5 = *(unsigned int*)((int)&gvar_8 + param2);
                        v1 = *(int*)param2;
                    }
                }
                goto loc_5000541A;
            }
            else if(v0 == 0) {
                v6 = reinterpret_f64((double)param2);
                goto loc_5000541A;
            }
            else {
                if(param1 == 66140) {
                    param1 = (unsigned char)param2;
                    int v11 = (int)((unsigned char)param2 == 0);
                    param2 = (unsigned char)param2 == 0;
                    if(v11) {
                        goto loc_50005401;
                    }
                    v9 = reinterpret_f64((double)param1);
                    goto loc_5000541A;
                }
                if(param1 == 66624) {
                    if(param2 == 0) {
                        goto loc_50005401;
                    }
                    v7 = reinterpret_f64((double)param2);
                    goto loc_5000541A;
                }
                if(param1 == 66600) {
                    v4 = *(int*)param2;
                    if(*(int*)param2 == 0L) {
                        goto loc_50005401;
                    }
                    v8 = reinterpret_f64((double)v4);
                    goto loc_5000541A;
                }
                param1 = param1 != 66676;
            }
        }
        if(__g1 == 0 && param1) {
        loc_500053EE:
            if(__g1 == 0) {
                jump 0;
            }
            goto loc_50005401;
        }
        else if(__g1 == 0) {
            param1 = *(int*)param2;
            param2 = *(int*)(param2 + 4);
        }
        if((unsigned int)(__g1 == 0) | (unsigned int)(v2 == 0)) {
            long long v12 = e(param2, param1);
            if(__g1 == 1) {
                **__g2 = ptr0;
                ++*__g2;
                ptr0 = *__g2;
                *ptr0 = param0;
                *(int*)(ptr0 + 1) = param1;
                *(unsigned long long*)((int)&gvar_8 + (int)ptr0) = (unsigned long long)param2 | ((unsigned long long)v5 << &gvar_20);
                *(unsigned long long*)((int)&gvar_10 + (int)ptr0) = (unsigned long long)v4;
                *(unsigned int*)((int)&gvar_18 + (int)ptr0) = v3;
                *__g2 += 7;
            }
            else {
                v4 = v10;
            }
        }
        if(__g1 != 0) {
            goto loc_500053EE;
        }
        __f46(v4, (long long)v3);
        v5 = *(unsigned int*)((int)&gvar_8 + v3);
    }
    else if(v5) {
        goto loc_50005407;
    }
    else {
        v5 = param1 == 67404;
        if(param1 == 67404) {
            goto loc_50005407;
        }
        v5 = 0;
        if(param1 != 0) {
            v0 = (unsigned int)(param1 != 66704);
            goto loc_50005331;
        }
    }
loc_5000541A:
    v4 = v1;
    if(__g1 == 0) {
        *param0 = v4;
        *(int*)((int)&gvar_8 + (int)param0) = v5;
        __g0 = v3 + &gvar_10;
    }
}
