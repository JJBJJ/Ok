void __f68(unsigned int* param0, long long param1, int param2) {
    int v0;
    int v1;
    unsigned int v2;
    int v3;
    int v4;
    unsigned int* ptr0;
    if(__g1 == 2) {
        *__g2 -= 7;
        unsigned int* ptr1 = *__g2;
        param0 = *ptr1;
        param1 = *(long long*)(ptr1 + 1);
        param2 = *(int*)((unsigned int*)((int)&gvar_8 + (int)ptr1) + 1);
        v4 = *(int*)((int)&gvar_10 + (int)ptr1);
        v3 = *(int*)((unsigned int*)((int)&gvar_10 + (int)ptr1) + 1);
        v2 = *(unsigned int*)((int)&gvar_18 + (int)ptr1);
    }
    if(__g1 == 2) {
        --*__g2;
        v1 = **__g2;
    }
    if(__g1 == 0) {
        v4 = __g0 - &gvar_40;
        __g0 -= &gvar_40;
        v2 = "ObjectAsia/Shanghai";
        int v5 = __f45(param1);
        v0 = v5;
        v3 = 11;
    }
    if(__g1 == 0) {
        switch(v0 - 1) {
            case 0: {
            loc_50004F33:
                if(__g1 == 0) {
                    v3 = 6;
                    v2 = "ObjectAsia/Shanghai";
                }
                else {
                loc_50004F4D:
                    v3 = __g1 ? v3: v4 + &gvar_20;
                    if((unsigned int)(__g1 == 0) | (unsigned int)(v1 == 1)) {
                        __f69(param2, param1, v3);
                        if(__g1 == 1) {
                            goto loc_5000507E;
                        }
                    }
                    if(__g1 == 0) {
                        __f54(*((int*)((int)&gvar_20 + v4) + 1), *(int*)((int)&gvar_20 + v4), 10, "ObjectAsia/Shanghai", v4 + &gvar_18);
                        __f54(1, "ObjectAsia/Shanghai", *(int*)(v4 + &gvar_1C), *(int*)((int)&gvar_18 + v4), v4 + &gvar_10);
                        v3 = *((int*)((int)&gvar_10 + v4) + 1);
                        v2 = *(unsigned int*)((int)&gvar_10 + v4);
                    }
                    else {
                    loc_50004FBC:
                        v3 = __g1 ? v3: v4 + &gvar_38;
                        if((unsigned int)(__g1 == 0) | (unsigned int)(v1 == 2)) {
                            __f69(param2, param1, v3);
                            if(__g1 == 1) {
                            loc_5000507E:
                                **__g2 = ptr0;
                                ++*__g2;
                                ptr0 = *__g2;
                                *ptr0 = param0;
                                *(long long*)(ptr0 + 1) = param1;
                                *(int*)((unsigned int*)((int)&gvar_8 + (int)ptr0) + 1) = param2;
                                *(int*)((int)&gvar_10 + (int)ptr0) = v4;
                                *(int*)((unsigned int*)((int)&gvar_10 + (int)ptr0) + 1) = v3;
                                *(unsigned int*)((int)&gvar_18 + (int)ptr0) = v2;
                                *__g2 += 7;
                            }
                        }
                        if(__g1 == 0) {
                            __f54(*((int*)((int)&gvar_38 + v4) + 1), *(int*)((int)&gvar_38 + v4), 9, "ObjectAsia/Shanghai", v4 + &gvar_30);
                            __f54(1, "ObjectAsia/Shanghai", *(int*)(v4 + 52), *(int*)((int)&gvar_30 + v4), v4 + &gvar_28);
                            v3 = *(int*)(v4 + 44);
                            v2 = *(unsigned int*)((int)&gvar_28 + v4);
                        }
                        else {
                        loc_50005024:
                            if(__g1 == 0) {
                                v3 = &gvar_8;
                                v2 = "ObjectAsia/Shanghai";
                            }
                            else {
                            loc_50005037:
                                if(__g1 == 0) {
                                    v3 = &gvar_8;
                                    v2 = "ObjectAsia/Shanghai";
                                }
                                else {
                                loc_5000504A:
                                    if(__g1 == 0) {
                                        v2 = "ObjectAsia/Shanghai";
                                        v3 = 10;
                                    }
                                }
                            }
                        }
                    }
                }
                goto loc_5000505B;
            }
            case 1: {
                goto loc_50004F4D;
            }
            case 2: {
                goto loc_50004FBC;
            }
            case 3: {
                break;
            }
            case 4: {
                goto loc_50005024;
            }
            case 5: {
                goto loc_50005037;
            }
            case 6: {
                goto loc_5000504A;
            }
            default: {
                goto loc_5000505B;
            }
        }
        v3 = v4 + &gvar_8;
    }
    if((unsigned int)(__g1 == 0) | (unsigned int)(v1 == 0)) {
        __f69(param2, param1, v3);
        if(__g1 == 1) {
            goto loc_5000507E;
        }
    }
    if(__g1 != 0) {
        goto loc_50004F33;
    }
    v3 = *((int*)((int)&gvar_8 + v4) + 1);
    v2 = *(unsigned int*)((int)&gvar_8 + v4);
loc_5000505B:
    if(__g1 == 0) {
        *param0 = v2;
        *(int*)(param0 + 1) = v3;
        __g0 = v4 + &gvar_40;
    }
}
