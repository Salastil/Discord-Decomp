package wm;

import com.facebook.react.bridge.ReactContext;
import com.facebook.react.uimanager.UIManagerHelper;
import com.facebook.react.uimanager.events.EventDispatcher;

/* loaded from: classes3.dex */
public final class r extends k2.f implements tm.b {
    @Override // tm.b
    public final void a() {
        ((EventDispatcher) this.f13124c).dispatchEvent(new o(UIManagerHelper.getSurfaceId((ReactContext) this.f13123b), this.a, 1));
    }

    @Override // tm.b
    public final void b() {
        ((EventDispatcher) this.f13124c).dispatchEvent(new o(UIManagerHelper.getSurfaceId((ReactContext) this.f13123b), this.a, 0));
    }

    @Override // tm.b
    public final void c() {
        ((EventDispatcher) this.f13124c).dispatchEvent(new o(UIManagerHelper.getSurfaceId((ReactContext) this.f13123b), this.a, 4));
    }

    @Override // tm.b
    public final void d() {
        ((EventDispatcher) this.f13124c).dispatchEvent(new o(UIManagerHelper.getSurfaceId((ReactContext) this.f13123b), this.a, 5));
    }
}
