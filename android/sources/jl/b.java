package jl;

import android.app.Activity;
import android.app.Application;
import android.os.Bundle;
import com.appsflyer.internal.p;
import com.yalantis.ucrop.UCropActivity;

/* loaded from: classes3.dex */
public final class b implements Application.ActivityLifecycleCallbacks {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ String f12822d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ String f12823e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ String f12824i;

    public b(e eVar, String str, String str2, String str3) {
        this.f12822d = str;
        this.f12823e = str2;
        this.f12824i = str3;
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityDestroyed(Activity activity) {
        if (!(activity instanceof UCropActivity) || activity.isChangingConfigurations() || e.f12833g0 == null) {
            return;
        }
        activity.getApplication().unregisterActivityLifecycleCallbacks(e.f12833g0);
        e.f12833g0 = null;
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityResumed(Activity activity) {
        if (activity instanceof UCropActivity) {
            activity.getWindow().getDecorView().post(new p(this, (UCropActivity) activity, this.f12822d, this.f12823e, this.f12824i));
        }
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityPaused(Activity activity) {
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityStarted(Activity activity) {
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityStopped(Activity activity) {
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityCreated(Activity activity, Bundle bundle) {
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivitySaveInstanceState(Activity activity, Bundle bundle) {
    }
}
