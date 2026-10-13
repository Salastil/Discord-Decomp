package qn;

import android.app.Activity;
import android.app.Application;
import android.os.Bundle;
import com.swmansion.rnscreens.utils.ScreenDummyLayoutHelper;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class d implements Application.ActivityLifecycleCallbacks {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ Activity f16914d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ ScreenDummyLayoutHelper f16915e;

    public d(Activity activity, ScreenDummyLayoutHelper screenDummyLayoutHelper) {
        this.f16914d = activity;
        this.f16915e = screenDummyLayoutHelper;
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityCreated(Activity activity, Bundle bundle) {
        Intrinsics.checkNotNullParameter(activity, "activity");
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityDestroyed(Activity destroyedActivity) {
        Intrinsics.checkNotNullParameter(destroyedActivity, "destroyedActivity");
        if (destroyedActivity == this.f16914d) {
            ScreenDummyLayoutHelper screenDummyLayoutHelper = this.f16915e;
            Application application = destroyedActivity.getApplication();
            Intrinsics.checkNotNullExpressionValue(application, "getApplication(...)");
            c cVar = ScreenDummyLayoutHelper.G;
            synchronized (screenDummyLayoutHelper) {
                screenDummyLayoutHelper.f6795d = null;
                screenDummyLayoutHelper.f6796e = null;
                screenDummyLayoutHelper.f6797i = null;
                screenDummyLayoutHelper.f6800x = a.f16910c;
                screenDummyLayoutHelper.F = false;
                d dVar = screenDummyLayoutHelper.E;
                if (dVar != null) {
                    application.unregisterActivityLifecycleCallbacks(dVar);
                    screenDummyLayoutHelper.E = null;
                }
            }
        }
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityPaused(Activity activity) {
        Intrinsics.checkNotNullParameter(activity, "activity");
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityResumed(Activity activity) {
        Intrinsics.checkNotNullParameter(activity, "activity");
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivitySaveInstanceState(Activity activity, Bundle outState) {
        Intrinsics.checkNotNullParameter(activity, "activity");
        Intrinsics.checkNotNullParameter(outState, "outState");
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityStarted(Activity activity) {
        Intrinsics.checkNotNullParameter(activity, "activity");
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityStopped(Activity activity) {
        Intrinsics.checkNotNullParameter(activity, "activity");
    }
}
