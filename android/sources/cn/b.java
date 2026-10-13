package cn;

import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.devsupport.StackTraceHelper;
import com.facebook.react.uimanager.events.Event;
import java.io.Serializable;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class b extends Event implements tm.a {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3588d;

    /* renamed from: e, reason: collision with root package name */
    public final Serializable f3589e;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ b(int i5, int i6, String str, int i10, boolean z5) {
        super(i5, i6);
        this.f3588d = i10;
        this.f3589e = str;
    }

    @Override // com.facebook.react.uimanager.events.Event
    public boolean canCoalesce() {
        switch (this.f3588d) {
            case 0:
                return false;
            default:
                return super.canCoalesce();
        }
    }

    @Override // tm.a
    public String d() {
        return "onToolbarMenuItemPress";
    }

    @Override // com.facebook.react.uimanager.events.Event
    public short getCoalescingKey() {
        switch (this.f3588d) {
            case 1:
                return (short) 0;
            case 2:
                return (short) 0;
            case 3:
                return (short) 0;
            case 4:
                return (short) 0;
            default:
                return super.getCoalescingKey();
        }
    }

    @Override // com.facebook.react.uimanager.events.Event
    public final WritableMap getEventData() {
        switch (this.f3588d) {
            case 0:
                WritableMap createMap = Arguments.createMap();
                createMap.putString(StackTraceHelper.ID_KEY, (String) this.f3589e);
                return createMap;
            case 1:
                WritableMap createMap2 = Arguments.createMap();
                createMap2.putString("text", (String) this.f3589e);
                return createMap2;
            case 2:
                WritableMap createMap3 = Arguments.createMap();
                createMap3.putString("text", (String) this.f3589e);
                return createMap3;
            case 3:
                WritableMap createMap4 = Arguments.createMap();
                createMap4.putString("text", (String) this.f3589e);
                return createMap4;
            default:
                WritableMap createMap5 = Arguments.createMap();
                createMap5.putString("error", ((Throwable) this.f3589e).getMessage());
                return createMap5;
        }
    }

    @Override // com.facebook.react.uimanager.events.Event, tm.a
    /* renamed from: getEventName */
    public final String getName() {
        switch (this.f3588d) {
            case 0:
                return "topToolbarMenuItemPress";
            case 1:
                return "topChangeText";
            case 2:
                return "topSearchButtonPress";
            case 3:
                return "topFocusedInputTextChanged";
            default:
                return "topAnimationFailure";
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public b(int i5, int i6, Throwable error) {
        super(i5, i6);
        this.f3588d = 4;
        Intrinsics.checkNotNullParameter(error, "error");
        this.f3589e = error;
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public b(int i5, String text, int i6, int i10) {
        super(i5, i6);
        this.f3588d = i10;
        switch (i10) {
            case 3:
                Intrinsics.checkNotNullParameter(text, "text");
                super(i5, i6);
                this.f3589e = text;
                break;
            default:
                Intrinsics.checkNotNullParameter(text, "id");
                this.f3589e = text;
                break;
        }
    }
}
