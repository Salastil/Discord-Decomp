package ip;

import java.util.List;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class e implements s0 {

    /* renamed from: d, reason: collision with root package name */
    public final s0 f12133d;

    /* renamed from: e, reason: collision with root package name */
    public final j f12134e;

    /* renamed from: i, reason: collision with root package name */
    public final int f12135i;

    public e(s0 originalDescriptor, j declarationDescriptor, int i5) {
        Intrinsics.checkNotNullParameter(originalDescriptor, "originalDescriptor");
        Intrinsics.checkNotNullParameter(declarationDescriptor, "declarationDescriptor");
        this.f12133d = originalDescriptor;
        this.f12134e = declarationDescriptor;
        this.f12135i = i5;
    }

    @Override // ip.s0
    public final xq.o U() {
        xq.o U = this.f12133d.U();
        Intrinsics.checkNotNullExpressionValue(U, "getStorageManager(...)");
        return U;
    }

    @Override // ip.s0
    public final boolean Y() {
        return true;
    }

    @Override // ip.m
    public final o0 d() {
        o0 d6 = this.f12133d.d();
        Intrinsics.checkNotNullExpressionValue(d6, "getSource(...)");
        return d6;
    }

    @Override // ip.l
    public final Object e0(n nVar, Object obj) {
        return this.f12133d.e0(nVar, obj);
    }

    @Override // jp.a
    public final jp.h getAnnotations() {
        return this.f12133d.getAnnotations();
    }

    @Override // ip.s0
    public final int getIndex() {
        return this.f12133d.getIndex() + this.f12135i;
    }

    @Override // ip.l
    public final hq.e getName() {
        hq.e name = this.f12133d.getName();
        Intrinsics.checkNotNullExpressionValue(name, "getName(...)");
        return name;
    }

    @Override // ip.s0
    public final List getUpperBounds() {
        List upperBounds = this.f12133d.getUpperBounds();
        Intrinsics.checkNotNullExpressionValue(upperBounds, "getUpperBounds(...)");
        return upperBounds;
    }

    @Override // ip.s0
    public final yq.c1 getVariance() {
        yq.c1 variance = this.f12133d.getVariance();
        Intrinsics.checkNotNullExpressionValue(variance, "getVariance(...)");
        return variance;
    }

    @Override // ip.l
    public final l h() {
        return this.f12134e;
    }

    @Override // ip.i
    public final yq.c0 k() {
        yq.c0 k = this.f12133d.k();
        Intrinsics.checkNotNullExpressionValue(k, "getDefaultType(...)");
        return k;
    }

    @Override // ip.i
    public final yq.p0 n() {
        yq.p0 n6 = this.f12133d.n();
        Intrinsics.checkNotNullExpressionValue(n6, "getTypeConstructor(...)");
        return n6;
    }

    public final String toString() {
        return this.f12133d + "[inner-copy]";
    }

    @Override // ip.s0
    public final boolean v() {
        return this.f12133d.v();
    }

    @Override // ip.l
    public final s0 a() {
        s0 a = this.f12133d.a();
        Intrinsics.checkNotNullExpressionValue(a, "getOriginal(...)");
        return a;
    }
}
