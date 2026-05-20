void __f31(int param0) {
    int v0;
    int v1;
    int v2;
    int* ptr0;
    if(__g1 == 2) {
        *__g2 -= 3;
        int* ptr1 = *__g2;
        param0 = *ptr1;
        v2 = *(ptr1 + 2);
        v1 = *(ptr1 + 1);
    }
    if(__g1 == 2) {
        --*__g2;
        v0 = **__g2;
    }
    if(__g1 == 0) {
        v2 = __g0 - &gvar_10;
        __g0 -= &gvar_10;
        v1 = param0 == 0;
    }
    if(__g1 != 0) {
    loc_5000191E:
        if((unsigned int)(__g1 == 0) | (unsigned int)(v0 == 0)) {
            int v3 = __f32(12, v2, v1, 0x1080c);
            if(__g1 == 1) {
                goto loc_5000198A;
            }
            else {
                v1 = v3;
            }
        }
        if(__g1 == 0 && (v1 & 0x1) == 0) {
            goto loc_5000197B;
        }
        else if(__g1 == 0) {
            *(int*)v2 = param0;
        }
        if((unsigned int)(__g1 == 0) | (unsigned int)(v0 == 1)) {
            __f33(v2);
            if(__g1 == 1) {
            loc_5000198A:
                **__g2 = ptr0;
                ++*__g2;
                ptr0 = *__g2;
                *ptr0 = param0;
                *(ptr0 + 1) = v1;
                *(ptr0 + 2) = v2;
                *__g2 += 3;
            }
        }
    loc_5000196C:
        if(__g1 == 0) {
            __g0 = v2 + &gvar_10;
            return;
        }
    }
    else if(v1) {
        goto loc_5000196C;
    }
    else {
        *(int*)(v2 + 12) = param0;
        v1 = v2 + 12;
        goto loc_5000191E;
    }
loc_5000197B:
    if(__g1 == 0) {
        jump 0;
    }
}
