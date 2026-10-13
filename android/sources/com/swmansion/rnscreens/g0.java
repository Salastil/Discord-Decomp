package com.swmansion.rnscreens;

import android.view.View;
import android.view.ViewParent;
import com.facebook.react.bridge.WritableNativeMap;
import com.facebook.react.uimanager.StateWrapper;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public final class g0 extends f {
    public boolean E;
    public f0 F;
    public boolean G;

    /* renamed from: x, reason: collision with root package name */
    public int f6755x;

    /* renamed from: y, reason: collision with root package name */
    public int f6756y;

    public final ScreenStackHeaderConfig getConfig() {
        ViewParent parent = getParent();
        d dVar = parent instanceof d ? (d) parent : null;
        if (dVar != null) {
            return dVar.getConfig();
        }
        return null;
    }

    @NotNull
    public final f0 getType() {
        return this.F;
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void onLayout(boolean z5, int i5, int i6, int i10, int i11) {
        if (z5) {
            int i12 = i10 - i5;
            int i13 = i11 - i6;
            if (this.E) {
                float P = a5.k0.P(this, i12);
                float P2 = a5.k0.P(this, i13);
                float P3 = a5.k0.P(this, i5);
                float P4 = a5.k0.P(this, i6);
                if (Math.abs(this.f6745e - P) >= 0.9f || Math.abs(this.f6746i - P2) >= 0.9f || Math.abs(this.f6747v - P3) >= 0.9f || Math.abs(this.f6748w - P4) >= 0.9f) {
                    this.f6745e = P;
                    this.f6746i = P2;
                    this.f6747v = P3;
                    this.f6748w = P4;
                    WritableNativeMap writableNativeMap = new WritableNativeMap();
                    writableNativeMap.putDouble("frameWidth", P);
                    writableNativeMap.putDouble("frameHeight", P2);
                    writableNativeMap.putDouble("contentOffsetX", P3);
                    writableNativeMap.putDouble("contentOffsetY", P4);
                    StateWrapper stateWrapper = this.f6744d;
                    if (stateWrapper != null) {
                        stateWrapper.updateState(writableNativeMap);
                    }
                }
            }
        }
    }

    @Override // android.view.View
    public final void onMeasure(int i5, int i6) {
        if (View.MeasureSpec.getMode(i5) == 1073741824 && View.MeasureSpec.getMode(i6) == 1073741824) {
            this.f6755x = View.MeasureSpec.getSize(i5);
            this.f6756y = View.MeasureSpec.getSize(i6);
            this.E = true;
            Object parent = getParent();
            if (parent != null) {
                forceLayout();
                ((View) parent).requestLayout();
            }
        }
        setMeasuredDimension(this.f6755x, this.f6756y);
    }

    public final void setHiddenBySearchBar$react_native_screens_release(boolean z5) {
        this.G = z5;
        super.setVisibility(z5 ? 8 : 0);
    }

    public final void setType(@NotNull f0 f0Var) {
        Intrinsics.checkNotNullParameter(f0Var, "<set-?>");
        this.F = f0Var;
    }

    @Override // android.view.View
    public void setVisibility(int i5) {
        if (!this.G || i5 == 8) {
            super.setVisibility(i5);
        }
    }
}
