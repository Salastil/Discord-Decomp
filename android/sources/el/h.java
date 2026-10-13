package el;

import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Lambda;

/* loaded from: classes3.dex */
public final class h extends Lambda implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f8162d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ float f8163e;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ h(float f2, int i5) {
        super(1);
        this.f8162d = i5;
        this.f8163e = f2;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        switch (this.f8162d) {
            case 0:
                hl.c obtain = (hl.c) obj;
                Intrinsics.checkNotNullParameter(obtain, "$this$obtain");
                obtain.a = this.f8163e;
                obtain.f10096b = false;
                break;
            default:
                hl.c animateUpdate = (hl.c) obj;
                Intrinsics.checkNotNullParameter(animateUpdate, "$this$animateUpdate");
                animateUpdate.a = this.f8163e;
                animateUpdate.f10096b = true;
                break;
        }
        return Unit.a;
    }
}
