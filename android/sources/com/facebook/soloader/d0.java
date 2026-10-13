package com.facebook.soloader;

import android.os.StrictMode;
import android.util.Log;

/* loaded from: classes3.dex */
public final class d0 extends b0 {
    @Override // com.facebook.soloader.b0
    public final String b() {
        return "SystemLoadWrapperSoSource";
    }

    @Override // com.facebook.soloader.b0
    public final int c(String str, int i5, StrictMode.ThreadPolicy threadPolicy) {
        try {
            System.loadLibrary(str.substring(3, str.length() - 3));
            return 1;
        } catch (Exception e9) {
            Log.e("SoLoader", "Error loading library: " + str, e9);
            return 0;
        }
    }

    @Override // com.facebook.soloader.b0
    public final String toString() {
        return "SystemLoadWrapperSoSource[" + c0.getClassLoaderLdLoadLibrary() + "]";
    }
}
