package vp;

import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class n implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f19509d;

    /* renamed from: e, reason: collision with root package name */
    public final o f19510e;

    public /* synthetic */ n(o oVar, int i5) {
        this.f19509d = i5;
        this.f19510e = oVar;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        hq.e it = (hq.e) obj;
        switch (this.f19509d) {
            case 0:
                Intrinsics.checkNotNullParameter(it, "it");
                return this.f19510e.N(it);
            default:
                Intrinsics.checkNotNullParameter(it, "it");
                return this.f19510e.O(it);
        }
    }
}
