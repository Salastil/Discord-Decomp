package wq;

import kotlin.collections.e1;
import kotlin.jvm.functions.Function0;

/* loaded from: classes3.dex */
public final class n implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f20016d;

    /* renamed from: e, reason: collision with root package name */
    public final o f20017e;

    /* renamed from: i, reason: collision with root package name */
    public final p f20018i;

    public /* synthetic */ n(o oVar, p pVar, int i5) {
        this.f20016d = i5;
        this.f20017e = oVar;
        this.f20018i = pVar;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        switch (this.f20016d) {
            case 0:
                return e1.d(this.f20017e.a.keySet(), this.f20018i.o());
            default:
                return e1.d(this.f20017e.f20019b.keySet(), this.f20018i.p());
        }
    }
}
