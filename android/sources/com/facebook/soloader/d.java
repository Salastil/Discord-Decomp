package com.facebook.soloader;

import android.os.StrictMode;
import java.io.InputStream;
import java.util.HashSet;
import java.util.List;

/* loaded from: classes3.dex */
public final class d extends b0 {
    public e4.r a;

    /* renamed from: b, reason: collision with root package name */
    public HashSet f5091b;

    @Override // com.facebook.soloader.b0
    public final String b() {
        return "DirectSplitSoSource";
    }

    @Override // com.facebook.soloader.b0
    public final int c(String str, int i5, StrictMode.ThreadPolicy threadPolicy) {
        String str2;
        HashSet hashSet = this.f5091b;
        if (hashSet == null) {
            throw new IllegalStateException("prepare not called");
        }
        if (!hashSet.contains(str)) {
            return 0;
        }
        HashSet hashSet2 = this.f5091b;
        if (hashSet2 == null || this.a == null) {
            throw new IllegalStateException("prepare not called");
        }
        if (hashSet2.contains(str)) {
            StringBuilder sb2 = new StringBuilder();
            sb2.append(SoLoader.f5075d.getApplicationInfo().sourceDir);
            sb2.append("!/lib/");
            str2 = a3.e.n(sb2, (String) this.a.f8000e, "/", str);
        } else {
            str2 = null;
        }
        str2.getClass();
        System.load(str2);
        return 1;
    }

    @Override // com.facebook.soloader.b0
    public final void d(int i5) {
        InputStream open = SoLoader.f5075d.getAssets().open("base.soloader-manifest");
        try {
            this.a = e4.r.t(open);
            if (open != null) {
                open.close();
            }
            this.f5091b = new HashSet((List) this.a.f8001i);
        } catch (Throwable th2) {
            if (open != null) {
                try {
                    open.close();
                } catch (Throwable th3) {
                    th2.addSuppressed(th3);
                }
            }
            throw th2;
        }
    }
}
