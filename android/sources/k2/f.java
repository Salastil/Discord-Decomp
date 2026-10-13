package k2;

import com.facebook.react.bridge.ReactContext;
import com.facebook.react.uimanager.UIManagerHelper;
import com.facebook.react.uimanager.events.EventDispatcher;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public abstract class f {
    public int a;

    /* renamed from: b, reason: collision with root package name */
    public final Object f13123b;

    /* renamed from: c, reason: collision with root package name */
    public final Object f13124c;

    public f(ReactContext reactContext, int i5) {
        Intrinsics.checkNotNullParameter(reactContext, "reactContext");
        this.f13123b = reactContext;
        this.a = i5;
        EventDispatcher eventDispatcherForReactTag = UIManagerHelper.getEventDispatcherForReactTag(reactContext, i5);
        if (eventDispatcherForReactTag == null) {
            throw new IllegalStateException(k0.d.i(i5, "[RNScreens] Nullish event dispatcher for view with tag: ").toString());
        }
        this.f13124c = eventDispatcherForReactTag;
    }

    public f(i iVar) {
        this.a = 0;
        this.f13124c = new d();
        this.f13123b = iVar;
    }
}
