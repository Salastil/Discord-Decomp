package l9;

import android.content.Context;
import android.util.AttributeSet;
import com.facebook.drawee.generic.GenericDraweeHierarchyBuilder;
import m3.n;

/* loaded from: classes3.dex */
public abstract class b extends a {
    public void inflateHierarchy(Context context, AttributeSet attributeSet) {
        ta.a.D();
        GenericDraweeHierarchyBuilder W = n.W(context, attributeSet);
        setAspectRatio(W.f4485c);
        setHierarchy(W.a());
        ta.a.D();
    }
}
