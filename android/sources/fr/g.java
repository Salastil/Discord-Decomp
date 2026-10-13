package fr;

import com.swmansion.rnscreens.stack.views.ChildrenDrawingOrderStrategy;

/* loaded from: classes3.dex */
public abstract class g implements ChildrenDrawingOrderStrategy {
    public boolean a;

    public g() {
        this.a = false;
    }

    @Override // com.swmansion.rnscreens.stack.views.ChildrenDrawingOrderStrategy
    public void disable() {
        this.a = false;
    }

    @Override // com.swmansion.rnscreens.stack.views.ChildrenDrawingOrderStrategy
    public void enable() {
        this.a = true;
    }

    public g(boolean z5) {
        this.a = z5;
    }
}
