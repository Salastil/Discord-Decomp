package tg;

import android.content.Context;
import android.content.res.Resources;
import android.content.res.TypedArray;
import android.content.res.XmlResourceParser;
import android.graphics.Canvas;
import android.util.AttributeSet;
import android.util.Log;
import android.util.Xml;
import android.view.View;
import android.view.ViewGroup;
import android.widget.LinearLayout;
import androidx.annotation.NonNull;
import ch.q;
import com.discord.R;
import com.google.android.material.button.MaterialButton;
import com.google.android.material.button.MaterialButtonToggleGroup;
import java.io.IOException;
import java.util.ArrayList;
import java.util.TreeMap;
import lh.a0;
import lh.b0;
import lh.m;
import lh.x;
import lh.y;
import lh.z;
import org.xmlpull.v1.XmlPullParserException;
import rd.u;

/* loaded from: classes3.dex */
public abstract class c extends LinearLayout {
    public int E;
    public b0 F;
    public boolean G;

    /* renamed from: d, reason: collision with root package name */
    public final ArrayList f18365d;

    /* renamed from: e, reason: collision with root package name */
    public final ArrayList f18366e;

    /* renamed from: i, reason: collision with root package name */
    public final u f18367i;

    /* renamed from: v, reason: collision with root package name */
    public final cd.u f18368v;

    /* renamed from: w, reason: collision with root package name */
    public Integer[] f18369w;

    /* renamed from: x, reason: collision with root package name */
    public x f18370x;

    /* renamed from: y, reason: collision with root package name */
    public z f18371y;

    public c(Context context, AttributeSet attributeSet) {
        super(ph.a.a(context, attributeSet, R.attr.materialButtonToggleGroupStyle, R.style.Widget_Material3_MaterialButtonGroup), attributeSet, R.attr.materialButtonToggleGroupStyle);
        x b10;
        XmlResourceParser xml;
        int next;
        b0 b0Var;
        int next2;
        this.f18365d = new ArrayList();
        this.f18366e = new ArrayList();
        MaterialButtonToggleGroup materialButtonToggleGroup = (MaterialButtonToggleGroup) this;
        this.f18367i = new u(3, materialButtonToggleGroup);
        this.f18368v = new cd.u(5, materialButtonToggleGroup);
        this.G = true;
        Context context2 = getContext();
        TypedArray f2 = q.f(context2, attributeSet, lg.a.f13968s, R.attr.materialButtonToggleGroupStyle, R.style.Widget_Material3_MaterialButtonGroup, new int[0]);
        if (f2.hasValue(2)) {
            int resourceId = f2.getResourceId(2, 0);
            if (resourceId != 0 && context2.getResources().getResourceTypeName(resourceId).equals("xml")) {
                try {
                    xml = context2.getResources().getXml(resourceId);
                } catch (Resources.NotFoundException | IOException | XmlPullParserException unused) {
                }
                try {
                    b0Var = new b0();
                    b0Var.f13979c = new int[10][];
                    b0Var.f13980d = new u4.c[10];
                    AttributeSet asAttributeSet = Xml.asAttributeSet(xml);
                    do {
                        next2 = xml.next();
                        if (next2 == 2) {
                            break;
                        }
                    } while (next2 != 1);
                    if (next2 != 2) {
                        throw new XmlPullParserException("No start tag found");
                    }
                    if (xml.getName().equals("selector")) {
                        b0Var.a(context2, xml, asAttributeSet, context2.getTheme());
                    }
                    xml.close();
                    this.F = b0Var;
                } finally {
                }
            }
            b0Var = null;
            this.F = b0Var;
        }
        if (f2.hasValue(4)) {
            z b11 = z.b(context2, f2, 4);
            this.f18371y = b11;
            if (b11 == null) {
                y yVar = new y(m.a(context2, f2.getResourceId(4, 0), f2.getResourceId(5, 0)).a());
                this.f18371y = yVar.f14050b != 0 ? new z(yVar) : null;
            }
        }
        if (f2.hasValue(3)) {
            lh.a aVar = new lh.a(0.0f);
            int resourceId2 = f2.getResourceId(3, 0);
            if (resourceId2 == 0) {
                b10 = x.b(m.d(f2, 3, aVar));
            } else if (context2.getResources().getResourceTypeName(resourceId2).equals("xml")) {
                try {
                    xml = context2.getResources().getXml(resourceId2);
                    try {
                        b10 = new x();
                        AttributeSet asAttributeSet2 = Xml.asAttributeSet(xml);
                        do {
                            next = xml.next();
                            if (next == 2) {
                                break;
                            }
                        } while (next != 1);
                        if (next != 2) {
                            throw new XmlPullParserException("No start tag found");
                        }
                        if (xml.getName().equals("selector")) {
                            b10.d(context2, xml, asAttributeSet2, context2.getTheme());
                        }
                        xml.close();
                    } finally {
                    }
                } catch (Resources.NotFoundException | IOException | XmlPullParserException unused2) {
                    b10 = x.b(aVar);
                }
            } else {
                b10 = x.b(m.d(f2, 3, aVar));
            }
            this.f18370x = b10;
        }
        this.E = f2.getDimensionPixelSize(1, 0);
        setChildrenDrawingOrderEnabled(true);
        setEnabled(f2.getBoolean(0, true));
        f2.recycle();
    }

    private int getFirstVisibleChildIndex() {
        int childCount = getChildCount();
        for (int i5 = 0; i5 < childCount; i5++) {
            if (c(i5)) {
                return i5;
            }
        }
        return -1;
    }

    private int getLastVisibleChildIndex() {
        for (int childCount = getChildCount() - 1; childCount >= 0; childCount--) {
            if (c(childCount)) {
                return childCount;
            }
        }
        return -1;
    }

    private void setGeneratedIdIfNeeded(@NonNull MaterialButton materialButton) {
        if (materialButton.getId() == -1) {
            materialButton.setId(View.generateViewId());
        }
    }

    public final void a() {
        int i5;
        int firstVisibleChildIndex = getFirstVisibleChildIndex();
        if (firstVisibleChildIndex == -1) {
            return;
        }
        for (int i6 = firstVisibleChildIndex + 1; i6 < getChildCount(); i6++) {
            MaterialButton materialButton = (MaterialButton) getChildAt(i6);
            MaterialButton materialButton2 = (MaterialButton) getChildAt(i6 - 1);
            if (this.E <= 0) {
                i5 = Math.min(materialButton.getStrokeWidth(), materialButton2.getStrokeWidth());
                materialButton.setShouldDrawSurfaceColorStroke(true);
                materialButton2.setShouldDrawSurfaceColorStroke(true);
            } else {
                materialButton.setShouldDrawSurfaceColorStroke(false);
                materialButton2.setShouldDrawSurfaceColorStroke(false);
                i5 = 0;
            }
            ViewGroup.LayoutParams layoutParams = materialButton.getLayoutParams();
            LinearLayout.LayoutParams layoutParams2 = layoutParams instanceof LinearLayout.LayoutParams ? (LinearLayout.LayoutParams) layoutParams : new LinearLayout.LayoutParams(layoutParams.width, layoutParams.height);
            if (getOrientation() == 0) {
                layoutParams2.setMarginEnd(0);
                layoutParams2.setMarginStart(this.E - i5);
                layoutParams2.topMargin = 0;
            } else {
                layoutParams2.bottomMargin = 0;
                layoutParams2.topMargin = this.E - i5;
                layoutParams2.setMarginStart(0);
            }
            materialButton.setLayoutParams(layoutParams2);
        }
        if (getChildCount() == 0 || firstVisibleChildIndex == -1) {
            return;
        }
        LinearLayout.LayoutParams layoutParams3 = (LinearLayout.LayoutParams) ((MaterialButton) getChildAt(firstVisibleChildIndex)).getLayoutParams();
        if (getOrientation() == 1) {
            layoutParams3.topMargin = 0;
            layoutParams3.bottomMargin = 0;
        } else {
            layoutParams3.setMarginEnd(0);
            layoutParams3.setMarginStart(0);
            layoutParams3.leftMargin = 0;
            layoutParams3.rightMargin = 0;
        }
    }

    @Override // android.view.ViewGroup
    public void addView(View view, int i5, ViewGroup.LayoutParams layoutParams) {
        if (!(view instanceof MaterialButton)) {
            Log.e("MButtonGroup", "Child views must be of type MaterialButton.");
            return;
        }
        d();
        this.G = true;
        super.addView(view, i5, layoutParams);
        MaterialButton materialButton = (MaterialButton) view;
        setGeneratedIdIfNeeded(materialButton);
        materialButton.setOnPressedChangeListenerInternal(this.f18367i);
        this.f18365d.add(materialButton.getShapeAppearanceModel());
        this.f18366e.add(materialButton.getStateListShapeAppearanceModel());
        materialButton.setEnabled(isEnabled());
    }

    public final void b() {
        MaterialButton materialButton;
        MaterialButton materialButton2;
        float max;
        if (this.F == null || getChildCount() == 0) {
            return;
        }
        int firstVisibleChildIndex = getFirstVisibleChildIndex();
        int lastVisibleChildIndex = getLastVisibleChildIndex();
        int i5 = Integer.MAX_VALUE;
        for (int i6 = firstVisibleChildIndex; i6 <= lastVisibleChildIndex; i6++) {
            if (c(i6)) {
                if (c(i6) && this.F != null) {
                    MaterialButton materialButton3 = (MaterialButton) getChildAt(i6);
                    b0 b0Var = this.F;
                    int width = materialButton3.getWidth();
                    int i10 = -width;
                    for (int i11 = 0; i11 < b0Var.a; i11++) {
                        a0 a0Var = (a0) b0Var.f13980d[i11].f18811d;
                        int i12 = a0Var.a;
                        float f2 = a0Var.f13976b;
                        if (i12 == 2) {
                            max = Math.max(i10, f2);
                        } else if (i12 == 1) {
                            max = Math.max(i10, width * f2);
                        }
                        i10 = (int) max;
                    }
                    int max2 = Math.max(0, i10);
                    int i13 = i6 - 1;
                    while (true) {
                        materialButton = null;
                        if (i13 < 0) {
                            materialButton2 = null;
                            break;
                        } else {
                            if (c(i13)) {
                                materialButton2 = (MaterialButton) getChildAt(i13);
                                break;
                            }
                            i13--;
                        }
                    }
                    int allowedWidthDecrease = materialButton2 == null ? 0 : materialButton2.getAllowedWidthDecrease();
                    int childCount = getChildCount();
                    int i14 = i6 + 1;
                    while (true) {
                        if (i14 >= childCount) {
                            break;
                        }
                        if (c(i14)) {
                            materialButton = (MaterialButton) getChildAt(i14);
                            break;
                        }
                        i14++;
                    }
                    r5 = Math.min(max2, allowedWidthDecrease + (materialButton != null ? materialButton.getAllowedWidthDecrease() : 0));
                }
                if (i6 != firstVisibleChildIndex && i6 != lastVisibleChildIndex) {
                    r5 /= 2;
                }
                i5 = Math.min(i5, r5);
            }
        }
        int i15 = firstVisibleChildIndex;
        while (i15 <= lastVisibleChildIndex) {
            if (c(i15)) {
                ((MaterialButton) getChildAt(i15)).setSizeChange(this.F);
                ((MaterialButton) getChildAt(i15)).setWidthChangeMax((i15 == firstVisibleChildIndex || i15 == lastVisibleChildIndex) ? i5 : i5 * 2);
            }
            i15++;
        }
    }

    public final boolean c(int i5) {
        return getChildAt(i5).getVisibility() != 8;
    }

    public final void d() {
        for (int i5 = 0; i5 < getChildCount(); i5++) {
            MaterialButton materialButton = (MaterialButton) getChildAt(i5);
            LinearLayout.LayoutParams layoutParams = materialButton.S;
            if (layoutParams != null) {
                materialButton.setLayoutParams(layoutParams);
                materialButton.S = null;
                materialButton.P = -1.0f;
            }
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void dispatchDraw(Canvas canvas) {
        TreeMap treeMap = new TreeMap(this.f18368v);
        int childCount = getChildCount();
        for (int i5 = 0; i5 < childCount; i5++) {
            treeMap.put((MaterialButton) getChildAt(i5), Integer.valueOf(i5));
        }
        this.f18369w = (Integer[]) treeMap.values().toArray(new Integer[0]);
        super.dispatchDraw(canvas);
    }

    /* JADX WARN: Type inference failed for: r14v1, types: [int[][], java.io.Serializable, java.lang.Object] */
    /* JADX WARN: Type inference failed for: r7v2, types: [java.io.Serializable, lh.m[]] */
    public final void e() {
        y yVar;
        int i5;
        if (!(this.f18370x == null && this.f18371y == null) && this.G) {
            this.G = false;
            int childCount = getChildCount();
            int firstVisibleChildIndex = getFirstVisibleChildIndex();
            int lastVisibleChildIndex = getLastVisibleChildIndex();
            int i6 = 0;
            while (i6 < childCount) {
                MaterialButton materialButton = (MaterialButton) getChildAt(i6);
                if (materialButton.getVisibility() != 8) {
                    boolean z5 = i6 == firstVisibleChildIndex;
                    boolean z6 = i6 == lastVisibleChildIndex;
                    z zVar = this.f18371y;
                    if (zVar == null || (!z5 && !z6)) {
                        zVar = (z) this.f18366e.get(i6);
                    }
                    if (zVar == null) {
                        yVar = new y((m) this.f18365d.get(i6));
                    } else {
                        y yVar2 = new y(0);
                        int i10 = zVar.a;
                        yVar2.f14050b = i10;
                        yVar2.f14051c = zVar.f14058b;
                        int[][] iArr = zVar.f14059c;
                        ?? r14 = new int[iArr.length][];
                        yVar2.f14052d = r14;
                        m[] mVarArr = zVar.f14060d;
                        yVar2.f14053e = new m[mVarArr.length];
                        System.arraycopy(iArr, 0, r14, 0, i10);
                        System.arraycopy(mVarArr, 0, (m[]) yVar2.f14053e, 0, yVar2.f14050b);
                        yVar2.f14054f = zVar.f14061e;
                        yVar2.f14055g = zVar.f14062f;
                        yVar2.f14056h = zVar.f14063g;
                        yVar2.f14057i = zVar.f14064h;
                        yVar = yVar2;
                    }
                    boolean z7 = getOrientation() == 0;
                    boolean z8 = getLayoutDirection() == 1;
                    if (z7) {
                        i5 = z5 ? 5 : 0;
                        if (z6) {
                            i5 |= 10;
                        }
                        if (z8) {
                            i5 = ((i5 & 10) >> 1) | ((i5 & 5) << 1);
                        }
                    } else {
                        i5 = z5 ? 3 : 0;
                        if (z6) {
                            i5 |= 12;
                        }
                    }
                    int i11 = ~i5;
                    x xVar = this.f18370x;
                    if ((i11 | 1) == i11) {
                        yVar.f14054f = xVar;
                    }
                    if ((i11 | 2) == i11) {
                        yVar.f14055g = xVar;
                    }
                    if ((i11 | 4) == i11) {
                        yVar.f14056h = xVar;
                    }
                    if ((i11 | 8) == i11) {
                        yVar.f14057i = xVar;
                    }
                    z zVar2 = yVar.f14050b == 0 ? null : new z(yVar);
                    if (zVar2.d()) {
                        materialButton.setStateListShapeAppearanceModel(zVar2);
                    } else {
                        materialButton.setShapeAppearanceModel(zVar2.c());
                    }
                }
                i6++;
            }
        }
    }

    public b0 getButtonSizeChange() {
        return this.F;
    }

    @Override // android.view.ViewGroup
    public final int getChildDrawingOrder(int i5, int i6) {
        Integer[] numArr = this.f18369w;
        if (numArr != null && i6 < numArr.length) {
            return numArr[i6].intValue();
        }
        Log.w("MButtonGroup", "Child order wasn't updated");
        return i6;
    }

    @NonNull
    public lh.d getInnerCornerSize() {
        return this.f18370x.f14047b;
    }

    @NonNull
    public x getInnerCornerSizeStateList() {
        return this.f18370x;
    }

    public m getShapeAppearance() {
        z zVar = this.f18371y;
        if (zVar == null) {
            return null;
        }
        return zVar.c();
    }

    public int getSpacing() {
        return this.E;
    }

    public z getStateListShapeAppearance() {
        return this.f18371y;
    }

    @Override // android.widget.LinearLayout, android.view.ViewGroup, android.view.View
    public final void onLayout(boolean z5, int i5, int i6, int i10, int i11) {
        super.onLayout(z5, i5, i6, i10, i11);
        if (z5) {
            d();
            b();
        }
    }

    @Override // android.widget.LinearLayout, android.view.View
    public final void onMeasure(int i5, int i6) {
        e();
        a();
        super.onMeasure(i5, i6);
    }

    @Override // android.view.ViewGroup
    public final void onViewRemoved(View view) {
        super.onViewRemoved(view);
        if (view instanceof MaterialButton) {
            ((MaterialButton) view).setOnPressedChangeListenerInternal(null);
        }
        int indexOfChild = indexOfChild(view);
        if (indexOfChild >= 0) {
            this.f18365d.remove(indexOfChild);
            this.f18366e.remove(indexOfChild);
        }
        this.G = true;
        e();
        d();
        a();
    }

    public void setButtonSizeChange(@NonNull b0 b0Var) {
        if (this.F != b0Var) {
            this.F = b0Var;
            b();
            requestLayout();
            invalidate();
        }
    }

    @Override // android.view.View
    public void setEnabled(boolean z5) {
        super.setEnabled(z5);
        for (int i5 = 0; i5 < getChildCount(); i5++) {
            ((MaterialButton) getChildAt(i5)).setEnabled(z5);
        }
    }

    public void setInnerCornerSize(@NonNull lh.d dVar) {
        this.f18370x = x.b(dVar);
        this.G = true;
        e();
        invalidate();
    }

    public void setInnerCornerSizeStateList(@NonNull x xVar) {
        this.f18370x = xVar;
        this.G = true;
        e();
        invalidate();
    }

    @Override // android.widget.LinearLayout
    public void setOrientation(int i5) {
        if (getOrientation() != i5) {
            this.G = true;
        }
        super.setOrientation(i5);
    }

    public void setShapeAppearance(m mVar) {
        y yVar = new y(mVar);
        this.f18371y = yVar.f14050b == 0 ? null : new z(yVar);
        this.G = true;
        e();
        invalidate();
    }

    public void setSpacing(int i5) {
        this.E = i5;
        invalidate();
        requestLayout();
    }

    public void setStateListShapeAppearance(z zVar) {
        this.f18371y = zVar;
        this.G = true;
        e();
        invalidate();
    }
}
