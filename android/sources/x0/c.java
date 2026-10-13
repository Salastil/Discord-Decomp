package x0;

import android.app.ActivityOptions;
import android.os.Build;
import android.os.Bundle;

/* loaded from: classes.dex */
public final class c extends f {

    /* renamed from: b, reason: collision with root package name */
    public final ActivityOptions f20183b;

    public c(ActivityOptions activityOptions) {
        this.f20183b = activityOptions;
    }

    @Override // x0.f
    public final Bundle g() {
        return this.f20183b.toBundle();
    }

    public final f h(int i5) {
        int i6 = Build.VERSION.SDK_INT;
        ActivityOptions activityOptions = this.f20183b;
        if (i6 >= 34) {
            activityOptions.setPendingIntentBackgroundActivityStartMode(i5);
            return this;
        }
        if (i6 >= 33) {
            activityOptions.setPendingIntentBackgroundActivityLaunchAllowed(i5 != 2);
        }
        return this;
    }
}
