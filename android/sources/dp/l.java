package dp;

import java.lang.reflect.Field;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class l extends m {

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ int f7662e;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ l(Field field, boolean z5, int i5) {
        super(field, z5);
        this.f7662e = i5;
    }

    @Override // dp.w
    public void d(Object[] args) {
        switch (this.f7662e) {
            case 1:
                Intrinsics.checkNotNullParameter(args, "args");
                m3.n.t(this, args);
                e(kotlin.collections.x.t(args));
                break;
            default:
                super.d(args);
                break;
        }
    }
}
