package yq;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class n0 extends c {

    /* renamed from: b, reason: collision with root package name */
    public static final n0 f21051b = new n0(0);

    /* renamed from: c, reason: collision with root package name */
    public static final n0 f21052c = new n0(1);

    /* renamed from: d, reason: collision with root package name */
    public static final n0 f21053d = new n0(2);
    public final /* synthetic */ int a;

    public /* synthetic */ n0(int i5) {
        this.a = i5;
    }

    @Override // yq.c
    public final cr.e D(o0 state, cr.d type) {
        switch (this.a) {
            case 0:
                Intrinsics.checkNotNullParameter(state, "state");
                Intrinsics.checkNotNullParameter(type, "type");
                return state.f21057c.i0(type);
            case 1:
                Intrinsics.checkNotNullParameter(state, "state");
                Intrinsics.checkNotNullParameter(type, "type");
                throw new UnsupportedOperationException("Should not be called");
            default:
                Intrinsics.checkNotNullParameter(state, "state");
                Intrinsics.checkNotNullParameter(type, "type");
                return state.f21057c.L(type);
        }
    }
}
