package com.facebook.soloader;

import android.os.StrictMode;
import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.util.Arrays;
import java.util.List;

/* loaded from: classes3.dex */
public class e extends b0 {
    public final File a;

    /* renamed from: b, reason: collision with root package name */
    public int f5092b;

    /* renamed from: c, reason: collision with root package name */
    public final List f5093c = Arrays.asList(new String[0]);

    public e(File file, int i5) {
        this.a = file;
        this.f5092b = i5;
    }

    @Override // com.facebook.soloader.b0
    public String b() {
        return "DirectorySoSource";
    }

    @Override // com.facebook.soloader.b0
    public int c(String str, int i5, StrictMode.ThreadPolicy threadPolicy) {
        if (SoLoader.f5073b == null) {
            throw new IllegalStateException("SoLoader.init() not yet called");
        }
        boolean contains = this.f5093c.contains(str);
        File file = this.a;
        if (contains) {
            StringBuilder p3 = k0.d.p(str, " is on the denyList, skip loading from ");
            p3.append(file.getCanonicalPath());
            r.b(p3.toString());
            return 0;
        }
        File file2 = new File(file, str);
        if (!file2.exists()) {
            file2 = null;
        }
        if (file2 == null) {
            StringBuilder p5 = k0.d.p(str, " file not found on ");
            p5.append(file.getCanonicalPath());
            r.h("SoLoader", p5.toString());
            return 0;
        }
        String canonicalPath = file2.getCanonicalPath();
        r.b(str + " file found at " + canonicalPath);
        if ((i5 & 1) != 0 && (this.f5092b & 2) != 0) {
            r.b(str + " loaded implicitly");
            return 2;
        }
        if ((this.f5092b & 1) != 0) {
            h hVar = new h();
            hVar.f5101d = file2;
            FileInputStream fileInputStream = new FileInputStream(file2);
            hVar.f5102e = fileInputStream;
            hVar.f5103i = fileInputStream.getChannel();
            try {
                u.b(str, hVar, i5, threadPolicy);
                hVar.close();
            } catch (Throwable th2) {
                try {
                    hVar.close();
                } catch (Throwable th3) {
                    th2.addSuppressed(th3);
                }
                throw th2;
            }
        } else {
            r.b("Not resolving dependencies for " + str);
        }
        try {
            SoLoader.f5073b.l(i5, canonicalPath);
            return 1;
        } catch (UnsatisfiedLinkError e9) {
            throw r.a(str, e9);
        }
    }

    @Override // com.facebook.soloader.b0
    public String toString() {
        String name;
        File file = this.a;
        try {
            name = String.valueOf(file.getCanonicalPath());
        } catch (IOException unused) {
            name = file.getName();
        }
        StringBuilder sb2 = new StringBuilder();
        sb2.append(b());
        sb2.append("[root = ");
        sb2.append(name);
        sb2.append(" flags = ");
        return com.discord.chat.bridge.botuikit.a.i(sb2, this.f5092b, ']');
    }
}
