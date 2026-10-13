package ip;

import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class g0 implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f12145d;

    /* renamed from: e, reason: collision with root package name */
    public final hq.c f12146e;

    public /* synthetic */ g0(hq.c cVar, int i5) {
        this.f12145d = i5;
        this.f12146e = cVar;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        switch (this.f12145d) {
            case 0:
                hq.c it = (hq.c) obj;
                Intrinsics.checkNotNullParameter(it, "it");
                return Boolean.valueOf(!it.a.c() && Intrinsics.areEqual(it.b(), this.f12146e));
            default:
                jp.h it2 = (jp.h) obj;
                Intrinsics.checkNotNullParameter(it2, "it");
                return it2.Q(this.f12146e);
        }
    }
}
