int __f65(int param0, int param1, int param2, int param3) {
    int result;
    if(param3 == 1) {
        param3 = param1 > 0 ? param1: 0;
        param2 = *(char*)param2;
        while(param3 != 0) {
            if(param1 != 0) {
                --param3;
                --param1;
                result += (unsigned int)((unsigned int)*(char*)param0 == param2);
                ++param0;
                continue;
            }
            jump 0;
        }
    }
    else {
        int v0 = __f66(param3, param2, param1, param0);
        while(v0 != -1) {
            int v1 = param3 + v0;
            if((unsigned int)param1 < (unsigned int)v1) {
                jump 0;
            }
            param1 -= v1;
            param0 += v1;
            ++result;
            v0 = __f66(param3, param2, param1, param0);
        }
    }
    return result;
}
