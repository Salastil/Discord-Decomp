package mn;

import a5.k0;
import android.os.Build;
import android.view.View;
import android.view.ViewParent;
import android.view.ViewTreeObserver;
import androidx.core.graphics.Insets;
import androidx.core.view.WindowInsetsCompat;
import androidx.core.view.c2;
import androidx.core.view.o1;
import androidx.core.view.q1;
import androidx.core.view.r;
import androidx.core.view.r1;
import androidx.core.view.s1;
import androidx.core.view.t1;
import androidx.core.view.u1;
import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.facebook.react.uimanager.StateWrapper;
import com.facebook.react.uimanager.ViewProps;
import com.facebook.react.views.view.ReactViewGroup;
import java.lang.ref.WeakReference;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public final class d extends ReactViewGroup implements r, ViewTreeObserver.OnPreDrawListener {

    /* renamed from: d, reason: collision with root package name */
    public WeakReference f14559d;

    /* renamed from: e, reason: collision with root package name */
    public a f14560e;

    /* renamed from: i, reason: collision with root package name */
    public a f14561i;

    /* renamed from: v, reason: collision with root package name */
    public boolean f14562v;

    /* renamed from: w, reason: collision with root package name */
    public StateWrapper f14563w;

    /* renamed from: x, reason: collision with root package name */
    public e f14564x;

    /* renamed from: y, reason: collision with root package name */
    public b f14565y;

    @Override // androidx.core.view.r
    public final WindowInsetsCompat a(View view, WindowInsetsCompat insets) {
        boolean z5;
        Intrinsics.checkNotNullParameter(view, "view");
        Intrinsics.checkNotNullParameter(insets, "insets");
        c2 c2Var = insets.a;
        Insets insets2 = c2Var.f(647);
        Intrinsics.checkNotNullExpressionValue(insets2, "getInsets(...)");
        if (!Intrinsics.areEqual(insets2, this.f14561i)) {
            Intrinsics.checkNotNullParameter(insets2, "insets");
            this.f14561i = new a(insets2.a, insets2.f1512b, insets2.f1513c, insets2.f1514d);
            b bVar = this.f14565y;
            bVar.getClass();
            if (bVar == b.f14555d || bVar == b.f14556e) {
                this.f14562v = true;
            }
        }
        int i5 = Build.VERSION.SDK_INT;
        u1 t1Var = i5 >= 34 ? new t1(insets) : i5 >= 31 ? new s1(insets) : i5 >= 30 ? new r1(insets) : i5 >= 29 ? new q1(insets) : new o1(insets);
        b bVar2 = this.f14565y;
        bVar2.getClass();
        if (bVar2 == b.f14555d || bVar2 == b.f14556e) {
            Insets f2 = c2Var.f(519);
            Intrinsics.checkNotNullExpressionValue(f2, "getInsets(...)");
            Insets c6 = c(f2);
            Insets f10 = c2Var.f(IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
            Intrinsics.checkNotNullExpressionValue(f10, "getInsets(...)");
            Insets c8 = c(f10);
            boolean areEqual = Intrinsics.areEqual(c8, Insets.f1511e);
            t1Var.c(519, c6);
            t1Var.c(IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT, c8);
            z5 = areEqual;
        } else {
            z5 = false;
        }
        WindowInsetsCompat b10 = t1Var.b();
        Intrinsics.checkNotNullExpressionValue(b10, "build(...)");
        if (i5 >= 30 || !z5) {
            return b10;
        }
        WindowInsetsCompat a = b10.a.a();
        Intrinsics.checkNotNullExpressionValue(a, "consumeDisplayCutout(...)");
        return a;
    }

    public final Insets c(Insets insets) {
        e eVar = this.f14564x;
        Insets b10 = Insets.b(eVar != null ? eVar.a : false ? 0 : insets.a, eVar != null ? eVar.f14566b : false ? 0 : insets.f1512b, eVar != null ? eVar.f14567c : false ? 0 : insets.f1513c, eVar != null ? eVar.f14568d : false ? 0 : insets.f1514d);
        Intrinsics.checkNotNullExpressionValue(b10, "of(...)");
        return b10;
    }

    public final void d() {
        b bVar = this.f14565y;
        bVar.getClass();
        b bVar2 = b.f14555d;
        a i22 = a.f14551e;
        a i12 = (bVar == bVar2 || bVar == b.f14557i) ? this.f14560e : i22;
        b bVar3 = this.f14565y;
        bVar3.getClass();
        if (bVar3 == bVar2 || bVar3 == b.f14556e) {
            i22 = this.f14561i;
        }
        Intrinsics.checkNotNullParameter(i12, "i1");
        Intrinsics.checkNotNullParameter(i22, "i2");
        float max = Math.max(i12.a, i22.a);
        float max2 = Math.max(i12.f14552b, i22.f14552b);
        float max3 = Math.max(i12.f14553c, i22.f14553c);
        float max4 = Math.max(i12.f14554d, i22.f14554d);
        StateWrapper stateWrapper = getStateWrapper();
        if (stateWrapper != null) {
            WritableMap createMap = Arguments.createMap();
            createMap.putDouble(ViewProps.LEFT, k0.P(this, max));
            createMap.putDouble(ViewProps.TOP, k0.P(this, max2));
            createMap.putDouble(ViewProps.RIGHT, k0.P(this, max3));
            createMap.putDouble(ViewProps.BOTTOM, k0.P(this, max4));
            WritableMap createMap2 = Arguments.createMap();
            createMap2.putMap("insets", createMap);
            stateWrapper.updateState(createMap2);
        }
    }

    public final StateWrapper getStateWrapper() {
        return this.f14563w;
    }

    @Override // com.facebook.react.views.view.ReactViewGroup, android.view.ViewGroup, android.view.View
    public final void onAttachedToWindow() {
        getViewTreeObserver().addOnPreDrawListener(this);
        ViewParent parent = getParent();
        while (parent != null && !(parent instanceof c)) {
            parent = parent.getParent();
        }
        c cVar = parent instanceof c ? (c) parent : null;
        if (cVar == null) {
            super.onAttachedToWindow();
            return;
        }
        hn.f fVar = (hn.f) cVar;
        fVar.setOnInterfaceInsetsChangeListener(this);
        this.f14559d = new WeakReference(cVar);
        this.f14560e = fVar.getInterfaceInsets();
        d();
        super.onAttachedToWindow();
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void onDetachedFromWindow() {
        c cVar = (c) this.f14559d.get();
        if (cVar != null) {
            hn.f fVar = (hn.f) cVar;
            Intrinsics.checkNotNullParameter(this, "listener");
            if (Intrinsics.areEqual(fVar.P, this)) {
                fVar.P = null;
                fVar.H.removeOnLayoutChangeListener(fVar);
            }
        }
        getViewTreeObserver().removeOnPreDrawListener(this);
        super.onDetachedFromWindow();
    }

    @Override // android.view.ViewTreeObserver.OnPreDrawListener
    public final boolean onPreDraw() {
        boolean z5 = false;
        if (this.f14562v) {
            this.f14562v = false;
            d();
            z5 = true;
        }
        if (z5) {
            requestLayout();
        }
        return !z5;
    }

    public final void setEdges(@NotNull e edges) {
        Intrinsics.checkNotNullParameter(edges, "edges");
        this.f14564x = edges;
        requestApplyInsets();
        this.f14562v = true;
    }

    public final void setInsetType(@NotNull b insetType) {
        Intrinsics.checkNotNullParameter(insetType, "insetType");
        this.f14565y = insetType;
        requestApplyInsets();
        this.f14562v = true;
    }

    public final void setStateWrapper(StateWrapper stateWrapper) {
        this.f14563w = stateWrapper;
    }
}
