int __f66(int param0, int param1, int param2, int param3) {
    int result2;
    if(param3 == 1) {
        int result = __f23((int)*(char*)param2, param1, param0);
        return result;
    }
    if(param1 == param3) {
        int v0 = __f52(param3, param0, param3, param2);
        return (v0 & 0x1) - 1;
    }
    int result3 = -1;
    if(param1 >= param3) {
        int v1 = param1 - param3;
        int v2 = param1 - param3 + 1;
        int v3 = (int)*(char*)param2;
        int v4 = (unsigned int)*(char*)(param2 + 1);
        int v5 = 1;
    loc_50004ACB:
        while(result2 <= v1) {
            if((unsigned int)param1 > (unsigned int)result2) {
                int v6 = param1;
                int v7 = param0 + result2;
                if((unsigned int)*(char*)(param0 + result2) != v3 && ((unsigned int)((unsigned int)param1 < (unsigned int)v2) | (unsigned int)((unsigned int)result2 >= (unsigned int)v2))) {
                    goto loc_50004D0B;
                }
                else if((unsigned int)*(char*)(param0 + result2) != v3) {
                    int v8 = __f23(v3, v1 - result2, v7 + 1);
                    v7 = v8;
                    if(v8 < 0) {
                        goto loc_50004D09;
                    }
                    else {
                        int v9 = v7 + result2 + 1;
                    }
                }
                int result1 = v9;
                ++v9;
                result2 = v9;
                if((unsigned int)v6 <= (unsigned int)v9) {
                    goto loc_50004D0B;
                }
                v7 = v5;
                int v10 = param0 + result2;
                if((unsigned int)*(char*)(param0 + result2) == v4) {
                    int v11 = param3 + result1;
                    if((unsigned int)((unsigned int)param1 < (unsigned int)v11) | (unsigned int)((unsigned int)result1 > (unsigned int)v11)) {
                        goto loc_50004D0B;
                    }
                    int v12 = __f52(param3, param2, param3, param0 + result1);
                    if((v12 & 0x1) != 0) {
                        return result1;
                    }
                }
                v5 = v7 + 1;
                if((unsigned int)((result2 >>> 4) + 4 > v7) | (unsigned int)(result2 > v1)) {
                    goto loc_50004ACB;
                }
                result3 = 0;
                v1 = param3 > 0 ? param3: 0;
                v7 = 0;
                while(v7 != v1) {
                    result3 = result3 * 0x1000193 + (unsigned int)*(char*)(param2 + v7);
                    int v13 = v7 + 1;
                    ++v7;
                }
                v5 = 0x1000193;
                v2 = 1;
                v7 = param3;
                while(v7 > 0) {
                    v2 *= v7 & 0x1 ? v5: 1;
                    v5 *= v5;
                    v7 >>>= 1;
                }
                int v14 = param0 + result1;
                result1 += param0;
                v7 = v14 + 1;
                param0 = 0;
                v5 = param1 - result2;
                param1 -= result2;
                while(v1) {
                    if(param1 == 0) {
                        goto loc_50004D0B;
                    }
                    --v1;
                    --param1;
                    param0 = param0 * 0x1000193 + (unsigned int)*(char*)v7;
                    ++v7;
                }
                if(param0 == result3) {
                    if((unsigned int)param3 > (unsigned int)v5) {
                        goto loc_50004D0B;
                    }
                    int v15 = __f52(param3, param2, param3, v10);
                    if((v15 & 0x1) != 0) {
                        return result2;
                    }
                }
                v1 = param3 - (param3 > v5 ? param3: v5);
                v5 = param3 - ((unsigned int)param3 > (unsigned int)v5 ? param3: v5);
                int v16 = result1 + 1;
                ++result1;
                v3 = param3 + v16;
                param1 = 0;
                while(param1 + v1 != 0) {
                    if(param1 + v5 == 0) {
                        goto loc_50004D0B;
                    }
                    int v17 = param0 * 0x1000193 + (unsigned int)*(char*)(param1 + v3) - (unsigned int)*(char*)(param1 + result1) * v2;
                    param0 = param0 * 0x1000193 + (unsigned int)*(char*)(param1 + v3) - (unsigned int)*(char*)(param1 + result1) * v2;
                    if(result3 == v17) {
                        if((unsigned int)(param1 + param3 + 1) < (unsigned int)param3) {
                            goto loc_50004D0B;
                        }
                        int v18 = __f52(param3, param2, param3, param1 + v10 + 1);
                        if(v18 & 0x1) {
                            result3 = v13;
                            goto loc_50004D09;
                        }
                    }
                    ++param1;
                }
                return -1;
            }
        loc_50004D0B:
            jump 0;
        }
    loc_50004D09:
    }
    return result3;
}
