package yq;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class b0 extends q {

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ int f21012i;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ b0(c0 c0Var, int i5) {
        super(c0Var);
        this.f21012i = i5;
    }

    @Override // yq.p
    public final p E0(c0 delegate) {
        switch (this.f21012i) {
            case 0:
                Intrinsics.checkNotNullParameter(delegate, "delegate");
                Intrinsics.checkNotNullParameter(delegate, "delegate");
                return new b0(delegate, 0);
            default:
                Intrinsics.checkNotNullParameter(delegate, "delegate");
                Intrinsics.checkNotNullParameter(delegate, "delegate");
                return new b0(delegate, 1);
        }
    }

    @Override // yq.p, yq.y
    public final boolean t0() {
        switch (this.f21012i) {
            case 0:
                return false;
            default:
                return true;
        }
    }
}
