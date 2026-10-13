package com.facebook.react.uimanager;

import com.facebook.react.common.annotations.internal.LegacyArchitectureLogLevel;
import com.facebook.react.common.annotations.internal.LegacyArchitectureLogger;
import com.facebook.react.uimanager.annotations.ReactPropertyHolder;
import com.facebook.yoga.YogaAlign;
import com.facebook.yoga.YogaBaselineFunction;
import com.facebook.yoga.YogaConfig;
import com.facebook.yoga.YogaDirection;
import com.facebook.yoga.YogaDisplay;
import com.facebook.yoga.YogaFlexDirection;
import com.facebook.yoga.YogaJustify;
import com.facebook.yoga.YogaMeasureFunction;
import com.facebook.yoga.YogaNative;
import com.facebook.yoga.YogaNode;
import com.facebook.yoga.YogaOverflow;
import com.facebook.yoga.YogaPositionType;
import com.facebook.yoga.YogaValue;
import com.facebook.yoga.YogaWrap;
import java.util.ArrayList;
import java.util.Arrays;
import kotlin.jvm.internal.Intrinsics;
import s4.h;
import ys.d;

@ReactPropertyHolder
@Deprecated(since = "This class is part of Legacy Architecture and will be removed in a future release")
/* loaded from: classes3.dex */
public class ReactShadowNodeImpl implements ReactShadowNode<ReactShadowNodeImpl> {
    private static final YogaConfig sYogaConfig;
    private ArrayList<ReactShadowNodeImpl> mChildren;
    private Integer mHeightMeasureSpec;
    private boolean mIsLayoutOnly;
    private ReactShadowNodeImpl mLayoutParent;
    private ArrayList<ReactShadowNodeImpl> mNativeChildren;
    private ReactShadowNodeImpl mNativeParent;
    private final float[] mPadding;
    private ReactShadowNodeImpl mParent;
    private int mReactTag;
    private int mRootTag;
    private int mScreenHeight;
    private int mScreenWidth;
    private int mScreenX;
    private int mScreenY;
    private boolean mShouldNotifyOnLayout;
    private ThemedReactContext mThemedContext;
    private String mViewClassName;
    private Integer mWidthMeasureSpec;
    private YogaNode mYogaNode;
    private boolean mNodeUpdated = true;
    private int mTotalNativeChildren = 0;
    private final boolean[] mPaddingIsPercent = new boolean[9];
    private final Spacing mDefaultPadding = new Spacing(0.0f);

    static {
        long jni_YGConfigNewJNI = YogaNative.jni_YGConfigNewJNI();
        nb.a aVar = new nb.a();
        aVar.a = jni_YGConfigNewJNI;
        if (jni_YGConfigNewJNI == 0) {
            throw new IllegalStateException("Failed to allocate native memory");
        }
        sYogaConfig = aVar;
        YogaNative.jni_YGConfigSetPointScaleFactorJNI(jni_YGConfigNewJNI, 0.0f);
        nb.b errata = nb.b.ALL;
        Intrinsics.checkNotNullParameter(errata, "errata");
        YogaNative.jni_YGConfigSetErrataJNI(aVar.a, Integer.MAX_VALUE);
        LegacyArchitectureLogger.assertLegacyArchitecture("ReactShadowNodeImpl", LegacyArchitectureLogLevel.ERROR);
    }

    public ReactShadowNodeImpl() {
        float[] fArr = new float[9];
        this.mPadding = fArr;
        if (isVirtual()) {
            this.mYogaNode = null;
            return;
        }
        YogaConfig config = sYogaConfig;
        Intrinsics.checkNotNullParameter(config, "config");
        Intrinsics.checkNotNullParameter(config, "config");
        nb.c cVar = new nb.c(YogaNative.jni_YGNodeNewWithConfigJNI(((nb.a) config).a));
        cVar.f5168e = config;
        this.mYogaNode = cVar;
        Arrays.fill(fArr, Float.NaN);
    }

    private void getHierarchyInfoWithIndentation(StringBuilder sb2, int i5) {
        for (int i6 = 0; i6 < i5; i6++) {
            sb2.append("  ");
        }
        sb2.append("<");
        sb2.append(getClass().getSimpleName());
        sb2.append(" view='");
        sb2.append(getViewClass());
        sb2.append("' tag=");
        sb2.append(getReactTag());
        if (this.mYogaNode != null) {
            sb2.append(" layout='x:");
            sb2.append(getScreenX());
            sb2.append(" y:");
            sb2.append(getScreenY());
            sb2.append(" w:");
            sb2.append(getLayoutWidth());
            sb2.append(" h:");
            sb2.append(getLayoutHeight());
            sb2.append("'");
        } else {
            sb2.append("(virtual node)");
        }
        sb2.append(">\n");
        if (getChildCount() == 0) {
            return;
        }
        for (int i10 = 0; i10 < getChildCount(); i10++) {
            getChildAt(i10).getHierarchyInfoWithIndentation(sb2, i5 + 1);
        }
    }

    private int getTotalNativeNodeContributionToParent() {
        return 0;
    }

    private void updateNativeChildrenCountInParent(int i5) {
    }

    /* JADX WARN: Removed duplicated region for block: B:22:0x0097  */
    /* JADX WARN: Removed duplicated region for block: B:24:0x00a5  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private void updatePadding() {
        for (int i5 = 0; i5 <= 8; i5++) {
            if (i5 == 0 || i5 == 2 || i5 == 4 || i5 == 5) {
                if (d.Q(this.mPadding[i5]) && d.Q(this.mPadding[6]) && d.Q(this.mPadding[8])) {
                    this.mYogaNode.d0(k0.d.a(i5), this.mDefaultPadding.getRaw(i5));
                }
                if (this.mPaddingIsPercent[i5]) {
                    this.mYogaNode.e0(k0.d.a(i5), this.mPadding[i5]);
                } else {
                    this.mYogaNode.d0(k0.d.a(i5), this.mPadding[i5]);
                }
            } else if (i5 == 1 || i5 == 3) {
                if (d.Q(this.mPadding[i5]) && d.Q(this.mPadding[7]) && d.Q(this.mPadding[8])) {
                    this.mYogaNode.d0(k0.d.a(i5), this.mDefaultPadding.getRaw(i5));
                }
                if (this.mPaddingIsPercent[i5]) {
                }
            } else {
                if (d.Q(this.mPadding[i5])) {
                    this.mYogaNode.d0(k0.d.a(i5), this.mDefaultPadding.getRaw(i5));
                }
                if (this.mPaddingIsPercent[i5]) {
                }
            }
        }
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public void calculateLayout() {
        calculateLayout(Float.NaN, Float.NaN);
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public Iterable<? extends ReactShadowNode> calculateLayoutOnChildren() {
        if (isVirtualAnchor()) {
            return null;
        }
        return this.mChildren;
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public void dirty() {
        if (!isVirtual()) {
            this.mYogaNode.c();
        } else if (getParent() != null) {
            getParent().dirty();
        }
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public void dispatchUpdates(float f2, float f10, UIViewOperationQueue uIViewOperationQueue, NativeViewHierarchyOptimizer nativeViewHierarchyOptimizer) {
        if (this.mNodeUpdated) {
            onCollectExtraUpdates(uIViewOperationQueue);
        }
        if (hasNewLayout()) {
            float layoutX = getLayoutX();
            float layoutY = getLayoutY();
            float f11 = f2 + layoutX;
            int round = Math.round(f11);
            float f12 = f10 + layoutY;
            int round2 = Math.round(f12);
            int round3 = Math.round(getLayoutWidth() + f11);
            int round4 = Math.round(getLayoutHeight() + f12);
            int round5 = Math.round(layoutX);
            int round6 = Math.round(layoutY);
            this.mScreenX = round5;
            this.mScreenY = round6;
            this.mScreenWidth = round3 - round;
            this.mScreenHeight = round4 - round2;
        }
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public boolean dispatchUpdatesWillChangeLayout(float f2, float f10) {
        if (!hasNewLayout()) {
            return false;
        }
        float layoutX = getLayoutX();
        float layoutY = getLayoutY();
        float f11 = f2 + layoutX;
        int round = Math.round(f11);
        float f12 = f10 + layoutY;
        int round2 = Math.round(f12);
        return (Math.round(layoutX) == this.mScreenX && Math.round(layoutY) == this.mScreenY && Math.round(getLayoutWidth() + f11) - round == this.mScreenWidth && Math.round(getLayoutHeight() + f12) - round2 == this.mScreenHeight) ? false : true;
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public void dispose() {
        YogaNode yogaNode = this.mYogaNode;
        if (yogaNode != null) {
            yogaNode.t();
        }
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public final int getChildCount() {
        ArrayList<ReactShadowNodeImpl> arrayList = this.mChildren;
        if (arrayList == null) {
            return 0;
        }
        return arrayList.size();
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public float getFlex() {
        return this.mYogaNode.d();
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public Integer getHeightMeasureSpec() {
        return this.mHeightMeasureSpec;
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public String getHierarchyInfo() {
        StringBuilder sb2 = new StringBuilder();
        getHierarchyInfoWithIndentation(sb2, 0);
        return sb2.toString();
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public final YogaDirection getLayoutDirection() {
        return this.mYogaNode.f();
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public final float getLayoutHeight() {
        return this.mYogaNode.g();
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public final float getLayoutWidth() {
        return this.mYogaNode.j();
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public final float getLayoutX() {
        return this.mYogaNode.k();
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public final float getLayoutY() {
        return this.mYogaNode.l();
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public final int getNativeChildCount() {
        ArrayList<ReactShadowNodeImpl> arrayList = this.mNativeChildren;
        if (arrayList == null) {
            return 0;
        }
        return arrayList.size();
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public final float getPadding(int i5) {
        return this.mYogaNode.h(k0.d.a(i5));
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public final int getReactTag() {
        return this.mReactTag;
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public final int getRootTag() {
        io.sentry.config.a.d(this.mRootTag != 0);
        return this.mRootTag;
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public int getScreenHeight() {
        return this.mScreenHeight;
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public int getScreenWidth() {
        return this.mScreenWidth;
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public int getScreenX() {
        return this.mScreenX;
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public int getScreenY() {
        return this.mScreenY;
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public final YogaValue getStyleHeight() {
        return this.mYogaNode.e();
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public final YogaValue getStylePadding(int i5) {
        return this.mYogaNode.m(k0.d.a(i5));
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public final YogaValue getStyleWidth() {
        return this.mYogaNode.n();
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public final ThemedReactContext getThemedContext() {
        ThemedReactContext themedReactContext = this.mThemedContext;
        io.sentry.config.a.f(themedReactContext);
        return themedReactContext;
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public final int getTotalNativeChildren() {
        return this.mTotalNativeChildren;
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public final String getViewClass() {
        String str = this.mViewClassName;
        io.sentry.config.a.f(str);
        return str;
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public Integer getWidthMeasureSpec() {
        return this.mWidthMeasureSpec;
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public final boolean hasNewLayout() {
        YogaNode yogaNode = this.mYogaNode;
        return yogaNode != null && yogaNode.o();
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public final boolean hasUnseenUpdates() {
        return this.mNodeUpdated;
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public final boolean hasUpdates() {
        return this.mNodeUpdated || hasNewLayout() || isDirty();
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public boolean hoistNativeChildren() {
        return false;
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public final boolean isDirty() {
        YogaNode yogaNode = this.mYogaNode;
        return yogaNode != null && yogaNode.p();
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public final boolean isLayoutOnly() {
        return this.mIsLayoutOnly;
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public boolean isMeasureDefined() {
        return this.mYogaNode.q();
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public boolean isVirtual() {
        return false;
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public boolean isVirtualAnchor() {
        return false;
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public boolean isYogaLeafNode() {
        return isMeasureDefined();
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public final void markLayoutSeen() {
        YogaNode yogaNode = this.mYogaNode;
        if (yogaNode != null) {
            yogaNode.r();
        }
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public final void markUpdateSeen() {
        this.mNodeUpdated = false;
        if (hasNewLayout()) {
            markLayoutSeen();
        }
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public void markUpdated() {
        if (this.mNodeUpdated) {
            return;
        }
        this.mNodeUpdated = true;
        ReactShadowNodeImpl parent = getParent();
        if (parent != null) {
            parent.markUpdated();
        }
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public void onAfterUpdateTransaction() {
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public void onBeforeLayout(NativeViewHierarchyOptimizer nativeViewHierarchyOptimizer) {
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public void onCollectExtraUpdates(UIViewOperationQueue uIViewOperationQueue) {
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public final void removeAllNativeChildren() {
        ArrayList<ReactShadowNodeImpl> arrayList = this.mNativeChildren;
        if (arrayList != null) {
            for (int size = arrayList.size() - 1; size >= 0; size--) {
                this.mNativeChildren.get(size).mNativeParent = null;
            }
            this.mNativeChildren.clear();
        }
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public void removeAndDisposeAllChildren() {
        if (getChildCount() == 0) {
            return;
        }
        int i5 = 0;
        for (int childCount = getChildCount() - 1; childCount >= 0; childCount--) {
            if (this.mYogaNode != null && !isYogaLeafNode()) {
                this.mYogaNode.s(childCount);
            }
            ReactShadowNodeImpl childAt = getChildAt(childCount);
            childAt.mParent = null;
            i5 += childAt.getTotalNativeNodeContributionToParent();
            childAt.dispose();
        }
        ArrayList<ReactShadowNodeImpl> arrayList = this.mChildren;
        io.sentry.config.a.f(arrayList);
        arrayList.clear();
        markUpdated();
        this.mTotalNativeChildren -= i5;
        updateNativeChildrenCountInParent(-i5);
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public void setAlignContent(YogaAlign yogaAlign) {
        this.mYogaNode.u(yogaAlign);
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public void setAlignItems(YogaAlign yogaAlign) {
        this.mYogaNode.v(yogaAlign);
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public void setAlignSelf(YogaAlign yogaAlign) {
        this.mYogaNode.w(yogaAlign);
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public void setBaselineFunction(YogaBaselineFunction yogaBaselineFunction) {
        this.mYogaNode.z(yogaBaselineFunction);
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public void setBorder(int i5, float f2) {
        this.mYogaNode.A(k0.d.a(i5), f2);
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public void setColumnGap(float f2) {
        this.mYogaNode.K(f2, 1);
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public void setColumnGapPercent(float f2) {
        this.mYogaNode.L(f2, 1);
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public void setDefaultPadding(int i5, float f2) {
        this.mDefaultPadding.set(i5, f2);
        updatePadding();
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public void setDisplay(YogaDisplay yogaDisplay) {
        this.mYogaNode.C(yogaDisplay);
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public void setFlex(float f2) {
        this.mYogaNode.D(f2);
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public void setFlexBasis(float f2) {
        this.mYogaNode.E(f2);
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public void setFlexBasisAuto() {
        this.mYogaNode.F();
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public void setFlexBasisPercent(float f2) {
        this.mYogaNode.G(f2);
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public void setFlexDirection(YogaFlexDirection yogaFlexDirection) {
        this.mYogaNode.H(yogaFlexDirection);
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public void setFlexGrow(float f2) {
        this.mYogaNode.I(f2);
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public void setFlexShrink(float f2) {
        this.mYogaNode.J(f2);
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public void setFlexWrap(YogaWrap yogaWrap) {
        this.mYogaNode.l0(yogaWrap);
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public void setGap(float f2) {
        this.mYogaNode.K(f2, 3);
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public void setGapPercent(float f2) {
        this.mYogaNode.K(f2, 3);
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public final void setIsLayoutOnly(boolean z5) {
        io.sentry.config.a.e(getParent() == null, "Must remove from no opt parent first");
        io.sentry.config.a.e(this.mNativeParent == null, "Must remove from native parent first");
        io.sentry.config.a.e(getNativeChildCount() == 0, "Must remove all native children first");
        this.mIsLayoutOnly = z5;
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public void setJustifyContent(YogaJustify yogaJustify) {
        this.mYogaNode.P(yogaJustify);
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public void setLayoutDirection(YogaDirection yogaDirection) {
        this.mYogaNode.B(yogaDirection);
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public void setLocalData(Object obj) {
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public void setMargin(int i5, float f2) {
        this.mYogaNode.Q(k0.d.a(i5), f2);
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public void setMarginAuto(int i5) {
        this.mYogaNode.R(k0.d.a(i5));
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public void setMarginPercent(int i5, float f2) {
        this.mYogaNode.S(k0.d.a(i5), f2);
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public void setMeasureFunction(YogaMeasureFunction yogaMeasureFunction) {
        this.mYogaNode.X(yogaMeasureFunction);
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public void setMeasureSpecs(int i5, int i6) {
        this.mWidthMeasureSpec = Integer.valueOf(i5);
        this.mHeightMeasureSpec = Integer.valueOf(i6);
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public void setOverflow(YogaOverflow yogaOverflow) {
        this.mYogaNode.c0(yogaOverflow);
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public void setPadding(int i5, float f2) {
        this.mPadding[i5] = f2;
        this.mPaddingIsPercent[i5] = false;
        updatePadding();
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    /* renamed from: setPaddingPercent */
    public void mo993setPaddingPercent(int i5, float f2) {
        this.mPadding[i5] = f2;
        this.mPaddingIsPercent[i5] = !d.Q(f2);
        updatePadding();
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public void setPosition(int i5, float f2) {
        this.mYogaNode.f0(k0.d.a(i5), f2);
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public void setPositionPercent(int i5, float f2) {
        this.mYogaNode.g0(k0.d.a(i5), f2);
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public void setPositionType(YogaPositionType yogaPositionType) {
        this.mYogaNode.h0(yogaPositionType);
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public void setReactTag(int i5) {
        this.mReactTag = i5;
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public final void setRootTag(int i5) {
        this.mRootTag = i5;
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public void setRowGap(float f2) {
        this.mYogaNode.K(f2, 2);
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public void setRowGapPercent(float f2) {
        this.mYogaNode.L(f2, 2);
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public void setShouldNotifyOnLayout(boolean z5) {
        this.mShouldNotifyOnLayout = z5;
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public void setStyleAspectRatio(float f2) {
        this.mYogaNode.y(f2);
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public void setStyleHeight(float f2) {
        this.mYogaNode.M(f2);
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public void setStyleHeightAuto() {
        this.mYogaNode.N();
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public void setStyleHeightPercent(float f2) {
        this.mYogaNode.O(f2);
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public void setStyleMaxHeight(float f2) {
        this.mYogaNode.T(f2);
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public void setStyleMaxHeightPercent(float f2) {
        this.mYogaNode.U(f2);
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public void setStyleMaxWidth(float f2) {
        this.mYogaNode.V(f2);
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public void setStyleMaxWidthPercent(float f2) {
        this.mYogaNode.W(f2);
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public void setStyleMinHeight(float f2) {
        this.mYogaNode.Y(f2);
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public void setStyleMinHeightPercent(float f2) {
        this.mYogaNode.Z(f2);
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public void setStyleMinWidth(float f2) {
        this.mYogaNode.a0(f2);
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public void setStyleMinWidthPercent(float f2) {
        this.mYogaNode.b0(f2);
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public void setStyleWidth(float f2) {
        this.mYogaNode.i0(f2);
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public void setStyleWidthAuto() {
        this.mYogaNode.j0();
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public void setStyleWidthPercent(float f2) {
        this.mYogaNode.k0(f2);
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public void setThemedContext(ThemedReactContext themedReactContext) {
        this.mThemedContext = themedReactContext;
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public final void setViewClassName(String str) {
        this.mViewClassName = str;
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public final boolean shouldNotifyOnLayout() {
        return this.mShouldNotifyOnLayout;
    }

    public String toString() {
        return "[" + this.mViewClassName + " " + getReactTag() + "]";
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public final void updateProperties(ReactStylesDiffMap reactStylesDiffMap) {
        ViewManagerPropertyUpdater.updateProps(this, reactStylesDiffMap);
        onAfterUpdateTransaction();
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public void addChildAt(ReactShadowNodeImpl reactShadowNodeImpl, int i5) {
        if (this.mChildren == null) {
            this.mChildren = new ArrayList<>(4);
        }
        this.mChildren.add(i5, reactShadowNodeImpl);
        reactShadowNodeImpl.mParent = this;
        if (this.mYogaNode != null && !isYogaLeafNode()) {
            YogaNode yogaNode = reactShadowNodeImpl.mYogaNode;
            if (yogaNode == null) {
                throw new RuntimeException("Cannot add a child that doesn't have a YogaNode to a parent without a measure function! (Trying to add a '" + reactShadowNodeImpl.toString() + "' to a '" + toString() + "')");
            }
            this.mYogaNode.a(yogaNode, i5);
        }
        markUpdated();
        int totalNativeNodeContributionToParent = reactShadowNodeImpl.getTotalNativeNodeContributionToParent();
        this.mTotalNativeChildren += totalNativeNodeContributionToParent;
        updateNativeChildrenCountInParent(totalNativeNodeContributionToParent);
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public final void addNativeChildAt(ReactShadowNodeImpl reactShadowNodeImpl, int i5) {
        if (this.mNativeChildren == null) {
            this.mNativeChildren = new ArrayList<>(4);
        }
        this.mNativeChildren.add(i5, reactShadowNodeImpl);
        reactShadowNodeImpl.mNativeParent = this;
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public void calculateLayout(float f2, float f10) {
        this.mYogaNode.b(f2, f10);
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public final ReactShadowNodeImpl getChildAt(int i5) {
        ArrayList<ReactShadowNodeImpl> arrayList = this.mChildren;
        if (arrayList != null) {
            return arrayList.get(i5);
        }
        throw new ArrayIndexOutOfBoundsException(h.e(i5, "Index ", " out of bounds: node has no children"));
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public final ReactShadowNodeImpl getLayoutParent() {
        ReactShadowNodeImpl reactShadowNodeImpl = this.mLayoutParent;
        return reactShadowNodeImpl != null ? reactShadowNodeImpl : getNativeParent();
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public final int getNativeOffsetForChild(ReactShadowNodeImpl reactShadowNodeImpl) {
        int i5 = 0;
        for (int i6 = 0; i6 < getChildCount(); i6++) {
            ReactShadowNodeImpl childAt = getChildAt(i6);
            if (reactShadowNodeImpl == childAt) {
                return i5;
            }
            i5 += childAt.getTotalNativeNodeContributionToParent();
        }
        throw new RuntimeException("Child " + reactShadowNodeImpl.getReactTag() + " was not a child of " + this.mReactTag);
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public final ReactShadowNodeImpl getNativeParent() {
        return this.mNativeParent;
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public final ReactShadowNodeImpl getParent() {
        return this.mParent;
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public final int indexOf(ReactShadowNodeImpl reactShadowNodeImpl) {
        ArrayList<ReactShadowNodeImpl> arrayList = this.mChildren;
        if (arrayList == null) {
            return -1;
        }
        return arrayList.indexOf(reactShadowNodeImpl);
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public final int indexOfNativeChild(ReactShadowNodeImpl reactShadowNodeImpl) {
        io.sentry.config.a.f(this.mNativeChildren);
        return this.mNativeChildren.indexOf(reactShadowNodeImpl);
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public boolean isDescendantOf(ReactShadowNodeImpl reactShadowNodeImpl) {
        for (ReactShadowNodeImpl parent = getParent(); parent != null; parent = parent.getParent()) {
            if (parent == reactShadowNodeImpl) {
                return true;
            }
        }
        return false;
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public ReactShadowNodeImpl removeChildAt(int i5) {
        ArrayList<ReactShadowNodeImpl> arrayList = this.mChildren;
        if (arrayList == null) {
            throw new ArrayIndexOutOfBoundsException(h.e(i5, "Index ", " out of bounds: node has no children"));
        }
        ReactShadowNodeImpl remove = arrayList.remove(i5);
        remove.mParent = null;
        if (this.mYogaNode != null && !isYogaLeafNode()) {
            this.mYogaNode.s(i5);
        }
        markUpdated();
        int totalNativeNodeContributionToParent = remove.getTotalNativeNodeContributionToParent();
        this.mTotalNativeChildren -= totalNativeNodeContributionToParent;
        updateNativeChildrenCountInParent(-totalNativeNodeContributionToParent);
        return remove;
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public final ReactShadowNodeImpl removeNativeChildAt(int i5) {
        io.sentry.config.a.f(this.mNativeChildren);
        ReactShadowNodeImpl remove = this.mNativeChildren.remove(i5);
        remove.mNativeParent = null;
        return remove;
    }

    @Override // com.facebook.react.uimanager.ReactShadowNode
    public final void setLayoutParent(ReactShadowNodeImpl reactShadowNodeImpl) {
        this.mLayoutParent = reactShadowNodeImpl;
    }
}
