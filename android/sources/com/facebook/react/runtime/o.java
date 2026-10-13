package com.facebook.react.runtime;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.pm.ResolveInfo;
import android.content.pm.ServiceInfo;
import android.graphics.Bitmap;
import android.util.Log;
import com.facebook.cache.common.CacheKey;
import com.facebook.react.runtime.internal.bolts.Task;
import com.google.firebase.messaging.b0;
import io.sentry.android.core.ScreenshotEventProcessor;
import io.sentry.android.core.SentryAndroidOptions;
import io.sentry.android.core.m0;
import io.sentry.android.core.o0;
import io.sentry.c1;
import io.sentry.c5;
import io.sentry.f4;
import io.sentry.g6;
import io.sentry.o4;
import io.sentry.y4;
import java.io.BufferedWriter;
import java.io.ByteArrayOutputStream;
import java.io.InputStream;
import java.io.OutputStreamWriter;
import java.util.ArrayDeque;
import java.util.HashMap;
import java.util.concurrent.Callable;
import java.util.zip.ZipInputStream;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final /* synthetic */ class o implements Callable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f5035d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f5036e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f5037i;

    public /* synthetic */ o(int i5, Object obj, Object obj2) {
        this.f5035d = i5;
        this.f5036e = obj;
        this.f5037i = obj2;
    }

    @Override // java.util.concurrent.Callable
    public final Object call() {
        Task reload$lambda$8;
        ServiceInfo serviceInfo;
        String str;
        int i5;
        ComponentName startService;
        ByteArrayOutputStream byteArrayOutputStream;
        BufferedWriter bufferedWriter;
        String str2 = null;
        switch (this.f5035d) {
            case 0:
                reload$lambda$8 = ReactHostImpl.reload$lambda$8((ReactHostImpl) this.f5036e, (String) this.f5037i);
                return reload$lambda$8;
            case 1:
                Context context = (Context) this.f5036e;
                Intent intent = (Intent) this.f5037i;
                com.google.firebase.messaging.r e9 = com.google.firebase.messaging.r.e();
                e9.getClass();
                if (Log.isLoggable("FirebaseMessaging", 3)) {
                    Log.d("FirebaseMessaging", "Starting service");
                }
                ((ArrayDeque) e9.f6262w).offer(intent);
                Intent intent2 = new Intent("com.google.firebase.MESSAGING_EVENT");
                intent2.setPackage(context.getPackageName());
                synchronized (e9) {
                    try {
                        String str3 = (String) e9.f6259e;
                        if (str3 != null) {
                            str2 = str3;
                        } else {
                            ResolveInfo resolveService = context.getPackageManager().resolveService(intent2, 0);
                            if (resolveService != null && (serviceInfo = resolveService.serviceInfo) != null) {
                                if (context.getPackageName().equals(serviceInfo.packageName) && (str = serviceInfo.name) != null) {
                                    if (str.startsWith(".")) {
                                        e9.f6259e = context.getPackageName() + serviceInfo.name;
                                    } else {
                                        e9.f6259e = serviceInfo.name;
                                    }
                                    str2 = (String) e9.f6259e;
                                }
                                Log.e("FirebaseMessaging", "Error resolving target intent service, skipping classname enforcement. Resolved service was: " + serviceInfo.packageName + "/" + serviceInfo.name);
                            }
                            Log.e("FirebaseMessaging", "Failed to resolve target intent service, skipping classname enforcement");
                        }
                    } finally {
                    }
                }
                if (str2 != null) {
                    if (Log.isLoggable("FirebaseMessaging", 3)) {
                        Log.d("FirebaseMessaging", "Restricting intent to a specific service: ".concat(str2));
                    }
                    intent2.setClassName(context.getPackageName(), str2);
                }
                try {
                    if (e9.i(context)) {
                        startService = b0.b(context, intent2);
                    } else {
                        startService = context.startService(intent2);
                        Log.d("FirebaseMessaging", "Missing wake lock permission, service start may be delayed");
                    }
                    if (startService == null) {
                        Log.e("FirebaseMessaging", "Error while delivering the message: ServiceIntent not found.");
                        i5 = 404;
                    } else {
                        i5 = -1;
                    }
                } catch (IllegalStateException e10) {
                    Log.e("FirebaseMessaging", "Failed to start service while in background: " + e10);
                    i5 = 402;
                } catch (SecurityException e11) {
                    Log.e("FirebaseMessaging", "Error while delivering the message to the serviceIntent", e11);
                    i5 = 401;
                }
                return Integer.valueOf(i5);
            case 2:
                ha.b this$0 = (ha.b) this.f5036e;
                CacheKey key = (CacheKey) this.f5037i;
                Intrinsics.checkNotNullParameter(this$0, "this$0");
                Intrinsics.checkNotNullParameter(key, "$key");
                try {
                    this$0.f9598g.X(key);
                    ((k8.g) this$0.a).i(key);
                    return null;
                } catch (Throwable th2) {
                    Intrinsics.checkNotNullParameter(th2, "th");
                    throw th2;
                }
            case 3:
                c1 c1Var = (c1) this.f5036e;
                g6 g6Var = (g6) this.f5037i;
                ByteArrayOutputStream byteArrayOutputStream2 = new ByteArrayOutputStream();
                try {
                    BufferedWriter bufferedWriter2 = new BufferedWriter(new OutputStreamWriter(byteArrayOutputStream2, o4.f11701d));
                    try {
                        c1Var.a(g6Var, bufferedWriter2);
                        byte[] byteArray = byteArrayOutputStream2.toByteArray();
                        bufferedWriter2.close();
                        byteArrayOutputStream2.close();
                        return byteArray;
                    } finally {
                        try {
                            bufferedWriter2.close();
                        } catch (Throwable th3) {
                            th.addSuppressed(th3);
                        }
                    }
                } finally {
                    try {
                        byteArrayOutputStream2.close();
                    } catch (Throwable th4) {
                        th.addSuppressed(th4);
                    }
                }
            case 4:
                c1 c1Var2 = (c1) this.f5036e;
                y4 y4Var = (y4) this.f5037i;
                ByteArrayOutputStream byteArrayOutputStream3 = new ByteArrayOutputStream();
                try {
                    BufferedWriter bufferedWriter3 = new BufferedWriter(new OutputStreamWriter(byteArrayOutputStream3, o4.f11701d));
                    try {
                        c1Var2.a(y4Var, bufferedWriter3);
                        byte[] byteArray2 = byteArrayOutputStream3.toByteArray();
                        bufferedWriter3.close();
                        byteArrayOutputStream3.close();
                        return byteArray2;
                    } finally {
                        try {
                            bufferedWriter3.close();
                        } catch (Throwable th5) {
                            th.addSuppressed(th5);
                        }
                    }
                } finally {
                    try {
                        byteArrayOutputStream3.close();
                    } catch (Throwable th6) {
                        th.addSuppressed(th6);
                    }
                }
            case 5:
                c1 c1Var3 = (c1) this.f5036e;
                f4 f4Var = (f4) this.f5037i;
                ByteArrayOutputStream byteArrayOutputStream4 = new ByteArrayOutputStream();
                try {
                    BufferedWriter bufferedWriter4 = new BufferedWriter(new OutputStreamWriter(byteArrayOutputStream4, o4.f11701d));
                    try {
                        c1Var3.a(f4Var, bufferedWriter4);
                        byte[] byteArray3 = byteArrayOutputStream4.toByteArray();
                        bufferedWriter4.close();
                        byteArrayOutputStream4.close();
                        return byteArray3;
                    } finally {
                        try {
                            bufferedWriter4.close();
                        } catch (Throwable th7) {
                            th.addSuppressed(th7);
                        }
                    }
                } finally {
                    try {
                        byteArrayOutputStream4.close();
                    } catch (Throwable th8) {
                        th.addSuppressed(th8);
                    }
                }
            case 6:
                c1 c1Var4 = (c1) this.f5036e;
                io.sentry.clientreport.b bVar = (io.sentry.clientreport.b) this.f5037i;
                byteArrayOutputStream = new ByteArrayOutputStream();
                try {
                    bufferedWriter = new BufferedWriter(new OutputStreamWriter(byteArrayOutputStream, o4.f11701d));
                    try {
                        c1Var4.a(bVar, bufferedWriter);
                        byte[] byteArray4 = byteArrayOutputStream.toByteArray();
                        bufferedWriter.close();
                        byteArrayOutputStream.close();
                        return byteArray4;
                    } finally {
                        try {
                            bufferedWriter.close();
                        } catch (Throwable th9) {
                            th.addSuppressed(th9);
                        }
                    }
                } finally {
                }
            case 7:
                c1 c1Var5 = (c1) this.f5036e;
                c5 c5Var = (c5) this.f5037i;
                byteArrayOutputStream = new ByteArrayOutputStream();
                try {
                    bufferedWriter = new BufferedWriter(new OutputStreamWriter(byteArrayOutputStream, o4.f11701d));
                    try {
                        c1Var5.a(c5Var, bufferedWriter);
                        byte[] byteArray5 = byteArrayOutputStream.toByteArray();
                        bufferedWriter.close();
                        byteArrayOutputStream.close();
                        return byteArray5;
                    } finally {
                    }
                } finally {
                }
            case 8:
                return o0.c(((m0) this.f5036e).f11267d, (SentryAndroidOptions) this.f5037i);
            case 9:
                return jf.a.c((Bitmap) this.f5037i, ((ScreenshotEventProcessor) this.f5036e).f11055d.getLogger());
            case 10:
                l4.h hVar = (l4.h) this.f5036e;
                String str4 = (String) this.f5037i;
                if (!hVar.G) {
                    return l4.m.b(hVar.getContext(), str4, null);
                }
                Context context2 = hVar.getContext();
                HashMap hashMap = l4.m.a;
                return l4.m.b(context2, str4, "asset_" + str4);
            case 11:
                return l4.m.c((InputStream) this.f5036e, (String) this.f5037i);
            default:
                return l4.m.f(null, (ZipInputStream) this.f5036e, (String) this.f5037i);
        }
    }
}
