package en;

import android.util.Log;
import androidx.activity.OnBackPressedCallback;
import androidx.lifecycle.LifecycleOwner;
import androidx.lifecycle.n;
import androidx.lifecycle.t;
import com.facebook.react.bridge.ReactContext;
import com.facebook.react.uimanager.UIManagerHelper;
import com.facebook.react.uimanager.events.EventDispatcher;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class b extends OnBackPressedCallback implements t, c {

    /* renamed from: d, reason: collision with root package name */
    public final f f8166d;

    /* renamed from: e, reason: collision with root package name */
    public boolean f8167e;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public b(i lifecycleOwner, f screen) {
        super(false);
        Intrinsics.checkNotNullParameter(lifecycleOwner, "lifecycleOwner");
        Intrinsics.checkNotNullParameter(screen, "screen");
        this.f8166d = screen;
        this.f8167e = false;
        lifecycleOwner.getLifecycle().a(this);
    }

    public final void a() {
        boolean z5 = false;
        if (this.f8167e) {
            f fVar = this.f8166d;
            if (((Boolean) fVar.f8175i.getValue(fVar, f.J[0])).booleanValue()) {
                z5 = true;
            }
        }
        setEnabled(z5);
    }

    @Override // androidx.lifecycle.t
    public final void c(LifecycleOwner source, n event) {
        Intrinsics.checkNotNullParameter(source, "source");
        Intrinsics.checkNotNullParameter(event, "event");
        int i5 = a.a[event.ordinal()];
        f fVar = this.f8166d;
        if (i5 == 1) {
            fVar.setPreventNativeDismissChangeObserver$react_native_screens_release(this);
            return;
        }
        if (i5 == 2) {
            a();
            return;
        }
        if (i5 == 3) {
            setEnabled(false);
        } else {
            if (i5 != 4) {
                return;
            }
            source.getLifecycle().c(this);
            fVar.setPreventNativeDismissChangeObserver$react_native_screens_release(null);
        }
    }

    @Override // androidx.activity.OnBackPressedCallback
    public final void handleOnBackPressed() {
        f fVar = this.f8166d;
        Log.i("RNScreens", "PreventNativeDismissCallback called for screen " + fVar.getScreenKey());
        h eventEmitter$react_native_screens_release = fVar.getEventEmitter$react_native_screens_release();
        ((EventDispatcher) eventEmitter$react_native_screens_release.f13124c).dispatchEvent(new fn.a(UIManagerHelper.getSurfaceId((ReactContext) eventEmitter$react_native_screens_release.f13123b), eventEmitter$react_native_screens_release.a, 2));
    }
}
