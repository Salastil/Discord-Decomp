package e;

import android.content.res.Resources;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Lambda;

/* loaded from: classes.dex */
public final class u extends Lambda implements Function1 {

    /* renamed from: e, reason: collision with root package name */
    public static final u f7833e;

    /* renamed from: i, reason: collision with root package name */
    public static final u f7834i;

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f7835d;

    static {
        int i5 = 1;
        f7833e = new u(i5, 0);
        f7834i = new u(i5, 1);
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ u(int i5, int i6) {
        super(i5);
        this.f7835d = i6;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        switch (this.f7835d) {
            case 0:
                Intrinsics.checkNotNullParameter((Resources) obj, "<anonymous parameter 0>");
                return Boolean.TRUE;
            default:
                Intrinsics.checkNotNullParameter((Resources) obj, "<anonymous parameter 0>");
                return Boolean.FALSE;
        }
    }
}
