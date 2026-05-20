void __f38(long long* param0, long long param1, int* param2, int param3, int* param4) {
    int v0;
    int v1;
    int v2;
    unsigned int v3;
    unsigned int v4;
    unsigned int* ptr0;
    if(__g1 == 2) {
        *__g2 -= 9;
        unsigned int* ptr1 = *__g2;
        param0 = *ptr1;
        param2 = *((unsigned int*)((int)&gvar_8 + (int)ptr1) + 1);
        param3 = *(int*)((int)&gvar_10 + (int)ptr1);
        param4 = *((unsigned int*)((int)&gvar_10 + (int)ptr1) + 1);
        v3 = *(unsigned int*)((int)&gvar_18 + (int)ptr1);
        v2 = *(int*)(ptr1 + 7);
        param1 = *(long long*)(ptr1 + 1);
    }
    if(__g1 == 2) {
        --*__g2;
        v1 = **__g2;
    }
    if(__g1 == 0) {
        v3 = __g0 - &gvar_10;
        __g0 = (unsigned int)(__g0 - &gvar_10);
        int v5 = __f45(param1);
        v0 = (unsigned int)((v5 & 0x6) != 6);
    }
    if(((unsigned int)(__g1 == 0) & v0) == 0) {
        if((unsigned int)(__g1 == 0) | (unsigned int)(v1 == 0)) {
            long long v6 = a((long long)param4, param3, (int)param1);
            if(__g1 == 1) {
                **__g2 = ptr0;
                ++*__g2;
                ptr0 = *__g2;
                *ptr0 = param0;
                *(long long*)(ptr0 + 1) = param1;
                *((unsigned int*)((int)&gvar_8 + (int)ptr0) + 1) = param2;
                *(int*)((int)&gvar_10 + (int)ptr0) = param3;
                *((unsigned int*)((int)&gvar_10 + (int)ptr0) + 1) = param4;
                *(unsigned int*)((int)&gvar_18 + (int)ptr0) = v3;
                *(int*)(ptr0 + 7) = v2;
                *__g2 += 9;
            }
            else {
                v2 = v4;
            }
        }
        if(__g1 == 0) {
            __f46(v2, (long long)v3);
            v2 = *(int*)v3;
            param3 = *(int*)((int)&gvar_8 + v3);
            int v7 = __f22(&gvar_10);
            *(unsigned int*)((int)&gvar_8 + v7) = param2;
            *(long long*)v7 = param1;
            *(int*)((int)&gvar_8 + (int)param0) = param3;
            *param0 = v2;
            __g0 = v3 + &gvar_10;
            return;
        }
    }
    if(__g1 == 0) {
        jump 0;
    }
}
