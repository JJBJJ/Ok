void __f74(unsigned long long* param0, int param1) {
    int v0;
    int v1;
    unsigned int v2;
    int v3;
    unsigned int* ptr0;
    if(__g1 == 2) {
        *__g2 -= 5;
        unsigned int* ptr1 = *__g2;
        param0 = *ptr1;
        param1 = *(int*)(ptr1 + 1);
        v3 = *(int*)((int)&gvar_8 + (int)ptr1);
        v2 = *((unsigned int*)((int)&gvar_8 + (int)ptr1) + 1);
        v1 = *(int*)((int)&gvar_10 + (int)ptr1);
    }
    if(__g1 == 2) {
        --*__g2;
        v0 = **__g2;
    }
    if(__g1 == 0) {
        v3 = __g0 - &gvar_30;
        __g0 -= &gvar_30;
    }
    if((unsigned int)(__g1 == 0) | (unsigned int)(v0 == 0)) {
        __f18();
        if(__g1 == 1) {
            goto loc_50005A2D;
        }
    }
    if(__g1 == 0) {
        v2 = gvar_10834;
        ++gvar_10834;
        *(int*)(v3 + &gvar_1C) = param1;
        *(unsigned int*)((int*)((int)&gvar_20 + v3) + 1) = v2;
        v1 = v3 + &gvar_18;
        param1 = v3 + 36;
    }
    if((unsigned int)(__g1 == 0) | (unsigned int)(v0 == 1)) {
        __f30(v1, param1, 68040);
        if(__g1 == 1) {
            goto loc_50005A2D;
        }
    }
    if(__g1 == 0) {
        __f19();
        *(unsigned int*)(v3 + 44) = v2;
        *(unsigned int*)((int)&gvar_28 + v3) = 66624;
        v1 = v3 + &gvar_28;
        param1 = v3 + &gvar_8;
    }
    if((unsigned int)(__g1 == 0) | (unsigned int)(v0 == 2)) {
        __f47(1, (long long)v1, &gvar_10, "ObjectAsia/Shanghai", 0, 6, param1);
        if(__g1 == 1) {
        loc_50005A2D:
            **__g2 = ptr0;
            ++*__g2;
            ptr0 = *__g2;
            *ptr0 = param0;
            *(int*)(ptr0 + 1) = param1;
            *(unsigned long long*)((int)&gvar_8 + (int)ptr0) = (unsigned long long)v3 | ((unsigned long long)v2 << &gvar_20);
            *(int*)((int)&gvar_10 + (int)ptr0) = v1;
            *__g2 += 5;
        }
    }
    if(__g1 == 0) {
        unsigned long long v4 = *(unsigned long long*)((int)&gvar_8 + v3);
        param1 = *(int*)((int)&gvar_10 + v3);
        *(unsigned int*)((int)&gvar_10 + (int)param0) = v2;
        *(int*)((int)&gvar_8 + (int)param0) = param1;
        *param0 = v4;
        __g0 = v3 + &gvar_30;
    }
}
