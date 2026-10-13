package lq;

import ar.h;
import ar.l;
import java.util.List;
import kotlin.collections.m0;
import kotlin.jvm.internal.Intrinsics;
import rq.o;
import yq.b1;
import yq.c0;
import yq.k0;
import yq.p0;
import yq.s0;
import yq.y;
import zq.f;

/* loaded from: classes3.dex */
public final class a extends c0 implements cr.c {

    /* renamed from: e, reason: collision with root package name */
    public final s0 f14203e;

    /* renamed from: i, reason: collision with root package name */
    public final c f14204i;

    /* renamed from: v, reason: collision with root package name */
    public final boolean f14205v;

    /* renamed from: w, reason: collision with root package name */
    public final k0 f14206w;

    public a(s0 typeProjection, c constructor, boolean z5, k0 attributes) {
        Intrinsics.checkNotNullParameter(typeProjection, "typeProjection");
        Intrinsics.checkNotNullParameter(constructor, "constructor");
        Intrinsics.checkNotNullParameter(attributes, "attributes");
        this.f14203e = typeProjection;
        this.f14204i = constructor;
        this.f14205v = z5;
        this.f14206w = attributes;
    }

    @Override // yq.c0
    /* renamed from: A0 */
    public final c0 x0(boolean z5) {
        if (z5 == this.f14205v) {
            return this;
        }
        return new a(this.f14203e, this.f14204i, z5, this.f14206w);
    }

    @Override // yq.c0
    /* renamed from: B0 */
    public final c0 z0(k0 newAttributes) {
        Intrinsics.checkNotNullParameter(newAttributes, "newAttributes");
        return new a(this.f14203e, this.f14204i, this.f14205v, newAttributes);
    }

    @Override // yq.y
    public final o N() {
        return l.a(h.f2668e, true, new String[0]);
    }

    @Override // yq.y
    public final List l0() {
        return m0.f13512d;
    }

    @Override // yq.y
    public final k0 q0() {
        return this.f14206w;
    }

    @Override // yq.y
    public final p0 r0() {
        return this.f14204i;
    }

    @Override // yq.y
    public final boolean t0() {
        return this.f14205v;
    }

    @Override // yq.c0
    public final String toString() {
        StringBuilder sb2 = new StringBuilder("Captured(");
        sb2.append(this.f14203e);
        sb2.append(')');
        sb2.append(this.f14205v ? "?" : "");
        return sb2.toString();
    }

    @Override // yq.y
    /* renamed from: v0 */
    public final y y0(f kotlinTypeRefiner) {
        Intrinsics.checkNotNullParameter(kotlinTypeRefiner, "kotlinTypeRefiner");
        s0 d6 = this.f14203e.d(kotlinTypeRefiner);
        Intrinsics.checkNotNullExpressionValue(d6, "refine(...)");
        return new a(d6, this.f14204i, this.f14205v, this.f14206w);
    }

    @Override // yq.c0, yq.b1
    public final b1 x0(boolean z5) {
        if (z5 == this.f14205v) {
            return this;
        }
        return new a(this.f14203e, this.f14204i, z5, this.f14206w);
    }

    @Override // yq.b1
    public final b1 y0(f kotlinTypeRefiner) {
        Intrinsics.checkNotNullParameter(kotlinTypeRefiner, "kotlinTypeRefiner");
        s0 d6 = this.f14203e.d(kotlinTypeRefiner);
        Intrinsics.checkNotNullExpressionValue(d6, "refine(...)");
        return new a(d6, this.f14204i, this.f14205v, this.f14206w);
    }
}
