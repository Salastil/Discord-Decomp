package com.google.android.gms.common.api.internal;

import af.d;
import af.h0;
import af.t;
import android.os.Looper;
import androidx.annotation.NonNull;
import com.google.android.gms.common.annotation.KeepName;
import com.google.android.gms.common.api.Status;
import com.google.errorprone.annotations.ResultIgnorabilityUnspecified;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.concurrent.CountDownLatch;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.atomic.AtomicReference;
import ta.a;
import ze.l;
import ze.m;
import ze.n;

@KeepName
/* loaded from: classes3.dex */
public abstract class BasePendingResult<R extends n> extends a {
    static final ThreadLocal zaa = new h0(0);

    @NonNull
    protected final d zab;

    @NonNull
    protected final WeakReference zac;
    private n zaj;
    private Status zak;
    private volatile boolean zal;
    private boolean zam;
    private boolean zan;
    private final Object zae = new Object();
    private final CountDownLatch zaf = new CountDownLatch(1);
    private final ArrayList zag = new ArrayList();
    private final AtomicReference zai = new AtomicReference();
    private boolean zaq = false;

    public BasePendingResult(l lVar) {
        this.zab = new d(lVar != null ? ((t) lVar).f599b.f21212f : Looper.getMainLooper(), 1);
        this.zac = new WeakReference(lVar);
    }

    public abstract n M(Status status);

    public final void addStatusListener(@NonNull m mVar) {
        bf.t.a("Callback cannot be null.", mVar != null);
        synchronized (this.zae) {
            try {
                if (isReady()) {
                    mVar.a(this.zak);
                } else {
                    this.zag.add(mVar);
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    @Override // ta.a
    @NonNull
    @ResultIgnorabilityUnspecified
    public final R await(long j, @NonNull TimeUnit timeUnit) {
        R r5;
        if (j > 0) {
            bf.t.f("await must not be called on the UI thread when time is greater than zero.");
        }
        bf.t.i("Result has already been consumed.", !this.zal);
        try {
            if (!this.zaf.await(j, timeUnit)) {
                forceFailureUnlessReady(Status.E);
            }
        } catch (InterruptedException unused) {
            forceFailureUnlessReady(Status.f5655x);
        }
        bf.t.i("Result is not ready.", isReady());
        synchronized (this.zae) {
            bf.t.i("Result has already been consumed.", !this.zal);
            bf.t.i("Result is not ready.", isReady());
            r5 = (R) this.zaj;
            this.zaj = null;
            this.zal = true;
        }
        if (this.zai.getAndSet(null) != null) {
            throw new ClassCastException();
        }
        bf.t.g(r5);
        return r5;
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Deprecated
    public final void forceFailureUnlessReady(@NonNull Status status) {
        synchronized (this.zae) {
            try {
                if (!isReady()) {
                    setResult(M(status));
                    this.zan = true;
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    public final boolean isReady() {
        return this.zaf.getCount() == 0;
    }

    public final void setResult(@NonNull R r5) {
        synchronized (this.zae) {
            try {
                if (this.zan || this.zam) {
                    zal(r5);
                    return;
                }
                isReady();
                bf.t.i("Results have already been set", !isReady());
                bf.t.i("Result has already been consumed", !this.zal);
                this.zaj = r5;
                this.zak = r5.a();
                this.zaf.countDown();
                ArrayList arrayList = this.zag;
                int size = arrayList.size();
                for (int i5 = 0; i5 < size; i5++) {
                    ((m) arrayList.get(i5)).a(this.zak);
                }
                this.zag.clear();
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    public final void zak() {
        boolean z5 = true;
        if (!this.zaq && !((Boolean) zaa.get()).booleanValue()) {
            z5 = false;
        }
        this.zaq = z5;
    }

    public static void zal(n nVar) {
    }
}
