package com.horcrux.svg.events;

import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.ReactContext;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.uimanager.events.Event;
import com.facebook.react.uimanager.events.RCTEventEmitter;
import com.facebook.react.views.imagehelper.ImageSource;

/* loaded from: classes3.dex */
public class SvgLoadEvent extends Event<SvgLoadEvent> {
    public static final String EVENT_NAME = "topLoad";
    private final float height;
    private final String uri;
    private final float width;

    public SvgLoadEvent(int i5, int i6, ReactContext reactContext, String str, float f2, float f10) {
        super(i5, i6);
        this.uri = new ImageSource(reactContext, str).getSource();
        this.width = f2;
        this.height = f10;
    }

    @Override // com.facebook.react.uimanager.events.Event
    public void dispatch(RCTEventEmitter rCTEventEmitter) {
        rCTEventEmitter.receiveEvent(getViewTag(), getName(), getAccessibilityEventData());
    }

    @Override // com.facebook.react.uimanager.events.Event
    public short getCoalescingKey() {
        return (short) 0;
    }

    @Override // com.facebook.react.uimanager.events.Event
    /* renamed from: getEventData */
    public WritableMap getAccessibilityEventData() {
        WritableMap createMap = Arguments.createMap();
        createMap.putDouble("width", this.width);
        createMap.putDouble("height", this.height);
        createMap.putString("uri", this.uri);
        WritableMap createMap2 = Arguments.createMap();
        createMap2.putMap("source", createMap);
        return createMap2;
    }

    @Override // com.facebook.react.uimanager.events.Event, tm.a
    /* renamed from: getEventName */
    public String getName() {
        return EVENT_NAME;
    }
}
