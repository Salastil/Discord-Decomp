package u3;

import android.app.Activity;
import android.view.WindowManager;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class g implements f {

    /* renamed from: b, reason: collision with root package name */
    public static final g f18803b = new g();

    @Override // u3.f
    public final float a(Activity context) {
        Intrinsics.checkNotNullParameter(context, "context");
        return ((WindowManager) context.getSystemService(WindowManager.class)).getCurrentWindowMetrics().getDensity();
    }
}
