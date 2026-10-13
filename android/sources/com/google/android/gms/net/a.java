package com.google.android.gms.net;

import android.content.Context;
import android.os.Trace;
import android.util.Log;
import bf.t;
import java.lang.reflect.Method;
import nf.d;
import org.chromium.net.ApiVersion;
import ye.f;
import ye.g;
import ye.h;

/* loaded from: classes3.dex */
public abstract class a {
    public static final f a = f.f20919b;

    /* renamed from: b, reason: collision with root package name */
    public static final Object f5898b = new Object();

    /* renamed from: c, reason: collision with root package name */
    public static d f5899c = null;

    /* renamed from: d, reason: collision with root package name */
    public static String f5900d = "0";

    /* renamed from: e, reason: collision with root package name */
    public static boolean f5901e;

    public static boolean a() {
        boolean z5;
        Object obj = f5898b;
        synchronized (obj) {
            try {
                if (f5901e) {
                    return true;
                }
                synchronized (obj) {
                    z5 = f5899c != null;
                }
                return z5;
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    public static void b(Context context) {
        synchronized (f5898b) {
            try {
                if (a()) {
                    return;
                }
                c cVar = new c(context, 37401, 1.0f);
                try {
                    Trace.beginSection("PlayServices CronetProviderInstaller#installIfNeeded");
                    try {
                        t.h(context, "Context must not be null");
                        if (HttpEngineProviderSingleton.getInstance(context).shouldUseHttpEngine()) {
                            f5901e = true;
                            cVar.f5910x = 0;
                            Trace.endSection();
                            cVar.close();
                            return;
                        }
                        ClassLoader classLoader = a.class.getClassLoader();
                        t.g(classLoader);
                        try {
                            classLoader.loadClass("org.chromium.net.CronetEngine");
                            int apiLevel = ApiVersion.getApiLevel();
                            Trace.beginSection("PlayServices CronetProviderInstaller#installIfNeeded verifyGooglePlayServicesIsAvailable");
                            try {
                                f fVar = a;
                                fVar.getClass();
                                f.c(context);
                                Trace.endSection();
                                try {
                                    Trace.beginSection("CronetProviderInstaller#installIfNeeded DynamiteModule#load");
                                    try {
                                        d b10 = d.b(context, d.f15415b);
                                        Trace.endSection();
                                        try {
                                            Trace.beginSection("PlayServices CronetProviderInstaller#installIfNeeded loading class");
                                            try {
                                                Class<?> loadClass = b10.a.getClassLoader().loadClass("org.chromium.net.impl.ImplVersion");
                                                if (loadClass.getClassLoader() == a.class.getClassLoader()) {
                                                    Log.e("a", "ImplVersion class is missing from Cronet module.");
                                                    throw new g();
                                                }
                                                Method method = loadClass.getMethod("getApiLevel", null);
                                                Method method2 = loadClass.getMethod("getCronetVersion", null);
                                                Integer num = (Integer) method.invoke(null, null);
                                                t.g(num);
                                                int intValue = num.intValue();
                                                String str = (String) method2.invoke(null, null);
                                                t.g(str);
                                                f5900d = str;
                                                Trace.endSection();
                                                if (apiLevel <= intValue) {
                                                    f5899c = b10;
                                                    cVar.f5910x = 0;
                                                    Trace.endSection();
                                                    cVar.close();
                                                    return;
                                                }
                                                if (fVar.a(context, "cr", 2) == null) {
                                                    Log.e("a", "Unable to fetch error resolution intent");
                                                    throw new g();
                                                }
                                                String str2 = f5900d;
                                                StringBuilder sb2 = new StringBuilder(String.valueOf(apiLevel).length() + 113 + String.valueOf(intValue).length() + 39 + String.valueOf(str2).length());
                                                sb2.append("Google Play Services update is required. The API Level of the client is ");
                                                sb2.append(apiLevel);
                                                sb2.append(". The API Level of the implementation is ");
                                                sb2.append(intValue);
                                                sb2.append(". The Cronet implementation version is ");
                                                sb2.append(str2);
                                                throw new h(sb2.toString());
                                            } catch (Throwable th2) {
                                                throw th2;
                                            }
                                        } catch (Exception e9) {
                                            Log.e("a", "Unable to read Cronet version from the Cronet module ", e9);
                                            throw ((g) new g().initCause(e9));
                                        }
                                    } finally {
                                        try {
                                            Trace.endSection();
                                        } catch (Throwable th3) {
                                            th2.addSuppressed(th3);
                                        }
                                    }
                                } catch (nf.b e10) {
                                    Log.e("a", "Unable to load Cronet module", e10);
                                    throw ((g) new g().initCause(e10));
                                }
                            } finally {
                            }
                        } catch (ClassNotFoundException e11) {
                            Log.e("a", "Cronet API is not available. Have you included all required dependencies?");
                            throw ((g) new g().initCause(e11));
                        }
                    } finally {
                    }
                } finally {
                }
            } catch (Throwable th4) {
                throw th4;
            }
        }
    }
}
