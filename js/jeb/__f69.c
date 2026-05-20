void __f69(unsigned int* param0, int param1, int* param2) {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    unsigned int* ptr0;
    if(__g1 == 2) {
        *__g2 -= 9;
        unsigned int* ptr1 = *__g2;
        param0 = *ptr1;
        param2 = *((unsigned int*)((int)&gvar_8 + (int)ptr1) + 1);
        v4 = *(int*)((int)&gvar_10 + (int)ptr1);
        v3 = *(int*)((unsigned int*)((int)&gvar_10 + (int)ptr1) + 1);
        v2 = *(unsigned int*)((int)&gvar_18 + (int)ptr1);
        v1 = *(int*)(ptr1 + 7);
        param1 = *(int*)(ptr1 + 1);
    }
    if(__g1 == 2) {
        --*__g2;
        v0 = **__g2;
    }
    if(__g1 == 0) {
        v3 = __g0 - &gvar_20;
        __g0 -= &gvar_20;
        v4 = v3 + &gvar_10;
    }
    if((unsigned int)(__g1 == 0) | (unsigned int)(v0 == 0)) {
        b(param1, (long long)v4);
        if(__g1 == 1) {
            goto loc_50005224;
        }
    }
    if(__g1 == 0) {
        v1 = *(unsigned long long*)((int)&gvar_10 + v3);
        v4 = *(unsigned int*)((int)&gvar_18 + v3);
        int v5 = __f22(&gvar_10);
        v2 = v5;
        *(unsigned int*)((int)&gvar_8 + v5) = param2;
        *(int*)v2 = param1;
        param2 = v4 < 0;
    }
    if(__g1 == 0 && param2) {
        goto loc_50005215;
    }
    else if(__g1 == 0) {
        int v6 = __f22(v4);
        v2 = v6;
    }
    if((unsigned int)(__g1 == 0) | (unsigned int)(v0 == 1)) {
        c((long long)v4, v4, v2, v1);
        if(__g1 == 1) {
            goto loc_50005224;
        }
    }
    if((unsigned int)(__g1 == 0) | (unsigned int)(v0 == 2)) {
        d((long long)v1);
        if(__g1 == 1) {
        loc_50005224:
            **__g2 = ptr0;
            ++*__g2;
            ptr0 = *__g2;
            *ptr0 = param0;
            *(int*)(ptr0 + 1) = param1;
            *((unsigned int*)((int)&gvar_8 + (int)ptr0) + 1) = param2;
            *(int*)((int)&gvar_10 + (int)ptr0) = v4;
            *(int*)((unsigned int*)((int)&gvar_10 + (int)ptr0) + 1) = v3;
            *(unsigned int*)((int)&gvar_18 + (int)ptr0) = (unsigned int)v2;
            *(int*)(ptr0 + 7) = v1;
            *__g2 += 9;
        }
    }
    if(__g1 == 0) {
        __f55(v4, v2, v3 + &gvar_8);
        param2 = *((unsigned int*)((int)&gvar_8 + v3) + 1);
        *param0 = *(unsigned int*)((int)&gvar_8 + v3);
        *(param0 + 1) = param2;
        __g0 = v3 + &gvar_20;
        return;
    }
loc_50005215:
    if(__g1 == 0) {
        jump 0;
    }
}
