package wm;

import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.uimanager.events.Event;

/* loaded from: classes3.dex */
public final class o extends Event implements tm.a {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f19936d;

    /* renamed from: e, reason: collision with root package name */
    public static final wi.d f19932e = new wi.d(19);

    /* renamed from: i, reason: collision with root package name */
    public static final ha.k f19933i = new ha.k(20);

    /* renamed from: v, reason: collision with root package name */
    public static final io.sentry.hints.j f19934v = new io.sentry.hints.j(20);

    /* renamed from: w, reason: collision with root package name */
    public static final j8.b f19935w = new j8.b(20, (byte) 0);
    public static final j8.c E = new j8.c();
    public static final l8.a F = new l8.a(20);

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ o(int i5, int i6, int i10) {
        super(i5, i6);
        this.f19936d = i10;
    }

    @Override // com.facebook.react.uimanager.events.Event
    public final boolean canCoalesce() {
        switch (this.f19936d) {
        }
        return false;
    }

    @Override // tm.a
    public final String d() {
        switch (this.f19936d) {
            case 0:
                return "onDidAppear";
            case 1:
                return "onDidDisappear";
            case 2:
                return "onNativeDismiss";
            case 3:
                return "onSyncFlush";
            case 4:
                return "onWillAppear";
            default:
                return "onWillDisappear";
        }
    }

    @Override // com.facebook.react.uimanager.events.Event
    /* renamed from: experimental_isSynchronous */
    public boolean getSynchronous() {
        switch (this.f19936d) {
            case 3:
                return true;
            default:
                return super.getSynchronous();
        }
    }

    @Override // com.facebook.react.uimanager.events.Event
    /* renamed from: getEventData */
    public final WritableMap getAccessibilityEventData() {
        switch (this.f19936d) {
        }
        return Arguments.createMap();
    }

    @Override // com.facebook.react.uimanager.events.Event, tm.a
    /* renamed from: getEventName */
    public final String getName() {
        switch (this.f19936d) {
            case 0:
                return "topDidAppear";
            case 1:
                return "topDidDisappear";
            case 2:
                return "topNativeDismiss";
            case 3:
                return "topSyncFlush";
            case 4:
                return "topWillAppear";
            default:
                return "topWillDisappear";
        }
    }
}
