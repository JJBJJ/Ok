void __f75(int param0, int param1, int param2, int param3, int param4) {
    int v0;
    int v1;
    unsigned int v2;
    int* ptr0;
    if(__g1 == 2) {
        *__g2 -= &gvar_8;
        int* ptr1 = *__g2;
        param0 = *ptr1;
        param1 = *(ptr1 + 1);
        param2 = *(int*)((int)&gvar_8 + (int)ptr1);
        param3 = *(int*)((int*)((int)&gvar_8 + (int)ptr1) + 1);
        param4 = *((int*)((int)&gvar_10 + (int)ptr1) + 1);
        v2 = *(unsigned int*)((int)&gvar_18 + (int)ptr1);
        v1 = *(ptr1 + 7);
    }
    if(__g1 == 2) {
        --*__g2;
        v0 = **__g2;
    }
    if(__g1 == 0) {
        v2 = __g0 - &gvar_10;
        __g0 = (unsigned int)(__g0 - &gvar_10);
        v1 = v2 + &gvar_8;
    }
    if((unsigned int)(__g1 == 0) | (unsigned int)(v0 == 0)) {
        k(param3, param2, param1, param0, (long long)v1);
        if(__g1 == 1) {
            **__g2 = ptr0;
            ++*__g2;
            ptr0 = *__g2;
            *ptr0 = param0;
            *(ptr0 + 1) = param1;
            *(int*)((int)&gvar_8 + (int)ptr0) = param2;
            *(int*)((int*)((int)&gvar_8 + (int)ptr0) + 1) = param3;
            *((int*)((int)&gvar_10 + (int)ptr0) + 1) = param4;
            *(unsigned int*)((int)&gvar_18 + (int)ptr0) = v2;
            *(ptr0 + 7) = v1;
            *__g2 += &gvar_8;
        }
    }
    if(__g1 == 0) {
        int v3 = (unsigned int)*(char*)((int*)((int)&gvar_8 + v2) + 1);
        int v4 = __f22(&gvar_10);
        *(int*)((int)&gvar_8 + v4) = param4;
        *(int*)v4 = param3;
        if(v3) {
            __g0 = v2 + &gvar_10;
            return;
        }
        jump 0;
    }
}
