package ip;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class p {
    public final bs.a1 a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ int f12152b;

    public p(bs.a1 delegate, int i5) {
        this.f12152b = i5;
        Intrinsics.checkNotNullParameter(delegate, "delegate");
        this.a = delegate;
    }

    /* JADX WARN: Code restructure failed: missing block: B:143:0x02cf, code lost:
    
        return true;
     */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:131:0x02a0 A[LOOP:1: B:131:0x02a0->B:135:0x02d1, LOOP_START, PHI: r8
      0x02a0: PHI (r8v2 'from' ip.l) = (r8v0 'from' ip.l), (r8v3 'from' ip.l) binds: [B:130:0x029d, B:135:0x02d1] A[DONT_GENERATE, DONT_INLINE]] */
    /* JADX WARN: Type inference failed for: r7v0, types: [ip.l, ip.o, java.lang.Object] */
    /* JADX WARN: Type inference failed for: r7v6, types: [ip.l] */
    /* JADX WARN: Type inference failed for: r7v7, types: [ip.l] */
    /* JADX WARN: Type inference failed for: r7v9, types: [ip.l] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean a(sq.d dVar, o what, l from) {
        l i5;
        f fVar;
        switch (this.f12152b) {
            case 0:
                if (from == null) {
                    throw new IllegalArgumentException(String.format("Argument for @NotNull parameter '%s' of %s.%s must not be null", "from", "kotlin/reflect/jvm/internal/impl/descriptors/DescriptorVisibilities$1", "isVisible"));
                }
                if (kq.e.s(what) && kq.e.f(from) != p0.f12153e) {
                    return q.d(what, from);
                }
                if (what instanceof k) {
                    ((k) what).h();
                }
                while (what != 0) {
                    what = what.h();
                    if ((!(what instanceof f) || kq.e.l(what)) && !(what instanceof f0)) {
                    }
                    if (what != 0) {
                        while (true) {
                            if (from != null) {
                                if (what == from) {
                                    break;
                                } else if (!(from instanceof f0)) {
                                    from = from.h();
                                } else if (!(what instanceof f0) || !((lp.c0) what).f14132x.equals(((lp.c0) ((f0) from)).f14132x) || !kq.e.d(from).equals(kq.e.d(what))) {
                                }
                            }
                        }
                    }
                    return false;
                }
                if (what != 0) {
                }
                return false;
            case 1:
                if (from == null) {
                    throw new IllegalArgumentException(String.format("Argument for @NotNull parameter '%s' of %s.%s must not be null", "from", "kotlin/reflect/jvm/internal/impl/descriptors/DescriptorVisibilities$2", "isVisible"));
                }
                if (q.a.a(dVar, what, from)) {
                    if (dVar == q.f12164l) {
                        return true;
                    }
                    if (dVar != q.k && (i5 = kq.e.i(what, f.class, true)) != null && (dVar instanceof sq.c)) {
                        return ((sq.c) dVar).f18098d.a().equals(i5.a());
                    }
                }
                return false;
            case 2:
                if (from == null) {
                    throw new IllegalArgumentException(String.format("Argument for @NotNull parameter '%s' of %s.%s must not be null", "from", "kotlin/reflect/jvm/internal/impl/descriptors/DescriptorVisibilities$3", "isVisible"));
                }
                f fVar2 = (f) kq.e.i(what, f.class, true);
                f fVar3 = (f) kq.e.i(from, f.class, false);
                if (fVar3 != null) {
                    if (fVar2 != null && kq.e.l(fVar2) && (fVar = (f) kq.e.i(fVar2, f.class, true)) != null && kq.e.r(fVar3.k(), fVar.a())) {
                        return true;
                    }
                    d t5 = what instanceof d ? kq.e.t((d) what) : what;
                    f fVar4 = (f) kq.e.i(t5, f.class, true);
                    if (fVar4 != null) {
                        if (kq.e.r(fVar3.k(), fVar4.a()) && dVar != q.f12165m) {
                            if (!(t5 instanceof d) || (t5 instanceof k) || dVar == q.f12164l) {
                                return true;
                            }
                            if (dVar != q.k && dVar != null) {
                                yq.y type = dVar.getType();
                                if (kq.e.r(type, fVar3)) {
                                    return true;
                                }
                                Intrinsics.checkNotNullParameter(type, "<this>");
                                type.w0();
                            }
                        }
                        return a(dVar, what, fVar3.h());
                    }
                }
                return false;
            case 3:
                if (from == null) {
                    throw new IllegalArgumentException(String.format("Argument for @NotNull parameter '%s' of %s.%s must not be null", "from", "kotlin/reflect/jvm/internal/impl/descriptors/DescriptorVisibilities$4", "isVisible"));
                }
                if (!kq.e.d(from).B(kq.e.d(what))) {
                    return false;
                }
                q.f12166n.getClass();
                Intrinsics.checkNotNullParameter(what, "what");
                Intrinsics.checkNotNullParameter(from, "from");
                return true;
            case 4:
                if (from != null) {
                    return true;
                }
                throw new IllegalArgumentException(String.format("Argument for @NotNull parameter '%s' of %s.%s must not be null", "from", "kotlin/reflect/jvm/internal/impl/descriptors/DescriptorVisibilities$5", "isVisible"));
            case 5:
                if (from == null) {
                    throw new IllegalArgumentException(String.format("Argument for @NotNull parameter '%s' of %s.%s must not be null", "from", "kotlin/reflect/jvm/internal/impl/descriptors/DescriptorVisibilities$6", "isVisible"));
                }
                throw new IllegalStateException("This method shouldn't be invoked for LOCAL visibility");
            case 6:
                if (from == null) {
                    throw new IllegalArgumentException(String.format("Argument for @NotNull parameter '%s' of %s.%s must not be null", "from", "kotlin/reflect/jvm/internal/impl/descriptors/DescriptorVisibilities$7", "isVisible"));
                }
                throw new IllegalStateException("Visibility is unknown yet");
            case 7:
                if (from != null) {
                    return false;
                }
                throw new IllegalArgumentException(String.format("Argument for @NotNull parameter '%s' of %s.%s must not be null", "from", "kotlin/reflect/jvm/internal/impl/descriptors/DescriptorVisibilities$8", "isVisible"));
            case 8:
                if (from != null) {
                    return false;
                }
                throw new IllegalArgumentException(String.format("Argument for @NotNull parameter '%s' of %s.%s must not be null", "from", "kotlin/reflect/jvm/internal/impl/descriptors/DescriptorVisibilities$9", "isVisible"));
            case 9:
                if (from != null) {
                    return rp.p.c(what, from);
                }
                throw new IllegalArgumentException(String.format("Argument for @NotNull parameter '%s' of %s.%s must not be null", "from", "kotlin/reflect/jvm/internal/impl/load/java/JavaDescriptorVisibilities$1", "isVisible"));
            case 10:
                if (from != null) {
                    return rp.p.b(dVar, what, from);
                }
                throw new IllegalArgumentException(String.format("Argument for @NotNull parameter '%s' of %s.%s must not be null", "from", "kotlin/reflect/jvm/internal/impl/load/java/JavaDescriptorVisibilities$2", "isVisible"));
            default:
                if (from != null) {
                    return rp.p.b(dVar, what, from);
                }
                throw new IllegalArgumentException(String.format("Argument for @NotNull parameter '%s' of %s.%s must not be null", "from", "kotlin/reflect/jvm/internal/impl/load/java/JavaDescriptorVisibilities$3", "isVisible"));
        }
    }

    public final String toString() {
        return this.a.s();
    }
}
