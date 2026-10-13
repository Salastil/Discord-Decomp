package rb;

import android.net.Uri;
import android.os.Handler;
import android.os.Looper;
import android.provider.Settings;
import com.facebook.react.bridge.LifecycleEventListener;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContext;
import com.facebook.react.runtime.r;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class a implements LifecycleEventListener {

    /* renamed from: d, reason: collision with root package name */
    public final ReactContext f17178d;

    /* renamed from: e, reason: collision with root package name */
    public final r f17179e;

    /* renamed from: i, reason: collision with root package name */
    public final Uri f17180i;

    /* renamed from: v, reason: collision with root package name */
    public final String f17181v;

    /* renamed from: w, reason: collision with root package name */
    public b2.a f17182w;

    public a(ReactApplicationContext reactContext, r onAutoRotateEnabled) {
        Intrinsics.checkNotNullParameter(reactContext, "reactContext");
        Intrinsics.checkNotNullParameter(onAutoRotateEnabled, "onAutoRotateEnabled");
        this.f17178d = reactContext;
        this.f17179e = onAutoRotateEnabled;
        this.f17180i = Settings.System.getUriFor("accelerometer_rotation");
        this.f17181v = "accelerometer_rotation";
        onAutoRotateEnabled.invoke(Boolean.valueOf(Settings.System.getInt(reactContext.getContentResolver(), "accelerometer_rotation", 0) == 1));
    }

    @Override // com.facebook.react.bridge.LifecycleEventListener
    public final void onHostPause() {
        b2.a aVar = this.f17182w;
        if (aVar != null) {
            this.f17178d.getContentResolver().unregisterContentObserver(aVar);
        }
        this.f17182w = null;
    }

    @Override // com.facebook.react.bridge.LifecycleEventListener
    public final void onHostResume() {
        Looper myLooper = Looper.myLooper();
        Intrinsics.checkNotNull(myLooper);
        b2.a aVar = new b2.a(this, new Handler(myLooper));
        this.f17182w = aVar;
        ReactContext reactContext = this.f17178d;
        reactContext.getContentResolver().registerContentObserver(this.f17180i, false, aVar);
        this.f17179e.invoke(Boolean.valueOf(Settings.System.getInt(reactContext.getContentResolver(), this.f17181v, 0) == 1));
    }

    @Override // com.facebook.react.bridge.LifecycleEventListener
    public final void onHostDestroy() {
    }
}
