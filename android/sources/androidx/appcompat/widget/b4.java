package androidx.appcompat.widget;

import android.app.Activity;
import android.content.Context;
import android.os.Handler;
import android.util.SparseIntArray;
import androidx.core.app.FrameMetricsAggregator;
import io.sentry.SentryLevel;
import io.sentry.android.core.SentryAndroidOptions;
import java.io.File;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.WeakHashMap;
import java.util.concurrent.Executor;
import javax.inject.Provider;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class b4 implements aq.m, yb.b, uh.g {

    /* renamed from: d, reason: collision with root package name */
    public Object f927d;

    /* renamed from: e, reason: collision with root package name */
    public Object f928e;

    /* renamed from: i, reason: collision with root package name */
    public Object f929i;

    /* renamed from: v, reason: collision with root package name */
    public Object f930v;

    /* renamed from: w, reason: collision with root package name */
    public Object f931w;

    /* renamed from: x, reason: collision with root package name */
    public Object f932x;

    /* renamed from: y, reason: collision with root package name */
    public Object f933y;

    public /* synthetic */ b4(Object obj, Object obj2, Object obj3, Object obj4, Object obj5, Object obj6, Object obj7) {
        this.f927d = obj;
        this.f928e = obj2;
        this.f929i = obj3;
        this.f930v = obj4;
        this.f931w = obj5;
        this.f932x = obj6;
        this.f933y = obj7;
    }

    @Override // aq.m
    public aq.n B(hq.e eVar) {
        return new com.google.firebase.messaging.r((w) this.f927d, eVar, this);
    }

    @Override // aq.m
    public void G(hq.e eVar, mq.f value) {
        Intrinsics.checkNotNullParameter(value, "value");
        f(eVar, new mq.t(value));
    }

    @Override // aq.m
    public void J(hq.e eVar, hq.b enumClassId, hq.e enumEntryName) {
        Intrinsics.checkNotNullParameter(enumClassId, "enumClassId");
        Intrinsics.checkNotNullParameter(enumEntryName, "enumEntryName");
        f(eVar, new mq.i(enumClassId, enumEntryName));
    }

    @Override // uh.g
    public Object a() {
        String str = (String) ((uh.f) this.f927d).a();
        Object a = ((uh.f) this.f928e).a();
        Object a10 = ((uh.f) this.f929i).a();
        Context context = ((di.p) ((rd.u) this.f930v).f17275e).f7601d;
        Object a11 = ((uh.f) this.f931w).a();
        return new th.x0(str != null ? new File(context.getExternalFilesDir(null), str) : context.getExternalFilesDir(null), (th.p) a, (th.p0) a10, context, (th.h1) a11, new uh.f(new rd.u(7, (uh.f) this.f932x)), (th.g1) ((uh.f) this.f933y).a());
    }

    public void b(Activity activity) {
        io.sentry.r a = ((io.sentry.util.a) this.f932x).a();
        try {
            if (!d()) {
                a.close();
                return;
            }
            e("FrameMetricsAggregator.add", new io.sentry.android.core.b(this, activity, 0));
            io.sentry.android.core.c c6 = c();
            if (c6 != null) {
                ((WeakHashMap) this.f930v).put(activity, c6);
            }
            a.close();
        } catch (Throwable th2) {
            try {
                a.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }

    public io.sentry.android.core.c c() {
        int i5;
        int i6;
        SparseIntArray sparseIntArray;
        if (!d() || !((Boolean) ((io.sentry.util.e) this.f933y).a()).booleanValue()) {
            return null;
        }
        SparseIntArray[] sparseIntArrayArr = (SparseIntArray[]) ((FrameMetricsAggregator) ((io.sentry.util.e) this.f927d).a()).a.f13353c;
        int i10 = 0;
        if (sparseIntArrayArr.length <= 0 || (sparseIntArray = sparseIntArrayArr[0]) == null) {
            i5 = 0;
            i6 = 0;
        } else {
            int i11 = 0;
            i5 = 0;
            i6 = 0;
            while (i10 < sparseIntArray.size()) {
                int keyAt = sparseIntArray.keyAt(i10);
                int valueAt = sparseIntArray.valueAt(i10);
                i11 += valueAt;
                if (keyAt > 700) {
                    i6 += valueAt;
                } else if (keyAt > 16) {
                    i5 += valueAt;
                }
                i10++;
            }
            i10 = i11;
        }
        return new io.sentry.android.core.c(i10, i5, i6);
    }

    public boolean d() {
        SentryAndroidOptions sentryAndroidOptions = (SentryAndroidOptions) this.f928e;
        return ((Boolean) ((io.sentry.util.e) this.f933y).a()).booleanValue() && sentryAndroidOptions.isEnableFramesTracking() && !sentryAndroidOptions.isEnablePerformanceV2();
    }

    public void e(String str, Runnable runnable) {
        try {
            if (io.sentry.android.core.internal.util.e.a.c()) {
                runnable.run();
                return;
            }
            io.sentry.android.core.l0 l0Var = (io.sentry.android.core.l0) this.f931w;
            ((Handler) l0Var.f11266d).post(new io.sentry.android.core.b1(this, runnable, str, 1));
        } catch (Throwable unused) {
            if (str != null) {
                ((SentryAndroidOptions) this.f928e).getLogger().u(SentryLevel.WARNING, "Failed to execute ".concat(str), new Object[0]);
            }
        }
    }

    public void f(hq.e eVar, mq.g value) {
        Intrinsics.checkNotNullParameter(value, "value");
        ((HashMap) this.f928e).put(eVar, value);
    }

    @Override // javax.inject.Provider
    public Object get() {
        return new cc.k((Context) ((Provider) this.f927d).get(), (xb.d) ((Provider) this.f928e).get(), (dc.d) ((Provider) this.f929i).get(), (e4.m) ((e4.m) this.f930v).get(), (Executor) ((Provider) this.f931w).get(), (ec.c) ((Provider) this.f932x).get(), new l8.a(6), new j8.c(), (dc.c) ((Provider) this.f933y).get(), 0);
    }

    @Override // aq.m
    public void j() {
        w wVar = (w) this.f929i;
        hq.b annotationClassId = (hq.b) this.f931w;
        HashMap arguments = (HashMap) this.f928e;
        Intrinsics.checkNotNullParameter(annotationClassId, "annotationClassId");
        Intrinsics.checkNotNullParameter(arguments, "arguments");
        boolean z5 = false;
        if (Intrinsics.areEqual(annotationClassId, ep.b.f8185b)) {
            Object obj = arguments.get(hq.e.e("value"));
            mq.t tVar = obj instanceof mq.t ? (mq.t) obj : null;
            if (tVar != null) {
                Object obj2 = tVar.a;
                mq.r rVar = obj2 instanceof mq.r ? (mq.r) obj2 : null;
                if (rVar != null) {
                    z5 = wVar.E(rVar.a.a);
                }
            }
        }
        if (z5 || wVar.E(annotationClassId)) {
            return;
        }
        ((List) this.f932x).add(new jp.c(((ip.f) this.f930v).k(), arguments, (ip.o0) this.f933y));
    }

    @Override // aq.m
    public aq.m k(hq.b classId, hq.e eVar) {
        Intrinsics.checkNotNullParameter(classId, "classId");
        ArrayList arrayList = new ArrayList();
        w wVar = (w) this.f927d;
        ip.p0 NO_SOURCE = ip.o0.f12151g;
        Intrinsics.checkNotNullExpressionValue(NO_SOURCE, "NO_SOURCE");
        b4 G = wVar.G(classId, NO_SOURCE, arrayList);
        Intrinsics.checkNotNull(G);
        am.f fVar = new am.f();
        fVar.f676e = G;
        fVar.f677i = this;
        fVar.f678v = eVar;
        fVar.f679w = arrayList;
        fVar.f675d = G;
        return fVar;
    }

    @Override // aq.m
    public void x(hq.e eVar, Object obj) {
        f(eVar, w.f((w) this.f927d, eVar, obj));
    }
}
