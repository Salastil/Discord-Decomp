package aq;

import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class b implements Function2 {

    /* renamed from: e, reason: collision with root package name */
    public static final b f2618e = new b(0);

    /* renamed from: i, reason: collision with root package name */
    public static final b f2619i = new b(1);

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f2620d;

    public /* synthetic */ b(int i5) {
        this.f2620d = i5;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(Object obj, Object obj2) {
        d loadConstantFromProperty = (d) obj;
        q it = (q) obj2;
        switch (this.f2620d) {
            case 0:
                Intrinsics.checkNotNullParameter(loadConstantFromProperty, "$this$loadConstantFromProperty");
                Intrinsics.checkNotNullParameter(it, "it");
                return loadConstantFromProperty.f2626c.get(it);
            default:
                Intrinsics.checkNotNullParameter(loadConstantFromProperty, "$this$loadConstantFromProperty");
                Intrinsics.checkNotNullParameter(it, "it");
                return loadConstantFromProperty.f2625b.get(it);
        }
    }
}
