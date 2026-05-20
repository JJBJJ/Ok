int __f45(long long param0) {
    int result;
    if(param0 - 0x7ff8000000000002L > 2L) {
        if(param0 != 0L && !(((unsigned int)((param0 & 0x7ff8000000000000L) != 0x7ff8000000000000L) & (unsigned int)(param0 != 0L)) | (unsigned int)((param0 & 0xfffffffffffffffeL) == 0x7ff8000000000000L))) {
            if(((param0 >>> &gvar_20) & 0x7L) - 1L >= 4L) {
                jump 0;
            }
            result = *(int*)((((unsigned int)(param0 >>> &gvar_20) & 0x7) - 1) * 4 + 67516);
        }
        return result;
    }
    switch((unsigned int)param0 - 3) {
        case 0: 
        case 1: {
            return 2;
        }
        default: {
            return 1;
        }
    }
}
