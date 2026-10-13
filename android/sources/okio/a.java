package okio;

import java.util.concurrent.TimeUnit;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public class a extends Timeout {

    /* renamed from: h, reason: collision with root package name */
    public static final long f16122h;

    /* renamed from: i, reason: collision with root package name */
    public static final long f16123i;
    public static a j;

    /* renamed from: e, reason: collision with root package name */
    public boolean f16124e;

    /* renamed from: f, reason: collision with root package name */
    public a f16125f;

    /* renamed from: g, reason: collision with root package name */
    public long f16126g;

    static {
        long millis = TimeUnit.SECONDS.toMillis(60L);
        f16122h = millis;
        f16123i = TimeUnit.MILLISECONDS.toNanos(millis);
    }

    public final void i() {
        long j5 = this.f16121c;
        boolean z5 = this.a;
        if (j5 != 0 || z5) {
            synchronized (a.class) {
                try {
                    if (this.f16124e) {
                        throw new IllegalStateException("Unbalanced enter/exit");
                    }
                    this.f16124e = true;
                    if (j == null) {
                        j = new a();
                        et.a aVar = new et.a("Okio Watchdog");
                        aVar.setDaemon(true);
                        aVar.start();
                    }
                    long nanoTime = System.nanoTime();
                    if (j5 != 0 && z5) {
                        this.f16126g = Math.min(j5, c() - nanoTime) + nanoTime;
                    } else if (j5 != 0) {
                        this.f16126g = j5 + nanoTime;
                    } else {
                        if (!z5) {
                            throw new AssertionError();
                        }
                        this.f16126g = c();
                    }
                    long j7 = this.f16126g - nanoTime;
                    a aVar2 = j;
                    Intrinsics.checkNotNull(aVar2);
                    while (true) {
                        a aVar3 = aVar2.f16125f;
                        if (aVar3 == null) {
                            break;
                        }
                        Intrinsics.checkNotNull(aVar3);
                        if (j7 < aVar3.f16126g - nanoTime) {
                            break;
                        }
                        aVar2 = aVar2.f16125f;
                        Intrinsics.checkNotNull(aVar2);
                    }
                    this.f16125f = aVar2.f16125f;
                    aVar2.f16125f = this;
                    if (aVar2 == j) {
                        a.class.notify();
                    }
                    Unit unit = Unit.a;
                } catch (Throwable th2) {
                    throw th2;
                }
            }
        }
    }

    public final boolean j() {
        synchronized (a.class) {
            if (!this.f16124e) {
                return false;
            }
            this.f16124e = false;
            a aVar = j;
            while (aVar != null) {
                a aVar2 = aVar.f16125f;
                if (aVar2 == this) {
                    aVar.f16125f = this.f16125f;
                    this.f16125f = null;
                    return false;
                }
                aVar = aVar2;
            }
            return true;
        }
    }

    public void k() {
    }
}
