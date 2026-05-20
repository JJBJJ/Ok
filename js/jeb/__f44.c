int __f44(long long param0, int param1) {
    int v0;
    int v1;
    int v2;
    int result;
    long long* ptr0;
    if(__g1 == 2) {
        *__g2 -= 4;
        long long* ptr1 = *__g2;
        param0 = *ptr1;
        param1 = *(int*)((int)&gvar_8 + (int)ptr1);
        result = *((int*)((int)&gvar_8 + (int)ptr1) + 1);
    }
    if(__g1 == 2) {
        --*__g2;
        v2 = **__g2;
    }
    if(__g1 == 0) {
        int v3 = __f45(param0);
        v1 = (unsigned int)((v3 & 0x6) != 6);
    }
    if(v1 ? __g1: 1) {
        if((unsigned int)(__g1 == 0) | (unsigned int)(v2 == 0)) {
            v0 = h(param0);
            if(__g1 == 1) {
                **__g2 = ptr0;
                ++*__g2;
                ptr0 = *__g2;
                *ptr0 = param0;
                *(unsigned long long*)((int)&gvar_8 + (int)ptr0) = (unsigned long long)param1 | ((unsigned long long)result << &gvar_20);
                *__g2 += 4;
                return 0;
            }
            result = v0;
        }
        if(__g1 == 0) {
            v0 = __f22(&gvar_10);
            *(int*)((int)&gvar_8 + v0) = param1;
            *(long long*)v0 = param0;
            return result;
        }
    }
    if(__g1 == 0) {
        jump 0;
    }
    jump 0;
}
