package ar;

import ip.o0;
import ip.p;
import ip.u;
import ip.v;
import ip.z;
import java.util.Collection;
import kotlin.jvm.internal.Intrinsics;
import lp.l0;
import lp.t;

/* loaded from: classes3.dex */
public final class c extends l0 {
    @Override // lp.t
    /* renamed from: C0 */
    public final l0 L(ip.l newOwner, z modality, p visibility) {
        Intrinsics.checkNotNullParameter(newOwner, "newOwner");
        Intrinsics.checkNotNullParameter(modality, "modality");
        Intrinsics.checkNotNullParameter(visibility, "visibility");
        ip.c kind = ip.c.f12124e;
        Intrinsics.checkNotNullParameter(kind, "kind");
        return this;
    }

    @Override // lp.l0, lp.t
    public final t D0(hq.e eVar, ip.c kind, ip.l newOwner, v vVar, o0 source, jp.h annotations) {
        Intrinsics.checkNotNullParameter(newOwner, "newOwner");
        Intrinsics.checkNotNullParameter(kind, "kind");
        Intrinsics.checkNotNullParameter(annotations, "annotations");
        Intrinsics.checkNotNullParameter(source, "source");
        return this;
    }

    @Override // lp.t, ip.b
    public final Object K(ip.a key) {
        Intrinsics.checkNotNullParameter(key, "key");
        return null;
    }

    @Override // lp.t, ip.d
    public final /* bridge */ /* synthetic */ ip.d L(ip.f fVar, z zVar, p pVar) {
        L(fVar, zVar, pVar);
        return this;
    }

    @Override // lp.t, ip.d
    public final void g0(Collection overriddenDescriptors) {
        Intrinsics.checkNotNullParameter(overriddenDescriptors, "overriddenDescriptors");
    }

    @Override // lp.t, ip.v
    public final boolean isSuspend() {
        return false;
    }

    @Override // lp.l0, lp.t, ip.v
    public final u m0() {
        return new ha.l(this);
    }
}
