package wq;

import ip.o0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class c extends lp.h implements b {

    /* renamed from: c0, reason: collision with root package name */
    public final cq.n f19994c0;

    /* renamed from: d0, reason: collision with root package name */
    public final eq.g f19995d0;

    /* renamed from: e0, reason: collision with root package name */
    public final a4.i f19996e0;

    /* renamed from: f0, reason: collision with root package name */
    public final eq.h f19997f0;

    /* renamed from: g0, reason: collision with root package name */
    public final k f19998g0;

    /*  JADX ERROR: NullPointerException in pass: InitCodeVariables
        java.lang.NullPointerException
        */
    public c(ip.f r12, ip.k r13, jp.h r14, boolean r15, ip.c r16, cq.n r17, eq.g r18, a4.i r19, eq.h r20, wq.k r21, ip.o0 r22) {
        /*
            r11 = this;
            r7 = r17
            r8 = r18
            r9 = r19
            r10 = r20
            java.lang.String r0 = "containingDeclaration"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r12, r0)
            java.lang.String r0 = "annotations"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r14, r0)
            java.lang.String r0 = "kind"
            r5 = r16
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
            java.lang.String r0 = "proto"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r7, r0)
            java.lang.String r0 = "nameResolver"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r8, r0)
            java.lang.String r0 = "typeTable"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r9, r0)
            java.lang.String r0 = "versionRequirementTable"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r10, r0)
            if (r22 != 0) goto L38
            ip.p0 r0 = ip.o0.f12151g
            r6 = r0
            r1 = r12
            r2 = r13
            r3 = r14
            r4 = r15
            r0 = r11
            goto L3f
        L38:
            r6 = r22
            r0 = r11
            r1 = r12
            r2 = r13
            r3 = r14
            r4 = r15
        L3f:
            r0.<init>(r1, r2, r3, r4, r5, r6)
            r11.f19994c0 = r7
            r11.f19995d0 = r8
            r11.f19996e0 = r9
            r11.f19997f0 = r10
            r1 = r21
            r11.f19998g0 = r1
            return
        */
        throw new UnsupportedOperationException("Method not decompiled: wq.c.<init>(ip.f, ip.k, jp.h, boolean, ip.c, cq.n, eq.g, a4.i, eq.h, wq.k, ip.o0):void");
    }

    @Override // lp.h, lp.t
    public final /* bridge */ /* synthetic */ lp.t D0(hq.e eVar, ip.c cVar, ip.l lVar, ip.v vVar, o0 o0Var, jp.h hVar) {
        return S0(lVar, vVar, cVar, hVar, o0Var);
    }

    @Override // lp.t, ip.v
    public final boolean F() {
        return false;
    }

    @Override // wq.l
    public final a4.i I() {
        return this.f19996e0;
    }

    @Override // lp.h
    /* renamed from: M0 */
    public final /* bridge */ /* synthetic */ lp.h D0(hq.e eVar, ip.c cVar, ip.l lVar, ip.v vVar, o0 o0Var, jp.h hVar) {
        return S0(lVar, vVar, cVar, hVar, o0Var);
    }

    @Override // wq.l
    public final eq.g Q() {
        return this.f19995d0;
    }

    @Override // wq.l
    public final k R() {
        return this.f19998g0;
    }

    public final c S0(ip.l newOwner, ip.v vVar, ip.c kind, jp.h annotations, o0 source) {
        Intrinsics.checkNotNullParameter(newOwner, "newOwner");
        Intrinsics.checkNotNullParameter(kind, "kind");
        Intrinsics.checkNotNullParameter(annotations, "annotations");
        Intrinsics.checkNotNullParameter(source, "source");
        c cVar = new c((ip.f) newOwner, (ip.k) vVar, annotations, this.f14144b0, kind, this.f19994c0, this.f19995d0, this.f19996e0, this.f19997f0, this.f19998g0, source);
        cVar.T = this.T;
        return cVar;
    }

    @Override // lp.t, ip.y
    public final boolean isExternal() {
        return false;
    }

    @Override // lp.t, ip.v
    public final boolean isInline() {
        return false;
    }

    @Override // lp.t, ip.v
    public final boolean isSuspend() {
        return false;
    }

    @Override // wq.l
    public final iq.a u() {
        return this.f19994c0;
    }
}
