package wq;

import ip.m0;
import ip.o0;
import ip.p0;
import ip.z;
import kotlin.jvm.internal.Intrinsics;
import lp.i0;

/* loaded from: classes3.dex */
public final class r extends i0 implements b {
    public final cq.i0 Y;
    public final eq.g Z;
    public final a4.i a0;

    /* renamed from: b0, reason: collision with root package name */
    public final eq.h f20035b0;

    /* renamed from: c0, reason: collision with root package name */
    public final k f20036c0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public r(ip.l containingDeclaration, m0 m0Var, jp.h annotations, z modality, ip.p visibility, boolean z5, hq.e name, ip.c kind, boolean z6, boolean z7, boolean z8, boolean z10, boolean z11, cq.i0 proto, eq.g nameResolver, a4.i typeTable, eq.h versionRequirementTable, k kVar) {
        super(containingDeclaration, m0Var, annotations, modality, visibility, z5, name, kind, o0.f12151g, z6, z7, z11, z8, z10);
        Intrinsics.checkNotNullParameter(containingDeclaration, "containingDeclaration");
        Intrinsics.checkNotNullParameter(annotations, "annotations");
        Intrinsics.checkNotNullParameter(modality, "modality");
        Intrinsics.checkNotNullParameter(visibility, "visibility");
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(kind, "kind");
        Intrinsics.checkNotNullParameter(proto, "proto");
        Intrinsics.checkNotNullParameter(nameResolver, "nameResolver");
        Intrinsics.checkNotNullParameter(typeTable, "typeTable");
        Intrinsics.checkNotNullParameter(versionRequirementTable, "versionRequirementTable");
        this.Y = proto;
        this.Z = nameResolver;
        this.a0 = typeTable;
        this.f20035b0 = versionRequirementTable;
        this.f20036c0 = kVar;
    }

    @Override // lp.i0
    public final i0 D0(ip.l newOwner, z newModality, ip.p newVisibility, m0 m0Var, ip.c kind, hq.e newName) {
        Intrinsics.checkNotNullParameter(newOwner, "newOwner");
        Intrinsics.checkNotNullParameter(newModality, "newModality");
        Intrinsics.checkNotNullParameter(newVisibility, "newVisibility");
        Intrinsics.checkNotNullParameter(kind, "kind");
        Intrinsics.checkNotNullParameter(newName, "newName");
        p0 source = o0.f12151g;
        Intrinsics.checkNotNullParameter(source, "source");
        return new r(newOwner, m0Var, getAnnotations(), newModality, newVisibility, this.f14155y, newName, kind, this.L, this.M, isExternal(), this.P, this.N, this.Y, this.Z, this.a0, this.f20035b0, this.f20036c0);
    }

    @Override // wq.l
    public final a4.i I() {
        return this.a0;
    }

    @Override // wq.l
    public final eq.g Q() {
        return this.Z;
    }

    @Override // wq.l
    public final k R() {
        return this.f20036c0;
    }

    @Override // lp.i0, ip.y
    public final boolean isExternal() {
        return s4.h.m(eq.e.E, this.Y.f7123v, "get(...)");
    }

    @Override // wq.l
    public final iq.a u() {
        return this.Y;
    }
}
