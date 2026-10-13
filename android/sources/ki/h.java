package ki;

import java.util.concurrent.Executor;
import kotlin.jvm.internal.Intrinsics;
import ni.q;
import nr.x;

/* loaded from: classes3.dex */
public final class h implements ni.e {

    /* renamed from: e, reason: collision with root package name */
    public static final h f13390e = new h(0);

    /* renamed from: i, reason: collision with root package name */
    public static final h f13391i = new h(1);

    /* renamed from: v, reason: collision with root package name */
    public static final h f13392v = new h(2);

    /* renamed from: w, reason: collision with root package name */
    public static final h f13393w = new h(3);

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f13394d;

    public /* synthetic */ h(int i5) {
        this.f13394d = i5;
    }

    @Override // ni.e
    public final Object g(am.f fVar) {
        switch (this.f13394d) {
            case 0:
                Object c6 = fVar.c(new q(mi.a.class, Executor.class));
                Intrinsics.checkNotNullExpressionValue(c6, "c.get(Qualified.qualifie…a, Executor::class.java))");
                return x.m((Executor) c6);
            case 1:
                Object c8 = fVar.c(new q(mi.c.class, Executor.class));
                Intrinsics.checkNotNullExpressionValue(c8, "c.get(Qualified.qualifie…a, Executor::class.java))");
                return x.m((Executor) c8);
            case 2:
                Object c10 = fVar.c(new q(mi.b.class, Executor.class));
                Intrinsics.checkNotNullExpressionValue(c10, "c.get(Qualified.qualifie…a, Executor::class.java))");
                return x.m((Executor) c10);
            default:
                Object c11 = fVar.c(new q(mi.d.class, Executor.class));
                Intrinsics.checkNotNullExpressionValue(c11, "c.get(Qualified.qualifie…a, Executor::class.java))");
                return x.m((Executor) c11);
        }
    }
}
