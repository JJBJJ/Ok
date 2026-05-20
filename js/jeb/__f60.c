void __f60(char* param0, char* param1, int param2, int param3) {
    int v0 = param2 + param3;
    *param0 = (unsigned char)v0 ^ *param1;
    *(param0 + 1) = (unsigned char)(v0 >>> &gvar_8) ^ *(param1 + 1);
    *(param0 + 2) = (unsigned char)(v0 >>> &gvar_10) ^ *(param1 + 2);
    *(param0 + 3) = (unsigned char)(v0 >>> &gvar_18) ^ *(param1 + 3);
}
