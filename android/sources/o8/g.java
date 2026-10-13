package o8;

import com.facebook.common.internal.Supplier;
import com.facebook.drawee.controller.AbstractDraweeControllerBuilder;

/* loaded from: classes3.dex */
public final class g implements Supplier {
    public final /* synthetic */ int a;

    public /* synthetic */ g(int i5) {
        this.a = i5;
    }

    @Override // com.facebook.common.internal.Supplier
    public final Object get() {
        switch (this.a) {
            case 0:
                return Boolean.TRUE;
            case 1:
                return Boolean.FALSE;
            default:
                return com.facebook.imagepipeline.nativecode.b.r(AbstractDraweeControllerBuilder.f4414i);
        }
    }
}
