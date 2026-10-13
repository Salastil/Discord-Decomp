package xm;

import android.view.View;
import android.view.ViewGroup;
import android.view.ViewParent;
import android.widget.ScrollView;
import androidx.core.view.v0;
import androidx.core.view.w0;
import androidx.core.widget.NestedScrollView;
import com.facebook.react.views.view.ReactViewGroup;
import java.util.Iterator;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class a extends ReactViewGroup {

    /* renamed from: d, reason: collision with root package name */
    public boolean f20525d;

    @Override // com.facebook.react.views.view.ReactViewGroup, android.view.ViewGroup, android.view.View
    public final void onAttachedToWindow() {
        c cVar;
        Object obj;
        super.onAttachedToWindow();
        if (this.f20525d) {
            return;
        }
        Iterator it = new v0(this).iterator();
        while (true) {
            w0 w0Var = (w0) it;
            cVar = null;
            if (!w0Var.hasNext()) {
                obj = null;
                break;
            }
            obj = w0Var.next();
            View view = (View) obj;
            if ((view instanceof ScrollView) || (view instanceof NestedScrollView)) {
                break;
            }
        }
        if (obj == null) {
            throw new IllegalStateException("[RNScreens] Failed to find supported type of ScrollView in children of ScrollViewMarker");
        }
        View view2 = (View) obj;
        Intrinsics.checkNotNull(view2, "null cannot be cast to non-null type android.view.ViewGroup");
        ViewGroup viewGroup = (ViewGroup) view2;
        ViewParent parent = getParent();
        while (true) {
            if (parent == null) {
                break;
            }
            if (parent instanceof c) {
                cVar = (c) parent;
                break;
            }
            parent = parent.getParent();
        }
        if (cVar != null) {
            cVar.c(this, viewGroup);
        }
        this.f20525d = true;
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void onDetachedFromWindow() {
        this.f20525d = false;
        super.onDetachedFromWindow();
    }
}
