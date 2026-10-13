package x0;

import android.app.Activity;
import android.app.Application;
import android.os.Bundle;
import android.util.Log;

/* loaded from: classes.dex */
public final class d implements Application.ActivityLifecycleCallbacks {

    /* renamed from: d, reason: collision with root package name */
    public Object f20184d;

    /* renamed from: e, reason: collision with root package name */
    public Activity f20185e;

    /* renamed from: i, reason: collision with root package name */
    public final int f20186i;

    /* renamed from: v, reason: collision with root package name */
    public boolean f20187v = false;

    /* renamed from: w, reason: collision with root package name */
    public boolean f20188w = false;

    /* renamed from: x, reason: collision with root package name */
    public boolean f20189x = false;

    public d(Activity activity) {
        this.f20185e = activity;
        this.f20186i = activity.hashCode();
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityDestroyed(Activity activity) {
        if (this.f20185e == activity) {
            this.f20185e = null;
            this.f20188w = true;
        }
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityPaused(Activity activity) {
        if (!this.f20188w || this.f20189x || this.f20187v) {
            return;
        }
        Object obj = this.f20184d;
        try {
            Object obj2 = e.f20191c.get(activity);
            if (obj2 == obj && activity.hashCode() == this.f20186i) {
                e.f20195g.postAtFrontOfQueue(new ii.o(25, e.f20190b.get(activity), obj2));
                this.f20189x = true;
                this.f20184d = null;
            }
        } catch (Throwable th2) {
            Log.e("ActivityRecreator", "Exception while fetching field values", th2);
        }
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityStarted(Activity activity) {
        if (this.f20185e == activity) {
            this.f20187v = true;
        }
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityResumed(Activity activity) {
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
