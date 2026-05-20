int __f28(char* param0, int param1, int param2, void param3) {
    param2 *= -2128831035;
    while(param1) {
        --param1;
        param2 = ((unsigned int)*param0 ^ param2) * 0x1000193;
        ++param0;
    }
    return param2;
}
