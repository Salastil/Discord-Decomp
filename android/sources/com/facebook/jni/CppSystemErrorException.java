package com.facebook.jni;

import com.facebook.jni.annotations.DoNotStrip;

@DoNotStrip
/* loaded from: classes3.dex */
public class CppSystemErrorException extends CppException {
    int errorCode;

    @DoNotStrip
    public CppSystemErrorException(String str, int i5) {
        super(str);
        this.errorCode = i5;
    }

    public int getErrorCode() {
        return this.errorCode;
    }
}
