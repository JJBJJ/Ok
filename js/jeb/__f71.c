void __f71(long long* param0, int param1, int* param2, int param3, int param4) {
    int v0;
    int v1;
    unsigned int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    unsigned int v7;
    unsigned int* ptr0;
    if(__g1 == 2) {
        *__g2 -= 13;
        unsigned int* ptr1 = *__g2;
        param0 = *ptr1;
        param1 = *(int*)(ptr1 + 1);
        param2 = *((unsigned int*)((int)&gvar_8 + (int)ptr1) + 1);
        param3 = *(int*)((int)&gvar_10 + (int)ptr1);
        param4 = *(int*)((unsigned int*)((int)&gvar_10 + (int)ptr1) + 1);
        v7 = *(unsigned int*)((int)&gvar_18 + (int)ptr1);
        v6 = *(int*)(ptr1 + 7);
        v5 = *(int*)((int)&gvar_20 + (int)ptr1);
        v4 = *(int*)((unsigned int*)((int)&gvar_20 + (int)ptr1) + 1);
        v3 = *(unsigned int*)((int)&gvar_28 + (int)ptr1);
        v2 = *(ptr1 + 11);
        v1 = *(unsigned int*)((int)&gvar_30 + (int)ptr1);
    }
    if(__g1 == 2) {
        --*__g2;
        v0 = **__g2;
    }
    if(__g1 == 0) {
        v7 = __g0 - &gvar_50;
        __g0 = (unsigned int)(__g0 - &gvar_50);
        __f72(param4, (int)(v7 + &gvar_38));
        v2 = *(unsigned int*)((int)&gvar_40 + v7);
        v5 = *((int*)((int)&gvar_38 + v7) + 1);
        v4 = *(unsigned int*)((int)&gvar_44 + v7);
        v3 = *(unsigned int*)((int)&gvar_48 + v7);
        v6 = *(int*)((int)&gvar_38 + v7);
        v1 = *(unsigned int*)((int)&gvar_4C + v7);
    }
    if((unsigned int)(__g1 == 0) | (unsigned int)(v0 == 0)) {
        __f73(v3, v4, v5, v6, param4, param3);
        if(__g1 == 1) {
            goto loc_50005642;
        }
    }
    param3 = __g1 ? param3: (int)(v7 + &gvar_28);
    if((unsigned int)(__g1 == 0) | (unsigned int)(v0 == 1)) {
        g(v1, (long long)v3, v4, param1, param3);
        if(__g1 == 1) {
        loc_50005642:
            **__g2 = ptr0;
            ++*__g2;
            ptr0 = *__g2;
            *ptr0 = param0;
            *(int*)(ptr0 + 1) = param1;
            *((unsigned int*)((int)&gvar_8 + (int)ptr0) + 1) = param2;
            *(int*)((int)&gvar_10 + (int)ptr0) = param3;
            *(int*)((unsigned int*)((int)&gvar_10 + (int)ptr0) + 1) = param4;
            *(unsigned int*)((int)&gvar_18 + (int)ptr0) = v7;
            *(int*)(ptr0 + 7) = v6;
            *(unsigned long long*)((int)&gvar_20 + (int)ptr0) = (unsigned long long)v5 | ((unsigned long long)v4 << &gvar_20);
            *(unsigned int*)((int)&gvar_28 + (int)ptr0) = (unsigned int)v3;
            *(ptr0 + 11) = v2;
            *(unsigned int*)((int)&gvar_30 + (int)ptr0) = (unsigned int)v1;
            *__g2 += 13;
        }
    }
    if(__g1 == 0) {
        param4 = *(char*)((int)&gvar_30 + v7);
        int v8 = *(int*)((int)&gvar_28 + v7);
        int v9 = __f22(&gvar_10);
        *(unsigned int*)((int)&gvar_8 + v9) = param2;
        *(int*)v9 = param1;
        int v10 = __f22(12);
        *(unsigned int*)((int)&gvar_8 + v10) = v2;
        *(int*)(v10 + 4) = v5;
        *(int*)v10 = v6;
        if(param4 == 0) {
            int v11 = __f45((long long)param1);
            if(v11 == 7) {
                __f46(v8, (long long)(v7 + &gvar_18));
                jump 0;
            }
            jump 0;
        }
        __f46(v8, (long long)(v7 + &gvar_8));
        param1 = *(unsigned long long*)((int)&gvar_8 + v7);
        *(int*)((int)&gvar_8 + (int)param0) = *(int*)((int)&gvar_10 + v7);
        *param0 = param1;
        __g0 = v7 + &gvar_50;
        return;
    }
}
