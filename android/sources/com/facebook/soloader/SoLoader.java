package com.facebook.soloader;

import android.content.Context;
import android.content.pm.ApplicationInfo;
import android.os.Bundle;
import android.os.StrictMode;
import android.os.Trace;
import android.text.TextUtils;
import android.util.Log;
import androidx.recyclerview.widget.RecyclerView;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import java.io.File;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Set;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.atomic.AtomicInteger;
import java.util.concurrent.atomic.AtomicReference;
import java.util.concurrent.locks.ReentrantReadWriteLock;

/* loaded from: classes3.dex */
public class SoLoader {

    /* renamed from: b, reason: collision with root package name */
    public static l8.a f5073b;

    /* renamed from: m, reason: collision with root package name */
    public static int f5082m;

    /* renamed from: c, reason: collision with root package name */
    public static final ReentrantReadWriteLock f5074c = new ReentrantReadWriteLock();

    /* renamed from: d, reason: collision with root package name */
    public static Context f5075d = null;

    /* renamed from: e, reason: collision with root package name */
    public static volatile b0[] f5076e = null;

    /* renamed from: f, reason: collision with root package name */
    public static final AtomicInteger f5077f = new AtomicInteger(0);

    /* renamed from: g, reason: collision with root package name */
    public static lb.b f5078g = null;

    /* renamed from: h, reason: collision with root package name */
    public static final Set f5079h = Collections.newSetFromMap(new ConcurrentHashMap());

    /* renamed from: i, reason: collision with root package name */
    public static final HashMap f5080i = new HashMap();
    public static final Set j = Collections.newSetFromMap(new ConcurrentHashMap());
    public static final HashMap k = new HashMap();

    /* renamed from: l, reason: collision with root package name */
    public static boolean f5081l = true;

    /* renamed from: n, reason: collision with root package name */
    public static int f5083n = 0;

    /* renamed from: o, reason: collision with root package name */
    public static m f5084o = null;
    public static final boolean a = true;

    public static void a(int i5, ArrayList arrayList) {
        a aVar = new a(f5075d, i5);
        r.b("Adding application source: " + aVar.toString());
        arrayList.add(0, aVar);
    }

    public static void b(ArrayList arrayList) {
        String str = SysUtil$MarshmallowSysdeps.is64Bit() ? "/system/lib64:/vendor/lib64" : "/system/lib:/vendor/lib";
        String str2 = System.getenv("LD_LIBRARY_PATH");
        if (str2 != null && !str2.equals("")) {
            str = k0.d.l(str2, ":", str);
        }
        Iterator it = new HashSet(Arrays.asList(str.split(":"))).iterator();
        while (it.hasNext()) {
            String str3 = (String) it.next();
            r.b("adding system library source: " + str3);
            arrayList.add(new e(new File(str3), 2));
        }
    }

    public static void c(String str, String str2, int i5, StrictMode.ThreadPolicy threadPolicy) {
        boolean z5;
        ReentrantReadWriteLock reentrantReadWriteLock = f5074c;
        reentrantReadWriteLock.readLock().lock();
        try {
            if (f5076e == null) {
                Log.e("SoLoader", "Could not load: " + str + " because SoLoader is not initialized");
                throw new UnsatisfiedLinkError("SoLoader not initialized, couldn't find DSO to load: " + str);
            }
            reentrantReadWriteLock.readLock().unlock();
            if (threadPolicy == null) {
                threadPolicy = StrictMode.allowThreadDiskReads();
                z5 = true;
            } else {
                z5 = false;
            }
            if (a) {
                if (str2 != null) {
                    Api18TraceUtils.a("SoLoader.loadLibrary[", str2, "]");
                }
                Api18TraceUtils.a("SoLoader.loadLibrary[", str, "]");
            }
            try {
                reentrantReadWriteLock.readLock().lock();
                try {
                    try {
                        for (b0 b0Var : f5076e) {
                            if (q(b0Var, str, i5, threadPolicy)) {
                                if (z5) {
                                    return;
                                } else {
                                    return;
                                }
                            }
                        }
                        throw z.a(str, f5075d, f5076e);
                    } catch (IOException e9) {
                        a0 a0Var = new a0(str, e9.toString());
                        a0Var.initCause(e9);
                        throw a0Var;
                    }
                } finally {
                }
            } finally {
                if (a) {
                    if (str2 != null) {
                        Trace.endSection();
                    }
                    Trace.endSection();
                }
                if (z5) {
                    StrictMode.setThreadPolicy(threadPolicy);
                }
            }
        } finally {
        }
    }

    public static int d(Context context) {
        int i5 = f5083n;
        if (i5 != 0) {
            return i5;
        }
        if (context == null) {
            r.b("context is null, fallback to THIRD_PARTY_APP appType");
            return 1;
        }
        ApplicationInfo applicationInfo = context.getApplicationInfo();
        int i6 = applicationInfo.flags;
        int i10 = (i6 & 1) != 0 ? (i6 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0 ? 3 : 2 : 1;
        r.b("ApplicationInfo.flags is: " + applicationInfo.flags + " appType is: " + i10);
        return i10;
    }

    public static synchronized a5.a0 e() {
        a5.a0 a10;
        synchronized (SoLoader.class) {
            lb.b bVar = f5078g;
            a10 = bVar == null ? null : bVar.a();
        }
        return a10;
    }

    /* JADX WARN: Removed duplicated region for block: B:17:0x004d A[Catch: all -> 0x0064, TryCatch #0 {all -> 0x0064, blocks: (B:8:0x0025, B:10:0x002d, B:17:0x004d, B:19:0x003d, B:22:0x004f, B:23:0x0078, B:27:0x0066), top: B:7:0x0025 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static void f(Context context, int i5) {
        boolean z5;
        if (k()) {
            Log.w("SoLoader", "SoLoader already initialized");
            return;
        }
        Log.w("SoLoader", "Initializing SoLoader: " + i5);
        StrictMode.ThreadPolicy allowThreadDiskWrites = StrictMode.allowThreadDiskWrites();
        try {
            boolean h6 = h(context);
            f5081l = h6;
            if (h6) {
                int d6 = d(context);
                f5083n = d6;
                if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) == 0) {
                    if (d6 != 2 && (context == null || (context.getApplicationInfo().flags & 268435456) != 0)) {
                        z5 = false;
                        if (z5) {
                            i5 |= 8;
                        }
                    }
                    z5 = true;
                    if (z5) {
                    }
                }
                i(context, i5);
                j(context, i5);
                r.h("SoLoader", "Init SoLoader delegate");
                jb.a.x(new lh.f(4));
            } else {
                g();
                r.h("SoLoader", "Init System Loader delegate");
                jb.a.x(new l8.a(10));
            }
            Log.w("SoLoader", "SoLoader initialized: " + i5);
            StrictMode.setThreadPolicy(allowThreadDiskWrites);
        } catch (Throwable th2) {
            StrictMode.setThreadPolicy(allowThreadDiskWrites);
            throw th2;
        }
    }

    public static void g() {
        if (f5076e != null) {
            return;
        }
        ReentrantReadWriteLock reentrantReadWriteLock = f5074c;
        reentrantReadWriteLock.writeLock().lock();
        try {
            if (f5076e == null) {
                f5076e = new b0[0];
            }
            reentrantReadWriteLock.writeLock().unlock();
        } catch (Throwable th2) {
            f5074c.writeLock().unlock();
            throw th2;
        }
    }

    public static boolean h(Context context) {
        String str;
        if (f5084o != null) {
            return true;
        }
        Bundle bundle = null;
        try {
            str = context.getPackageName();
        } catch (Exception e9) {
            e = e9;
            str = null;
        }
        try {
            bundle = context.getPackageManager().getApplicationInfo(str, IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT).metaData;
        } catch (Exception e10) {
            e = e10;
            Log.w("SoLoader", "Unexpected issue with package manager (" + str + ")", e);
            return bundle == null ? true : true;
        }
        if (bundle == null && !bundle.getBoolean("com.facebook.soloader.enabled", true)) {
            return false;
        }
    }

    public static synchronized void i(Context context, int i5) {
        synchronized (SoLoader.class) {
            if (context != null) {
                try {
                    Context applicationContext = context.getApplicationContext();
                    if (applicationContext == null) {
                        Log.w("SoLoader", "context.getApplicationContext returned null, holding reference to original context.ApplicationSoSource fallbacks to: " + context.getApplicationInfo().nativeLibraryDir);
                    } else {
                        context = applicationContext;
                    }
                    f5075d = context;
                    f5078g = new lb.b(context, (i5 & RecyclerView.ItemAnimator.FLAG_MOVED) != 0 ? 1 : 0);
                } catch (Throwable th2) {
                    throw th2;
                }
            }
            if (f5073b != null) {
                return;
            }
            f5073b = new l8.a(4, new qa.s());
        }
    }

    public static void init(Context context, int i5) {
        f(context, i5);
    }

    /* JADX WARN: Removed duplicated region for block: B:77:0x00aa A[Catch: all -> 0x01a6, TryCatch #0 {all -> 0x01a6, blocks: (B:7:0x000e, B:12:0x001a, B:15:0x002a, B:19:0x0033, B:20:0x00fb, B:32:0x0122, B:35:0x0131, B:37:0x014a, B:38:0x014d, B:40:0x0151, B:41:0x0160, B:43:0x0167, B:48:0x016c, B:50:0x0192, B:54:0x019e, B:55:0x01a5, B:57:0x0050, B:58:0x0062, B:62:0x0071, B:67:0x007a, B:68:0x007f, B:70:0x0083, B:72:0x0095, B:77:0x00aa, B:79:0x00cc, B:80:0x00cf, B:85:0x00d8, B:86:0x00dd, B:88:0x00e1, B:91:0x00eb, B:94:0x00f2, B:97:0x009a, B:22:0x010e), top: B:6:0x000e, inners: #1 }] */
    /* JADX WARN: Removed duplicated region for block: B:82:0x00d3  */
    /* JADX WARN: Removed duplicated region for block: B:90:0x00e8  */
    /* JADX WARN: Removed duplicated region for block: B:93:0x00f1  */
    /* JADX WARN: Removed duplicated region for block: B:94:0x00f2 A[Catch: all -> 0x01a6, TryCatch #0 {all -> 0x01a6, blocks: (B:7:0x000e, B:12:0x001a, B:15:0x002a, B:19:0x0033, B:20:0x00fb, B:32:0x0122, B:35:0x0131, B:37:0x014a, B:38:0x014d, B:40:0x0151, B:41:0x0160, B:43:0x0167, B:48:0x016c, B:50:0x0192, B:54:0x019e, B:55:0x01a5, B:57:0x0050, B:58:0x0062, B:62:0x0071, B:67:0x007a, B:68:0x007f, B:70:0x0083, B:72:0x0095, B:77:0x00aa, B:79:0x00cc, B:80:0x00cf, B:85:0x00d8, B:86:0x00dd, B:88:0x00e1, B:91:0x00eb, B:94:0x00f2, B:97:0x009a, B:22:0x010e), top: B:6:0x000e, inners: #1 }] */
    /* JADX WARN: Removed duplicated region for block: B:95:0x00ea  */
    /* JADX WARN: Removed duplicated region for block: B:96:0x00e0  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static void j(Context context, int i5) {
        boolean z5;
        int i6;
        int i10;
        int i11;
        ReentrantReadWriteLock.WriteLock writeLock;
        if (f5076e != null) {
            return;
        }
        ReentrantReadWriteLock reentrantReadWriteLock = f5074c;
        reentrantReadWriteLock.writeLock().lock();
        try {
            if (f5076e != null) {
                writeLock = reentrantReadWriteLock.writeLock();
            } else {
                f5082m = i5;
                ArrayList arrayList = new ArrayList();
                boolean z6 = (i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) != 0;
                boolean z7 = (i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) != 0;
                if (z6) {
                    d0 d0Var = new d0();
                    r.b("adding systemLoadWrapper source: " + d0Var);
                    arrayList.add(0, d0Var);
                } else if (z7) {
                    b(arrayList);
                    d dVar = new d();
                    dVar.a = null;
                    dVar.f5091b = null;
                    arrayList.add(0, dVar);
                } else {
                    b(arrayList);
                    if (context != null) {
                        if ((i5 & 1) != 0) {
                            int i12 = f5083n;
                            if (i12 != 1) {
                                if (i12 != 2 && i12 != 3) {
                                    throw new RuntimeException("Unsupported app type, we should not reach here");
                                }
                                i11 = 1;
                            } else {
                                i11 = 0;
                            }
                            a(i11, arrayList);
                            r.b("Adding exo package source: lib-main");
                            arrayList.add(0, new l(context, "lib-main", true));
                        } else {
                            if (f5083n != 2 && (context.getApplicationInfo().flags & 268435456) != 0) {
                                z5 = false;
                                if (z5) {
                                    c cVar = new c(context);
                                    r.b("validating/adding directApk source: " + cVar.toString());
                                    if (!cVar.f5090c.isEmpty()) {
                                        arrayList.add(0, cVar);
                                    }
                                }
                                i6 = f5083n;
                                if (i6 == 1) {
                                    if (i6 != 2 && i6 != 3) {
                                        throw new RuntimeException("Unsupported app type, we should not reach here");
                                    }
                                    i10 = 1;
                                } else {
                                    i10 = 0;
                                }
                                a(i10, arrayList);
                                boolean z8 = (i5 & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) == 0;
                                if ((f5082m & 8) != 0) {
                                    arrayList.add(0, new b(context, "lib-main", !z8));
                                }
                            }
                            z5 = true;
                            if (z5) {
                            }
                            i6 = f5083n;
                            if (i6 == 1) {
                            }
                            a(i10, arrayList);
                            if ((i5 & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) == 0) {
                            }
                            if ((f5082m & 8) != 0) {
                            }
                        }
                    }
                }
                b0[] b0VarArr = (b0[]) arrayList.toArray(new b0[arrayList.size()]);
                reentrantReadWriteLock.writeLock().lock();
                try {
                    int i13 = f5082m;
                    int i14 = (i13 & 2) == 0 ? 0 : 1;
                    if ((i13 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 0) {
                        i14 |= 4;
                    }
                    if ((i13 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) == 0) {
                        i14 |= 8;
                    }
                    reentrantReadWriteLock.writeLock().unlock();
                    int length = b0VarArr.length;
                    while (true) {
                        int i15 = length - 1;
                        if (length <= 0) {
                            break;
                        }
                        String str = "Preparing SO source: " + b0VarArr[i15];
                        if (r.f("SoLoader", 4)) {
                            Log.i("SoLoader", str);
                        }
                        boolean z10 = a;
                        if (z10) {
                            Api18TraceUtils.a("SoLoader", "_", b0VarArr[i15].getClass().getSimpleName());
                        }
                        b0VarArr[i15].d(i14);
                        if (z10) {
                            Trace.endSection();
                        }
                        length = i15;
                    }
                    f5076e = b0VarArr;
                    f5077f.getAndIncrement();
                    String str2 = "init finish: " + f5076e.length + " SO sources prepared";
                    if (r.f("SoLoader", 4)) {
                        Log.i("SoLoader", str2);
                    }
                    writeLock = f5074c.writeLock();
                } finally {
                    reentrantReadWriteLock.writeLock().unlock();
                }
            }
            writeLock.unlock();
        } catch (Throwable th2) {
            reentrantReadWriteLock = f5074c;
            throw th2;
        }
    }

    public static boolean k() {
        if (f5076e != null) {
            return true;
        }
        ReentrantReadWriteLock reentrantReadWriteLock = f5074c;
        reentrantReadWriteLock.readLock().lock();
        try {
            boolean z5 = f5076e != null;
            reentrantReadWriteLock.readLock().unlock();
            return z5;
        } catch (Throwable th2) {
            f5074c.readLock().unlock();
            throw th2;
        }
    }

    public static void l(String str, int i5, StrictMode.ThreadPolicy threadPolicy) {
        AtomicReference atomicReference = kb.b.a;
        kb.a[] aVarArr = (kb.a[]) atomicReference.get();
        if (aVarArr != null && aVarArr.length > 0) {
            kb.a aVar = aVarArr[0];
            throw null;
        }
        try {
            p(str, null, null, i5 | 1, threadPolicy);
            kb.a[] aVarArr2 = (kb.a[]) atomicReference.get();
            if (aVarArr2 == null || aVarArr2.length <= 0) {
                return;
            }
            kb.a aVar2 = aVarArr2[0];
            throw null;
        } catch (Throwable th2) {
            try {
                throw th2;
            } catch (Throwable th3) {
                kb.a[] aVarArr3 = (kb.a[]) kb.b.a.get();
                if (aVarArr3 == null || aVarArr3.length <= 0) {
                    throw th3;
                }
                kb.a aVar3 = aVarArr3[0];
                throw null;
            }
        }
    }

    public static void m(String str) {
        if (f5081l) {
            n(0, str);
        } else {
            jb.a.C(str);
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:25:0x0067  */
    /* JADX WARN: Removed duplicated region for block: B:27:0x006c  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static boolean n(int i5, String str) {
        Boolean bool;
        if (f5076e == null) {
            ReentrantReadWriteLock reentrantReadWriteLock = f5074c;
            reentrantReadWriteLock.readLock().lock();
            try {
                if (f5076e == null) {
                    if (!"http://www.android.com/".equals(System.getProperty("java.vendor.url"))) {
                        synchronized (SoLoader.class) {
                            try {
                                boolean contains = f5079h.contains(str);
                                boolean z5 = !contains;
                                if (!contains) {
                                    System.loadLibrary(str);
                                }
                                bool = Boolean.valueOf(z5);
                            } finally {
                            }
                        }
                        reentrantReadWriteLock.readLock().unlock();
                        if (bool == null) {
                            return bool.booleanValue();
                        }
                        if (!f5081l) {
                            return jb.a.C(str);
                        }
                        if (f5083n != 2) {
                        }
                        m mVar = f5084o;
                        String mapLibName = mVar != null ? mVar.mapLibName(str) : null;
                        String str2 = mapLibName != null ? mapLibName : str;
                        AtomicReference atomicReference = kb.b.a;
                        kb.a[] aVarArr = (kb.a[]) atomicReference.get();
                        if (aVarArr != null && aVarArr.length > 0) {
                            kb.a aVar = aVarArr[0];
                            throw null;
                        }
                        try {
                            boolean o6 = o(System.mapLibraryName(str2), str, mapLibName, i5);
                            kb.a[] aVarArr2 = (kb.a[]) atomicReference.get();
                            if (aVarArr2 == null || aVarArr2.length <= 0) {
                                return o6;
                            }
                            kb.a aVar2 = aVarArr2[0];
                            throw null;
                        } catch (Throwable th2) {
                            try {
                                throw th2;
                            } catch (Throwable th3) {
                                kb.a[] aVarArr3 = (kb.a[]) kb.b.a.get();
                                if (aVarArr3 == null || aVarArr3.length <= 0) {
                                    throw th3;
                                }
                                kb.a aVar3 = aVarArr3[0];
                                throw null;
                            }
                        }
                    }
                    if (!k()) {
                        throw new IllegalStateException("SoLoader.init() not yet called");
                    }
                }
                reentrantReadWriteLock.readLock().unlock();
            } catch (Throwable th4) {
                f5074c.readLock().unlock();
                throw th4;
            }
        }
        bool = null;
        if (bool == null) {
        }
    }

    public static boolean o(String str, String str2, String str3, int i5) {
        a5.a0 a0Var = null;
        while (true) {
            try {
                return p(str, str2, str3, i5, null);
            } catch (UnsatisfiedLinkError e9) {
                StringBuilder m5 = com.discord.chat.bridge.botuikit.a.m("Running a recovery step for ", str, " due to ");
                m5.append(e9.toString());
                Log.w("SoLoader", m5.toString());
                ReentrantReadWriteLock reentrantReadWriteLock = f5074c;
                reentrantReadWriteLock.writeLock().lock();
                if (a0Var == null) {
                    try {
                        try {
                            a0Var = e();
                            if (a0Var == null) {
                                Log.w("SoLoader", "No recovery strategy");
                                throw e9;
                            }
                        } catch (Throwable th2) {
                            reentrantReadWriteLock.writeLock().unlock();
                            throw th2;
                        }
                    } catch (v e10) {
                        Log.e("SoLoader", "Base APK not found during recovery", e10);
                        throw e10;
                    } catch (Exception e11) {
                        Log.e("SoLoader", "Got an exception during recovery, will throw the initial error instead", e11);
                        throw e9;
                    }
                }
                if (!r(e9, a0Var)) {
                    reentrantReadWriteLock.writeLock().unlock();
                    Log.w("SoLoader", "Failed to recover");
                    throw e9;
                }
                f5077f.getAndIncrement();
                reentrantReadWriteLock.writeLock().unlock();
            }
        }
    }

    public static boolean p(String str, String str2, String str3, int i5, StrictMode.ThreadPolicy threadPolicy) {
        boolean z5;
        Object obj;
        Object obj2;
        if (TextUtils.isEmpty(str2) || !j.contains(str2)) {
            Set set = f5079h;
            if (!set.contains(str) || str3 != null) {
                synchronized (SoLoader.class) {
                    try {
                        if (!set.contains(str)) {
                            z5 = false;
                        } else {
                            if (str3 == null) {
                                return false;
                            }
                            z5 = true;
                        }
                        HashMap hashMap = f5080i;
                        if (hashMap.containsKey(str)) {
                            obj = hashMap.get(str);
                        } else {
                            Object obj3 = new Object();
                            hashMap.put(str, obj3);
                            obj = obj3;
                        }
                        HashMap hashMap2 = k;
                        if (hashMap2.containsKey(str2)) {
                            obj2 = hashMap2.get(str2);
                        } else {
                            Object obj4 = new Object();
                            hashMap2.put(str2, obj4);
                            obj2 = obj4;
                        }
                        ReentrantReadWriteLock reentrantReadWriteLock = f5074c;
                        reentrantReadWriteLock.readLock().lock();
                        try {
                            synchronized (obj) {
                                if (!z5) {
                                    if (set.contains(str)) {
                                        if (str3 == null) {
                                            reentrantReadWriteLock.readLock().unlock();
                                            return false;
                                        }
                                        z5 = true;
                                    }
                                    if (!z5) {
                                        try {
                                            r.b("About to load: " + str);
                                            c(str, str2, i5, threadPolicy);
                                            r.b("Loaded: " + str);
                                            set.add(str);
                                        } catch (UnsatisfiedLinkError e9) {
                                            String message = e9.getMessage();
                                            if (message == null) {
                                                throw e9;
                                            }
                                            if (!message.contains("unexpected e_machine:")) {
                                                throw e9;
                                            }
                                            x xVar = new x("APK was built for a different platform. Supported ABIs: " + Arrays.toString(SysUtil$MarshmallowSysdeps.getSupportedAbis()) + " error: " + message.substring(message.lastIndexOf("unexpected e_machine:")));
                                            xVar.initCause(e9);
                                            throw xVar;
                                        }
                                    }
                                }
                                synchronized (obj2) {
                                    if ((i5 & 16) == 0 && str3 != null) {
                                        try {
                                            if (TextUtils.isEmpty(str2) || !j.contains(str2)) {
                                                boolean z6 = a;
                                                if (z6 && f5084o == null) {
                                                    Api18TraceUtils.a("MergedSoMapping.invokeJniOnload[", str2, "]");
                                                }
                                                try {
                                                    try {
                                                        r.b("About to invoke JNI_OnLoad for merged library " + str2 + ", which was merged into " + str);
                                                        m mVar = f5084o;
                                                        if (mVar == null) {
                                                            throw new IllegalArgumentException(a3.e.k("Unknown library: ", str2));
                                                        }
                                                        mVar.invokeJniOnload(str2);
                                                        j.add(str2);
                                                        if (z6 && f5084o == null) {
                                                            Trace.endSection();
                                                        }
                                                    } catch (UnsatisfiedLinkError e10) {
                                                        throw new RuntimeException("Failed to call JNI_OnLoad from '" + str2 + "', which has been merged into '" + str + "'.  See comment for details.", e10);
                                                    }
                                                } finally {
                                                }
                                            }
                                        } finally {
                                        }
                                    }
                                }
                                reentrantReadWriteLock.readLock().unlock();
                                return !z5;
                            }
                        } catch (Throwable th2) {
                            f5074c.readLock().unlock();
                            throw th2;
                        }
                    } finally {
                    }
                }
            }
        }
        return false;
    }

    public static boolean q(b0 b0Var, String str, int i5, StrictMode.ThreadPolicy threadPolicy) {
        AtomicReference atomicReference = kb.b.a;
        kb.a[] aVarArr = (kb.a[]) atomicReference.get();
        if (aVarArr != null && aVarArr.length > 0) {
            kb.a aVar = aVarArr[0];
            throw null;
        }
        try {
            boolean z5 = b0Var.c(str, i5, threadPolicy) != 0;
            kb.a[] aVarArr2 = (kb.a[]) atomicReference.get();
            if (aVarArr2 == null || aVarArr2.length <= 0) {
                return z5;
            }
            kb.a aVar2 = aVarArr2[0];
            throw null;
        } catch (Throwable th2) {
            try {
                throw th2;
            } catch (Throwable th3) {
                kb.a[] aVarArr3 = (kb.a[]) kb.b.a.get();
                if (aVarArr3 == null || aVarArr3.length <= 0) {
                    throw th3;
                }
                kb.a aVar3 = aVarArr3[0];
                throw null;
            }
        }
    }

    public static boolean r(UnsatisfiedLinkError unsatisfiedLinkError, lb.c cVar) {
        AtomicReference atomicReference = kb.b.a;
        kb.a[] aVarArr = (kb.a[]) atomicReference.get();
        if (aVarArr != null && aVarArr.length > 0) {
            kb.a aVar = aVarArr[0];
            throw null;
        }
        try {
            boolean e9 = cVar.e(unsatisfiedLinkError, f5076e);
            kb.a[] aVarArr2 = (kb.a[]) atomicReference.get();
            if (aVarArr2 == null || aVarArr2.length <= 0) {
                return e9;
            }
            kb.a aVar2 = aVarArr2[0];
            throw null;
        } catch (Throwable th2) {
            try {
                throw th2;
            } catch (Throwable th3) {
                kb.a[] aVarArr3 = (kb.a[]) kb.b.a.get();
                if (aVarArr3 == null || aVarArr3.length <= 0) {
                    throw th3;
                }
                kb.a aVar3 = aVarArr3[0];
                throw null;
            }
        }
    }
}
