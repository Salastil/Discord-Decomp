package com.horcrux.svg;

import com.facebook.react.uimanager.ThemedReactContext;
import java.util.HashMap;

/* loaded from: classes3.dex */
public final class v extends e {

    /* renamed from: d, reason: collision with root package name */
    public final HashMap f6432d;

    /* renamed from: e, reason: collision with root package name */
    public u f6433e;

    /* renamed from: i, reason: collision with root package name */
    public u f6434i;

    /* renamed from: v, reason: collision with root package name */
    public final FilterRegion f6435v;

    public v(ThemedReactContext themedReactContext) {
        super(themedReactContext);
        this.f6432d = new HashMap();
        this.f6435v = new FilterRegion();
    }

    @Override // com.horcrux.svg.VirtualView
    public final void saveDefinition() {
        SvgView svgView;
        if (this.mName == null || (svgView = getSvgView()) == null) {
            return;
        }
        svgView.defineFilter(this, this.mName);
    }
}
