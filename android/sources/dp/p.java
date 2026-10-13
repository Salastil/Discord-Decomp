package dp;

import java.lang.reflect.Field;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class p extends q {

    /* renamed from: g, reason: collision with root package name */
    public final /* synthetic */ int f7664g;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ p(Field field, boolean z5, boolean z6, int i5) {
        super(field, z5, z6);
        this.f7664g = i5;
    }

    @Override // dp.q, dp.w
    public void d(Object[] args) {
        switch (this.f7664g) {
            case 1:
                Intrinsics.checkNotNullParameter(args, "args");
                super.d(args);
                e(kotlin.collections.x.t(args));
                break;
            default:
                super.d(args);
                break;
        }
    }
}
