package wq;

import cq.a0;
import ip.o0;
import kotlin.jvm.internal.Intrinsics;
import lp.l0;

/* loaded from: classes3.dex */
public final class s extends l0 implements b {

    /* renamed from: b0, reason: collision with root package name */
    public final a0 f20037b0;

    /* renamed from: c0, reason: collision with root package name */
    public final eq.g f20038c0;

    /* renamed from: d0, reason: collision with root package name */
    public final a4.i f20039d0;

    /* renamed from: e0, reason: collision with root package name */
    public final eq.h f20040e0;

    /* renamed from: f0, reason: collision with root package name */
    public final k f20041f0;

    /*  JADX ERROR: NullPointerException in pass: InitCodeVariables
        java.lang.NullPointerException: Cannot invoke "jadx.core.dex.instructions.args.SSAVar.getPhiList()" because "resultVar" is null
        	at jadx.core.dex.visitors.InitCodeVariables.collectConnectedVars(InitCodeVariables.java:119)
        	at jadx.core.dex.visitors.InitCodeVariables.setCodeVar(InitCodeVariables.java:82)
        	at jadx.core.dex.visitors.InitCodeVariables.initCodeVar(InitCodeVariables.java:74)
        	at jadx.core.dex.visitors.InitCodeVariables.initCodeVars(InitCodeVariables.java:48)
        	at jadx.core.dex.visitors.InitCodeVariables.visit(InitCodeVariables.java:29)
        */
    public s(ip.l r12, lp.l0 r13, jp.h r14, hq.e r15, ip.c r16, cq.a0 r17, eq.g r18, a4.i r19, eq.h r20, wq.k r21, ip.o0 r22) {
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
            java.lang.String r0 = "name"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r15, r0)
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
            if (r22 != 0) goto L3d
            ip.p0 r0 = ip.o0.f12151g
            r6 = r0
            r1 = r12
            r2 = r13
            r3 = r14
            r4 = r15
            r0 = r11
            goto L44
        L3d:
            r6 = r22
            r0 = r11
            r1 = r12
            r2 = r13
            r3 = r14
            r4 = r15
        L44:
            r0.<init>(r1, r2, r3, r4, r5, r6)
            r11.f20037b0 = r7
            r11.f20038c0 = r8
            r11.f20039d0 = r9
            r11.f20040e0 = r10
            r1 = r21
            r11.f20041f0 = r1
            return
        */
        throw new UnsupportedOperationException("Method not decompiled: wq.s.<init>(ip.l, lp.l0, jp.h, hq.e, ip.c, cq.a0, eq.g, a4.i, eq.h, wq.k, ip.o0):void");
    }

    @Override // lp.l0, lp.t
    public final lp.t D0(hq.e eVar, ip.c kind, ip.l newOwner, ip.v vVar, o0 source, jp.h annotations) {
        Intrinsics.checkNotNullParameter(newOwner, "newOwner");
        Intrinsics.checkNotNullParameter(kind, "kind");
        Intrinsics.checkNotNullParameter(annotations, "annotations");
        Intrinsics.checkNotNullParameter(source, "source");
        l0 l0Var = (l0) vVar;
        if (eVar == null) {
            eVar = getName();
            Intrinsics.checkNotNullExpressionValue(eVar, "getName(...)");
        }
        s sVar = new s(newOwner, l0Var, annotations, eVar, kind, this.f20037b0, this.f20038c0, this.f20039d0, this.f20040e0, this.f20041f0, source);
        sVar.T = this.T;
        return sVar;
    }

    @Override // wq.l
    public final a4.i I() {
        return this.f20039d0;
    }

    @Override // wq.l
    public final eq.g Q() {
        return this.f20038c0;
    }

    @Override // wq.l
    public final k R() {
        return this.f20041f0;
    }

    @Override // wq.l
    public final iq.a u() {
        return this.f20037b0;
    }
}
