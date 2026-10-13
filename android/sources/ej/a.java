package ej;

import am.f;
import java.util.concurrent.Executor;
import kotlin.jvm.internal.Intrinsics;
import mi.b;
import mi.c;
import mi.d;
import ni.e;
import ni.q;
import nr.x;

/* loaded from: classes3.dex */
public final class a implements e {

    /* renamed from: e, reason: collision with root package name */
    public static final a f8131e = new a(0);

    /* renamed from: i, reason: collision with root package name */
    public static final a f8132i = new a(1);

    /* renamed from: v, reason: collision with root package name */
    public static final a f8133v = new a(2);

    /* renamed from: w, reason: collision with root package name */
    public static final a f8134w = new a(3);

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f8135d;

    public /* synthetic */ a(int i5) {
        this.f8135d = i5;
    }

    @Override // ni.e
    public final Object g(f fVar) {
        switch (this.f8135d) {
            case 0:
                Object c6 = fVar.c(new q(mi.a.class, Executor.class));
                Intrinsics.checkNotNullExpressionValue(c6, "c.get(Qualified.qualifie…a, Executor::class.java))");
                return x.m((Executor) c6);
            case 1:
                Object c8 = fVar.c(new q(c.class, Executor.class));
                Intrinsics.checkNotNullExpressionValue(c8, "c.get(Qualified.qualifie…a, Executor::class.java))");
                return x.m((Executor) c8);
            case 2:
                Object c10 = fVar.c(new q(b.class, Executor.class));
                Intrinsics.checkNotNullExpressionValue(c10, "c.get(Qualified.qualifie…a, Executor::class.java))");
                return x.m((Executor) c10);
            default:
                Object c11 = fVar.c(new q(d.class, Executor.class));
                Intrinsics.checkNotNullExpressionValue(c11, "c.get(Qualified.qualifie…a, Executor::class.java))");
                return x.m((Executor) c11);
        }
    }
}
