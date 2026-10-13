package com.facebook.soloader;

import android.content.Context;
import android.os.StrictMode;
import android.text.TextUtils;
import android.util.Log;
import java.io.File;
import java.io.IOException;
import java.util.Enumeration;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Set;
import java.util.zip.ZipEntry;
import java.util.zip.ZipFile;

/* loaded from: classes3.dex */
public final class c extends b0 implements w {
    public final HashMap a = new HashMap();

    /* renamed from: b, reason: collision with root package name */
    public final HashMap f5089b = new HashMap();

    /* renamed from: c, reason: collision with root package name */
    public final HashSet f5090c;

    public c(Context context) {
        HashSet hashSet = new HashSet();
        String h6 = h(context.getApplicationInfo().sourceDir);
        if (h6 != null) {
            hashSet.add(h6);
        }
        if (context.getApplicationInfo().splitSourceDirs != null) {
            for (String str : context.getApplicationInfo().splitSourceDirs) {
                String h7 = h(str);
                if (h7 != null) {
                    hashSet.add(h7);
                }
            }
        }
        this.f5090c = hashSet;
    }

    public static String h(String str) {
        String[] supportedAbis = SysUtil$MarshmallowSysdeps.getSupportedAbis();
        if (str == null || str.isEmpty()) {
            Log.w("SoLoader", "Cannot compute fallback path, apk path is ".concat(str == null ? "null" : "empty"));
            return null;
        }
        if (supportedAbis == null || supportedAbis.length == 0) {
            Log.w("SoLoader", "Cannot compute fallback path, supportedAbis is ".concat(supportedAbis == null ? "null" : "empty"));
            return null;
        }
        StringBuilder p3 = k0.d.p(str, "!/lib/");
        p3.append(supportedAbis[0]);
        return p3.toString();
    }

    @Override // com.facebook.soloader.w
    public final b0 a(Context context) {
        c cVar = new c(context);
        try {
            cVar.i();
            return cVar;
        } catch (IOException e9) {
            throw new RuntimeException(e9);
        }
    }

    @Override // com.facebook.soloader.b0
    public final String b() {
        return "DirectApkSoSource";
    }

    @Override // com.facebook.soloader.b0
    public final int c(String str, int i5, StrictMode.ThreadPolicy threadPolicy) {
        if (SoLoader.f5073b == null) {
            throw new IllegalStateException("SoLoader.init() not yet called");
        }
        Iterator it = this.f5090c.iterator();
        while (true) {
            if (!it.hasNext()) {
                return 0;
            }
            String str2 = (String) it.next();
            Set set = (Set) this.a.get(str2);
            if (TextUtils.isEmpty(str2) || set == null || !set.contains(str)) {
                r.h("SoLoader", str + " not found on " + str2);
            } else {
                Set g6 = g(str2, str);
                if (g6 == null) {
                    String substring = str2.substring(0, str2.indexOf(33));
                    ZipFile zipFile = new ZipFile(substring);
                    try {
                        String str3 = str2.substring(str2.indexOf(33) + 2) + File.separator + str;
                        ZipEntry entry = zipFile.getEntry(str3);
                        if (entry == null) {
                            Log.e("SoLoader", str3 + " not found in " + substring);
                        } else {
                            i iVar = new i(zipFile, entry);
                            try {
                                for (String str4 : u.a(str, iVar)) {
                                    if (!str4.startsWith("/")) {
                                        e(str2, str, str4);
                                    }
                                }
                                iVar.close();
                            } finally {
                            }
                        }
                        zipFile.close();
                        g6 = g(str2, str);
                    } catch (Throwable th2) {
                        try {
                            zipFile.close();
                        } catch (Throwable th3) {
                            th2.addSuppressed(th3);
                        }
                        throw th2;
                    }
                }
                if (g6 != null) {
                    Iterator it2 = g6.iterator();
                    while (it2.hasNext()) {
                        SoLoader.l((String) it2.next(), i5, threadPolicy);
                    }
                }
                try {
                    i5 |= 4;
                    SoLoader.f5073b.l(i5, str2 + File.separator + str);
                    r.b(str + " found on " + str2);
                    return 1;
                } catch (UnsatisfiedLinkError e9) {
                    Log.w("SoLoader", str + " not found on " + str2 + " flag: " + i5, e9);
                }
            }
        }
    }

    @Override // com.facebook.soloader.b0
    public final void d(int i5) {
        i();
    }

    public final void e(String str, String str2, String str3) {
        synchronized (this.f5089b) {
            try {
                String str4 = str + str2;
                if (!this.f5089b.containsKey(str4)) {
                    this.f5089b.put(str4, new HashSet());
                }
                ((Set) this.f5089b.get(str4)).add(str3);
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    public final void f(String str, String str2) {
        synchronized (this.a) {
            try {
                if (!this.a.containsKey(str)) {
                    this.a.put(str, new HashSet());
                }
                ((Set) this.a.get(str)).add(str2);
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    public final Set g(String str, String str2) {
        Set set;
        synchronized (this.f5089b) {
            set = (Set) this.f5089b.get(str + str2);
        }
        return set;
    }

    public final void i() {
        int indexOf;
        int i5;
        Iterator it = this.f5090c.iterator();
        while (it.hasNext()) {
            String str = (String) it.next();
            String substring = (TextUtils.isEmpty(str) || (indexOf = str.indexOf(33)) < 0 || (i5 = indexOf + 2) >= str.length()) ? null : str.substring(i5);
            if (!TextUtils.isEmpty(substring)) {
                ZipFile zipFile = new ZipFile(str.substring(0, str.indexOf(33)));
                try {
                    Enumeration<? extends ZipEntry> entries = zipFile.entries();
                    while (entries.hasMoreElements()) {
                        ZipEntry nextElement = entries.nextElement();
                        if (nextElement != null && nextElement.getMethod() == 0 && nextElement.getName().startsWith(substring) && nextElement.getName().endsWith(".so")) {
                            f(str, nextElement.getName().substring(substring.length() + 1));
                        }
                    }
                    zipFile.close();
                } catch (Throwable th2) {
                    try {
                        zipFile.close();
                    } catch (Throwable th3) {
                        th2.addSuppressed(th3);
                    }
                    throw th2;
                }
            }
        }
    }

    @Override // com.facebook.soloader.b0
    public final String toString() {
        return "DirectApkSoSource[root = " + this.f5090c.toString() + ']';
    }
}
