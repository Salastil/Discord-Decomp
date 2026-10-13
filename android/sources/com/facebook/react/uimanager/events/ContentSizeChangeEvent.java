package com.facebook.react.uimanager.events;

import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.uimanager.PixelUtil;
import com.facebook.react.views.textinput.ReactContentSizeChangedEvent;
import fo.d;
import kotlin.Metadata;
import org.jetbrains.annotations.NotNull;

@d
@Metadata(d1 = {"\u0000\u001e\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0007\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0000\b\u0007\u0018\u00002\b\u0012\u0004\u0012\u00020\u00000\u0001B'\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\u0006\u0010\u0005\u001a\u00020\u0003\u0012\u0006\u0010\u0006\u001a\u00020\u0003¢\u0006\u0004\b\u0007\u0010\bB!\b\u0017\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\u0006\u0010\u0005\u001a\u00020\u0003\u0012\u0006\u0010\u0006\u001a\u00020\u0003¢\u0006\u0004\b\u0007\u0010\tJ\b\u0010\n\u001a\u00020\u000bH\u0016J\b\u0010\f\u001a\u00020\rH\u0014R\u000e\u0010\u0005\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u000e"}, d2 = {"Lcom/facebook/react/uimanager/events/ContentSizeChangeEvent;", "Lcom/facebook/react/uimanager/events/Event;", "surfaceId", "", "viewTag", "width", "height", "<init>", "(IIII)V", "(III)V", "getEventName", "", "getEventData", "Lcom/facebook/react/bridge/WritableMap;", "ReactAndroid_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes3.dex */
public final class ContentSizeChangeEvent extends Event<ContentSizeChangeEvent> {
    private final int height;
    private final int width;

    public ContentSizeChangeEvent(int i5, int i6, int i10, int i11) {
        super(i5, i6);
        this.width = i10;
        this.height = i11;
    }

    @Override // com.facebook.react.uimanager.events.Event
    @NotNull
    public WritableMap getEventData() {
        WritableMap createMap = Arguments.createMap();
        createMap.putDouble("width", PixelUtil.toDIPFromPixel(this.width));
        createMap.putDouble("height", PixelUtil.toDIPFromPixel(this.height));
        return createMap;
    }

    @Override // com.facebook.react.uimanager.events.Event, tm.a
    @NotNull
    /* renamed from: getEventName */
    public String getName() {
        return ReactContentSizeChangedEvent.EVENT_NAME;
    }

    @d
    public ContentSizeChangeEvent(int i5, int i6, int i10) {
        this(-1, i5, i6, i10);
    }
}
