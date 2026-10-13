package zq;

import java.util.List;
import kotlin.collections.m0;
import kotlin.jvm.internal.Intrinsics;
import yq.b1;
import yq.c0;
import yq.k0;
import yq.p0;
import yq.s0;

/* loaded from: classes3.dex */
public final class h extends c0 implements cr.c {

    /* renamed from: e, reason: collision with root package name */
    public final cr.b f21383e;

    /* renamed from: i, reason: collision with root package name */
    public final j f21384i;

    /* renamed from: v, reason: collision with root package name */
    public final b1 f21385v;

    /* renamed from: w, reason: collision with root package name */
    public final k0 f21386w;

    /* renamed from: x, reason: collision with root package name */
    public final boolean f21387x;

    /* renamed from: y, reason: collision with root package name */
    public final boolean f21388y;

    public h(cr.b captureStatus, j constructor, b1 b1Var, k0 attributes, boolean z5, boolean z6) {
        Intrinsics.checkNotNullParameter(captureStatus, "captureStatus");
        Intrinsics.checkNotNullParameter(constructor, "constructor");
        Intrinsics.checkNotNullParameter(attributes, "attributes");
        this.f21383e = captureStatus;
        this.f21384i = constructor;
        this.f21385v = b1Var;
        this.f21386w = attributes;
        this.f21387x = z5;
        this.f21388y = z6;
    }

    @Override // yq.c0
    /* renamed from: A0 */
    public final c0 x0(boolean z5) {
        return new h(this.f21383e, this.f21384i, this.f21385v, this.f21386w, z5, 32);
    }

    @Override // yq.c0
    /* renamed from: B0 */
    public final c0 z0(k0 newAttributes) {
        Intrinsics.checkNotNullParameter(newAttributes, "newAttributes");
        return new h(this.f21383e, this.f21384i, this.f21385v, newAttributes, this.f21387x, this.f21388y);
    }

    @Override // yq.b1
    /* renamed from: C0, reason: merged with bridge method [inline-methods] */
    public final h y0(f kotlinTypeRefiner) {
        b1 b1Var;
        Intrinsics.checkNotNullParameter(kotlinTypeRefiner, "kotlinTypeRefiner");
        j jVar = this.f21384i;
        jVar.getClass();
        Intrinsics.checkNotNullParameter(kotlinTypeRefiner, "kotlinTypeRefiner");
        s0 d6 = jVar.a.d(kotlinTypeRefiner);
        Intrinsics.checkNotNullExpressionValue(d6, "refine(...)");
        bs.q qVar = jVar.f21391b != null ? new bs.q(20, jVar, kotlinTypeRefiner) : null;
        j jVar2 = jVar.f21392c;
        if (jVar2 == null) {
            jVar2 = jVar;
        }
        j jVar3 = new j(d6, qVar, jVar2, jVar.f21393d);
        b1 type = this.f21385v;
        if (type != null) {
            Intrinsics.checkNotNullParameter(type, "type");
            b1Var = type;
        } else {
            b1Var = null;
        }
        return new h(this.f21383e, jVar3, b1Var, this.f21386w, this.f21387x, 32);
    }

    @Override // yq.y
    public final rq.o N() {
        return ar.l.a(ar.h.f2668e, true, new String[0]);
    }

    @Override // yq.y
    public final List l0() {
        return m0.f13512d;
    }

    @Override // yq.y
    public final k0 q0() {
        return this.f21386w;
    }

    @Override // yq.y
    public final p0 r0() {
        return this.f21384i;
    }

    @Override // yq.y
    public final boolean t0() {
        return this.f21387x;
    }

    @Override // yq.c0, yq.b1
    public final b1 x0(boolean z5) {
        return new h(this.f21383e, this.f21384i, this.f21385v, this.f21386w, z5, 32);
    }

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public h(cr.b bVar, j jVar, b1 b1Var, k0 k0Var, boolean z5, int i5) {
        this(bVar, jVar, b1Var, k0Var, (i5 & 16) != 0 ? false : z5, false);
        if ((i5 & 8) != 0) {
            k0.f21045e.getClass();
            k0Var = k0.f21046i;
        }
    }
}
