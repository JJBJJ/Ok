int __f83(int param0, int param1, int param2) {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    if(__g1 == 2) {
        *__g2 -= 9;
        int* ptr0 = *__g2;
        param0 = *ptr0;
        param1 = *(ptr0 + 1);
        param2 = *(int*)((int)&gvar_8 + (int)ptr0);
        v5 = *((int*)((int)&gvar_8 + (int)ptr0) + 1);
        v4 = *(int*)((int)&gvar_10 + (int)ptr0);
        v3 = *(int*)((int*)((int)&gvar_10 + (int)ptr0) + 1);
        v2 = *(ptr0 + 7);
        v1 = *(int*)((int)&gvar_20 + (int)ptr0);
    }
    if(__g1 == 2) {
        --*__g2;
        v0 = **__g2;
    }
    if(__g1 == 0) {
        v5 = __g0 - &gvar_30;
        __g0 -= &gvar_30;
        v4 = v5 + &gvar_18;
    }
    if((unsigned int)(__g1 == 0) | (unsigned int)(v0 == 0)) {
        __f38(10, "Uint8Array", 0, 5, v4);
        if(__g1 == 1) {
            goto loc_50008542;
        }
    }
    if(__g1 == 0) {
        *(int*)(v5 + 44) = param1;
        *(unsigned int*)((int)&gvar_28 + v5) = 66704;
        v3 = *(int*)((int)&gvar_18 + v5);
        v2 = *(int*)((int)&gvar_20 + v5);
        v4 = v5 + &gvar_8;
        v1 = v5 + &gvar_28;
    }
    if((unsigned int)(__g1 == 0) | (unsigned int)(v0 == 1)) {
        __f71(1, (long long)v1, v2, v3, v4);
        if(__g1 == 1) {
            goto loc_50008542;
        }
    }
    if(__g1 == 0) {
        v4 = *(int*)((int)&gvar_10 + v5);
        v3 = *(unsigned long long*)((int)&gvar_8 + v5);
    }
    if((unsigned int)(__g1 == 0) | (unsigned int)(v0 == 2)) {
        l(param2, (long long)param1, param0, v3, v5);
        if(__g1 == 1) {
        loc_50008542:
            **__g2 = v6;
            ++*__g2;
            int* ptr1 = *__g2;
            *ptr1 = param0;
            *(ptr1 + 1) = param1;
            *(unsigned long long*)((int)&gvar_8 + (int)ptr1) = (unsigned long long)param2 | ((unsigned long long)v5 << &gvar_20);
            *(int*)((int)&gvar_10 + (int)ptr1) = v4;
            *(int*)((int*)((int)&gvar_10 + (int)ptr1) + 1) = v3;
            *(ptr1 + 7) = v2;
            *(int*)((int)&gvar_20 + (int)ptr1) = v1;
            *__g2 += 9;
            return 0;
        }
    }
    if(__g1 == 0) {
        int result = (int)*(char*)(v5 + 4);
        int v7 = __f22(&gvar_10);
        *(int*)((int)&gvar_8 + v7) = v4;
        *(int*)v7 = v3;
        if(result == 0) {
            jump 0;
        }
        result = __f22(&gvar_10);
        *(int*)((int)&gvar_8 + result) = v4;
        *(int*)result = v3;
        __g0 = v5 + &gvar_30;
        return result;
    }
    jump 0;
}
