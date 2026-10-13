package com.google.android.material.datepicker;

import android.R;
import android.content.Context;
import android.graphics.Canvas;
import android.graphics.Rect;
import android.util.AttributeSet;
import android.view.KeyEvent;
import android.view.View;
import android.widget.GridView;
import android.widget.ListAdapter;
import androidx.core.view.s0;

/* loaded from: classes3.dex */
final class MaterialCalendarGridView extends GridView {

    /* renamed from: d, reason: collision with root package name */
    public final boolean f6006d;

    public MaterialCalendarGridView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet, 0);
        y.c(null);
        if (n.w(getContext(), R.attr.windowFullscreen)) {
            setNextFocusLeftId(com.discord.R.id.cancel_button);
            setNextFocusRightId(com.discord.R.id.confirm_button);
        }
        this.f6006d = n.w(getContext(), com.discord.R.attr.nestedScrollable);
        s0.p(this, new g(2));
    }

    public final q a() {
        return (q) super.getAdapter();
    }

    @Override // android.widget.GridView, android.widget.AdapterView
    public final ListAdapter getAdapter() {
        return (q) super.getAdapter();
    }

    @Override // android.widget.AbsListView, android.view.ViewGroup, android.view.View
    public final void onAttachedToWindow() {
        super.onAttachedToWindow();
        ((q) super.getAdapter()).notifyDataSetChanged();
    }

    @Override // android.view.View
    public final void onDraw(Canvas canvas) {
        super.onDraw(canvas);
        q qVar = (q) super.getAdapter();
        qVar.getClass();
        int max = Math.max(qVar.a(), getFirstVisiblePosition());
        int min = Math.min(qVar.c(), getLastVisiblePosition());
        qVar.getItem(max);
        qVar.getItem(min);
        throw null;
    }

    @Override // android.widget.GridView, android.widget.AbsListView, android.view.View
    public final void onFocusChanged(boolean z5, int i5, Rect rect) {
        if (!z5) {
            super.onFocusChanged(false, i5, rect);
            return;
        }
        if (i5 == 33) {
            setSelection(((q) super.getAdapter()).c());
        } else if (i5 == 130) {
            setSelection(((q) super.getAdapter()).a());
        } else {
            super.onFocusChanged(true, i5, rect);
        }
    }

    @Override // android.widget.GridView, android.widget.AbsListView, android.view.View, android.view.KeyEvent.Callback
    public final boolean onKeyDown(int i5, KeyEvent keyEvent) {
        if (!super.onKeyDown(i5, keyEvent)) {
            return false;
        }
        int selectedItemPosition = getSelectedItemPosition();
        if (selectedItemPosition == -1 || (selectedItemPosition >= ((q) super.getAdapter()).a() && selectedItemPosition <= ((q) super.getAdapter()).c())) {
            return true;
        }
        if (19 != i5) {
            return false;
        }
        setSelection(((q) super.getAdapter()).a());
        return true;
    }

    @Override // android.widget.GridView, android.widget.AbsListView, android.view.View
    public final void onMeasure(int i5, int i6) {
        if (!this.f6006d) {
            super.onMeasure(i5, i6);
            return;
        }
        super.onMeasure(i5, View.MeasureSpec.makeMeasureSpec(16777215, Integer.MIN_VALUE));
        getLayoutParams().height = getMeasuredHeight();
    }

    @Override // android.widget.GridView, android.widget.AdapterView
    public final void setSelection(int i5) {
        if (i5 < ((q) super.getAdapter()).a()) {
            super.setSelection(((q) super.getAdapter()).a());
        } else {
            super.setSelection(i5);
        }
    }

    @Override // android.widget.GridView, android.widget.AdapterView
    /* renamed from: getAdapter, reason: avoid collision after fix types in other method */
    public final ListAdapter getAdapter2() {
        return (q) super.getAdapter();
    }

    @Override // android.widget.AdapterView
    public final void setAdapter(ListAdapter listAdapter) {
        if (!(listAdapter instanceof q)) {
            throw new IllegalArgumentException(String.format("%1$s must have its Adapter set to a %2$s", MaterialCalendarGridView.class.getCanonicalName(), q.class.getCanonicalName()));
        }
        super.setAdapter(listAdapter);
    }
}
