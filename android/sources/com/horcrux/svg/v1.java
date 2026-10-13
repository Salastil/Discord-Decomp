package com.horcrux.svg;

import com.horcrux.svg.RenderableViewManager;
import javax.inject.Provider;

/* loaded from: classes3.dex */
public final class v1 implements Provider {
    @Override // javax.inject.Provider
    public final Object get() {
        return new RenderableViewManager.TextPathViewManager();
    }
}
