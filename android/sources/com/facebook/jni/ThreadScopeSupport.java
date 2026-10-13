package com.facebook.jni;

import com.facebook.jni.annotations.DoNotStrip;
import jb.a;

@DoNotStrip
/* loaded from: classes3.dex */
public class ThreadScopeSupport {
    static {
        a.C("fbjni");
    }

    @DoNotStrip
    private static void runStdFunction(long j) {
        runStdFunctionImpl(j);
    }

    private static native void runStdFunctionImpl(long j);
}
