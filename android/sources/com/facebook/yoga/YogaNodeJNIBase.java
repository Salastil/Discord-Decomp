package com.facebook.yoga;

import f0.e;
import java.util.ArrayList;
import java.util.Iterator;
import k0.d;
import kotlin.jvm.internal.Intrinsics;
import ob.a;

@a
/* loaded from: classes3.dex */
public abstract class YogaNodeJNIBase extends YogaNode implements Cloneable {

    @a
    private float[] arr;

    /* renamed from: d, reason: collision with root package name */
    public YogaNodeJNIBase f5167d;

    /* renamed from: e, reason: collision with root package name */
    public YogaConfig f5168e;

    /* renamed from: i, reason: collision with root package name */
    public ArrayList f5169i;

    @a
    private int mLayoutDirection;

    /* renamed from: v, reason: collision with root package name */
    public YogaMeasureFunction f5170v;

    /* renamed from: w, reason: collision with root package name */
    public YogaBaselineFunction f5171w;

    /* renamed from: x, reason: collision with root package name */
    public long f5172x;

    /* renamed from: y, reason: collision with root package name */
    public boolean f5173y;

    public YogaNodeJNIBase(long j) {
        this.arr = null;
        this.mLayoutDirection = 0;
        this.f5173y = true;
        if (j == 0) {
            throw new IllegalStateException("Failed to allocate native memory");
        }
        this.f5172x = j;
    }

    public static YogaValue m0(long j) {
        YogaUnit yogaUnit;
        float intBitsToFloat = Float.intBitsToFloat((int) j);
        int i5 = (int) (j >> 32);
        switch (i5) {
            case 0:
                yogaUnit = YogaUnit.UNDEFINED;
                break;
            case 1:
                yogaUnit = YogaUnit.POINT;
                break;
            case 2:
                yogaUnit = YogaUnit.PERCENT;
                break;
            case 3:
                yogaUnit = YogaUnit.AUTO;
                break;
            case 4:
                yogaUnit = YogaUnit.MAX_CONTENT;
                break;
            case 5:
                yogaUnit = YogaUnit.FIT_CONTENT;
                break;
            case 6:
                yogaUnit = YogaUnit.STRETCH;
                break;
            default:
                throw new IllegalArgumentException(d.i(i5, "Unknown enum value: "));
        }
        Intrinsics.checkNotNullExpressionValue(yogaUnit, "fromInt(...)");
        return new YogaValue(intBitsToFloat, yogaUnit);
    }

    @a
    private final long replaceChild(YogaNodeJNIBase yogaNodeJNIBase, int i5) {
        ArrayList arrayList = this.f5169i;
        if (arrayList == null) {
            throw new IllegalStateException("Cannot replace child. YogaNode does not have children");
        }
        arrayList.remove(i5);
        this.f5169i.add(i5, yogaNodeJNIBase);
        yogaNodeJNIBase.f5167d = this;
        return yogaNodeJNIBase.f5172x;
    }

    @Override // com.facebook.yoga.YogaNode
    public final void A(int i5, float f2) {
        YogaNative.jni_YGNodeStyleSetBorderJNI(this.f5172x, e.b(i5), f2);
    }

    @Override // com.facebook.yoga.YogaNode
    public final void B(YogaDirection yogaDirection) {
        YogaNative.jni_YGNodeStyleSetDirectionJNI(this.f5172x, yogaDirection.f5138d);
    }

    @Override // com.facebook.yoga.YogaNode
    public final void C(YogaDisplay yogaDisplay) {
        YogaNative.jni_YGNodeStyleSetDisplayJNI(this.f5172x, yogaDisplay.f5142d);
    }

    @Override // com.facebook.yoga.YogaNode
    public final void D(float f2) {
        YogaNative.jni_YGNodeStyleSetFlexJNI(this.f5172x, f2);
    }

    @Override // com.facebook.yoga.YogaNode
    public final void E(float f2) {
        YogaNative.jni_YGNodeStyleSetFlexBasisJNI(this.f5172x, f2);
    }

    @Override // com.facebook.yoga.YogaNode
    public final void F() {
        YogaNative.jni_YGNodeStyleSetFlexBasisAutoJNI(this.f5172x);
    }

    @Override // com.facebook.yoga.YogaNode
    public final void G(float f2) {
        YogaNative.jni_YGNodeStyleSetFlexBasisPercentJNI(this.f5172x, f2);
    }

    @Override // com.facebook.yoga.YogaNode
    public final void H(YogaFlexDirection yogaFlexDirection) {
        YogaNative.jni_YGNodeStyleSetFlexDirectionJNI(this.f5172x, yogaFlexDirection.f5148d);
    }

    @Override // com.facebook.yoga.YogaNode
    public final void I(float f2) {
        YogaNative.jni_YGNodeStyleSetFlexGrowJNI(this.f5172x, f2);
    }

    @Override // com.facebook.yoga.YogaNode
    public final void J(float f2) {
        YogaNative.jni_YGNodeStyleSetFlexShrinkJNI(this.f5172x, f2);
    }

    @Override // com.facebook.yoga.YogaNode
    public final void K(float f2, int i5) {
        YogaNative.jni_YGNodeStyleSetGapJNI(this.f5172x, e.b(i5), f2);
    }

    @Override // com.facebook.yoga.YogaNode
    public final void L(float f2, int i5) {
        YogaNative.jni_YGNodeStyleSetGapPercentJNI(this.f5172x, e.b(i5), f2);
    }

    @Override // com.facebook.yoga.YogaNode
    public final void M(float f2) {
        YogaNative.jni_YGNodeStyleSetHeightJNI(this.f5172x, f2);
    }

    @Override // com.facebook.yoga.YogaNode
    public final void N() {
        YogaNative.jni_YGNodeStyleSetHeightAutoJNI(this.f5172x);
    }

    @Override // com.facebook.yoga.YogaNode
    public final void O(float f2) {
        YogaNative.jni_YGNodeStyleSetHeightPercentJNI(this.f5172x, f2);
    }

    @Override // com.facebook.yoga.YogaNode
    public final void P(YogaJustify yogaJustify) {
        YogaNative.jni_YGNodeStyleSetJustifyContentJNI(this.f5172x, yogaJustify.f5155d);
    }

    @Override // com.facebook.yoga.YogaNode
    public final void Q(int i5, float f2) {
        YogaNative.jni_YGNodeStyleSetMarginJNI(this.f5172x, e.b(i5), f2);
    }

    @Override // com.facebook.yoga.YogaNode
    public final void R(int i5) {
        YogaNative.jni_YGNodeStyleSetMarginAutoJNI(this.f5172x, e.b(i5));
    }

    @Override // com.facebook.yoga.YogaNode
    public final void S(int i5, float f2) {
        YogaNative.jni_YGNodeStyleSetMarginPercentJNI(this.f5172x, e.b(i5), f2);
    }

    @Override // com.facebook.yoga.YogaNode
    public final void T(float f2) {
        YogaNative.jni_YGNodeStyleSetMaxHeightJNI(this.f5172x, f2);
    }

    @Override // com.facebook.yoga.YogaNode
    public final void U(float f2) {
        YogaNative.jni_YGNodeStyleSetMaxHeightPercentJNI(this.f5172x, f2);
    }

    @Override // com.facebook.yoga.YogaNode
    public final void V(float f2) {
        YogaNative.jni_YGNodeStyleSetMaxWidthJNI(this.f5172x, f2);
    }

    @Override // com.facebook.yoga.YogaNode
    public final void W(float f2) {
        YogaNative.jni_YGNodeStyleSetMaxWidthPercentJNI(this.f5172x, f2);
    }

    @Override // com.facebook.yoga.YogaNode
    public final void X(YogaMeasureFunction yogaMeasureFunction) {
        this.f5170v = yogaMeasureFunction;
        YogaNative.jni_YGNodeSetHasMeasureFuncJNI(this.f5172x, yogaMeasureFunction != null);
    }

    @Override // com.facebook.yoga.YogaNode
    public final void Y(float f2) {
        YogaNative.jni_YGNodeStyleSetMinHeightJNI(this.f5172x, f2);
    }

    @Override // com.facebook.yoga.YogaNode
    public final void Z(float f2) {
        YogaNative.jni_YGNodeStyleSetMinHeightPercentJNI(this.f5172x, f2);
    }

    @Override // com.facebook.yoga.YogaNode
    public final void a(YogaNode yogaNode, int i5) {
        if (yogaNode instanceof YogaNodeJNIBase) {
            YogaNodeJNIBase yogaNodeJNIBase = (YogaNodeJNIBase) yogaNode;
            if (yogaNodeJNIBase.f5167d != null) {
                throw new IllegalStateException("Child already has a parent, it must be removed first.");
            }
            if (this.f5169i == null) {
                this.f5169i = new ArrayList(4);
            }
            this.f5169i.add(i5, yogaNodeJNIBase);
            yogaNodeJNIBase.f5167d = this;
            YogaNative.jni_YGNodeInsertChildJNI(this.f5172x, yogaNodeJNIBase.f5172x, i5);
        }
    }

    @Override // com.facebook.yoga.YogaNode
    public final void a0(float f2) {
        YogaNative.jni_YGNodeStyleSetMinWidthJNI(this.f5172x, f2);
    }

    @Override // com.facebook.yoga.YogaNode
    public final void b(float f2, float f10) {
        ArrayList arrayList = new ArrayList();
        arrayList.add(this);
        for (int i5 = 0; i5 < arrayList.size(); i5++) {
            ArrayList arrayList2 = ((YogaNodeJNIBase) arrayList.get(i5)).f5169i;
            if (arrayList2 != null) {
                Iterator it = arrayList2.iterator();
                while (it.hasNext()) {
                    YogaNodeJNIBase yogaNodeJNIBase = (YogaNodeJNIBase) it.next();
                    yogaNodeJNIBase.getClass();
                    arrayList.add(yogaNodeJNIBase);
                }
            }
        }
        YogaNodeJNIBase[] yogaNodeJNIBaseArr = (YogaNodeJNIBase[]) arrayList.toArray(new YogaNodeJNIBase[arrayList.size()]);
        long[] jArr = new long[yogaNodeJNIBaseArr.length];
        for (int i6 = 0; i6 < yogaNodeJNIBaseArr.length; i6++) {
            jArr[i6] = yogaNodeJNIBaseArr[i6].f5172x;
        }
        YogaNative.jni_YGNodeCalculateLayoutJNI(this.f5172x, f2, f10, jArr, yogaNodeJNIBaseArr);
    }

    @Override // com.facebook.yoga.YogaNode
    public final void b0(float f2) {
        YogaNative.jni_YGNodeStyleSetMinWidthPercentJNI(this.f5172x, f2);
    }

    @a
    public final float baseline(float f2, float f10) {
        return this.f5171w.a();
    }

    @Override // com.facebook.yoga.YogaNode
    public final void c() {
        YogaNative.jni_YGNodeMarkDirtyJNI(this.f5172x);
    }

    @Override // com.facebook.yoga.YogaNode
    public final void c0(YogaOverflow yogaOverflow) {
        YogaNative.jni_YGNodeStyleSetOverflowJNI(this.f5172x, yogaOverflow.f5178d);
    }

    @Override // com.facebook.yoga.YogaNode
    public final float d() {
        return YogaNative.jni_YGNodeStyleGetFlexJNI(this.f5172x);
    }

    @Override // com.facebook.yoga.YogaNode
    public final void d0(int i5, float f2) {
        YogaNative.jni_YGNodeStyleSetPaddingJNI(this.f5172x, e.b(i5), f2);
    }

    @Override // com.facebook.yoga.YogaNode
    public final YogaValue e() {
        return m0(YogaNative.jni_YGNodeStyleGetHeightJNI(this.f5172x));
    }

    @Override // com.facebook.yoga.YogaNode
    public final void e0(int i5, float f2) {
        YogaNative.jni_YGNodeStyleSetPaddingPercentJNI(this.f5172x, e.b(i5), f2);
    }

    @Override // com.facebook.yoga.YogaNode
    public final YogaDirection f() {
        float[] fArr = this.arr;
        int i5 = fArr != null ? (int) fArr[5] : this.mLayoutDirection;
        YogaDirection.f5133e.getClass();
        if (i5 == 0) {
            return YogaDirection.f5134i;
        }
        if (i5 == 1) {
            return YogaDirection.f5135v;
        }
        if (i5 == 2) {
            return YogaDirection.f5136w;
        }
        throw new IllegalArgumentException(d.i(i5, "Unknown enum value: "));
    }

    @Override // com.facebook.yoga.YogaNode
    public final void f0(int i5, float f2) {
        YogaNative.jni_YGNodeStyleSetPositionJNI(this.f5172x, e.b(i5), f2);
    }

    @Override // com.facebook.yoga.YogaNode
    public final float g() {
        float[] fArr = this.arr;
        if (fArr != null) {
            return fArr[2];
        }
        return 0.0f;
    }

    @Override // com.facebook.yoga.YogaNode
    public final void g0(int i5, float f2) {
        YogaNative.jni_YGNodeStyleSetPositionPercentJNI(this.f5172x, e.b(i5), f2);
    }

    @Override // com.facebook.yoga.YogaNode
    public final float h(int i5) {
        float[] fArr = this.arr;
        if (fArr == null) {
            return 0.0f;
        }
        int i6 = (int) fArr[0];
        if ((i6 & 2) != 2) {
            return 0.0f;
        }
        int i10 = (i6 & 1) != 1 ? 4 : 0;
        int i11 = 10 - i10;
        int b10 = e.b(i5);
        if (b10 == 0) {
            return this.arr[i11];
        }
        if (b10 == 1) {
            return this.arr[11 - i10];
        }
        if (b10 == 2) {
            return this.arr[12 - i10];
        }
        if (b10 == 3) {
            return this.arr[13 - i10];
        }
        if (b10 == 4) {
            return f() == YogaDirection.f5136w ? this.arr[12 - i10] : this.arr[i11];
        }
        if (b10 == 5) {
            return f() == YogaDirection.f5136w ? this.arr[i11] : this.arr[12 - i10];
        }
        throw new IllegalArgumentException("Cannot get layout paddings of multi-edge shorthands");
    }

    @Override // com.facebook.yoga.YogaNode
    public final void h0(YogaPositionType yogaPositionType) {
        YogaNative.jni_YGNodeStyleSetPositionTypeJNI(this.f5172x, yogaPositionType.f5182d);
    }

    @Override // com.facebook.yoga.YogaNode
    public final void i0(float f2) {
        YogaNative.jni_YGNodeStyleSetWidthJNI(this.f5172x, f2);
    }

    @Override // com.facebook.yoga.YogaNode
    public final float j() {
        float[] fArr = this.arr;
        if (fArr != null) {
            return fArr[1];
        }
        return 0.0f;
    }

    @Override // com.facebook.yoga.YogaNode
    public final void j0() {
        YogaNative.jni_YGNodeStyleSetWidthAutoJNI(this.f5172x);
    }

    @Override // com.facebook.yoga.YogaNode
    public final float k() {
        float[] fArr = this.arr;
        if (fArr != null) {
            return fArr[3];
        }
        return 0.0f;
    }

    @Override // com.facebook.yoga.YogaNode
    public final void k0(float f2) {
        YogaNative.jni_YGNodeStyleSetWidthPercentJNI(this.f5172x, f2);
    }

    @Override // com.facebook.yoga.YogaNode
    public final float l() {
        float[] fArr = this.arr;
        if (fArr != null) {
            return fArr[4];
        }
        return 0.0f;
    }

    @Override // com.facebook.yoga.YogaNode
    public final void l0(YogaWrap yogaWrap) {
        YogaNative.jni_YGNodeStyleSetFlexWrapJNI(this.f5172x, yogaWrap.f5197d);
    }

    @Override // com.facebook.yoga.YogaNode
    public final YogaValue m(int i5) {
        return m0(YogaNative.jni_YGNodeStyleGetPaddingJNI(this.f5172x, e.b(i5)));
    }

    @a
    public final long measure(float f2, int i5, float f10, int i6) {
        if (!q()) {
            throw new RuntimeException("Measure function isn't defined!");
        }
        YogaMeasureFunction yogaMeasureFunction = this.f5170v;
        YogaMeasureMode.a(i5);
        YogaMeasureMode.a(i6);
        return yogaMeasureFunction.a();
    }

    @Override // com.facebook.yoga.YogaNode
    public final YogaValue n() {
        return m0(YogaNative.jni_YGNodeStyleGetWidthJNI(this.f5172x));
    }

    @Override // com.facebook.yoga.YogaNode
    public final boolean o() {
        float[] fArr = this.arr;
        return fArr != null ? (((int) fArr[0]) & 16) == 16 : this.f5173y;
    }

    @Override // com.facebook.yoga.YogaNode
    public final boolean p() {
        return YogaNative.jni_YGNodeIsDirtyJNI(this.f5172x);
    }

    @Override // com.facebook.yoga.YogaNode
    public final boolean q() {
        return this.f5170v != null;
    }

    @Override // com.facebook.yoga.YogaNode
    public final void r() {
        float[] fArr = this.arr;
        if (fArr != null) {
            fArr[0] = ((int) fArr[0]) & (-17);
        }
        this.f5173y = false;
    }

    @Override // com.facebook.yoga.YogaNode
    public final YogaNodeJNIBase s(int i5) {
        ArrayList arrayList = this.f5169i;
        if (arrayList == null) {
            throw new IllegalStateException("Trying to remove a child of a YogaNode that does not have children");
        }
        YogaNodeJNIBase yogaNodeJNIBase = (YogaNodeJNIBase) arrayList.remove(i5);
        yogaNodeJNIBase.f5167d = null;
        YogaNative.jni_YGNodeRemoveChildJNI(this.f5172x, yogaNodeJNIBase.f5172x);
        return yogaNodeJNIBase;
    }

    @Override // com.facebook.yoga.YogaNode
    public final void t() {
        this.f5170v = null;
        this.f5171w = null;
        this.arr = null;
        this.f5173y = true;
        this.mLayoutDirection = 0;
        YogaNative.jni_YGNodeResetJNI(this.f5172x);
    }

    @Override // com.facebook.yoga.YogaNode
    public final void u(YogaAlign yogaAlign) {
        YogaNative.jni_YGNodeStyleSetAlignContentJNI(this.f5172x, yogaAlign.f5132d);
    }

    @Override // com.facebook.yoga.YogaNode
    public final void v(YogaAlign yogaAlign) {
        YogaNative.jni_YGNodeStyleSetAlignItemsJNI(this.f5172x, yogaAlign.f5132d);
    }

    @Override // com.facebook.yoga.YogaNode
    public final void w(YogaAlign yogaAlign) {
        YogaNative.jni_YGNodeStyleSetAlignSelfJNI(this.f5172x, yogaAlign.f5132d);
    }

    @Override // com.facebook.yoga.YogaNode
    public final void y(float f2) {
        YogaNative.jni_YGNodeStyleSetAspectRatioJNI(this.f5172x, f2);
    }

    @Override // com.facebook.yoga.YogaNode
    public final void z(YogaBaselineFunction yogaBaselineFunction) {
        this.f5171w = yogaBaselineFunction;
        YogaNative.jni_YGNodeSetHasBaselineFuncJNI(this.f5172x, yogaBaselineFunction != null);
    }

    public YogaNodeJNIBase() {
        this(YogaNative.jni_YGNodeNewJNI());
    }
}
