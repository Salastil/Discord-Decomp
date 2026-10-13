package androidx.lifecycle;

import android.app.Activity;
import android.app.Fragment;
import android.os.Build;
import android.os.Bundle;
import android.os.Handler;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class e0 extends g {
    final /* synthetic */ ProcessLifecycleOwner this$0;

    public static final class a extends g {
        final /* synthetic */ ProcessLifecycleOwner this$0;

        public a(ProcessLifecycleOwner processLifecycleOwner) {
            this.this$0 = processLifecycleOwner;
        }

        @Override // android.app.Application.ActivityLifecycleCallbacks
        public void onActivityPostResumed(Activity activity) {
            Intrinsics.checkNotNullParameter(activity, "activity");
            this.this$0.a();
        }

        @Override // android.app.Application.ActivityLifecycleCallbacks
        public void onActivityPostStarted(Activity activity) {
            Intrinsics.checkNotNullParameter(activity, "activity");
            ProcessLifecycleOwner processLifecycleOwner = this.this$0;
            int i5 = processLifecycleOwner.f2159d + 1;
            processLifecycleOwner.f2159d = i5;
            if (i5 == 1 && processLifecycleOwner.f2162v) {
                processLifecycleOwner.f2164x.f(n.ON_START);
                processLifecycleOwner.f2162v = false;
            }
        }
    }

    public e0(ProcessLifecycleOwner processLifecycleOwner) {
        this.this$0 = processLifecycleOwner;
    }

    @Override // androidx.lifecycle.g, android.app.Application.ActivityLifecycleCallbacks
    public void onActivityCreated(Activity activity, Bundle bundle) {
        Intrinsics.checkNotNullParameter(activity, "activity");
        if (Build.VERSION.SDK_INT < 29) {
            int i5 = n0.f2211e;
            Intrinsics.checkNotNullParameter(activity, "<this>");
            Fragment findFragmentByTag = activity.getFragmentManager().findFragmentByTag("androidx.lifecycle.LifecycleDispatcher.report_fragment_tag");
            Intrinsics.checkNotNull(findFragmentByTag, "null cannot be cast to non-null type androidx.lifecycle.ReportFragment");
            ((n0) findFragmentByTag).f2212d = this.this$0.E;
        }
    }

    @Override // androidx.lifecycle.g, android.app.Application.ActivityLifecycleCallbacks
    public void onActivityPaused(Activity activity) {
        Intrinsics.checkNotNullParameter(activity, "activity");
        ProcessLifecycleOwner processLifecycleOwner = this.this$0;
        int i5 = processLifecycleOwner.f2160e - 1;
        processLifecycleOwner.f2160e = i5;
        if (i5 == 0) {
            Handler handler = processLifecycleOwner.f2163w;
            Intrinsics.checkNotNull(handler);
            handler.postDelayed(processLifecycleOwner.f2165y, 700L);
        }
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public void onActivityPreCreated(Activity activity, Bundle bundle) {
        Intrinsics.checkNotNullParameter(activity, "activity");
        d0.a(activity, new a(this.this$0));
    }

    @Override // androidx.lifecycle.g, android.app.Application.ActivityLifecycleCallbacks
    public void onActivityStopped(Activity activity) {
        Intrinsics.checkNotNullParameter(activity, "activity");
        ProcessLifecycleOwner processLifecycleOwner = this.this$0;
        int i5 = processLifecycleOwner.f2159d - 1;
        processLifecycleOwner.f2159d = i5;
        if (i5 == 0 && processLifecycleOwner.f2161i) {
            processLifecycleOwner.f2164x.f(n.ON_STOP);
            processLifecycleOwner.f2162v = true;
        }
    }
}
