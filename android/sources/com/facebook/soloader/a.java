package com.facebook.soloader;

import android.content.Context;
import android.os.StrictMode;
import java.io.File;

/* loaded from: classes3.dex */
public final class a extends b0 implements w {
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public e f5085b;

    public a(Context context, int i5) {
        this.a = i5;
        this.f5085b = new e(new File(context.getApplicationInfo().nativeLibraryDir), i5);
    }

    @Override // com.facebook.soloader.w
    public final b0 a(Context context) {
        this.f5085b = new e(new File(context.getApplicationInfo().nativeLibraryDir), this.a | 1);
        return this;
    }

    @Override // com.facebook.soloader.b0
    public final String b() {
        return "ApplicationSoSource";
    }

    @Override // com.facebook.soloader.b0
    public final int c(String str, int i5, StrictMode.ThreadPolicy threadPolicy) {
        return this.f5085b.c(str, i5, threadPolicy);
    }

    @Override // com.facebook.soloader.b0
    public final void d(int i5) {
        this.f5085b.getClass();
    }

    @Override // com.facebook.soloader.b0
    public final String toString() {
        return "ApplicationSoSource[" + this.f5085b.toString() + "]";
    }
}
