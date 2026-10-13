package uq;

import cq.s0;
import java.util.ArrayList;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class k implements l, n, m {

    /* renamed from: c, reason: collision with root package name */
    public static final k f19033c = new k(0);

    /* renamed from: d, reason: collision with root package name */
    public static final k f19034d = new k(1);

    /* renamed from: e, reason: collision with root package name */
    public static final k f19035e = new k(2);

    /* renamed from: f, reason: collision with root package name */
    public static final k f19036f = new k(3);

    /* renamed from: g, reason: collision with root package name */
    public static final k f19037g = new k(4);

    /* renamed from: h, reason: collision with root package name */
    public static final k f19038h = new k(5);

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ int f19039b;

    public /* synthetic */ k(int i5) {
        this.f19039b = i5;
    }

    public static ip.z e(cq.c0 c0Var) {
        int i5 = c0Var == null ? -1 : w.a[c0Var.ordinal()];
        return i5 != 1 ? i5 != 2 ? i5 != 3 ? i5 != 4 ? ip.z.f12180e : ip.z.f12181i : ip.z.f12183w : ip.z.f12182v : ip.z.f12180e;
    }

    @Override // uq.n
    public yq.y b(s0 proto, String flexibleId, yq.c0 lowerBound, yq.c0 upperBound) {
        Intrinsics.checkNotNullParameter(proto, "proto");
        Intrinsics.checkNotNullParameter(flexibleId, "flexibleId");
        Intrinsics.checkNotNullParameter(lowerBound, "lowerBound");
        Intrinsics.checkNotNullParameter(upperBound, "upperBound");
        throw new IllegalArgumentException("This method should not be used.");
    }

    @Override // uq.m
    public void c(ip.d dVar) {
        if (dVar == null) {
            throw new IllegalArgumentException(String.format("Argument for @NotNull parameter '%s' of %s.%s must not be null", "descriptor", "kotlin/reflect/jvm/internal/impl/serialization/deserialization/ErrorReporter$1", "reportCannotInferVisibility"));
        }
    }

    @Override // uq.l
    public Boolean d() {
        switch (this.f19039b) {
            case 1:
                return null;
            default:
                return Boolean.TRUE;
        }
    }

    @Override // uq.m
    public void a(ip.f fVar, ArrayList arrayList) {
    }
}
