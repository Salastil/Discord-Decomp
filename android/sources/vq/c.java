package vq;

import com.google.firebase.messaging.r;
import cp.d0;
import cq.e0;
import cq.g0;
import cq.m0;
import cq.n0;
import e4.l;
import ip.a0;
import ip.f0;
import kotlin.jvm.internal.Intrinsics;
import lp.c0;
import oq.e;
import rq.o;
import uq.j;
import wq.q;

/* loaded from: classes3.dex */
public final class c extends c0 implements f0 {
    public final dq.a E;
    public final l F;
    public final r G;
    public g0 H;
    public q I;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public c(hq.c fqName, xq.l storageManager, a0 module, g0 proto, dq.a metadataVersion) {
        super(module, fqName);
        Intrinsics.checkNotNullParameter(fqName, "fqName");
        Intrinsics.checkNotNullParameter(storageManager, "storageManager");
        Intrinsics.checkNotNullParameter(module, "module");
        Intrinsics.checkNotNullParameter(proto, "proto");
        Intrinsics.checkNotNullParameter(metadataVersion, "metadataVersion");
        Intrinsics.checkNotNullParameter(fqName, "fqName");
        Intrinsics.checkNotNullParameter(storageManager, "storageManager");
        Intrinsics.checkNotNullParameter(module, "module");
        this.E = metadataVersion;
        n0 n0Var = proto.f7100v;
        Intrinsics.checkNotNullExpressionValue(n0Var, "getStrings(...)");
        m0 m0Var = proto.f7101w;
        Intrinsics.checkNotNullExpressionValue(m0Var, "getQualifiedNames(...)");
        l lVar = new l(n0Var, m0Var);
        this.F = lVar;
        this.G = new r(proto, lVar, metadataVersion, new uq.a0(this));
        this.H = proto;
    }

    public final void C0(j components) {
        Intrinsics.checkNotNullParameter(components, "components");
        g0 g0Var = this.H;
        if (g0Var == null) {
            throw new IllegalStateException("Repeated call to DeserializedPackageFragmentImpl::initialize");
        }
        this.H = null;
        e0 e0Var = g0Var.f7102x;
        Intrinsics.checkNotNullExpressionValue(e0Var, "getPackage(...)");
        this.I = new q(this, e0Var, this.F, this.E, null, components, "scope of " + this, new d0(22, this));
    }

    @Override // ip.f0
    public final o N() {
        q qVar = this.I;
        if (qVar != null) {
            return qVar;
        }
        Intrinsics.throwUninitializedPropertyAccessException("_memberScope");
        return null;
    }

    @Override // lp.c0, lp.l, bq.b
    public final String toString() {
        return "builtins package fragment for " + this.f14132x + " from " + e.j(this);
    }
}
