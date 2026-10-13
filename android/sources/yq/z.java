package yq;

import java.util.List;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class z implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f21085d = 1;

    /* renamed from: e, reason: collision with root package name */
    public final p0 f21086e;

    /* renamed from: i, reason: collision with root package name */
    public final List f21087i;

    public z(List list, rq.o oVar, k0 k0Var, p0 p0Var, boolean z5) {
        this.f21086e = p0Var;
        this.f21087i = list;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        zq.f refiner = (zq.f) obj;
        switch (this.f21085d) {
            case 0:
                Intrinsics.checkNotNullParameter(refiner, "refiner");
                ip.i descriptor = this.f21086e.a();
                if (descriptor != null) {
                    refiner.getClass();
                    Intrinsics.checkNotNullParameter(descriptor, "descriptor");
                    break;
                }
                break;
            default:
                Intrinsics.checkNotNullParameter(refiner, "kotlinTypeRefiner");
                ip.i descriptor2 = this.f21086e.a();
                if (descriptor2 != null) {
                    refiner.getClass();
                    Intrinsics.checkNotNullParameter(descriptor2, "descriptor");
                    break;
                }
                break;
        }
        return null;
    }

    public z(List list, k0 k0Var, p0 p0Var, boolean z5) {
        this.f21086e = p0Var;
        this.f21087i = list;
    }
}
