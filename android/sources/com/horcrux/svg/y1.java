package com.horcrux.svg;

import com.facebook.react.bridge.Callback;
import com.facebook.react.bridge.ReadableMap;

/* loaded from: classes3.dex */
public final class y1 implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f6454d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ ReadableMap f6455e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Callback f6456i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ int f6457v;

    public y1(int i5, ReadableMap readableMap, Callback callback, int i6) {
        this.f6454d = i5;
        this.f6455e = readableMap;
        this.f6456i = callback;
        this.f6457v = i6;
    }

    @Override // java.lang.Runnable
    public final void run() {
        int i5 = this.f6454d;
        SvgView svgViewByTag = SvgViewManager.getSvgViewByTag(i5);
        if (svgViewByTag == null) {
            SvgViewManager.runWhenViewIsAvailable(i5, new x1(0, this));
            return;
        }
        if (svgViewByTag.notRendered()) {
            svgViewByTag.setToDataUrlTask(new x1(1, this));
            return;
        }
        Callback callback = this.f6456i;
        ReadableMap readableMap = this.f6455e;
        if (readableMap != null) {
            callback.invoke(svgViewByTag.toDataURL(readableMap.getInt("width"), readableMap.getInt("height")));
        } else {
            callback.invoke(svgViewByTag.toDataURL());
        }
    }
}
