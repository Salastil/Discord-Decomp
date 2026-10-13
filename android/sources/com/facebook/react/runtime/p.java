package com.facebook.react.runtime;

import androidx.work.impl.WorkDatabase;
import com.facebook.cache.common.CacheKey;
import com.facebook.common.references.CloseableReference;
import com.facebook.imagepipeline.image.EncodedImage;
import com.facebook.react.runtime.internal.bolts.Task;
import java.util.ArrayList;
import java.util.concurrent.Callable;
import java.util.concurrent.CancellationException;
import java.util.concurrent.atomic.AtomicBoolean;
import jc.b0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final /* synthetic */ class p implements Callable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f5038d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f5039e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f5040i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ Object f5041v;

    public /* synthetic */ p(Object obj, Object obj2, Object obj3, int i5) {
        this.f5038d = i5;
        this.f5039e = obj;
        this.f5040i = obj2;
        this.f5041v = obj3;
    }

    @Override // java.util.concurrent.Callable
    public final Object call() {
        Task destroy$lambda$12;
        qa.q c6;
        switch (this.f5038d) {
            case 0:
                destroy$lambda$12 = ReactHostImpl.destroy$lambda$12((ReactHostImpl) this.f5039e, (String) this.f5040i, (Exception) this.f5041v);
                return destroy$lambda$12;
            case 1:
                AtomicBoolean isCancelled = (AtomicBoolean) this.f5039e;
                ha.b this$0 = (ha.b) this.f5040i;
                CacheKey key = (CacheKey) this.f5041v;
                Intrinsics.checkNotNullParameter(isCancelled, "$isCancelled");
                Intrinsics.checkNotNullParameter(this$0, "this$0");
                Intrinsics.checkNotNullParameter(key, "$key");
                try {
                    if (isCancelled.get()) {
                        throw new CancellationException();
                    }
                    ha.l lVar = this$0.f9598g;
                    ha.k kVar = this$0.f9597f;
                    EncodedImage S = lVar.S(key);
                    if (S != null) {
                        p8.a.q("Found image for %s in staging area", key.c(), ha.b.class);
                        kVar.getClass();
                    } else {
                        p8.a.q("Did not find image for %s in staging area", key.c(), ha.b.class);
                        kVar.getClass();
                        try {
                            c6 = this$0.c(key);
                        } catch (Exception unused) {
                        }
                        if (c6 == null) {
                            return null;
                        }
                        s8.b A = CloseableReference.A(c6);
                        Intrinsics.checkNotNullExpressionValue(A, "of(...)");
                        try {
                            S = new EncodedImage(A);
                        } finally {
                            CloseableReference.l(A);
                        }
                    }
                    if (!Thread.interrupted()) {
                        return S;
                    }
                    if (p8.a.a.isLoggable(2)) {
                        p8.a.a.v(ha.b.class.getSimpleName(), "Host thread was interrupted, decreasing reference count");
                    }
                    S.close();
                    throw new InterruptedException();
                } catch (Throwable th2) {
                    Intrinsics.checkNotNullParameter(th2, "th");
                    throw th2;
                }
            case 2:
                return ((oi.e) this.f5039e).f15989d.submit(new b0(11, (Callable) this.f5040i, (u4.b) this.f5041v));
            default:
                w3.e eVar = (w3.e) this.f5039e;
                ArrayList arrayList = (ArrayList) this.f5041v;
                String str = (String) this.f5040i;
                WorkDatabase workDatabase = eVar.f19639e;
                arrayList.addAll(workDatabase.u().n(str));
                return workDatabase.t().n(str);
        }
    }

    public /* synthetic */ p(w3.e eVar, ArrayList arrayList, String str) {
        this.f5038d = 3;
        this.f5039e = eVar;
        this.f5041v = arrayList;
        this.f5040i = str;
    }
}
