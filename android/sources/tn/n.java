package tn;

import com.facebook.react.bridge.Dynamic;
import com.facebook.react.bridge.ReadableType;
import com.facebook.react.uimanager.LayoutShadowNode;
import com.facebook.react.uimanager.NativeViewHierarchyOptimizer;
import com.facebook.react.uimanager.PixelUtil;
import com.facebook.react.uimanager.ViewProps;
import com.facebook.react.uimanager.annotations.ReactPropGroup;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public final class n extends LayoutShadowNode {
    public k a;

    /* renamed from: b, reason: collision with root package name */
    public final float[] f18683b;

    /* renamed from: c, reason: collision with root package name */
    public final float[] f18684c;

    /* renamed from: d, reason: collision with root package name */
    public boolean f18685d;

    public n() {
        int[] iArr = ViewProps.PADDING_MARGIN_SPACING_TYPES;
        this.f18683b = new float[iArr.length];
        this.f18684c = new float[iArr.length];
        int length = iArr.length;
        for (int i5 = 0; i5 < length; i5++) {
            this.f18683b[i5] = Float.NaN;
            this.f18684c[i5] = Float.NaN;
        }
    }

    public static float a(i iVar, float f2, float f10) {
        return iVar == i.f18671d ? f10 : iVar == i.f18673i ? Math.max(f2, f10) : f2 + f10;
    }

    public final void b() {
        k kVar = this.a;
        if (kVar == null) {
            return;
        }
        m mVar = kVar.f18678b;
        m mVar2 = m.f18680d;
        float[] fArr = mVar == mVar2 ? this.f18683b : this.f18684c;
        float f2 = fArr[8];
        if (Float.isNaN(f2)) {
            f2 = 0.0f;
        }
        float f10 = f2;
        float f11 = f10;
        float f12 = f11;
        float f13 = fArr[7];
        if (!Float.isNaN(f13)) {
            f2 = f13;
            f11 = f2;
        }
        float f14 = fArr[6];
        if (!Float.isNaN(f14)) {
            f10 = f14;
            f12 = f10;
        }
        float f15 = fArr[1];
        if (!Float.isNaN(f15)) {
            f2 = f15;
        }
        float f16 = fArr[2];
        if (!Float.isNaN(f16)) {
            f10 = f16;
        }
        float f17 = fArr[3];
        if (!Float.isNaN(f17)) {
            f11 = f17;
        }
        float f18 = fArr[0];
        if (!Float.isNaN(f18)) {
            f12 = f18;
        }
        float pixelFromDIP = PixelUtil.toPixelFromDIP(f2);
        float pixelFromDIP2 = PixelUtil.toPixelFromDIP(f10);
        float pixelFromDIP3 = PixelUtil.toPixelFromDIP(f11);
        float pixelFromDIP4 = PixelUtil.toPixelFromDIP(f12);
        j jVar = kVar.f18679c;
        i iVar = jVar.f18677d;
        i iVar2 = jVar.f18676c;
        i iVar3 = jVar.f18675b;
        i iVar4 = jVar.a;
        a aVar = kVar.a;
        if (mVar == mVar2) {
            super.setPadding(1, a(iVar4, aVar.a, pixelFromDIP));
            super.setPadding(2, a(iVar3, aVar.f18656b, pixelFromDIP2));
            super.setPadding(3, a(iVar2, aVar.f18657c, pixelFromDIP3));
            super.setPadding(0, a(iVar, aVar.f18658d, pixelFromDIP4));
            return;
        }
        super.setMargin(1, a(iVar4, aVar.a, pixelFromDIP));
        super.setMargin(2, a(iVar3, aVar.f18656b, pixelFromDIP2));
        super.setMargin(3, a(iVar2, aVar.f18657c, pixelFromDIP3));
        super.setMargin(0, a(iVar, aVar.f18658d, pixelFromDIP4));
    }

    @Override // com.facebook.react.uimanager.ReactShadowNodeImpl, com.facebook.react.uimanager.ReactShadowNode
    public final void onBeforeLayout(NativeViewHierarchyOptimizer nativeViewHierarchyOptimizer) {
        Intrinsics.checkNotNullParameter(nativeViewHierarchyOptimizer, "nativeViewHierarchyOptimizer");
        if (this.f18685d) {
            this.f18685d = false;
            b();
        }
    }

    @Override // com.facebook.react.uimanager.ReactShadowNodeImpl, com.facebook.react.uimanager.ReactShadowNode
    public final void setLocalData(Object data) {
        m mVar;
        Intrinsics.checkNotNullParameter(data, "data");
        if (data instanceof k) {
            k kVar = this.a;
            if (kVar != null && (mVar = kVar.f18678b) != ((k) data).f18678b) {
                if (mVar == m.f18680d) {
                    float[] fArr = this.f18683b;
                    super.setPadding(1, fArr[1]);
                    super.setPadding(2, fArr[2]);
                    super.setPadding(3, fArr[3]);
                    super.setPadding(0, fArr[0]);
                } else {
                    float[] fArr2 = this.f18684c;
                    super.setMargin(1, fArr2[1]);
                    super.setMargin(2, fArr2[2]);
                    super.setMargin(3, fArr2[3]);
                    super.setMargin(0, fArr2[0]);
                }
                markUpdated();
            }
            this.a = (k) data;
            this.f18685d = false;
            b();
        }
    }

    @Override // com.facebook.react.uimanager.LayoutShadowNode
    @ReactPropGroup(names = {ViewProps.MARGIN, ViewProps.MARGIN_VERTICAL, ViewProps.MARGIN_HORIZONTAL, ViewProps.MARGIN_START, ViewProps.MARGIN_END, ViewProps.MARGIN_TOP, ViewProps.MARGIN_BOTTOM, ViewProps.MARGIN_LEFT, ViewProps.MARGIN_RIGHT})
    public void setMargins(int i5, @NotNull Dynamic margin) {
        Intrinsics.checkNotNullParameter(margin, "margin");
        this.f18684c[ViewProps.PADDING_MARGIN_SPACING_TYPES[i5]] = margin.getType() == ReadableType.Number ? (float) margin.asDouble() : Float.NaN;
        super.setMargins(i5, margin);
        this.f18685d = true;
    }

    @Override // com.facebook.react.uimanager.LayoutShadowNode
    @ReactPropGroup(names = {ViewProps.PADDING, ViewProps.PADDING_VERTICAL, ViewProps.PADDING_HORIZONTAL, ViewProps.PADDING_START, ViewProps.PADDING_END, ViewProps.PADDING_TOP, ViewProps.PADDING_BOTTOM, ViewProps.PADDING_LEFT, ViewProps.PADDING_RIGHT})
    public void setPaddings(int i5, @NotNull Dynamic padding) {
        Intrinsics.checkNotNullParameter(padding, "padding");
        this.f18683b[ViewProps.PADDING_MARGIN_SPACING_TYPES[i5]] = padding.getType() == ReadableType.Number ? (float) padding.asDouble() : Float.NaN;
        super.setPaddings(i5, padding);
        this.f18685d = true;
    }
}
