void __f73(int* param0, unsigned int param1, long long* param2, unsigned int param3, long long* param4, int* param5) {
    int v0;
    int v1;
    unsigned int v2;
    int v3;
    int v4;
    unsigned int* ptr0;
    if(__g1 == 2) {
        *__g2 -= 10;
        unsigned int* ptr1 = *__g2;
        param0 = *ptr1;
        param2 = *(unsigned int*)((int)&gvar_8 + (int)ptr1);
        param3 = *((unsigned int*)((int)&gvar_8 + (int)ptr1) + 1);
        param4 = *(unsigned int*)((int)&gvar_10 + (int)ptr1);
        param5 = *((unsigned int*)((int)&gvar_10 + (int)ptr1) + 1);
        v4 = *(unsigned int*)((int)&gvar_18 + (int)ptr1);
        v3 = *(int*)(ptr1 + 7);
        v2 = *(unsigned int*)((int)&gvar_20 + (int)ptr1);
        v1 = *(int*)((unsigned int*)((int)&gvar_20 + (int)ptr1) + 1);
        param1 = *(ptr1 + 1);
    }
    if(__g1 == 2) {
        --*__g2;
        v0 = **__g2;
    }
    if(__g1 == 0) {
        v3 = __g0 - &gvar_10;
        __g0 -= &gvar_10;
        v2 = (int)param1 > 0 ? param1: 0;
    }
    while(__g1 != 0 || v2 != 0) {
        if(__g1 == 0 && param1 == 0) {
            goto loc_5000584B;
        }
        else if(__g1 == 0) {
            v1 = *(param0 + 1);
            v4 = *param0;
        }
        if((unsigned int)(__g1 == 0) | (unsigned int)(v0 == 0)) {
            __f70(v1, v4, v3);
            if(__g1 == 1) {
                **__g2 = ptr0;
                ++*__g2;
                ptr0 = *__g2;
                *ptr0 = param0;
                *(ptr0 + 1) = param1;
                *(unsigned long long*)((int)&gvar_8 + (int)ptr0) = (unsigned long long)param2 | ((unsigned long long)param3 << &gvar_20);
                *(unsigned long long*)((int)&gvar_10 + (int)ptr0) = (unsigned long long)param4 | ((unsigned long long)param5 << &gvar_20);
                *(unsigned int*)((int)&gvar_18 + (int)ptr0) = (unsigned int)v4;
                *(int*)(ptr0 + 7) = v3;
                *(unsigned long long*)((int)&gvar_20 + (int)ptr0) = (unsigned long long)v2 | ((unsigned long long)v1 << &gvar_20);
                *__g2 += 10;
            }
        }
        if(__g1 != 0) {
            break;
        }
        else if(param3 == 0) {
            goto loc_5000584B;
        }
        else {
            v4 = *(int*)((int)&gvar_8 + v3);
            long long v5 = *(long long*)v3;
            *param2 = *(long long*)v3;
            *(int*)((int)&gvar_8 + (int)param2) = v4;
            v4 = param5 == 0;
            if(param5 == 0) {
                goto loc_5000584B;
            }
            *param4 = v5;
            param0 += 2;
            param2 += 2;
            ++param4;
            --v2;
            --param1;
            --param3;
            param5 = (char*)param5 - 1;
        }
    }
    if(__g1 == 0) {
        __g0 = v3 + &gvar_10;
        return;
    }
loc_5000584B:
    if(__g1 == 0) {
        jump 0;
    }
}
