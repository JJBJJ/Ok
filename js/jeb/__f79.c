int __f79(int param0, int param1) {
    int v0;
    int v1;
    int v2;
    int result;
    if(__g1 == 2) {
        *__g2 -= 4;
        int* ptr0 = *__g2;
        param0 = *ptr0;
        param1 = *(ptr0 + 1);
        v2 = *(int*)((int)&gvar_8 + (int)ptr0);
        v1 = *((int*)((int)&gvar_8 + (int)ptr0) + 1);
    }
    if(__g1 == 2) {
        --*__g2;
        v0 = **__g2;
    }
    if(__g1 == 0) {
        v2 = __g0 - &gvar_10;
        __g0 -= &gvar_10;
        v1 = v2 + &gvar_8;
    }
    if((unsigned int)(__g1 == 0) | (unsigned int)(v0 == 0)) {
        __f85(v1);
        if(__g1 == 1) {
            **__g2 = result;
            ++*__g2;
            result = *__g2;
            *(int*)result = param0;
            *(int*)(result + 4) = param1;
            *(unsigned long long*)((int)&gvar_8 + result) = (unsigned long long)v2 | ((unsigned long long)v1 << &gvar_20);
            *__g2 += 4;
            return 0;
        }
    }
    if(__g1 == 0) {
        __f54(*((int*)((int)&gvar_8 + v2) + 1), *(int*)((int)&gvar_8 + v2), param1, param0, v2);
        result = __f41(*(int*)(v2 + 4), *(int*)v2);
        __g0 = v2 + &gvar_10;
        return result;
    }
    jump 0;
}
