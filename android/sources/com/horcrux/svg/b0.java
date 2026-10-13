package com.horcrux.svg;

import android.graphics.Bitmap;
import com.facebook.datasource.DataSource;
import com.facebook.react.uimanager.UIManagerHelper;
import com.horcrux.svg.events.SvgLoadEvent;

/* loaded from: classes3.dex */
public final class b0 extends ka.a {
    public final /* synthetic */ c0 a;

    public b0(c0 c0Var) {
        this.a = c0Var;
    }

    @Override // y8.b
    public final void onFailureImpl(DataSource dataSource) {
        this.a.G.set(false);
        p8.a.y(dataSource.b(), "RNSVG: fetchDecodedImage failed!", new Object[0]);
    }

    @Override // ka.a
    public final void onNewResultImpl(Bitmap bitmap) {
        c0 c0Var = this.a;
        UIManagerHelper.getEventDispatcherForReactTag(c0Var.mContext, c0Var.getId()).dispatchEvent(new SvgLoadEvent(UIManagerHelper.getSurfaceId(c0Var), c0Var.getId(), c0Var.mContext, c0Var.f6316w, bitmap.getWidth(), bitmap.getHeight()));
        c0Var.G.set(false);
        SvgView svgView = c0Var.getSvgView();
        if (svgView != null) {
            svgView.invalidate();
        }
    }
}
