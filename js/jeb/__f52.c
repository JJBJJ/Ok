int __f52(char* param0, int param1, char* param2, int param3) {
    if(param1 == param3) {
        param1 = param1 > 0 ? param1: 0;
        do {
            int result = (unsigned int)(param1 == 0);
            if(param1 == 0) {
                goto loc_50004014;
            }
            else {
                --param1;
                int v0 = (unsigned int)*param2;
                int v1 = (unsigned int)*param0;
                ++param2;
                ++param0;
            }
        }
        while(v0 == v1);
    loc_50004014:
    }
    return result;
}
