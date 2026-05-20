int __f23(int param0, int param1, int param2) {
    int result;
    param2 = (unsigned int)(unsigned char)param2;
    while((param1 > 0 ? param1: 0) != result) {
        if(param1 != result) {
            if((unsigned int)*(char*)(param0 + result) != param2) {
                ++result;
                continue;
            }
            return result;
        }
        jump 0;
    }
    return -1;
}
