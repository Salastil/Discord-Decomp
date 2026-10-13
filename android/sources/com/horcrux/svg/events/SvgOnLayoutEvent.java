package com.horcrux.svg.events;

import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.uimanager.PixelUtil;
import com.facebook.react.uimanager.events.Event;

/* loaded from: classes3.dex */
public class SvgOnLayoutEvent extends Event<SvgOnLayoutEvent> {
    public static final String EVENT_NAME = "topSvgLayout";
    public int height;
    public int width;

    /* renamed from: x, reason: collision with root package name */
    public int f6345x;

    /* renamed from: y, reason: collision with root package name */
    public int f6346y;

    public SvgOnLayoutEvent(int i5, int i6, int i10, int i11, int i12, int i13) {
        super(i5, i6);
        this.f6345x = i10;
        this.f6346y = i11;
        this.width = i12;
        this.height = i13;
    }

    @Override // com.facebook.react.uimanager.events.Event
    public short getCoalescingKey() {
        return (short) 0;
    }

    @Override // com.facebook.react.uimanager.events.Event
    public WritableMap getEventData() {
        WritableMap createMap = Arguments.createMap();
        createMap.putDouble("x", PixelUtil.toDIPFromPixel(this.f6345x));
        createMap.putDouble("y", PixelUtil.toDIPFromPixel(this.f6346y));
        createMap.putDouble("width", PixelUtil.toDIPFromPixel(this.width));
        createMap.putDouble("height", PixelUtil.toDIPFromPixel(this.height));
        WritableMap createMap2 = Arguments.createMap();
        createMap2.putMap("layout", createMap);
        createMap2.putInt("target", getViewTag());
        return createMap2;
    }

    @Override // com.facebook.react.uimanager.events.Event, tm.a
    /* renamed from: getEventName */
    public String getName() {
        return EVENT_NAME;
    }
}
