package am;

import android.app.Activity;
import android.view.Window;
import androidx.core.view.WindowInsetsControllerCompat;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.modules.statusbar.StatusBarModule;
import java.lang.ref.WeakReference;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class d {
    public final ReactApplicationContext a;

    /* renamed from: b, reason: collision with root package name */
    public final f f672b;

    /* renamed from: c, reason: collision with root package name */
    public WindowInsetsControllerCompat f673c;

    /* renamed from: d, reason: collision with root package name */
    public WeakReference f674d;

    public d(ReactApplicationContext reactContext) {
        Intrinsics.checkNotNullParameter(reactContext, "mReactContext");
        this.a = reactContext;
        Intrinsics.checkNotNullParameter(reactContext, "reactContext");
        f fVar = new f();
        try {
            StatusBarModule.Companion companion = StatusBarModule.INSTANCE;
            fVar.f675d = StatusBarModule.class.getConstructor(ReactApplicationContext.class).newInstance(reactContext);
            Class cls = Boolean.TYPE;
            StatusBarModule.class.getMethod("setHidden", cls);
            fVar.f676e = StatusBarModule.class.getMethod("setColor", Double.TYPE, cls);
            fVar.f677i = StatusBarModule.class.getMethod("setTranslucent", cls);
            fVar.f678v = StatusBarModule.class.getMethod("setStyle", String.class);
            fVar.f679w = StatusBarModule.class.getMethod("getConstants", null);
        } catch (Exception unused) {
            int i5 = g.a;
            Intrinsics.checkNotNullParameter("Failed to initialize StatusBarModule via reflection", "message");
        }
        this.f672b = fVar;
        this.f674d = new WeakReference(null);
    }

    public final WindowInsetsControllerCompat a() {
        Activity currentActivity = this.a.getCurrentActivity();
        if (this.f673c == null || !Intrinsics.areEqual(currentActivity, this.f674d.get())) {
            if (currentActivity == null) {
                int i5 = e.a;
                Intrinsics.checkNotNullParameter("StatusBarManagerCompatModule: can not get `WindowInsetsControllerCompat` because current activity is null.", "message");
                return this.f673c;
            }
            Window window = currentActivity.getWindow();
            this.f674d = new WeakReference(currentActivity);
            this.f673c = new WindowInsetsControllerCompat(window, window.getDecorView());
        }
        return this.f673c;
    }
}
