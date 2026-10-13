package jl;

import android.app.Activity;
import android.app.Application;
import android.os.Bundle;
import com.facebook.react.devsupport.h;
import com.yalantis.ucrop.UCropActivity;

/* loaded from: classes3.dex */
public final class a implements Application.ActivityLifecycleCallbacks {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ String f12818d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ String f12819e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ String f12820i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ String f12821v;

    public a(e eVar, String str, String str2, String str3, String str4) {
        this.f12818d = str;
        this.f12819e = str2;
        this.f12820i = str3;
        this.f12821v = str4;
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityDestroyed(Activity activity) {
        if (!(activity instanceof UCropActivity) || activity.isChangingConfigurations() || e.f12832f0 == null) {
            return;
        }
        activity.getApplication().unregisterActivityLifecycleCallbacks(e.f12832f0);
        e.f12832f0 = null;
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityResumed(Activity activity) {
        if (activity instanceof UCropActivity) {
            activity.getWindow().getDecorView().post(new h(this, this.f12818d, (UCropActivity) activity, this.f12819e, this.f12820i, this.f12821v));
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
