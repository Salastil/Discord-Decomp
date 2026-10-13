package r4;

import java.util.List;
import o4.o;

/* loaded from: classes.dex */
public final class c implements e {

    /* renamed from: d, reason: collision with root package name */
    public final b f17128d;

    /* renamed from: e, reason: collision with root package name */
    public final b f17129e;

    public c(b bVar, b bVar2) {
        this.f17128d = bVar;
        this.f17129e = bVar2;
    }

    @Override // r4.e
    public final o4.e l0() {
        return new o(this.f17128d.l0(), this.f17129e.l0());
    }

    @Override // r4.e
    public final List r0() {
        throw new UnsupportedOperationException("Cannot call getKeyframes on AnimatableSplitDimensionPathValue.");
    }

    @Override // r4.e
    public final boolean t0() {
        return this.f17128d.t0() && this.f17129e.t0();
    }
}
