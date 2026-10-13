package com.facebook.react.views.textinput;

import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.uimanager.ViewProps;
import com.facebook.react.uimanager.events.Event;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0002\b\u0007\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0000\u0018\u0000 \u000f2\b\u0012\u0004\u0012\u00020\u00000\u0001:\u0001\u000fB7\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\u0006\u0010\u0005\u001a\u00020\u0006\u0012\u0006\u0010\u0007\u001a\u00020\u0003\u0012\u0006\u0010\b\u001a\u00020\u0003\u0012\u0006\u0010\t\u001a\u00020\u0003¢\u0006\u0004\b\n\u0010\u000bJ\b\u0010\f\u001a\u00020\u0006H\u0016J\b\u0010\r\u001a\u00020\u000eH\u0014R\u000e\u0010\u0005\u001a\u00020\u0006X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0007\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\t\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0010"}, d2 = {"Lcom/facebook/react/views/textinput/ReactTextChangedEvent;", "Lcom/facebook/react/uimanager/events/Event;", "surfaceId", "", "viewId", "text", "", "eventCount", "selectionStart", "selectionEnd", "<init>", "(IILjava/lang/String;III)V", "getEventName", "getEventData", "Lcom/facebook/react/bridge/WritableMap;", "Companion", "ReactAndroid_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes3.dex */
public final class ReactTextChangedEvent extends Event<ReactTextChangedEvent> {

    @NotNull
    public static final String EVENT_NAME = "topChange";
    private final int eventCount;
    private final int selectionEnd;
    private final int selectionStart;

    @NotNull
    private final String text;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public ReactTextChangedEvent(int i5, int i6, @NotNull String text, int i10, int i11, int i12) {
        super(i5, i6);
        Intrinsics.checkNotNullParameter(text, "text");
        this.text = text;
        this.eventCount = i10;
        this.selectionStart = i11;
        this.selectionEnd = i12;
    }

    @Override // com.facebook.react.uimanager.events.Event
    @NotNull
    public WritableMap getEventData() {
        WritableMap createMap = Arguments.createMap();
        createMap.putString("text", this.text);
        createMap.putInt("eventCount", this.eventCount);
        createMap.putInt("target", getViewTag());
        WritableMap createMap2 = Arguments.createMap();
        createMap2.putInt(ViewProps.START, this.selectionStart);
        createMap2.putInt(ViewProps.END, this.selectionEnd);
        createMap.putMap("selection", createMap2);
        return createMap;
    }

    @Override // com.facebook.react.uimanager.events.Event, tm.a
    @NotNull
    /* renamed from: getEventName */
    public String getName() {
        return EVENT_NAME;
    }
}
