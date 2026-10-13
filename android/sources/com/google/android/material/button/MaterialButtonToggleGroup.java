package com.google.android.material.button;

import android.content.Context;
import android.content.res.TypedArray;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.util.Log;
import android.view.View;
import android.view.ViewGroup;
import android.view.accessibility.AccessibilityNodeInfo;
import android.widget.RadioButton;
import android.widget.ToggleButton;
import androidx.annotation.NonNull;
import androidx.core.view.accessibility.AccessibilityNodeInfoCompat;
import androidx.core.view.s0;
import ch.q;
import com.discord.R;
import com.google.android.material.timepicker.i;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashSet;
import java.util.Iterator;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Set;
import lh.x;
import ph.a;
import tg.c;

/* loaded from: classes3.dex */
public class MaterialButtonToggleGroup extends c {
    public static final /* synthetic */ int N = 0;
    public final LinkedHashSet H;
    public boolean I;
    public boolean J;
    public boolean K;
    public final int L;
    public HashSet M;

    public MaterialButtonToggleGroup(@NonNull Context context, AttributeSet attributeSet) {
        super(a.a(context, attributeSet, R.attr.materialButtonToggleGroupStyle, R.style.Widget_MaterialComponents_MaterialButtonToggleGroup), attributeSet);
        this.H = new LinkedHashSet();
        this.I = false;
        this.M = new HashSet();
        TypedArray f2 = q.f(getContext(), attributeSet, lg.a.f13969t, R.attr.materialButtonToggleGroupStyle, R.style.Widget_MaterialComponents_MaterialButtonToggleGroup, new int[0]);
        setSingleSelection(f2.getBoolean(7, false));
        this.L = f2.getResourceId(2, -1);
        this.K = f2.getBoolean(4, false);
        if (this.f18370x == null) {
            this.f18370x = x.b(new lh.a(0.0f));
        }
        setEnabled(f2.getBoolean(0, true));
        f2.recycle();
        setImportantForAccessibility(1);
    }

    @NonNull
    private String getChildrenA11yClassName() {
        return (this.J ? RadioButton.class : ToggleButton.class).getName();
    }

    private int getVisibleButtonCount() {
        int i5 = 0;
        for (int i6 = 0; i6 < getChildCount(); i6++) {
            if ((getChildAt(i6) instanceof MaterialButton) && getChildAt(i6).getVisibility() != 8) {
                i5++;
            }
        }
        return i5;
    }

    private void setupButtonChild(@NonNull MaterialButton materialButton) {
        materialButton.setMaxLines(1);
        materialButton.setEllipsize(TextUtils.TruncateAt.END);
        materialButton.setCheckable(true);
        materialButton.setA11yClassName(getChildrenA11yClassName());
    }

    @Override // tg.c, android.view.ViewGroup
    public final void addView(View view, int i5, ViewGroup.LayoutParams layoutParams) {
        if (!(view instanceof MaterialButton)) {
            Log.e("MButtonToggleGroup", "Child views must be of type MaterialButton.");
            return;
        }
        super.addView(view, i5, layoutParams);
        MaterialButton materialButton = (MaterialButton) view;
        setupButtonChild(materialButton);
        f(materialButton.getId(), materialButton.L);
        s0.p(materialButton, new ch.a(5, this));
    }

    public final void f(int i5, boolean z5) {
        if (i5 == -1) {
            Log.e("MButtonToggleGroup", "Button ID is not valid: " + i5);
            return;
        }
        HashSet hashSet = new HashSet(this.M);
        if (z5 && !hashSet.contains(Integer.valueOf(i5))) {
            if (this.J && !hashSet.isEmpty()) {
                hashSet.clear();
            }
            hashSet.add(Integer.valueOf(i5));
        } else {
            if (z5 || !hashSet.contains(Integer.valueOf(i5))) {
                return;
            }
            if (!this.K || hashSet.size() > 1) {
                hashSet.remove(Integer.valueOf(i5));
            }
        }
        g(hashSet);
    }

    public final void g(Set set) {
        HashSet hashSet = this.M;
        this.M = new HashSet(set);
        for (int i5 = 0; i5 < getChildCount(); i5++) {
            int id2 = ((MaterialButton) getChildAt(i5)).getId();
            boolean contains = set.contains(Integer.valueOf(id2));
            View findViewById = findViewById(id2);
            if (findViewById instanceof MaterialButton) {
                this.I = true;
                ((MaterialButton) findViewById).setChecked(contains);
                this.I = false;
            }
            if (hashSet.contains(Integer.valueOf(id2)) != set.contains(Integer.valueOf(id2))) {
                set.contains(Integer.valueOf(id2));
                Iterator it = this.H.iterator();
                while (it.hasNext()) {
                    ((i) it.next()).a();
                }
            }
        }
        invalidate();
    }

    public int getCheckedButtonId() {
        if (!this.J || this.M.isEmpty()) {
            return -1;
        }
        return ((Integer) this.M.iterator().next()).intValue();
    }

    @NonNull
    public List<Integer> getCheckedButtonIds() {
        ArrayList arrayList = new ArrayList();
        for (int i5 = 0; i5 < getChildCount(); i5++) {
            int id2 = ((MaterialButton) getChildAt(i5)).getId();
            if (this.M.contains(Integer.valueOf(id2))) {
                arrayList.add(Integer.valueOf(id2));
            }
        }
        return arrayList;
    }

    @Override // android.view.View
    public final void onFinishInflate() {
        super.onFinishInflate();
        int i5 = this.L;
        if (i5 != -1) {
            g(Collections.singleton(Integer.valueOf(i5)));
        }
    }

    @Override // android.view.View
    public final void onInitializeAccessibilityNodeInfo(AccessibilityNodeInfo accessibilityNodeInfo) {
        super.onInitializeAccessibilityNodeInfo(accessibilityNodeInfo);
        new AccessibilityNodeInfoCompat(accessibilityNodeInfo).a.setCollectionInfo(AccessibilityNodeInfo.CollectionInfo.obtain(1, getVisibleButtonCount(), false, this.J ? 1 : 2));
    }

    public void setSelectionRequired(boolean z5) {
        this.K = z5;
    }

    public void setSingleSelection(boolean z5) {
        if (this.J != z5) {
            this.J = z5;
            g(new HashSet());
        }
        String childrenA11yClassName = getChildrenA11yClassName();
        for (int i5 = 0; i5 < getChildCount(); i5++) {
            ((MaterialButton) getChildAt(i5)).setA11yClassName(childrenA11yClassName);
        }
    }

    public void setSingleSelection(int i5) {
        setSingleSelection(getResources().getBoolean(i5));
    }
}
