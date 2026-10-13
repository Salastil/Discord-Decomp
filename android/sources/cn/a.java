package cn;

import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.WritableArray;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.uimanager.PixelUtil;
import com.facebook.react.uimanager.events.Event;
import java.util.ArrayList;
import java.util.Iterator;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class a extends Event implements tm.a {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3585d = 0;

    /* renamed from: e, reason: collision with root package name */
    public final Object f3586e;

    /* renamed from: i, reason: collision with root package name */
    public final Object f3587i;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public a(int i5, int i6, String groupId, ArrayList selectedIds) {
        super(i5, i6);
        Intrinsics.checkNotNullParameter(groupId, "groupId");
        Intrinsics.checkNotNullParameter(selectedIds, "selectedIds");
        this.f3586e = groupId;
        this.f3587i = selectedIds;
    }

    @Override // com.facebook.react.uimanager.events.Event
    public boolean canCoalesce() {
        switch (this.f3585d) {
            case 0:
                return false;
            default:
                return super.canCoalesce();
        }
    }

    @Override // tm.a
    public String d() {
        return "onToolbarMenuGroupSelectionChange";
    }

    @Override // com.facebook.react.uimanager.events.Event
    /* renamed from: getEventData */
    public final WritableMap getAccessibilityEventData() {
        int i5 = this.f3585d;
        Object obj = this.f3587i;
        Object obj2 = this.f3586e;
        switch (i5) {
            case 0:
                WritableMap createMap = Arguments.createMap();
                createMap.putString("groupId", (String) obj2);
                WritableArray createArray = Arguments.createArray();
                Iterator it = ((ArrayList) obj).iterator();
                while (it.hasNext()) {
                    createArray.pushString((String) it.next());
                }
                Unit unit = Unit.a;
                createMap.putArray("selectedIds", createArray);
                return createMap;
            default:
                WritableMap createMap2 = Arguments.createMap();
                createMap2.putMap("insets", jb.a.i((tn.a) obj2));
                tn.b rect = (tn.b) obj;
                Intrinsics.checkNotNullParameter(rect, "rect");
                WritableMap createMap3 = Arguments.createMap();
                createMap3.putDouble("x", PixelUtil.toDIPFromPixel(rect.a));
                createMap3.putDouble("y", PixelUtil.toDIPFromPixel(rect.f18659b));
                createMap3.putDouble("width", PixelUtil.toDIPFromPixel(rect.f18660c));
                createMap3.putDouble("height", PixelUtil.toDIPFromPixel(rect.f18661d));
                createMap2.putMap("frame", createMap3);
                return createMap2;
        }
    }

    @Override // com.facebook.react.uimanager.events.Event, tm.a
    /* renamed from: getEventName */
    public final String getName() {
        switch (this.f3585d) {
            case 0:
                return "topToolbarMenuGroupSelectionChange";
            default:
                return "topInsetsChange";
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public a(int i5, int i6, tn.a mInsets, tn.b mFrame) {
        super(i5, i6);
        Intrinsics.checkNotNullParameter(mInsets, "mInsets");
        Intrinsics.checkNotNullParameter(mFrame, "mFrame");
        this.f3586e = mInsets;
        this.f3587i = mFrame;
    }
}
