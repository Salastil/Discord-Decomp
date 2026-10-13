package rb;

import android.app.Activity;
import com.facebook.react.bridge.LifecycleEventListener;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContext;
import com.facebook.react.common.ReactConstants;
import com.github.yamill.orientation.OrientationModule;
import ds.o;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Ref;
import nr.r0;

/* loaded from: classes3.dex */
public final class e implements LifecycleEventListener {

    /* renamed from: v, reason: collision with root package name */
    public static Integer f17186v;

    /* renamed from: w, reason: collision with root package name */
    public static final com.discord.browser_manager.b f17187w;

    /* renamed from: d, reason: collision with root package name */
    public final ReactContext f17188d;

    /* renamed from: e, reason: collision with root package name */
    public final qb.a f17189e;

    /* renamed from: i, reason: collision with root package name */
    public d f17190i;

    static {
        o destinationFunction = new o(2, new c(), c.class, "tryEmitOrientationDegreesChange", "tryEmitOrientationDegreesChange(ILcom/facebook/react/bridge/ReactContext;)V", 0, 1);
        r0 coroutineScope = r0.f15654d;
        Intrinsics.checkNotNullParameter(coroutineScope, "coroutineScope");
        Intrinsics.checkNotNullParameter(destinationFunction, "destinationFunction");
        f17187w = new com.discord.browser_manager.b(new Ref.ObjectRef(), new Ref.ObjectRef(), new Ref.ObjectRef(), destinationFunction, 2);
    }

    public e(ReactApplicationContext reactContext, qb.a onGetCurrentActivity) {
        Intrinsics.checkNotNullParameter(reactContext, "reactContext");
        Intrinsics.checkNotNullParameter(onGetCurrentActivity, "onGetCurrentActivity");
        this.f17188d = reactContext;
        this.f17189e = onGetCurrentActivity;
    }

    @Override // com.facebook.react.bridge.LifecycleEventListener
    public final void onHostResume() {
        Activity _init_$lambda$2;
        _init_$lambda$2 = OrientationModule._init_$lambda$2(this.f17189e.f16738e);
        if (_init_$lambda$2 == null || this.f17190i != null) {
            p8.a.g(ReactConstants.TAG, "no activity to register receiver");
            return;
        }
        d dVar = new d(_init_$lambda$2, this);
        this.f17190i = dVar;
        if (dVar.canDetectOrientation()) {
            d dVar2 = this.f17190i;
            if (dVar2 == null) {
                Intrinsics.throwUninitializedPropertyAccessException("orientationEventListener");
                dVar2 = null;
            }
            dVar2.enable();
        }
    }

    @Override // com.facebook.react.bridge.LifecycleEventListener
    public final void onHostDestroy() {
    }

    @Override // com.facebook.react.bridge.LifecycleEventListener
    public final void onHostPause() {
    }
}
