void __f76(int* param0, long long param1, int param2, int param3, int param4, int param5, int param6) {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    unsigned int* ptr0;
    if(__g1 == 2) {
        *__g2 -= 11;
        unsigned int* ptr1 = *__g2;
        param0 = *ptr1;
        param2 = *(int*)((unsigned int*)((int)&gvar_8 + (int)ptr1) + 1);
        param3 = *(int*)((int)&gvar_10 + (int)ptr1);
        param4 = *(int*)((unsigned int*)((int)&gvar_10 + (int)ptr1) + 1);
        param5 = *(unsigned int*)((int)&gvar_18 + (int)ptr1);
        param6 = *(int*)(ptr1 + 7);
        v4 = *(int*)((int)&gvar_20 + (int)ptr1);
        v3 = *(int*)((unsigned int*)((int)&gvar_20 + (int)ptr1) + 1);
        v2 = *(unsigned int*)((int)&gvar_28 + (int)ptr1);
        param1 = *(long long*)(ptr1 + 1);
    }
    if(__g1 == 2) {
        --*__g2;
        v1 = **__g2;
    }
    if(__g1 == 0) {
        param2 = __g0 - &gvar_20;
        __g0 -= &gvar_20;
        param6 = 0;
        param5 = 0;
        param4 = param4 != 3;
    }
    if(__g1 != 0) {
    loc_50005C64:
        if((unsigned int)(__g1 == 0) | (unsigned int)(v1 == 0)) {
            __f68(param5, param1, param4);
            if(__g1 == 1) {
            loc_50005DE2:
                **__g2 = ptr0;
                ++*__g2;
                ptr0 = *__g2;
                *ptr0 = param0;
                *(long long*)(ptr0 + 1) = param1;
                *(int*)((unsigned int*)((int)&gvar_8 + (int)ptr0) + 1) = param2;
                *(int*)((int)&gvar_10 + (int)ptr0) = param3;
                *(int*)((unsigned int*)((int)&gvar_10 + (int)ptr0) + 1) = param4;
                *(unsigned int*)((int)&gvar_18 + (int)ptr0) = (unsigned int)param5;
                *(int*)(ptr0 + 7) = param6;
                *(unsigned long long*)((int)&gvar_20 + (int)ptr0) = (unsigned long long)v4 | ((unsigned long long)v3 << &gvar_20);
                *(unsigned int*)((int)&gvar_28 + (int)ptr0) = (unsigned int)v2;
                *__g2 += 11;
                goto loc_50005DBF;
            }
        }
        if(__g1 == 0) {
            param4 = *(int*)(param2 + &gvar_1C);
            v4 = *(unsigned int*)((int)&gvar_18 + param2);
            param5 = param2 + &gvar_10;
            param6 = *(unsigned int*)((int)&gvar_28 + param3);
            param1 = *(unsigned long long*)((int)&gvar_20 + param3);
        }
        if((unsigned int)(__g1 == 0) | (unsigned int)(v1 == 1)) {
            __f68(param6, param1, param5);
            if(__g1 == 1) {
                goto loc_50005DE2;
            }
        }
        if(__g1 == 0) {
            param6 = 0;
            v3 = *(int*)((int)&gvar_10 + param2);
            v2 = *((int*)((int)&gvar_10 + param2) + 1);
            param5 = 0;
        }
        if((unsigned int)(__g1 == 0) | (unsigned int)(v1 == 2)) {
            int v5 = __f82(v2, v3, param4, v4);
            if(__g1 == 1) {
                goto loc_50005DE2;
            }
            param4 = v5;
        }
        if(__g1 == 0 && (param4 & 0x1) == 0) {
            goto loc_50005DBF;
        }
        else if(__g1 == 0) {
            param4 = param2 + &gvar_8;
            param1 = *(long long*)param3;
            param3 = *(int*)((int)&gvar_8 + param3);
        }
        if((unsigned int)(__g1 == 0) | (unsigned int)(v1 == 3)) {
            __f68(param3, param1, param4);
            if(__g1 == 1) {
                goto loc_50005DE2;
            }
        }
        if(__g1 == 0) {
            param4 = *((int*)((int)&gvar_8 + param2) + 1);
            param3 = *(int*)((int)&gvar_8 + param2);
        }
        if((unsigned int)(__g1 == 0) | (unsigned int)(v1 == 4)) {
            v0 = __f79(param4, param3);
            if(__g1 == 1) {
                goto loc_50005DE2;
            }
            param3 = v0;
        }
        if(__g1 == 0) {
            v0 = __f22(12);
            param5 = v0;
            *(int*)((int)&gvar_8 + v0) = *(int*)((int)&gvar_8 + param3);
            *(long long*)param5 = *(long long*)param3;
            param6 = 67428;
        }
        if(!((unsigned int)(__g1 == 0) | (unsigned int)(v1 == 5))) {
            goto loc_50005DBF;
        }
        int v6 = __f83(12, 12, param5);
        if(__g1 == 1) {
            goto loc_50005DE2;
        }
        param5 = v6;
    }
    else if(!param4) {
        param4 = param2 + &gvar_18;
        param5 = *(unsigned int*)((int)&gvar_18 + param3);
        param1 = *(unsigned long long*)((int)&gvar_10 + param3);
        goto loc_50005C64;
    }
loc_50005DBF:
    if(__g1 == 0) {
        *param0 = param6;
        *(param0 + 1) = param5;
        __g0 = param2 + &gvar_20;
    }
}
