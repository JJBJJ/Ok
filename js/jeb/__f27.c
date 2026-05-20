int __f27(int param0, int param1, int param2, int param3) {
    int v0;
    param3 = 0;
    while(param2 != param3) {
        char* ptr0 = (char*)(param1 + param3);
        char* ptr1 = (char*)(param0 + param3);
        ++param3;
        if((unsigned int)*ptr0 == (unsigned int)*ptr1) {
            continue;
        }
        v0 = param3 - 1;
        break;
    }
    return (unsigned int)(param2 <= v0);
}
