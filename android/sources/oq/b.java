package oq;

import ip.l;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class b implements Function1 {

    /* renamed from: e, reason: collision with root package name */
    public static final b f16176e = new b(0);

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f16177d;

    public /* synthetic */ b(int i5) {
        this.f16177d = i5;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        switch (this.f16177d) {
            case 0:
                l it = (l) obj;
                int i5 = e.a;
                Intrinsics.checkNotNullParameter(it, "it");
                return it.h();
            default:
                ip.d dVar = (ip.d) obj;
                Intrinsics.checkNotNull(dVar);
                return e.l(dVar);
        }
    }
}
