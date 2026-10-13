package uq;

import cq.s0;
import ip.o0;
import ip.p0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class a0 implements Function1 {

    /* renamed from: e, reason: collision with root package name */
    public static final a0 f19001e = new a0();

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f19002d = 0;

    public /* synthetic */ a0() {
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        switch (this.f19002d) {
            case 0:
                s0 it = (s0) obj;
                Intrinsics.checkNotNullParameter(it, "it");
                return Integer.valueOf(it.f7239v.size());
            default:
                Intrinsics.checkNotNullParameter((hq.b) obj, "it");
                p0 NO_SOURCE = o0.f12151g;
                Intrinsics.checkNotNullExpressionValue(NO_SOURCE, "NO_SOURCE");
                return NO_SOURCE;
        }
    }

    public a0(vq.c cVar) {
    }
}
