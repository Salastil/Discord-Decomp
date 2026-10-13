package v3;

import java.util.concurrent.ExecutorService;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class b {
    public final ExecutorService a;

    /* renamed from: b, reason: collision with root package name */
    public final ExecutorService f19183b;

    /* renamed from: c, reason: collision with root package name */
    public final r f19184c;

    /* renamed from: d, reason: collision with root package name */
    public final a0 f19185d;

    /* renamed from: e, reason: collision with root package name */
    public final r f19186e;

    /* renamed from: f, reason: collision with root package name */
    public final rd.u f19187f;

    /* renamed from: g, reason: collision with root package name */
    public final int f19188g;

    /* renamed from: h, reason: collision with root package name */
    public final int f19189h;

    /* renamed from: i, reason: collision with root package name */
    public final int f19190i;
    public final int j;

    public b(r builder) {
        Intrinsics.checkNotNullParameter(builder, "builder");
        this.a = ys.l.c(false);
        this.f19183b = ys.l.c(true);
        this.f19184c = new r();
        a0 a0Var = new a0();
        Intrinsics.checkNotNullExpressionValue(a0Var, "getDefaultWorkerFactory()");
        this.f19185d = a0Var;
        this.f19186e = r.a;
        this.f19187f = new rd.u(8);
        this.f19188g = 4;
        this.f19189h = Integer.MAX_VALUE;
        this.j = 20;
        this.f19190i = 8;
    }
}
