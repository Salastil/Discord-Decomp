package et;

import java.util.concurrent.TimeUnit;
import kotlin.jvm.internal.Intrinsics;
import okio.Timeout;

/* loaded from: classes.dex */
public final class j extends Timeout {

    /* renamed from: e, reason: collision with root package name */
    public Timeout f8249e;

    public j(Timeout delegate) {
        Intrinsics.checkNotNullParameter(delegate, "delegate");
        this.f8249e = delegate;
    }

    @Override // okio.Timeout
    public final Timeout a() {
        return this.f8249e.a();
    }

    @Override // okio.Timeout
    public final Timeout b() {
        return this.f8249e.b();
    }

    @Override // okio.Timeout
    public final long c() {
        return this.f8249e.c();
    }

    @Override // okio.Timeout
    public final Timeout d(long j) {
        return this.f8249e.d(j);
    }

    @Override // okio.Timeout
    public final boolean e() {
        return this.f8249e.e();
    }

    @Override // okio.Timeout
    public final void f() {
        this.f8249e.f();
    }

    @Override // okio.Timeout
    public final Timeout g(long j, TimeUnit unit) {
        Intrinsics.checkNotNullParameter(unit, "unit");
        return this.f8249e.g(j, unit);
    }

    @Override // okio.Timeout
    public final long h() {
        return this.f8249e.h();
    }
}
