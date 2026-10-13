package com.google.android.material.timepicker;

import android.content.Context;
import android.content.res.ColorStateList;
import android.content.res.TypedArray;
import android.os.Handler;
import android.util.AttributeSet;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import androidx.constraintlayout.widget.ConstraintLayout;
import com.discord.R;

/* loaded from: classes3.dex */
public abstract class h extends ConstraintLayout {

    /* renamed from: d, reason: collision with root package name */
    public final g f6164d;

    /* renamed from: e, reason: collision with root package name */
    public int f6165e;

    /* renamed from: i, reason: collision with root package name */
    public final lh.i f6166i;

    /* JADX WARN: Type inference failed for: r6v2, types: [com.google.android.material.timepicker.g] */
    public h(Context context, AttributeSet attributeSet) {
        super(context, attributeSet, R.attr.materialClockStyle);
        LayoutInflater.from(context).inflate(R.layout.material_radial_view_group, this);
        lh.i iVar = new lh.i();
        this.f6166i = iVar;
        lh.j jVar = new lh.j(0.5f);
        lh.l g6 = iVar.f14001e.a.g();
        g6.f14010e = jVar;
        g6.f14011f = jVar;
        g6.f14012g = jVar;
        g6.f14013h = jVar;
        iVar.setShapeAppearanceModel(g6.a());
        this.f6166i.q(ColorStateList.valueOf(-1));
        setBackground(this.f6166i);
        TypedArray obtainStyledAttributes = context.obtainStyledAttributes(attributeSet, lg.a.H, R.attr.materialClockStyle, 0);
        this.f6165e = obtainStyledAttributes.getDimensionPixelSize(0, 0);
        this.f6164d = new Runnable() { // from class: com.google.android.material.timepicker.g
            @Override // java.lang.Runnable
            public final void run() {
                h.this.c();
            }
        };
        obtainStyledAttributes.recycle();
    }

    @Override // android.view.ViewGroup
    public final void addView(View view, int i5, ViewGroup.LayoutParams layoutParams) {
        super.addView(view, i5, layoutParams);
        if (view.getId() == -1) {
            view.setId(View.generateViewId());
        }
        Handler handler = getHandler();
        if (handler != null) {
            g gVar = this.f6164d;
            handler.removeCallbacks(gVar);
            handler.post(gVar);
        }
    }

    public abstract void c();

    @Override // android.view.View
    public final void onFinishInflate() {
        super.onFinishInflate();
        c();
    }

    @Override // androidx.constraintlayout.widget.ConstraintLayout, android.view.ViewGroup
    public final void onViewRemoved(View view) {
        super.onViewRemoved(view);
        Handler handler = getHandler();
        if (handler != null) {
            g gVar = this.f6164d;
            handler.removeCallbacks(gVar);
            handler.post(gVar);
        }
    }

    @Override // android.view.View
    public final void setBackgroundColor(int i5) {
        this.f6166i.q(ColorStateList.valueOf(i5));
    }
}
