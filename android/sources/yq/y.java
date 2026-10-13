package yq;

import java.util.List;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public abstract class y implements jp.a, cr.d {

    /* renamed from: d, reason: collision with root package name */
    public int f21083d;

    public abstract rq.o N();

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof y)) {
            return false;
        }
        y yVar = (y) obj;
        if (t0() != yVar.t0()) {
            return false;
        }
        b1 a = w0();
        b1 b10 = yVar.w0();
        Intrinsics.checkNotNullParameter(a, "a");
        Intrinsics.checkNotNullParameter(b10, "b");
        zq.n context = zq.n.f21398d;
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(a, "a");
        Intrinsics.checkNotNullParameter(b10, "b");
        return c.z(context, a, b10);
    }

    @Override // jp.a
    public final jp.h getAnnotations() {
        return k.a(q0());
    }

    public final int hashCode() {
        int hashCode;
        int i5 = this.f21083d;
        if (i5 != 0) {
            return i5;
        }
        if (c.j(this)) {
            hashCode = super.hashCode();
        } else {
            hashCode = (t0() ? 1 : 0) + ((l0().hashCode() + (r0().hashCode() * 31)) * 31);
        }
        this.f21083d = hashCode;
        return hashCode;
    }

    public abstract List l0();

    public abstract k0 q0();

    public abstract p0 r0();

    public abstract boolean t0();

    public abstract y v0(zq.f fVar);

    public abstract b1 w0();
}
