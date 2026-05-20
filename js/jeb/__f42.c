void __f42(long long param0, int param1, int param2, int param3, int param4, int param5) {
    int v0;
    int v1;
    long long v2;
    int v3;
    long long* ptr0;
    if(__g1 == 2) {
        *__g2 -= 10;
        long long* ptr1 = *__g2;
        param0 = *ptr1;
        param2 = *((int*)((int)&gvar_8 + (int)ptr1) + 1);
        param3 = *(int*)((int)&gvar_10 + (int)ptr1);
        param4 = *((int*)((int)&gvar_10 + (int)ptr1) + 1);
        param5 = *(unsigned int*)((int)&gvar_18 + (int)ptr1);
        v3 = *(int*)((char*)ptr1 + &gvar_1C);
        v2 = *(unsigned long long*)((int)&gvar_20 + (int)ptr1);
        param1 = *(int*)((int)&gvar_8 + (int)ptr1);
    }
    if(__g1 == 2) {
        --*__g2;
        v1 = **__g2;
    }
    if(__g1 == 0) {
        v3 = __g0 - &gvar_10;
        __g0 -= &gvar_10;
        int v4 = __f45(param0);
        v0 = (unsigned int)((v4 & 0x6) != 6);
    }
    if(((unsigned int)(__g1 == 0) & v0) == 0) {
        if((unsigned int)(__g1 == 0) | (unsigned int)(v1 == 0)) {
            __f70(param5, param4, v3);
            if(__g1 == 1) {
                goto loc_50003025;
            }
        }
        if(__g1 == 0) {
            v2 = *(long long*)v3;
            param4 = *(int*)((int)&gvar_8 + v3);
        }
        if((unsigned int)(__g1 == 0) | (unsigned int)(v1 == 1)) {
            f(v2, param3, param2, param0);
            if(__g1 == 1) {
            loc_50003025:
                **__g2 = ptr0;
                ++*__g2;
                ptr0 = *__g2;
                *ptr0 = param0;
                *(unsigned long long*)((int)&gvar_8 + (int)ptr0) = (unsigned long long)param1 | ((unsigned long long)param2 << &gvar_20);
                *(int*)((int)&gvar_10 + (int)ptr0) = (unsigned long long)param3 | ((unsigned long long)param4 << &gvar_20);
                *(unsigned int*)((int)&gvar_18 + (int)ptr0) = (unsigned int)param5;
                *(int*)((char*)ptr0 + &gvar_1C) = v3;
                *(unsigned long long*)((int)&gvar_20 + (int)ptr0) = (unsigned long long)v2;
                *__g2 += 10;
            }
        }
        if(__g1 == 0) {
            int v5 = __f22(&gvar_10);
            *(int*)((int)&gvar_8 + v5) = param1;
            *(long long*)v5 = param0;
            int v6 = __f22(&gvar_10);
            *(int*)((int)&gvar_8 + v6) = param4;
            *(long long*)v6 = v2;
            __g0 = v3 + &gvar_10;
            return;
        }
    }
    if(__g1 == 0) {
        jump 0;
    }
}
