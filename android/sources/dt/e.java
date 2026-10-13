package dt;

import java.io.IOException;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class e extends ss.a {

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ int f7768e = 0;

    /* renamed from: f, reason: collision with root package name */
    public final /* synthetic */ g f7769f;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public e(String str, g gVar) {
        super(str, true);
        this.f7769f = gVar;
    }

    @Override // ss.a
    public final long a() {
        switch (this.f7768e) {
            case 0:
                g gVar = this.f7769f;
                try {
                    if (gVar.k()) {
                    }
                } catch (IOException e9) {
                    gVar.f(e9, null);
                    break;
                }
                break;
            default:
                ts.h hVar = this.f7769f.f7778g;
                Intrinsics.checkNotNull(hVar);
                hVar.cancel();
                break;
        }
        return -1L;
        return -1L;
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public e(g this$0) {
        super(Intrinsics.stringPlus(this$0.f7781l, " writer"), true);
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        this.f7769f = this$0;
    }
}
