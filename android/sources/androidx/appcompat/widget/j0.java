package androidx.appcompat.widget;

import android.view.View;
import android.view.ViewTreeObserver;
import com.discord.zoom_layout.ZoomLayoutFixed;
import com.otaliastudios.zoom.ZoomEngine;
import java.util.ArrayList;
import java.util.Iterator;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class j0 implements ViewTreeObserver.OnGlobalLayoutListener {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f1015d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f1016e;

    public /* synthetic */ j0(int i5, Object obj) {
        this.f1015d = i5;
        this.f1016e = obj;
    }

    @Override // android.view.ViewTreeObserver.OnGlobalLayoutListener
    public final void onGlobalLayout() {
        switch (this.f1015d) {
            case 0:
                s0 s0Var = (s0) this.f1016e;
                if (!s0Var.getInternalPopup().isShowing()) {
                    s0Var.f1099x.k(s0Var.getTextDirection(), s0Var.getTextAlignment());
                }
                ViewTreeObserver viewTreeObserver = s0Var.getViewTreeObserver();
                if (viewTreeObserver != null) {
                    viewTreeObserver.removeOnGlobalLayoutListener(this);
                    return;
                }
                return;
            case 1:
                p0 p0Var = (p0) this.f1016e;
                s0 s0Var2 = p0Var.f1068d0;
                p0Var.getClass();
                if (!s0Var2.isAttachedToWindow() || !s0Var2.getGlobalVisibleRect(p0Var.f1066b0)) {
                    p0Var.dismiss();
                    return;
                } else {
                    p0Var.p();
                    p0Var.show();
                    return;
                }
            case 2:
                ZoomEngine zoomEngine = (ZoomEngine) this.f1016e;
                ZoomLayoutFixed zoomLayoutFixed = zoomEngine.f6622c;
                if (zoomLayoutFixed == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("container");
                    throw null;
                }
                float width = zoomLayoutFixed.getWidth();
                ZoomLayoutFixed zoomLayoutFixed2 = zoomEngine.f6622c;
                if (zoomLayoutFixed2 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("container");
                    throw null;
                }
                float height = zoomLayoutFixed2.getHeight();
                hl.b bVar = zoomEngine.f6628i;
                bVar.getClass();
                if (width <= 0.0f || height <= 0.0f) {
                    return;
                }
                if (width == bVar.j && height == bVar.k) {
                    return;
                }
                bVar.j = width;
                bVar.k = height;
                bVar.g(bVar.f(), false);
                return;
            case 3:
                n.d dVar = (n.d) this.f1016e;
                ArrayList arrayList = dVar.E;
                if (!dVar.isShowing() || arrayList.size() <= 0 || ((n.c) arrayList.get(0)).a.V) {
                    return;
                }
                View view = dVar.L;
                if (view == null || !view.isShown()) {
                    dVar.dismiss();
                    return;
                }
                Iterator it = arrayList.iterator();
                while (it.hasNext()) {
                    ((n.c) it.next()).a.show();
                }
                return;
            default:
                n.a0 a0Var = (n.a0) this.f1016e;
                l2 l2Var = a0Var.E;
                if (!a0Var.isShowing() || l2Var.V) {
                    return;
                }
                View view2 = a0Var.J;
                if (view2 == null || !view2.isShown()) {
                    a0Var.dismiss();
                    return;
                } else {
                    l2Var.show();
                    return;
                }
        }
    }

    public j0(ZoomEngine this$0) {
        this.f1015d = 2;
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        this.f1016e = this$0;
    }
}
