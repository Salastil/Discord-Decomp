package hp;

import ip.a0;
import kotlin.jvm.internal.Intrinsics;
import lp.c0;

/* loaded from: classes3.dex */
public final class m extends c0 {
    public final /* synthetic */ int E;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public m(a0 module, hq.c fqName, int i5) {
        super(module, fqName);
        this.E = i5;
        switch (i5) {
            case 1:
                Intrinsics.checkNotNullParameter(module, "module");
                Intrinsics.checkNotNullParameter(fqName, "fqName");
                super(module, fqName);
                break;
            default:
                break;
        }
    }

    @Override // ip.f0
    public final /* bridge */ /* synthetic */ rq.o N() {
        switch (this.E) {
        }
        return rq.n.f17557b;
    }
}
