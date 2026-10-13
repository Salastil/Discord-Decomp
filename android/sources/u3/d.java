package u3;

import android.app.Activity;
import android.graphics.Rect;
import android.view.WindowManager;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class d implements b {

    /* renamed from: b, reason: collision with root package name */
    public static final d f18802b = new d();

    @Override // u3.b
    public final Rect b(Activity activity) {
        Intrinsics.checkNotNullParameter(activity, "activity");
        Rect bounds = ((WindowManager) activity.getSystemService(WindowManager.class)).getCurrentWindowMetrics().getBounds();
        Intrinsics.checkNotNullExpressionValue(bounds, "getBounds(...)");
        return bounds;
    }
}
