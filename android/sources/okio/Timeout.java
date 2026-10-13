package okio;

import et.w;
import java.io.InterruptedIOException;
import java.util.concurrent.TimeUnit;
import k0.d;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public class Timeout {

    /* renamed from: d, reason: collision with root package name */
    public static final w f16119d = new w();
    public boolean a;

    /* renamed from: b, reason: collision with root package name */
    public long f16120b;

    /* renamed from: c, reason: collision with root package name */
    public long f16121c;

    public Timeout a() {
        this.a = false;
        return this;
    }

    public Timeout b() {
        this.f16121c = 0L;
        return this;
    }

    public long c() {
        if (this.a) {
            return this.f16120b;
        }
        throw new IllegalStateException("No deadline");
    }

    public Timeout d(long j) {
        this.a = true;
        this.f16120b = j;
        return this;
    }

    public boolean e() {
        return this.a;
    }

    public void f() {
        if (Thread.currentThread().isInterrupted()) {
            throw new InterruptedIOException("interrupted");
        }
        if (this.a && this.f16120b - System.nanoTime() <= 0) {
            throw new InterruptedIOException("deadline reached");
        }
    }

    public Timeout g(long j, TimeUnit unit) {
        Intrinsics.checkNotNullParameter(unit, "unit");
        if (j < 0) {
            throw new IllegalArgumentException(d.j(j, "timeout < 0: ").toString());
        }
        this.f16121c = unit.toNanos(j);
        return this;
    }

    public long h() {
        return this.f16121c;
    }
}
