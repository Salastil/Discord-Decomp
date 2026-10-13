package androidx.constraintlayout.widget;

import android.content.Context;
import android.content.res.Resources;
import android.content.res.TypedArray;
import android.graphics.Canvas;
import android.util.AttributeSet;
import android.util.Log;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewParent;
import androidx.constraintlayout.core.widgets.ConstraintWidget;
import androidx.constraintlayout.widget.ConstraintLayout;
import com.facebook.react.devsupport.StackTraceHelper;
import java.util.Arrays;
import java.util.HashMap;

/* loaded from: classes.dex */
public abstract class b extends View {

    /* renamed from: d, reason: collision with root package name */
    public int[] f1326d;

    /* renamed from: e, reason: collision with root package name */
    public int f1327e;

    /* renamed from: i, reason: collision with root package name */
    public Context f1328i;

    /* renamed from: v, reason: collision with root package name */
    public r0.g f1329v;

    /* renamed from: w, reason: collision with root package name */
    public String f1330w;

    /* renamed from: x, reason: collision with root package name */
    public String f1331x;

    /* renamed from: y, reason: collision with root package name */
    public HashMap f1332y;

    public b(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.f1326d = new int[32];
        this.f1332y = new HashMap();
        this.f1328i = context;
        h(attributeSet);
    }

    public final void a(String str) {
        Context context = this.f1328i;
        if (str == null || str.length() == 0 || context == null) {
            return;
        }
        String trim = str.trim();
        if (getParent() instanceof ConstraintLayout) {
        }
        ConstraintLayout constraintLayout = getParent() instanceof ConstraintLayout ? (ConstraintLayout) getParent() : null;
        int i5 = 0;
        if (isInEditMode() && constraintLayout != null) {
            Object designInformation = constraintLayout.getDesignInformation(0, trim);
            if (designInformation instanceof Integer) {
                i5 = ((Integer) designInformation).intValue();
            }
        }
        if (i5 == 0 && constraintLayout != null) {
            i5 = g(constraintLayout, trim);
        }
        if (i5 == 0) {
            try {
                i5 = l.class.getField(trim).getInt(null);
            } catch (Exception unused) {
            }
        }
        if (i5 == 0) {
            i5 = context.getResources().getIdentifier(trim, StackTraceHelper.ID_KEY, context.getPackageName());
        }
        if (i5 != 0) {
            this.f1332y.put(Integer.valueOf(i5), trim);
            b(i5);
        } else {
            Log.w("ConstraintHelper", "Could not find id of \"" + trim + "\"");
        }
    }

    public final void b(int i5) {
        if (i5 == getId()) {
            return;
        }
        int i6 = this.f1327e + 1;
        int[] iArr = this.f1326d;
        if (i6 > iArr.length) {
            this.f1326d = Arrays.copyOf(iArr, iArr.length * 2);
        }
        int[] iArr2 = this.f1326d;
        int i10 = this.f1327e;
        iArr2[i10] = i5;
        this.f1327e = i10 + 1;
    }

    public final void c(String str) {
        if (str == null || str.length() == 0 || this.f1328i == null) {
            return;
        }
        String trim = str.trim();
        ConstraintLayout constraintLayout = getParent() instanceof ConstraintLayout ? (ConstraintLayout) getParent() : null;
        if (constraintLayout == null) {
            Log.w("ConstraintHelper", "Parent not a ConstraintLayout");
            return;
        }
        int childCount = constraintLayout.getChildCount();
        for (int i5 = 0; i5 < childCount; i5++) {
            View childAt = constraintLayout.getChildAt(i5);
            ViewGroup.LayoutParams layoutParams = childAt.getLayoutParams();
            if ((layoutParams instanceof ConstraintLayout.LayoutParams) && trim.equals(((ConstraintLayout.LayoutParams) layoutParams).X)) {
                if (childAt.getId() == -1) {
                    Log.w("ConstraintHelper", "to use ConstraintTag view " + childAt.getClass().getSimpleName() + " must have an ID");
                } else {
                    b(childAt.getId());
                }
            }
        }
    }

    public final void d() {
        ViewParent parent = getParent();
        if (parent == null || !(parent instanceof ConstraintLayout)) {
            return;
        }
        e((ConstraintLayout) parent);
    }

    public final void e(ConstraintLayout constraintLayout) {
        int visibility = getVisibility();
        float elevation = getElevation();
        for (int i5 = 0; i5 < this.f1327e; i5++) {
            View viewById = constraintLayout.getViewById(this.f1326d[i5]);
            if (viewById != null) {
                viewById.setVisibility(visibility);
                if (elevation > 0.0f) {
                    viewById.setTranslationZ(viewById.getTranslationZ() + elevation);
                }
            }
        }
    }

    public void f(ConstraintLayout constraintLayout) {
    }

    public final int g(ConstraintLayout constraintLayout, String str) {
        Resources resources;
        String str2;
        if (str != null && (resources = this.f1328i.getResources()) != null) {
            int childCount = constraintLayout.getChildCount();
            for (int i5 = 0; i5 < childCount; i5++) {
                View childAt = constraintLayout.getChildAt(i5);
                if (childAt.getId() != -1) {
                    try {
                        str2 = resources.getResourceEntryName(childAt.getId());
                    } catch (Resources.NotFoundException unused) {
                        str2 = null;
                    }
                    if (str.equals(str2)) {
                        return childAt.getId();
                    }
                }
            }
        }
        return 0;
    }

    public int[] getReferencedIds() {
        return Arrays.copyOf(this.f1326d, this.f1327e);
    }

    public void h(AttributeSet attributeSet) {
        if (attributeSet != null) {
            TypedArray obtainStyledAttributes = getContext().obtainStyledAttributes(attributeSet, m.f1413b);
            int indexCount = obtainStyledAttributes.getIndexCount();
            for (int i5 = 0; i5 < indexCount; i5++) {
                int index = obtainStyledAttributes.getIndex(i5);
                if (index == 35) {
                    String string = obtainStyledAttributes.getString(index);
                    this.f1330w = string;
                    setIds(string);
                } else if (index == 36) {
                    String string2 = obtainStyledAttributes.getString(index);
                    this.f1331x = string2;
                    setReferenceTags(string2);
                }
            }
            obtainStyledAttributes.recycle();
        }
    }

    public void i(ConstraintWidget constraintWidget, boolean z5) {
    }

    public final void k() {
        if (this.f1329v == null) {
            return;
        }
        ViewGroup.LayoutParams layoutParams = getLayoutParams();
        if (layoutParams instanceof ConstraintLayout.LayoutParams) {
            ((ConstraintLayout.LayoutParams) layoutParams).f1292o0 = this.f1329v;
        }
    }

    @Override // android.view.View
    public void onAttachedToWindow() {
        super.onAttachedToWindow();
        String str = this.f1330w;
        if (str != null) {
            setIds(str);
        }
        String str2 = this.f1331x;
        if (str2 != null) {
            setReferenceTags(str2);
        }
    }

    @Override // android.view.View
    public final void onDraw(Canvas canvas) {
    }

    @Override // android.view.View
    public void onMeasure(int i5, int i6) {
        setMeasuredDimension(0, 0);
    }

    public void setIds(String str) {
        this.f1330w = str;
        if (str == null) {
            return;
        }
        int i5 = 0;
        this.f1327e = 0;
        while (true) {
            int indexOf = str.indexOf(44, i5);
            if (indexOf == -1) {
                a(str.substring(i5));
                return;
            } else {
                a(str.substring(i5, indexOf));
                i5 = indexOf + 1;
            }
        }
    }

    public void setReferenceTags(String str) {
        this.f1331x = str;
        if (str == null) {
            return;
        }
        int i5 = 0;
        this.f1327e = 0;
        while (true) {
            int indexOf = str.indexOf(44, i5);
            if (indexOf == -1) {
                c(str.substring(i5));
                return;
            } else {
                c(str.substring(i5, indexOf));
                i5 = indexOf + 1;
            }
        }
    }

    public void setReferencedIds(int[] iArr) {
        this.f1330w = null;
        this.f1327e = 0;
        for (int i5 : iArr) {
            b(i5);
        }
    }

    @Override // android.view.View
    public final void setTag(int i5, Object obj) {
        super.setTag(i5, obj);
        if (obj == null && this.f1330w == null) {
            b(i5);
        }
    }

    public void j() {
    }
}
