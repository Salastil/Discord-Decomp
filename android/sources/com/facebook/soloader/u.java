package com.facebook.soloader;

import android.os.StrictMode;
import android.os.Trace;
import java.util.Arrays;
import java.util.concurrent.atomic.AtomicReference;
import java.util.concurrent.locks.ReentrantReadWriteLock;

/* loaded from: classes3.dex */
public abstract class u {
    public static final t a;

    static {
        new ReentrantReadWriteLock();
        t tVar = new t();
        tVar.add("libEGL.so");
        tVar.add("libGLESv2.so");
        tVar.add("libGLESv3.so");
        tVar.add("libOpenSLES.so");
        tVar.add("libandroid.so");
        tVar.add("libc.so");
        tVar.add("libdl.so");
        tVar.add("libjnigraphics.so");
        tVar.add("liblog.so");
        tVar.add("libm.so");
        tVar.add("libstdc++.so");
        tVar.add("libz.so");
        a = tVar;
    }

    public static String[] a(String str, g gVar) {
        boolean z5 = SoLoader.a;
        if (z5) {
            Api18TraceUtils.a("soloader.NativeDeps.getDependencies[", str, "]");
        }
        AtomicReference atomicReference = kb.b.a;
        kb.a[] aVarArr = (kb.a[]) atomicReference.get();
        if (aVarArr != null && aVarArr.length > 0) {
            kb.a aVar = aVarArr[0];
            throw null;
        }
        try {
            try {
                String[] c6 = r.c(gVar);
                kb.a[] aVarArr2 = (kb.a[]) atomicReference.get();
                if (aVarArr2 != null && aVarArr2.length > 0) {
                    kb.a aVar2 = aVarArr2[0];
                    throw null;
                }
                if (z5) {
                    Trace.endSection();
                }
                return c6;
            } catch (s e9) {
                throw r.a(str, e9);
            } catch (Error e10) {
                throw e10;
            } catch (RuntimeException e11) {
                throw e11;
            }
        } catch (Throwable th2) {
            kb.a[] aVarArr3 = (kb.a[]) kb.b.a.get();
            if (aVarArr3 != null && aVarArr3.length > 0) {
                kb.a aVar3 = aVarArr3[0];
                throw null;
            }
            if (SoLoader.a) {
                Trace.endSection();
            }
            throw th2;
        }
    }

    public static void b(String str, h hVar, int i5, StrictMode.ThreadPolicy threadPolicy) {
        String[] a10 = a(str, hVar);
        StringBuilder m5 = com.discord.chat.bridge.botuikit.a.m("Loading ", str, "'s dependencies: ");
        m5.append(Arrays.toString(a10));
        r.b(m5.toString());
        for (String str2 : a10) {
            if (!str2.startsWith("/") && !a.contains(str2)) {
                SoLoader.l(str2, i5, threadPolicy);
            }
        }
    }
}
