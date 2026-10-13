package ja;

import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final /* synthetic */ class a implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f12438d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ d f12439e;

    public /* synthetic */ a(d dVar, int i5) {
        this.f12438d = i5;
        this.f12439e = dVar;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        switch (this.f12438d) {
            case 0:
                d this$0 = this.f12439e;
                Intrinsics.checkNotNullParameter(this$0, "this$0");
                return new c(this$0);
            case 1:
                d this$02 = this.f12439e;
                Intrinsics.checkNotNullParameter(this$02, "this$0");
                return this$02.a.E(this$02.f12451e);
            default:
                d this$03 = this.f12439e;
                Intrinsics.checkNotNullParameter(this$03, "this$0");
                return this$03.a.E(this$03.f12452f);
        }
    }
}
