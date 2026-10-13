package dm;

import android.graphics.Point;
import com.facebook.react.uimanager.LayoutShadowNode;
import com.facebook.react.uimanager.ReactShadowNodeImpl;
import com.facebook.react.uimanager.ThemedReactContext;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class a extends LayoutShadowNode {
    @Override // com.facebook.react.uimanager.ReactShadowNodeImpl, com.facebook.react.uimanager.ReactShadowNode
    public final void addChildAt(ReactShadowNodeImpl child, int i5) {
        Intrinsics.checkNotNullParameter(child, "child");
        super.addChildAt(child, i5);
        ThemedReactContext themedContext = getThemedContext();
        Intrinsics.checkNotNullExpressionValue(themedContext, "getThemedContext(...)");
        Point a = tl.a.a(themedContext);
        child.setStyleWidth(a.x);
        child.setStyleHeight(a.y);
    }
}
