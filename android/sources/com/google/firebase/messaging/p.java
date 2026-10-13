package com.google.firebase.messaging;

import android.content.Context;
import android.content.Intent;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.content.pm.ResolveInfo;
import android.util.Log;
import java.util.List;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class p implements g0.o {
    public int a;

    /* renamed from: b, reason: collision with root package name */
    public int f6252b;

    /* renamed from: c, reason: collision with root package name */
    public Object f6253c;

    /* renamed from: d, reason: collision with root package name */
    public Object f6254d;

    /* renamed from: e, reason: collision with root package name */
    public Object f6255e;

    public static String c(ki.g gVar) {
        gVar.a();
        ki.i iVar = gVar.f13383c;
        String str = iVar.f13398e;
        if (str != null) {
            return str;
        }
        gVar.a();
        String str2 = iVar.f13395b;
        if (!str2.startsWith("1:")) {
            return str2;
        }
        String[] split = str2.split(":");
        if (split.length < 2) {
            return null;
        }
        String str3 = split[1];
        if (str3.isEmpty()) {
            return null;
        }
        return str3;
    }

    public int a(long j) {
        int i5 = this.a + 1;
        long[] jArr = (long[]) this.f6253c;
        int length = jArr.length;
        if (i5 > length) {
            int i6 = length * 2;
            long[] jArr2 = new long[i6];
            int[] iArr = new int[i6];
            kotlin.collections.u.f(jArr, jArr2, 0, 0, jArr.length);
            kotlin.collections.u.h((int[]) this.f6254d, iArr, 0, 14);
            this.f6253c = jArr2;
            this.f6254d = iArr;
        }
        int i10 = this.a;
        this.a = i10 + 1;
        int length2 = ((int[]) this.f6255e).length;
        if (this.f6252b >= length2) {
            int i11 = length2 * 2;
            int[] iArr2 = new int[i11];
            int i12 = 0;
            while (i12 < i11) {
                int i13 = i12 + 1;
                iArr2[i12] = i13;
                i12 = i13;
            }
            kotlin.collections.u.h((int[]) this.f6255e, iArr2, 0, 14);
            this.f6255e = iArr2;
        }
        int i14 = this.f6252b;
        int[] iArr3 = (int[]) this.f6255e;
        this.f6252b = iArr3[i14];
        long[] jArr3 = (long[]) this.f6253c;
        jArr3[i10] = j;
        ((int[]) this.f6254d)[i10] = i14;
        iArr3[i14] = i10;
        while (i10 > 0) {
            int i15 = ((i10 + 1) >> 1) - 1;
            if (Intrinsics.compare(jArr3[i15], j) <= 0) {
                break;
            }
            h(i15, i10);
            i10 = i15;
        }
        return i14;
    }

    public synchronized String b() {
        try {
            if (((String) this.f6254d) == null) {
                g();
            }
        } catch (Throwable th2) {
            throw th2;
        }
        return (String) this.f6254d;
    }

    public PackageInfo d(String str) {
        try {
            return ((Context) this.f6253c).getPackageManager().getPackageInfo(str, 0);
        } catch (PackageManager.NameNotFoundException e9) {
            Log.w("FirebaseMessaging", "Failed to find package " + e9);
            return null;
        }
    }

    public boolean e() {
        int i5;
        synchronized (this) {
            i5 = this.f6252b;
            if (i5 == 0) {
                PackageManager packageManager = ((Context) this.f6253c).getPackageManager();
                if (packageManager.checkPermission("com.google.android.c2dm.permission.SEND", "com.google.android.gms") == -1) {
                    Log.e("FirebaseMessaging", "Google Play services missing or without correct permission.");
                    i5 = 0;
                } else {
                    if (!gf.c.c()) {
                        Intent intent = new Intent("com.google.android.c2dm.intent.REGISTER");
                        intent.setPackage("com.google.android.gms");
                        List<ResolveInfo> queryIntentServices = packageManager.queryIntentServices(intent, 0);
                        if (queryIntentServices != null && queryIntentServices.size() > 0) {
                            this.f6252b = 1;
                            i5 = 1;
                        }
                    }
                    Intent intent2 = new Intent("com.google.iid.TOKEN_REQUEST");
                    intent2.setPackage("com.google.android.gms");
                    List<ResolveInfo> queryBroadcastReceivers = packageManager.queryBroadcastReceivers(intent2, 0);
                    if (queryBroadcastReceivers == null || queryBroadcastReceivers.size() <= 0) {
                        Log.w("FirebaseMessaging", "Failed to resolve IID implementation package, falling back");
                        if (gf.c.c()) {
                            this.f6252b = 2;
                        } else {
                            this.f6252b = 1;
                        }
                        i5 = this.f6252b;
                    } else {
                        this.f6252b = 2;
                        i5 = 2;
                    }
                }
            }
        }
        return i5 != 0;
    }

    public void f() {
        g0.p pVar = (g0.p) this.f6254d;
        pVar.getLayoutDirection();
        i0.a0 a0Var = pVar instanceof i0.a0 ? (i0.a0) pVar : null;
        Function1 function1 = (Function1) this.f6255e;
        boolean b10 = g0.r.b(a0Var);
        function1.invoke(g0.s.a);
        if (a0Var == null) {
            return;
        }
        a0Var.f10380y = b10;
    }

    public synchronized void g() {
        PackageInfo d6 = d(((Context) this.f6253c).getPackageName());
        if (d6 != null) {
            this.f6254d = Integer.toString(d6.versionCode);
            this.f6255e = d6.versionName;
        }
    }

    public void h(int i5, int i6) {
        long[] jArr = (long[]) this.f6253c;
        int[] iArr = (int[]) this.f6254d;
        int[] iArr2 = (int[]) this.f6255e;
        long j = jArr[i5];
        jArr[i5] = jArr[i6];
        jArr[i6] = j;
        int i10 = iArr[i5];
        int i11 = iArr[i6];
        iArr[i5] = i11;
        iArr[i6] = i10;
        iArr2[i11] = i5;
        iArr2[i10] = i6;
    }
}
